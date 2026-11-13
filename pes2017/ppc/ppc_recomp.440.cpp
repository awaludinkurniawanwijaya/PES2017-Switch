#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_837BA1C0"))) PPC_WEAK_FUNC(sub_837BA1C0);
PPC_FUNC_IMPL(__imp__sub_837BA1C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837BA1C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ba24c
	if (!cr6.eq) goto loc_837BA24C;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_837BA200:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837ba21c
	if (cr6.eq) goto loc_837BA21C;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x837ba228
	goto loc_837BA228;
loc_837BA21C:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_837BA228:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837ba23c
	if (cr6.eq) goto loc_837BA23C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837ba240
	goto loc_837BA240;
loc_837BA23C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_837BA240:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837ba200
	if (cr6.eq) goto loc_837BA200;
loc_837BA24C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ba2ac
	if (cr6.eq) goto loc_837BA2AC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x837ba2a4
	if (!cr6.eq) goto loc_837BA2A4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83587190
	ctx.lr = 0x837BA288;
	sub_83587190(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837BA2A4:
	// bl 0x833e7410
	ctx.lr = 0x837BA2A8;
	sub_833E7410(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_837BA2AC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837ba2f0
	if (!cr6.lt) goto loc_837BA2F0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83587190
	ctx.lr = 0x837BA2D4;
	sub_83587190(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837BA2F0:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837BA304;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BA31C"))) PPC_WEAK_FUNC(sub_837BA31C);
PPC_FUNC_IMPL(__imp__sub_837BA31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BA320"))) PPC_WEAK_FUNC(sub_837BA320);
PPC_FUNC_IMPL(__imp__sub_837BA320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837BA328;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837ba3ac
	if (!cr6.eq) goto loc_837BA3AC;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_837BA360:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x837ba37c
	if (cr6.eq) goto loc_837BA37C;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x837ba388
	goto loc_837BA388;
loc_837BA37C:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_837BA388:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837ba39c
	if (cr6.eq) goto loc_837BA39C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837ba3a0
	goto loc_837BA3A0;
loc_837BA39C:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_837BA3A0:
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837ba360
	if (cr6.eq) goto loc_837BA360;
loc_837BA3AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ba40c
	if (cr6.eq) goto loc_837BA40C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x837ba404
	if (!cr6.eq) goto loc_837BA404;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x837b9f68
	ctx.lr = 0x837BA3E8;
	sub_837B9F68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837BA404:
	// bl 0x82dbc1d0
	ctx.lr = 0x837BA408;
	sub_82DBC1D0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_837BA40C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x837ba450
	if (!cr6.lt) goto loc_837BA450;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b9f68
	ctx.lr = 0x837BA434;
	sub_837B9F68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837BA450:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837BA464;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BA47C"))) PPC_WEAK_FUNC(sub_837BA47C);
PPC_FUNC_IMPL(__imp__sub_837BA47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BA480"))) PPC_WEAK_FUNC(sub_837BA480);
PPC_FUNC_IMPL(__imp__sub_837BA480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,97(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837ba4c0
	if (!cr6.eq) goto loc_837BA4C0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_837BA498:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x837ba4ac
	if (!cr6.lt) goto loc_837BA4AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x837ba4b4
	goto loc_837BA4B4;
loc_837BA4AC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837BA4B4:
	// lbz r8,97(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837ba498
	if (cr6.eq) goto loc_837BA498;
loc_837BA4C0:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x837ba4f0
	if (cr6.eq) goto loc_837BA4F0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x837ba4f0
	if (cr6.lt) goto loc_837BA4F0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_837BA4F0:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BA504"))) PPC_WEAK_FUNC(sub_837BA504);
PPC_FUNC_IMPL(__imp__sub_837BA504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BA508"))) PPC_WEAK_FUNC(sub_837BA508);
PPC_FUNC_IMPL(__imp__sub_837BA508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837BA510;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x837ba55c
	if (!cr6.eq) goto loc_837BA55C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x837ba55c
	if (!cr6.eq) goto loc_837BA55C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x837ba168
	ctx.lr = 0x837BA544;
	sub_837BA168(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837BA55C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x837ba58c
	if (cr6.eq) goto loc_837BA58C;
loc_837BA564:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82c5dbe8
	ctx.lr = 0x837BA570;
	sub_82C5DBE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b9b40
	ctx.lr = 0x837BA580;
	sub_837B9B40(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x837ba564
	if (!cr6.eq) goto loc_837BA564;
loc_837BA58C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BA59C"))) PPC_WEAK_FUNC(sub_837BA59C);
PPC_FUNC_IMPL(__imp__sub_837BA59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BA5A0"))) PPC_WEAK_FUNC(sub_837BA5A0);
PPC_FUNC_IMPL(__imp__sub_837BA5A0) {
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
	// clrlwi r11,r4,14
	ctx.r11.u64 = ctx.r4.u32 & 0x3FFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x833ecc50
	ctx.lr = 0x837BA5CC;
	sub_833ECC50(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837ba5e4
	if (!cr6.eq) goto loc_837BA5E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_837BA5E4:
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

__attribute__((alias("__imp__sub_837BA5F8"))) PPC_WEAK_FUNC(sub_837BA5F8);
PPC_FUNC_IMPL(__imp__sub_837BA5F8) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837ba480
	ctx.lr = 0x837BA620;
	sub_837BA480(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837ba638
	if (cr6.eq) goto loc_837BA638;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_837BA638:
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

__attribute__((alias("__imp__sub_837BA64C"))) PPC_WEAK_FUNC(sub_837BA64C);
PPC_FUNC_IMPL(__imp__sub_837BA64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BA650"))) PPC_WEAK_FUNC(sub_837BA650);
PPC_FUNC_IMPL(__imp__sub_837BA650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x837BA658;
	__savegprlr_21(ctx, base);
	// stwu r1,-1504(r1)
	ea = -1504 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,1588(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1588);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r26.u16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// sth r26,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r26.u16);
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837baa2c
	if (cr6.eq) goto loc_837BAA2C;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837baa2c
	if (cr6.eq) goto loc_837BAA2C;
	// clrlwi r22,r7,24
	ctx.r22.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x837baa2c
	if (cr6.eq) goto loc_837BAA2C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82ae4800
	ctx.lr = 0x837BA6B0;
	sub_82AE4800(ctx, base);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x831156e8
	ctx.lr = 0x837BA6B8;
	sub_831156E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837ba760
	if (cr6.eq) goto loc_837BA760;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ba6e4
	if (cr6.eq) goto loc_837BA6E4;
	// bl 0x83115808
	ctx.lr = 0x837BA6D4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x837ba6e8
	if (!cr6.eq) goto loc_837BA6E8;
loc_837BA6E4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_837BA6E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ba728
	if (cr6.eq) goto loc_837BA728;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x837BA704;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ace470
	ctx.lr = 0x837BA710;
	sub_82ACE470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,880(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 880);
	// bl 0x8311c628
	ctx.lr = 0x837BA71C;
	sub_8311C628(ctx, base);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r29,r10,28,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// b 0x837ba75c
	goto loc_837BA75C;
loc_837BA728:
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837ba760
	if (cr6.eq) goto loc_837BA760;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b6f8
	ctx.lr = 0x837BA740;
	sub_8312B6F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ace470
	ctx.lr = 0x837BA74C;
	sub_82ACE470(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312b730
	ctx.lr = 0x837BA758;
	sub_8312B730(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_837BA75C:
	// li r30,1
	ctx.r30.s64 = 1;
loc_837BA760:
	// cmplwi cr6,r25,8
	cr6.compare<uint32_t>(ctx.r25.u32, 8, xer);
	// bgt cr6,0x837ba7e0
	if (cr6.gt) goto loc_837BA7E0;
	// beq cr6,0x837ba7b8
	if (cr6.eq) goto loc_837BA7B8;
	// addi r11,r25,-2
	ctx.r11.s64 = ctx.r25.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x837ba7f0
	if (cr6.gt) goto loc_837BA7F0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x837ba790
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837BA790;
	// bdzf 4*cr6+eq,0x837ba790
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837BA790;
	// bdzf 4*cr6+eq,0x837baa2c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_837BAA2C;
	// bne cr6,0x837baa2c
	if (!cr6.eq) goto loc_837BAA2C;
loc_837BA790:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ba7f0
	if (cr6.eq) goto loc_837BA7F0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x837ba7f0
	if (cr6.eq) goto loc_837BA7F0;
	// lwz r11,892(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// b 0x837ba7ec
	goto loc_837BA7EC;
loc_837BA7B8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ba7f0
	if (cr6.eq) goto loc_837BA7F0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x837ba7f0
	if (cr6.eq) goto loc_837BA7F0;
	// lwz r11,892(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// b 0x837ba7ec
	goto loc_837BA7EC;
loc_837BA7E0:
	// cmplwi cr6,r25,48
	cr6.compare<uint32_t>(ctx.r25.u32, 48, xer);
	// beq cr6,0x837baa2c
	if (cr6.eq) goto loc_837BAA2C;
	// cmplwi cr6,r25,91
	cr6.compare<uint32_t>(ctx.r25.u32, 91, xer);
loc_837BA7EC:
	// beq cr6,0x837baa2c
	if (cr6.eq) goto loc_837BAA2C;
loc_837BA7F0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837ba848
	if (cr6.eq) goto loc_837BA848;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// beq cr6,0x837ba838
	if (cr6.eq) goto loc_837BA838;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// beq cr6,0x837ba828
	if (cr6.eq) goto loc_837BA828;
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(ctx.r22.s32, 3, xer);
	// bne cr6,0x837baa2c
	if (!cr6.eq) goto loc_837BAA2C;
	// li r11,300
	ctx.r11.s64 = 300;
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// sth r11,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA828:
	// li r11,300
	ctx.r11.s64 = 300;
	// sth r11,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA838:
	// li r11,300
	ctx.r11.s64 = 300;
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA848:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-12368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12368);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8311c728
	ctx.lr = 0x837BA860;
	sub_8311C728(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x837ba5a0
	ctx.lr = 0x837BA870;
	sub_837BA5A0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r9,r11,-28448
	ctx.r9.s64 = ctx.r11.s64 + -28448;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_837BA880:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// beq cr6,0x837ba8a4
	if (cr6.eq) goto loc_837BA8A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x837ba880
	if (cr6.lt) goto loc_837BA880;
	// li r8,-1
	ctx.r8.s64 = -1;
	// b 0x837ba8f0
	goto loc_837BA8F0;
loc_837BA8A4:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837ba8f0
	if (cr6.lt) goto loc_837BA8F0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bge cr6,0x837ba8c8
	if (!cr6.lt) goto loc_837BA8C8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lhzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// b 0x837ba8cc
	goto loc_837BA8CC;
loc_837BA8C8:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_837BA8CC:
	// sth r10,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r10.u16);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bge cr6,0x837ba8e8
	if (!cr6.lt) goto loc_837BA8E8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,6
	ctx.r10.s64 = ctx.r9.s64 + 6;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// b 0x837ba8ec
	goto loc_837BA8EC;
loc_837BA8E8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_837BA8EC:
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
loc_837BA8F0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837baa2c
	if (cr6.eq) goto loc_837BAA2C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x837ba984
	if (cr6.lt) goto loc_837BA984;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// beq cr6,0x837ba94c
	if (cr6.eq) goto loc_837BA94C;
	// cmplwi cr6,r25,3
	cr6.compare<uint32_t>(ctx.r25.u32, 3, xer);
	// beq cr6,0x837ba934
	if (cr6.eq) goto loc_837BA934;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(ctx.r25.u32, 4, xer);
	// bne cr6,0x837baa2c
	if (!cr6.eq) goto loc_837BAA2C;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837baa2c
	if (cr6.eq) goto loc_837BAA2C;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// sth r11,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA934:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x837baa2c
	if (!cr6.eq) goto loc_837BAA2C;
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA94C:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x837ba964
	if (cr6.eq) goto loc_837BA964;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x837ba968
	if (!cr6.eq) goto loc_837BA968;
	// li r11,18
	ctx.r11.s64 = 18;
loc_837BA964:
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
loc_837BA968:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837baa2c
	if (cr6.eq) goto loc_837BAA2C;
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
	// sth r11,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA984:
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// beq cr6,0x837baa04
	if (cr6.eq) goto loc_837BAA04;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(ctx.r22.s32, 2, xer);
	// beq cr6,0x837ba9d4
	if (cr6.eq) goto loc_837BA9D4;
	// cmpwi cr6,r22,3
	cr6.compare<int32_t>(ctx.r22.s32, 3, xer);
	// bne cr6,0x837baa2c
	if (!cr6.eq) goto loc_837BAA2C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x837ba9bc
	if (!cr6.eq) goto loc_837BA9BC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// sth r10,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r10.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA9BC:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// sth r10,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r10.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA9D4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x837ba9f0
	if (!cr6.eq) goto loc_837BA9F0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BA9F0:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BAA04:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x837baa20
	if (!cr6.eq) goto loc_837BAA20;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_837BAA20:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
loc_837BAA2C:
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BAA34"))) PPC_WEAK_FUNC(sub_837BAA34);
PPC_FUNC_IMPL(__imp__sub_837BAA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BAA38"))) PPC_WEAK_FUNC(sub_837BAA38);
PPC_FUNC_IMPL(__imp__sub_837BAA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837BAA40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8257fad0
	ctx.lr = 0x837BAA5C;
	sub_8257FAD0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837baa88
	if (cr6.eq) goto loc_837BAA88;
loc_837BAA6C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,172(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x837baa88
	if (cr6.eq) goto loc_837BAA88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837baa6c
	if (!cr6.eq) goto loc_837BAA6C;
loc_837BAA88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837BAAA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8257fb60
	ctx.lr = 0x837BAAB4;
	sub_8257FB60(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837baac8
	if (cr6.eq) goto loc_837BAAC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x83103100
	ctx.lr = 0x837BAAC8;
	sub_83103100(ctx, base);
loc_837BAAC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BAAD0"))) PPC_WEAK_FUNC(sub_837BAAD0);
PPC_FUNC_IMPL(__imp__sub_837BAAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837BAAD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837bab68
	if (cr6.eq) goto loc_837BAB68;
	// rlwinm r11,r5,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r30,r5,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpld cr6,r11,r5
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r5.u64, xer);
	// bne cr6,0x837bab60
	if (!cr6.eq) goto loc_837BAB60;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837bab60
	if (cr6.eq) goto loc_837BAB60;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
	// addi r31,r4,-8
	ctx.r31.s64 = ctx.r4.s64 + -8;
loc_837BAB08:
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lbz r10,13(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// lbz r8,15(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// lwzu r7,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// bl 0x83818130
	ctx.lr = 0x837BAB44;
	sub_83818130(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x837ba1c0
	ctx.lr = 0x837BAB58;
	sub_837BA1C0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x837bab08
	if (!cr0.eq) goto loc_837BAB08;
loc_837BAB60:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,64(r28)
	PPC_STORE_U8(ctx.r28.u32 + 64, ctx.r11.u8);
loc_837BAB68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BAB70"))) PPC_WEAK_FUNC(sub_837BAB70);
PPC_FUNC_IMPL(__imp__sub_837BAB70) {
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
	ctx.lr = 0x837BAB78;
	__savegprlr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837baf50
	if (cr6.eq) goto loc_837BAF50;
	// li r11,85
	ctx.r11.s64 = 85;
	// li r28,1
	ctx.r28.s64 = 1;
	// divdu r18,r5,r11
	ctx.r18.u64 = PPCDivide(ctx.r5.u64, ctx.r11.u64);
	// mulli r10,r18,85
	ctx.r10.s64 = ctx.r18.s64 * 85;
	// cmpld cr6,r10,r5
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r5.u64, xer);
	// bne cr6,0x837baf4c
	if (!cr6.eq) goto loc_837BAF4C;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpldi cr6,r18,0
	cr6.compare<uint64_t>(ctx.r18.u64, 0, xer);
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// ble cr6,0x837baf4c
	if (!cr6.gt) goto loc_837BAF4C;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r21,2
	ctx.r21.s64 = 2;
	// li r30,10
	ctx.r30.s64 = 10;
	// li r24,137
	ctx.r24.s64 = 137;
	// li r31,255
	ctx.r31.s64 = 255;
	// li r29,9
	ctx.r29.s64 = 9;
loc_837BABC8:
	// lwz r22,0(r23)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r22,8
	cr6.compare<uint32_t>(ctx.r22.u32, 8, xer);
	// bge cr6,0x837baf38
	if (!cr6.lt) goto loc_837BAF38;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_837BABD8:
	// addi r11,r10,254
	ctx.r11.s64 = ctx.r10.s64 + 254;
	// addi r9,r10,255
	ctx.r9.s64 = ctx.r10.s64 + 255;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// subfc r6,r30,r8
	xer.ca = ctx.r8.u32 >= ctx.r30.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r3,r30,r7
	xer.ca = ctx.r7.u32 >= ctx.r30.u32;
	ctx.r3.s64 = ctx.r7.s64 - ctx.r30.s64;
	// and r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 & ctx.r8.u64;
	// subfe r6,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r9,r8,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7F8;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// subfc r3,r30,r4
	xer.ca = ctx.r4.u32 >= ctx.r30.u32;
	ctx.r3.s64 = ctx.r4.s64 - ctx.r30.s64;
	// rlwinm r8,r5,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x7F8;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stb r25,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r25.u8);
	// subfe r3,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// clrlwi r27,r5,24
	ctx.r27.u64 = ctx.r5.u32 & 0xFF;
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// and r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 & ctx.r4.u64;
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// subfc r5,r30,r27
	xer.ca = ctx.r27.u32 >= ctx.r30.u32;
	ctx.r5.s64 = ctx.r27.s64 - ctx.r30.s64;
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// rlwinm r5,r7,3,21,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7F8;
	// stb r31,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r31.u8);
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r31,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r31.u8);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// and r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 & ctx.r27.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwimi r7,r28,7,0,27
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 7) & 0xFFFFFFF0) | (ctx.r7.u64 & 0xFFFFFFFF0000000F);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r7,r3,25
	ctx.r7.u64 = ctx.r3.u32 & 0x7F;
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwimi r3,r29,0,28,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFFFFFFFF0F) | (ctx.r3.u64 & 0xF0);
	// stb r3,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r3,r7,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stb r31,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r31.u8);
	// stb r31,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r31.u8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// stb r31,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r31.u8);
	// stb r31,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r31.u8);
	// rlwinm r8,r4,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7F8;
	// lbzx r7,r5,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// rlwimi r7,r28,7,0,27
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r28.u32, 7) & 0xFFFFFFF0) | (ctx.r7.u64 & 0xFFFFFFFF0000000F);
	// stbx r7,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r3,r4,25
	ctx.r3.u64 = ctx.r4.u32 & 0x7F;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// lbzx r7,r5,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// rlwimi r7,r29,0,28,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFFFFFFFF0F) | (ctx.r7.u64 & 0xF0);
	// stbx r7,r5,r6
	PPC_STORE_U8(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r5,r6,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stb r31,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r31.u8);
	// stb r31,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r31.u8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stb r31,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r31.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwimi r6,r28,7,0,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r28.u32, 7) & 0xFFFFFFF0) | (ctx.r6.u64 & 0xFFFFFFFF0000000F);
	// subfc r8,r30,r3
	xer.ca = ctx.r3.u32 >= ctx.r30.u32;
	ctx.r8.s64 = ctx.r3.s64 - ctx.r30.s64;
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// addi r8,r11,5
	ctx.r8.s64 = ctx.r11.s64 + 5;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r4,25
	ctx.r7.u64 = ctx.r4.u32 & 0x7F;
	// stb r7,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
	// and r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 & ctx.r3.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwimi r5,r29,0,28,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFFFFFFFF0F) | (ctx.r5.u64 & 0xF0);
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// rlwinm r6,r6,3,21,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x7F8;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r3,r4,0,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r31,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r31.u8);
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stb r31,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r31.u8);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// stb r31,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r31.u8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r31,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r31.u8);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// stb r31,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r31.u8);
	// lbzx r8,r6,r7
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwimi r8,r28,7,0,27
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r28.u32, 7) & 0xFFFFFFF0) | (ctx.r8.u64 & 0xFFFFFFFF0000000F);
	// stbx r8,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r8.u8);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// clrlwi r4,r5,25
	ctx.r4.u64 = ctx.r5.u32 & 0x7F;
	// stb r4,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r4.u8);
	// lbzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// rlwimi r3,r29,0,28,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFFFFFFFF0F) | (ctx.r3.u64 & 0xF0);
	// stbx r3,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r3.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// stb r8,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r8.u8);
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// stb r31,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r31.u8);
	// stb r31,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r31.u8);
	// stb r31,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r31.u8);
	// blt cr6,0x837babd8
	if (cr6.lt) goto loc_837BABD8;
	// lbz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837baecc
	if (cr6.eq) goto loc_837BAECC;
	// addi r9,r23,9
	ctx.r9.s64 = ctx.r23.s64 + 9;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_837BAE00:
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// lbz r10,-4(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x837bae38
	if (!cr6.lt) goto loc_837BAE38;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,97
	ctx.r8.s64 = ctx.r1.s64 + 97;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// lbzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r5,r5,0,29,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwimi r3,r6,4,20,24
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0xF80) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF07F);
	// stbx r5,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u8);
	// stbx r3,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u8);
loc_837BAE38:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lbz r10,-3(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -3);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x837bae68
	if (!cr6.lt) goto loc_837BAE68;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,24
	cr6.compare<uint32_t>(ctx.r7.u32, 24, xer);
	// bge cr6,0x837bae68
	if (!cr6.lt) goto loc_837BAE68;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,97
	ctx.r10.s64 = ctx.r1.s64 + 97;
	// lbzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwimi r6,r7,0,27,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFE0);
	// stbx r6,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u8);
loc_837BAE68:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// lbz r6,-1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// lbz r5,-2(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// bge cr6,0x837bae94
	if (!cr6.lt) goto loc_837BAE94;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// stb r7,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r7.u8);
loc_837BAE94:
	// lbz r8,3(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// bge cr6,0x837baec0
	if (!cr6.lt) goto loc_837BAEC0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r6,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// stb r7,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r7.u8);
	// stb r8,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
loc_837BAEC0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x837bae00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837BAE00;
loc_837BAECC:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r26,r19,28
	ctx.r26.s64 = ctx.r19.s64 + 28;
	// bl 0x82595718
	ctx.lr = 0x837BAEE4;
	sub_82595718(ctx, base);
	// lwz r10,32(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,32(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,32(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r25,96(r3)
	PPC_STORE_U8(ctx.r3.u32 + 96, ctx.r25.u8);
	// stb r25,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r25.u8);
	// beq 0x837baf24
	if (cr0.eq) goto loc_837BAF24;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r22,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x831ce980
	ctx.lr = 0x837BAF24;
	sub_831CE980(ctx, base);
loc_837BAF24:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x837ba320
	ctx.lr = 0x837BAF38;
	sub_837BA320(ctx, base);
loc_837BAF38:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r23,r23,85
	ctx.r23.s64 = ctx.r23.s64 + 85;
	// clrldi r11,r20,32
	ctx.r11.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r18
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r18.u64, xer);
	// blt cr6,0x837babc8
	if (cr6.lt) goto loc_837BABC8;
loc_837BAF4C:
	// stb r28,65(r19)
	PPC_STORE_U8(ctx.r19.u32 + 65, ctx.r28.u8);
loc_837BAF50:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BAF58"))) PPC_WEAK_FUNC(sub_837BAF58);
PPC_FUNC_IMPL(__imp__sub_837BAF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837BAF60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 120);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x837bafa8
	if (cr6.lt) goto loc_837BAFA8;
	// bne cr6,0x837bafcc
	if (!cr6.eq) goto loc_837BAFCC;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-12368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12368);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83103f48
	ctx.lr = 0x837BAF8C;
	sub_83103F48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837bab70
	ctx.lr = 0x837BAFA0;
	sub_837BAB70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837BAFA8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r11,-12368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12368);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83103f48
	ctx.lr = 0x837BAFB8;
	sub_83103F48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837baad0
	ctx.lr = 0x837BAFCC;
	sub_837BAAD0(ctx, base);
loc_837BAFCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BAFD4"))) PPC_WEAK_FUNC(sub_837BAFD4);
PPC_FUNC_IMPL(__imp__sub_837BAFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BAFD8"))) PPC_WEAK_FUNC(sub_837BAFD8);
PPC_FUNC_IMPL(__imp__sub_837BAFD8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x837bb06c
	if (!cr6.lt) goto loc_837BB06C;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r11,r10,-28388
	ctx.r11.s64 = ctx.r10.s64 + -28388;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-28
	ctx.r5.s64 = ctx.r11.s64 + -28;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b6140
	ctx.lr = 0x837BB01C;
	sub_837B6140(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837BB024:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bb024
	if (!cr6.eq) goto loc_837BB024;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837BB04C;
	sub_8259CC28(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837bb104
	if (cr6.lt) goto loc_837BB104;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x837bb118
	goto loc_837BB118;
loc_837BB06C:
	// cmplwi cr6,r11,200
	cr6.compare<uint32_t>(ctx.r11.u32, 200, xer);
	// bge cr6,0x837bb0b8
	if (!cr6.lt) goto loc_837BB0B8;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r11,r11,-28388
	ctx.r11.s64 = ctx.r11.s64 + -28388;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// bl 0x837b6140
	ctx.lr = 0x837BB08C;
	sub_837B6140(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x837BB098;
	sub_8259D6C0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837bb104
	if (cr6.lt) goto loc_837BB104;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x837bb118
	goto loc_837BB118;
loc_837BB0B8:
	// cmplwi cr6,r11,300
	cr6.compare<uint32_t>(ctx.r11.u32, 300, xer);
	// bge cr6,0x837bb10c
	if (!cr6.lt) goto loc_837BB10C;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r11,r11,-200
	ctx.r11.s64 = ctx.r11.s64 + -200;
	// addi r5,r10,-28388
	ctx.r5.s64 = ctx.r10.s64 + -28388;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b6140
	ctx.lr = 0x837BB0E0;
	sub_837B6140(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x837BB0EC;
	sub_8259D6C0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837bb104
	if (cr6.lt) goto loc_837BB104;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_837BB104:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x837bb118
	goto loc_837BB118;
loc_837BB10C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_837BB118:
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

__attribute__((alias("__imp__sub_837BB130"))) PPC_WEAK_FUNC(sub_837BB130);
PPC_FUNC_IMPL(__imp__sub_837BB130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837BB138;
	__savegprlr_23(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bb370
	if (cr6.eq) goto loc_837BB370;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r10,21716
	ctx.r9.s64 = ctx.r10.s64 + 21716;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// li r6,14
	ctx.r6.s64 = 14;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// bl 0x83745a60
	ctx.lr = 0x837BB208;
	sub_83745A60(ctx, base);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83745b68
	ctx.lr = 0x837BB224;
	sub_83745B68(ctx, base);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83745a60
	ctx.lr = 0x837BB240;
	sub_83745A60(ctx, base);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83745b68
	ctx.lr = 0x837BB25C;
	sub_83745B68(ctx, base);
	// li r8,15
	ctx.r8.s64 = 15;
	// addi r5,r1,98
	ctx.r5.s64 = ctx.r1.s64 + 98;
	// lbz r9,471(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 471);
	// stw r8,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// sth r31,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r31.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837ba650
	ctx.lr = 0x837BB2A0;
	sub_837BA650(ctx, base);
	// lhz r29,98(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837bb2fc
	if (cr6.eq) goto loc_837BB2FC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837bafd8
	ctx.lr = 0x837BB2C0;
	sub_837BAFD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d43a8
	ctx.lr = 0x837BB2D4;
	sub_833D43A8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837bafd8
	ctx.lr = 0x837BB2E8;
	sub_837BAFD8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d43a8
	ctx.lr = 0x837BB2FC;
	sub_833D43A8(ctx, base);
loc_837BB2FC:
	// lhz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837bb354
	if (cr6.eq) goto loc_837BB354;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837bafd8
	ctx.lr = 0x837BB320;
	sub_837BAFD8(ctx, base);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d43a8
	ctx.lr = 0x837BB330;
	sub_833D43A8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837bafd8
	ctx.lr = 0x837BB344;
	sub_837BAFD8(ctx, base);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d43a8
	ctx.lr = 0x837BB354;
	sub_833D43A8(ctx, base);
loc_837BB354:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bb370
	if (cr6.lt) goto loc_837BB370;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x837BB370;
	sub_825952B8(ctx, base);
loc_837BB370:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BB378"))) PPC_WEAK_FUNC(sub_837BB378);
PPC_FUNC_IMPL(__imp__sub_837BB378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837BB380;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r29,r11,-28340
	ctx.r29.s64 = ctx.r11.s64 + -28340;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r29,-305
	ctx.r4.s64 = ctx.r29.s64 + -305;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x8259cc28
	ctx.lr = 0x837BB3C0;
	sub_8259CC28(ctx, base);
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x837bb484
	if (cr6.lt) goto loc_837BB484;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x837bb484
	if (cr6.gt) goto loc_837BB484;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x837BB3E4;
	sub_825A1EB8(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bb400
	if (cr6.eq) goto loc_837BB400;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x837BB400;
	sub_825A1EB8(ctx, base);
loc_837BB400:
	// subfic r11,r28,2
	xer.ca = ctx.r28.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r28.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addze r10,r28
	temp.s64 = ctx.r28.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r10.s64 = temp.s64;
	// li r4,3
	ctx.r4.s64 = 3;
	// subf r9,r10,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r10.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 & ctx.r28.u64;
	// bl 0x831d0b08
	ctx.lr = 0x837BB420;
	sub_831D0B08(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837BB428:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bb428
	if (!cr6.eq) goto loc_837BB428;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB450;
	sub_825A1EB8(ctx, base);
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837BB470;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837BB478;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_837BB484:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
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
	ctx.lr = 0x837BB4A4;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bb4c4
	if (cr6.lt) goto loc_837BB4C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BB4C4;
	sub_825952B8(ctx, base);
loc_837BB4C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BB4D0"))) PPC_WEAK_FUNC(sub_837BB4D0);
PPC_FUNC_IMPL(__imp__sub_837BB4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837BB4D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfc r9,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r8,r10,r6
	xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// subfc r4,r11,r7
	xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r7.s64 - ctx.r11.s64;
	// and r30,r9,r5
	ctx.r30.u64 = ctx.r9.u64 & ctx.r5.u64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r8,r6
	ctx.r29.u64 = ctx.r8.u64 & ctx.r6.u64;
	// and r27,r10,r7
	ctx.r27.u64 = ctx.r10.u64 & ctx.r7.u64;
	// bl 0x8311c6c0
	ctx.lr = 0x837BB51C;
	sub_8311C6C0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r28,r11,-28252
	ctx.r28.s64 = ctx.r11.s64 + -28252;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r28,-24
	ctx.r5.s64 = ctx.r28.s64 + -24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b9690
	ctx.lr = 0x837BB538;
	sub_837B9690(ctx, base);
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r4,-10848(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10848);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837BB558:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bb558
	if (!cr6.eq) goto loc_837BB558;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837BB57C;
	sub_8259CC28(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837BB584:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bb584
	if (!cr6.eq) goto loc_837BB584;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB5AC;
	sub_825A1EB8(ctx, base);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x837BB5BC;
	sub_825A1EB8(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837BB5C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bb5c4
	if (!cr6.eq) goto loc_837BB5C4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB5EC;
	sub_825A1EB8(ctx, base);
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-11052
	ctx.r8.s64 = ctx.r10.s64 + -11052;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837BB600:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bb600
	if (!cr6.eq) goto loc_837BB600;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB624;
	sub_825A1EB8(ctx, base);
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-11020
	ctx.r8.s64 = ctx.r10.s64 + -11020;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837BB638:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bb638
	if (!cr6.eq) goto loc_837BB638;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB65C;
	sub_825A1EB8(ctx, base);
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-11012
	ctx.r8.s64 = ctx.r10.s64 + -11012;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837BB670:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bb670
	if (!cr6.eq) goto loc_837BB670;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB694;
	sub_825A1EB8(ctx, base);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bb6a8
	if (!cr6.eq) goto loc_837BB6A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_837BB6A8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837BB6AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bb6ac
	if (!cr6.eq) goto loc_837BB6AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB6D0;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BB6DC"))) PPC_WEAK_FUNC(sub_837BB6DC);
PPC_FUNC_IMPL(__imp__sub_837BB6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BB6E0"))) PPC_WEAK_FUNC(sub_837BB6E0);
PPC_FUNC_IMPL(__imp__sub_837BB6E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837BB6E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bb710
	if (cr6.eq) goto loc_837BB710;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x837bb74c
	goto loc_837BB74C;
loc_837BB710:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-28240
	ctx.r30.s64 = ctx.r11.s64 + -28240;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// bl 0x831d3450
	ctx.lr = 0x837BB724;
	sub_831D3450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bb734
	if (cr6.eq) goto loc_837BB734;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x837bb74c
	goto loc_837BB74C;
loc_837BB734:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3450
	ctx.lr = 0x837BB740;
	sub_831D3450(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bb74c
	if (cr6.eq) goto loc_837BB74C;
	// li r28,2
	ctx.r28.s64 = 2;
loc_837BB74C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837bb4d0
	ctx.lr = 0x837BB768;
	sub_837BB4D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BB774"))) PPC_WEAK_FUNC(sub_837BB774);
PPC_FUNC_IMPL(__imp__sub_837BB774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BB778"))) PPC_WEAK_FUNC(sub_837BB778);
PPC_FUNC_IMPL(__imp__sub_837BB778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837BB780;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-31743
	ctx.r7.s64 = -2080309248;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// and r29,r6,r4
	ctx.r29.u64 = ctx.r6.u64 & ctx.r4.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r11,-12368(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12368);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x837ba480
	ctx.lr = 0x837BB7C0;
	sub_837BA480(ctx, base);
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x837bb7dc
	if (!cr6.eq) goto loc_837BB7DC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x837bb7e4
	goto loc_837BB7E4;
loc_837BB7DC:
	// addic. r3,r11,16
	xer.ca = ctx.r11.u32 > 4294967279;
	ctx.r3.s64 = ctx.r11.s64 + 16;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x837bb7fc
	if (!cr0.eq) goto loc_837BB7FC;
loc_837BB7E4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x837bb7fc
	if (cr6.eq) goto loc_837BB7FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// bl 0x837ba5f8
	ctx.lr = 0x837BB7FC;
	sub_837BA5F8(ctx, base);
loc_837BB7FC:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bb810
	if (cr6.eq) goto loc_837BB810;
	// bl 0x83158970
	ctx.lr = 0x837BB80C;
	sub_83158970(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_837BB810:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// addi r30,r11,-28160
	ctx.r30.s64 = ctx.r11.s64 + -28160;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r30,-76
	ctx.r5.s64 = ctx.r30.s64 + -76;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x837b9690
	ctx.lr = 0x837BB82C;
	sub_837B9690(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// lwz r4,-10844(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10844);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837BB848:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bb848
	if (!cr6.eq) goto loc_837BB848;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837BB86C;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x837BB87C;
	sub_825A1EB8(ctx, base);
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-11052
	ctx.r8.s64 = ctx.r10.s64 + -11052;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837BB890:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bb890
	if (!cr6.eq) goto loc_837BB890;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB8B4;
	sub_825A1EB8(ctx, base);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837BB8BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bb8bc
	if (!cr6.eq) goto loc_837BB8BC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837BB8E4;
	sub_825A1EB8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x837BB8F4;
	sub_825A1EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BB900"))) PPC_WEAK_FUNC(sub_837BB900);
PPC_FUNC_IMPL(__imp__sub_837BB900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x837BB908;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837bbb9c
	if (cr6.eq) goto loc_837BBB9C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837bbb9c
	if (cr6.eq) goto loc_837BBB9C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837bbb9c
	if (cr6.eq) goto loc_837BBB9C;
	// addi r11,r8,12
	ctx.r11.s64 = ctx.r8.s64 + 12;
	// lwz r8,32(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r7,r29,7
	ctx.r7.s64 = ctx.r29.s64 + 7;
	// add r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lbz r25,44(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r21,60(r5)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwzx r26,r10,r30
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lbz r24,45(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r23,46(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwzx r20,r9,r30
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bl 0x83b50558
	ctx.lr = 0x837BB994;
	sub_83B50558(ctx, base);
	// bl 0x837b92f0
	ctx.lr = 0x837BB998;
	sub_837B92F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cc998
	ctx.lr = 0x837BB9A4;
	sub_833CC998(ctx, base);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x837bb9c8
	if (!cr6.eq) goto loc_837BB9C8;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x837bb9c8
	if (cr6.eq) goto loc_837BB9C8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cccf0
	ctx.lr = 0x837BB9C8;
	sub_833CCCF0(ctx, base);
loc_837BB9C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837bb130
	ctx.lr = 0x837BB9F4;
	sub_837BB130(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,19200
	ctx.r10.s64 = 1258291200;
	// rlwinm r8,r9,0,0,10
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFE00000;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x837bba8c
	if (!cr6.lt) goto loc_837BBA8C;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x837bba8c
	if (cr6.eq) goto loc_837BBA8C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833ce3f8
	ctx.lr = 0x837BBA24;
	sub_833CE3F8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cd3c8
	ctx.lr = 0x837BBA30;
	sub_833CD3C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83072708
	ctx.lr = 0x837BBA44;
	sub_83072708(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82dab6d0
	ctx.lr = 0x837BBA4C;
	sub_82DAB6D0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833cc978
	ctx.lr = 0x837BBA6C;
	sub_833CC978(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cd3b8
	ctx.lr = 0x837BBA78;
	sub_833CD3B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x837BBA84;
	sub_82572FA0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833cd2b8
	ctx.lr = 0x837BBA8C;
	sub_833CD2B8(ctx, base);
loc_837BBA8C:
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,97
	ctx.r4.s64 = ctx.r1.s64 + 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b4f9d8
	ctx.lr = 0x837BBAA0;
	sub_83B4F9D8(ctx, base);
	// addi r11,r29,15
	ctx.r11.s64 = ctx.r29.s64 + 15;
	// lbz r7,97(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwimi r8,r7,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r4,r1,97
	ctx.r4.s64 = ctx.r1.s64 + 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// ori r7,r8,255
	ctx.r7.u64 = ctx.r8.u64 | 255;
	// stwx r7,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r7.u32);
	// bl 0x83b4fae0
	ctx.lr = 0x837BBAE8;
	sub_83B4FAE0(ctx, base);
	// lbz r9,97(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r5,r29,17
	ctx.r5.s64 = ctx.r29.s64 + 17;
	// lbz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r9,r10,255
	ctx.r9.u64 = ctx.r10.u64 | 255;
	// addi r4,r1,97
	ctx.r4.s64 = ctx.r1.s64 + 97;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b4fbe8
	ctx.lr = 0x837BBB30;
	sub_83B4FBE8(ctx, base);
	// addi r8,r29,19
	ctx.r8.s64 = ctx.r29.s64 + 19;
	// lbz r9,97(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r4,r26,16
	ctx.r4.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// ori r9,r10,255
	ctx.r9.u64 = ctx.r10.u64 | 255;
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// bl 0x837bb378
	ctx.lr = 0x837BBB78;
	sub_837BB378(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837bbb8c
	if (!cr6.lt) goto loc_837BBB8C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_837BBB8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833cee68
	ctx.lr = 0x837BBB94;
	sub_833CEE68(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x837BBB9C;
	sub_8387E8E0(ctx, base);
loc_837BBB9C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BBBA4"))) PPC_WEAK_FUNC(sub_837BBBA4);
PPC_FUNC_IMPL(__imp__sub_837BBBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BBBA8"))) PPC_WEAK_FUNC(sub_837BBBA8);
PPC_FUNC_IMPL(__imp__sub_837BBBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837BBBB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x833cedf0
	ctx.lr = 0x837BBBC4;
	sub_833CEDF0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_837BBBE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bbbe0
	if (!cr6.eq) goto loc_837BBBE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837BBC04;
	sub_8259CC28(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r30,r11,-27976
	ctx.r30.s64 = ctx.r11.s64 + -27976;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x837BBC28;
	sub_8259CC28(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x837bbc3c
	if (!cr6.lt) goto loc_837BBC3C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_837BBC3C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82574d38
	ctx.lr = 0x837BBC4C;
	sub_82574D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x837bbc6c
	if (cr6.eq) goto loc_837BBC6C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a84c0
	ctx.lr = 0x837BBC6C;
	sub_827A84C0(ctx, base);
loc_837BBC6C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837bbc80
	if (!cr6.lt) goto loc_837BBC80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_837BBC80:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833d1340
	ctx.lr = 0x837BBC88;
	sub_833D1340(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r28,2
	ctx.r28.s64 = 2;
	// subfc r10,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 & ctx.r29.u64;
	// addi r30,r11,5
	ctx.r30.s64 = ctx.r11.s64 + 5;
	// blt cr6,0x837bbcbc
	if (cr6.lt) goto loc_837BBCBC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x837BBCBC;
	sub_825952B8(ctx, base);
loc_837BBCBC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x837bbce4
	if (cr6.lt) goto loc_837BBCE4;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x837BBCE4;
	sub_825952B8(ctx, base);
loc_837BBCE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BBCF0"))) PPC_WEAK_FUNC(sub_837BBCF0);
PPC_FUNC_IMPL(__imp__sub_837BBCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x837BBCF8;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r7,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r7.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r9,711(r1)
	PPC_STORE_U8(ctx.r1.u32 + 711, ctx.r9.u8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837bca64
	if (cr6.eq) goto loc_837BCA64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837bca64
	if (cr6.eq) goto loc_837BCA64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837bca64
	if (cr6.eq) goto loc_837BCA64;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,-28152
	ctx.r4.s64 = ctx.r11.s64 + -28152;
	// bl 0x831d3450
	ctx.lr = 0x837BBD44;
	sub_831D3450(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addic r9,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfe r29,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r22,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r22.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x837b0c10
	ctx.lr = 0x837BBD68;
	sub_837B0C10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83104018
	ctx.lr = 0x837BBD70;
	sub_83104018(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x837bbda8
	if (!cr6.eq) goto loc_837BBDA8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x837bb6e0
	ctx.lr = 0x837BBD8C;
	sub_837BB6E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8259cb28
	ctx.lr = 0x837BBDA0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x837BBDA8;
	sub_8387E8E0(ctx, base);
loc_837BBDA8:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837bbdc4
	if (!cr6.lt) goto loc_837BBDC4;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_837BBDC4:
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// bl 0x83104938
	ctx.lr = 0x837BBDCC;
	sub_83104938(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x83103b18
	ctx.lr = 0x837BBDD4;
	sub_83103B18(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83103e20
	ctx.lr = 0x837BBDDC;
	sub_83103E20(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83103d20
	ctx.lr = 0x837BBDE4;
	sub_83103D20(ctx, base);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x837bca54
	if (cr6.eq) goto loc_837BCA54;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83103d60
	ctx.lr = 0x837BBDF4;
	sub_83103D60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bca54
	if (cr6.eq) goto loc_837BCA54;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83103d20
	ctx.lr = 0x837BBE04;
	sub_83103D20(ctx, base);
	// rotlwi r28,r3,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83103d60
	ctx.lr = 0x837BBE10;
	sub_83103D60(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r21,r25,24
	ctx.r21.u64 = ctx.r25.u32 & 0xFF;
	// lis r20,0
	ctx.r20.s64 = 0;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r20,r20,65535
	ctx.r20.u64 = ctx.r20.u64 | 65535;
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x837bbe70
	if (cr6.eq) goto loc_837BBE70;
	// mulli r10,r23,28
	ctx.r10.s64 = ctx.r23.s64 * 28;
	// addi r9,r23,7
	ctx.r9.s64 = ctx.r23.s64 + 7;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwzx r20,r8,r26
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// lbz r18,44(r11)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lwz r29,60(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// lbz r17,45(r11)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r16,46(r11)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lwz r15,48(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_837BBE70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// cmplwi cr6,r28,120
	cr6.compare<uint32_t>(ctx.r28.u32, 120, xer);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// stfs f31,268(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stfs f31,272(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stfs f31,300(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stfs f31,304(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// stfs f31,240(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// bne cr6,0x837bc310
	if (!cr6.eq) goto loc_837BC310;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r19,r11,21716
	ctx.r19.s64 = ctx.r11.s64 + 21716;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d1340
	ctx.lr = 0x837BBF08;
	sub_833D1340(ctx, base);
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d1348
	ctx.lr = 0x837BBF14;
	sub_833D1348(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,17,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x7;
	// bl 0x833cca38
	ctx.lr = 0x837BBF24;
	sub_833CCA38(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r5,r10,14,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1F;
	// rlwinm r4,r10,9,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x3F;
	// bl 0x837454d8
	ctx.lr = 0x837BBF44;
	sub_837454D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cca18
	ctx.lr = 0x837BBF50;
	sub_833CCA18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cca48
	ctx.lr = 0x837BBF5C;
	sub_833CCA48(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d1350
	ctx.lr = 0x837BBF68;
	sub_833D1350(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r4,14,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xF;
	// rlwinm r5,r4,10,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x1F;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r4,r4,5,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1F;
	// bl 0x837455f8
	ctx.lr = 0x837BBF90;
	sub_837455F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cca98
	ctx.lr = 0x837BBF9C;
	sub_833CCA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cca78
	ctx.lr = 0x837BBFA8;
	sub_833CCA78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccab8
	ctx.lr = 0x837BBFB4;
	sub_833CCAB8(ctx, base);
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d1358
	ctx.lr = 0x837BBFC0;
	sub_833D1358(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r6,r11,29,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// rlwinm r5,r11,19,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1F;
	// rlwinm r4,r11,24,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// bl 0x83745770
	ctx.lr = 0x837BBFE4;
	sub_83745770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccb10
	ctx.lr = 0x837BBFF4;
	sub_833CCB10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccaf0
	ctx.lr = 0x837BC000;
	sub_833CCAF0(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d1360
	ctx.lr = 0x837BC00C;
	sub_833D1360(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// rlwinm r7,r4,31,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1F;
	// rlwinm r6,r4,21,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 21) & 0x1F;
	// rlwinm r5,r4,26,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x1F;
	// clrlwi r4,r4,31
	ctx.r4.u64 = ctx.r4.u32 & 0x1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837458d8
	ctx.lr = 0x837BC034;
	sub_837458D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccb48
	ctx.lr = 0x837BC044;
	sub_833CCB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccb38
	ctx.lr = 0x837BC050;
	sub_833CCB38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,21(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lbz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// bl 0x833ccb70
	ctx.lr = 0x837BC060;
	sub_833CCB70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,3(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// bl 0x833cc9b8
	ctx.lr = 0x837BC06C;
	sub_833CC9B8(ctx, base);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x837bc084
	if (cr6.eq) goto loc_837BC084;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne cr6,0x837bc088
	if (!cr6.eq) goto loc_837BC088;
loc_837BC084:
	// li r11,1
	ctx.r11.s64 = 1;
loc_837BC088:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x837bc0a0
	if (!cr6.eq) goto loc_837BC0A0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_837BC0A0:
	// bl 0x833cc9d8
	ctx.lr = 0x837BC0A4;
	sub_833CC9D8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x833cca08
	ctx.lr = 0x837BC0B4;
	sub_833CCA08(ctx, base);
	// lbz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r4,r10,29
	ctx.r4.u64 = ctx.r10.u32 & 0x7;
	// bl 0x833cc9e8
	ctx.lr = 0x837BC0C4;
	sub_833CC9E8(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r9,31,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837bc0f8
	if (cr6.eq) goto loc_837BC0F8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x837bc0ec
	if (cr6.eq) goto loc_837BC0EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,24,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFF;
	// rlwinm r29,r10,12,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// b 0x837bc104
	goto loc_837BC104;
loc_837BC0EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// b 0x837bc100
	goto loc_837BC100;
loc_837BC0F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,24,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFF;
loc_837BC100:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_837BC104:
	// lis r10,4194
	ctx.r10.s64 = 274857984;
	// li r24,1000
	ctx.r24.s64 = 1000;
	// ori r28,r10,19923
	ctx.r28.u64 = ctx.r10.u64 | 19923;
	// divwu r25,r11,r24
	ctx.r25.u32 = PPCDivide(ctx.r11.u32, ctx.r24.u32);
	// mulhwu r9,r11,r28
	ctx.r9.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r8,r9,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mulli r7,r8,1000
	ctx.r7.s64 = ctx.r8.s64 * 1000;
	// subf r5,r7,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833ccbb8
	ctx.lr = 0x837BC130;
	sub_833CCBB8(ctx, base);
	// mulhwu r6,r29,r28
	ctx.r6.u64 = (uint64_t(ctx.r29.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// rlwinm r5,r6,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// divwu r4,r29,r24
	ctx.r4.u32 = PPCDivide(ctx.r29.u32, ctx.r24.u32);
	// mulli r3,r5,1000
	ctx.r3.s64 = ctx.r5.s64 * 1000;
	// subf r5,r3,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r3.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833ccb90
	ctx.lr = 0x837BC14C;
	sub_833CCB90(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x837bc174
	if (cr6.eq) goto loc_837BC174;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r25,3
	cr6.compare<uint32_t>(ctx.r25.u32, 3, xer);
	// bne cr6,0x837bc164
	if (!cr6.eq) goto loc_837BC164;
	// li r11,1
	ctx.r11.s64 = 1;
loc_837BC164:
	// addi r10,r23,58
	ctx.r10.s64 = ctx.r23.s64 + 58;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r22
	ctx.r9.u64 = ctx.r10.u64 + ctx.r22.u64;
	// stbx r11,r9,r26
	PPC_STORE_U8(ctx.r9.u32 + ctx.r26.u32, ctx.r11.u8);
loc_837BC174:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r5,r10,5,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// bl 0x83745a60
	ctx.lr = 0x837BC198;
	sub_83745A60(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r6,r9,20,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1F;
	// rlwinm r5,r9,25,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1F;
	// bl 0x83745b68
	ctx.lr = 0x837BC1B8;
	sub_83745B68(ctx, base);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// rlwinm r6,r5,22,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x1F;
	// addi r7,r1,268
	ctx.r7.s64 = ctx.r1.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r5,r5,27,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1F;
	// bl 0x83745a60
	ctx.lr = 0x837BC1D8;
	sub_83745A60(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,300
	ctx.r7.s64 = ctx.r1.s64 + 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r6,r11,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1F;
	// rlwinm r5,r11,15,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1F;
	// bl 0x83745b68
	ctx.lr = 0x837BC1F8;
	sub_83745B68(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x837bc304
	if (cr6.eq) goto loc_837BC304;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bc224
	if (cr6.eq) goto loc_837BC224;
	// addi r11,r23,56
	ctx.r11.s64 = ctx.r23.s64 + 56;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stbx r10,r9,r26
	PPC_STORE_U8(ctx.r9.u32 + ctx.r26.u32, ctx.r10.u8);
loc_837BC224:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r10,r23,15
	ctx.r10.s64 = ctx.r23.s64 + 15;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// addi r8,r23,17
	ctx.r8.s64 = ctx.r23.s64 + 17;
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,18(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 | ctx.r9.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 | ctx.r6.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r22
	ctx.r7.u64 = ctx.r11.u64 + ctx.r22.u64;
	// ori r6,r8,255
	ctx.r6.u64 = ctx.r8.u64 | 255;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r6.u32);
	// addi r3,r23,19
	ctx.r3.s64 = ctx.r23.s64 + 19;
	// lbz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r8,r9,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// or r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// ori r9,r10,255
	ctx.r9.u64 = ctx.r10.u64 | 255;
	// stwx r9,r5,r26
	PPC_STORE_U32(ctx.r5.u32 + ctx.r26.u32, ctx.r9.u32);
	// lbz r8,14(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r6,13(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 | ctx.r8.u64;
	// rlwimi r7,r10,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// ori r8,r9,255
	ctx.r8.u64 = ctx.r9.u64 | 255;
	// stwx r8,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r8.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r5,r7,2,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3;
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// bl 0x837bb378
	ctx.lr = 0x837BC2E0;
	sub_837BB378(ctx, base);
	// lwz r5,404(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x837bc2f4
	if (!cr6.lt) goto loc_837BC2F4;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_837BC2F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cee68
	ctx.lr = 0x837BC2FC;
	sub_833CEE68(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x837BC304;
	sub_8387E8E0(ctx, base);
loc_837BC304:
	// lbz r25,711(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 711);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// b 0x837bc938
	goto loc_837BC938;
loc_837BC310:
	// cmplwi cr6,r28,96
	cr6.compare<uint32_t>(ctx.r28.u32, 96, xer);
	// bne cr6,0x837bc938
	if (!cr6.eq) goto loc_837BC938;
	// bl 0x837b92f0
	ctx.lr = 0x837BC31C;
	sub_837B92F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cc998
	ctx.lr = 0x837BC328;
	sub_833CC998(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addi r28,r11,21716
	ctx.r28.s64 = ctx.r11.s64 + 21716;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r4,r11,31,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// bl 0x833cca38
	ctx.lr = 0x837BC354;
	sub_833CCA38(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r10,10,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1F;
	// rlwinm r4,r9,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3F;
	// bl 0x837454d8
	ctx.lr = 0x837BC378;
	sub_837454D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cca18
	ctx.lr = 0x837BC384;
	sub_833CCA18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cca48
	ctx.lr = 0x837BC390;
	sub_833CCA48(ctx, base);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r5,r4,10,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x1F;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r6,r11,28,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// rlwinm r4,r4,5,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1F;
	// bl 0x837455f8
	ctx.lr = 0x837BC3BC;
	sub_837455F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cca98
	ctx.lr = 0x837BC3C8;
	sub_833CCA98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833cca78
	ctx.lr = 0x837BC3D4;
	sub_833CCA78(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r10,5,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// rlwinm r6,r6,15,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 15) & 0x1F;
	// rlwinm r4,r10,10,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1F;
	// bl 0x83745770
	ctx.lr = 0x837BC3FC;
	sub_83745770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccb10
	ctx.lr = 0x837BC40C;
	sub_833CCB10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccaf0
	ctx.lr = 0x837BC418;
	sub_833CCAF0(ctx, base);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r6,r5,15,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0x1F;
	// rlwinm r7,r4,20,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x1F;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r5,20,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0x1F;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x837458d8
	ctx.lr = 0x837BC448;
	sub_837458D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccb48
	ctx.lr = 0x837BC458;
	sub_833CCB48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x833ccb38
	ctx.lr = 0x837BC464;
	sub_833CCB38(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r10,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// addi r5,r11,901
	ctx.r5.s64 = ctx.r11.s64 + 901;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x833ccb70
	ctx.lr = 0x837BC47C;
	sub_833CCB70(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r6,r9,15,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1F;
	// rlwinm r5,r9,20,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1F;
	// bl 0x83745a60
	ctx.lr = 0x837BC49C;
	sub_83745A60(ctx, base);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// rlwinm r6,r5,15,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0x1F;
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r5,r5,20,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0x1F;
	// bl 0x83745b68
	ctx.lr = 0x837BC4BC;
	sub_83745B68(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,268
	ctx.r7.s64 = ctx.r1.s64 + 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r6,r11,5,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// rlwinm r5,r11,10,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1F;
	// bl 0x83745a60
	ctx.lr = 0x837BC4DC;
	sub_83745A60(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,300
	ctx.r7.s64 = ctx.r1.s64 + 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r6,r10,5,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// rlwinm r5,r10,10,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1F;
	// bl 0x83745b68
	ctx.lr = 0x837BC4FC;
	sub_83745B68(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833ce3f8
	ctx.lr = 0x837BC510;
	sub_833CE3F8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r5,r9,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFC;
	// rlwinm r6,r8,28,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFC;
	// rlwinm r4,r9,28,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFC;
	// bl 0x833cc5b8
	ctx.lr = 0x837BC52C;
	sub_833CC5B8(ctx, base);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r8,r7,0,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFC;
	// rlwinm r7,r6,26,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC;
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r11,20,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFC;
	// bl 0x833cc5f0
	ctx.lr = 0x837BC554;
	sub_833CC5F0(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r10,8,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r7,r9,8,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// rlwinm r6,r6,26,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC;
	// bl 0x833cc5f0
	ctx.lr = 0x837BC57C;
	sub_833CC5F0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lbz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r8,r11,14,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFC;
	// rlwinm r7,r10,14,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFC;
	// rlwinm r6,r9,8,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// bl 0x833cc5f0
	ctx.lr = 0x837BC5A4;
	sub_833CC5F0(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r8,20,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFC;
	// lbz r5,7(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// rlwinm r7,r7,20,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xFC;
	// rlwinm r6,r6,14,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFC;
	// bl 0x833cc5f0
	ctx.lr = 0x837BC5CC;
	sub_833CC5F0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r11,26,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC;
	// lbz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// rlwinm r7,r10,26,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFC;
	// rlwinm r6,r9,20,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFC;
	// bl 0x833cc5f0
	ctx.lr = 0x837BC5F4;
	sub_833CC5F0(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r8,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// rlwinm r5,r8,28,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFC;
	// rlwinm r4,r7,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// bl 0x833cc650
	ctx.lr = 0x837BC610;
	sub_833CC650(ctx, base);
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r8,r6,20,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xFC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r7,r11,26,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC;
	// rlwinm r6,r10,0,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// bl 0x833cc688
	ctx.lr = 0x837BC638;
	sub_833CC688(ctx, base);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r7,r9,0,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFC;
	// rlwinm r8,r8,26,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0xFC;
	// rlwinm r6,r9,8,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// bl 0x833cc688
	ctx.lr = 0x837BC65C;
	sub_833CC688(ctx, base);
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r8,r7,0,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFC;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r7,8,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFC;
	// rlwinm r6,r6,14,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFC;
	// bl 0x833cc688
	ctx.lr = 0x837BC680;
	sub_833CC688(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r11,8,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r7,r10,14,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFC;
	// rlwinm r6,r9,20,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFC;
	// bl 0x833cc688
	ctx.lr = 0x837BC6A8;
	sub_833CC688(ctx, base);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r5,r8,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFC;
	// rlwinm r6,r7,28,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFC;
	// rlwinm r4,r8,28,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFC;
	// bl 0x833cc6e8
	ctx.lr = 0x837BC6C4;
	sub_833CC6E8(ctx, base);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r6,0,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFC;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r11,20,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFC;
	// rlwinm r6,r6,14,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFC;
	// bl 0x833cc720
	ctx.lr = 0x837BC6E8;
	sub_833CC720(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r8,r10,26,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFC;
	// rlwinm r7,r10,8,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// rlwinm r6,r9,20,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFC;
	// bl 0x833cc720
	ctx.lr = 0x837BC70C;
	sub_833CC720(ctx, base);
	// lwz r7,72(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r8,r7,0,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFC;
	// lbz r5,11(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r7,14,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0xFC;
	// rlwinm r6,r6,26,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xFC;
	// bl 0x833cc720
	ctx.lr = 0x837BC730;
	sub_833CC720(ctx, base);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r6,r5,14,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFC;
	// rlwinm r5,r5,8,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFC;
	// rlwinm r4,r4,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFC;
	// bl 0x833cc780
	ctx.lr = 0x837BC74C;
	sub_833CC780(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r8,r11,0,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC;
	// rlwinm r7,r11,20,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFC;
	// rlwinm r6,r11,8,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// rlwinm r5,r10,15,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1F;
	// bl 0x833cc7b8
	ctx.lr = 0x837BC770;
	sub_833CC7B8(ctx, base);
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r9,26,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC;
	// rlwinm r8,r8,8,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFC;
	// rlwinm r6,r9,14,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFC;
	// rlwinm r5,r5,20,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0x1F;
	// bl 0x833cc7b8
	ctx.lr = 0x837BC798;
	sub_833CC7B8(ctx, base);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r4,14,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFC;
	// rlwinm r6,r4,8,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFC;
	// rlwinm r5,r11,26,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC;
	// clrlwi r4,r11,28
	ctx.r4.u64 = ctx.r11.u32 & 0xF;
	// bl 0x833cc818
	ctx.lr = 0x837BC7B8;
	sub_833CC818(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r10,8,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// rlwinm r6,r9,26,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xFC;
	// rlwinm r5,r9,20,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFC;
	// rlwinm r4,r10,28,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// bl 0x833cc858
	ctx.lr = 0x837BC7D8;
	sub_833CC858(ctx, base);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r8,26,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0xFC;
	// rlwinm r6,r8,20,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFC;
	// rlwinm r5,r8,14,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFC;
	// clrlwi r4,r8,28
	ctx.r4.u64 = ctx.r8.u32 & 0xF;
	// bl 0x833cc898
	ctx.lr = 0x837BC7F4;
	sub_833CC898(ctx, base);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r7,r4,20,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFC;
	// rlwinm r6,r4,14,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFC;
	// rlwinm r5,r4,8,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFC;
	// rlwinm r4,r4,28,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xF;
	// bl 0x833cc8d8
	ctx.lr = 0x837BC810;
	sub_833CC8D8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837bc824
	if (cr6.eq) goto loc_837BC824;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833cc928
	ctx.lr = 0x837BC824;
	sub_833CC928(ctx, base);
loc_837BC824:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x837bc910
	if (cr6.eq) goto loc_837BC910;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r23,15
	ctx.r10.s64 = ctx.r23.s64 + 15;
	// addi r9,r23,17
	ctx.r9.s64 = ctx.r23.s64 + 17;
	// rlwinm r8,r11,28,16,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFC00;
	// rlwinm r7,r11,26,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r6,r5,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r8,r6,8,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFC00;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r8,255
	ctx.r7.u64 = ctx.r8.u64 | 255;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r23,19
	ctx.r5.s64 = ctx.r23.s64 + 19;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stwx r7,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r7.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// rlwinm r3,r4,16,16,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFC00;
	// rlwinm r11,r4,14,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0xFC;
	// rlwinm r10,r4,20,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFC;
	// or r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 | ctx.r11.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r22
	ctx.r5.u64 = ctx.r11.u64 + ctx.r22.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r10,r4,255
	ctx.r10.u64 = ctx.r4.u64 | 255;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// stwx r10,r8,r26
	PPC_STORE_U32(ctx.r8.u32 + ctx.r26.u32, ctx.r10.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,2,16,21
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFC00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF03FF);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r5,r9,8,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// rlwinm r9,r7,8,8,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFC00;
	// rlwinm r9,r9,0,16,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// ori r5,r7,255
	ctx.r5.u64 = ctx.r7.u64 | 255;
	// stwx r5,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r5.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r11,31,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7;
	// bl 0x837bb378
	ctx.lr = 0x837BC8EC;
	sub_837BB378(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x837bc900
	if (!cr6.lt) goto loc_837BC900;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_837BC900:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cee68
	ctx.lr = 0x837BC908;
	sub_833CEE68(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x837BC910;
	sub_8387E8E0(ctx, base);
loc_837BC910:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833cd3b8
	ctx.lr = 0x837BC91C;
	sub_833CD3B8(ctx, base);
	// addi r11,r23,58
	ctx.r11.s64 = ctx.r23.s64 + 58;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// stbx r27,r10,r26
	PPC_STORE_U8(ctx.r10.u32 + ctx.r26.u32, ctx.r27.u8);
	// bl 0x833cd2b8
	ctx.lr = 0x837BC934;
	sub_833CD2B8(ctx, base);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
loc_837BC938:
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lwz r3,692(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r27.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r11.u32);
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// stb r27,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r27.u8);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// sth r27,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r27.u16);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x837ba650
	ctx.lr = 0x837BC97C;
	sub_837BA650(ctx, base);
	// lhz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837bc9d8
	if (cr6.eq) goto loc_837BC9D8;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837bafd8
	ctx.lr = 0x837BC99C;
	sub_837BAFD8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d43a8
	ctx.lr = 0x837BC9B0;
	sub_833D43A8(ctx, base);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837bafd8
	ctx.lr = 0x837BC9C4;
	sub_837BAFD8(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d43a8
	ctx.lr = 0x837BC9D8;
	sub_833D43A8(ctx, base);
loc_837BC9D8:
	// lhz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837bca30
	if (cr6.eq) goto loc_837BCA30;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837bafd8
	ctx.lr = 0x837BC9F8;
	sub_837BAFD8(ctx, base);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d43a8
	ctx.lr = 0x837BCA08;
	sub_833D43A8(ctx, base);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837bafd8
	ctx.lr = 0x837BCA1C;
	sub_837BAFD8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x833d43a8
	ctx.lr = 0x837BCA30;
	sub_833D43A8(ctx, base);
loc_837BCA30:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83103e98
	ctx.lr = 0x837BCA38;
	sub_83103E98(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x837BCA40;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x837BCA48;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_837BCA54:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83103e98
	ctx.lr = 0x837BCA5C;
	sub_83103E98(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x837BCA64;
	sub_8387E8E0(ctx, base);
loc_837BCA64:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BCA70"))) PPC_WEAK_FUNC(sub_837BCA70);
PPC_FUNC_IMPL(__imp__sub_837BCA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x837BCA78;
	__savegprlr_15(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x837BCA88;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bcaa0
	if (cr6.eq) goto loc_837BCAA0;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bcaa0
	if (cr6.eq) goto loc_837BCAA0;
	// bl 0x83115808
	ctx.lr = 0x837BCAA0;
	sub_83115808(ctx, base);
loc_837BCAA0:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833d57c0
	ctx.lr = 0x837BCAA8;
	sub_833D57C0(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r11,-12368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12368);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x837bcad0
	if (cr6.eq) goto loc_837BCAD0;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x833d6268
	ctx.lr = 0x837BCACC;
	sub_833D6268(ctx, base);
	// b 0x837bcae4
	goto loc_837BCAE4;
loc_837BCAD0:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,-11056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11056);
	// bl 0x833ec928
	ctx.lr = 0x837BCAE4;
	sub_833EC928(ctx, base);
loc_837BCAE4:
	// li r22,0
	ctx.r22.s64 = 0;
	// lbz r15,93(r26)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r26.u32 + 93);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// ori r18,r11,65520
	ctx.r18.u64 = ctx.r11.u64 | 65520;
	// lis r21,-31769
	ctx.r21.s64 = -2082013184;
	// ori r17,r10,65534
	ctx.r17.u64 = ctx.r10.u64 | 65534;
	// li r20,-1
	ctx.r20.s64 = -1;
	// li r16,2
	ctx.r16.s64 = 2;
	// li r19,15
	ctx.r19.s64 = 15;
loc_837BCB18:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(ctx.r15.u32, 0, xer);
	// beq cr6,0x837bcb40
	if (cr6.eq) goto loc_837BCB40;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// bne cr6,0x837bcb40
	if (!cr6.eq) goto loc_837BCB40;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837b99d0
	ctx.lr = 0x837BCB38;
	sub_837B99D0(ctx, base);
	// lwz r25,104(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x837bce74
	goto loc_837BCE74;
loc_837BCB40:
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// lwz r10,-10896(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + -10896);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x837bcb7c
	if (!cr6.eq) goto loc_837BCB7C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837bcb80
	if (cr6.eq) goto loc_837BCB80;
loc_837BCB7C:
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_837BCB80:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bcb94
	if (cr6.eq) goto loc_837BCB94;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// b 0x837bce70
	goto loc_837BCE70;
loc_837BCB94:
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, xer);
	// blt cr6,0x837bcc04
	if (cr6.lt) goto loc_837BCC04;
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, xer);
	// bgt cr6,0x837bcc04
	if (cr6.gt) goto loc_837BCC04;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_837BCBAC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x833d4ad0
	ctx.lr = 0x837BCBC0;
	sub_833D4AD0(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837b9430
	ctx.lr = 0x837BCBD8;
	sub_837B9430(ctx, base);
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833d5a08
	ctx.lr = 0x837BCBE8;
	sub_833D5A08(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// bl 0x833cd338
	ctx.lr = 0x837BCBF4;
	sub_833CD338(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x837bcbac
	if (cr6.lt) goto loc_837BCBAC;
	// b 0x837bce70
	goto loc_837BCE70;
loc_837BCC04:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r23,r11,10
	ctx.r23.s64 = ctx.r11.s64 + 10;
loc_837BCC14:
	// add r11,r23,r27
	ctx.r11.u64 = ctx.r23.u64 + ctx.r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r6,9
	cr6.compare<uint32_t>(ctx.r6.u32, 9, xer);
	// bne cr6,0x837bcc30
	if (!cr6.eq) goto loc_837BCC30;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x837bce64
	goto loc_837BCE64;
loc_837BCC30:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,280
	ctx.r11.s64 = ctx.r1.s64 + 280;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_837BCC40:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x837bcc40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837BCC40;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x837b9858
	ctx.lr = 0x837BCC74;
	sub_837B9858(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x837bccc8
	if (!cr6.eq) goto loc_837BCCC8;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x833d4ad0
	ctx.lr = 0x837BCC94;
	sub_833D4AD0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837b9430
	ctx.lr = 0x837BCCAC;
	sub_837B9430(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833d5a08
	ctx.lr = 0x837BCCBC;
	sub_833D5A08(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x837bce60
	goto loc_837BCE60;
loc_837BCCC8:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x833d4ad0
	ctx.lr = 0x837BCCD0;
	sub_833D4AD0(ctx, base);
	// lwz r31,208(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r30,184(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837bb4d0
	ctx.lr = 0x837BCCF8;
	sub_837BB4D0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837bcd0c
	if (!cr6.lt) goto loc_837BCD0C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_837BCD0C:
	// bl 0x83104018
	ctx.lr = 0x837BCD10;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837bcda4
	if (!cr6.eq) goto loc_837BCDA4;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bcd4c
	if (cr6.eq) goto loc_837BCD4C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837bb900
	ctx.lr = 0x837BCD48;
	sub_837BB900(ctx, base);
	// b 0x837bcdd4
	goto loc_837BCDD4;
loc_837BCD4C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837bb4d0
	ctx.lr = 0x837BCD68;
	sub_837BB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x837BCD7C;
	sub_8259CB28(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bcd98
	if (cr6.lt) goto loc_837BCD98;
	// stw r16,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x837BCD98;
	sub_825952B8(ctx, base);
loc_837BCD98:
	// stw r19,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r19.u32);
	// stw r22,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r22.u32);
	// stb r22,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r22.u8);
loc_837BCDA4:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837bcdb8
	if (!cr6.lt) goto loc_837BCDB8;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
loc_837BCDB8:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837bbcf0
	ctx.lr = 0x837BCDD4;
	sub_837BBCF0(ctx, base);
loc_837BCDD4:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833d5a08
	ctx.lr = 0x837BCDE4;
	sub_833D5A08(ctx, base);
	// addi r11,r28,56
	ctx.r11.s64 = ctx.r28.s64 + 56;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lbzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837bce30
	if (cr6.eq) goto loc_837BCE30;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833d4b50
	ctx.lr = 0x837BCE08;
	sub_833D4B50(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837bbba8
	ctx.lr = 0x837BCE18;
	sub_837BBBA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833d5a08
	ctx.lr = 0x837BCE28;
	sub_833D5A08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833cd338
	ctx.lr = 0x837BCE30;
	sub_833CD338(ctx, base);
loc_837BCE30:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bce50
	if (cr6.lt) goto loc_837BCE50;
	// stw r16,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837BCE50;
	sub_825952B8(ctx, base);
loc_837BCE50:
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r19.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// stb r22,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r22.u8);
loc_837BCE60:
	// bl 0x833cd338
	ctx.lr = 0x837BCE64;
	sub_833CD338(ctx, base);
loc_837BCE64:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x837bcc14
	if (cr6.lt) goto loc_837BCC14;
loc_837BCE70:
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
loc_837BCE74:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x837bcb18
	if (cr6.lt) goto loc_837BCB18;
	// lbz r11,92(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 92);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x837bcf28
	if (cr6.eq) goto loc_837BCF28;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x837b9378
	ctx.lr = 0x837BCE98;
	sub_837B9378(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837bb778
	ctx.lr = 0x837BCEA4;
	sub_837BB778(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833d4ad0
	ctx.lr = 0x837BCEB8;
	sub_833D4AD0(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x837bcecc
	if (!cr6.lt) goto loc_837BCECC;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
loc_837BCECC:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,-10896(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + -10896);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837bbcf0
	ctx.lr = 0x837BCEE8;
	sub_837BBCF0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833d5a08
	ctx.lr = 0x837BCEF8;
	sub_833D5A08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833cd338
	ctx.lr = 0x837BCF00;
	sub_833CD338(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bcf1c
	if (cr6.lt) goto loc_837BCF1C;
	// stw r16,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r16.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x837BCF1C;
	sub_825952B8(ctx, base);
loc_837BCF1C:
	// stw r19,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r19.u32);
	// stw r22,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// stb r22,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r22.u8);
loc_837BCF28:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r31,r11,-28052
	ctx.r31.s64 = ctx.r11.s64 + -28052;
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// bl 0x833cf298
	ctx.lr = 0x837BCF38;
	sub_833CF298(ctx, base);
	// addi r3,r31,-60
	ctx.r3.s64 = ctx.r31.s64 + -60;
	// bl 0x833cf2a8
	ctx.lr = 0x837BCF40;
	sub_833CF2A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x833cf2b8
	ctx.lr = 0x837BCF48;
	sub_833CF2B8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r5,172(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// bl 0x83498e90
	ctx.lr = 0x837BCF58;
	sub_83498E90(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833cd780
	ctx.lr = 0x837BCF60;
	sub_833CD780(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BCF68"))) PPC_WEAK_FUNC(sub_837BCF68);
PPC_FUNC_IMPL(__imp__sub_837BCF68) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x837b9378
	ctx.lr = 0x837BCF90;
	sub_837B9378(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837bb778
	ctx.lr = 0x837BCF9C;
	sub_837BB778(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d4ad0
	ctx.lr = 0x837BCFB0;
	sub_833D4AD0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x837bcfc4
	if (!cr6.lt) goto loc_837BCFC4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_837BCFC4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,-10896(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10896);
	// bl 0x837bbcf0
	ctx.lr = 0x837BCFE4;
	sub_837BBCF0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837BCFF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83498ee8
	ctx.lr = 0x837BD00C;
	sub_83498EE8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833cd338
	ctx.lr = 0x837BD014;
	sub_833CD338(ctx, base);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837bd034
	if (cr6.lt) goto loc_837BD034;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BD034;
	sub_825952B8(ctx, base);
loc_837BD034:
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

__attribute__((alias("__imp__sub_837BD04C"))) PPC_WEAK_FUNC(sub_837BD04C);
PPC_FUNC_IMPL(__imp__sub_837BD04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BD050"))) PPC_WEAK_FUNC(sub_837BD050);
PPC_FUNC_IMPL(__imp__sub_837BD050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837BD058;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-27724
	ctx.r10.s64 = ctx.r11.s64 + -27724;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x8381b9d0
	ctx.lr = 0x837BD088;
	sub_8381B9D0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x837b9ac8
	ctx.lr = 0x837BD098;
	sub_837B9AC8(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// stb r29,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r29.u8);
	// stb r29,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r29.u8);
	// bl 0x833d57c0
	ctx.lr = 0x837BD0C4;
	sub_833D57C0(ctx, base);
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-11056(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11056);
	// bl 0x833ec928
	ctx.lr = 0x837BD0DC;
	sub_833EC928(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833d0250
	ctx.lr = 0x837BD0E4;
	sub_833D0250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bd118
	if (cr6.eq) goto loc_837BD118;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837BD104;
	sub_82595718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x833d0298
	ctx.lr = 0x837BD118;
	sub_833D0298(ctx, base);
loc_837BD118:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x833cd780
	ctx.lr = 0x837BD120;
	sub_833CD780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BD12C"))) PPC_WEAK_FUNC(sub_837BD12C);
PPC_FUNC_IMPL(__imp__sub_837BD12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BD130"))) PPC_WEAK_FUNC(sub_837BD130);
PPC_FUNC_IMPL(__imp__sub_837BD130) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-27724
	ctx.r10.s64 = ctx.r11.s64 + -27724;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x837bd170
	if (cr6.eq) goto loc_837BD170;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837BD170;
	sub_825952B8(ctx, base);
loc_837BD170:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837bd188
	if (cr6.eq) goto loc_837BD188;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837BD188;
	sub_825952B8(ctx, base);
loc_837BD188:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bd1a0
	if (cr6.eq) goto loc_837BD1A0;
	// bl 0x83103e98
	ctx.lr = 0x837BD19C;
	sub_83103E98(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_837BD1A0:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bd1b4
	if (cr6.eq) goto loc_837BD1B4;
	// bl 0x83103e98
	ctx.lr = 0x837BD1B0;
	sub_83103E98(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_837BD1B4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bd1c8
	if (cr6.eq) goto loc_837BD1C8;
	// bl 0x83103e98
	ctx.lr = 0x837BD1C4;
	sub_83103E98(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_837BD1C8:
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x837ba508
	ctx.lr = 0x837BD1DC;
	sub_837BA508(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BD1F0;
	sub_825952B8(ctx, base);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x837BD204;
	sub_82D0E798(ctx, base);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x825952b8
	ctx.lr = 0x837BD214;
	sub_825952B8(ctx, base);
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

__attribute__((alias("__imp__sub_837BD22C"))) PPC_WEAK_FUNC(sub_837BD22C);
PPC_FUNC_IMPL(__imp__sub_837BD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BD230"))) PPC_WEAK_FUNC(sub_837BD230);
PPC_FUNC_IMPL(__imp__sub_837BD230) {
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
	// bl 0x837bd130
	ctx.lr = 0x837BD250;
	sub_837BD130(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bd268
	if (cr6.eq) goto loc_837BD268;
	// bl 0x82416268
	ctx.lr = 0x837BD264;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837BD268:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BD280"))) PPC_WEAK_FUNC(sub_837BD280);
PPC_FUNC_IMPL(__imp__sub_837BD280) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-27728
	ctx.r9.s64 = ctx.r11.s64 + -27728;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837BD2B8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bd2cc
	if (cr6.eq) goto loc_837BD2CC;
	// bl 0x837bd050
	ctx.lr = 0x837BD2C4;
	sub_837BD050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x837bd2d0
	goto loc_837BD2D0;
loc_837BD2CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837BD2D0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837BD2EC"))) PPC_WEAK_FUNC(sub_837BD2EC);
PPC_FUNC_IMPL(__imp__sub_837BD2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BD2F0"))) PPC_WEAK_FUNC(sub_837BD2F0);
PPC_FUNC_IMPL(__imp__sub_837BD2F0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837BD318;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bd328
	if (cr6.eq) goto loc_837BD328;
	// bl 0x837bd280
	ctx.lr = 0x837BD324;
	sub_837BD280(ctx, base);
	// b 0x837bd32c
	goto loc_837BD32C;
loc_837BD328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837BD32C:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-12368
	ctx.r11.s64 = ctx.r11.s64 + -12368;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b9170
	ctx.lr = 0x837BD344;
	sub_837B9170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b9200
	ctx.lr = 0x837BD34C;
	sub_837B9200(ctx, base);
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

__attribute__((alias("__imp__sub_837BD360"))) PPC_WEAK_FUNC(sub_837BD360);
PPC_FUNC_IMPL(__imp__sub_837BD360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837BD368;
	__savegprlr_23(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bd38c
	if (cr6.eq) goto loc_837BD38C;
	// bl 0x837bcf68
	ctx.lr = 0x837BD384;
	sub_837BCF68(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837BD38C:
	// lwz r28,8(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x837bd39c
	if (cr6.lt) goto loc_837BD39C;
	// clrlwi r28,r28,30
	ctx.r28.u64 = ctx.r28.u32 & 0x3;
loc_837BD39C:
	// clrlwi r29,r28,31
	ctx.r29.u64 = ctx.r28.u32 & 0x1;
	// lwz r27,4(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r30,r28,31,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r28,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x8;
	// addi r8,r11,23
	ctx.r8.s64 = ctx.r11.s64 + 23;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r27,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r27.u32);
	// lwz r11,-10896(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10896);
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// rlwinm r4,r6,0,0,13
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x837bd41c
	if (!cr6.eq) goto loc_837BD41C;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bd420
	if (cr6.eq) goto loc_837BD420;
loc_837BD41C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_837BD420:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bd448
	if (cr6.eq) goto loc_837BD448;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// b 0x837bd4b8
	goto loc_837BD4B8;
loc_837BD448:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwzx r3,r4,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lbz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// lbz r26,44(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r25,45(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// lbz r23,46(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r9.u32);
	// stb r6,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r6.u8);
	// stwx r3,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r3.u32);
	// stb r26,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r26.u8);
	// stb r25,45(r10)
	PPC_STORE_U8(ctx.r10.u32 + 45, ctx.r25.u8);
	// stb r23,46(r10)
	PPC_STORE_U8(ctx.r10.u32 + 46, ctx.r23.u8);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_837BD4B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833d4ad0
	ctx.lr = 0x837BD4CC;
	sub_833D4AD0(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r10,r11,65520
	ctx.r10.u64 = ctx.r11.u64 | 65520;
	// clrlwi r11,r9,14
	ctx.r11.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x837bd544
	if (cr6.lt) goto loc_837BD544;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x837bd544
	if (cr6.gt) goto loc_837BD544;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837b9430
	ctx.lr = 0x837BD50C;
	sub_837B9430(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837BD520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83498ee8
	ctx.lr = 0x837BD534;
	sub_83498EE8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833cd338
	ctx.lr = 0x837BD53C;
	sub_833CD338(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837BD544:
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_837BD554:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x837bd554
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837BD554;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b9858
	ctx.lr = 0x837BD58C;
	sub_837B9858(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bd5e4
	if (!cr6.eq) goto loc_837BD5E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833d4ad0
	ctx.lr = 0x837BD5AC;
	sub_833D4AD0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837b9430
	ctx.lr = 0x837BD5C4;
	sub_837B9430(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83498ee8
	ctx.lr = 0x837BD5D8;
	sub_83498EE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bl 0x833cd338
	ctx.lr = 0x837BD5E4;
	sub_833CD338(ctx, base);
loc_837BD5E4:
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r26,124(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r25,120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x837bb4d0
	ctx.lr = 0x837BD60C;
	sub_837BB4D0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837bd620
	if (!cr6.lt) goto loc_837BD620;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_837BD620:
	// bl 0x83104018
	ctx.lr = 0x837BD624;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837bd698
	if (!cr6.eq) goto loc_837BD698;
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bd660
	if (cr6.eq) goto loc_837BD660;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837bb900
	ctx.lr = 0x837BD65C;
	sub_837BB900(ctx, base);
	// b 0x837bd6c8
	goto loc_837BD6C8;
loc_837BD660:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837bb4d0
	ctx.lr = 0x837BD67C;
	sub_837BB4D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x837BD690;
	sub_8259CB28(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x837BD698;
	sub_8387E8E0(ctx, base);
loc_837BD698:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837bd6ac
	if (!cr6.lt) goto loc_837BD6AC;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
loc_837BD6AC:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837bbcf0
	ctx.lr = 0x837BD6C8;
	sub_837BBCF0(ctx, base);
loc_837BD6C8:
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837bd714
	if (cr6.eq) goto loc_837BD714;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833d4b50
	ctx.lr = 0x837BD6EC;
	sub_833D4B50(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837bbba8
	ctx.lr = 0x837BD6FC;
	sub_837BBBA8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x83498ee8
	ctx.lr = 0x837BD70C;
	sub_83498EE8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833cd338
	ctx.lr = 0x837BD714;
	sub_833CD338(ctx, base);
loc_837BD714:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837BD728;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,172(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83498ee8
	ctx.lr = 0x837BD73C;
	sub_83498EE8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x837BD744;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x833cd338
	ctx.lr = 0x837BD74C;
	sub_833CD338(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BD754"))) PPC_WEAK_FUNC(sub_837BD754);
PPC_FUNC_IMPL(__imp__sub_837BD754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BD758"))) PPC_WEAK_FUNC(sub_837BD758);
PPC_FUNC_IMPL(__imp__sub_837BD758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,109(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bd774
	if (cr6.eq) goto loc_837BD774;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_837BD774:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,109(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 109);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bd7b0
	if (!cr6.eq) goto loc_837BD7B0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,109(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bd7a8
	if (!cr6.eq) goto loc_837BD7A8;
loc_837BD794:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,109(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837bd794
	if (cr6.eq) goto loc_837BD794;
loc_837BD7A8:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_837BD7B0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,109(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bd7e8
	if (!cr6.eq) goto loc_837BD7E8;
loc_837BD7C0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837bd7e8
	if (!cr6.eq) goto loc_837BD7E8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,109(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bd7c0
	if (cr6.eq) goto loc_837BD7C0;
loc_837BD7E8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,109(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 109);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BD800"))) PPC_WEAK_FUNC(sub_837BD800);
PPC_FUNC_IMPL(__imp__sub_837BD800) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,-11992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11992);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bd864
	if (cr6.eq) goto loc_837BD864;
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837BD834;
	sub_82595150(ctx, base);
	// lwz r3,-11992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bd854
	if (cr6.eq) goto loc_837BD854;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837BD854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837BD854:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837BD85C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-11992(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11992, ctx.r11.u32);
loc_837BD864:
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

__attribute__((alias("__imp__sub_837BD878"))) PPC_WEAK_FUNC(sub_837BD878);
PPC_FUNC_IMPL(__imp__sub_837BD878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,109(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 109);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bd898
	if (!cr6.eq) goto loc_837BD898;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_837BD898:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x837bd8c0
	if (!cr6.eq) goto loc_837BD8C0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_837BD8C0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x837bd8e0
	if (!cr6.eq) goto loc_837BD8E0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_837BD8E0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BD8F0"))) PPC_WEAK_FUNC(sub_837BD8F0);
PPC_FUNC_IMPL(__imp__sub_837BD8F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837BD924;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,108(r7)
	PPC_STORE_U8(ctx.r7.u32 + 108, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,109(r6)
	PPC_STORE_U8(ctx.r6.u32 + 109, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_837BD968"))) PPC_WEAK_FUNC(sub_837BD968);
PPC_FUNC_IMPL(__imp__sub_837BD968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837BD970;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837bd9dc
	if (!cr6.eq) goto loc_837BD9DC;
loc_837BD98C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bd9a8
	if (cr6.lt) goto loc_837BD9A8;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837bd9ac
	goto loc_837BD9AC;
loc_837BD9A8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_837BD9AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x837BD9B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x837bd9c8
	if (!cr6.lt) goto loc_837BD9C8;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x837bd9d0
	goto loc_837BD9D0;
loc_837BD9C8:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_837BD9D0:
	// lbz r11,109(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bd98c
	if (cr6.eq) goto loc_837BD98C;
loc_837BD9DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BD9E8"))) PPC_WEAK_FUNC(sub_837BD9E8);
PPC_FUNC_IMPL(__imp__sub_837BD9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837BD9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x837bd968
	ctx.lr = 0x837BDA0C;
	sub_837BD968(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x837bda68
	if (cr6.eq) goto loc_837BDA68;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837bda34
	if (cr6.lt) goto loc_837BDA34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837BDA34:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x837BDA48;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837bda68
	if (cr6.lt) goto loc_837BDA68;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837BDA68:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BDA88"))) PPC_WEAK_FUNC(sub_837BDA88);
PPC_FUNC_IMPL(__imp__sub_837BDA88) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837bd9e8
	ctx.lr = 0x837BDAAC;
	sub_837BD9E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x837bdad4
	if (cr6.eq) goto loc_837BDAD4;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
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
loc_837BDAD4:
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

__attribute__((alias("__imp__sub_837BDAEC"))) PPC_WEAK_FUNC(sub_837BDAEC);
PPC_FUNC_IMPL(__imp__sub_837BDAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BDAF0"))) PPC_WEAK_FUNC(sub_837BDAF0);
PPC_FUNC_IMPL(__imp__sub_837BDAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837BDAF8;
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
	ctx.lr = 0x837BDB28;
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
	ctx.lr = 0x837BDB48;
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
	ctx.lr = 0x837BDB68;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BDB74"))) PPC_WEAK_FUNC(sub_837BDB74);
PPC_FUNC_IMPL(__imp__sub_837BDB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BDB78"))) PPC_WEAK_FUNC(sub_837BDB78);
PPC_FUNC_IMPL(__imp__sub_837BDB78) {
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
	ctx.lr = 0x837BDBB4;
	sub_8259CB28(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// bl 0x82ca8938
	ctx.lr = 0x837BDBC0;
	sub_82CA8938(ctx, base);
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

__attribute__((alias("__imp__sub_837BDBDC"))) PPC_WEAK_FUNC(sub_837BDBDC);
PPC_FUNC_IMPL(__imp__sub_837BDBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BDBE0"))) PPC_WEAK_FUNC(sub_837BDBE0);
PPC_FUNC_IMPL(__imp__sub_837BDBE0) {
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
	// addi r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 + 28;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c2bd78
	ctx.lr = 0x837BDBFC;
	sub_82C2BD78(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bdc1c
	if (cr6.lt) goto loc_837BDC1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BDC1C;
	sub_825952B8(ctx, base);
loc_837BDC1C:
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

__attribute__((alias("__imp__sub_837BDC44"))) PPC_WEAK_FUNC(sub_837BDC44);
PPC_FUNC_IMPL(__imp__sub_837BDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BDC48"))) PPC_WEAK_FUNC(sub_837BDC48);
PPC_FUNC_IMPL(__imp__sub_837BDC48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837BDC50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,682
	ctx.r10.s64 = 44695552;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,43689
	ctx.r9.u64 = ctx.r10.u64 | 43689;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x837bdca0
	if (cr6.lt) goto loc_837BDCA0;
	// addi r4,r7,12
	ctx.r4.s64 = ctx.r7.s64 + 12;
	// addi r3,r30,13
	ctx.r3.s64 = ctx.r30.s64 + 13;
	// bl 0x837bdbe0
	ctx.lr = 0x837BDC80;
	sub_837BDBE0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837BDC94;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x837BDCA0;
	sub_831CC150(ctx, base);
loc_837BDCA0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x837bdcd0
	if (!cr6.eq) goto loc_837BDCD0;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x837bdd10
	goto loc_837BDD10;
loc_837BDCD0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bdcf8
	if (cr6.eq) goto loc_837BDCF8;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x837bdd10
	if (!cr6.eq) goto loc_837BDD10;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x837bdd10
	goto loc_837BDD10;
loc_837BDCF8:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x837bdd10
	if (!cr6.eq) goto loc_837BDD10;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_837BDD10:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bde34
	if (!cr6.eq) goto loc_837BDE34;
	// li r28,0
	ctx.r28.s64 = 0;
loc_837BDD2C:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x837bddb4
	if (!cr6.eq) goto loc_837BDDB4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bdd74
	if (!cr6.eq) goto loc_837BDD74;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r29.u8);
	// stb r29,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,108(r8)
	PPC_STORE_U8(ctx.r8.u32 + 108, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x837bde24
	goto loc_837BDE24;
loc_837BDD74:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837bdd8c
	if (!cr6.eq) goto loc_837BDD8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x837bd878
	ctx.lr = 0x837BDD8C;
	sub_837BD878(ctx, base);
loc_837BDD8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,108(r9)
	PPC_STORE_U8(ctx.r9.u32 + 108, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x835f7188
	ctx.lr = 0x837BDDB0;
	sub_835F7188(ctx, base);
	// b 0x837bde24
	goto loc_837BDE24;
loc_837BDDB4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bdde8
	if (!cr6.eq) goto loc_837BDDE8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r29.u8);
	// stb r29,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,108(r8)
	PPC_STORE_U8(ctx.r8.u32 + 108, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x837bde24
	goto loc_837BDE24;
loc_837BDDE8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837bde00
	if (!cr6.eq) goto loc_837BDE00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x835f7188
	ctx.lr = 0x837BDE00;
	sub_835F7188(ctx, base);
loc_837BDE00:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,108(r9)
	PPC_STORE_U8(ctx.r9.u32 + 108, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x837bd878
	ctx.lr = 0x837BDE24;
	sub_837BD878(ctx, base);
loc_837BDE24:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bdd2c
	if (cr6.eq) goto loc_837BDD2C;
loc_837BDE34:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BDE50"))) PPC_WEAK_FUNC(sub_837BDE50);
PPC_FUNC_IMPL(__imp__sub_837BDE50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837BDE58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x837bdf00
	if (cr6.eq) goto loc_837BDF00;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r5,48
	ctx.r31.s64 = ctx.r5.s64 + 48;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_837BDE80:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837bdeec
	if (cr6.eq) goto loc_837BDEEC;
	// stw r25,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837BDEA8;
	sub_8259CB28(ctx, base);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// addi r27,r28,56
	ctx.r27.s64 = ctx.r28.s64 + 56;
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// addi r3,r31,-20
	ctx.r3.s64 = ctx.r31.s64 + -20;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8259cb28
	ctx.lr = 0x837BDECC;
	sub_8259CB28(ctx, base);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837BDEEC;
	sub_8259CB28(ctx, base);
loc_837BDEEC:
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// bne cr6,0x837bde80
	if (!cr6.eq) goto loc_837BDE80;
loc_837BDF00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BDF0C"))) PPC_WEAK_FUNC(sub_837BDF0C);
PPC_FUNC_IMPL(__imp__sub_837BDF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BDF10"))) PPC_WEAK_FUNC(sub_837BDF10);
PPC_FUNC_IMPL(__imp__sub_837BDF10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837BDF18;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,109(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 109);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r5,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bdf40
	if (cr6.eq) goto loc_837BDF40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x837BDF40;
	sub_831CC188(ctx, base);
loc_837BDF40:
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x828f7630
	ctx.lr = 0x837BDF4C;
	sub_828F7630(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r10,109(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r23,228(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// beq cr6,0x837bdf68
	if (cr6.eq) goto loc_837BDF68;
	// lwz r29,8(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// b 0x837bdf8c
	goto loc_837BDF8C;
loc_837BDF68:
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lbz r9,109(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 109);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837bdf80
	if (cr6.eq) goto loc_837BDF80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x837bdf8c
	goto loc_837BDF8C;
loc_837BDF80:
	// lwz r29,8(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, xer);
	// bne cr6,0x837be078
	if (!cr6.eq) goto loc_837BE078;
loc_837BDF8C:
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// lwz r31,4(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837bdfa0
	if (!cr6.eq) goto loc_837BDFA0;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_837BDFA0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// bne cr6,0x837bdfb8
	if (!cr6.eq) goto loc_837BDFB8;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// b 0x837bdfd0
	goto loc_837BDFD0;
loc_837BDFB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bne cr6,0x837bdfcc
	if (!cr6.eq) goto loc_837BDFCC;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x837bdfd0
	goto loc_837BDFD0;
loc_837BDFCC:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_837BDFD0:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bne cr6,0x837be020
	if (!cr6.eq) goto loc_837BE020;
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bdff4
	if (cr6.eq) goto loc_837BDFF4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x837be01c
	goto loc_837BE01C;
loc_837BDFF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r8,109(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837be01c
	if (!cr6.eq) goto loc_837BE01C;
loc_837BE008:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,109(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837be008
	if (cr6.eq) goto loc_837BE008;
loc_837BE01C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_837BE020:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bne cr6,0x837be10c
	if (!cr6.eq) goto loc_837BE10C;
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837be048
	if (cr6.eq) goto loc_837BE048;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x837be10c
	goto loc_837BE10C;
loc_837BE048:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r8,109(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837be070
	if (!cr6.eq) goto loc_837BE070;
loc_837BE05C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,109(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x837be05c
	if (cr6.eq) goto loc_837BE05C;
loc_837BE070:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x837be10c
	goto loc_837BE10C;
loc_837BE078:
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, xer);
	// bne cr6,0x837be098
	if (!cr6.eq) goto loc_837BE098;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x837be0c0
	goto loc_837BE0C0;
loc_837BE098:
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// lwz r31,4(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837be0ac
	if (!cr6.eq) goto loc_837BE0AC;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
loc_837BE0AC:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r23,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r23.u32);
loc_837BE0C0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// bne cr6,0x837be0d8
	if (!cr6.eq) goto loc_837BE0D8;
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// b 0x837be0f4
	goto loc_837BE0F4;
loc_837BE0D8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, xer);
	// bne cr6,0x837be0f0
	if (!cr6.eq) goto loc_837BE0F0;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// b 0x837be0f4
	goto loc_837BE0F4;
loc_837BE0F0:
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
loc_837BE0F4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// lbz r9,108(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 108);
	// lbz r10,108(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 108);
	// stb r9,108(r23)
	PPC_STORE_U8(ctx.r23.u32 + 108, ctx.r9.u8);
	// stb r10,108(r24)
	PPC_STORE_U8(ctx.r24.u32 + 108, ctx.r10.u8);
loc_837BE10C:
	// lbz r11,108(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 108);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837be2a4
	if (!cr6.eq) goto loc_837BE2A4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x837be2a0
	if (cr6.eq) goto loc_837BE2A0;
loc_837BE130:
	// lbz r11,108(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837be2a0
	if (!cr6.eq) goto loc_837BE2A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x837be1e8
	if (!cr6.eq) goto loc_837BE1E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837be170
	if (!cr6.eq) goto loc_837BE170;
	// stb r30,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r27,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r27.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x837bd878
	ctx.lr = 0x837BE16C;
	sub_837BD878(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_837BE170:
	// lbz r10,109(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837be23c
	if (!cr6.eq) goto loc_837BE23C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 108);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x837be19c
	if (!cr6.eq) goto loc_837BE19C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 108);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x837be238
	if (cr6.eq) goto loc_837BE238;
loc_837BE19C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 108);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x837be1c4
	if (!cr6.eq) goto loc_837BE1C4;
	// stb r30,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r27,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r27.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835f7188
	ctx.lr = 0x837BE1C0;
	sub_835F7188(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_837BE1C4:
	// lbz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r10,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,108(r9)
	PPC_STORE_U8(ctx.r9.u32 + 108, ctx.r30.u8);
	// bl 0x837bd878
	ctx.lr = 0x837BE1E4;
	sub_837BD878(ctx, base);
	// b 0x837be2a0
	goto loc_837BE2A0;
loc_837BE1E8:
	// lbz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837be20c
	if (!cr6.eq) goto loc_837BE20C;
	// stb r30,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r27,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r27.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x835f7188
	ctx.lr = 0x837BE208;
	sub_835F7188(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_837BE20C:
	// lbz r10,109(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 109);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837be23c
	if (!cr6.eq) goto loc_837BE23C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 108);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x837be258
	if (!cr6.eq) goto loc_837BE258;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 108);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x837be258
	if (!cr6.eq) goto loc_837BE258;
loc_837BE238:
	// stb r27,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r27.u8);
loc_837BE23C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x837be130
	if (!cr6.eq) goto loc_837BE130;
	// b 0x837be2a0
	goto loc_837BE2A0;
loc_837BE258:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 108);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x837be280
	if (!cr6.eq) goto loc_837BE280;
	// stb r30,108(r10)
	PPC_STORE_U8(ctx.r10.u32 + 108, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r27,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r27.u8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x837bd878
	ctx.lr = 0x837BE27C;
	sub_837BD878(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_837BE280:
	// lbz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 108);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r10,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r10.u8);
	// stb r30,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,108(r9)
	PPC_STORE_U8(ctx.r9.u32 + 108, ctx.r30.u8);
	// bl 0x835f7188
	ctx.lr = 0x837BE2A0;
	sub_835F7188(ctx, base);
loc_837BE2A0:
	// stb r30,108(r29)
	PPC_STORE_U8(ctx.r29.u32 + 108, ctx.r30.u8);
loc_837BE2A4:
	// addi r31,r24,12
	ctx.r31.s64 = ctx.r24.s64 + 12;
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// addi r30,r29,40
	ctx.r30.s64 = ctx.r29.s64 + 40;
	// blt cr6,0x837be2d0
	if (cr6.lt) goto loc_837BE2D0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE2D0;
	sub_825952B8(ctx, base);
loc_837BE2D0:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837be300
	if (cr6.lt) goto loc_837BE300;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE300;
	sub_825952B8(ctx, base);
loc_837BE300:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// stb r27,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r27.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837be328
	if (cr6.lt) goto loc_837BE328;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE328;
	sub_825952B8(ctx, base);
loc_837BE328:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE344;
	sub_825952B8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837be358
	if (cr6.eq) goto loc_837BE358;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
loc_837BE358:
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BE368"))) PPC_WEAK_FUNC(sub_837BE368);
PPC_FUNC_IMPL(__imp__sub_837BE368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837BE370;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,109(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 109);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837be450
	if (!cr6.eq) goto loc_837BE450;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
loc_837BE398:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x837be368
	ctx.lr = 0x837BE3A4;
	sub_837BE368(ctx, base);
	// addi r30,r26,12
	ctx.r30.s64 = ctx.r26.s64 + 12;
	// lwz r11,100(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// addi r29,r30,28
	ctx.r29.s64 = ctx.r30.s64 + 28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// blt cr6,0x837be3d0
	if (cr6.lt) goto loc_837BE3D0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE3D0;
	sub_825952B8(ctx, base);
loc_837BE3D0:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837be3fc
	if (cr6.lt) goto loc_837BE3FC;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE3FC;
	sub_825952B8(ctx, base);
loc_837BE3FC:
	// stw r25,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r25.u32);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837be424
	if (cr6.lt) goto loc_837BE424;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE424;
	sub_825952B8(ctx, base);
loc_837BE424:
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE440;
	sub_825952B8(ctx, base);
	// lbz r11,109(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 109);
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837be398
	if (cr6.eq) goto loc_837BE398;
loc_837BE450:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BE458"))) PPC_WEAK_FUNC(sub_837BE458);
PPC_FUNC_IMPL(__imp__sub_837BE458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837BE460;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r31,r5,12
	ctx.r31.s64 = ctx.r5.s64 + 12;
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837be52c
	if (!cr6.eq) goto loc_837BE52C;
	// clrlwi r24,r6,24
	ctx.r24.u64 = ctx.r6.u32 & 0xFF;
loc_837BE494:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x837be4d8
	if (cr6.eq) goto loc_837BE4D8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837be4bc
	if (cr6.lt) goto loc_837BE4BC;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837be4c0
	goto loc_837BE4C0;
loc_837BE4BC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_837BE4C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x837BE4CC;
	sub_827A8810(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r30,r11,1
	ctx.r30.u64 = ctx.r11.u64 ^ 1;
	// b 0x837be508
	goto loc_837BE508;
loc_837BE4D8:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837be4f0
	if (cr6.lt) goto loc_837BE4F0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837BE4F0:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x837BE504;
	sub_827A8810(ctx, base);
	// rlwinm r30,r3,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
loc_837BE508:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837be51c
	if (cr6.eq) goto loc_837BE51C;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x837be520
	goto loc_837BE520;
loc_837BE51C:
	// lwz r29,8(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_837BE520:
	// lbz r11,109(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 109);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837be494
	if (cr6.eq) goto loc_837BE494;
loc_837BE52C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837be58c
	if (cr6.eq) goto loc_837BE58C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// bne cr6,0x837be584
	if (!cr6.eq) goto loc_837BE584;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x837bdc48
	ctx.lr = 0x837BE568;
	sub_837BDC48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837BE584:
	// bl 0x837bd758
	ctx.lr = 0x837BE588;
	sub_837BD758(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_837BE58C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837be5a8
	if (cr6.lt) goto loc_837BE5A8;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837be5ac
	goto loc_837BE5AC;
loc_837BE5A8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_837BE5AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x827a8810
	ctx.lr = 0x837BE5B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x837be5f4
	if (!cr6.lt) goto loc_837BE5F4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837bdc48
	ctx.lr = 0x837BE5D8;
	sub_837BDC48(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r23,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r23.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837BE5F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,13
	ctx.r3.s64 = ctx.r26.s64 + 13;
	// bl 0x837bdbe0
	ctx.lr = 0x837BE600;
	sub_837BDBE0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837BE614;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BE62C"))) PPC_WEAK_FUNC(sub_837BE62C);
PPC_FUNC_IMPL(__imp__sub_837BE62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BE630"))) PPC_WEAK_FUNC(sub_837BE630);
PPC_FUNC_IMPL(__imp__sub_837BE630) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x837BE674;
	sub_8259CB28(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82ca8938
	ctx.lr = 0x837BE680;
	sub_82CA8938(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837be694
	if (cr6.eq) goto loc_837BE694;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837bdb78
	ctx.lr = 0x837BE694;
	sub_837BDB78(ctx, base);
loc_837BE694:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82c2bd78
	ctx.lr = 0x837BE69C;
	sub_82C2BD78(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837be6bc
	if (cr6.lt) goto loc_837BE6BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BE6BC;
	sub_825952B8(ctx, base);
loc_837BE6BC:
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

__attribute__((alias("__imp__sub_837BE6D4"))) PPC_WEAK_FUNC(sub_837BE6D4);
PPC_FUNC_IMPL(__imp__sub_837BE6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BE6D8"))) PPC_WEAK_FUNC(sub_837BE6D8);
PPC_FUNC_IMPL(__imp__sub_837BE6D8) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837bd9e8
	ctx.lr = 0x837BE704;
	sub_837BD9E8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837be72c
	if (cr6.eq) goto loc_837BE72C;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x834f0fb8
	ctx.lr = 0x837BE71C;
	sub_834F0FB8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837bdf10
	ctx.lr = 0x837BE72C;
	sub_837BDF10(ctx, base);
loc_837BE72C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BE744"))) PPC_WEAK_FUNC(sub_837BE744);
PPC_FUNC_IMPL(__imp__sub_837BE744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BE748"))) PPC_WEAK_FUNC(sub_837BE748);
PPC_FUNC_IMPL(__imp__sub_837BE748) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x837be368
	ctx.lr = 0x837BE768;
	sub_837BE368(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_837BE79C"))) PPC_WEAK_FUNC(sub_837BE79C);
PPC_FUNC_IMPL(__imp__sub_837BE79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BE7A0"))) PPC_WEAK_FUNC(sub_837BE7A0);
PPC_FUNC_IMPL(__imp__sub_837BE7A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837BE7A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x837be7f4
	if (!cr6.eq) goto loc_837BE7F4;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x837be7f4
	if (!cr6.eq) goto loc_837BE7F4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x837be748
	ctx.lr = 0x837BE7DC;
	sub_837BE748(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837BE7F4:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x837be824
	if (cr6.eq) goto loc_837BE824;
loc_837BE7FC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x828f7630
	ctx.lr = 0x837BE808;
	sub_828F7630(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837bdf10
	ctx.lr = 0x837BE818;
	sub_837BDF10(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x837be7fc
	if (!cr6.eq) goto loc_837BE7FC;
loc_837BE824:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BE834"))) PPC_WEAK_FUNC(sub_837BE834);
PPC_FUNC_IMPL(__imp__sub_837BE834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BE838"))) PPC_WEAK_FUNC(sub_837BE838);
PPC_FUNC_IMPL(__imp__sub_837BE838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837BE840;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,780
	ctx.r11.s64 = 51118080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,12483
	ctx.r10.u64 = ctx.r11.u64 | 12483;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x837be864
	if (!cr6.gt) goto loc_837BE864;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x837BE864;
	sub_831CC150(ctx, base);
loc_837BE864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,84
	ctx.r26.s64 = 84;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x837be908
	if (!cr6.lt) goto loc_837BE908;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,84
	ctx.r28.s64 = ctx.r4.s64 * 84;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837BE89C;
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
	// bl 0x837bde50
	ctx.lr = 0x837BE8C0;
	sub_837BDE50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r26,r11,r26
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// beq cr6,0x837be8f0
	if (cr6.eq) goto loc_837BE8F0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d679e0
	ctx.lr = 0x837BE8E0;
	sub_82D679E0(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x837BE8F0;
	sub_825952B8(ctx, base);
loc_837BE8F0:
	// mulli r11,r26,84
	ctx.r11.s64 = ctx.r26.s64 * 84;
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
loc_837BE908:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BE910"))) PPC_WEAK_FUNC(sub_837BE910);
PPC_FUNC_IMPL(__imp__sub_837BE910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x837BE918;
	__savegprlr_21(ctx, base);
	// stwu r1,-768(r1)
	ea = -768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// bl 0x837bd9e8
	ctx.lr = 0x837BE940;
	sub_837BD9E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x837beea4
	if (!cr6.eq) goto loc_837BEEA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834fc7e8
	ctx.lr = 0x837BE958;
	sub_834FC7E8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r11,-26936
	ctx.r29.s64 = ctx.r11.s64 + -26936;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r29,-616
	ctx.r4.s64 = ctx.r29.s64 + -616;
	// bl 0x837b0c10
	ctx.lr = 0x837BE970;
	sub_837B0C10(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837be988
	if (cr6.lt) goto loc_837BE988;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x837be98c
	goto loc_837BE98C;
loc_837BE988:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_837BE98C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x827a8810
	ctx.lr = 0x837BE99C;
	sub_827A8810(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blt cr6,0x837be9c4
	if (cr6.lt) goto loc_837BE9C4;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x825952b8
	ctx.lr = 0x837BE9C4;
	sub_825952B8(ctx, base);
loc_837BE9C4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// beq cr6,0x837bec50
	if (cr6.eq) goto loc_837BEC50;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// bl 0x82427200
	ctx.lr = 0x837BEA00;
	sub_82427200(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_837BEA04:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r4,r29,-608
	ctx.r4.s64 = ctx.r29.s64 + -608;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x837BEA20;
	sub_8259CC28(ctx, base);
	// addi r5,r29,-556
	ctx.r5.s64 = ctx.r29.s64 + -556;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x831d0b08
	ctx.lr = 0x837BEA34;
	sub_831D0B08(ctx, base);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_837BEA48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bea48
	if (!cr6.eq) goto loc_837BEA48;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837BEA70;
	sub_8259CC28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x837BEA84;
	sub_825A1DA8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837beaa0
	if (cr6.lt) goto loc_837BEAA0;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x837BEAA0;
	sub_825952B8(ctx, base);
loc_837BEAA0:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r29,-552
	ctx.r4.s64 = ctx.r29.s64 + -552;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837BEABC;
	sub_825A1EB8(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837bead0
	if (!cr6.lt) goto loc_837BEAD0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_837BEAD0:
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82420a60
	ctx.lr = 0x837BEAD8;
	sub_82420A60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82437c50
	ctx.lr = 0x837BEAE4;
	sub_82437C50(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8241fb00
	ctx.lr = 0x837BEAEC;
	sub_8241FB00(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837beb08
	if (cr6.lt) goto loc_837BEB08;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837BEB08;
	sub_825952B8(ctx, base);
loc_837BEB08:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x837bea04
	if (cr6.lt) goto loc_837BEA04;
	// addi r7,r29,-544
	ctx.r7.s64 = ctx.r29.s64 + -544;
	// addi r6,r29,-464
	ctx.r6.s64 = ctx.r29.s64 + -464;
	// addi r5,r29,-392
	ctx.r5.s64 = ctx.r29.s64 + -392;
	// addi r4,r29,-320
	ctx.r4.s64 = ctx.r29.s64 + -320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x834f5c60
	ctx.lr = 0x837BEB3C;
	sub_834F5C60(ctx, base);
	// li r4,2956
	ctx.r4.s64 = 2956;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x834f6488
	ctx.lr = 0x837BEB48;
	sub_834F6488(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r28,2956
	ctx.r28.s64 = 2956;
	// addi r29,r11,-24680
	ctx.r29.s64 = ctx.r11.s64 + -24680;
loc_837BEB54:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_837BEB68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837beb68
	if (!cr6.eq) goto loc_837BEB68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837BEB8C;
	sub_8259CC28(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x837beba0
	if (!cr6.lt) goto loc_837BEBA0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_837BEBA0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x834fc640
	ctx.lr = 0x837BEBA8;
	sub_834FC640(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bebc4
	if (cr6.lt) goto loc_837BEBC4;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x837BEBC4;
	sub_825952B8(ctx, base);
loc_837BEBC4:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bne 0x837beb54
	if (!cr0.eq) goto loc_837BEB54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r11,10396
	ctx.r9.s64 = ctx.r11.s64 + 10396;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r10,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r10.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r8,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r8.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r7,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r7.u32);
	// stw r6,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r5,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r5.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8247b7d8
	ctx.lr = 0x837BEC1C;
	sub_8247B7D8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bec40
	if (cr6.eq) goto loc_837BEC40;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x837BEC38;
	sub_8247B268(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
loc_837BEC40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,8980
	ctx.r10.s64 = ctx.r11.s64 + 8980;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x837bec78
	goto loc_837BEC78;
loc_837BEC50:
	// addi r7,r29,-248
	ctx.r7.s64 = ctx.r29.s64 + -248;
	// addi r6,r29,-160
	ctx.r6.s64 = ctx.r29.s64 + -160;
	// addi r5,r29,-80
	ctx.r5.s64 = ctx.r29.s64 + -80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x834f5c60
	ctx.lr = 0x837BEC6C;
	sub_834F5C60(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x834f6488
	ctx.lr = 0x837BEC78;
	sub_834F6488(ctx, base);
loc_837BEC78:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x834fd130
	ctx.lr = 0x837BEC80;
	sub_834FD130(ctx, base);
	// stw r26,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r26.u32);
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// stb r31,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r31.u8);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837BECB8;
	sub_8259CB28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x8259cb28
	ctx.lr = 0x837BECCC;
	sub_8259CB28(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x837BECEC;
	sub_8259CB28(ctx, base);
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x8259cb28
	ctx.lr = 0x837BED0C;
	sub_8259CB28(ctx, base);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r9,296(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// stw r31,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r31.u32);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// stb r31,408(r1)
	PPC_STORE_U8(ctx.r1.u32 + 408, ctx.r31.u8);
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r11.u32);
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// stw r9,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x837BED44;
	sub_8259CB28(ctx, base);
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// bl 0x8259cb28
	ctx.lr = 0x837BED64;
	sub_8259CB28(ctx, base);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837bed80
	if (cr6.lt) goto loc_837BED80;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x837BED80;
	sub_825952B8(ctx, base);
loc_837BED80:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// bl 0x82595718
	ctx.lr = 0x837BEDA0;
	sub_82595718(ctx, base);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r3,r24,13
	ctx.r3.s64 = ctx.r24.s64 + 13;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// stb r31,108(r29)
	PPC_STORE_U8(ctx.r29.u32 + 108, ctx.r31.u8);
	// stb r31,109(r29)
	PPC_STORE_U8(ctx.r29.u32 + 109, ctx.r31.u8);
	// bl 0x837be630
	ctx.lr = 0x837BEDD4;
	sub_837BE630(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x837be458
	ctx.lr = 0x837BEDE8;
	sub_837BE458(ctx, base);
	// lwz r8,456(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x837bee04
	if (cr6.lt) goto loc_837BEE04;
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,436(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x825952b8
	ctx.lr = 0x837BEE04;
	sub_825952B8(ctx, base);
loc_837BEE04:
	// lwz r11,428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// stw r30,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r30.u32);
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,436(r1)
	PPC_STORE_U8(ctx.r1.u32 + 436, ctx.r31.u8);
	// blt cr6,0x837bee2c
	if (cr6.lt) goto loc_837BEE2C;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,408(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// bl 0x825952b8
	ctx.lr = 0x837BEE2C;
	sub_825952B8(ctx, base);
loc_837BEE2C:
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// stw r31,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,408(r1)
	PPC_STORE_U8(ctx.r1.u32 + 408, ctx.r31.u8);
	// blt cr6,0x837bee54
	if (cr6.lt) goto loc_837BEE54;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x837BEE54;
	sub_825952B8(ctx, base);
loc_837BEE54:
	// lwz r11,348(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// blt cr6,0x837bee7c
	if (cr6.lt) goto loc_837BEE7C;
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x825952b8
	ctx.lr = 0x837BEE7C;
	sub_825952B8(ctx, base);
loc_837BEE7C:
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r31.u8);
	// blt cr6,0x837beea4
	if (cr6.lt) goto loc_837BEEA4;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x825952b8
	ctx.lr = 0x837BEEA4;
	sub_825952B8(ctx, base);
loc_837BEEA4:
	// addi r1,r1,768
	ctx.r1.s64 = ctx.r1.s64 + 768;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BEEAC"))) PPC_WEAK_FUNC(sub_837BEEAC);
PPC_FUNC_IMPL(__imp__sub_837BEEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BEEB0"))) PPC_WEAK_FUNC(sub_837BEEB0);
PPC_FUNC_IMPL(__imp__sub_837BEEB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,780
	ctx.r10.s64 = 51118080;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,84
	ctx.r9.s64 = 84;
	// ori r8,r10,12483
	ctx.r8.u64 = ctx.r10.u64 | 12483;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x837beee4
	if (!cr6.lt) goto loc_837BEEE4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_837BEEE4:
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
	// blt cr6,0x837bef14
	if (cr6.lt) goto loc_837BEF14;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_837BEF14:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x837bef20
	if (!cr6.lt) goto loc_837BEF20;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_837BEF20:
	// b 0x837be838
	sub_837BE838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BEF24"))) PPC_WEAK_FUNC(sub_837BEF24);
PPC_FUNC_IMPL(__imp__sub_837BEF24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BEF28"))) PPC_WEAK_FUNC(sub_837BEF28);
PPC_FUNC_IMPL(__imp__sub_837BEF28) {
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
	// bge cr6,0x837bef60
	if (!cr6.lt) goto loc_837BEF60;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x837bef64
	if (!cr6.gt) goto loc_837BEF64;
loc_837BEF60:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837BEF64:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837befb4
	if (cr6.eq) goto loc_837BEFB4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,84
	ctx.r9.s64 = 84;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x837bef98
	if (!cr6.eq) goto loc_837BEF98;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837beeb0
	ctx.lr = 0x837BEF98;
	sub_837BEEB0(ctx, base);
loc_837BEF98:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837befe0
	if (cr6.eq) goto loc_837BEFE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 * 84;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x837befdc
	goto loc_837BEFDC;
loc_837BEFB4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837befcc
	if (!cr6.eq) goto loc_837BEFCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837beeb0
	ctx.lr = 0x837BEFCC;
	sub_837BEEB0(ctx, base);
loc_837BEFCC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837befe0
	if (cr6.eq) goto loc_837BEFE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_837BEFDC:
	// bl 0x837bdaf0
	ctx.lr = 0x837BEFE0;
	sub_837BDAF0(ctx, base);
loc_837BEFE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
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

__attribute__((alias("__imp__sub_837BF004"))) PPC_WEAK_FUNC(sub_837BF004);
PPC_FUNC_IMPL(__imp__sub_837BF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BF008"))) PPC_WEAK_FUNC(sub_837BF008);
PPC_FUNC_IMPL(__imp__sub_837BF008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837BF010;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// beq cr6,0x837bf0e8
	if (cr6.eq) goto loc_837BF0E8;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,15
	ctx.r29.s64 = 15;
loc_837BF048:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stb r31,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r31.u8);
	// bl 0x8259cb28
	ctx.lr = 0x837BF088;
	sub_8259CB28(ctx, base);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x8259cb28
	ctx.lr = 0x837BF09C;
	sub_8259CB28(ctx, base);
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259cb28
	ctx.lr = 0x837BF0B0;
	sub_8259CB28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837bef28
	ctx.lr = 0x837BF0BC;
	sub_837BEF28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837bdf10
	ctx.lr = 0x837BF0CC;
	sub_837BDF10(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d636d8
	ctx.lr = 0x837BF0D4;
	sub_82D636D8(ctx, base);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bf048
	if (!cr6.eq) goto loc_837BF048;
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_837BF0E8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// beq cr6,0x837bf114
	if (cr6.eq) goto loc_837BF114;
loc_837BF0F4:
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r5,28
	ctx.r6.s64 = ctx.r5.s64 + 28;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837be910
	ctx.lr = 0x837BF108;
	sub_837BE910(ctx, base);
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x837bf0f4
	if (!cr6.eq) goto loc_837BF0F4;
loc_837BF114:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837bf140
	if (cr6.eq) goto loc_837BF140;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d679e0
	ctx.lr = 0x837BF12C;
	sub_82D679E0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837BF140;
	sub_825952B8(ctx, base);
loc_837BF140:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BF148"))) PPC_WEAK_FUNC(sub_837BF148);
PPC_FUNC_IMPL(__imp__sub_837BF148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837BF150;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r11,-26796
	ctx.r9.s64 = ctx.r11.s64 + -26796;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x837bf218
	if (cr6.eq) goto loc_837BF218;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
loc_837BF174:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837bd968
	ctx.lr = 0x837BF18C;
	sub_837BD968(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x837bf1d8
	if (cr6.eq) goto loc_837BF1D8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837bf1b4
	if (cr6.lt) goto loc_837BF1B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837BF1B4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827a8810
	ctx.lr = 0x837BF1C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x837bf1d8
	if (cr6.lt) goto loc_837BF1D8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x837bf1e4
	goto loc_837BF1E4;
loc_837BF1D8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_837BF1E4:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837bf20c
	if (cr6.eq) goto loc_837BF20C;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x834f0fb8
	ctx.lr = 0x837BF1FC;
	sub_834F0FB8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x837bdf10
	ctx.lr = 0x837BF20C;
	sub_837BDF10(ctx, base);
loc_837BF20C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837bf174
	if (!cr6.eq) goto loc_837BF174;
loc_837BF218:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r10,-11992(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11992);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837bf230
	if (cr6.eq) goto loc_837BF230;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-11992(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11992, ctx.r10.u32);
loc_837BF230:
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x837be7a0
	ctx.lr = 0x837BF244;
	sub_837BE7A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BF258;
	sub_825952B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BF260"))) PPC_WEAK_FUNC(sub_837BF260);
PPC_FUNC_IMPL(__imp__sub_837BF260) {
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
	// bl 0x837bf148
	ctx.lr = 0x837BF280;
	sub_837BF148(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bf298
	if (cr6.eq) goto loc_837BF298;
	// bl 0x82416268
	ctx.lr = 0x837BF294;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837BF298:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BF2B0"))) PPC_WEAK_FUNC(sub_837BF2B0);
PPC_FUNC_IMPL(__imp__sub_837BF2B0) {
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
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lwz r3,-11992(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -11992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837bf328
	if (!cr6.eq) goto loc_837BF328;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837BF2EC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bf320
	if (cr6.eq) goto loc_837BF320;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-26796
	ctx.r10.s64 = ctx.r11.s64 + -26796;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x837bd8f0
	ctx.lr = 0x837BF314;
	sub_837BD8F0(ctx, base);
	// stw r31,-11992(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11992, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x837bf328
	goto loc_837BF328;
loc_837BF320:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,-11992(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11992, ctx.r3.u32);
loc_837BF328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BF340"))) PPC_WEAK_FUNC(sub_837BF340);
PPC_FUNC_IMPL(__imp__sub_837BF340) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-25112
	ctx.r4.s64 = ctx.r11.s64 + -25112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x837BF368;
	sub_83103328(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-25136
	ctx.r9.s64 = ctx.r10.s64 + -25136;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837BF394"))) PPC_WEAK_FUNC(sub_837BF394);
PPC_FUNC_IMPL(__imp__sub_837BF394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BF398"))) PPC_WEAK_FUNC(sub_837BF398);
PPC_FUNC_IMPL(__imp__sub_837BF398) {
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
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x8257fad0
	ctx.lr = 0x837BF3B8;
	sub_8257FAD0(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r31,-11972(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + -11972);
	// blt cr6,0x837bf3d8
	if (cr6.lt) goto loc_837BF3D8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837BF3D8;
	sub_8257FB60(ctx, base);
loc_837BF3D8:
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

__attribute__((alias("__imp__sub_837BF3F0"))) PPC_WEAK_FUNC(sub_837BF3F0);
PPC_FUNC_IMPL(__imp__sub_837BF3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837BF3F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x837BF414;
	sub_8257FAD0(ctx, base);
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,-11972(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -11972);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837bf434
	if (!cr6.eq) goto loc_837BF434;
	// bl 0x837ad9b8
	ctx.lr = 0x837BF42C;
	sub_837AD9B8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,-11972(r31)
	PPC_STORE_U8(ctx.r31.u32 + -11972, ctx.r29.u8);
loc_837BF434:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bf480
	if (cr6.eq) goto loc_837BF480;
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837BF454;
	sub_82595150(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bf474
	if (cr6.eq) goto loc_837BF474;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837BF474;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837BF474:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837BF47C;
	sub_82595170(ctx, base);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
loc_837BF480:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837bf49c
	if (cr6.lt) goto loc_837BF49C;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837BF49C;
	sub_8257FB60(ctx, base);
loc_837BF49C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BF4A4"))) PPC_WEAK_FUNC(sub_837BF4A4);
PPC_FUNC_IMPL(__imp__sub_837BF4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BF4A8"))) PPC_WEAK_FUNC(sub_837BF4A8);
PPC_FUNC_IMPL(__imp__sub_837BF4A8) {
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
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x837BF4D0;
	sub_8257FAD0(ctx, base);
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lbz r11,-11972(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -11972);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bf500
	if (cr6.eq) goto loc_837BF500;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837bf4f8
	if (cr6.lt) goto loc_837BF4F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837BF4F8;
	sub_8257FB60(ctx, base);
loc_837BF4F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837bf5b0
	goto loc_837BF5B0;
loc_837BF500:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bf594
	if (cr6.eq) goto loc_837BF594;
	// bl 0x8379e6b8
	ctx.lr = 0x837BF510;
	sub_8379E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837bf594
	if (!cr6.eq) goto loc_837BF594;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,-25228
	ctx.r31.s64 = ctx.r11.s64 + -25228;
	// addi r4,r31,-968
	ctx.r4.s64 = ctx.r31.s64 + -968;
	// bl 0x837b0c10
	ctx.lr = 0x837BF530;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-456
	ctx.r4.s64 = ctx.r31.s64 + -456;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x837BF53C;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x837BF548;
	sub_837B0C10(ctx, base);
	// bl 0x837bf2b0
	ctx.lr = 0x837BF54C;
	sub_837BF2B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x837be910
	ctx.lr = 0x837BF55C;
	sub_837BE910(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837BF564;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x837BF56C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x837BF574;
	sub_8387E8E0(ctx, base);
	// bl 0x837ae778
	ctx.lr = 0x837BF578;
	sub_837AE778(ctx, base);
	// bl 0x837c5778
	ctx.lr = 0x837BF57C;
	sub_837C5778(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,-11972(r30)
	PPC_STORE_U8(ctx.r30.u32 + -11972, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x837BF58C;
	sub_82467848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x837bf5b0
	goto loc_837BF5B0;
loc_837BF594:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837bf5ac
	if (cr6.lt) goto loc_837BF5AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837BF5AC;
	sub_8257FB60(ctx, base);
loc_837BF5AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837BF5B0:
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

__attribute__((alias("__imp__sub_837BF5C8"))) PPC_WEAK_FUNC(sub_837BF5C8);
PPC_FUNC_IMPL(__imp__sub_837BF5C8) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bf614
	if (cr6.eq) goto loc_837BF614;
	// bl 0x837bf4a8
	ctx.lr = 0x837BF5EC;
	sub_837BF4A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bf614
	if (cr6.eq) goto loc_837BF614;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837BF614;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837BF614:
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

__attribute__((alias("__imp__sub_837BF628"))) PPC_WEAK_FUNC(sub_837BF628);
PPC_FUNC_IMPL(__imp__sub_837BF628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x837BF630;
	__savegprlr_22(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257fad0
	ctx.lr = 0x837BF648;
	sub_8257FAD0(ctx, base);
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837bfaf0
	if (!cr6.eq) goto loc_837BFAF0;
	// bl 0x831021a0
	ctx.lr = 0x837BF658;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x837BF660;
	sub_82DA45F8(ctx, base);
	// li r30,19
	ctx.r30.s64 = 19;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82595718
	ctx.lr = 0x837BF67C;
	sub_82595718(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bf690
	if (cr6.eq) goto loc_837BF690;
	// bl 0x825ac748
	ctx.lr = 0x837BF68C;
	sub_825AC748(ctx, base);
	// b 0x837bf694
	goto loc_837BF694;
loc_837BF690:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837BF694:
	// stw r3,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x837BF6AC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bf6c4
	if (cr6.eq) goto loc_837BF6C4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x837bf340
	ctx.lr = 0x837BF6BC;
	sub_837BF340(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x837bf6c8
	goto loc_837BF6C8;
loc_837BF6C4:
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
loc_837BF6C8:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// addi r29,r11,-26260
	ctx.r29.s64 = ctx.r11.s64 + -26260;
	// addi r4,r29,-420
	ctx.r4.s64 = ctx.r29.s64 + -420;
	// bl 0x8379ebe0
	ctx.lr = 0x837BF6DC;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,-292
	ctx.r4.s64 = ctx.r29.s64 + -292;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF6E8;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,-220
	ctx.r4.s64 = ctx.r29.s64 + -220;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF6F4;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,-148
	ctx.r4.s64 = ctx.r29.s64 + -148;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF700;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF70C;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,76
	ctx.r4.s64 = ctx.r29.s64 + 76;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF718;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,148
	ctx.r4.s64 = ctx.r29.s64 + 148;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF724;
	sub_8379EBE0(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-6440
	ctx.r27.s64 = ctx.r11.s64 + -6440;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r24,2
	ctx.r24.s64 = 2;
loc_837BF73C:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r29,-472
	ctx.r4.s64 = ctx.r29.s64 + -472;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x837BF758;
	sub_8259CC28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x837BF768;
	sub_82AB6970(ctx, base);
	// addi r4,r29,-352
	ctx.r4.s64 = ctx.r29.s64 + -352;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x825a1eb8
	ctx.lr = 0x837BF774;
	sub_825A1EB8(ctx, base);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8292a448
	ctx.lr = 0x837BF78C;
	sub_8292A448(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x837BF7A0;
	sub_8259CB28(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bf7bc
	if (cr6.lt) goto loc_837BF7BC;
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x837BF7BC;
	sub_825952B8(ctx, base);
loc_837BF7BC:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x837bf7e4
	if (cr6.lt) goto loc_837BF7E4;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x837BF7E4;
	sub_825952B8(ctx, base);
loc_837BF7E4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// bge cr6,0x837bf804
	if (!cr6.lt) goto loc_837BF804;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_837BF804:
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF80C;
	sub_8379EBE0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bf828
	if (cr6.lt) goto loc_837BF828;
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x837BF828;
	sub_825952B8(ctx, base);
loc_837BF828:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r11,r27,148
	ctx.r11.s64 = ctx.r27.s64 + 148;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x837bf73c
	if (cr6.lt) goto loc_837BF73C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r27,r11,-6184
	ctx.r27.s64 = ctx.r11.s64 + -6184;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_837BF850:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r4,r29,-344
	ctx.r4.s64 = ctx.r29.s64 + -344;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,50
	ctx.r5.s64 = 50;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x837BF86C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x837BF87C;
	sub_82AB6970(ctx, base);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x825a1eb8
	ctx.lr = 0x837BF888;
	sub_825A1EB8(ctx, base);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8292a448
	ctx.lr = 0x837BF8A0;
	sub_8292A448(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cb28
	ctx.lr = 0x837BF8B4;
	sub_8259CB28(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bf8d0
	if (cr6.lt) goto loc_837BF8D0;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x837BF8D0;
	sub_825952B8(ctx, base);
loc_837BF8D0:
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// blt cr6,0x837bf8f8
	if (cr6.lt) goto loc_837BF8F8;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x825952b8
	ctx.lr = 0x837BF8F8;
	sub_825952B8(ctx, base);
loc_837BF8F8:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// bge cr6,0x837bf918
	if (!cr6.lt) goto loc_837BF918;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_837BF918:
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF920;
	sub_8379EBE0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bf93c
	if (cr6.lt) goto loc_837BF93C;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837BF93C;
	sub_825952B8(ctx, base);
loc_837BF93C:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r11,r27,408
	ctx.r11.s64 = ctx.r27.s64 + 408;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x837bf850
	if (cr6.lt) goto loc_837BF850;
	// addi r4,r29,220
	ctx.r4.s64 = ctx.r29.s64 + 220;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF964;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,300
	ctx.r4.s64 = ctx.r29.s64 + 300;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF970;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,372
	ctx.r4.s64 = ctx.r29.s64 + 372;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BF97C;
	sub_8379EBE0(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r27,r11,-6928
	ctx.r27.s64 = ctx.r11.s64 + -6928;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_837BF988:
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r4,r29,444
	ctx.r4.s64 = ctx.r29.s64 + 444;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r5,45
	ctx.r5.s64 = 45;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cc28
	ctx.lr = 0x837BF9A4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x837BF9B4;
	sub_82AB6970(ctx, base);
	// addi r4,r29,492
	ctx.r4.s64 = ctx.r29.s64 + 492;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x825a1eb8
	ctx.lr = 0x837BF9C0;
	sub_825A1EB8(ctx, base);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8292a448
	ctx.lr = 0x837BF9D8;
	sub_8292A448(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x837BF9EC;
	sub_8259CB28(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bfa08
	if (cr6.lt) goto loc_837BFA08;
	// stw r24,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x837BFA08;
	sub_825952B8(ctx, base);
loc_837BFA08:
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// blt cr6,0x837bfa30
	if (cr6.lt) goto loc_837BFA30;
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x825952b8
	ctx.lr = 0x837BFA30;
	sub_825952B8(ctx, base);
loc_837BFA30:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// bge cr6,0x837bfa50
	if (!cr6.lt) goto loc_837BFA50;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_837BFA50:
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFA58;
	sub_8379EBE0(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bfa74
	if (cr6.lt) goto loc_837BFA74;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x837BFA74;
	sub_825952B8(ctx, base);
loc_837BFA74:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// addi r11,r27,384
	ctx.r11.s64 = ctx.r27.s64 + 384;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x837bf988
	if (cr6.lt) goto loc_837BF988;
	// addi r4,r29,500
	ctx.r4.s64 = ctx.r29.s64 + 500;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFA9C;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,620
	ctx.r4.s64 = ctx.r29.s64 + 620;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFAA8;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,700
	ctx.r4.s64 = ctx.r29.s64 + 700;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFAB4;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,780
	ctx.r4.s64 = ctx.r29.s64 + 780;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFAC0;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,860
	ctx.r4.s64 = ctx.r29.s64 + 860;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFACC;
	sub_8379EBE0(ctx, base);
	// addi r4,r29,948
	ctx.r4.s64 = ctx.r29.s64 + 948;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFAD8;
	sub_8379EBE0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,96(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFAE4;
	sub_8379EBE0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83103100
	ctx.lr = 0x837BFAF0;
	sub_83103100(ctx, base);
loc_837BFAF0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837bfb08
	if (cr6.lt) goto loc_837BFB08;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x837BFB08;
	sub_8257FB60(ctx, base);
loc_837BFB08:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BFB10"))) PPC_WEAK_FUNC(sub_837BFB10);
PPC_FUNC_IMPL(__imp__sub_837BFB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837BFB18;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8257fad0
	ctx.lr = 0x837BFB34;
	sub_8257FAD0(ctx, base);
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,-11964(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -11964);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837bfb9c
	if (!cr6.eq) goto loc_837BFB9C;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-24948
	ctx.r4.s64 = ctx.r11.s64 + -24948;
	// bl 0x837b0c10
	ctx.lr = 0x837BFB58;
	sub_837B0C10(ctx, base);
	// bl 0x837bf2b0
	ctx.lr = 0x837BFB5C;
	sub_837BF2B0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x837be6d8
	ctx.lr = 0x837BFB64;
	sub_837BE6D8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837bfb84
	if (cr6.lt) goto loc_837BFB84;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BFB84;
	sub_825952B8(ctx, base);
loc_837BFB84:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stb r29,-11964(r31)
	PPC_STORE_U8(ctx.r31.u32 + -11964, ctx.r29.u8);
loc_837BFB9C:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bfbe8
	if (cr6.eq) goto loc_837BFBE8;
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837BFBBC;
	sub_82595150(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bfbdc
	if (cr6.eq) goto loc_837BFBDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837BFBDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837BFBDC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837BFBE4;
	sub_82595170(ctx, base);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
loc_837BFBE8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837bfc04
	if (cr6.lt) goto loc_837BFC04;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8257fb60
	ctx.lr = 0x837BFC04;
	sub_8257FB60(ctx, base);
loc_837BFC04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BFC0C"))) PPC_WEAK_FUNC(sub_837BFC0C);
PPC_FUNC_IMPL(__imp__sub_837BFC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BFC10"))) PPC_WEAK_FUNC(sub_837BFC10);
PPC_FUNC_IMPL(__imp__sub_837BFC10) {
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
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x837BFC38;
	sub_8257FAD0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bfce4
	if (cr6.eq) goto loc_837BFCE4;
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lbz r11,-11964(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -11964);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837bfce4
	if (!cr6.eq) goto loc_837BFCE4;
	// bl 0x8379e6b8
	ctx.lr = 0x837BFC58;
	sub_8379E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bfc74
	if (cr6.eq) goto loc_837BFC74;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x837BFC6C;
	sub_82467848(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837bfd00
	goto loc_837BFD00;
loc_837BFC74:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,-24892
	ctx.r31.s64 = ctx.r11.s64 + -24892;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x837BFC88;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x837BFC94;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x837BFCA0;
	sub_837B0C10(ctx, base);
	// bl 0x837bf2b0
	ctx.lr = 0x837BFCA4;
	sub_837BF2B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x837be910
	ctx.lr = 0x837BFCB4;
	sub_837BE910(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837BFCBC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x837BFCC4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x837BFCCC;
	sub_8387E8E0(ctx, base);
	// bl 0x837c5778
	ctx.lr = 0x837BFCD0;
	sub_837C5778(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r11,-11964(r30)
	PPC_STORE_U8(ctx.r30.u32 + -11964, ctx.r11.u8);
	// bl 0x82467848
	ctx.lr = 0x837BFCE0;
	sub_82467848(ctx, base);
	// b 0x837bfcfc
	goto loc_837BFCFC;
loc_837BFCE4:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837bfcfc
	if (cr6.lt) goto loc_837BFCFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837BFCFC;
	sub_8257FB60(ctx, base);
loc_837BFCFC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837BFD00:
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

__attribute__((alias("__imp__sub_837BFD18"))) PPC_WEAK_FUNC(sub_837BFD18);
PPC_FUNC_IMPL(__imp__sub_837BFD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837BFD20;
	__savegprlr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8257fad0
	ctx.lr = 0x837BFD3C;
	sub_8257FAD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,96(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837bfea8
	if (!cr6.eq) goto loc_837BFEA8;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82595718
	ctx.lr = 0x837BFD68;
	sub_82595718(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bfd7c
	if (cr6.eq) goto loc_837BFD7C;
	// bl 0x825ac748
	ctx.lr = 0x837BFD78;
	sub_825AC748(ctx, base);
	// b 0x837bfd80
	goto loc_837BFD80;
loc_837BFD7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837BFD80:
	// stw r3,96(r25)
	PPC_STORE_U32(ctx.r25.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bfea8
	if (cr6.eq) goto loc_837BFEA8;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r29,r11,-24956
	ctx.r29.s64 = ctx.r11.s64 + -24956;
loc_837BFDA4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x837BFDC0;
	sub_8259CC28(ctx, base);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831d0a20
	ctx.lr = 0x837BFDD0;
	sub_831D0A20(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_837BFDE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837bfde4
	if (!cr6.eq) goto loc_837BFDE4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837BFE0C;
	sub_8259CC28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x837BFE20;
	sub_825A1DA8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837bfe3c
	if (cr6.lt) goto loc_837BFE3C;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837BFE3C;
	sub_825952B8(ctx, base);
loc_837BFE3C:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x837BFE58;
	sub_825A1EB8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837bfe6c
	if (!cr6.lt) goto loc_837BFE6C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_837BFE6C:
	// lwz r3,96(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837BFE74;
	sub_8379EBE0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837bfe90
	if (cr6.lt) goto loc_837BFE90;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x837BFE90;
	sub_825952B8(ctx, base);
loc_837BFE90:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x837bfda4
	if (cr6.lt) goto loc_837BFDA4;
loc_837BFEA8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837bfec0
	if (cr6.lt) goto loc_837BFEC0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8257fb60
	ctx.lr = 0x837BFEC0;
	sub_8257FB60(ctx, base);
loc_837BFEC0:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BFEC8"))) PPC_WEAK_FUNC(sub_837BFEC8);
PPC_FUNC_IMPL(__imp__sub_837BFEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837BFED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,-11956(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -11956);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x837bff44
	if (!cr6.eq) goto loc_837BFF44;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-24676
	ctx.r4.s64 = ctx.r11.s64 + -24676;
	// bl 0x837b0c10
	ctx.lr = 0x837BFF00;
	sub_837B0C10(ctx, base);
	// bl 0x837bf2b0
	ctx.lr = 0x837BFF04;
	sub_837BF2B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x837be6d8
	ctx.lr = 0x837BFF0C;
	sub_837BE6D8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837bff2c
	if (cr6.lt) goto loc_837BFF2C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837BFF2C;
	sub_825952B8(ctx, base);
loc_837BFF2C:
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r30,-11956(r31)
	PPC_STORE_U8(ctx.r31.u32 + -11956, ctx.r30.u8);
loc_837BFF44:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bff90
	if (cr6.eq) goto loc_837BFF90;
	// li r11,19
	ctx.r11.s64 = 19;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837BFF64;
	sub_82595150(ctx, base);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837bff84
	if (cr6.eq) goto loc_837BFF84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837BFF84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837BFF84:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837BFF8C;
	sub_82595170(ctx, base);
	// stw r30,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r30.u32);
loc_837BFF90:
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837BFF9C"))) PPC_WEAK_FUNC(sub_837BFF9C);
PPC_FUNC_IMPL(__imp__sub_837BFF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837BFFA0"))) PPC_WEAK_FUNC(sub_837BFFA0);
PPC_FUNC_IMPL(__imp__sub_837BFFA0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c004c
	if (cr6.eq) goto loc_837C004C;
	// bl 0x8379e6b8
	ctx.lr = 0x837BFFC4;
	sub_8379E6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837bffd8
	if (cr6.eq) goto loc_837BFFD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837c0050
	goto loc_837C0050;
loc_837BFFD8:
	// lis r30,-31743
	ctx.r30.s64 = -2080309248;
	// lbz r11,-11956(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -11956);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c004c
	if (!cr6.eq) goto loc_837C004C;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,-24620
	ctx.r31.s64 = ctx.r11.s64 + -24620;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x837b0c10
	ctx.lr = 0x837BFFFC;
	sub_837B0C10(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x837C0008;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x837C0014;
	sub_837B0C10(ctx, base);
	// bl 0x837bf2b0
	ctx.lr = 0x837C0018;
	sub_837BF2B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// bl 0x837be910
	ctx.lr = 0x837C0028;
	sub_837BE910(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x837C0030;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x837C0038;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x837C0040;
	sub_8387E8E0(ctx, base);
	// bl 0x837c5778
	ctx.lr = 0x837C0044;
	sub_837C5778(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-11956(r30)
	PPC_STORE_U8(ctx.r30.u32 + -11956, ctx.r11.u8);
loc_837C004C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837C0050:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C0068"))) PPC_WEAK_FUNC(sub_837C0068);
PPC_FUNC_IMPL(__imp__sub_837C0068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837C0070;
	__savegprlr_24(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c01d8
	if (!cr6.eq) goto loc_837C01D8;
	// li r11,19
	ctx.r11.s64 = 19;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82595718
	ctx.lr = 0x837C00A0;
	sub_82595718(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c00b4
	if (cr6.eq) goto loc_837C00B4;
	// bl 0x825ac748
	ctx.lr = 0x837C00B0;
	sub_825AC748(ctx, base);
	// b 0x837c00b8
	goto loc_837C00B8;
loc_837C00B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_837C00B8:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r3,96(r25)
	PPC_STORE_U32(ctx.r25.u32 + 96, ctx.r3.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r30,15
	ctx.r30.s64 = 15;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r29,r11,-24684
	ctx.r29.s64 = ctx.r11.s64 + -24684;
loc_837C00D4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,49
	ctx.r5.s64 = 49;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x837C00F0;
	sub_8259CC28(ctx, base);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831d0a20
	ctx.lr = 0x837C0100;
	sub_831D0A20(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_837C0114:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c0114
	if (!cr6.eq) goto loc_837C0114;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C013C;
	sub_8259CC28(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x837C0150;
	sub_825A1DA8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c016c
	if (cr6.lt) goto loc_837C016C;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837C016C;
	sub_825952B8(ctx, base);
loc_837C016C:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x837C0188;
	sub_825A1EB8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837c019c
	if (!cr6.lt) goto loc_837C019C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_837C019C:
	// lwz r3,96(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// bl 0x8379ebe0
	ctx.lr = 0x837C01A4;
	sub_8379EBE0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c01c0
	if (cr6.lt) goto loc_837C01C0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x837C01C0;
	sub_825952B8(ctx, base);
loc_837C01C0:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmpwi cr6,r28,10
	cr6.compare<int32_t>(ctx.r28.s32, 10, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x837c00d4
	if (cr6.lt) goto loc_837C00D4;
loc_837C01D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C01E8"))) PPC_WEAK_FUNC(sub_837C01E8);
PPC_FUNC_IMPL(__imp__sub_837C01E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C01F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x8344b5d0
	ctx.lr = 0x837C020C;
	sub_8344B5D0(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r10,-24440
	ctx.r31.s64 = ctx.r10.s64 + -24440;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833ec928
	ctx.lr = 0x837C0228;
	sub_833EC928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83b47c80
	ctx.lr = 0x837C0238;
	sub_83B47C80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8344aaf8
	ctx.lr = 0x837C0240;
	sub_8344AAF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ec928
	ctx.lr = 0x837C0254;
	sub_833EC928(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b47b28
	ctx.lr = 0x837C0264;
	sub_83B47B28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8344a0f8
	ctx.lr = 0x837C026C;
	sub_8344A0F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8344b088
	ctx.lr = 0x837C0274;
	sub_8344B088(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C027C"))) PPC_WEAK_FUNC(sub_837C027C);
PPC_FUNC_IMPL(__imp__sub_837C027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C0280"))) PPC_WEAK_FUNC(sub_837C0280);
PPC_FUNC_IMPL(__imp__sub_837C0280) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83b47d88
	ctx.lr = 0x837C0298;
	sub_83B47D88(ctx, base);
	// bl 0x83b47c30
	ctx.lr = 0x837C029C;
	sub_83B47C30(ctx, base);
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

__attribute__((alias("__imp__sub_837C02B8"))) PPC_WEAK_FUNC(sub_837C02B8);
PPC_FUNC_IMPL(__imp__sub_837C02B8) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C02D4;
	sub_834CA948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837C02F0"))) PPC_WEAK_FUNC(sub_837C02F0);
PPC_FUNC_IMPL(__imp__sub_837C02F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x833c8980
	sub_833C8980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C0300"))) PPC_WEAK_FUNC(sub_837C0300);
PPC_FUNC_IMPL(__imp__sub_837C0300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837C0308;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,18
	ctx.r29.s64 = 18;
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(ctx.r11.u32, 1000, xer);
	// blt cr6,0x837c0328
	if (cr6.lt) goto loc_837C0328;
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
loc_837C0328:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r31,r11,-24196
	ctx.r31.s64 = ctx.r11.s64 + -24196;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r5,r31,-60
	ctx.r5.s64 = ctx.r31.s64 + -60;
	// bl 0x82a95f68
	ctx.lr = 0x837C0344;
	sub_82A95F68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// li r5,22
	ctx.r5.s64 = 22;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x837C0368;
	sub_8259CC28(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837C0378;
	sub_825A1EB8(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837C0380:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c0380
	if (!cr6.eq) goto loc_837C0380;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x837C03A8;
	sub_825A1EB8(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837C03B8;
	sub_825A1EB8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x837c03cc
	if (!cr6.lt) goto loc_837C03CC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_837C03CC:
	// bl 0x83104018
	ctx.lr = 0x837C03D0;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c03f4
	if (!cr6.eq) goto loc_837C03F4;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,18
	ctx.r6.s64 = 18;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a95f68
	ctx.lr = 0x837C03F4;
	sub_82A95F68(ctx, base);
loc_837C03F4:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833ec430
	ctx.lr = 0x837C03FC;
	sub_833EC430(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r31,r11,-20864
	ctx.r31.s64 = ctx.r11.s64 + -20864;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x833c89f8
	ctx.lr = 0x837C0414;
	sub_833C89F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x833c8920
	ctx.lr = 0x837C0424;
	sub_833C8920(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833eb270
	ctx.lr = 0x837C0434;
	sub_833EB270(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c0454
	if (cr6.lt) goto loc_837C0454;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C0454;
	sub_825952B8(ctx, base);
loc_837C0454:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C045C"))) PPC_WEAK_FUNC(sub_837C045C);
PPC_FUNC_IMPL(__imp__sub_837C045C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C0460"))) PPC_WEAK_FUNC(sub_837C0460);
PPC_FUNC_IMPL(__imp__sub_837C0460) {
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
	// lwz r3,96(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C047C;
	sub_834CA948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837C0498"))) PPC_WEAK_FUNC(sub_837C0498);
PPC_FUNC_IMPL(__imp__sub_837C0498) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// b 0x83b46fc8
	sub_83B46FC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C04A8"))) PPC_WEAK_FUNC(sub_837C04A8);
PPC_FUNC_IMPL(__imp__sub_837C04A8) {
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
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c04d8
	if (cr6.lt) goto loc_837C04D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C04D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8346bef0
	ctx.lr = 0x837C04EC;
	sub_8346BEF0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c0544
	if (!cr6.eq) goto loc_837C0544;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c0510
	if (cr6.lt) goto loc_837C0510;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837c0514
	goto loc_837C0514;
loc_837C0510:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_837C0514:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c0528
	if (cr6.lt) goto loc_837C0528;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C0528:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,86
	ctx.r5.s64 = 86;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ec4a0
	ctx.lr = 0x837C0544;
	sub_833EC4A0(ctx, base);
loc_837C0544:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x837c0558
	if (cr6.lt) goto loc_837C0558;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8347d108
	ctx.lr = 0x837C0558;
	sub_8347D108(ctx, base);
loc_837C0558:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83b46f68
	ctx.lr = 0x837C0568;
	sub_83B46F68(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8346c0c0
	ctx.lr = 0x837C0574;
	sub_8346C0C0(ctx, base);
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

__attribute__((alias("__imp__sub_837C058C"))) PPC_WEAK_FUNC(sub_837C058C);
PPC_FUNC_IMPL(__imp__sub_837C058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C0590"))) PPC_WEAK_FUNC(sub_837C0590);
PPC_FUNC_IMPL(__imp__sub_837C0590) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x83b46fc8
	sub_83B46FC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C05A0"))) PPC_WEAK_FUNC(sub_837C05A0);
PPC_FUNC_IMPL(__imp__sub_837C05A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c05ec
	if (!cr6.eq) goto loc_837C05EC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c05e4
	if (!cr6.eq) goto loc_837C05E4;
loc_837C05D0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c05d0
	if (cr6.eq) goto loc_837C05D0;
loc_837C05E4:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_837C05EC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c0624
	if (!cr6.eq) goto loc_837C0624;
loc_837C05FC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x837c0624
	if (!cr6.eq) goto loc_837C0624;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c05fc
	if (cr6.eq) goto loc_837C05FC;
loc_837C0624:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C062C"))) PPC_WEAK_FUNC(sub_837C062C);
PPC_FUNC_IMPL(__imp__sub_837C062C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C0630"))) PPC_WEAK_FUNC(sub_837C0630);
PPC_FUNC_IMPL(__imp__sub_837C0630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C0638;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,68(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C0648;
	sub_834CA948(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-11916
	ctx.r30.s64 = ctx.r11.s64 + -11916;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837e78b8
	ctx.lr = 0x837C0668;
	sub_837E78B8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837c06ec
	if (cr6.eq) goto loc_837C06EC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837c06ec
	if (!cr6.eq) goto loc_837C06EC;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c06dc
	if (cr6.eq) goto loc_837C06DC;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C06B8;
	sub_82595150(ctx, base);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837c06d4
	if (cr6.eq) goto loc_837C06D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8346c0c0
	ctx.lr = 0x837C06CC;
	sub_8346C0C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x837C06D4;
	sub_82416268(ctx, base);
loc_837C06D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C06DC;
	sub_82595170(ctx, base);
loc_837C06DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83815ee0
	ctx.lr = 0x837C06EC;
	sub_83815EE0(ctx, base);
loc_837C06EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C06F4"))) PPC_WEAK_FUNC(sub_837C06F4);
PPC_FUNC_IMPL(__imp__sub_837C06F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C06F8"))) PPC_WEAK_FUNC(sub_837C06F8);
PPC_FUNC_IMPL(__imp__sub_837C06F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837C0700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C0724;
	sub_82595718(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r30,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r30.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
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
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stb r11,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r11.u8);
	// beq 0x837c0780
	if (cr0.eq) goto loc_837C0780;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837C0778;
	sub_8259CB28(ctx, base);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
loc_837C0780:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C078C"))) PPC_WEAK_FUNC(sub_837C078C);
PPC_FUNC_IMPL(__imp__sub_837C078C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C0790"))) PPC_WEAK_FUNC(sub_837C0790);
PPC_FUNC_IMPL(__imp__sub_837C0790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837C0798;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// addi r26,r11,-11916
	ctx.r26.s64 = ctx.r11.s64 + -11916;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837e78b8
	ctx.lr = 0x837C07C0;
	sub_837E78B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837c0944
	if (!cr6.eq) goto loc_837C0944;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C07E8;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c0804
	if (cr6.eq) goto loc_837C0804;
	// bl 0x8346be80
	ctx.lr = 0x837C07F8;
	sub_8346BE80(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r27.u32);
	// b 0x837c080c
	goto loc_837C080C;
loc_837C0804:
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_837C080C:
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r30,r11,-23900
	ctx.r30.s64 = ctx.r11.s64 + -23900;
	// addi r5,r10,-3
	ctx.r5.s64 = ctx.r10.s64 + -3;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82574d38
	ctx.lr = 0x837C082C;
	sub_82574D38(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x837c0890
	if (cr6.eq) goto loc_837C0890;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c0868
	if (cr6.lt) goto loc_837C0868;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,64(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// lwz r5,60(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x833ec928
	ctx.lr = 0x837C0854;
	sub_833EC928(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837efa70
	ctx.lr = 0x837C0860;
	sub_837EFA70(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// b 0x837c0948
	goto loc_837C0948;
loc_837C0868:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,64(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,60(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x833ec928
	ctx.lr = 0x837C087C;
	sub_833EC928(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837efa70
	ctx.lr = 0x837C0888;
	sub_837EFA70(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// b 0x837c0948
	goto loc_837C0948;
loc_837C0890:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x837C08B4;
	sub_8259CB28(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x837C08C0;
	sub_837B0C10(ctx, base);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// bl 0x827a84c0
	ctx.lr = 0x837C08DC;
	sub_827A84C0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x837c08f0
	if (!cr6.lt) goto loc_837C08F0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
loc_837C08F0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c0904
	if (cr6.lt) goto loc_837C0904;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837c0908
	goto loc_837C0908;
loc_837C0904:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_837C0908:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,86
	ctx.r5.s64 = 86;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833ec4a0
	ctx.lr = 0x837C0920;
	sub_833EC4A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x837C0928;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837C0930;
	sub_8387E8E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837efa70
	ctx.lr = 0x837C093C;
	sub_837EFA70(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// b 0x837c0948
	goto loc_837C0948;
loc_837C0944:
	// lwz r28,40(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_837C0948:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x83485400
	ctx.lr = 0x837C0960;
	sub_83485400(ctx, base);
	// lbz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c0984
	if (cr6.eq) goto loc_837C0984;
	// addi r7,r29,56
	ctx.r7.s64 = ctx.r29.s64 + 56;
	// addi r6,r29,52
	ctx.r6.s64 = ctx.r29.s64 + 52;
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8346bf80
	ctx.lr = 0x837C0984;
	sub_8346BF80(ctx, base);
loc_837C0984:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8346bf70
	ctx.lr = 0x837C0990;
	sub_8346BF70(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,72(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// bl 0x83b46f68
	ctx.lr = 0x837C09A0;
	sub_83B46F68(ctx, base);
	// stw r3,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r3.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C09AC"))) PPC_WEAK_FUNC(sub_837C09AC);
PPC_FUNC_IMPL(__imp__sub_837C09AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C09B0"))) PPC_WEAK_FUNC(sub_837C09B0);
PPC_FUNC_IMPL(__imp__sub_837C09B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// b 0x83499710
	sub_83499710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C09C0"))) PPC_WEAK_FUNC(sub_837C09C0);
PPC_FUNC_IMPL(__imp__sub_837C09C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C09C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,68(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C09D8;
	sub_834CA948(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// bl 0x834ca948
	ctx.lr = 0x837C09E8;
	sub_834CA948(ctx, base);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-11892
	ctx.r30.s64 = ctx.r11.s64 + -11892;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837e78b8
	ctx.lr = 0x837C0A04;
	sub_837E78B8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837c0a88
	if (cr6.eq) goto loc_837C0A88;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x837c0a88
	if (!cr6.eq) goto loc_837C0A88;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c0a78
	if (cr6.eq) goto loc_837C0A78;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x837C0A54;
	sub_82595150(ctx, base);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837c0a70
	if (cr6.eq) goto loc_837C0A70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8346c250
	ctx.lr = 0x837C0A68;
	sub_8346C250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x837C0A70;
	sub_82416268(ctx, base);
loc_837C0A70:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x837C0A78;
	sub_82595170(ctx, base);
loc_837C0A78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83815ee0
	ctx.lr = 0x837C0A88;
	sub_83815EE0(ctx, base);
loc_837C0A88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C0A90"))) PPC_WEAK_FUNC(sub_837C0A90);
PPC_FUNC_IMPL(__imp__sub_837C0A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837C0A98;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r29,r11,-11892
	ctx.r29.s64 = ctx.r11.s64 + -11892;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x837e78b8
	ctx.lr = 0x837C0AC0;
	sub_837E78B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837c0b48
	if (!cr6.eq) goto loc_837C0B48;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C0AEC;
	sub_82595718(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c0b08
	if (cr6.eq) goto loc_837C0B08;
	// bl 0x8346ca40
	ctx.lr = 0x837C0AFC;
	sub_8346CA40(ctx, base);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r25,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r25.u32);
	// b 0x837c0b0c
	goto loc_837C0B0C;
loc_837C0B08:
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_837C0B0C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c0b20
	if (cr6.lt) goto loc_837C0B20;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x837c0b24
	goto loc_837C0B24;
loc_837C0B20:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_837C0B24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,64(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x833ec928
	ctx.lr = 0x837C0B34;
	sub_833EC928(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x837efa70
	ctx.lr = 0x837C0B40;
	sub_837EFA70(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// b 0x837c0b4c
	goto loc_837C0B4C;
loc_837C0B48:
	// lwz r26,40(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
loc_837C0B4C:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x837c0b7c
	if (!cr6.eq) goto loc_837C0B7C;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8346c1e8
	ctx.lr = 0x837C0B7C;
	sub_8346C1E8(ctx, base);
loc_837C0B7C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c0bf4
	if (cr6.eq) goto loc_837C0BF4;
	// bl 0x834fd130
	ctx.lr = 0x837C0B8C;
	sub_834FD130(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x837C0BA4;
	sub_82595718(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837c0bd4
	if (cr6.eq) goto loc_837C0BD4;
	// addi r28,r3,-4
	ctx.r28.s64 = ctx.r3.s64 + -4;
loc_837C0BB8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x834fc930
	ctx.lr = 0x837C0BC4;
	sub_834FC930(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x837c0bb8
	if (cr6.lt) goto loc_837C0BB8;
loc_837C0BD4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833c9128
	ctx.lr = 0x837C0BE0;
	sub_833C9128(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x837C0BF4;
	sub_825952B8(ctx, base);
loc_837C0BF4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x834996a8
	ctx.lr = 0x837C0C08;
	sub_834996A8(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C0C14"))) PPC_WEAK_FUNC(sub_837C0C14);
PPC_FUNC_IMPL(__imp__sub_837C0C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C0C18"))) PPC_WEAK_FUNC(sub_837C0C18);
PPC_FUNC_IMPL(__imp__sub_837C0C18) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,276(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x837C0C50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x825749c0
	ctx.lr = 0x837C0C5C;
	sub_825749C0(ctx, base);
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

__attribute__((alias("__imp__sub_837C0C70"))) PPC_WEAK_FUNC(sub_837C0C70);
PPC_FUNC_IMPL(__imp__sub_837C0C70) {
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
	// lwz r3,272(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C0C8C;
	sub_834CA948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837C0CA8"))) PPC_WEAK_FUNC(sub_837C0CA8);
PPC_FUNC_IMPL(__imp__sub_837C0CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,272(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83b463c0
	sub_83B463C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C0CBC"))) PPC_WEAK_FUNC(sub_837C0CBC);
PPC_FUNC_IMPL(__imp__sub_837C0CBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C0CC0"))) PPC_WEAK_FUNC(sub_837C0CC0);
PPC_FUNC_IMPL(__imp__sub_837C0CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837C0CC8;
	__savegprlr_24(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-56
	ctx.r8.s64 = ctx.r10.s64 + -56;
	// addi r7,r9,15324
	ctx.r7.s64 = ctx.r9.s64 + 15324;
	// stw r8,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r8.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r7,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r7.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// bl 0x82473310
	ctx.lr = 0x837C0D04;
	sub_82473310(ctx, base);
	// lwz r10,336(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r5,-7164
	ctx.r11.s64 = ctx.r5.s64 + -7164;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
	// bl 0x82a8c160
	ctx.lr = 0x837C0D28;
	sub_82A8C160(ctx, base);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// addi r25,r11,-23622
	ctx.r25.s64 = ctx.r11.s64 + -23622;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r25,-4
	ctx.r4.s64 = ctx.r25.s64 + -4;
	// bl 0x82472fc0
	ctx.lr = 0x837C0D50;
	sub_82472FC0(ctx, base);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82a78610
	ctx.lr = 0x837C0D58;
	sub_82A78610(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x837c0d6c
	if (!cr6.lt) goto loc_837C0D6C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_837C0D6C:
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82a78e18
	ctx.lr = 0x837C0D7C;
	sub_82A78E18(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c0d90
	if (cr6.lt) goto loc_837C0D90;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x837C0D90;
	sub_82416268(ctx, base);
loc_837C0D90:
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// addi r11,r27,84
	ctx.r11.s64 = ctx.r27.s64 + 84;
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x837c0db4
	if (cr6.lt) goto loc_837C0DB4;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x837c0db8
	goto loc_837C0DB8;
loc_837C0DB4:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_837C0DB8:
	// addi r4,r25,2
	ctx.r4.s64 = ctx.r25.s64 + 2;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82473550
	ctx.lr = 0x837C0DC4;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x837C0DCC;
	sub_82473550(ctx, base);
	// addi r4,r25,-2
	ctx.r4.s64 = ctx.r25.s64 + -2;
	// bl 0x82473550
	ctx.lr = 0x837C0DD4;
	sub_82473550(ctx, base);
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a79bf8
	ctx.lr = 0x837C0DE0;
	sub_82A79BF8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837c0df4
	if (!cr6.lt) goto loc_837C0DF4;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_837C0DF4:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_837C0E04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c0e04
	if (!cr6.eq) goto loc_837C0E04;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C0E28;
	sub_8259CC28(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c0e3c
	if (cr6.lt) goto loc_837C0E3C;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x837C0E3C;
	sub_82416268(ctx, base);
loc_837C0E3C:
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// bl 0x83b48260
	ctx.lr = 0x837C0E50;
	sub_83B48260(ctx, base);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r4,r25,-3
	ctx.r4.s64 = ctx.r25.s64 + -3;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82472fc0
	ctx.lr = 0x837C0E6C;
	sub_82472FC0(ctx, base);
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// bl 0x82a78610
	ctx.lr = 0x837C0E74;
	sub_82A78610(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837c0e88
	if (!cr6.lt) goto loc_837C0E88;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_837C0E88:
	// addi r3,r1,340
	ctx.r3.s64 = ctx.r1.s64 + 340;
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82a78e18
	ctx.lr = 0x837C0E98;
	sub_82A78E18(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c0eac
	if (cr6.lt) goto loc_837C0EAC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x837C0EAC;
	sub_82416268(ctx, base);
loc_837C0EAC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// bge cr6,0x837c0ecc
	if (!cr6.lt) goto loc_837C0ECC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_837C0ECC:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82473550
	ctx.lr = 0x837C0ED4;
	sub_82473550(ctx, base);
	// addi r4,r25,18
	ctx.r4.s64 = ctx.r25.s64 + 18;
	// bl 0x82473550
	ctx.lr = 0x837C0EDC;
	sub_82473550(ctx, base);
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a79bf8
	ctx.lr = 0x837C0EE8;
	sub_82A79BF8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837c0efc
	if (!cr6.lt) goto loc_837C0EFC;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_837C0EFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x833ec928
	ctx.lr = 0x837C0F0C;
	sub_833EC928(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c0f24
	if (cr6.lt) goto loc_837C0F24;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x837C0F24;
	sub_82416268(ctx, base);
loc_837C0F24:
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// beq cr6,0x837c0f94
	if (cr6.eq) goto loc_837C0F94;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83b482e0
	ctx.lr = 0x837C0F40;
	sub_83B482E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c0f60
	if (cr6.lt) goto loc_837C0F60;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C0F60;
	sub_825952B8(ctx, base);
loc_837C0F60:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82b48ae0
	ctx.lr = 0x837C0F74;
	sub_82B48AE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x837C0F88;
	sub_831CCF00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837C0F94:
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r29,12(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r28,28(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r27,32(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// bl 0x83522850
	ctx.lr = 0x837C0FA8;
	sub_83522850(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c0fe4
	if (!cr6.eq) goto loc_837C0FE4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
loc_837C0FC8:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ea = ctx.r7.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	ea = ctx.r7.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x837c0fc8
	if (!cr0.eq) goto loc_837C0FC8;
loc_837C0FE4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83b48118
	ctx.lr = 0x837C1000;
	sub_83B48118(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82475d40
	ctx.lr = 0x837C100C;
	sub_82475D40(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82f3dac8
	ctx.lr = 0x837C1018;
	sub_82F3DAC8(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c102c
	if (cr6.lt) goto loc_837C102C;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x837C102C;
	sub_82416268(ctx, base);
loc_837C102C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r26,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r26.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bge cr6,0x837c1054
	if (!cr6.lt) goto loc_837C1054;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_837C1054:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82473550
	ctx.lr = 0x837C105C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x837C1064;
	sub_82473550(ctx, base);
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a79bf8
	ctx.lr = 0x837C1070;
	sub_82A79BF8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x837c1084
	if (!cr6.lt) goto loc_837C1084;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_837C1084:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833ec928
	ctx.lr = 0x837C1094;
	sub_833EC928(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c10ac
	if (cr6.lt) goto loc_837C10AC;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x837C10AC;
	sub_82416268(ctx, base);
loc_837C10AC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// beq cr6,0x837c10ec
	if (cr6.eq) goto loc_837C10EC;
	// bl 0x83521f50
	ctx.lr = 0x837C10C8;
	sub_83521F50(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83b482e0
	ctx.lr = 0x837C10D0;
	sub_83B482E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837C10D8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b48bf8
	ctx.lr = 0x837C10E0;
	sub_82B48BF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_837C10EC:
	// bl 0x83521f50
	ctx.lr = 0x837C10F0;
	sub_83521F50(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83b482e0
	ctx.lr = 0x837C10F8;
	sub_83B482E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x837C1100;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82b48bf8
	ctx.lr = 0x837C1108;
	sub_82B48BF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C1114"))) PPC_WEAK_FUNC(sub_837C1114);
PPC_FUNC_IMPL(__imp__sub_837C1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C1118"))) PPC_WEAK_FUNC(sub_837C1118);
PPC_FUNC_IMPL(__imp__sub_837C1118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x837C1120;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,188(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 188);
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// lwz r23,8(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// addi r26,r28,168
	ctx.r26.s64 = ctx.r28.s64 + 168;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c1500
	if (cr6.eq) goto loc_837C1500;
	// cmpwi cr6,r23,9
	cr6.compare<int32_t>(ctx.r23.s32, 9, xer);
	// bge cr6,0x837c1500
	if (!cr6.lt) goto loc_837C1500;
	// cmpwi cr6,r23,8
	cr6.compare<int32_t>(ctx.r23.s32, 8, xer);
	// beq cr6,0x837c1500
	if (cr6.eq) goto loc_837C1500;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r31,16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r30,20(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r29,24(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r27,36(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// bl 0x8346f6a0
	ctx.lr = 0x837C116C;
	sub_8346F6A0(ctx, base);
	// lwz r10,160(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// addi r11,r28,140
	ctx.r11.s64 = ctx.r28.s64 + 140;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c1180
	if (cr6.lt) goto loc_837C1180;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C1180:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82c90e90
	ctx.lr = 0x837C118C;
	sub_82C90E90(ctx, base);
	// lwz r10,132(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// addi r11,r28,112
	ctx.r11.s64 = ctx.r28.s64 + 112;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c11a0
	if (cr6.lt) goto loc_837C11A0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C11A0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82c90e90
	ctx.lr = 0x837C11AC;
	sub_82C90E90(ctx, base);
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// addi r4,r28,84
	ctx.r4.s64 = ctx.r28.s64 + 84;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c11c0
	if (cr6.lt) goto loc_837C11C0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837C11C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c90e90
	ctx.lr = 0x837C11C8;
	sub_82C90E90(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8346d238
	ctx.lr = 0x837C11DC;
	sub_8346D238(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83521f50
	ctx.lr = 0x837C11E4;
	sub_83521F50(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x83521f50
	ctx.lr = 0x837C11EC;
	sub_83521F50(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x83521f50
	ctx.lr = 0x837C11F4;
	sub_83521F50(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r31,44(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8346d888
	ctx.lr = 0x837C1228;
	sub_8346D888(ctx, base);
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x837c1254
	if (!cr6.eq) goto loc_837C1254;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8346d090
	ctx.lr = 0x837C1240;
	sub_8346D090(ctx, base);
	// cmpwi cr6,r23,7
	cr6.compare<int32_t>(ctx.r23.s32, 7, xer);
	// bne cr6,0x837c1254
	if (!cr6.eq) goto loc_837C1254;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,196(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// bl 0x8346d0b0
	ctx.lr = 0x837C1254;
	sub_8346D0B0(ctx, base);
loc_837C1254:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// bl 0x8346d100
	ctx.lr = 0x837C1260;
	sub_8346D100(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,64(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// bl 0x8346d110
	ctx.lr = 0x837C126C;
	sub_8346D110(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,68(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// bl 0x8346d120
	ctx.lr = 0x837C1278;
	sub_8346D120(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x8346d140
	ctx.lr = 0x837C1284;
	sub_8346D140(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lbz r4,76(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 76);
	// bl 0x8346d160
	ctx.lr = 0x837C1290;
	sub_8346D160(ctx, base);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x837c12a8
	if (!cr6.eq) goto loc_837C12A8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_837C12A8:
	// bl 0x8346d180
	ctx.lr = 0x837C12AC;
	sub_8346D180(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c12c0
	if (cr6.lt) goto loc_837C12C0;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x837c12c4
	goto loc_837C12C4;
loc_837C12C0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_837C12C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x833ec928
	ctx.lr = 0x837C12D4;
	sub_833EC928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837c1308
	if (!cr6.eq) goto loc_837C1308;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(ctx.r23.s32, 1, xer);
	// beq cr6,0x837c1324
	if (cr6.eq) goto loc_837C1324;
	// cmpwi cr6,r23,6
	cr6.compare<int32_t>(ctx.r23.s32, 6, xer);
	// bne cr6,0x837c14d8
	if (!cr6.eq) goto loc_837C14D8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837c0cc0
	ctx.lr = 0x837C12FC;
	sub_837C0CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c14d8
	if (!cr6.eq) goto loc_837C14D8;
loc_837C1308:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x837c0c18
	ctx.lr = 0x837C1314;
	sub_837C0C18(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83470c58
	ctx.lr = 0x837C131C;
	sub_83470C58(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837C1324:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// bl 0x8346d070
	ctx.lr = 0x837C1330;
	sub_8346D070(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837c14d8
	if (!cr6.eq) goto loc_837C14D8;
	// lwz r11,200(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// li r27,28
	ctx.r27.s64 = 28;
	// lwz r10,204(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// addi r30,r28,200
	ctx.r30.s64 = ctx.r28.s64 + 200;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c13ac
	if (cr0.eq) goto loc_837C13AC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_837C1360:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c1374
	if (cr6.lt) goto loc_837C1374;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_837C1374:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c90e90
	ctx.lr = 0x837C137C;
	sub_82C90E90(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8346f0f8
	ctx.lr = 0x837C138C;
	sub_8346F0F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c1360
	if (cr6.lt) goto loc_837C1360;
loc_837C13AC:
	// lwz r11,216(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 216);
	// addi r30,r28,216
	ctx.r30.s64 = ctx.r28.s64 + 216;
	// lwz r10,220(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c1438
	if (cr0.eq) goto loc_837C1438;
	// li r29,0
	ctx.r29.s64 = 0;
loc_837C13CC:
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c13e0
	if (cr6.lt) goto loc_837C13E0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_837C13E0:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_837C13E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c13e4
	if (!cr6.eq) goto loc_837C13E4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x837C1404;
	sub_83522540(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8346f0f8
	ctx.lr = 0x837C1418;
	sub_8346F0F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c13cc
	if (cr6.lt) goto loc_837C13CC;
loc_837C1438:
	// lwz r11,232(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	// addi r31,r28,232
	ctx.r31.s64 = ctx.r28.s64 + 232;
	// lwz r10,236(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c1488
	if (cr0.eq) goto loc_837C1488;
	// li r29,0
	ctx.r29.s64 = 0;
loc_837C1458:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8346ece8
	ctx.lr = 0x837C1468;
	sub_8346ECE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c1458
	if (cr6.lt) goto loc_837C1458;
loc_837C1488:
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r31,r28,248
	ctx.r31.s64 = ctx.r28.s64 + 248;
	// lwz r10,252(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c14d8
	if (cr0.eq) goto loc_837C14D8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_837C14A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8346ece8
	ctx.lr = 0x837C14B8;
	sub_8346ECE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c14a8
	if (cr6.lt) goto loc_837C14A8;
loc_837C14D8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,276(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 276);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83b46358
	ctx.lr = 0x837C14EC;
	sub_83B46358(ctx, base);
	// stw r3,272(r25)
	PPC_STORE_U32(ctx.r25.u32 + 272, ctx.r3.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83470c58
	ctx.lr = 0x837C14F8;
	sub_83470C58(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_837C1500:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,276(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 276);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,272(r25)
	PPC_STORE_U32(ctx.r25.u32 + 272, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x837C1524;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r24,8
	ctx.r3.s64 = ctx.r24.s64 + 8;
	// bl 0x825749c0
	ctx.lr = 0x837C1530;
	sub_825749C0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C1538"))) PPC_WEAK_FUNC(sub_837C1538);
PPC_FUNC_IMPL(__imp__sub_837C1538) {
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
	// lwz r3,204(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c155c
	if (cr6.eq) goto loc_837C155C;
	// bl 0x834ca948
	ctx.lr = 0x837C155C;
	sub_834CA948(ctx, base);
loc_837C155C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837C1578"))) PPC_WEAK_FUNC(sub_837C1578);
PPC_FUNC_IMPL(__imp__sub_837C1578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,204(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x834972a8
	sub_834972A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C158C"))) PPC_WEAK_FUNC(sub_837C158C);
PPC_FUNC_IMPL(__imp__sub_837C158C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C1590"))) PPC_WEAK_FUNC(sub_837C1590);
PPC_FUNC_IMPL(__imp__sub_837C1590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C1598;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83475638
	ctx.lr = 0x837C15AC;
	sub_83475638(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c15c0
	if (cr6.lt) goto loc_837C15C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C15C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833ec928
	ctx.lr = 0x837C15D4;
	sub_833EC928(ctx, base);
	// bl 0x835212a0
	ctx.lr = 0x837C15D8;
	sub_835212A0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x83475140
	ctx.lr = 0x837C1600;
	sub_83475140(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,-23356
	ctx.r30.s64 = ctx.r11.s64 + -23356;
	// addi r4,r30,-94
	ctx.r4.s64 = ctx.r30.s64 + -94;
	// bl 0x83521388
	ctx.lr = 0x837C1618;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c1938
	if (!cr6.eq) goto loc_837C1938;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c1648
	if (cr6.eq) goto loc_837C1648;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x837c1648
	if (!cr6.eq) goto loc_837C1648;
	// li r9,1
	ctx.r9.s64 = 1;
loc_837C1648:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c16a0
	if (cr6.eq) goto loc_837C16A0;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c1698
	if (cr6.eq) goto loc_837C1698;
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x837c1698
	if (cr6.eq) goto loc_837C1698;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r8,r31,132
	ctx.r8.s64 = ctx.r31.s64 + 132;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x837c1698
	if (cr6.eq) goto loc_837C1698;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x83474a40
	ctx.lr = 0x837C1698;
	sub_83474A40(ctx, base);
loc_837C1698:
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// b 0x837c1790
	goto loc_837C1790;
loc_837C16A0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c1798
	if (cr6.eq) goto loc_837C1798;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83521388
	ctx.lr = 0x837C16BC;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c178c
	if (!cr6.eq) goto loc_837C178C;
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x83521388
	ctx.lr = 0x837C16D8;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c178c
	if (!cr6.eq) goto loc_837C178C;
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83521388
	ctx.lr = 0x837C16F4;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c178c
	if (!cr6.eq) goto loc_837C178C;
	// addi r4,r30,-72
	ctx.r4.s64 = ctx.r30.s64 + -72;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83521388
	ctx.lr = 0x837C1710;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c178c
	if (!cr6.eq) goto loc_837C178C;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83521388
	ctx.lr = 0x837C172C;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c178c
	if (!cr6.eq) goto loc_837C178C;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83521388
	ctx.lr = 0x837C1748;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c178c
	if (!cr6.eq) goto loc_837C178C;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83521388
	ctx.lr = 0x837C1764;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c178c
	if (!cr6.eq) goto loc_837C178C;
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x83521388
	ctx.lr = 0x837C1780;
	sub_83521388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c1798
	if (cr6.eq) goto loc_837C1798;
loc_837C178C:
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
loc_837C1790:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831126c8
	ctx.lr = 0x837C1798;
	sub_831126C8(ctx, base);
loc_837C1798:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837C17A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c17a4
	if (!cr6.eq) goto loc_837C17A4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C17C8;
	sub_8259CC28(ctx, base);
	// bl 0x835212a0
	ctx.lr = 0x837C17CC;
	sub_835212A0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835228e0
	ctx.lr = 0x837C17E0;
	sub_835228E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x835228e0
	ctx.lr = 0x837C17F4;
	sub_835228E0(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835228e0
	ctx.lr = 0x837C1804;
	sub_835228E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x835228e0
	ctx.lr = 0x837C1818;
	sub_835228E0(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835228e0
	ctx.lr = 0x837C1828;
	sub_835228E0(ctx, base);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c183c
	if (cr6.lt) goto loc_837C183C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C183C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837C1840:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c1840
	if (!cr6.eq) goto loc_837C1840;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x835228e0
	ctx.lr = 0x837C1868;
	sub_835228E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835228e0
	ctx.lr = 0x837C1878;
	sub_835228E0(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c188c
	if (cr6.lt) goto loc_837C188C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C188C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_837C1890:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c1890
	if (!cr6.eq) goto loc_837C1890;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83522540
	ctx.lr = 0x837C18B4;
	sub_83522540(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83474a08
	ctx.lr = 0x837C18C4;
	sub_83474A08(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x833ec928
	ctx.lr = 0x837C18DC;
	sub_833EC928(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83474708
	ctx.lr = 0x837C18E4;
	sub_83474708(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_837C18F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c18f0
	if (!cr6.eq) goto loc_837C18F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C1914;
	sub_8259CC28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,208(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x83497248
	ctx.lr = 0x837C1924;
	sub_83497248(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83521f50
	ctx.lr = 0x837C1930;
	sub_83521F50(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83521f50
	ctx.lr = 0x837C1938;
	sub_83521F50(ctx, base);
loc_837C1938:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x837C1940;
	sub_83521F50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x834756a8
	ctx.lr = 0x837C1948;
	sub_834756A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C1950"))) PPC_WEAK_FUNC(sub_837C1950);
PPC_FUNC_IMPL(__imp__sub_837C1950) {
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
	// lwz r3,76(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C196C;
	sub_834CA948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837C1988"))) PPC_WEAK_FUNC(sub_837C1988);
PPC_FUNC_IMPL(__imp__sub_837C1988) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x83b46ba8
	ctx.lr = 0x837C19A8;
	sub_83B46BA8(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x83b46a70
	ctx.lr = 0x837C19B0;
	sub_83B46A70(ctx, base);
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

__attribute__((alias("__imp__sub_837C19C4"))) PPC_WEAK_FUNC(sub_837C19C4);
PPC_FUNC_IMPL(__imp__sub_837C19C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C19C8"))) PPC_WEAK_FUNC(sub_837C19C8);
PPC_FUNC_IMPL(__imp__sub_837C19C8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83484b88
	ctx.lr = 0x837C19EC;
	sub_83484B88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83484468
	ctx.lr = 0x837C19F8;
	sub_83484468(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83484488
	ctx.lr = 0x837C1A04;
	sub_83484488(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x837c1a1c
	if (!cr6.eq) goto loc_837C1A1C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_837C1A1C:
	// bl 0x834844a8
	ctx.lr = 0x837C1A20;
	sub_834844A8(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c1a34
	if (cr6.lt) goto loc_837C1A34;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C1A34:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ec928
	ctx.lr = 0x837C1A48;
	sub_833EC928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x83b46b48
	ctx.lr = 0x837C1A58;
	sub_83B46B48(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x834844b8
	ctx.lr = 0x837C1A64;
	sub_834844B8(ctx, base);
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

__attribute__((alias("__imp__sub_837C1A7C"))) PPC_WEAK_FUNC(sub_837C1A7C);
PPC_FUNC_IMPL(__imp__sub_837C1A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C1A80"))) PPC_WEAK_FUNC(sub_837C1A80);
PPC_FUNC_IMPL(__imp__sub_837C1A80) {
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
	// lwz r3,144(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C1A9C;
	sub_834CA948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837C1AB8"))) PPC_WEAK_FUNC(sub_837C1AB8);
PPC_FUNC_IMPL(__imp__sub_837C1AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,144(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83497b28
	sub_83497B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C1ACC"))) PPC_WEAK_FUNC(sub_837C1ACC);
PPC_FUNC_IMPL(__imp__sub_837C1ACC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C1AD0"))) PPC_WEAK_FUNC(sub_837C1AD0);
PPC_FUNC_IMPL(__imp__sub_837C1AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x837C1AD8;
	__savegprlr_18(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,4
	ctx.r20.s64 = 4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r20,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r20.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lis r7,15
	ctx.r7.s64 = 983040;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r24,r4,16
	ctx.r24.s64 = ctx.r4.s64 + 16;
	// ori r3,r7,65535
	ctx.r3.u64 = ctx.r7.u64 | 65535;
	// stw r20,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r20.u32);
	// li r19,2
	ctx.r19.s64 = 2;
	// stw r20,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r20.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r20,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r20.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// li r18,3
	ctx.r18.s64 = 3;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r20,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r20.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// lis r7,-16
	ctx.r7.s64 = -1048576;
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// li r30,11
	ctx.r30.s64 = 11;
	// stw r19,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r19.u32);
	// stw r18,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r18.u32);
	// stw r28,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r28.u32);
	// stw r18,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r18.u32);
	// stw r20,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r20.u32);
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// stw r28,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r28.u32);
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// stw r19,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r19.u32);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r31,16(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 16);
	// stw r18,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r18.u32);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// stw r19,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r19.u32);
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// stw r5,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r5.u32);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r8,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// stw r20,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r20.u32);
	// stw r20,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r20.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r20,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r20.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r20.u32);
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r28.u32);
	// stw r20,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r20.u32);
	// stw r20,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r20.u32);
	// stw r20,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r20.u32);
	// beq cr6,0x837c1c28
	if (cr6.eq) goto loc_837C1C28;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x837C1C20;
	sub_831CE420(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
loc_837C1C28:
	// lwz r31,32(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// addi r22,r21,32
	ctx.r22.s64 = ctx.r21.s64 + 32;
	// lwz r4,36(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 36);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c1c5c
	if (cr6.eq) goto loc_837C1C5C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x837C1C54;
	sub_831CE420(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r10,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r10.u32);
loc_837C1C5C:
	// lwz r31,48(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// addi r23,r21,48
	ctx.r23.s64 = ctx.r21.s64 + 48;
	// lwz r4,52(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c1c90
	if (cr6.eq) goto loc_837C1C90;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831ce420
	ctx.lr = 0x837C1C88;
	sub_831CE420(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r10,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r10.u32);
loc_837C1C90:
	// lwz r11,64(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// addi r25,r21,64
	ctx.r25.s64 = ctx.r21.s64 + 64;
	// lwz r10,68(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c1d08
	if (cr0.eq) goto loc_837C1D08;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_837C1CB0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c1ce8
	if (cr6.eq) goto loc_837C1CE8;
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
	ctx.lr = 0x837C1CE0;
	sub_831CE420(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837C1CE8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c1cb0
	if (cr6.lt) goto loc_837C1CB0;
loc_837C1D08:
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x837c1d58
	if (cr6.eq) goto loc_837C1D58;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x837c1d40
	if (cr6.eq) goto loc_837C1D40;
loc_837C1D24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a120f0
	ctx.lr = 0x837C1D30;
	sub_82A120F0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x837c1d24
	if (!cr6.eq) goto loc_837C1D24;
loc_837C1D40:
	// addi r5,r25,12
	ctx.r5.s64 = ctx.r25.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x837C1D54;
	sub_82BBBF28(ctx, base);
	// stw r30,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
loc_837C1D58:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x837c1e24
	if (!cr6.gt) goto loc_837C1E24;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_837C1D6C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x835977d8
	ctx.lr = 0x837C1D80;
	sub_835977D8(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x837C1D90;
	sub_835977D8(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x837C1DA0;
	sub_835977D8(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// beq cr6,0x837c1de0
	if (cr6.eq) goto loc_837C1DE0;
loc_837C1DBC:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x835977d8
	ctx.lr = 0x837C1DD4;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x837c1dbc
	if (cr6.lt) goto loc_837C1DBC;
loc_837C1DE0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8345fa38
	ctx.lr = 0x837C1DEC;
	sub_8345FA38(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c1e04
	if (cr6.eq) goto loc_837C1E04;
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x837C1E04;
	sub_825952B8(ctx, base);
loc_837C1E04:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// blt cr6,0x837c1d6c
	if (cr6.lt) goto loc_837C1D6C;
loc_837C1E24:
	// lwz r11,80(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// addi r25,r21,80
	ctx.r25.s64 = ctx.r21.s64 + 80;
	// lwz r10,84(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x837c1ed4
	if (cr0.eq) goto loc_837C1ED4;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_837C1E44:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c1e7c
	if (cr6.eq) goto loc_837C1E7C;
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
	ctx.lr = 0x837C1E74;
	sub_831CE420(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837C1E7C:
	// lwz r11,96(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x837c1eb4
	if (cr6.eq) goto loc_837C1EB4;
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
	ctx.lr = 0x837C1EAC;
	sub_831CE420(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_837C1EB4:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// blt cr6,0x837c1e44
	if (cr6.lt) goto loc_837C1E44;
loc_837C1ED4:
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x837c1f24
	if (cr6.eq) goto loc_837C1F24;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x837c1f0c
	if (cr6.eq) goto loc_837C1F0C;
loc_837C1EF0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a120f0
	ctx.lr = 0x837C1EFC;
	sub_82A120F0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x837c1ef0
	if (!cr6.eq) goto loc_837C1EF0;
loc_837C1F0C:
	// addi r5,r25,12
	ctx.r5.s64 = ctx.r25.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x837C1F20;
	sub_82BBBF28(ctx, base);
	// stw r30,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r30.u32);
loc_837C1F24:
	// lwz r30,96(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 96);
	// addi r26,r21,96
	ctx.r26.s64 = ctx.r21.s64 + 96;
	// lwz r29,100(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 100);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x837c1f78
	if (cr6.eq) goto loc_837C1F78;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r29
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r29.u32, xer);
	// beq cr6,0x837c1f60
	if (cr6.eq) goto loc_837C1F60;
loc_837C1F44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a120f0
	ctx.lr = 0x837C1F50;
	sub_82A120F0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x837c1f44
	if (!cr6.eq) goto loc_837C1F44;
loc_837C1F60:
	// addi r5,r26,12
	ctx.r5.s64 = ctx.r26.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x837C1F74;
	sub_82BBBF28(ctx, base);
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
loc_837C1F78:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r18,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r18.u32);
loc_837C1F80:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// blt cr6,0x837c1fb4
	if (cr6.lt) goto loc_837C1FB4;
	// beq cr6,0x837c1fa8
	if (cr6.eq) goto loc_837C1FA8;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bge cr6,0x837c1fbc
	if (!cr6.lt) goto loc_837C1FBC;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r31,r1,256
	ctx.r31.s64 = ctx.r1.s64 + 256;
	// b 0x837c1fbc
	goto loc_837C1FBC;
loc_837C1FA8:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// b 0x837c1fbc
	goto loc_837C1FBC;
loc_837C1FB4:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
loc_837C1FBC:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
loc_837C1FDC:
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x837C1FE8;
	sub_835977D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x837C1FF4;
	sub_835977D8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x837c1fdc
	if (!cr0.eq) goto loc_837C1FDC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8345fa38
	ctx.lr = 0x837C200C;
	sub_8345FA38(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8345fa38
	ctx.lr = 0x837C2018;
	sub_8345FA38(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c2030
	if (cr6.eq) goto loc_837C2030;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x837C2030;
	sub_825952B8(ctx, base);
loc_837C2030:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// beq cr6,0x837c2054
	if (cr6.eq) goto loc_837C2054;
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825952b8
	ctx.lr = 0x837C2054;
	sub_825952B8(ctx, base);
loc_837C2054:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// blt cr6,0x837c1f80
	if (cr6.lt) goto loc_837C1F80;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C2074"))) PPC_WEAK_FUNC(sub_837C2074);
PPC_FUNC_IMPL(__imp__sub_837C2074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2078"))) PPC_WEAK_FUNC(sub_837C2078);
PPC_FUNC_IMPL(__imp__sub_837C2078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x837C2080;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// bl 0x83474430
	ctx.lr = 0x837C2098;
	sub_83474430(ctx, base);
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c20ac
	if (cr6.lt) goto loc_837C20AC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C20AC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833ec928
	ctx.lr = 0x837C20C0;
	sub_833EC928(ctx, base);
	// lwz r10,56(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// addi r11,r26,36
	ctx.r11.s64 = ctx.r26.s64 + 36;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c20d8
	if (cr6.lt) goto loc_837C20D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C20D8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833ec928
	ctx.lr = 0x837C20EC;
	sub_833EC928(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c2114
	if (!cr6.eq) goto loc_837C2114;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-23080
	ctx.r4.s64 = ctx.r11.s64 + -23080;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x833ec928
	ctx.lr = 0x837C2114;
	sub_833EC928(ctx, base);
loc_837C2114:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x837c2290
	if (!cr6.eq) goto loc_837C2290;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x837c2290
	if (!cr6.eq) goto loc_837C2290;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x83470e28
	ctx.lr = 0x837C2130;
	sub_83470E28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,136(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x83472338
	ctx.lr = 0x837C213C;
	sub_83472338(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x834fd130
	ctx.lr = 0x837C2144;
	sub_834FD130(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// ble cr6,0x837c2178
	if (!cr6.gt) goto loc_837C2178;
loc_837C2154:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x834fc930
	ctx.lr = 0x837C2160;
	sub_834FC930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83472370
	ctx.lr = 0x837C216C;
	sub_83472370(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, xer);
	// blt cr6,0x837c2154
	if (cr6.lt) goto loc_837C2154;
loc_837C2178:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r7,72(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// bl 0x83470da8
	ctx.lr = 0x837C2190;
	sub_83470DA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x83470e00
	ctx.lr = 0x837C21A0;
	sub_83470E00(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// bl 0x837c1ad0
	ctx.lr = 0x837C2204;
	sub_837C1AD0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x834744e8
	ctx.lr = 0x837C2210;
	sub_834744E8(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r8,104(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83470e50
	ctx.lr = 0x837C223C;
	sub_83470E50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83470ec8
	ctx.lr = 0x837C2248;
	sub_83470EC8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lbz r4,128(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// bl 0x83470f08
	ctx.lr = 0x837C2258;
	sub_83470F08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// bl 0x83470ee8
	ctx.lr = 0x837C2264;
	sub_83470EE8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x83470f38
	ctx.lr = 0x837C2270;
	sub_83470F38(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,148(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83497ac0
	ctx.lr = 0x837C2284;
	sub_83497AC0(ctx, base);
	// stw r3,144(r26)
	PPC_STORE_U32(ctx.r26.u32 + 144, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83472868
	ctx.lr = 0x837C2290;
	sub_83472868(ctx, base);
loc_837C2290:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x834712e8
	ctx.lr = 0x837C2298;
	sub_834712E8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C22A0"))) PPC_WEAK_FUNC(sub_837C22A0);
PPC_FUNC_IMPL(__imp__sub_837C22A0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x833cac30
	sub_833CAC30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C22B0"))) PPC_WEAK_FUNC(sub_837C22B0);
PPC_FUNC_IMPL(__imp__sub_837C22B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837C22B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,32(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C22C8;
	sub_834CA948(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lbz r11,-11844(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -11844);
	// addi r8,r11,255
	ctx.r8.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stb r11,-11844(r10)
	PPC_STORE_U8(ctx.r10.u32 + -11844, ctx.r11.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c2394
	if (!cr6.eq) goto loc_837C2394;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r11,-11836
	ctx.r31.s64 = ctx.r11.s64 + -11836;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// beq cr6,0x837c2368
	if (cr6.eq) goto loc_837C2368;
	// li r28,10
	ctx.r28.s64 = 10;
loc_837C230C:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c2354
	if (cr6.eq) goto loc_837C2354;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x837C2328;
	sub_82595150(ctx, base);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c2348
	if (cr6.eq) goto loc_837C2348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C2348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C2348:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x837C2350;
	sub_82595170(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_837C2354:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837c05a0
	ctx.lr = 0x837C235C;
	sub_837C05A0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x837c230c
	if (!cr6.eq) goto loc_837C230C;
loc_837C2368:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x838162e0
	ctx.lr = 0x837C2374;
	sub_838162E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_837C2394:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C239C"))) PPC_WEAK_FUNC(sub_837C239C);
PPC_FUNC_IMPL(__imp__sub_837C239C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C23A0"))) PPC_WEAK_FUNC(sub_837C23A0);
PPC_FUNC_IMPL(__imp__sub_837C23A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837C23A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// addi r30,r11,-11836
	ctx.r30.s64 = ctx.r11.s64 + -11836;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x837e78b8
	ctx.lr = 0x837C23D0;
	sub_837E78B8(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x837c2460
	if (!cr6.eq) goto loc_837C2460;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C23F8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c240c
	if (cr6.eq) goto loc_837C240C;
	// bl 0x8347ebc8
	ctx.lr = 0x837C2404;
	sub_8347EBC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x837c2410
	goto loc_837C2410;
loc_837C240C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_837C2410:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x837efa70
	ctx.lr = 0x837C241C;
	sub_837EFA70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// bl 0x837e78b8
	ctx.lr = 0x837C2434;
	sub_837E78B8(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c244c
	if (cr6.lt) goto loc_837C244C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x837c2450
	goto loc_837C2450;
loc_837C244C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_837C2450:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x833ec928
	ctx.lr = 0x837C2460;
	sub_833EC928(ctx, base);
loc_837C2460:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,36(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x833cabd0
	ctx.lr = 0x837C2470;
	sub_833CABD0(ctx, base);
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// stw r3,32(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32, ctx.r3.u32);
	// lbz r11,-11844(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -11844);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,-11844(r10)
	PPC_STORE_U8(ctx.r10.u32 + -11844, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C248C"))) PPC_WEAK_FUNC(sub_837C248C);
PPC_FUNC_IMPL(__imp__sub_837C248C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2490"))) PPC_WEAK_FUNC(sub_837C2490);
PPC_FUNC_IMPL(__imp__sub_837C2490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83497600
	sub_83497600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C24A4"))) PPC_WEAK_FUNC(sub_837C24A4);
PPC_FUNC_IMPL(__imp__sub_837C24A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C24A8"))) PPC_WEAK_FUNC(sub_837C24A8);
PPC_FUNC_IMPL(__imp__sub_837C24A8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8347b4a8
	ctx.lr = 0x837C24CC;
	sub_8347B4A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x83476498
	ctx.lr = 0x837C24E0;
	sub_83476498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x834764b8
	ctx.lr = 0x837C24EC;
	sub_834764B8(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c2500
	if (cr6.lt) goto loc_837C2500;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C2500:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ec928
	ctx.lr = 0x837C2514;
	sub_833EC928(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x837c2534
	if (!cr6.eq) goto loc_837C2534;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x834975a0
	ctx.lr = 0x837C252C;
	sub_834975A0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_837C2534:
	// bl 0x834765c8
	ctx.lr = 0x837C2538;
	sub_834765C8(ctx, base);
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

__attribute__((alias("__imp__sub_837C2550"))) PPC_WEAK_FUNC(sub_837C2550);
PPC_FUNC_IMPL(__imp__sub_837C2550) {
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
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C256C;
	sub_834CA948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837C2588"))) PPC_WEAK_FUNC(sub_837C2588);
PPC_FUNC_IMPL(__imp__sub_837C2588) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x83b47a40
	sub_83B47A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C2598"))) PPC_WEAK_FUNC(sub_837C2598);
PPC_FUNC_IMPL(__imp__sub_837C2598) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8347bdb0
	ctx.lr = 0x837C25BC;
	sub_8347BDB0(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c25d0
	if (cr6.lt) goto loc_837C25D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C25D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ec928
	ctx.lr = 0x837C25E4;
	sub_833EC928(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x83b479e0
	ctx.lr = 0x837C25F4;
	sub_83B479E0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8347b570
	ctx.lr = 0x837C2600;
	sub_8347B570(ctx, base);
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

__attribute__((alias("__imp__sub_837C2618"))) PPC_WEAK_FUNC(sub_837C2618);
PPC_FUNC_IMPL(__imp__sub_837C2618) {
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
	// lwz r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x834ca948
	ctx.lr = 0x837C2638;
	sub_834CA948(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
	// bl 0x834ca948
	ctx.lr = 0x837C2648;
	sub_834CA948(ctx, base);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C2664"))) PPC_WEAK_FUNC(sub_837C2664);
PPC_FUNC_IMPL(__imp__sub_837C2664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2668"))) PPC_WEAK_FUNC(sub_837C2668);
PPC_FUNC_IMPL(__imp__sub_837C2668) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x83499710
	sub_83499710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C2678"))) PPC_WEAK_FUNC(sub_837C2678);
PPC_FUNC_IMPL(__imp__sub_837C2678) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8346ca40
	ctx.lr = 0x837C269C;
	sub_8346CA40(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c26b0
	if (cr6.lt) goto loc_837C26B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C26B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ec928
	ctx.lr = 0x837C26C4;
	sub_833EC928(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r4,37(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// bl 0x8346c1b8
	ctx.lr = 0x837C26D0;
	sub_8346C1B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8346c1a8
	ctx.lr = 0x837C26DC;
	sub_8346C1A8(ctx, base);
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// ble cr6,0x837c26ec
	if (!cr6.gt) goto loc_837C26EC;
	// li r11,20
	ctx.r11.s64 = 20;
loc_837C26EC:
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r10,-22344
	ctx.r3.s64 = ctx.r10.s64 + -22344;
	// bl 0x833c9128
	ctx.lr = 0x837C26FC;
	sub_833C9128(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x834996a8
	ctx.lr = 0x837C2714;
	sub_834996A8(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8346c250
	ctx.lr = 0x837C2720;
	sub_8346C250(ctx, base);
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

__attribute__((alias("__imp__sub_837C2738"))) PPC_WEAK_FUNC(sub_837C2738);
PPC_FUNC_IMPL(__imp__sub_837C2738) {
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
	// lwz r31,40(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837c2788
	if (cr6.eq) goto loc_837C2788;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82574b18
	ctx.lr = 0x837C2764;
	sub_82574B18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x837c2780
	if (cr6.gt) goto loc_837C2780;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x837C2780;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_837C2780:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_837C2788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C27A0"))) PPC_WEAK_FUNC(sub_837C27A0);
PPC_FUNC_IMPL(__imp__sub_837C27A0) {
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
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c27cc
	if (cr6.lt) goto loc_837C27CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C27CC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83522540
	ctx.lr = 0x837C27D4;
	sub_83522540(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x83787c78
	ctx.lr = 0x837C27DC;
	sub_83787C78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c27f4
	if (cr6.eq) goto loc_837C27F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x837882b0
	ctx.lr = 0x837C27F4;
	sub_837882B0(ctx, base);
loc_837C27F4:
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83521f50
	ctx.lr = 0x837C2800;
	sub_83521F50(ctx, base);
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

__attribute__((alias("__imp__sub_837C2814"))) PPC_WEAK_FUNC(sub_837C2814);
PPC_FUNC_IMPL(__imp__sub_837C2814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2818"))) PPC_WEAK_FUNC(sub_837C2818);
PPC_FUNC_IMPL(__imp__sub_837C2818) {
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
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x837C2840;
	sub_8257FAD0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x837c2888
	if (cr6.eq) goto loc_837C2888;
loc_837C2850:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c2878
	if (cr6.eq) goto loc_837C2878;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c2878
	if (cr6.eq) goto loc_837C2878;
	// bl 0x83788400
	ctx.lr = 0x837C286C;
	sub_83788400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c28bc
	if (!cr6.eq) goto loc_837C28BC;
loc_837C2878:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x837c2850
	if (!cr6.eq) goto loc_837C2850;
loc_837C2888:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837c28a0
	if (cr6.lt) goto loc_837C28A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837C28A0;
	sub_8257FB60(ctx, base);
loc_837C28A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837C28A4:
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
loc_837C28BC:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837c28d4
	if (cr6.lt) goto loc_837C28D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837C28D4;
	sub_8257FB60(ctx, base);
loc_837C28D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837c28a4
	goto loc_837C28A4;
}

__attribute__((alias("__imp__sub_837C28DC"))) PPC_WEAK_FUNC(sub_837C28DC);
PPC_FUNC_IMPL(__imp__sub_837C28DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C28E0"))) PPC_WEAK_FUNC(sub_837C28E0);
PPC_FUNC_IMPL(__imp__sub_837C28E0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8257fad0
	ctx.lr = 0x837C290C;
	sub_8257FAD0(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x837c2938
	if (cr6.eq) goto loc_837C2938;
loc_837C291C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x837c296c
	if (cr6.eq) goto loc_837C296C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x837c291c
	if (!cr6.eq) goto loc_837C291C;
loc_837C2938:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x837c2950
	if (cr6.lt) goto loc_837C2950;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x837C2950;
	sub_8257FB60(ctx, base);
loc_837C2950:
	// li r3,1
	ctx.r3.s64 = 1;
loc_837C2954:
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
loc_837C296C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c2938
	if (cr6.eq) goto loc_837C2938;
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c2938
	if (cr6.eq) goto loc_837C2938;
	// bl 0x83788400
	ctx.lr = 0x837C2984;
	sub_83788400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c2938
	if (cr6.eq) goto loc_837C2938;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82467848
	ctx.lr = 0x837C2998;
	sub_82467848(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x837c2954
	goto loc_837C2954;
}

__attribute__((alias("__imp__sub_837C29A0"))) PPC_WEAK_FUNC(sub_837C29A0);
PPC_FUNC_IMPL(__imp__sub_837C29A0) {
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
	// lwz r3,36(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x833bbd78
	ctx.lr = 0x837C29BC;
	sub_833BBD78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_837C29D8"))) PPC_WEAK_FUNC(sub_837C29D8);
PPC_FUNC_IMPL(__imp__sub_837C29D8) {
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
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c2a04
	if (cr6.lt) goto loc_837C2A04;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C2A04:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x833bca80
	ctx.lr = 0x837C2A14;
	sub_833BCA80(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_837C2A2C"))) PPC_WEAK_FUNC(sub_837C2A2C);
PPC_FUNC_IMPL(__imp__sub_837C2A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2A30"))) PPC_WEAK_FUNC(sub_837C2A30);
PPC_FUNC_IMPL(__imp__sub_837C2A30) {
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
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c2a5c
	if (cr6.eq) goto loc_837C2A5C;
	// bl 0x834ca948
	ctx.lr = 0x837C2A54;
	sub_834CA948(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_837C2A5C:
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

__attribute__((alias("__imp__sub_837C2A70"))) PPC_WEAK_FUNC(sub_837C2A70);
PPC_FUNC_IMPL(__imp__sub_837C2A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,48(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83b48ad0
	sub_83B48AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C2A84"))) PPC_WEAK_FUNC(sub_837C2A84);
PPC_FUNC_IMPL(__imp__sub_837C2A84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C2A88"))) PPC_WEAK_FUNC(sub_837C2A88);
PPC_FUNC_IMPL(__imp__sub_837C2A88) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c2b0c
	if (cr6.eq) goto loc_837C2B0C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8347c858
	ctx.lr = 0x837C2AB4;
	sub_8347C858(ctx, base);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c2ac8
	if (cr6.lt) goto loc_837C2AC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C2AC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ec928
	ctx.lr = 0x837C2ADC;
	sub_833EC928(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8347c9e0
	ctx.lr = 0x837C2AF0;
	sub_8347C9E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x83b48a70
	ctx.lr = 0x837C2B00;
	sub_83B48A70(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8347ca00
	ctx.lr = 0x837C2B0C;
	sub_8347CA00(ctx, base);
loc_837C2B0C:
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

__attribute__((alias("__imp__sub_837C2B24"))) PPC_WEAK_FUNC(sub_837C2B24);
PPC_FUNC_IMPL(__imp__sub_837C2B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2B28"))) PPC_WEAK_FUNC(sub_837C2B28);
PPC_FUNC_IMPL(__imp__sub_837C2B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// b 0x834ca948
	sub_834CA948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C2B30"))) PPC_WEAK_FUNC(sub_837C2B30);
PPC_FUNC_IMPL(__imp__sub_837C2B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,40(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x833c9848
	sub_833C9848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C2B44"))) PPC_WEAK_FUNC(sub_837C2B44);
PPC_FUNC_IMPL(__imp__sub_837C2B44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C2B48"))) PPC_WEAK_FUNC(sub_837C2B48);
PPC_FUNC_IMPL(__imp__sub_837C2B48) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x831cdcf0
	ctx.lr = 0x837C2B7C;
	sub_831CDCF0(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r10,-21720
	ctx.r5.s64 = ctx.r10.s64 + -21720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x837C2B94;
	sub_831D0B08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8347d840
	ctx.lr = 0x837C2BA0;
	sub_8347D840(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x837c2bb4
	if (cr6.lt) goto loc_837C2BB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_837C2BB4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ec928
	ctx.lr = 0x837C2BC8;
	sub_833EC928(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8347d108
	ctx.lr = 0x837C2BD4;
	sub_8347D108(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x833c97e8
	ctx.lr = 0x837C2BE4;
	sub_833C97E8(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8347d128
	ctx.lr = 0x837C2BF0;
	sub_8347D128(ctx, base);
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

__attribute__((alias("__imp__sub_837C2C08"))) PPC_WEAK_FUNC(sub_837C2C08);
PPC_FUNC_IMPL(__imp__sub_837C2C08) {
	PPC_FUNC_PROLOGUE();
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r7.u32);
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r6,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r6.u32);
	// lwz r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r5,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r5.u32);
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// lwz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// lwz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r8,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r8.u32);
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// lwz r6,72(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r6,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r6.u32);
	// lwz r5,76(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// lbz r4,80(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 80);
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C2CBC"))) PPC_WEAK_FUNC(sub_837C2CBC);
PPC_FUNC_IMPL(__imp__sub_837C2CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2CC0"))) PPC_WEAK_FUNC(sub_837C2CC0);
PPC_FUNC_IMPL(__imp__sub_837C2CC0) {
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
	// bl 0x8378cba8
	ctx.lr = 0x837C2CD8;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c2d3c
	if (cr6.eq) goto loc_837C2D3C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x837c2d3c
	if (cr6.eq) goto loc_837C2D3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8378fd78
	ctx.lr = 0x837C2CFC;
	sub_8378FD78(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c2d3c
	if (cr6.eq) goto loc_837C2D3C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c2d3c
	if (cr6.eq) goto loc_837C2D3C;
	// bl 0x83787bf8
	ctx.lr = 0x837C2D18;
	sub_83787BF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c2d3c
	if (!cr6.eq) goto loc_837C2D3C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83788400
	ctx.lr = 0x837C2D2C;
	sub_83788400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c2d40
	if (cr6.eq) goto loc_837C2D40;
loc_837C2D3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_837C2D40:
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

__attribute__((alias("__imp__sub_837C2D54"))) PPC_WEAK_FUNC(sub_837C2D54);
PPC_FUNC_IMPL(__imp__sub_837C2D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2D58"))) PPC_WEAK_FUNC(sub_837C2D58);
PPC_FUNC_IMPL(__imp__sub_837C2D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837C2D60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837C2D70;
	sub_8378CBA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83787c78
	ctx.lr = 0x837C2D78;
	sub_83787C78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c2dec
	if (cr6.eq) goto loc_837C2DEC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x837c2dec
	if (cr6.eq) goto loc_837C2DEC;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// beq cr6,0x837c2dd0
	if (cr6.eq) goto loc_837C2DD0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c2dec
	if (!cr6.eq) goto loc_837C2DEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837c2cc0
	ctx.lr = 0x837C2DAC;
	sub_837C2CC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c2dec
	if (cr6.eq) goto loc_837C2DEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837891b8
	ctx.lr = 0x837C2DC0;
	sub_837891B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837C2DD0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c2dec
	if (cr6.eq) goto loc_837C2DEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83789230
	ctx.lr = 0x837C2DE4;
	sub_83789230(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
loc_837C2DEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C2DF4"))) PPC_WEAK_FUNC(sub_837C2DF4);
PPC_FUNC_IMPL(__imp__sub_837C2DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C2DF8"))) PPC_WEAK_FUNC(sub_837C2DF8);
PPC_FUNC_IMPL(__imp__sub_837C2DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// lfs f12,-8584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8584);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lfs f13,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f10,24504(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,20048(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C2F20"))) PPC_WEAK_FUNC(sub_837C2F20);
PPC_FUNC_IMPL(__imp__sub_837C2F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-8584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8584);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f13,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f10,24504(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f11,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lbz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// lbz r6,29(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 29);
	// stb r6,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C306C"))) PPC_WEAK_FUNC(sub_837C306C);
PPC_FUNC_IMPL(__imp__sub_837C306C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C3070"))) PPC_WEAK_FUNC(sub_837C3070);
PPC_FUNC_IMPL(__imp__sub_837C3070) {
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
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f12,-8584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8584);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// lfs f10,24504(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,20056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f13,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,112(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// bl 0x837c2c08
	ctx.lr = 0x837C317C;
	sub_837C2C08(ctx, base);
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

__attribute__((alias("__imp__sub_837C3194"))) PPC_WEAK_FUNC(sub_837C3194);
PPC_FUNC_IMPL(__imp__sub_837C3194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C3198"))) PPC_WEAK_FUNC(sub_837C3198);
PPC_FUNC_IMPL(__imp__sub_837C3198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f12,-8584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8584);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lfs f10,24504(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,20056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// lfs f12,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,20048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,9008(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r6,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r6.u32);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
loc_837C32C8:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x837c32c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C32C8;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lwz r8,52(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// lwz r7,56(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C3300"))) PPC_WEAK_FUNC(sub_837C3300);
PPC_FUNC_IMPL(__imp__sub_837C3300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-8584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8584);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// li r8,6
	ctx.r8.s64 = 6;
	// lfs f13,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f10,24504(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C3428"))) PPC_WEAK_FUNC(sub_837C3428);
PPC_FUNC_IMPL(__imp__sub_837C3428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-8584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8584);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// li r8,7
	ctx.r8.s64 = 7;
	// lfs f13,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f10,24504(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f11,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C355C"))) PPC_WEAK_FUNC(sub_837C355C);
PPC_FUNC_IMPL(__imp__sub_837C355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C3560"))) PPC_WEAK_FUNC(sub_837C3560);
PPC_FUNC_IMPL(__imp__sub_837C3560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32210
	ctx.r7.s64 = -2110914560;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f12,-8584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8584);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lfs f10,24504(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,20056(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f12,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f11,56(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C3668"))) PPC_WEAK_FUNC(sub_837C3668);
PPC_FUNC_IMPL(__imp__sub_837C3668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-8584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8584);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19176);
	ctx.f11.f64 = double(temp.f32);
	// li r8,9
	ctx.r8.s64 = 9;
	// lfs f13,20056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f10,24504(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24504);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-24912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24912);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// lfs f0,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f0,136(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C3794"))) PPC_WEAK_FUNC(sub_837C3794);
PPC_FUNC_IMPL(__imp__sub_837C3794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C3798"))) PPC_WEAK_FUNC(sub_837C3798);
PPC_FUNC_IMPL(__imp__sub_837C3798) {
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
	// bl 0x837c2d58
	ctx.lr = 0x837C37B4;
	sub_837C2D58(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837C37B8;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c37d8
	if (cr6.eq) goto loc_837C37D8;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x837c37d8
	if (cr6.eq) goto loc_837C37D8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8378d268
	ctx.lr = 0x837C37D8;
	sub_8378D268(ctx, base);
loc_837C37D8:
	// li r11,-1
	ctx.r11.s64 = -1;
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

__attribute__((alias("__imp__sub_837C37F4"))) PPC_WEAK_FUNC(sub_837C37F4);
PPC_FUNC_IMPL(__imp__sub_837C37F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C37F8"))) PPC_WEAK_FUNC(sub_837C37F8);
PPC_FUNC_IMPL(__imp__sub_837C37F8) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-21264
	ctx.r10.s64 = ctx.r11.s64 + -21264;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x837c2d58
	ctx.lr = 0x837C3824;
	sub_837C2D58(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837C3828;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c3848
	if (cr6.eq) goto loc_837C3848;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x837c3848
	if (cr6.eq) goto loc_837C3848;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8378d268
	ctx.lr = 0x837C3848;
	sub_8378D268(ctx, base);
loc_837C3848:
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x837c3874
	if (cr6.lt) goto loc_837C3874;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C3874;
	sub_825952B8(ctx, base);
loc_837C3874:
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C38A0"))) PPC_WEAK_FUNC(sub_837C38A0);
PPC_FUNC_IMPL(__imp__sub_837C38A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C38A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837C38B8;
	sub_8378CBA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837c3904
	if (!cr6.eq) goto loc_837C3904;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c38e4
	if (cr6.lt) goto loc_837C38E4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C38E4;
	sub_825952B8(ctx, base);
loc_837C38E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837C3904:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837c2d58
	ctx.lr = 0x837C3910;
	sub_837C2D58(ctx, base);
	// bl 0x8378cba8
	ctx.lr = 0x837C3914;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c3934
	if (cr6.eq) goto loc_837C3934;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x837c3934
	if (cr6.eq) goto loc_837C3934;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x8378d268
	ctx.lr = 0x837C3934;
	sub_8378D268(ctx, base);
loc_837C3934:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8379cc18
	ctx.lr = 0x837C3948;
	sub_8379CC18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x837c3984
	if (cr6.eq) goto loc_837C3984;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8378fd78
	ctx.lr = 0x837C3964;
	sub_8378FD78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c3984
	if (cr6.eq) goto loc_837C3984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x837C3978;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837C3984:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x837C398C;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C3998"))) PPC_WEAK_FUNC(sub_837C3998);
PPC_FUNC_IMPL(__imp__sub_837C3998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C39A0;
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
	// beq cr6,0x837c39e0
	if (cr6.eq) goto loc_837C39E0;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_837C39B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x837c39d0
	if (cr6.eq) goto loc_837C39D0;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,164
	ctx.r5.s64 = 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x837C39D0;
	sub_831CE980(ctx, base);
loc_837C39D0:
	// addi r31,r31,164
	ctx.r31.s64 = ctx.r31.s64 + 164;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x837c39b8
	if (!cr6.eq) goto loc_837C39B8;
loc_837C39E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C39EC"))) PPC_WEAK_FUNC(sub_837C39EC);
PPC_FUNC_IMPL(__imp__sub_837C39EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C39F0"))) PPC_WEAK_FUNC(sub_837C39F0);
PPC_FUNC_IMPL(__imp__sub_837C39F0) {
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
	// bl 0x837c37f8
	ctx.lr = 0x837C3A10;
	sub_837C37F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c3a30
	if (cr6.eq) goto loc_837C3A30;
	// bl 0x82595188
	ctx.lr = 0x837C3A20;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837C3A30;
	sub_825952B8(ctx, base);
loc_837C3A30:
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

__attribute__((alias("__imp__sub_837C3A4C"))) PPC_WEAK_FUNC(sub_837C3A4C);
PPC_FUNC_IMPL(__imp__sub_837C3A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C3A50"))) PPC_WEAK_FUNC(sub_837C3A50);
PPC_FUNC_IMPL(__imp__sub_837C3A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837C3A58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,399
	ctx.r11.s64 = 26148864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,39960
	ctx.r10.u64 = ctx.r11.u64 | 39960;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x837c3a7c
	if (!cr6.gt) goto loc_837C3A7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x837C3A7C;
	sub_831CC150(ctx, base);
loc_837C3A7C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,164
	ctx.r28.s64 = 164;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x837c3b08
	if (!cr6.lt) goto loc_837C3B08;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,164
	ctx.r29.s64 = ctx.r4.s64 * 164;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x837C3AB4;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x837c3998
	ctx.lr = 0x837C3ACC;
	sub_837C3998(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x837c3af0
	if (cr6.eq) goto loc_837C3AF0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x837C3AF0;
	sub_825952B8(ctx, base);
loc_837C3AF0:
	// mulli r11,r28,164
	ctx.r11.s64 = ctx.r28.s64 * 164;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_837C3B08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C3B10"))) PPC_WEAK_FUNC(sub_837C3B10);
PPC_FUNC_IMPL(__imp__sub_837C3B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,399
	ctx.r10.s64 = 26148864;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,164
	ctx.r9.s64 = 164;
	// ori r8,r10,39960
	ctx.r8.u64 = ctx.r10.u64 | 39960;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x837c3b44
	if (!cr6.lt) goto loc_837C3B44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_837C3B44:
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
	// blt cr6,0x837c3b74
	if (cr6.lt) goto loc_837C3B74;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_837C3B74:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x837c3b80
	if (!cr6.lt) goto loc_837C3B80;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_837C3B80:
	// b 0x837c3a50
	sub_837C3A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C3B84"))) PPC_WEAK_FUNC(sub_837C3B84);
PPC_FUNC_IMPL(__imp__sub_837C3B84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C3B88"))) PPC_WEAK_FUNC(sub_837C3B88);
PPC_FUNC_IMPL(__imp__sub_837C3B88) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-21264
	ctx.r10.s64 = ctx.r11.s64 + -21264;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r7,-32203
	ctx.r7.s64 = -2110455808;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r4,r7,-22544
	ctx.r4.s64 = ctx.r7.s64 + -22544;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x837C3BE4;
	sub_8259CC28(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_837C3C08"))) PPC_WEAK_FUNC(sub_837C3C08);
PPC_FUNC_IMPL(__imp__sub_837C3C08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837C3C10;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x8259cc28
	ctx.lr = 0x837C3C48;
	sub_8259CC28(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// li r5,35
	ctx.r5.s64 = 35;
	// addi r29,r11,-21464
	ctx.r29.s64 = ctx.r11.s64 + -21464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// bl 0x8259cc28
	ctx.lr = 0x837C3C6C;
	sub_8259CC28(ctx, base);
	// addi r5,r29,-76
	ctx.r5.s64 = ctx.r29.s64 + -76;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x837C3C80;
	sub_831D0B08(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_837C3C94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c3c94
	if (!cr6.eq) goto loc_837C3C94;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C3CBC;
	sub_8259CC28(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x837C3CD0;
	sub_825A1DA8(ctx, base);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x837C3CE0;
	sub_825A1EB8(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x837c3d24
	if (!cr6.eq) goto loc_837C3D24;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x837c3d08
	if (!cr6.eq) goto loc_837C3D08;
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x837C3D00;
	sub_825A1EB8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// b 0x837c3d60
	goto loc_837C3D60;
loc_837C3D08:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// bne cr6,0x837c3d60
	if (!cr6.eq) goto loc_837C3D60;
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x837C3D20;
	sub_825A1EB8(ctx, base);
	// b 0x837c3d60
	goto loc_837C3D60;
loc_837C3D24:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x837c3d44
	if (!cr6.eq) goto loc_837C3D44;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x837C3D3C;
	sub_825A1EB8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// b 0x837c3d5c
	goto loc_837C3D5C;
loc_837C3D44:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// bne cr6,0x837c3d60
	if (!cr6.eq) goto loc_837C3D60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x837C3D5C;
	sub_825A1EB8(ctx, base);
loc_837C3D5C:
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
loc_837C3D60:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c3d80
	if (cr6.lt) goto loc_837C3D80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C3D80;
	sub_825952B8(ctx, base);
loc_837C3D80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C3D8C"))) PPC_WEAK_FUNC(sub_837C3D8C);
PPC_FUNC_IMPL(__imp__sub_837C3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C3D90"))) PPC_WEAK_FUNC(sub_837C3D90);
PPC_FUNC_IMPL(__imp__sub_837C3D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C3D98;
	__savegprlr_29(ctx, base);
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
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x837C3DC8;
	sub_8259CC28(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x837c3dfc
	if (cr6.eq) goto loc_837C3DFC;
	// addi r11,r11,-21396
	ctx.r11.s64 = ctx.r11.s64 + -21396;
	// li r5,45
	ctx.r5.s64 = 45;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x8259cc28
	ctx.lr = 0x837C3DF0;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837C3DFC:
	// li r5,46
	ctx.r5.s64 = 46;
	// addi r4,r11,-21396
	ctx.r4.s64 = ctx.r11.s64 + -21396;
	// bl 0x8259cc28
	ctx.lr = 0x837C3E08;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C3E14"))) PPC_WEAK_FUNC(sub_837C3E14);
PPC_FUNC_IMPL(__imp__sub_837C3E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C3E18"))) PPC_WEAK_FUNC(sub_837C3E18);
PPC_FUNC_IMPL(__imp__sub_837C3E18) {
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
	// bge cr6,0x837c3e50
	if (!cr6.lt) goto loc_837C3E50;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x837c3e54
	if (!cr6.gt) goto loc_837C3E54;
loc_837C3E50:
	// li r10,0
	ctx.r10.s64 = 0;
loc_837C3E54:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x837c3ea4
	if (cr6.eq) goto loc_837C3EA4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,164
	ctx.r9.s64 = 164;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x837c3e88
	if (!cr6.eq) goto loc_837C3E88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837c3b10
	ctx.lr = 0x837C3E88;
	sub_837C3B10(ctx, base);
loc_837C3E88:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,164
	ctx.r11.s64 = ctx.r30.s64 * 164;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c3ed4
	if (cr6.eq) goto loc_837C3ED4;
	// b 0x837c3ecc
	goto loc_837C3ECC;
loc_837C3EA4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x837c3ebc
	if (!cr6.eq) goto loc_837C3EBC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837c3b10
	ctx.lr = 0x837C3EBC;
	sub_837C3B10(ctx, base);
loc_837C3EBC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c3ed4
	if (cr6.eq) goto loc_837C3ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_837C3ECC:
	// li r5,164
	ctx.r5.s64 = 164;
	// bl 0x831ce980
	ctx.lr = 0x837C3ED4;
	sub_831CE980(ctx, base);
loc_837C3ED4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
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

__attribute__((alias("__imp__sub_837C3EF8"))) PPC_WEAK_FUNC(sub_837C3EF8);
PPC_FUNC_IMPL(__imp__sub_837C3EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x837C3F00;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c3f28
	if (cr6.lt) goto loc_837C3F28;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x837c3f2c
	goto loc_837C3F2C;
loc_837C3F28:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_837C3F2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827a8810
	ctx.lr = 0x837C3F3C;
	sub_827A8810(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x837c3f58
	if (!cr6.eq) goto loc_837C3F58;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x837c3f80
	if (cr6.eq) goto loc_837C3F80;
loc_837C3F58:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837C3F6C;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_837C3F80:
	// bl 0x8378cba8
	ctx.lr = 0x837C3F84;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x837c3fc8
	if (!cr6.eq) goto loc_837C3FC8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c3fac
	if (cr6.lt) goto loc_837C3FAC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C3FAC;
	sub_825952B8(ctx, base);
loc_837C3FAC:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837C3FC8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x837c4028
	if (cr6.eq) goto loc_837C4028;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x837c4014
	if (cr6.eq) goto loc_837C4014;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83531878
	ctx.lr = 0x837C3FE8;
	sub_83531878(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837c38a0
	ctx.lr = 0x837C3FF4;
	sub_837C38A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c400c
	if (!cr6.eq) goto loc_837C400C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837c3798
	ctx.lr = 0x837C4008;
	sub_837C3798(ctx, base);
	// b 0x837c4074
	goto loc_837C4074;
loc_837C400C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x837c4078
	goto loc_837C4078;
loc_837C4014:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x837C401C;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_837C4028:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8378fd78
	ctx.lr = 0x837C4038;
	sub_8378FD78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c4074
	if (cr6.eq) goto loc_837C4074;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c4074
	if (cr6.eq) goto loc_837C4074;
	// bl 0x83787bf8
	ctx.lr = 0x837C4054;
	sub_83787BF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c4074
	if (!cr6.eq) goto loc_837C4074;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83788400
	ctx.lr = 0x837C4068;
	sub_83788400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c407c
	if (!cr6.eq) goto loc_837C407C;
loc_837C4074:
	// li r11,2
	ctx.r11.s64 = 2;
loc_837C4078:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_837C407C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x837C4084;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C4090"))) PPC_WEAK_FUNC(sub_837C4090);
PPC_FUNC_IMPL(__imp__sub_837C4090) {
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
	ctx.lr = 0x837C4098;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r4,1116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1116, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x837c499c
	if (cr6.eq) goto loc_837C499C;
	// bl 0x837c2cc0
	ctx.lr = 0x837C40B4;
	sub_837C2CC0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c499c
	if (cr6.eq) goto loc_837C499C;
	// bl 0x83787bf8
	ctx.lr = 0x837C40C8;
	sub_83787BF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c499c
	if (!cr6.eq) goto loc_837C499C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83788400
	ctx.lr = 0x837C40DC;
	sub_83788400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x837c499c
	if (!cr6.eq) goto loc_837C499C;
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stb r30,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r30.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r30.u8);
	// stb r30,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r30.u8);
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
	// stb r30,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r30.u8);
	// stb r30,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r30.u8);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// beq cr6,0x837c4124
	if (cr6.eq) goto loc_837C4124;
	// stb r30,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r30.u8);
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
loc_837C4124:
	// addi r31,r26,40
	ctx.r31.s64 = ctx.r26.s64 + 40;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43db8
	ctx.lr = 0x837C4134;
	sub_83B43DB8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// bl 0x837c2df8
	ctx.lr = 0x837C4188;
	sub_837C2DF8(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c3e18
	ctx.lr = 0x837C4194;
	sub_837C3E18(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,72(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r3,68(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// std r30,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r30.u64);
	// srawi. r28,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x837c43b4
	if (cr0.eq) goto loc_837C43B4;
loc_837C41B8:
	// addi r6,r1,704
	ctx.r6.s64 = ctx.r1.s64 + 704;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b441b0
	ctx.lr = 0x837C41CC;
	sub_83B441B0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44208
	ctx.lr = 0x837C41DC;
	sub_83B44208(ctx, base);
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44250
	ctx.lr = 0x837C41EC;
	sub_83B44250(ctx, base);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44290
	ctx.lr = 0x837C4200;
	sub_83B44290(ctx, base);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// addi r6,r1,688
	ctx.r6.s64 = ctx.r1.s64 + 688;
	// lfs f12,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,592
	ctx.r8.s64 = ctx.r1.s64 + 592;
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// lfs f9,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vspltw128 v60,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// vspltw128 v59,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
	// vspltw128 v58,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vspltw128 v57,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// vspltw128 v56,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lfs f13,688(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	ctx.f13.f64 = double(temp.f32);
	// addi r24,r1,416
	ctx.r24.s64 = ctx.r1.s64 + 416;
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// lfs f0,592(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,428
	ctx.r10.s64 = ctx.r1.s64 + 428;
	// stvx128 v59,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,12(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// stvx128 v58,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lfs f8,736(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	ctx.f8.f64 = double(temp.f32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lfs f7,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f7.f64 = double(temp.f32);
	// stvx128 v57,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stvx128 v56,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r3,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r3.u32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lfs f6,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f6.f64 = double(temp.f32);
	// stw r4,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r4.u32);
	// lfs f5,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f5.f64 = double(temp.f32);
	// stw r6,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r6.u32);
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stfs f8,296(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// lwz r7,296(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r5,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r5.u32);
	// stw r9,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
loc_837C4310:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x837c4310
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_837C4310;
	// addi r11,r1,720
	ctx.r11.s64 = ctx.r1.s64 + 720;
	// lfs f13,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stfs f13,364(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// stfs f0,360(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// vspltw128 v55,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v54,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v53,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvx128 v55,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v53,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r7,360(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// std r7,468(r1)
	PPC_STORE_U64(ctx.r1.u32 + 468, ctx.r7.u64);
	// lfs f10,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r6.u32);
	// stw r5,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r5.u32);
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// bl 0x837c3198
	ctx.lr = 0x837C439C;
	sub_837C3198(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c3e18
	ctx.lr = 0x837C43A8;
	sub_837C3E18(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x837c41b8
	if (cr6.lt) goto loc_837C41B8;
loc_837C43B4:
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r7,r1,344
	ctx.r7.s64 = ctx.r1.s64 + 344;
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// srawi. r11,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// std r30,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r30.u64);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r30,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r30.u32);
	// stw r30,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r30.u32);
	// std r30,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r30.u64);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r30.u32);
	// stw r30,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r30.u32);
	// stw r30,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// beq 0x837c4610
	if (cr0.eq) goto loc_837C4610;
loc_837C440C:
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b442c8
	ctx.lr = 0x837C441C;
	sub_83B442C8(ctx, base);
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44308
	ctx.lr = 0x837C442C;
	sub_83B44308(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44348
	ctx.lr = 0x837C443C;
	sub_83B44348(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44390
	ctx.lr = 0x837C444C;
	sub_83B44390(ctx, base);
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b443d8
	ctx.lr = 0x837C445C;
	sub_83B443D8(ctx, base);
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44418
	ctx.lr = 0x837C446C;
	sub_83B44418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44458
	ctx.lr = 0x837C4478;
	sub_83B44458(ctx, base);
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// vspltw128 v50,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// vspltw128 v51,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// vspltw128 v48,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// vspltw128 v52,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// vspltw128 v49,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// lwz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// vspltw128 v47,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stvx128 v50,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f6,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stvx128 v51,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stvx128 v48,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,456
	ctx.r5.s64 = ctx.r1.s64 + 456;
	// stvx128 v52,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f9,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stvx128 v49,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,440
	ctx.r6.s64 = ctx.r1.s64 + 440;
	// stvx128 v47,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lfs f7,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f5,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f5.f64 = double(temp.f32);
	// lwz r26,4(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f10,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r14,148(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r21,144(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r20,344(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r19,348(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r18,352(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r17,328(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r16,332(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r15,336(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r25,152(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r24,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r24.u32);
	// stw r23,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r23.u32);
	// stw r22,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r22.u32);
	// stw r21,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r21.u32);
	// stw r25,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r25.u32);
	// stw r14,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r14.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r26,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r26.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stw r29,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r29.u32);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r27,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r27.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// stw r20,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r20.u32);
	// stw r19,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r19.u32);
	// stw r18,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r18.u32);
	// stw r17,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r17.u32);
	// stw r16,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r16.u32);
	// stw r15,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r15.u32);
	// stb r28,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r28.u8);
	// bl 0x837c3070
	ctx.lr = 0x837C45E8;
	sub_837C3070(ctx, base);
	// lwz r27,1116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1116);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c3e18
	ctx.lr = 0x837C45F8;
	sub_837C3E18(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x837c440c
	if (cr6.lt) goto loc_837C440C;
	// lwz r26,128(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
loc_837C4610:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// srawi. r29,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lfs f0,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// beq 0x837c476c
	if (cr0.eq) goto loc_837C476C;
loc_837C4648:
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44170
	ctx.lr = 0x837C4658;
	sub_83B44170(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b440f8
	ctx.lr = 0x837C4668;
	sub_83B440F8(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b44140
	ctx.lr = 0x837C4678;
	sub_83B44140(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// lfs f5,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vspltw128 v46,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// vspltw128 v45,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vspltw128 v44,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// lbzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// lbzx r5,r30,r5
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// stvx128 v46,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stvx128 v45,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stvx128 v44,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f12,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lfs f11,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r6,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r6.u8);
	// stb r5,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r5.u8);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// bl 0x837c2f20
	ctx.lr = 0x837C4754;
	sub_837C2F20(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c3e18
	ctx.lr = 0x837C4760;
	sub_837C3E18(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x837c4648
	if (cr6.lt) goto loc_837C4648;
loc_837C476C:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c4794
	if (cr6.eq) goto loc_837C4794;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// bl 0x837c3560
	ctx.lr = 0x837C4788;
	sub_837C3560(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c3e18
	ctx.lr = 0x837C4794;
	sub_837C3E18(ctx, base);
loc_837C4794:
	// lwz r30,20(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x837c4820
	if (cr6.eq) goto loc_837C4820;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x83b440a0
	ctx.lr = 0x837C47BC;
	sub_83B440A0(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x837c3668
	ctx.lr = 0x837C4814;
	sub_837C3668(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c3e18
	ctx.lr = 0x837C4820;
	sub_837C3E18(ctx, base);
loc_837C4820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82927100
	ctx.lr = 0x837C4828;
	sub_82927100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b440c8
	ctx.lr = 0x837C4838;
	sub_83B440C8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b440e8
	ctx.lr = 0x837C4844;
	sub_83B440E8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x837c48e0
	if (cr6.eq) goto loc_837C48E0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c48e0
	if (cr6.eq) goto loc_837C48E0;
	// addi r10,r1,656
	ctx.r10.s64 = ctx.r1.s64 + 656;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// vspltw128 v43,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v41,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v42,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvx128 v43,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v41,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f12,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r5,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r5.u32);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// bl 0x837c3300
	ctx.lr = 0x837C48D4;
	sub_837C3300(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c3e18
	ctx.lr = 0x837C48E0;
	sub_837C3E18(ctx, base);
loc_837C48E0:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x83b43fa8
	ctx.lr = 0x837C4904;
	sub_83B43FA8(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43fd0
	ctx.lr = 0x837C4910;
	sub_83B43FD0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83b43fe0
	ctx.lr = 0x837C491C;
	sub_83B43FE0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f9,212(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x837c3428
	ctx.lr = 0x837C4980;
	sub_837C3428(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x837c3e18
	ctx.lr = 0x837C498C;
	sub_837C3E18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_837C499C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C49AC"))) PPC_WEAK_FUNC(sub_837C49AC);
PPC_FUNC_IMPL(__imp__sub_837C49AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C49B0"))) PPC_WEAK_FUNC(sub_837C49B0);
PPC_FUNC_IMPL(__imp__sub_837C49B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-21052
	ctx.r9.s64 = ctx.r10.s64 + -21052;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C49CC"))) PPC_WEAK_FUNC(sub_837C49CC);
PPC_FUNC_IMPL(__imp__sub_837C49CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C49D0"))) PPC_WEAK_FUNC(sub_837C49D0);
PPC_FUNC_IMPL(__imp__sub_837C49D0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837C49F0;
	sub_8378CBA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8379c328
	ctx.lr = 0x837C49F8;
	sub_8379C328(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837C4A04;
	sub_8378CBA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// bl 0x8378fd80
	ctx.lr = 0x837C4A10;
	sub_8378FD80(ctx, base);
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

__attribute__((alias("__imp__sub_837C4A2C"))) PPC_WEAK_FUNC(sub_837C4A2C);
PPC_FUNC_IMPL(__imp__sub_837C4A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C4A30"))) PPC_WEAK_FUNC(sub_837C4A30);
PPC_FUNC_IMPL(__imp__sub_837C4A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83b48ad0
	sub_83B48AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C4A40"))) PPC_WEAK_FUNC(sub_837C4A40);
PPC_FUNC_IMPL(__imp__sub_837C4A40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C4A44"))) PPC_WEAK_FUNC(sub_837C4A44);
PPC_FUNC_IMPL(__imp__sub_837C4A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C4A48"))) PPC_WEAK_FUNC(sub_837C4A48);
PPC_FUNC_IMPL(__imp__sub_837C4A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C4A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-21052
	ctx.r10.s64 = ctx.r11.s64 + -21052;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8378cba8
	ctx.lr = 0x837C4A6C;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c4a8c
	if (cr6.eq) goto loc_837C4A8C;
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8378cba8
	ctx.lr = 0x837C4A7C;
	sub_8378CBA8(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8378d268
	ctx.lr = 0x837C4A8C;
	sub_8378D268(ctx, base);
loc_837C4A8C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c4aac
	if (cr6.eq) goto loc_837C4AAC;
	// bl 0x82595188
	ctx.lr = 0x837C4A9C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837C4AAC;
	sub_825952B8(ctx, base);
loc_837C4AAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C4AB8"))) PPC_WEAK_FUNC(sub_837C4AB8);
PPC_FUNC_IMPL(__imp__sub_837C4AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x837C4AC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// addi r28,r11,-21144
	ctx.r28.s64 = ctx.r11.s64 + -21144;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r28,-64
	ctx.r4.s64 = ctx.r28.s64 + -64;
	// bl 0x8259cc28
	ctx.lr = 0x837C4AF8;
	sub_8259CC28(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x831cdcf0
	ctx.lr = 0x837C4B0C;
	sub_831CDCF0(ctx, base);
	// addi r5,r28,-44
	ctx.r5.s64 = ctx.r28.s64 + -44;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x837C4B20;
	sub_831D0B08(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_837C4B34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c4b34
	if (!cr6.eq) goto loc_837C4B34;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C4B5C;
	sub_8259CC28(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x837C4B74;
	sub_825A1DA8(ctx, base);
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837C4B84;
	sub_825A1EB8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837c4b98
	if (!cr6.eq) goto loc_837C4B98;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// b 0x837c4ba8
	goto loc_837C4BA8;
loc_837C4B98:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// addi r4,r28,-20
	ctx.r4.s64 = ctx.r28.s64 + -20;
	// beq cr6,0x837c4ba8
	if (cr6.eq) goto loc_837C4BA8;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
loc_837C4BA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837C4BB4;
	sub_825A1EB8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837c4bc8
	if (!cr6.eq) goto loc_837C4BC8;
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// b 0x837c4bd8
	goto loc_837C4BD8;
loc_837C4BC8:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// beq cr6,0x837c4bd8
	if (cr6.eq) goto loc_837C4BD8;
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
loc_837C4BD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837C4BE4;
	sub_825A1EB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837C4BF4;
	sub_825A1EB8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// bl 0x8259cb28
	ctx.lr = 0x837C4C24;
	sub_8259CB28(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lbz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// stb r7,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r7.u8);
	// blt cr6,0x837c4c64
	if (cr6.lt) goto loc_837C4C64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837C4C64;
	sub_825952B8(ctx, base);
loc_837C4C64:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// blt cr6,0x837c4c8c
	if (cr6.lt) goto loc_837C4C8C;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x837C4C8C;
	sub_825952B8(ctx, base);
loc_837C4C8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C4C98"))) PPC_WEAK_FUNC(sub_837C4C98);
PPC_FUNC_IMPL(__imp__sub_837C4C98) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837C4CB8;
	sub_8378CBA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8379cbe0
	ctx.lr = 0x837C4CC0;
	sub_8379CBE0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8378cba8
	ctx.lr = 0x837C4CCC;
	sub_8378CBA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// bl 0x8378fd68
	ctx.lr = 0x837C4CD8;
	sub_8378FD68(ctx, base);
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

__attribute__((alias("__imp__sub_837C4CF4"))) PPC_WEAK_FUNC(sub_837C4CF4);
PPC_FUNC_IMPL(__imp__sub_837C4CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C4CF8"))) PPC_WEAK_FUNC(sub_837C4CF8);
PPC_FUNC_IMPL(__imp__sub_837C4CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x834972a8
	sub_834972A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C4D08"))) PPC_WEAK_FUNC(sub_837C4D08);
PPC_FUNC_IMPL(__imp__sub_837C4D08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C4D0C"))) PPC_WEAK_FUNC(sub_837C4D0C);
PPC_FUNC_IMPL(__imp__sub_837C4D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C4D10"))) PPC_WEAK_FUNC(sub_837C4D10);
PPC_FUNC_IMPL(__imp__sub_837C4D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83497378
	sub_83497378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C4D20"))) PPC_WEAK_FUNC(sub_837C4D20);
PPC_FUNC_IMPL(__imp__sub_837C4D20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C4D24"))) PPC_WEAK_FUNC(sub_837C4D24);
PPC_FUNC_IMPL(__imp__sub_837C4D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C4D28"))) PPC_WEAK_FUNC(sub_837C4D28);
PPC_FUNC_IMPL(__imp__sub_837C4D28) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-20812
	ctx.r10.s64 = ctx.r11.s64 + -20812;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8378cba8
	ctx.lr = 0x837C4D50;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c4d78
	if (cr6.eq) goto loc_837C4D78;
	// lwz r31,36(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x837c4d78
	if (cr6.eq) goto loc_837C4D78;
	// bl 0x8378cba8
	ctx.lr = 0x837C4D68;
	sub_8378CBA8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8378d268
	ctx.lr = 0x837C4D78;
	sub_8378D268(ctx, base);
loc_837C4D78:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c4d9c
	if (cr6.lt) goto loc_837C4D9C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x837C4D9C;
	sub_825952B8(ctx, base);
loc_837C4D9C:
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C4DC8"))) PPC_WEAK_FUNC(sub_837C4DC8);
PPC_FUNC_IMPL(__imp__sub_837C4DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-20812
	ctx.r9.s64 = ctx.r10.s64 + -20812;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r7,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C4DF8"))) PPC_WEAK_FUNC(sub_837C4DF8);
PPC_FUNC_IMPL(__imp__sub_837C4DF8) {
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
	// bl 0x837c4d28
	ctx.lr = 0x837C4E18;
	sub_837C4D28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c4e38
	if (cr6.eq) goto loc_837C4E38;
	// bl 0x82595188
	ctx.lr = 0x837C4E28;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837C4E38;
	sub_825952B8(ctx, base);
loc_837C4E38:
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

__attribute__((alias("__imp__sub_837C4E54"))) PPC_WEAK_FUNC(sub_837C4E54);
PPC_FUNC_IMPL(__imp__sub_837C4E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C4E58"))) PPC_WEAK_FUNC(sub_837C4E58);
PPC_FUNC_IMPL(__imp__sub_837C4E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C4E60;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// beq cr6,0x837c4f34
	if (cr6.eq) goto loc_837C4F34;
	// bl 0x8378cba8
	ctx.lr = 0x837C4EF8;
	sub_8378CBA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8379cc10
	ctx.lr = 0x837C4F04;
	sub_8379CC10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c4f34
	if (cr6.eq) goto loc_837C4F34;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837C4F24;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378f088
	ctx.lr = 0x837C4F2C;
	sub_8378F088(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837C4F34:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c4f48
	if (cr6.lt) goto loc_837C4F48;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_837C4F48:
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378f088
	ctx.lr = 0x837C4F54;
	sub_8378F088(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C4F5C"))) PPC_WEAK_FUNC(sub_837C4F5C);
PPC_FUNC_IMPL(__imp__sub_837C4F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C4F60"))) PPC_WEAK_FUNC(sub_837C4F60);
PPC_FUNC_IMPL(__imp__sub_837C4F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C4F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// beq cr6,0x837c503c
	if (cr6.eq) goto loc_837C503C;
	// bl 0x8378cba8
	ctx.lr = 0x837C5000;
	sub_8378CBA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8379cc10
	ctx.lr = 0x837C500C;
	sub_8379CC10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c503c
	if (cr6.eq) goto loc_837C503C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837C502C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378f088
	ctx.lr = 0x837C5034;
	sub_8378F088(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_837C503C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x837c5050
	if (cr6.lt) goto loc_837C5050;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_837C5050:
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378f088
	ctx.lr = 0x837C505C;
	sub_8378F088(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C5064"))) PPC_WEAK_FUNC(sub_837C5064);
PPC_FUNC_IMPL(__imp__sub_837C5064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5068"))) PPC_WEAK_FUNC(sub_837C5068);
PPC_FUNC_IMPL(__imp__sub_837C5068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x837C5070;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r26,r31,32
	ctx.r26.s64 = ctx.r31.s64 + 32;
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// addi r25,r31,60
	ctx.r25.s64 = ctx.r31.s64 + 60;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r27,r11,-20912
	ctx.r27.s64 = ctx.r11.s64 + -20912;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r4,r27,-88
	ctx.r4.s64 = ctx.r27.s64 + -88;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// stw r28,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r28.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r30.u32);
	// stb r30,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r30.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8259cc28
	ctx.lr = 0x837C5120;
	sub_8259CC28(ctx, base);
	// addi r5,r27,-56
	ctx.r5.s64 = ctx.r27.s64 + -56;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0b08
	ctx.lr = 0x837C5134;
	sub_831D0B08(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
loc_837C5148:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x837c5148
	if (!cr6.eq) goto loc_837C5148;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x837C5170;
	sub_8259CC28(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r27,-90
	ctx.r4.s64 = ctx.r27.s64 + -90;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x837C518C;
	sub_8259CC28(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837c51a0
	if (!cr6.eq) goto loc_837C51A0;
	// addi r4,r27,-48
	ctx.r4.s64 = ctx.r27.s64 + -48;
	// b 0x837c51ac
	goto loc_837C51AC;
loc_837C51A0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837c51b8
	if (!cr6.eq) goto loc_837C51B8;
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
loc_837C51AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837C51B8;
	sub_825A1EB8(ctx, base);
loc_837C51B8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x837c51cc
	if (!cr6.eq) goto loc_837C51CC;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// b 0x837c51d8
	goto loc_837C51D8;
loc_837C51CC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x837c51e4
	if (!cr6.eq) goto loc_837C51E4;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
loc_837C51D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1eb8
	ctx.lr = 0x837C51E4;
	sub_825A1EB8(ctx, base);
loc_837C51E4:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x837C5200;
	sub_8259CC28(ctx, base);
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x837C5218;
	sub_825A1DA8(ctx, base);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837C5228;
	sub_825A1EB8(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x837C523C;
	sub_825A1DA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1eb8
	ctx.lr = 0x837C524C;
	sub_825A1EB8(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837C5260;
	sub_8259CB28(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259cb28
	ctx.lr = 0x837C5274;
	sub_8259CB28(ctx, base);
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// stw r8,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r8.u32);
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r5,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r4,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r4.u32);
	// blt cr6,0x837c52c8
	if (cr6.lt) goto loc_837C52C8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x837C52C8;
	sub_825952B8(ctx, base);
loc_837C52C8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// blt cr6,0x837c52f0
	if (cr6.lt) goto loc_837C52F0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x837C52F0;
	sub_825952B8(ctx, base);
loc_837C52F0:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// blt cr6,0x837c5318
	if (cr6.lt) goto loc_837C5318;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x837C5318;
	sub_825952B8(ctx, base);
loc_837C5318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C5324"))) PPC_WEAK_FUNC(sub_837C5324);
PPC_FUNC_IMPL(__imp__sub_837C5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5328"))) PPC_WEAK_FUNC(sub_837C5328);
PPC_FUNC_IMPL(__imp__sub_837C5328) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,-20676
	ctx.r8.s64 = ctx.r10.s64 + -20676;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5358"))) PPC_WEAK_FUNC(sub_837C5358);
PPC_FUNC_IMPL(__imp__sub_837C5358) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-20676
	ctx.r10.s64 = ctx.r11.s64 + -20676;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8378cba8
	ctx.lr = 0x837C537C;
	sub_8378CBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c53a4
	if (cr6.eq) goto loc_837C53A4;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x837c53a4
	if (cr6.eq) goto loc_837C53A4;
	// bl 0x8378cba8
	ctx.lr = 0x837C5394;
	sub_8378CBA8(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8378d268
	ctx.lr = 0x837C53A4;
	sub_8378D268(ctx, base);
loc_837C53A4:
	// bl 0x8378b870
	ctx.lr = 0x837C53A8;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c53bc
	if (cr6.eq) goto loc_837C53BC;
	// bl 0x8378b870
	ctx.lr = 0x837C53B4;
	sub_8378B870(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1960, ctx.r11.u32);
loc_837C53BC:
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

__attribute__((alias("__imp__sub_837C53D0"))) PPC_WEAK_FUNC(sub_837C53D0);
PPC_FUNC_IMPL(__imp__sub_837C53D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83b463c0
	sub_83B463C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C53E0"))) PPC_WEAK_FUNC(sub_837C53E0);
PPC_FUNC_IMPL(__imp__sub_837C53E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C53E4"))) PPC_WEAK_FUNC(sub_837C53E4);
PPC_FUNC_IMPL(__imp__sub_837C53E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C53E8"))) PPC_WEAK_FUNC(sub_837C53E8);
PPC_FUNC_IMPL(__imp__sub_837C53E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// b 0x83b46430
	sub_83B46430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C5404"))) PPC_WEAK_FUNC(sub_837C5404);
PPC_FUNC_IMPL(__imp__sub_837C5404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_837C5408"))) PPC_WEAK_FUNC(sub_837C5408);
PPC_FUNC_IMPL(__imp__sub_837C5408) {
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
	// bl 0x837c5358
	ctx.lr = 0x837C5428;
	sub_837C5358(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c5448
	if (cr6.eq) goto loc_837C5448;
	// bl 0x82595188
	ctx.lr = 0x837C5438;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x837C5448;
	sub_825952B8(ctx, base);
loc_837C5448:
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

__attribute__((alias("__imp__sub_837C5464"))) PPC_WEAK_FUNC(sub_837C5464);
PPC_FUNC_IMPL(__imp__sub_837C5464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5468"))) PPC_WEAK_FUNC(sub_837C5468);
PPC_FUNC_IMPL(__imp__sub_837C5468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x837C5470;
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
	// bl 0x8378cba8
	ctx.lr = 0x837C5488;
	sub_8378CBA8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c54e0
	if (cr6.eq) goto loc_837C54E0;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x837c54e0
	if (cr6.eq) goto loc_837C54E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8379d668
	ctx.lr = 0x837C54A8;
	sub_8379D668(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8378fd50
	ctx.lr = 0x837C54C0;
	sub_8378FD50(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x837c54ec
	if (!cr6.eq) goto loc_837C54EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8378d268
	ctx.lr = 0x837C54E0;
	sub_8378D268(ctx, base);
loc_837C54E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837C54EC:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x8378b870
	ctx.lr = 0x837C5500;
	sub_8378B870(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x837c5538
	if (cr6.eq) goto loc_837C5538;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x837c5530
	if (cr6.eq) goto loc_837C5530;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x837c5538
	if (!cr6.eq) goto loc_837C5538;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,1964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1964, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_837C5530:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,1960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1960, ctx.r11.u32);
loc_837C5538:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C5544"))) PPC_WEAK_FUNC(sub_837C5544);
PPC_FUNC_IMPL(__imp__sub_837C5544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_837C5548"))) PPC_WEAK_FUNC(sub_837C5548);
PPC_FUNC_IMPL(__imp__sub_837C5548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x837C5550;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
loc_837C5560:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83787b88
	ctx.lr = 0x837C556C;
	sub_83787B88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x834fd140
	ctx.lr = 0x837C557C;
	sub_834FD140(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(ctx.r31.s32, 20, xer);
	// blt cr6,0x837c5560
	if (cr6.lt) goto loc_837C5560;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_837C5594"))) PPC_WEAK_FUNC(sub_837C5594);
PPC_FUNC_IMPL(__imp__sub_837C5594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

