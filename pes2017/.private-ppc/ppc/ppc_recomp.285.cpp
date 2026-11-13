#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8312C3D0"))) PPC_WEAK_FUNC(sub_8312C3D0);
PPC_FUNC_IMPL(__imp__sub_8312C3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8312C3D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r6,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r6.u64);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bge cr6,0x8312c534
	if (!cr6.lt) goto loc_8312C534;
	// lwz r27,236(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r29,r5,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
loc_8312C3FC:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r31,r11,632
	ctx.r31.s64 = ctx.r11.s64 + 632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8312C424;
	sub_8373F5F8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312c478
	if (cr6.eq) goto loc_8312C478;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312c478
	if (cr6.eq) goto loc_8312C478;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8312C44C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312c478
	if (cr6.eq) goto loc_8312C478;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8312c478
	if (cr6.lt) goto loc_8312C478;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8312c47c
	if (!cr6.gt) goto loc_8312C47C;
loc_8312C478:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8312C47C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312c494
	if (cr6.eq) goto loc_8312C494;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x8312c524
	if (cr6.eq) goto loc_8312C524;
loc_8312C494:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x8312c3fc
	if (cr6.lt) goto loc_8312C3FC;
	// addi r31,r28,5240
	ctx.r31.s64 = ctx.r28.s64 + 5240;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8312C4B4;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312c508
	if (cr6.eq) goto loc_8312C508;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312c508
	if (cr6.eq) goto loc_8312C508;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8312C4DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312c508
	if (cr6.eq) goto loc_8312C508;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8312c508
	if (cr6.lt) goto loc_8312C508;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8312c50c
	if (!cr6.gt) goto loc_8312C50C;
loc_8312C508:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8312C50C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312c534
	if (cr6.eq) goto loc_8312C534;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x8312c534
	if (!cr6.eq) goto loc_8312C534;
loc_8312C524:
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x8312C534;
	sub_831CE980(ctx, base);
loc_8312C534:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312C53C"))) PPC_WEAK_FUNC(sub_8312C53C);
PPC_FUNC_IMPL(__imp__sub_8312C53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312C540"))) PPC_WEAK_FUNC(sub_8312C540);
PPC_FUNC_IMPL(__imp__sub_8312C540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8312C548;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312c584
	if (!cr6.eq) goto loc_8312C584;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83587190
	ctx.lr = 0x8312C578;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8312C584:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x8312c5c8
	if (!cr6.eq) goto loc_8312C5C8;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x8312c6c4
	if (!cr6.lt) goto loc_8312C6C4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83587190
	ctx.lr = 0x8312C5BC;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8312C5C8:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x8312c604
	if (!cr6.eq) goto loc_8312C604;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// lbz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x8312c6c4
	if (!cr6.lt) goto loc_8312C6C4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83587190
	ctx.lr = 0x8312C5F8;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8312C604:
	// lbz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// lbz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x8312c668
	if (!cr6.gt) goto loc_8312C668;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e7410
	ctx.lr = 0x8312C620;
	sub_833E7410(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x8312c664
	if (!cr6.lt) goto loc_8312C664;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312c6b0
	if (!cr6.eq) goto loc_8312C6B0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8312C650:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83587190
	ctx.lr = 0x8312C658;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8312C664:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_8312C668:
	// bge cr6,0x8312c6c4
	if (!cr6.lt) goto loc_8312C6C4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x8312C678;
	sub_8330EE50(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x8312c690
	if (cr6.eq) goto loc_8312C690;
	// lbz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x8312c6c4
	if (!cr6.lt) goto loc_8312C6C4;
loc_8312C690:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312c650
	if (cr6.eq) goto loc_8312C650;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8312C6B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83587190
	ctx.lr = 0x8312C6B8;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8312C6C4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838ab000
	ctx.lr = 0x8312C6D8;
	sub_838AB000(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312C6F0"))) PPC_WEAK_FUNC(sub_8312C6F0);
PPC_FUNC_IMPL(__imp__sub_8312C6F0) {
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
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,604
	ctx.r3.s64 = ctx.r3.s64 + 604;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x8312C714;
	sub_82CD17D8(ctx, base);
	// lwz r9,608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,608(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,608(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8312C748"))) PPC_WEAK_FUNC(sub_8312C748);
PPC_FUNC_IMPL(__imp__sub_8312C748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8312C750;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,608(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8312c794
	if (cr6.eq) goto loc_8312C794;
loc_8312C770:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8312c780
	if (!cr6.eq) goto loc_8312C780;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8312C780:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x8312C788;
	sub_8330EE50(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8312c770
	if (!cr6.eq) goto loc_8312C770;
loc_8312C794:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312C7A0"))) PPC_WEAK_FUNC(sub_8312C7A0);
PPC_FUNC_IMPL(__imp__sub_8312C7A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8312C7D4;
	sub_82595718(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r10.u8);
	// stb r10,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r10.u8);
	// beq 0x8312c810
	if (cr0.eq) goto loc_8312C810;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8312C810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312C828"))) PPC_WEAK_FUNC(sub_8312C828);
PPC_FUNC_IMPL(__imp__sub_8312C828) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312c880
	if (!cr6.eq) goto loc_8312C880;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
loc_8312C858:
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8312c86c
	if (!cr6.lt) goto loc_8312C86C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8312c874
	goto loc_8312C874;
loc_8312C86C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8312C874:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8312c858
	if (cr6.eq) goto loc_8312C858;
loc_8312C880:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8312c89c
	if (cr6.eq) goto loc_8312C89C;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x8312c8d8
	if (!cr6.lt) goto loc_8312C8D8;
loc_8312C89C:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x8312c7a0
	ctx.lr = 0x8312C8B8;
	sub_8312C7A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8312c540
	ctx.lr = 0x8312C8CC;
	sub_8312C540(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x8312c8dc
	goto loc_8312C8DC;
loc_8312C8D8:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
loc_8312C8DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312C8F4"))) PPC_WEAK_FUNC(sub_8312C8F4);
PPC_FUNC_IMPL(__imp__sub_8312C8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312C8F8"))) PPC_WEAK_FUNC(sub_8312C8F8);
PPC_FUNC_IMPL(__imp__sub_8312C8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8312C900;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,608(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r3,604
	ctx.r4.s64 = ctx.r3.s64 + 604;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x8312C91C;
	sub_82D0E798(ctx, base);
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r4,608(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 608);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x825952b8
	ctx.lr = 0x8312C930;
	sub_825952B8(ctx, base);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8312c950
	if (cr6.lt) goto loc_8312C950;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8312C950;
	sub_825952B8(ctx, base);
loc_8312C950:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// addi r31,r30,316
	ctx.r31.s64 = ctx.r30.s64 + 316;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8312c984
	if (cr6.lt) goto loc_8312C984;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8312C984;
	sub_825952B8(ctx, base);
loc_8312C984:
	// addi r30,r30,288
	ctx.r30.s64 = ctx.r30.s64 + 288;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8312c9b0
	if (cr6.lt) goto loc_8312C9B0;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8312C9B0;
	sub_825952B8(ctx, base);
loc_8312C9B0:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312C9C4"))) PPC_WEAK_FUNC(sub_8312C9C4);
PPC_FUNC_IMPL(__imp__sub_8312C9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312C9C8"))) PPC_WEAK_FUNC(sub_8312C9C8);
PPC_FUNC_IMPL(__imp__sub_8312C9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8312C9D0;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8312C9DC;
	sub_831156E8(ctx, base);
	// lwz r19,48(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x8312C9E4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r31,601
	ctx.r30.s64 = ctx.r31.s64 + 601;
	// addis r22,r11,5
	ctx.r22.s64 = ctx.r11.s64 + 327680;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r22,r22,14904
	ctx.r22.s64 = ctx.r22.s64 + 14904;
	// lis r21,-31772
	ctx.r21.s64 = -2082209792;
loc_8312CA04:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123a08
	ctx.lr = 0x8312CA10;
	sub_83123A08(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stbx r26,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r26.u8);
	// lwz r10,-6464(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + -6464);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8312ca44
	if (!cr6.eq) goto loc_8312CA44;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312ca48
	if (cr6.eq) goto loc_8312CA48;
loc_8312CA44:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8312CA48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312cab0
	if (!cr6.eq) goto loc_8312CAB0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8312CA58:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stb r26,88(r7)
	PPC_STORE_U8(ctx.r7.u32 + 88, ctx.r26.u8);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stb r26,152(r5)
	PPC_STORE_U8(ctx.r5.u32 + 152, ctx.r26.u8);
	// blt cr6,0x8312ca58
	if (cr6.lt) goto loc_8312CA58;
	// lhz r4,784(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 784);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8311c628
	ctx.lr = 0x8312CAA0;
	sub_8311C628(ctx, base);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r10,28,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// stbx r8,r30,r9
	PPC_STORE_U8(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u8);
loc_8312CAB0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8312ca04
	if (cr6.lt) goto loc_8312CA04;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-6516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6516);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// sth r23,284(r31)
	PPC_STORE_U16(ctx.r31.u32 + 284, ctx.r23.u16);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8312CAEC;
	sub_831CDCF0(ctx, base);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r9,1460
	ctx.r4.s64 = ctx.r9.s64 + 1460;
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// bl 0x8259cc28
	ctx.lr = 0x8312CB00;
	sub_8259CC28(ctx, base);
	// stw r26,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r26.u32);
	// bl 0x831156e8
	ctx.lr = 0x8312CB08;
	sub_831156E8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312ae08
	ctx.lr = 0x8312CB14;
	sub_8312AE08(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stb r3,568(r31)
	PPC_STORE_U8(ctx.r31.u32 + 568, ctx.r3.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r28,r31,568
	ctx.r28.s64 = ctx.r31.s64 + 568;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8312CB44:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x83124200
	ctx.lr = 0x8312CB50;
	sub_83124200(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// bne 0x8312cb44
	if (!cr0.eq) goto loc_8312CB44;
	// addi r29,r31,584
	ctx.r29.s64 = ctx.r31.s64 + 584;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8312CB68:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83124200
	ctx.lr = 0x8312CB74;
	sub_83124200(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bne 0x8312cb68
	if (!cr0.eq) goto loc_8312CB68;
	// stb r26,597(r31)
	PPC_STORE_U8(ctx.r31.u32 + 597, ctx.r26.u8);
	// addi r29,r31,604
	ctx.r29.s64 = ctx.r31.s64 + 604;
	// stb r26,596(r31)
	PPC_STORE_U8(ctx.r31.u32 + 596, ctx.r26.u8);
	// stb r26,600(r31)
	PPC_STORE_U8(ctx.r31.u32 + 600, ctx.r26.u8);
	// stb r26,598(r31)
	PPC_STORE_U8(ctx.r31.u32 + 598, ctx.r26.u8);
	// stb r26,599(r31)
	PPC_STORE_U8(ctx.r31.u32 + 599, ctx.r26.u8);
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312cbdc
	if (!cr6.eq) goto loc_8312CBDC;
loc_8312CBB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82cd17d8
	ctx.lr = 0x8312CBBC;
	sub_82CD17D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x8312CBD0;
	sub_825952B8(ctx, base);
	// lbz r11,21(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312cbb0
	if (cr6.eq) goto loc_8312CBB0;
loc_8312CBDC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// stw r26,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r26.u32);
	// stb r26,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r26.u8);
	// stw r26,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r26.u32);
	// stw r26,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r26.u32);
	// stb r26,629(r31)
	PPC_STORE_U8(ctx.r31.u32 + 629, ctx.r26.u8);
	// stb r26,630(r31)
	PPC_STORE_U8(ctx.r31.u32 + 630, ctx.r26.u8);
	// stb r26,631(r31)
	PPC_STORE_U8(ctx.r31.u32 + 631, ctx.r26.u8);
	// bl 0x831156e8
	ctx.lr = 0x8312CC14;
	sub_831156E8(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,28
	ctx.r10.s64 = 1835008;
	// lwz r27,60(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r28,32767
	ctx.r28.s64 = 32767;
	// ori r24,r10,8720
	ctx.r24.u64 = ctx.r10.u64 | 8720;
	// addi r25,r11,-6512
	ctx.r25.s64 = ctx.r11.s64 + -6512;
loc_8312CC30:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123a08
	ctx.lr = 0x8312CC3C;
	sub_83123A08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,-6464(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + -6464);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8312cc6c
	if (!cr6.eq) goto loc_8312CC6C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312cc70
	if (cr6.eq) goto loc_8312CC70;
loc_8312CC6C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8312CC70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312cd90
	if (cr6.eq) goto loc_8312CD90;
loc_8312CC80:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// bl 0x831cdcf0
	ctx.lr = 0x8312CCAC;
	sub_831CDCF0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312CCDC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312ccdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312CCDC;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x8312cc80
	if (cr6.lt) goto loc_8312CC80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 * 264;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,5312
	ctx.r3.s64 = ctx.r11.s64 + 5312;
	// bl 0x831cdcf0
	ctx.lr = 0x8312CD10;
	sub_831CDCF0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,132
	ctx.r5.s64 = 132;
	// mulli r11,r10,264
	ctx.r11.s64 = ctx.r10.s64 * 264;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,5444
	ctx.r3.s64 = ctx.r11.s64 + 5444;
	// bl 0x831cdcf0
	ctx.lr = 0x8312CD2C;
	sub_831CDCF0(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8312CD30:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mulli r9,r9,21
	ctx.r9.s64 = ctx.r9.s64 * 21;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r11,2934
	ctx.r7.s64 = ctx.r11.s64 + 2934;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u16);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r5,21
	ctx.r11.s64 = ctx.r5.s64 * 21;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312CD78:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312cd78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312CD78;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,21
	cr6.compare<uint32_t>(ctx.r10.u32, 21, xer);
	// blt cr6,0x8312cd30
	if (cr6.lt) goto loc_8312CD30;
	// b 0x8312d3d8
	goto loc_8312D3D8;
loc_8312CD90:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123ba8
	ctx.lr = 0x8312CDA4;
	sub_83123BA8(ctx, base);
	// ld r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// bne cr6,0x8312cdcc
	if (!cr6.eq) goto loc_8312CDCC;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8312cdf4
	goto loc_8312CDF4;
loc_8312CDCC:
	// lhz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// lhz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bne cr6,0x8312cdec
	if (!cr6.eq) goto loc_8312CDEC;
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq cr6,0x8312cdf0
	if (cr6.eq) goto loc_8312CDF0;
loc_8312CDEC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8312CDF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8312CDF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bne cr6,0x8312cf18
	if (!cr6.eq) goto loc_8312CF18;
	// ld r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 44);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,632
	ctx.r4.s64 = ctx.r11.s64 + 632;
	// bl 0x8311d1d0
	ctx.lr = 0x8312CE2C;
	sub_8311D1D0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8312ce64
	if (!cr6.eq) goto loc_8312CE64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// bl 0x831cdcf0
	ctx.lr = 0x8312CE64;
	sub_831CDCF0(ctx, base);
loc_8312CE64:
	// add. r3,r27,r24
	ctx.r3.u64 = ctx.r27.u64 + ctx.r24.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8312cedc
	if (cr0.eq) goto loc_8312CEDC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x83147150
	ctx.lr = 0x8312CE94;
	sub_83147150(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8312cf70
	if (!cr6.eq) goto loc_8312CF70;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,248
	ctx.r11.s64 = ctx.r10.s64 + 248;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312CED0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312ced0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312CED0;
	// b 0x8312cf70
	goto loc_8312CF70;
loc_8312CEDC:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,248
	ctx.r11.s64 = ctx.r10.s64 + 248;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312CF0C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312cf0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312CF0C;
	// b 0x8312cf70
	goto loc_8312CF70;
loc_8312CF18:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,632
	ctx.r3.s64 = ctx.r11.s64 + 632;
	// bl 0x831cdcf0
	ctx.lr = 0x8312CF38;
	sub_831CDCF0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312CF68:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312cf68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312CF68;
loc_8312CF70:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x8312cd90
	if (cr6.lt) goto loc_8312CD90;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312c030
	ctx.lr = 0x8312CF9C;
	sub_8312C030(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r8,264
	ctx.r11.s64 = ctx.r8.s64 * 264;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r7,25
	ctx.r9.u64 = ctx.r7.u32 & 0x7F;
	// rlwinm r10,r6,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r11,5312
	ctx.r4.s64 = ctx.r11.s64 + 5312;
	// bl 0x8311c928
	ctx.lr = 0x8312CFD8;
	sub_8311C928(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8312d000
	if (!cr6.eq) goto loc_8312D000;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 * 264;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,5312
	ctx.r3.s64 = ctx.r11.s64 + 5312;
	// bl 0x831cdcf0
	ctx.lr = 0x8312D000;
	sub_831CDCF0(ctx, base);
loc_8312D000:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312c030
	ctx.lr = 0x8312D01C;
	sub_8312C030(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r8,264
	ctx.r11.s64 = ctx.r8.s64 * 264;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r7,25
	ctx.r9.u64 = ctx.r7.u32 & 0x7F;
	// rlwinm r10,r6,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r11,5444
	ctx.r4.s64 = ctx.r11.s64 + 5444;
	// bl 0x8311c928
	ctx.lr = 0x8312D058;
	sub_8311C928(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8312d080
	if (!cr6.eq) goto loc_8312D080;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 * 264;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,5444
	ctx.r3.s64 = ctx.r11.s64 + 5444;
	// bl 0x831cdcf0
	ctx.lr = 0x8312D080;
	sub_831CDCF0(ctx, base);
loc_8312D080:
	// add. r29,r27,r24
	ctx.r29.u64 = ctx.r27.u64 + ctx.r24.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// sth r23,5840(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5840, ctx.r23.u16);
	// beq 0x8312d330
	if (cr0.eq) goto loc_8312D330;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8312D090:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83146980
	ctx.lr = 0x8312D0A4;
	sub_83146980(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,487
	ctx.r11.s64 = ctx.r11.s64 + 487;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r10,r8,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// blt cr6,0x8312d090
	if (cr6.lt) goto loc_8312D090;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8312D0EC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mulli r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 * 21;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,2934
	ctx.r10.s64 = ctx.r11.s64 + 2934;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831472a0
	ctx.lr = 0x8312D114;
	sub_831472A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8312d138
	if (!cr6.eq) goto loc_8312D138;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 * 21;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,2934
	ctx.r10.s64 = ctx.r11.s64 + 2934;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u16);
loc_8312D138:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mulli r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 * 21;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831471f0
	ctx.lr = 0x8312D168;
	sub_831471F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8312d1ac
	if (!cr6.eq) goto loc_8312D1AC;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mulli r10,r10,21
	ctx.r10.s64 = ctx.r10.s64 * 21;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312D1A4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d1a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D1A4;
loc_8312D1AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,21
	cr6.compare<uint32_t>(ctx.r30.u32, 21, xer);
	// blt cr6,0x8312d0ec
	if (cr6.lt) goto loc_8312D0EC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8315da70
	ctx.lr = 0x8312D1C8;
	sub_8315DA70(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,2136
	ctx.r10.s64 = ctx.r11.s64 + 2136;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r10,-6464(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + -6464);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r9,2136
	ctx.r5.s64 = ctx.r9.s64 + 2136;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// xor r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r3,r4,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8312d230
	if (!cr6.eq) goto loc_8312D230;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312d234
	if (cr6.eq) goto loc_8312D234;
loc_8312D230:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8312D234:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312d2f4
	if (!cr6.eq) goto loc_8312D2F4;
	// addi r11,r9,4276
	ctx.r11.s64 = ctx.r9.s64 + 4276;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x831472a0
	ctx.lr = 0x8312D258;
	sub_831472A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8312d274
	if (!cr6.eq) goto loc_8312D274;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r11,4276
	ctx.r10.s64 = ctx.r11.s64 + 4276;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u16);
loc_8312D274:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r31,8556
	ctx.r30.s64 = ctx.r31.s64 + 8556;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r20,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r20.u8);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2136
	ctx.r9.s64 = ctx.r11.s64 + 2136;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r4,r11,8560
	ctx.r4.s64 = ctx.r11.s64 + 8560;
	// bl 0x831471f0
	ctx.lr = 0x8312D2B0;
	sub_831471F0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8312d3d8
	if (!cr6.eq) goto loc_8312D3D8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,6
	ctx.r10.s64 = 6;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,8556
	ctx.r11.s64 = ctx.r11.s64 + 8556;
loc_8312D2E0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d2e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D2E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stbx r26,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u8);
	// b 0x8312d3d8
	goto loc_8312D3D8;
loc_8312D2F4:
	// addi r10,r9,4276
	ctx.r10.s64 = ctx.r9.s64 + 4276;
	// li r11,6
	ctx.r11.s64 = 6;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// sthx r28,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r28.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,8556
	ctx.r11.s64 = ctx.r11.s64 + 8556;
loc_8312D324:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d324
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D324;
	// b 0x8312d3cc
	goto loc_8312D3CC;
loc_8312D330:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8312D334:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mulli r9,r9,21
	ctx.r9.s64 = ctx.r9.s64 * 21;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r11,2934
	ctx.r7.s64 = ctx.r11.s64 + 2934;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r28.u16);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r5,21
	ctx.r11.s64 = ctx.r5.s64 * 21;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8312D37C:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d37c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D37C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,21
	cr6.compare<uint32_t>(ctx.r10.u32, 21, xer);
	// blt cr6,0x8312d334
	if (cr6.lt) goto loc_8312D334;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r8,r10,4276
	ctx.r8.s64 = ctx.r10.s64 + 4276;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// sthx r28,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r28.u16);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,8556
	ctx.r11.s64 = ctx.r11.s64 + 8556;
loc_8312D3C4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d3c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D3C4;
loc_8312D3CC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r26,8556(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8556, ctx.r26.u8);
loc_8312D3D8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8312cc30
	if (cr6.lt) goto loc_8312CC30;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83124130
	ctx.lr = 0x8312D3F4;
	sub_83124130(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bne cr6,0x8312d418
	if (!cr6.eq) goto loc_8312D418;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8312d440
	goto loc_8312D440;
loc_8312D418:
	// lhz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// lhz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8312d438
	if (!cr6.eq) goto loc_8312D438;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// beq cr6,0x8312d43c
	if (cr6.eq) goto loc_8312D43C;
loc_8312D438:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8312D43C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8312D440:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312d474
	if (!cr6.eq) goto loc_8312D474;
	// addi r30,r31,5240
	ctx.r30.s64 = ctx.r31.s64 + 5240;
	// ld r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8311d1d0
	ctx.lr = 0x8312D460;
	sub_8311D1D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312d484
	if (!cr6.eq) goto loc_8312D484;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8312d478
	goto loc_8312D478;
loc_8312D474:
	// addi r3,r31,5240
	ctx.r3.s64 = ctx.r31.s64 + 5240;
loc_8312D478:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8312D484;
	sub_831CDCF0(ctx, base);
loc_8312D484:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83123778
	ctx.lr = 0x8312D48C;
	sub_83123778(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x8312d4d4
	if (!cr6.eq) goto loc_8312D4D4;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,8492
	ctx.r11.s64 = ctx.r31.s64 + 8492;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312D4AC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d4ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D4AC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,8516
	ctx.r11.s64 = ctx.r31.s64 + 8516;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312D4C4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d4c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D4C4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8312D4D4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8311c338
	ctx.lr = 0x8312D4DC;
	sub_8311C338(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add. r29,r27,r24
	ctx.r29.u64 = ctx.r27.u64 + ctx.r24.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x8312d574
	if (cr0.eq) goto loc_8312D574;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r30,r31,8496
	ctx.r30.s64 = ctx.r31.s64 + 8496;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83147318
	ctx.lr = 0x8312D508;
	sub_83147318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312d52c
	if (!cr6.eq) goto loc_8312D52C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312D524:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d524
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D524;
loc_8312D52C:
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r31,r31,8520
	ctx.r31.s64 = ctx.r31.s64 + 8520;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83147318
	ctx.lr = 0x8312D548;
	sub_83147318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8312d5a4
	if (!cr6.eq) goto loc_8312D5A4;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312D564:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d564
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D564;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_8312D574:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,8492
	ctx.r11.s64 = ctx.r31.s64 + 8492;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312D584:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d584
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D584;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,8516
	ctx.r11.s64 = ctx.r31.s64 + 8516;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312D59C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d59c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D59C;
loc_8312D5A4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312D5AC"))) PPC_WEAK_FUNC(sub_8312D5AC);
PPC_FUNC_IMPL(__imp__sub_8312D5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312D5B0"))) PPC_WEAK_FUNC(sub_8312D5B0);
PPC_FUNC_IMPL(__imp__sub_8312D5B0) {
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x8312d5dc
	if (!cr6.eq) goto loc_8312D5DC;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,1458
	ctx.r4.s64 = ctx.r11.s64 + 1458;
	// b 0x8312d5fc
	goto loc_8312D5FC;
loc_8312D5DC:
	// bl 0x831156e8
	ctx.lr = 0x8312D5E0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x8312D5F4;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_8312D5FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b0c10
	ctx.lr = 0x8312D604;
	sub_837B0C10(ctx, base);
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

__attribute__((alias("__imp__sub_8312D61C"))) PPC_WEAK_FUNC(sub_8312D61C);
PPC_FUNC_IMPL(__imp__sub_8312D61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312D620"))) PPC_WEAK_FUNC(sub_8312D620);
PPC_FUNC_IMPL(__imp__sub_8312D620) {
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// blt cr6,0x8312d650
	if (cr6.lt) goto loc_8312D650;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r4,r11,1473
	ctx.r4.s64 = ctx.r11.s64 + 1473;
	// b 0x8312d674
	goto loc_8312D674;
loc_8312D650:
	// bl 0x831156e8
	ctx.lr = 0x8312D654;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123ba8
	ctx.lr = 0x8312D66C;
	sub_83123BA8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,56
	ctx.r4.s64 = ctx.r3.s64 + 56;
loc_8312D674:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837b0c10
	ctx.lr = 0x8312D67C;
	sub_837B0C10(ctx, base);
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

__attribute__((alias("__imp__sub_8312D694"))) PPC_WEAK_FUNC(sub_8312D694);
PPC_FUNC_IMPL(__imp__sub_8312D694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312D698"))) PPC_WEAK_FUNC(sub_8312D698);
PPC_FUNC_IMPL(__imp__sub_8312D698) {
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
	// addi r4,r4,288
	ctx.r4.s64 = ctx.r4.s64 + 288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8312D6D0;
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

__attribute__((alias("__imp__sub_8312D6E8"))) PPC_WEAK_FUNC(sub_8312D6E8);
PPC_FUNC_IMPL(__imp__sub_8312D6E8) {
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
	// addi r4,r4,316
	ctx.r4.s64 = ctx.r4.s64 + 316;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8312D720;
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

__attribute__((alias("__imp__sub_8312D738"))) PPC_WEAK_FUNC(sub_8312D738);
PPC_FUNC_IMPL(__imp__sub_8312D738) {
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
	// addi r4,r4,344
	ctx.r4.s64 = ctx.r4.s64 + 344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8312D770;
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

__attribute__((alias("__imp__sub_8312D788"))) PPC_WEAK_FUNC(sub_8312D788);
PPC_FUNC_IMPL(__imp__sub_8312D788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8312D790;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r30,r4,24
	ctx.r30.u64 = ctx.r4.u32 & 0xFF;
	// addi r31,r3,604
	ctx.r31.s64 = ctx.r3.s64 + 604;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838aaeb8
	ctx.lr = 0x8312D7B4;
	sub_838AAEB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8381ba48
	ctx.lr = 0x8312D7D0;
	sub_8381BA48(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312d7f8
	if (cr6.eq) goto loc_8312D7F8;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8312c828
	ctx.lr = 0x8312D7EC;
	sub_8312C828(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8312D7F8:
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x8312c7a0
	ctx.lr = 0x8312D808;
	sub_8312C7A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x838ab000
	ctx.lr = 0x8312D81C;
	sub_838AB000(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312D824"))) PPC_WEAK_FUNC(sub_8312D824);
PPC_FUNC_IMPL(__imp__sub_8312D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312D828"))) PPC_WEAK_FUNC(sub_8312D828);
PPC_FUNC_IMPL(__imp__sub_8312D828) {
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
	// clrlwi r31,r4,24
	ctx.r31.u64 = ctx.r4.u32 & 0xFF;
	// addi r30,r3,604
	ctx.r30.s64 = ctx.r3.s64 + 604;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x838aaeb8
	ctx.lr = 0x8312D858;
	sub_838AAEB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8381ba48
	ctx.lr = 0x8312D874;
	sub_8381BA48(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312d898
	if (cr6.eq) goto loc_8312D898;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312c828
	ctx.lr = 0x8312D890;
	sub_8312C828(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8312d89c
	goto loc_8312D89C;
loc_8312D898:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312D89C:
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

__attribute__((alias("__imp__sub_8312D8B4"))) PPC_WEAK_FUNC(sub_8312D8B4);
PPC_FUNC_IMPL(__imp__sub_8312D8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312D8B8"))) PPC_WEAK_FUNC(sub_8312D8B8);
PPC_FUNC_IMPL(__imp__sub_8312D8B8) {
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
	// li r10,22
	ctx.r10.s64 = 22;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,25
	ctx.r9.s64 = 25;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8312D8E0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312d8e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D8E0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// stb r11,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r11.u8);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stb r11,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r10,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r10.u32);
	// addi r10,r31,372
	ctx.r10.s64 = ctx.r31.s64 + 372;
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r11.u8);
loc_8312D92C:
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8312d92c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312D92C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,604
	ctx.r3.s64 = ctx.r31.s64 + 604;
	// bl 0x8381b9d0
	ctx.lr = 0x8312D948;
	sub_8381B9D0(ctx, base);
	// addi r3,r31,632
	ctx.r3.s64 = ctx.r31.s64 + 632;
	// li r5,4608
	ctx.r5.s64 = 4608;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8312D958;
	sub_831CDCF0(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,5240
	ctx.r3.s64 = ctx.r31.s64 + 5240;
	// bl 0x831cdcf0
	ctx.lr = 0x8312D968;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,5312
	ctx.r3.s64 = ctx.r31.s64 + 5312;
	// li r5,528
	ctx.r5.s64 = 528;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8312D978;
	sub_831CDCF0(ctx, base);
	// stw r30,5844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5844, ctx.r30.u32);
	// stw r30,5848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5848, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,5852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5852, ctx.r30.u32);
	// addi r11,r31,5844
	ctx.r11.s64 = ctx.r31.s64 + 5844;
	// stw r30,5856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5856, ctx.r30.u32);
	// addi r11,r31,8544
	ctx.r11.s64 = ctx.r31.s64 + 8544;
	// stw r30,5860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5860, ctx.r30.u32);
	// stw r30,5864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5864, ctx.r30.u32);
	// stw r30,8544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8544, ctx.r30.u32);
	// stw r30,8548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8548, ctx.r30.u32);
	// bl 0x8312c9c8
	ctx.lr = 0x8312D9A8;
	sub_8312C9C8(ctx, base);
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

__attribute__((alias("__imp__sub_8312D9C4"))) PPC_WEAK_FUNC(sub_8312D9C4);
PPC_FUNC_IMPL(__imp__sub_8312D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312D9C8"))) PPC_WEAK_FUNC(sub_8312D9C8);
PPC_FUNC_IMPL(__imp__sub_8312D9C8) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,288
	ctx.r3.s64 = ctx.r3.s64 + 288;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8312D9EC;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8312da0c
	if (cr6.lt) goto loc_8312DA0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8312DA0C;
	sub_825952B8(ctx, base);
loc_8312DA0C:
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

__attribute__((alias("__imp__sub_8312DA34"))) PPC_WEAK_FUNC(sub_8312DA34);
PPC_FUNC_IMPL(__imp__sub_8312DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DA38"))) PPC_WEAK_FUNC(sub_8312DA38);
PPC_FUNC_IMPL(__imp__sub_8312DA38) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,316
	ctx.r3.s64 = ctx.r3.s64 + 316;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8312DA5C;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8312da7c
	if (cr6.lt) goto loc_8312DA7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8312DA7C;
	sub_825952B8(ctx, base);
loc_8312DA7C:
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

__attribute__((alias("__imp__sub_8312DAA4"))) PPC_WEAK_FUNC(sub_8312DAA4);
PPC_FUNC_IMPL(__imp__sub_8312DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DAA8"))) PPC_WEAK_FUNC(sub_8312DAA8);
PPC_FUNC_IMPL(__imp__sub_8312DAA8) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,344
	ctx.r3.s64 = ctx.r3.s64 + 344;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8312DACC;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8312daec
	if (cr6.lt) goto loc_8312DAEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8312DAEC;
	sub_825952B8(ctx, base);
loc_8312DAEC:
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

__attribute__((alias("__imp__sub_8312DB14"))) PPC_WEAK_FUNC(sub_8312DB14);
PPC_FUNC_IMPL(__imp__sub_8312DB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DB18"))) PPC_WEAK_FUNC(sub_8312DB18);
PPC_FUNC_IMPL(__imp__sub_8312DB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 & ctx.r4.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r6,r3
	PPC_STORE_U16(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DB38"))) PPC_WEAK_FUNC(sub_8312DB38);
PPC_FUNC_IMPL(__imp__sub_8312DB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8312DB40;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8312DB50;
	sub_831156E8(ctx, base);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,2
	ctx.r27.s64 = 2;
loc_8312DB5C:
	// subfc r11,r27,r31
	xer.ca = ctx.r31.u32 >= ctx.r27.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 & ctx.r31.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r7,r28
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r28.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(ctx.r29.u32, 65535, xer);
	// beq cr6,0x8312dba8
	if (cr6.eq) goto loc_8312DBA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x8312DB8C;
	sub_8311C3D8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8312dba8
	if (!cr6.eq) goto loc_8312DBA8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, xer);
	// beq cr6,0x8312dbc0
	if (cr6.eq) goto loc_8312DBC0;
loc_8312DBA8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x8312db5c
	if (cr6.lt) goto loc_8312DB5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8312DBC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312DBCC"))) PPC_WEAK_FUNC(sub_8312DBCC);
PPC_FUNC_IMPL(__imp__sub_8312DBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DBD0"))) PPC_WEAK_FUNC(sub_8312DBD0);
PPC_FUNC_IMPL(__imp__sub_8312DBD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8312dbfc
	if (cr6.lt) goto loc_8312DBFC;
	// beq cr6,0x8312dbf4
	if (cr6.eq) goto loc_8312DBF4;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r5,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r5.u16);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// blr 
	return;
loc_8312DBF4:
	// sth r5,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r5.u16);
	// blr 
	return;
loc_8312DBFC:
	// sth r5,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DC04"))) PPC_WEAK_FUNC(sub_8312DC04);
PPC_FUNC_IMPL(__imp__sub_8312DC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DC08"))) PPC_WEAK_FUNC(sub_8312DC08);
PPC_FUNC_IMPL(__imp__sub_8312DC08) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8312db38
	ctx.lr = 0x8312DC1C;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addis r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -65536;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_8312DC40"))) PPC_WEAK_FUNC(sub_8312DC40);
PPC_FUNC_IMPL(__imp__sub_8312DC40) {
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
	// bl 0x8312db38
	ctx.lr = 0x8312DC60;
	sub_8312DB38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312db38
	ctx.lr = 0x8312DC70;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x8312dc90
	if (!cr6.eq) goto loc_8312DC90;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x8312dca0
	if (cr6.eq) goto loc_8312DCA0;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8312dca0
	if (cr6.eq) goto loc_8312DCA0;
loc_8312DC90:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x8312dca4
	if (!cr6.eq) goto loc_8312DCA4;
loc_8312DCA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8312DCA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DCBC"))) PPC_WEAK_FUNC(sub_8312DCBC);
PPC_FUNC_IMPL(__imp__sub_8312DCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DCC0"))) PPC_WEAK_FUNC(sub_8312DCC0);
PPC_FUNC_IMPL(__imp__sub_8312DCC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DCCC"))) PPC_WEAK_FUNC(sub_8312DCCC);
PPC_FUNC_IMPL(__imp__sub_8312DCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DCD0"))) PPC_WEAK_FUNC(sub_8312DCD0);
PPC_FUNC_IMPL(__imp__sub_8312DCD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DCDC"))) PPC_WEAK_FUNC(sub_8312DCDC);
PPC_FUNC_IMPL(__imp__sub_8312DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DCE0"))) PPC_WEAK_FUNC(sub_8312DCE0);
PPC_FUNC_IMPL(__imp__sub_8312DCE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DCE8"))) PPC_WEAK_FUNC(sub_8312DCE8);
PPC_FUNC_IMPL(__imp__sub_8312DCE8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// stw r3,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r3.u32);
	// li r11,55
	ctx.r11.s64 = 55;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r11,-6208(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6208);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r3,-6208(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6208);
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// lwz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r10,r11,72
	ctx.r10.s64 = ctx.r11.s64 + 72;
	// addi r10,r11,92
	ctx.r10.s64 = ctx.r11.s64 + 92;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r31,6
	ctx.r31.s64 = 6;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r8,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r8.u32);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r3,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r3.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stw r4,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r4.u32);
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// addi r9,r11,132
	ctx.r9.s64 = ctx.r11.s64 + 132;
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r31,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r31.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DE28"))) PPC_WEAK_FUNC(sub_8312DE28);
PPC_FUNC_IMPL(__imp__sub_8312DE28) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DE34"))) PPC_WEAK_FUNC(sub_8312DE34);
PPC_FUNC_IMPL(__imp__sub_8312DE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DE38"))) PPC_WEAK_FUNC(sub_8312DE38);
PPC_FUNC_IMPL(__imp__sub_8312DE38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DE58"))) PPC_WEAK_FUNC(sub_8312DE58);
PPC_FUNC_IMPL(__imp__sub_8312DE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8312DE6C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// beq cr6,0x8312de8c
	if (cr6.eq) goto loc_8312DE8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x8312de6c
	if (cr6.lt) goto loc_8312DE6C;
	// blr 
	return;
loc_8312DE8C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312DEA4"))) PPC_WEAK_FUNC(sub_8312DEA4);
PPC_FUNC_IMPL(__imp__sub_8312DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312DEA8"))) PPC_WEAK_FUNC(sub_8312DEA8);
PPC_FUNC_IMPL(__imp__sub_8312DEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8312DEB0;
	__savegprlr_21(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// stw r8,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// b 0x8312ded4
	goto loc_8312DED4;
loc_8312DED0:
	// lwz r8,-112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
loc_8312DED4:
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r9.u32);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// rotlwi r29,r10,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// sth r7,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r7.u16);
	// rotlwi r26,r10,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// li r5,55
	ctx.r5.s64 = 55;
	// lwz r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,-6208(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6208);
	// rlwimi r25,r10,0,0,13
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r25.u64 & 0xFFFFFFFF0003FFFF);
	// stw r25,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,-6208(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6208);
	// rlwimi r25,r10,0,14,31
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r25.u64 & 0xFFFFFFFFFFFC0000);
	// stw r25,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r25.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r22,-108(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r28,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
	// li r24,3
	ctx.r24.s64 = 3;
	// stw r22,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r22.u32);
	// li r23,4
	ctx.r23.s64 = 4;
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// li r21,5
	ctx.r21.s64 = 5;
	// stw r3,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// stw r26,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r26.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r27,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r27.u32);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// stw r7,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r7.u32);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r24,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r24.u32);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// stw r23,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r23.u32);
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// stw r21,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r21.u32);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stwu r8,152(r11)
	ea = 152 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8312ded0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312DED0;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E008"))) PPC_WEAK_FUNC(sub_8312E008);
PPC_FUNC_IMPL(__imp__sub_8312E008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,152
	ctx.r11.s64 = ctx.r4.s64 * 152;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E01C"))) PPC_WEAK_FUNC(sub_8312E01C);
PPC_FUNC_IMPL(__imp__sub_8312E01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E020"))) PPC_WEAK_FUNC(sub_8312E020);
PPC_FUNC_IMPL(__imp__sub_8312E020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8312E02C:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x8312e050
	if (cr6.eq) goto loc_8312E050;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// blt cr6,0x8312e02c
	if (cr6.lt) goto loc_8312E02C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8312E050:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E058"))) PPC_WEAK_FUNC(sub_8312E058);
PPC_FUNC_IMPL(__imp__sub_8312E058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8312E064:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x8312e084
	if (cr6.eq) goto loc_8312E084;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// blt cr6,0x8312e064
	if (cr6.lt) goto loc_8312E064;
	// blr 
	return;
loc_8312E084:
	// mulli r11,r10,152
	ctx.r11.s64 = ctx.r10.s64 * 152;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E090"))) PPC_WEAK_FUNC(sub_8312E090);
PPC_FUNC_IMPL(__imp__sub_8312E090) {
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
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// bl 0x8312dce8
	ctx.lr = 0x8312E144;
	sub_8312DCE8(ctx, base);
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

__attribute__((alias("__imp__sub_8312E15C"))) PPC_WEAK_FUNC(sub_8312E15C);
PPC_FUNC_IMPL(__imp__sub_8312E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E160"))) PPC_WEAK_FUNC(sub_8312E160);
PPC_FUNC_IMPL(__imp__sub_8312E160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8312E168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,6
	ctx.r31.s64 = 6;
loc_8312E178:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312e090
	ctx.lr = 0x8312E180;
	sub_8312E090(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// bge 0x8312e178
	if (!cr0.lt) goto loc_8312E178;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312dea8
	ctx.lr = 0x8312E194;
	sub_8312DEA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E1A0"))) PPC_WEAK_FUNC(sub_8312E1A0);
PPC_FUNC_IMPL(__imp__sub_8312E1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-6152
	ctx.r9.s64 = ctx.r10.s64 + -6152;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r7,-6088
	ctx.r5.s64 = ctx.r7.s64 + -6088;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,-6104(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6104);
	// clrlwi r4,r10,14
	ctx.r4.u64 = ctx.r10.u32 & 0x3FFFF;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stb r6,19(r3)
	PPC_STORE_U8(ctx.r3.u32 + 19, ctx.r6.u8);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// stb r11,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r11.u8);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stb r11,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r11.u8);
	// stb r11,31(r3)
	PPC_STORE_U8(ctx.r3.u32 + 31, ctx.r11.u8);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E234"))) PPC_WEAK_FUNC(sub_8312E234);
PPC_FUNC_IMPL(__imp__sub_8312E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E238"))) PPC_WEAK_FUNC(sub_8312E238);
PPC_FUNC_IMPL(__imp__sub_8312E238) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,12
	ctx.r30.s64 = 12;
loc_8312E254:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8312E264;
	sub_831CDCF0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x831cdcf0
	ctx.lr = 0x8312E274;
	sub_831CDCF0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// bne 0x8312e254
	if (!cr0.eq) goto loc_8312E254;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E298"))) PPC_WEAK_FUNC(sub_8312E298);
PPC_FUNC_IMPL(__imp__sub_8312E298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8312e334
	if (cr6.eq) goto loc_8312E334;
	// cmplwi cr6,r3,33
	cr6.compare<uint32_t>(ctx.r3.u32, 33, xer);
	// bge cr6,0x8312e334
	if (!cr6.lt) goto loc_8312E334;
	// cmplwi cr6,r4,33
	cr6.compare<uint32_t>(ctx.r4.u32, 33, xer);
	// bge cr6,0x8312e334
	if (!cr6.lt) goto loc_8312E334;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// ble cr6,0x8312e2c0
	if (!cr6.gt) goto loc_8312E2C0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8312e2c8
	goto loc_8312E2C8;
loc_8312E2C0:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8312E2C8:
	// subfic r11,r6,33
	xer.ca = ctx.r6.u32 <= 33;
	ctx.r11.s64 = 33 - ctx.r6.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x8312e324
	if (cr6.gt) goto loc_8312E324;
	// subfic r7,r11,33
	xer.ca = ctx.r11.u32 <= 33;
	ctx.r7.s64 = 33 - ctx.r11.s64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// blt cr6,0x8312e310
	if (cr6.lt) goto loc_8312E310;
	// subfic r7,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r11.s64;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8312E2FC:
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8312e2fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312E2FC;
loc_8312E310:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x8312e31c
	if (cr6.gt) goto loc_8312E31C;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8312E31C:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_8312E324:
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
loc_8312E334:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E33C"))) PPC_WEAK_FUNC(sub_8312E33C);
PPC_FUNC_IMPL(__imp__sub_8312E33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E340"))) PPC_WEAK_FUNC(sub_8312E340);
PPC_FUNC_IMPL(__imp__sub_8312E340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8312E348;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8312E35C:
	// mulli r11,r27,344
	ctx.r11.s64 = ctx.r27.s64 * 344;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// addi r29,r11,12800
	ctx.r29.s64 = ctx.r11.s64 + 12800;
loc_8312E36C:
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, xer);
	// bge cr6,0x8312e38c
	if (!cr6.lt) goto loc_8312E38C;
	// stb r26,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r28,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r28.u8);
	// bl 0x8259ac00
	ctx.lr = 0x8312E384;
	sub_8259AC00(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,344
	ctx.r29.s64 = ctx.r29.s64 + 344;
loc_8312E38C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,33
	cr6.compare<uint32_t>(ctx.r28.u32, 33, xer);
	// blt cr6,0x8312e36c
	if (cr6.lt) goto loc_8312E36C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,33
	cr6.compare<uint32_t>(ctx.r26.u32, 33, xer);
	// blt cr6,0x8312e35c
	if (cr6.lt) goto loc_8312E35C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r7,r11,-6088
	ctx.r7.s64 = ctx.r11.s64 + -6088;
	// addi r6,r9,-6152
	ctx.r6.s64 = ctx.r9.s64 + -6152;
loc_8312E3C0:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8312E3CC:
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// clrlwi r8,r8,14
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFF;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stb r31,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r31.u8);
	// stb r31,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r31.u8);
	// stb r31,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r31.u8);
	// stb r4,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r4.u8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// sth r31,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r31.u16);
	// sth r31,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r31.u16);
	// stb r31,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r31.u8);
	// stb r31,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r31.u8);
	// stb r31,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r31.u8);
	// stb r31,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r31.u8);
	// stb r31,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r31.u8);
	// stb r31,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r31.u8);
	// stb r31,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r31.u8);
	// stb r31,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r31.u8);
	// stb r31,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r31.u8);
	// stb r31,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r31.u8);
	// stb r31,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r31.u8);
	// stb r31,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r31.u8);
	// stb r31,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r31.u8);
	// stb r31,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r31.u8);
	// stb r31,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r31.u8);
	// bdnz 0x8312e3cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312E3CC;
	// addi r5,r5,10
	ctx.r5.s64 = ctx.r5.s64 + 10;
	// cmplwi cr6,r5,320
	cr6.compare<uint32_t>(ctx.r5.u32, 320, xer);
	// blt cr6,0x8312e3c0
	if (cr6.lt) goto loc_8312E3C0;
	// addis r7,r30,3
	ctx.r7.s64 = ctx.r30.s64 + 196608;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r7,r7,-2176
	ctx.r7.s64 = ctx.r7.s64 + -2176;
	// addis r6,r30,3
	ctx.r6.s64 = ctx.r30.s64 + 196608;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r6,r6,-2160
	ctx.r6.s64 = ctx.r6.s64 + -2160;
	// addis r5,r30,3
	ctx.r5.s64 = ctx.r30.s64 + 196608;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addis r4,r30,3
	ctx.r4.s64 = ctx.r30.s64 + 196608;
	// stb r11,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r11.u8);
	// addi r5,r5,-2144
	ctx.r5.s64 = ctx.r5.s64 + -2144;
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// addi r4,r4,-2128
	ctx.r4.s64 = ctx.r4.s64 + -2128;
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// addi r29,r29,-2112
	ctx.r29.s64 = ctx.r29.s64 + -2112;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r3,r8,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r3.u32);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r3,r8,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// stb r31,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r31.u8);
	// stb r31,13(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13, ctx.r31.u8);
	// stb r9,14(r7)
	PPC_STORE_U8(ctx.r7.u32 + 14, ctx.r9.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r11.u8);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r3,r8,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r3.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r3,r8,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// stb r31,12(r6)
	PPC_STORE_U8(ctx.r6.u32 + 12, ctx.r31.u8);
	// stb r31,13(r6)
	PPC_STORE_U8(ctx.r6.u32 + 13, ctx.r31.u8);
	// stb r9,14(r6)
	PPC_STORE_U8(ctx.r6.u32 + 14, ctx.r9.u8);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// stb r11,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r11.u8);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r3,8(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r3.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// addis r7,r30,3
	ctx.r7.s64 = ctx.r30.s64 + 196608;
	// stb r31,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r31.u8);
	// stb r31,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r31.u8);
	// addi r7,r7,-2080
	ctx.r7.s64 = ctx.r7.s64 + -2080;
	// stb r9,14(r5)
	PPC_STORE_U8(ctx.r5.u32 + 14, ctx.r9.u8);
	// addis r5,r30,3
	ctx.r5.s64 = ctx.r30.s64 + 196608;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// addi r5,r5,-2096
	ctx.r5.s64 = ctx.r5.s64 + -2096;
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// addis r28,r30,3
	ctx.r28.s64 = ctx.r30.s64 + 196608;
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// addi r28,r28,-2064
	ctx.r28.s64 = ctx.r28.s64 + -2064;
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// addi r3,r3,31744
	ctx.r3.s64 = ctx.r3.s64 + 31744;
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// stb r31,12(r4)
	PPC_STORE_U8(ctx.r4.u32 + 12, ctx.r31.u8);
	// stb r31,13(r4)
	PPC_STORE_U8(ctx.r4.u32 + 13, ctx.r31.u8);
	// stb r9,14(r4)
	PPC_STORE_U8(ctx.r4.u32 + 14, ctx.r9.u8);
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// stb r11,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r11.u8);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwimi r4,r8,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r4.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r6.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwimi r4,r8,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r4.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// stb r31,12(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12, ctx.r31.u8);
	// stb r31,13(r29)
	PPC_STORE_U8(ctx.r29.u32 + 13, ctx.r31.u8);
	// stb r9,14(r29)
	PPC_STORE_U8(ctx.r29.u32 + 14, ctx.r9.u8);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// stb r11,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r11.u8);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r4,r8,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r4,r8,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r6.u32);
	// stb r31,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r31.u8);
	// stb r31,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r31.u8);
	// stb r9,14(r5)
	PPC_STORE_U8(ctx.r5.u32 + 14, ctx.r9.u8);
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// stb r11,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r11.u8);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r5,r8,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r4,r8,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// lwz r8,-6104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// stb r31,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r31.u8);
	// stb r31,13(r7)
	PPC_STORE_U8(ctx.r7.u32 + 13, ctx.r31.u8);
	// stb r9,14(r7)
	PPC_STORE_U8(ctx.r7.u32 + 14, ctx.r9.u8);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// stb r11,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r11.u8);
	// lwz r11,-6104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r5.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,-6104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r4.u32);
	// lwz r11,-6104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// lwz r11,-6104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6104);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r7.u32);
	// stb r31,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r31.u8);
	// stb r31,13(r28)
	PPC_STORE_U8(ctx.r28.u32 + 13, ctx.r31.u8);
	// stb r9,14(r28)
	PPC_STORE_U8(ctx.r28.u32 + 14, ctx.r9.u8);
	// bl 0x8312e238
	ctx.lr = 0x8312E748;
	sub_8312E238(ctx, base);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// addi r3,r3,32512
	ctx.r3.s64 = ctx.r3.s64 + 32512;
	// bl 0x8312e238
	ctx.lr = 0x8312E754;
	sub_8312E238(ctx, base);
	// addis r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 262144;
	// addi r3,r3,-32256
	ctx.r3.s64 = ctx.r3.s64 + -32256;
	// bl 0x8312e238
	ctx.lr = 0x8312E760;
	sub_8312E238(ctx, base);
	// addis r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 262144;
	// addi r3,r3,-31488
	ctx.r3.s64 = ctx.r3.s64 + -31488;
	// bl 0x8312e238
	ctx.lr = 0x8312E76C;
	sub_8312E238(ctx, base);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-2048
	ctx.r3.s64 = ctx.r3.s64 + -2048;
	// bl 0x831cdcf0
	ctx.lr = 0x8312E780;
	sub_831CDCF0(ctx, base);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// li r5,15360
	ctx.r5.s64 = 15360;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-512
	ctx.r3.s64 = ctx.r3.s64 + -512;
	// bl 0x831cdcf0
	ctx.lr = 0x8312E794;
	sub_831CDCF0(ctx, base);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,14848
	ctx.r3.s64 = ctx.r3.s64 + 14848;
	// bl 0x831cdcf0
	ctx.lr = 0x8312E7A8;
	sub_831CDCF0(ctx, base);
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// li r5,15360
	ctx.r5.s64 = 15360;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,16384
	ctx.r3.s64 = ctx.r3.s64 + 16384;
	// bl 0x831cdcf0
	ctx.lr = 0x8312E7BC;
	sub_831CDCF0(ctx, base);
	// addis r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 262144;
	// li r5,66
	ctx.r5.s64 = 66;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-30716
	ctx.r3.s64 = ctx.r3.s64 + -30716;
	// bl 0x831cdcf0
	ctx.lr = 0x8312E7D0;
	sub_831CDCF0(ctx, base);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// li r5,-1
	ctx.r5.s64 = -1;
	// ori r4,r6,34816
	ctx.r4.u64 = ctx.r6.u64 | 34816;
	// stwx r5,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r5.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312E7E8"))) PPC_WEAK_FUNC(sub_8312E7E8);
PPC_FUNC_IMPL(__imp__sub_8312E7E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8312e840
	if (cr6.eq) goto loc_8312E840;
	// cmplwi cr6,r4,33
	cr6.compare<uint32_t>(ctx.r4.u32, 33, xer);
	// bge cr6,0x8312e840
	if (!cr6.lt) goto loc_8312E840;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// bge cr6,0x8312e840
	if (!cr6.lt) goto loc_8312E840;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8312e298
	ctx.lr = 0x8312E820;
	sub_8312E298(ctx, base);
	// mulli r11,r3,344
	ctx.r11.s64 = ctx.r3.s64 * 344;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,12800
	ctx.r3.s64 = ctx.r11.s64 + 12800;
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
loc_8312E840:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-30600
	ctx.r3.s64 = ctx.r11.s64 + -30600;
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

__attribute__((alias("__imp__sub_8312E85C"))) PPC_WEAK_FUNC(sub_8312E85C);
PPC_FUNC_IMPL(__imp__sub_8312E85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E860"))) PPC_WEAK_FUNC(sub_8312E860);
PPC_FUNC_IMPL(__imp__sub_8312E860) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ld r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// rldicl r8,r9,14,50
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 14) & 0x3FFF;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// rldicl r6,r7,28,36
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 28) & 0xFFFFFFF;
	// clrlwi r5,r6,18
	ctx.r5.u64 = ctx.r6.u32 & 0x3FFF;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ld r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// rldicl r10,r11,42,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 42) & 0x3FFFFFFFFFF;
	// clrlwi r9,r10,18
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFF;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// rldicl r7,r8,34,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r6,r7,18
	ctx.r6.u64 = ctx.r7.u32 & 0x3FFF;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// ld r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// rldicl r11,r5,48,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// clrlwi r10,r11,18
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFF;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// ld r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// rldicl r8,r9,20,44
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 20) & 0xFFFFF;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// ld r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// rldicl r6,r7,40,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 40) & 0xFFFFFFFFFF;
	// clrlwi r5,r6,12
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFF;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// rldicl r9,r10,60,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// clrlwi r8,r9,12
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// ld r7,24(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// rldicl r6,r7,40,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 40) & 0xFFFFFFFFFF;
	// clrlwi r5,r6,12
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFFF;
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// ld r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// rldicl r10,r11,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// clrlwi r9,r10,12
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// rldicl r7,r8,20,44
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 20) & 0xFFFFF;
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// ld r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// rldicl r5,r6,62,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 62) & 0x3FFFFFFFFFFFFFFF;
	// clrlwi r11,r5,12
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFFF;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// ld r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// rldicl r9,r10,20,44
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 20) & 0xFFFFF;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// ld r8,32(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r7,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E944"))) PPC_WEAK_FUNC(sub_8312E944);
PPC_FUNC_IMPL(__imp__sub_8312E944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312E948"))) PPC_WEAK_FUNC(sub_8312E948);
PPC_FUNC_IMPL(__imp__sub_8312E948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x8312e970
	if (!cr6.eq) goto loc_8312E970;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,-30752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30752);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8312e9a0
	if (cr6.lt) goto loc_8312E9A0;
	// bne cr6,0x8312e9a0
	if (!cr6.eq) goto loc_8312E9A0;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// blr 
	return;
loc_8312E970:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x8312e9a0
	if (!cr6.eq) goto loc_8312E9A0;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,-30752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30752);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8312e998
	if (cr6.lt) goto loc_8312E998;
	// bne cr6,0x8312e9a0
	if (!cr6.eq) goto loc_8312E9A0;
	// addi r3,r3,208
	ctx.r3.s64 = ctx.r3.s64 + 208;
	// blr 
	return;
loc_8312E998:
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// blr 
	return;
loc_8312E9A0:
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312E9A8"))) PPC_WEAK_FUNC(sub_8312E9A8);
PPC_FUNC_IMPL(__imp__sub_8312E9A8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8312e9fc
	if (cr6.eq) goto loc_8312E9FC;
	// cmplwi cr6,r4,33
	cr6.compare<uint32_t>(ctx.r4.u32, 33, xer);
	// bge cr6,0x8312e9fc
	if (!cr6.lt) goto loc_8312E9FC;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// bge cr6,0x8312e9fc
	if (!cr6.lt) goto loc_8312E9FC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8312e298
	ctx.lr = 0x8312E9E0;
	sub_8312E298(ctx, base);
	// mulli r11,r3,264
	ctx.r11.s64 = ctx.r3.s64 * 264;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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
loc_8312E9FC:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-30256
	ctx.r3.s64 = ctx.r11.s64 + -30256;
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

__attribute__((alias("__imp__sub_8312EA18"))) PPC_WEAK_FUNC(sub_8312EA18);
PPC_FUNC_IMPL(__imp__sub_8312EA18) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8312ea6c
	if (cr6.eq) goto loc_8312EA6C;
	// cmplwi cr6,r4,33
	cr6.compare<uint32_t>(ctx.r4.u32, 33, xer);
	// bge cr6,0x8312ea6c
	if (!cr6.lt) goto loc_8312EA6C;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// bge cr6,0x8312ea6c
	if (!cr6.lt) goto loc_8312EA6C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8312e298
	ctx.lr = 0x8312EA50;
	sub_8312E298(ctx, base);
	// mulli r11,r3,264
	ctx.r11.s64 = ctx.r3.s64 * 264;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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
loc_8312EA6C:
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

__attribute__((alias("__imp__sub_8312EA84"))) PPC_WEAK_FUNC(sub_8312EA84);
PPC_FUNC_IMPL(__imp__sub_8312EA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EA88"))) PPC_WEAK_FUNC(sub_8312EA88);
PPC_FUNC_IMPL(__imp__sub_8312EA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r10,112
	ctx.r10.s64 = 112;
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bge cr6,0x8312ead8
	if (!cr6.lt) goto loc_8312EAD8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x8312eabc
	if (!cr6.eq) goto loc_8312EABC;
	// mulli r10,r4,112
	ctx.r10.s64 = ctx.r4.s64 * 112;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_8312EABC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x8312ead8
	if (!cr6.eq) goto loc_8312EAD8;
	// mulli r10,r4,112
	ctx.r10.s64 = ctx.r4.s64 * 112;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// blr 
	return;
loc_8312EAD8:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r3,r11,-30744
	ctx.r3.s64 = ctx.r11.s64 + -30744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EAE4"))) PPC_WEAK_FUNC(sub_8312EAE4);
PPC_FUNC_IMPL(__imp__sub_8312EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EAE8"))) PPC_WEAK_FUNC(sub_8312EAE8);
PPC_FUNC_IMPL(__imp__sub_8312EAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8312EAF4:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r6,r3,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lbz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// stb r8,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r7,9(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// stb r7,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r7.u8);
	// lbz r6,10(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// stb r6,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r6.u8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x8312eaf4
	if (!cr6.eq) goto loc_8312EAF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EB60"))) PPC_WEAK_FUNC(sub_8312EB60);
PPC_FUNC_IMPL(__imp__sub_8312EB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8312ebd4
	if (cr6.eq) goto loc_8312EBD4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_8312EB6C:
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// lwzu r10,-12(r5)
	ea = -12 + ctx.r5.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r8,r10,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r4,r10,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r7,8(r5)
	PPC_STORE_U8(ctx.r5.u32 + 8, ctx.r7.u8);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r6,9(r5)
	PPC_STORE_U8(ctx.r5.u32 + 9, ctx.r6.u8);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r4,10(r5)
	PPC_STORE_U8(ctx.r5.u32 + 10, ctx.r4.u8);
	// bne cr6,0x8312eb6c
	if (!cr6.eq) goto loc_8312EB6C;
loc_8312EBD4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EBDC"))) PPC_WEAK_FUNC(sub_8312EBDC);
PPC_FUNC_IMPL(__imp__sub_8312EBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312EBE0"))) PPC_WEAK_FUNC(sub_8312EBE0);
PPC_FUNC_IMPL(__imp__sub_8312EBE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r5,4
	ctx.r10.s64 = ctx.r5.s64 + 4;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8312EBF4:
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r8,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r8.u8);
	// lbz r7,1(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// stb r7,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r7.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r6,r3,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r6,r3,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lbz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + 12);
	// stb r6,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r6.u8);
	// lbz r3,13(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 13);
	// stb r3,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r3.u8);
	// lbz r8,14(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 14);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x8312ebf4
	if (!cr6.eq) goto loc_8312EBF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312EC70"))) PPC_WEAK_FUNC(sub_8312EC70);
PPC_FUNC_IMPL(__imp__sub_8312EC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8312ecf4
	if (cr6.eq) goto loc_8312ECF4;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
loc_8312EC7C:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// lbz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// stbu r9,-16(r5)
	ea = -16 + ctx.r5.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r5.u32 = ea;
	// lbz r8,-3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// stb r8,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r8.u8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r4,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, ctx.r4.u8);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r10,13(r5)
	PPC_STORE_U8(ctx.r5.u32 + 13, ctx.r10.u8);
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stb r9,14(r5)
	PPC_STORE_U8(ctx.r5.u32 + 14, ctx.r9.u8);
	// bne cr6,0x8312ec7c
	if (!cr6.eq) goto loc_8312EC7C;
loc_8312ECF4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312ECFC"))) PPC_WEAK_FUNC(sub_8312ECFC);
PPC_FUNC_IMPL(__imp__sub_8312ECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312ED00"))) PPC_WEAK_FUNC(sub_8312ED00);
PPC_FUNC_IMPL(__imp__sub_8312ED00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r12,-16384
	ctx.r12.s64 = -16384;
	// subfic r9,r11,16383
	xer.ca = ctx.r11.u32 <= 16383;
	ctx.r9.s64 = 16383 - ctx.r11.s64;
	// ld r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// ld r31,32(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ld r30,8(r4)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrldi r6,r6,14
	ctx.r6.u64 = ctx.r6.u64 & 0x3FFFFFFFFFFFF;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rldicr r12,r12,30,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 30) & 0xFFFFFFFFFFFFFFFF;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// and r31,r31,r12
	ctx.r31.u64 = ctx.r31.u64 & ctx.r12.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r12,-16384
	ctx.r12.s64 = -16384;
	// and r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 & ctx.r5.u64;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// lis r7,15
	ctx.r7.s64 = 983040;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// or r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 | ctx.r8.u64;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subfic r9,r11,16383
	xer.ca = ctx.r11.u32 <= 16383;
	ctx.r9.s64 = 16383 - ctx.r11.s64;
	// addi r8,r11,-16383
	ctx.r8.s64 = ctx.r11.s64 + -16383;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addi r8,r11,16383
	ctx.r8.s64 = ctx.r11.s64 + 16383;
	// rldimi r6,r8,50,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u64, 50) & 0xFFFC000000000000) | (ctx.r6.u64 & 0x3FFFFFFFFFFFF);
	// std r6,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subfic r9,r11,16383
	xer.ca = ctx.r11.u32 <= 16383;
	ctx.r9.s64 = 16383 - ctx.r11.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r12,-16384
	ctx.r12.s64 = -16384;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rldicr r12,r12,22,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 22) & 0xFFFFFFFFFFFFFFFF;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 & ctx.r5.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// rldimi r6,r11,36,14
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u64, 36) & 0x3FFF000000000) | (ctx.r6.u64 & 0xFFFC000FFFFFFFFF);
	// std r6,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subfic r9,r11,16383
	xer.ca = ctx.r11.u32 <= 16383;
	ctx.r9.s64 = 16383 - ctx.r11.s64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 & ctx.r5.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// rldimi r6,r11,22,28
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFC00000) | (ctx.r6.u64 & 0xFFFFFFF0003FFFFF);
	// std r6,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r6.u64);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subfic r9,r11,16383
	xer.ca = ctx.r11.u32 <= 16383;
	ctx.r9.s64 = 16383 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r11,r5,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// ori r11,r7,65535
	ctx.r11.u64 = ctx.r7.u64 | 65535;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lis r12,-16384
	ctx.r12.s64 = -1073741824;
	// rldimi r31,r7,30,20
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r7.u64, 30) & 0xFFFC0000000) | (ctx.r31.u64 & 0xFFFFF0003FFFFFFF);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// std r31,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r31.u64);
	// clrldi r30,r30,20
	ctx.r30.u64 = ctx.r30.u64 & 0xFFFFFFFFFFF;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subfic r8,r9,16383
	xer.ca = ctx.r9.u32 <= 16383;
	ctx.r8.s64 = 16383 - ctx.r9.s64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r31,r12
	ctx.r5.u64 = ctx.r31.u64 & ctx.r12.u64;
	// ld r31,24(r4)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// lis r12,-16
	ctx.r12.s64 = -1048576;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rldicr r12,r12,24,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 24) & 0xFFFFFFFFFFFFFFFF;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r31,r31,r12
	ctx.r31.u64 = ctx.r31.u64 & ctx.r12.u64;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// lis r12,-16
	ctx.r12.s64 = -1048576;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicr r12,r12,24,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 24) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r5,r7,16,34
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 16) & 0x3FFF0000) | (ctx.r5.u64 & 0xFFFFFFFFC000FFFF);
	// std r5,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r5.u64);
	// clrldi r5,r5,20
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFFFFF;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subfc r9,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 & ctx.r7.u64;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rldimi r30,r7,44,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r7.u64, 44) & 0xFFFFF00000000000) | (ctx.r30.u64 & 0xFFFFFFFFFFF);
	// std r30,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r30.u64);
	// and r7,r30,r12
	ctx.r7.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r12,-256
	ctx.r12.s64 = -16777216;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// ori r12,r12,15
	ctx.r12.u64 = ctx.r12.u64 | 15;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldimi r7,r9,24,20
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u64, 24) & 0xFFFFF000000) | (ctx.r7.u64 & 0xFFFFF00000FFFFFF);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subfic r8,r9,-1
	xer.ca = ctx.r9.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r9.s64;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// stw r8,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r8.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldimi r7,r9,4,40
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u64, 4) & 0xFFFFF0) | (ctx.r7.u64 & 0xFFFFFFFFFF00000F);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// lis r12,-64
	ctx.r12.s64 = -4194304;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r12,r12,3
	ctx.r12.u64 = ctx.r12.u64 | 3;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// lis r30,0
	ctx.r30.s64 = 0;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// and r7,r6,r12
	ctx.r7.u64 = ctx.r6.u64 & ctx.r12.u64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lis r12,-256
	ctx.r12.s64 = -16777216;
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// ori r12,r12,15
	ctx.r12.u64 = ctx.r12.u64 | 15;
	// rldimi r31,r9,24,20
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r9.u64, 24) & 0xFFFFF000000) | (ctx.r31.u64 & 0xFFFFF00000FFFFFF);
	// std r31,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r31.u64);
	// and r6,r31,r12
	ctx.r6.u64 = ctx.r31.u64 & ctx.r12.u64;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r31,r9,1
	ctx.r31.s64 = ctx.r9.s64 + 1;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & ctx.r31.u64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrldi r9,r8,32
	ctx.r9.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldimi r6,r9,4,40
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u64, 4) & 0xFFFFF0) | (ctx.r6.u64 & 0xFFFFFFFFFF00000F);
	// std r6,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r6.u64);
	// clrldi r6,r6,20
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFFFFF;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subfc r9,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subf r31,r11,r8
	ctx.r31.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 & ctx.r31.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rldimi r5,r9,44,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u64, 44) & 0xFFFFF00000000000) | (ctx.r5.u64 & 0xFFFFFFFFFFF);
	// std r5,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r5.u64);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrldi r5,r8,32
	ctx.r5.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldimi r7,r5,2,42
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 2) & 0x3FFFFC) | (ctx.r7.u64 & 0xFFFFFFFFFFC00003);
	// std r7,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r7.u64);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subfc r9,r8,r11
	xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfze r9,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// ori r9,r30,65535
	ctx.r9.u64 = ctx.r30.u64 | 65535;
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// srawi r8,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// and r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 & ctx.r7.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rldimi r6,r11,44,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u64, 44) & 0xFFFFF00000000000) | (ctx.r6.u64 & 0xFFFFFFFFFFF);
	// std r6,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r6.u64);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subfc r9,r11,r9
	xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r3,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// and r11,r3,r8
	ctx.r11.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sth r10,38(r4)
	PPC_STORE_U16(ctx.r4.u32 + 38, ctx.r10.u16);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312F0F0"))) PPC_WEAK_FUNC(sub_8312F0F0);
PPC_FUNC_IMPL(__imp__sub_8312F0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x8312F0F8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r4,264
	ctx.r31.s64 = ctx.r4.s64 + 264;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// li r25,7
	ctx.r25.s64 = 7;
	// li r24,12
	ctx.r24.s64 = 12;
	// li r26,6
	ctx.r26.s64 = 6;
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
loc_8312F124:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// bge cr6,0x8312f15c
	if (!cr6.lt) goto loc_8312F15C;
	// li r6,12
	ctx.r6.s64 = 12;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x831d0080
	ctx.lr = 0x8312F150;
	sub_831D0080(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// b 0x8312f1a8
	goto loc_8312F1A8;
loc_8312F15C:
	// lwz r11,-6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// lwz r11,-6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r9.u32);
	// lwz r11,-6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r11,-6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stb r21,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r21.u8);
	// stb r21,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r21.u8);
	// stb r26,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r26.u8);
loc_8312F1A8:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x8312f124
	if (!cr0.eq) goto loc_8312F124;
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfic r11,r10,16383
	xer.ca = ctx.r10.u32 <= 16383;
	ctx.r11.s64 = 16383 - ctx.r10.s64;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// subfze r11,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r7,r7,-16383
	ctx.r7.s64 = ctx.r7.s64 + -16383;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// xor r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r9,r23,20
	ctx.r9.s64 = ctx.r23.s64 + 20;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 & ctx.r7.u64;
	// addi r3,r11,16383
	ctx.r3.s64 = ctx.r11.s64 + 16383;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// sth r3,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r3.u16);
	// lwz r8,36(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r8,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r8.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
loc_8312F210:
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r12,-16
	ctx.r12.s64 = -1048576;
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// subfic r6,r7,16383
	xer.ca = ctx.r7.u32 <= 16383;
	ctx.r6.s64 = 16383 - ctx.r7.s64;
	// ld r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// addi r3,r7,-16383
	ctx.r3.s64 = ctx.r7.s64 + -16383;
	// ld r30,24(r10)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrldi r5,r5,14
	ctx.r5.u64 = ctx.r5.u64 & 0x3FFFFFFFFFFFF;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rldicr r12,r12,30,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 30) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// clrldi r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 & 0x3FFFFFFFFFFFFF;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r6,r7,16383
	ctx.r6.s64 = ctx.r7.s64 + 16383;
	// rldimi r5,r6,50,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 50) & 0xFFFC000000000000) | (ctx.r5.u64 & 0x3FFFFFFFFFFFF);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// rldicr r5,r5,0,53
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 0) & 0xFFFFFFFFFFFFFC00;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subfic r6,r7,1023
	xer.ca = ctx.r7.u32 <= 1023;
	ctx.r6.s64 = 1023 - ctx.r7.s64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// clrldi r3,r6,54
	ctx.r3.u64 = ctx.r6.u64 & 0x3FF;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// and r5,r7,r12
	ctx.r5.u64 = ctx.r7.u64 & ctx.r12.u64;
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// subfic r6,r7,1023
	xer.ca = ctx.r7.u32 <= 1023;
	ctx.r6.s64 = 1023 - ctx.r7.s64;
	// addi r3,r7,-1023
	ctx.r3.s64 = ctx.r7.s64 + -1023;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r12,-16
	ctx.r12.s64 = -1048576;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r6,r7,1023
	ctx.r6.s64 = ctx.r7.s64 + 1023;
	// rldimi r4,r6,54,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r6.u64, 54) & 0xFFC0000000000000) | (ctx.r4.u64 & 0x3FFFFFFFFFFFFF);
	// std r4,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r4.u64);
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lwz r7,28(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// subfc r6,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r12,-16
	ctx.r12.s64 = -1048576;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rldicr r12,r12,14,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 14) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// clrldi r3,r6,32
	ctx.r3.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// rldimi r4,r3,34,10
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 34) & 0x3FFFFC00000000) | (ctx.r4.u64 & 0xFFC00003FFFFFFFF);
	// std r4,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r4.u64);
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lwz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// subfc r6,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// clrldi r3,r6,32
	ctx.r3.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// rldimi r4,r3,14,30
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u64, 14) & 0x3FFFFC000) | (ctx.r4.u64 & 0xFFFFFFFC00003FFF);
	// std r4,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r4.u64);
	// lwz r7,36(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lis r12,-16384
	ctx.r12.s64 = -1073741824;
	// clrldi r30,r30,20
	ctx.r30.u64 = ctx.r30.u64 & 0xFFFFFFFFFFF;
	// subfc r6,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r12,r12,1023
	ctx.r12.u64 = ctx.r12.u64 | 1023;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r7,r3,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r3.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 & ctx.r4.u64;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldimi r5,r3,30,14
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 30) & 0x3FFFFC0000000) | (ctx.r5.u64 & 0xFFFC00003FFFFFFF);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// and r5,r5,r12
	ctx.r5.u64 = ctx.r5.u64 & ctx.r12.u64;
	// lwz r7,40(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// subfc r6,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r12,-16
	ctx.r12.s64 = -1048576;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rldicr r12,r12,24,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 24) & 0xFFFFFFFFFFFFFFFF;
	// subf r7,r3,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r3.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 & ctx.r4.u64;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldimi r5,r3,10,34
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 10) & 0x3FFFFC00) | (ctx.r5.u64 & 0xFFFFFFFFC00003FF);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lwz r6,44(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// subfc r7,r6,r11
	xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// subf r5,r11,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r11.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// srawi r7,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// and r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 & ctx.r5.u64;
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rldimi r30,r5,44,0
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r5.u64, 44) & 0xFFFFF00000000000) | (ctx.r30.u64 & 0xFFFFFFFFFFF);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// and r4,r30,r12
	ctx.r4.u64 = ctx.r30.u64 & ctx.r12.u64;
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// subfc r6,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r12,-256
	ctx.r12.s64 = -16777216;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// ori r12,r12,15
	ctx.r12.u64 = ctx.r12.u64 | 15;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 & ctx.r3.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// clrldi r7,r3,32
	ctx.r7.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// rldimi r4,r7,24,20
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u64, 24) & 0xFFFFF000000) | (ctx.r4.u64 & 0xFFFFF00000FFFFFF);
	// std r4,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r4.u64);
	// and r5,r4,r12
	ctx.r5.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lwz r7,52(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subfc r6,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r4,r7,1
	ctx.r4.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r7,r3,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r3.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r7,r6,r4
	ctx.r7.u64 = ctx.r6.u64 & ctx.r4.u64;
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// clrldi r3,r4,32
	ctx.r3.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldimi r5,r3,4,40
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r3.u64, 4) & 0xFFFFF0) | (ctx.r5.u64 & 0xFFFFFFFFFF00000F);
	// std r5,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r5.u64);
	// lwzu r7,56(r9)
	ea = 56 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// subfc r6,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r3,r4,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r4.s64;
	// srawi r7,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// and r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 & ctx.r5.u64;
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sthu r4,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8312f210
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312F210;
	// lwz r11,136(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 136);
	// li r22,112
	ctx.r22.s64 = 112;
	// lwz r10,140(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 140);
	// addi r30,r23,136
	ctx.r30.s64 = ctx.r23.s64 + 136;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r9,r22
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// addi r26,r11,-10
	ctx.r26.s64 = ctx.r11.s64 + -10;
	// bgt cr6,0x8312f4dc
	if (cr6.gt) goto loc_8312F4DC;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
loc_8312F4DC:
	// mulli r28,r26,112
	ctx.r28.s64 = ctx.r26.s64 * 112;
	// addi r27,r29,80
	ctx.r27.s64 = ctx.r29.s64 + 80;
	// addi r24,r29,100
	ctx.r24.s64 = ctx.r29.s64 + 100;
	// subfic r25,r29,-80
	xer.ca = ctx.r29.u32 <= 4294967216;
	ctx.r25.s64 = -80 - ctx.r29.s64;
	// li r23,10
	ctx.r23.s64 = 10;
loc_8312F4F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r22
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r22.s32);
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// bge cr6,0x8312f73c
	if (!cr6.lt) goto loc_8312F73C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r25,r27
	ctx.r4.u64 = ctx.r25.u64 + ctx.r27.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8312F520:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r10,r29
	ctx.r11.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mulli r10,r7,56
	ctx.r10.s64 = ctx.r7.s64 * 56;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lbz r7,107(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 107);
	// addic r6,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r6.s64 = ctx.r5.s64 + -1;
	// subfe r5,r6,r5
	temp.u8 = (~ctx.r6.u32 + ctx.r5.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r7,r5,7,24,24
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 7) & 0x80) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF7F);
	// stb r7,107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 107, ctx.r7.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r20,107(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 107);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,24(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// subfic r6,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r7.s64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addi r6,r7,255
	ctx.r6.s64 = ctx.r7.s64 + 255;
	// stb r6,102(r11)
	PPC_STORE_U8(ctx.r11.u32 + 102, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,28(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// subfic r6,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r7.s64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addi r6,r7,255
	ctx.r6.s64 = ctx.r7.s64 + 255;
	// stb r6,103(r11)
	PPC_STORE_U8(ctx.r11.u32 + 103, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,32(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// subfic r6,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r7.s64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addi r6,r7,255
	ctx.r6.s64 = ctx.r7.s64 + 255;
	// stb r6,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,36(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// subfic r6,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r7.s64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addi r6,r7,255
	ctx.r6.s64 = ctx.r7.s64 + 255;
	// stb r6,101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 101, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r5,40(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// subfic r7,r5,255
	xer.ca = ctx.r5.u32 <= 255;
	ctx.r7.s64 = 255 - ctx.r5.s64;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r19,r6,r7
	ctx.r19.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// add r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 + ctx.r9.u64;
	// subf r6,r19,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r19.s64;
	// addi r7,r7,13
	ctx.r7.s64 = ctx.r7.s64 + 13;
	// srawi r6,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 31;
	// rlwinm r19,r7,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// and r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r5,r7,255
	ctx.r5.s64 = ctx.r7.s64 + 255;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r5,r19,r29
	PPC_STORE_U8(ctx.r19.u32 + ctx.r29.u32, ctx.r5.u8);
	// addi r8,r8,56
	ctx.r8.s64 = ctx.r8.s64 + 56;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,44(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// subfic r6,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r7.s64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addi r6,r7,255
	ctx.r6.s64 = ctx.r7.s64 + 255;
	// stb r6,105(r11)
	PPC_STORE_U8(ctx.r11.u32 + 105, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r7,48(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// subfic r6,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r7.s64;
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// subfze r7,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r7.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// srawi r7,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// addi r6,r7,255
	ctx.r6.s64 = ctx.r7.s64 + 255;
	// stb r6,106(r11)
	PPC_STORE_U8(ctx.r11.u32 + 106, ctx.r6.u8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// subfic r7,r10,5
	xer.ca = ctx.r10.u32 <= 5;
	ctx.r7.s64 = 5 - ctx.r10.s64;
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// subfze r10,r31
	temp.u8 = ~ctx.r31.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r7,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// xor r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// subf r10,r5,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r5.s64;
	// srawi r7,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// and r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 & ctx.r6.u64;
	// addi r6,r10,-3
	ctx.r6.s64 = ctx.r10.s64 + -3;
	// rlwimi r20,r6,4,25,27
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x70) | (ctx.r20.u64 & 0xFFFFFFFFFFFFFF8F);
	// clrlwi r5,r20,24
	ctx.r5.u64 = ctx.r20.u32 & 0xFF;
	// stb r5,107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 107, ctx.r5.u8);
	// bdnz 0x8312f520
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312F520;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r28,r28,112
	ctx.r28.s64 = ctx.r28.s64 + 112;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r9,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r9.u16);
	// b 0x8312f750
	goto loc_8312F750;
loc_8312F73C:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8312F74C;
	sub_831CDCF0(ctx, base);
	// sth r21,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r21.u16);
loc_8312F750:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// bne 0x8312f4f0
	if (!cr0.eq) goto loc_8312F4F0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312F768"))) PPC_WEAK_FUNC(sub_8312F768);
PPC_FUNC_IMPL(__imp__sub_8312F768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8312F770;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8312f8f4
	if (cr6.eq) goto loc_8312F8F4;
	// cmplwi cr6,r4,33
	cr6.compare<uint32_t>(ctx.r4.u32, 33, xer);
	// bge cr6,0x8312f8f4
	if (!cr6.lt) goto loc_8312F8F4;
	// cmplwi cr6,r5,33
	cr6.compare<uint32_t>(ctx.r5.u32, 33, xer);
	// bge cr6,0x8312f8f4
	if (!cr6.lt) goto loc_8312F8F4;
	// bl 0x8312ea18
	ctx.lr = 0x8312F7A0;
	sub_8312EA18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x8312e948
	ctx.lr = 0x8312F7AC;
	sub_8312E948(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// and r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 & ctx.r8.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bl 0x8312e948
	ctx.lr = 0x8312F7F0;
	sub_8312E948(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// and r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 & ctx.r4.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
loc_8312F834:
	// stdu r6,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x8312f834
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8312F834;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8312f858
	if (cr6.eq) goto loc_8312F858;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8312f858
	if (cr6.eq) goto loc_8312F858;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x8312f894
	goto loc_8312F894;
loc_8312F858:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// beq cr6,0x8312f8fc
	if (cr6.eq) goto loc_8312F8FC;
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// beq cr6,0x8312f884
	if (cr6.eq) goto loc_8312F884;
	// addi r11,r31,2178
	ctx.r11.s64 = ctx.r31.s64 + 2178;
	// addi r10,r5,2178
	ctx.r10.s64 = ctx.r5.s64 + 2178;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x8312f894
	goto loc_8312F894;
loc_8312F884:
	// addi r11,r31,2218
	ctx.r11.s64 = ctx.r31.s64 + 2218;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8312F890:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8312F894:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r9,-1
	xer.ca = ctx.r9.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r9.s64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// subfze r9,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r9.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r4,r5,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r5.s64;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r9,r3,r6
	ctx.r9.u64 = ctx.r3.u64 & ctx.r6.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_8312F8F4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8312F8FC:
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8312f890
	if (cr6.eq) goto loc_8312F890;
	// addi r10,r5,2218
	ctx.r10.s64 = ctx.r5.s64 + 2218;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// b 0x8312f894
	goto loc_8312F894;
}

__attribute__((alias("__imp__sub_8312F918"))) PPC_WEAK_FUNC(sub_8312F918);
PPC_FUNC_IMPL(__imp__sub_8312F918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8312F920;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r4,12800
	ctx.r30.s64 = ctx.r4.s64 + 12800;
	// li r31,528
	ctx.r31.s64 = 528;
loc_8312F938:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312f0f0
	ctx.lr = 0x8312F944;
	sub_8312F0F0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,344
	ctx.r30.s64 = ctx.r30.s64 + 344;
	// addi r29,r29,264
	ctx.r29.s64 = ctx.r29.s64 + 264;
	// bne 0x8312f938
	if (!cr0.eq) goto loc_8312F938;
	// addis r30,r25,2
	ctx.r30.s64 = ctx.r25.s64 + 131072;
	// addis r4,r26,3
	ctx.r4.s64 = ctx.r26.s64 + 196608;
	// addi r30,r30,10880
	ctx.r30.s64 = ctx.r30.s64 + 10880;
	// addi r4,r4,14848
	ctx.r4.s64 = ctx.r4.s64 + 14848;
	// li r31,32
	ctx.r31.s64 = 32;
loc_8312F968:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312ed00
	ctx.lr = 0x8312F970;
	sub_8312ED00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// bne 0x8312f968
	if (!cr0.eq) goto loc_8312F968;
	// addis r30,r25,2
	ctx.r30.s64 = ctx.r25.s64 + 131072;
	// addis r4,r26,3
	ctx.r4.s64 = ctx.r26.s64 + 196608;
	// addi r30,r30,8320
	ctx.r30.s64 = ctx.r30.s64 + 8320;
	// addi r4,r4,-2048
	ctx.r4.s64 = ctx.r4.s64 + -2048;
	// li r31,32
	ctx.r31.s64 = 32;
loc_8312F994:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312ed00
	ctx.lr = 0x8312F99C;
	sub_8312ED00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// bne 0x8312f994
	if (!cr0.eq) goto loc_8312F994;
	// li r23,0
	ctx.r23.s64 = 0;
	// addis r29,r25,2
	ctx.r29.s64 = ctx.r25.s64 + 131072;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r29,r29,12928
	ctx.r29.s64 = ctx.r29.s64 + 12928;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// ori r28,r11,16384
	ctx.r28.u64 = ctx.r11.u64 | 16384;
loc_8312F9C4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// ble cr6,0x8312f9f0
	if (!cr6.gt) goto loc_8312F9F0;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8312F9F0:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8312fa38
	if (cr6.eq) goto loc_8312FA38;
loc_8312F9FC:
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bge cr6,0x8312fa38
	if (!cr6.lt) goto loc_8312FA38;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8312ed00
	ctx.lr = 0x8312FA24;
	sub_8312ED00(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x8312f9fc
	if (!cr6.eq) goto loc_8312F9FC;
loc_8312FA38:
	// addi r27,r27,10
	ctx.r27.s64 = ctx.r27.s64 + 10;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r27,320
	cr6.compare<uint32_t>(ctx.r27.u32, 320, xer);
	// blt cr6,0x8312f9c4
	if (cr6.lt) goto loc_8312F9C4;
	// addis r29,r25,2
	ctx.r29.s64 = ctx.r25.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r29,r29,10368
	ctx.r29.s64 = ctx.r29.s64 + 10368;
	// ori r28,r11,65024
	ctx.r28.u64 = ctx.r11.u64 | 65024;
loc_8312FA5C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// ble cr6,0x8312fa88
	if (!cr6.gt) goto loc_8312FA88;
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8312FA88:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x8312fad0
	if (cr6.eq) goto loc_8312FAD0;
loc_8312FA94:
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// bge cr6,0x8312fad0
	if (!cr6.lt) goto loc_8312FAD0;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bl 0x8312ed00
	ctx.lr = 0x8312FABC;
	sub_8312ED00(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x8312fa94
	if (!cr6.eq) goto loc_8312FA94;
loc_8312FAD0:
	// addi r27,r27,10
	ctx.r27.s64 = ctx.r27.s64 + 10;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r27,320
	cr6.compare<uint32_t>(ctx.r27.u32, 320, xer);
	// blt cr6,0x8312fa5c
	if (cr6.lt) goto loc_8312FA5C;
	// addis r31,r26,3
	ctx.r31.s64 = ctx.r26.s64 + 196608;
	// addis r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 131072;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r25,r25,13440
	ctx.r25.s64 = ctx.r25.s64 + 13440;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r31,r31,-2172
	ctx.r31.s64 = ctx.r31.s64 + -2172;
	// li r24,8
	ctx.r24.s64 = 8;
	// li r29,255
	ctx.r29.s64 = 255;
	// li r26,6
	ctx.r26.s64 = 6;
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
loc_8312FB08:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// bge cr6,0x8312fb44
	if (!cr6.lt) goto loc_8312FB44;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x831d0080
	ctx.lr = 0x8312FB38;
	sub_831D0080(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// b 0x8312fb98
	goto loc_8312FB98;
loc_8312FB44:
	// stb r29,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r29.u8);
	// stb r29,-3(r31)
	PPC_STORE_U8(ctx.r31.u32 + -3, ctx.r29.u8);
	// lwz r11,-6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,-6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,-6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r11,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r11,-6104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stb r23,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r23.u8);
	// stb r23,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r23.u8);
	// stb r26,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r26.u8);
loc_8312FB98:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8312fb08
	if (!cr0.eq) goto loc_8312FB08;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FBAC"))) PPC_WEAK_FUNC(sub_8312FBAC);
PPC_FUNC_IMPL(__imp__sub_8312FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312FBB0"))) PPC_WEAK_FUNC(sub_8312FBB0);
PPC_FUNC_IMPL(__imp__sub_8312FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8312FBB8;
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
	// beq cr6,0x8312fbf8
	if (cr6.eq) goto loc_8312FBF8;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_8312FBD0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8312fbe8
	if (cr6.eq) goto loc_8312FBE8;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8312FBE8;
	sub_831CE980(ctx, base);
loc_8312FBE8:
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8312fbd0
	if (!cr6.eq) goto loc_8312FBD0;
loc_8312FBF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FC04"))) PPC_WEAK_FUNC(sub_8312FC04);
PPC_FUNC_IMPL(__imp__sub_8312FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8312FC08"))) PPC_WEAK_FUNC(sub_8312FC08);
PPC_FUNC_IMPL(__imp__sub_8312FC08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8312FC10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,585
	ctx.r11.s64 = 38338560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,9362
	ctx.r10.u64 = ctx.r11.u64 | 9362;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8312fc34
	if (!cr6.gt) goto loc_8312FC34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8312FC34;
	sub_831CC150(ctx, base);
loc_8312FC34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,112
	ctx.r28.s64 = 112;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8312fcc0
	if (!cr6.lt) goto loc_8312FCC0;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,112
	ctx.r29.s64 = ctx.r4.s64 * 112;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8312FC6C;
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
	// bl 0x82bc0c60
	ctx.lr = 0x8312FC84;
	sub_82BC0C60(ctx, base);
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
	// beq cr6,0x8312fca8
	if (cr6.eq) goto loc_8312FCA8;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x8312FCA8;
	sub_825952B8(ctx, base);
loc_8312FCA8:
	// mulli r11,r28,112
	ctx.r11.s64 = ctx.r28.s64 * 112;
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
loc_8312FCC0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FCC8"))) PPC_WEAK_FUNC(sub_8312FCC8);
PPC_FUNC_IMPL(__imp__sub_8312FCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,585
	ctx.r10.s64 = 38338560;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,112
	ctx.r9.s64 = 112;
	// ori r8,r10,9362
	ctx.r8.u64 = ctx.r10.u64 | 9362;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x8312fcfc
	if (!cr6.lt) goto loc_8312FCFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8312FCFC:
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
	// blt cr6,0x8312fd2c
	if (cr6.lt) goto loc_8312FD2C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8312FD2C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8312fd38
	if (!cr6.lt) goto loc_8312FD38;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8312FD38:
	// b 0x8312fc08
	sub_8312FC08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8312FD3C"))) PPC_WEAK_FUNC(sub_8312FD3C);
PPC_FUNC_IMPL(__imp__sub_8312FD3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FD40"))) PPC_WEAK_FUNC(sub_8312FD40);
PPC_FUNC_IMPL(__imp__sub_8312FD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8312FD48;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831300ac
	if (cr6.eq) goto loc_831300AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// bge cr6,0x8312fd94
	if (!cr6.lt) goto loc_8312FD94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8312FD94;
	sub_831CC150(ctx, base);
loc_8312FD94:
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8312ff2c
	if (!cr6.lt) goto loc_8312FF2C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bge cr6,0x8312fdc4
	if (!cr6.lt) goto loc_8312FDC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8312fdc8
	goto loc_8312FDC8;
loc_8312FDC4:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8312FDC8:
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8312fdd4
	if (!cr6.lt) goto loc_8312FDD4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8312FDD4:
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r26,r11,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x8312FDF0;
	sub_82595718(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// srawi r9,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 4;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x8312fe48
	if (cr6.eq) goto loc_8312FE48;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8312FE14:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312fe3c
	if (cr6.eq) goto loc_8312FE3C;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
loc_8312FE3C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8312fe14
	if (!cr0.eq) goto loc_8312FE14;
loc_8312FE48:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x8312fe90
	if (cr6.eq) goto loc_8312FE90;
loc_8312FE58:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312fe80
	if (cr6.eq) goto loc_8312FE80;
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
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_8312FE80:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8312fe58
	if (!cr6.eq) goto loc_8312FE58;
loc_8312FE90:
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// beq cr6,0x8312fee4
	if (cr6.eq) goto loc_8312FEE4;
loc_8312FEAC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8312fed4
	if (cr6.eq) goto loc_8312FED4;
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
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_8312FED4:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8312feac
	if (!cr6.eq) goto loc_8312FEAC;
loc_8312FEE4:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x8312ff0c
	if (cr6.eq) goto loc_8312FF0C;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x8312FF0C;
	sub_825952B8(ctx, base);
loc_8312FF0C:
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// add r10,r26,r30
	ctx.r10.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8312FF2C:
	// subf r11,r29,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r29.s64;
	// srawi r10,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bge cr6,0x8313001c
	if (!cr6.lt) goto loc_8313001C;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// stw r4,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r4.u32);
	// beq cr6,0x8312ffac
	if (cr6.eq) goto loc_8312FFAC;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_8312FF74:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312ff9c
	if (cr6.eq) goto loc_8312FF9C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8312FF9C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x8312ff74
	if (!cr6.eq) goto loc_8312FF74;
loc_8312FFAC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// srawi r8,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// subf. r10,r8,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8312fff8
	if (cr0.eq) goto loc_8312FFF8;
loc_8312FFC0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8312ffec
	if (cr6.eq) goto loc_8312FFEC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
loc_8312FFEC:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8312ffc0
	if (!cr0.eq) goto loc_8312FFC0;
loc_8312FFF8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x8312ebe0
	ctx.lr = 0x83130014;
	sub_8312EBE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8313001C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r4,r30,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r30.s64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
	// beq cr6,0x8313008c
	if (cr6.eq) goto loc_8313008C;
loc_83130054:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8313007c
	if (cr6.eq) goto loc_8313007C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
loc_8313007C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83130054
	if (!cr6.eq) goto loc_83130054;
loc_8313008C:
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8312ec70
	ctx.lr = 0x8313009C;
	sub_8312EC70(ctx, base);
	// add r4,r30,r29
	ctx.r4.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312ebe0
	ctx.lr = 0x831300AC;
	sub_8312EBE0(ctx, base);
loc_831300AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831300B4"))) PPC_WEAK_FUNC(sub_831300B4);
PPC_FUNC_IMPL(__imp__sub_831300B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831300B8"))) PPC_WEAK_FUNC(sub_831300B8);
PPC_FUNC_IMPL(__imp__sub_831300B8) {
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
	// bge cr6,0x831300f0
	if (!cr6.lt) goto loc_831300F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x831300f4
	if (!cr6.gt) goto loc_831300F4;
loc_831300F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_831300F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83130144
	if (cr6.eq) goto loc_83130144;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,112
	ctx.r9.s64 = 112;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x83130128
	if (!cr6.eq) goto loc_83130128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312fcc8
	ctx.lr = 0x83130128;
	sub_8312FCC8(ctx, base);
loc_83130128:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 * 112;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83130174
	if (cr6.eq) goto loc_83130174;
	// b 0x8313016c
	goto loc_8313016C;
loc_83130144:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8313015c
	if (!cr6.eq) goto loc_8313015C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312fcc8
	ctx.lr = 0x8313015C;
	sub_8312FCC8(ctx, base);
loc_8313015C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83130174
	if (cr6.eq) goto loc_83130174;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8313016C:
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x83130174;
	sub_831CE980(ctx, base);
loc_83130174:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
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

__attribute__((alias("__imp__sub_83130198"))) PPC_WEAK_FUNC(sub_83130198);
PPC_FUNC_IMPL(__imp__sub_83130198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831301A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831304c4
	if (cr6.eq) goto loc_831304C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,12
	ctx.r25.s64 = 12;
	// ori r8,r10,21845
	ctx.r8.u64 = ctx.r10.u64 | 21845;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divw r10,r9,r25
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// bge cr6,0x831301f0
	if (!cr6.lt) goto loc_831301F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x831301F0;
	sub_831CC150(ctx, base);
loc_831301F0:
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r25
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bge cr6,0x83130374
	if (!cr6.lt) goto loc_83130374;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d5fd38
	ctx.lr = 0x83130210;
	sub_82D5FD38(ctx, base);
	// li r24,2
	ctx.r24.s64 = 2;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82595718
	ctx.lr = 0x83130238;
	sub_82595718(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// divw r9,r9,r25
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x83130290
	if (cr6.eq) goto loc_83130290;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_83130264:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83130284
	if (cr6.eq) goto loc_83130284;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_83130284:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x83130264
	if (!cr0.eq) goto loc_83130264;
loc_83130290:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x831302d0
	if (cr6.eq) goto loc_831302D0;
loc_831302A0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831302c0
	if (cr6.eq) goto loc_831302C0;
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
loc_831302C0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x831302a0
	if (!cr6.eq) goto loc_831302A0;
loc_831302D0:
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// beq cr6,0x83130324
	if (cr6.eq) goto loc_83130324;
loc_831302F4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83130314
	if (cr6.eq) goto loc_83130314;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
loc_83130314:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x831302f4
	if (!cr6.eq) goto loc_831302F4;
loc_83130324:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r11,r10,r25
	ctx.r11.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x8313034c
	if (cr6.eq) goto loc_8313034C;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x8313034C;
	sub_825952B8(ctx, base);
loc_8313034C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// add r10,r26,r28
	ctx.r10.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83130374:
	// subf r11,r29,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r29.s64;
	// divw r10,r11,r25
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bge cr6,0x83130440
	if (!cr6.lt) goto loc_83130440;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// beq cr6,0x831303e8
	if (cr6.eq) goto loc_831303E8;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_831303B8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831303d8
	if (cr6.eq) goto loc_831303D8;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
loc_831303D8:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x831303b8
	if (!cr6.eq) goto loc_831303B8;
loc_831303E8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// divw r5,r10,r25
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	// subf. r10,r5,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8313041c
	if (cr0.eq) goto loc_8313041C;
loc_831303FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83130410
	if (cr6.eq) goto loc_83130410;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
loc_83130410:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x831303fc
	if (!cr0.eq) goto loc_831303FC;
loc_8313041C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bl 0x8312eae8
	ctx.lr = 0x83130438;
	sub_8312EAE8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83130440:
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r31,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r31.s64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x831304a4
	if (cr6.eq) goto loc_831304A4;
loc_83130474:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83130494
	if (cr6.eq) goto loc_83130494;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_83130494:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83130474
	if (!cr6.eq) goto loc_83130474;
loc_831304A4:
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8312eb60
	ctx.lr = 0x831304B4;
	sub_8312EB60(ctx, base);
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312eae8
	ctx.lr = 0x831304C4;
	sub_8312EAE8(ctx, base);
loc_831304C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831304CC"))) PPC_WEAK_FUNC(sub_831304CC);
PPC_FUNC_IMPL(__imp__sub_831304CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831304D0"))) PPC_WEAK_FUNC(sub_831304D0);
PPC_FUNC_IMPL(__imp__sub_831304D0) {
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
	// addi r4,r3,152
	ctx.r4.s64 = ctx.r3.s64 + 152;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x831300b8
	ctx.lr = 0x831304F0;
	sub_831300B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_83130500:
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// beq cr6,0x831305b0
	if (cr6.eq) goto loc_831305B0;
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// beq cr6,0x83130584
	if (cr6.eq) goto loc_83130584;
	// cmpwi cr6,r6,14
	cr6.compare<int32_t>(ctx.r6.s32, 14, xer);
	// bge cr6,0x83130528
	if (!cr6.lt) goto loc_83130528;
	// addi r11,r6,38
	ctx.r11.s64 = ctx.r6.s64 + 38;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x8313052c
	goto loc_8313052C;
loc_83130528:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8313052C:
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// cmpwi cr6,r6,14
	cr6.compare<int32_t>(ctx.r6.s32, 14, xer);
	// bge cr6,0x8313063c
	if (!cr6.lt) goto loc_8313063C;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r6,14
	cr6.compare<int32_t>(ctx.r6.s32, 14, xer);
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// bge cr6,0x8313063c
	if (!cr6.lt) goto loc_8313063C;
	// addi r11,r6,52
	ctx.r11.s64 = ctx.r6.s64 + 52;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// b 0x83130640
	goto loc_83130640;
loc_83130584:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83130598
	if (!cr6.gt) goto loc_83130598;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_83130598:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83130688
	if (!cr6.gt) goto loc_83130688;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x83130688
	goto loc_83130688;
loc_831305B0:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83130634
	if (cr6.eq) goto loc_83130634;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfic r9,r10,-1
	xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r10.s64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// subfze r10,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r10,r3,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r3.s64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// and r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
loc_831305F0:
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83130684
	if (cr6.eq) goto loc_83130684;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subfic r9,r10,-1
	xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r10.s64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// subfze r10,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r10.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r10,r3,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r3.s64;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// and r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// b 0x83130688
	goto loc_83130688;
loc_83130634:
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// b 0x831305f0
	goto loc_831305F0;
loc_8313063C:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_83130640:
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// cmpwi cr6,r6,14
	cr6.compare<int32_t>(ctx.r6.s32, 14, xer);
	// bge cr6,0x83130688
	if (!cr6.lt) goto loc_83130688;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subfze r11,r7
	temp.u8 = ~ctx.r7.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x83130688
	goto loc_83130688;
loc_83130684:
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
loc_83130688:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r6,14
	cr6.compare<uint32_t>(ctx.r6.u32, 14, xer);
	// blt cr6,0x83130500
	if (cr6.lt) goto loc_83130500;
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

__attribute__((alias("__imp__sub_831306A8"))) PPC_WEAK_FUNC(sub_831306A8);
PPC_FUNC_IMPL(__imp__sub_831306A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831306B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x831307e4
	if (!cr6.lt) goto loc_831307E4;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r4,2218
	ctx.r11.s64 = ctx.r4.s64 + 2218;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831306d4
	if (!cr6.eq) goto loc_831306D4;
	// addi r11,r4,2178
	ctx.r11.s64 = ctx.r4.s64 + 2178;
loc_831306D4:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r4,9000
	ctx.r11.s64 = ctx.r4.s64 + 9000;
	// bne cr6,0x831306ec
	if (!cr6.eq) goto loc_831306EC;
	// addi r11,r4,8840
	ctx.r11.s64 = ctx.r4.s64 + 8840;
loc_831306EC:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x83494f50
	ctx.lr = 0x831306FC;
	sub_83494F50(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_8313070C:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(ctx.r30.s32, 4, xer);
	// beq cr6,0x83130794
	if (cr6.eq) goto loc_83130794;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(ctx.r30.s32, 5, xer);
	// beq cr6,0x83130774
	if (cr6.eq) goto loc_83130774;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// bge cr6,0x83130730
	if (!cr6.lt) goto loc_83130730;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// b 0x83130734
	goto loc_83130734;
loc_83130730:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_83130734:
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(ctx.r30.s32, 16, xer);
	// bge cr6,0x831307d8
	if (!cr6.lt) goto loc_831307D8;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r29
	temp.u8 = ~ctx.r29.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stwx r4,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r4.u32);
	// b 0x831307d8
	goto loc_831307D8;
loc_83130774:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc3458
	ctx.lr = 0x83130780;
	sub_82BC3458(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x831307d8
	if (!cr6.gt) goto loc_831307D8;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x831307d8
	goto loc_831307D8;
loc_83130794:
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831307d4
	if (cr6.eq) goto loc_831307D4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r10,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// subfze r11,r29
	temp.u8 = ~ctx.r29.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r29.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// b 0x831307d8
	goto loc_831307D8;
loc_831307D4:
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
loc_831307D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// blt cr6,0x8313070c
	if (cr6.lt) goto loc_8313070C;
loc_831307E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831307EC"))) PPC_WEAK_FUNC(sub_831307EC);
PPC_FUNC_IMPL(__imp__sub_831307EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831307F0"))) PPC_WEAK_FUNC(sub_831307F0);
PPC_FUNC_IMPL(__imp__sub_831307F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831307F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8313081c
	if (!cr6.eq) goto loc_8313081C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x8313082c
	goto loc_8313082C;
loc_8313081C:
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_8313082C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x83130840
	if (!cr6.eq) goto loc_83130840;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83130854
	goto loc_83130854;
loc_83130840:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8313084c
	if (!cr6.eq) goto loc_8313084C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8313084C:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x831308dc
	if (cr6.eq) goto loc_831308DC;
loc_83130854:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// beq cr6,0x831308dc
	if (cr6.eq) goto loc_831308DC;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stb r26,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r26.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// oris r28,r4,65532
	ctx.r28.u64 = ctx.r4.u64 | 4294705152;
	// stb r26,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r26.u8);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// oris r28,r28,3
	ctx.r28.u64 = ctx.r28.u64 | 196608;
	// lwz r11,-6104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6104);
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// rlwimi r25,r28,0,14,31
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x3FFFF) | (ctx.r25.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// rlwimi r24,r25,0,0,13
	ctx.r24.u64 = (__builtin_rotateleft32(ctx.r25.u32, 0) & 0xFFFC0000) | (ctx.r24.u64 & 0xFFFFFFFF0003FFFF);
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r25,r1,88
	ctx.r25.s64 = ctx.r1.s64 + 88;
	// stwx r5,r29,r7
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r5.u32);
	// stbx r6,r30,r26
	PPC_STORE_U8(ctx.r30.u32 + ctx.r26.u32, ctx.r6.u8);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r8,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r8.u32);
	// stbx r9,r31,r25
	PPC_STORE_U8(ctx.r31.u32 + ctx.r25.u32, ctx.r9.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// bl 0x83130198
	ctx.lr = 0x831308DC;
	sub_83130198(ctx, base);
loc_831308DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831308E4"))) PPC_WEAK_FUNC(sub_831308E4);
PPC_FUNC_IMPL(__imp__sub_831308E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831308E8"))) PPC_WEAK_FUNC(sub_831308E8);
PPC_FUNC_IMPL(__imp__sub_831308E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x831308F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// beq cr6,0x83130ec8
	if (cr6.eq) goto loc_83130EC8;
	// cmplwi cr6,r4,33
	cr6.compare<uint32_t>(ctx.r4.u32, 33, xer);
	// bge cr6,0x83130ec8
	if (!cr6.lt) goto loc_83130EC8;
	// cmplwi cr6,r7,33
	cr6.compare<uint32_t>(ctx.r7.u32, 33, xer);
	// bge cr6,0x83130ec8
	if (!cr6.lt) goto loc_83130EC8;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83130940:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83130940
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83130940;
	// lwz r31,356(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83130960
	if (cr6.eq) goto loc_83130960;
	// lwz r30,364(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8313099c
	if (!cr6.eq) goto loc_8313099C;
loc_83130960:
	// cmplwi cr6,r27,32
	cr6.compare<uint32_t>(ctx.r27.u32, 32, xer);
	// beq cr6,0x83130c90
	if (cr6.eq) goto loc_83130C90;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// beq cr6,0x8313098c
	if (cr6.eq) goto loc_8313098C;
	// addi r11,r27,2178
	ctx.r11.s64 = ctx.r27.s64 + 2178;
	// addi r10,r28,2178
	ctx.r10.s64 = ctx.r28.s64 + 2178;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r30,r10,r23
	ctx.r30.u64 = ctx.r10.u64 + ctx.r23.u64;
	// b 0x8313099c
	goto loc_8313099C;
loc_8313098C:
	// addi r11,r27,2218
	ctx.r11.s64 = ctx.r27.s64 + 2218;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r23
	ctx.r31.u64 = ctx.r11.u64 + ctx.r23.u64;
loc_83130998:
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_8313099C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8312ea18
	ctx.lr = 0x831309AC;
	sub_8312EA18(ctx, base);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831307f0
	ctx.lr = 0x831309D0;
	sub_831307F0(ctx, base);
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addis r3,r23,2
	ctx.r3.s64 = ctx.r23.s64 + 131072;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,13440
	ctx.r3.s64 = ctx.r3.s64 + 13440;
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r24,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r24.u16);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// stb r26,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r26.u8);
	// stb r25,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r25.u8);
	// stb r20,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r20.u8);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8312fd40
	ctx.lr = 0x83130A0C;
	sub_8312FD40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8312e948
	ctx.lr = 0x83130A18;
	sub_8312E948(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// bl 0x8312e948
	ctx.lr = 0x83130A5C;
	sub_8312E948(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, xer);
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r4,r5,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r5.s64;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 & ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 & ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r7.u32);
	// ble cr6,0x83130cac
	if (!cr6.gt) goto loc_83130CAC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8312e948
	ctx.lr = 0x83130B60;
	sub_8312E948(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// bl 0x8312e948
	ctx.lr = 0x83130B9C;
	sub_8312E948(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// bl 0x8312e948
	ctx.lr = 0x83130BDC;
	sub_8312E948(ctx, base);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// ble cr6,0x83130c54
	if (!cr6.gt) goto loc_83130C54;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83130C54:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r4.u32);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83130C90:
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x83130998
	if (cr6.eq) goto loc_83130998;
	// addi r11,r28,2218
	ctx.r11.s64 = ctx.r28.s64 + 2218;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r30,r11,r23
	ctx.r30.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x8313099c
	goto loc_8313099C;
loc_83130CAC:
	// bne cr6,0x83130d98
	if (!cr6.eq) goto loc_83130D98;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8312e948
	ctx.lr = 0x83130CB8;
	sub_8312E948(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// bl 0x8312e948
	ctx.lr = 0x83130CF8;
	sub_8312E948(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 & ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r24,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r24.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83130D98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8312e948
	ctx.lr = 0x83130DA0;
	sub_8312E948(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// bl 0x8312e948
	ctx.lr = 0x83130DDC;
	sub_8312E948(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// bl 0x8312e948
	ctx.lr = 0x83130E1C;
	sub_8312E948(ctx, base);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// and r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r9,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r9.s64 = -1 - ctx.r11.s64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// srawi r3,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 31;
	// and r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 & ctx.r6.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83130ec8
	if (!cr6.gt) goto loc_83130EC8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_83130EC8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83130ED0"))) PPC_WEAK_FUNC(sub_83130ED0);
PPC_FUNC_IMPL(__imp__sub_83130ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83130ED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 131072;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r30,13440
	ctx.r30.s64 = ctx.r30.s64 + 13440;
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83130f04
	if (cr6.eq) goto loc_83130F04;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83130F04;
	sub_825952B8(ctx, base);
loc_83130F04:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,31
	ctx.r29.s64 = 31;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_83130F18:
	// lwzu r4,-16(r30)
	ea = -16 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83130f30
	if (cr6.eq) goto loc_83130F30;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83130F30;
	sub_825952B8(ctx, base);
loc_83130F30:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// bge 0x83130f18
	if (!cr0.lt) goto loc_83130F18;
	// addis r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 131072;
	// li r29,31
	ctx.r29.s64 = 31;
	// addi r30,r30,10880
	ctx.r30.s64 = ctx.r30.s64 + 10880;
loc_83130F50:
	// lwzu r4,-16(r30)
	ea = -16 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83130f68
	if (cr6.eq) goto loc_83130F68;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x83130F68;
	sub_825952B8(ctx, base);
loc_83130F68:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// bge 0x83130f50
	if (!cr0.lt) goto loc_83130F50;
	// addis r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 131072;
	// li r29,527
	ctx.r29.s64 = 527;
	// addi r11,r11,8320
	ctx.r11.s64 = ctx.r11.s64 + 8320;
	// addi r30,r11,144
	ctx.r30.s64 = ctx.r11.s64 + 144;
loc_83130F8C:
	// addi r30,r30,-264
	ctx.r30.s64 = ctx.r30.s64 + -264;
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83130fa8
	if (cr6.eq) goto loc_83130FA8;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x83130FA8;
	sub_825952B8(ctx, base);
loc_83130FA8:
	// stw r31,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r31.u32);
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// lwz r4,-136(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83130fcc
	if (cr6.eq) goto loc_83130FCC;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x83130FCC;
	sub_825952B8(ctx, base);
loc_83130FCC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r31,-136(r30)
	PPC_STORE_U32(ctx.r30.u32 + -136, ctx.r31.u32);
	// stw r31,-132(r30)
	PPC_STORE_U32(ctx.r30.u32 + -132, ctx.r31.u32);
	// stw r31,-128(r30)
	PPC_STORE_U32(ctx.r30.u32 + -128, ctx.r31.u32);
	// bge 0x83130f8c
	if (!cr0.lt) goto loc_83130F8C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83130FE8"))) PPC_WEAK_FUNC(sub_83130FE8);
PPC_FUNC_IMPL(__imp__sub_83130FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83130FF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8313102c
	if (!cr6.eq) goto loc_8313102C;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// b 0x8313103c
	goto loc_8313103C;
loc_8313102C:
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r26,r8,r26
	ctx.r26.u64 = ctx.r8.u64 & ctx.r26.u64;
loc_8313103C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x83131050
	if (!cr6.eq) goto loc_83131050;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x83131064
	goto loc_83131064;
loc_83131050:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x8313105c
	if (!cr6.eq) goto loc_8313105C;
	// li r26,1
	ctx.r26.s64 = 1;
loc_8313105C:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(ctx.r23.s32, -1, xer);
	// beq cr6,0x83131160
	if (cr6.eq) goto loc_83131160;
loc_83131064:
	// cmpwi cr6,r26,-1
	cr6.compare<int32_t>(ctx.r26.s32, -1, xer);
	// beq cr6,0x83131160
	if (cr6.eq) goto loc_83131160;
	// li r24,12
	ctx.r24.s64 = 12;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(ctx.r22.s32, -1, xer);
	// bne cr6,0x83131088
	if (!cr6.eq) goto loc_83131088;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r22,r9,r24
	ctx.r22.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
loc_83131088:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8313112c
	if (cr0.eq) goto loc_8313112C;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// rlwinm r28,r26,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r23,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_831310B0:
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, xer);
	// bge cr6,0x83131128
	if (!cr6.lt) goto loc_83131128;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,98
	ctx.r10.s64 = ctx.r1.s64 + 98;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwzx r6,r29,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r5,r28,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// lbz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// lbz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stb r9,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r9.u8);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// sth r25,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r25.u16);
	// bl 0x82d54828
	ctx.lr = 0x83131100;
	sub_82D54828(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// divw r5,r6,r24
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r24.s32);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplw cr6,r30,r5
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, xer);
	// blt cr6,0x831310b0
	if (cr6.lt) goto loc_831310B0;
loc_83131128:
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8313112C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd1f28
	ctx.lr = 0x83131138;
	sub_82CD1F28(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8313116c
	if (cr6.eq) goto loc_8313116C;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83131154;
	sub_825952B8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_83131160:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82cd1f28
	ctx.lr = 0x8313116C;
	sub_82CD1F28(ctx, base);
loc_8313116C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83131178"))) PPC_WEAK_FUNC(sub_83131178);
PPC_FUNC_IMPL(__imp__sub_83131178) {
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
	ctx.lr = 0x83131180;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_831311A0:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bge cr6,0x831311b0
	if (!cr6.lt) goto loc_831311B0;
	// lbzx r11,r10,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r26.u32);
	// b 0x831311b4
	goto loc_831311B4;
loc_831311B0:
	// li r11,255
	ctx.r11.s64 = 255;
loc_831311B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x831311c4
	if (!cr6.eq) goto loc_831311C4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831311C4:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x831311a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831311A0;
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// addi r31,r26,260
	ctx.r31.s64 = ctx.r26.s64 + 260;
	// li r29,7
	ctx.r29.s64 = 7;
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r9,-6104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
loc_831311E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r9,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x8313120c
	if (!cr6.eq) goto loc_8313120C;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83131210
	if (cr6.eq) goto loc_83131210;
loc_8313120C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83131210:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83131260
	if (!cr6.eq) goto loc_83131260;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x83131240
	if (!cr6.eq) goto loc_83131240;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83131244
	if (cr6.eq) goto loc_83131244;
loc_83131240:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83131244:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83131260
	if (!cr6.eq) goto loc_83131260;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x82d54828
	ctx.lr = 0x8313125C;
	sub_82D54828(ctx, base);
	// lwz r9,-6104(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -6104);
loc_83131260:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x831311e4
	if (!cr0.eq) goto loc_831311E4;
	// ld r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 48);
	// addi r10,r26,16
	ctx.r10.s64 = ctx.r26.s64 + 16;
	// ld r7,16(r26)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// rldicl r8,r11,14,50
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 14) & 0x3FFF;
	// lhz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// rldicl r11,r7,14,50
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 14) & 0x3FFF;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// bgt cr6,0x83131298
	if (cr6.gt) goto loc_83131298;
	// li r6,0
	ctx.r6.s64 = 0;
loc_83131298:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mulli r7,r9,10000
	ctx.r7.s64 = ctx.r9.s64 * 10000;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
loc_831312C4:
	// lwzu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicl r4,r5,14,50
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 14) & 0x3FFF;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// ld r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// clrlwi r7,r3,22
	ctx.r7.u64 = ctx.r3.u32 & 0x3FF;
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// ld r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// rldicl r4,r5,10,54
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 10) & 0x3FF;
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// ld r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// rldicl r7,r3,30,34
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 30) & 0x3FFFFFFF;
	// clrlwi r5,r7,12
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFFF;
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// ld r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// rldicl r3,r4,50,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u64, 50) & 0x3FFFFFFFFFFFF;
	// clrlwi r7,r3,12
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFFF;
	// stw r7,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// ld r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicl r4,r5,34,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r3,r4,12
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFFF;
	// stw r3,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rldicl r5,r7,54,10
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 54) & 0x3FFFFFFFFFFFFF;
	// clrlwi r4,r5,12
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFFF;
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// ld r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// rldicl r7,r3,20,44
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 20) & 0xFFFFF;
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// ld r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// rldicl r4,r5,40,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 40) & 0xFFFFFFFFFF;
	// clrlwi r3,r4,12
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFFF;
	// stw r3,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
	// ld r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// rldicl r5,r7,60,4
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// clrlwi r4,r5,12
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFFF;
	// stw r4,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r4.u32);
	// lhzu r7,32(r10)
	ea = 32 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stwu r7,56(r11)
	ea = 56 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831312c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831312C4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r11,r9,10
	xer.ca = ctx.r9.u32 <= 10;
	ctx.r11.s64 = 10 - ctx.r9.s64;
	// addi r9,r9,-10
	ctx.r9.s64 = ctx.r9.s64 + -10;
	// subfze r11,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r9
	ctx.r5.u64 = ctx.r6.u64 & ctx.r9.u64;
	// addic. r11,r5,10
	xer.ca = ctx.r5.u32 > 4294967285;
	ctx.r11.s64 = ctx.r5.s64 + 10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831314d4
	if (cr0.eq) goto loc_831314D4;
	// addi r21,r28,136
	ctx.r21.s64 = ctx.r28.s64 + 136;
	// addi r25,r26,80
	ctx.r25.s64 = ctx.r26.s64 + 80;
	// addi r23,r26,115
	ctx.r23.s64 = ctx.r26.s64 + 115;
	// subfic r22,r26,-80
	xer.ca = ctx.r26.u32 <= 4294967216;
	ctx.r22.s64 = -80 - ctx.r26.s64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_831313B4:
	// li r10,14
	ctx.r10.s64 = 14;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831313C4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x831313c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831313C4;
	// lbz r11,-8(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + -8);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831313f0
	if (!cr6.eq) goto loc_831313F0;
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831313f4
	if (cr6.eq) goto loc_831313F4;
loc_831313F0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_831313F4:
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// subfic r8,r10,10000
	xer.ca = ctx.r10.u32 <= 10000;
	ctx.r8.s64 = 10000 - ctx.r10.s64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// add r28,r22,r25
	ctx.r28.u64 = ctx.r22.u64 + ctx.r25.u64;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_8313141C:
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8313142C;
	sub_831CDCF0(ctx, base);
	// add r9,r28,r30
	ctx.r9.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lhzu r6,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// add r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// lbz r4,107(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 107);
	// lbzx r5,r7,r26
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r26.u32);
	// rlwinm r9,r4,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 25) & 0x1FFFFFF;
	// lbz r3,102(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 102);
	// rlwinm r7,r4,28,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x7;
	// lbz r10,103(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 103);
	// lbz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// lbz r6,101(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 101);
	// lbz r4,105(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 105);
	// lbz r11,106(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 106);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r5,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r5.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// blt cr6,0x8313141c
	if (cr6.lt) goto loc_8313141C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831300b8
	ctx.lr = 0x831314C4;
	sub_831300B8(ctx, base);
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r23,r23,16
	ctx.r23.s64 = ctx.r23.s64 + 16;
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// bne 0x831313b4
	if (!cr0.eq) goto loc_831313B4;
loc_831314D4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831314DC"))) PPC_WEAK_FUNC(sub_831314DC);
PPC_FUNC_IMPL(__imp__sub_831314DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831314E0"))) PPC_WEAK_FUNC(sub_831314E0);
PPC_FUNC_IMPL(__imp__sub_831314E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x831314E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r4,12800
	ctx.r30.s64 = ctx.r4.s64 + 12800;
	// li r31,528
	ctx.r31.s64 = 528;
loc_83131500:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83131178
	ctx.lr = 0x8313150C;
	sub_83131178(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,344
	ctx.r30.s64 = ctx.r30.s64 + 344;
	// addi r29,r29,264
	ctx.r29.s64 = ctx.r29.s64 + 264;
	// bne 0x83131500
	if (!cr0.eq) goto loc_83131500;
	// addis r3,r27,2
	ctx.r3.s64 = ctx.r27.s64 + 131072;
	// addis r4,r26,3
	ctx.r4.s64 = ctx.r26.s64 + 196608;
	// addi r3,r3,10880
	ctx.r3.s64 = ctx.r3.s64 + 10880;
	// addi r4,r4,14848
	ctx.r4.s64 = ctx.r4.s64 + 14848;
	// li r31,32
	ctx.r31.s64 = 32;
loc_83131530:
	// bl 0x8312e860
	ctx.lr = 0x83131534;
	sub_8312E860(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// bne 0x83131530
	if (!cr0.eq) goto loc_83131530;
	// addis r3,r27,2
	ctx.r3.s64 = ctx.r27.s64 + 131072;
	// addis r4,r26,3
	ctx.r4.s64 = ctx.r26.s64 + 196608;
	// addi r3,r3,8320
	ctx.r3.s64 = ctx.r3.s64 + 8320;
	// addi r4,r4,-2048
	ctx.r4.s64 = ctx.r4.s64 + -2048;
	// li r31,32
	ctx.r31.s64 = 32;
loc_83131558:
	// bl 0x8312e860
	ctx.lr = 0x8313155C;
	sub_8312E860(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r4,48
	ctx.r4.s64 = ctx.r4.s64 + 48;
	// bne 0x83131558
	if (!cr0.eq) goto loc_83131558;
	// addis r31,r26,3
	ctx.r31.s64 = ctx.r26.s64 + 196608;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r31,r31,-2176
	ctx.r31.s64 = ctx.r31.s64 + -2176;
	// ori r29,r11,13440
	ctx.r29.u64 = ctx.r11.u64 | 13440;
loc_83131580:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x831315a4
	if (cr6.eq) goto loc_831315A4;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x831315a4
	if (cr6.eq) goto loc_831315A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// bl 0x831b0e08
	ctx.lr = 0x831315A4;
	sub_831B0E08(ctx, base);
loc_831315A4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x83131580
	if (!cr0.eq) goto loc_83131580;
	// addis r28,r27,2
	ctx.r28.s64 = ctx.r27.s64 + 131072;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r28,12928
	ctx.r28.s64 = ctx.r28.s64 + 12928;
	// ori r30,r11,16384
	ctx.r30.u64 = ctx.r11.u64 | 16384;
loc_831315C4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_831315C8:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831315D8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x831315d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831315D8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831315F0:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x831315f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831315F0;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x8312e860
	ctx.lr = 0x83131618;
	sub_8312E860(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83494f50
	ctx.lr = 0x83131624;
	sub_83494F50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x831315c8
	if (cr6.lt) goto loc_831315C8;
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplwi cr6,r29,320
	cr6.compare<uint32_t>(ctx.r29.u32, 320, xer);
	// blt cr6,0x831315c4
	if (cr6.lt) goto loc_831315C4;
	// addis r28,r27,2
	ctx.r28.s64 = ctx.r27.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r28,10368
	ctx.r28.s64 = ctx.r28.s64 + 10368;
	// ori r30,r11,65024
	ctx.r30.u64 = ctx.r11.u64 | 65024;
loc_83131654:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83131658:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83131668:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83131668
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83131668;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83131680:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x83131680
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83131680;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x8312e860
	ctx.lr = 0x831316A8;
	sub_8312E860(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83494f50
	ctx.lr = 0x831316B4;
	sub_83494F50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x83131658
	if (cr6.lt) goto loc_83131658;
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplwi cr6,r29,320
	cr6.compare<uint32_t>(ctx.r29.u32, 320, xer);
	// blt cr6,0x83131654
	if (cr6.lt) goto loc_83131654;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831316D8"))) PPC_WEAK_FUNC(sub_831316D8);
PPC_FUNC_IMPL(__imp__sub_831316D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831316E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,527
	ctx.r29.s64 = 527;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
loc_831316F4:
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// lis r11,-31832
	ctx.r11.s64 = -2086141952;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r6,r11,-24576
	ctx.r6.s64 = ctx.r11.s64 + -24576;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823fca98
	ctx.lr = 0x83131718;
	sub_823FCA98(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lis r10,-31832
	ctx.r10.s64 = -2086141952;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r10,-24576
	ctx.r6.s64 = ctx.r10.s64 + -24576;
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823fca98
	ctx.lr = 0x8313173C;
	sub_823FCA98(ctx, base);
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x82bc15e8
	ctx.lr = 0x83131744;
	sub_82BC15E8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,264
	ctx.r31.s64 = ctx.r31.s64 + 264;
	// bge 0x831316f4
	if (!cr0.lt) goto loc_831316F4;
	// addis r3,r28,2
	ctx.r3.s64 = ctx.r28.s64 + 131072;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r3,8320
	ctx.r3.s64 = ctx.r3.s64 + 8320;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83131764;
	sub_831CDCF0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addis r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 131072;
	// addi r11,r11,10360
	ctx.r11.s64 = ctx.r11.s64 + 10360;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83131774:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r30,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83131774
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83131774;
	// addis r3,r28,2
	ctx.r3.s64 = ctx.r28.s64 + 131072;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r3,r3,10880
	ctx.r3.s64 = ctx.r3.s64 + 10880;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83131798;
	sub_831CDCF0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addis r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 131072;
	// addi r11,r11,12920
	ctx.r11.s64 = ctx.r11.s64 + 12920;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831317A8:
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r30,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831317a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831317A8;
	// addis r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 131072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,13440
	ctx.r11.s64 = ctx.r11.s64 + 13440;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831317D8"))) PPC_WEAK_FUNC(sub_831317D8);
PPC_FUNC_IMPL(__imp__sub_831317D8) {
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
	// li r11,28
	ctx.r11.s64 = 28;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,13456
	ctx.r4.u64 = ctx.r4.u64 | 13456;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83131800;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8313181c
	if (cr6.eq) goto loc_8313181C;
	// bl 0x831316d8
	ctx.lr = 0x8313180C;
	sub_831316D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8313181C:
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

__attribute__((alias("__imp__sub_83131830"))) PPC_WEAK_FUNC(sub_83131830);
PPC_FUNC_IMPL(__imp__sub_83131830) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83131878
	if (cr6.eq) goto loc_83131878;
	// li r11,28
	ctx.r11.s64 = 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83131860;
	sub_82595150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83130ed0
	ctx.lr = 0x83131868;
	sub_83130ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83131870;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83131878;
	sub_82595170(ctx, base);
loc_83131878:
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

__attribute__((alias("__imp__sub_8313188C"))) PPC_WEAK_FUNC(sub_8313188C);
PPC_FUNC_IMPL(__imp__sub_8313188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83131890"))) PPC_WEAK_FUNC(sub_83131890);
PPC_FUNC_IMPL(__imp__sub_83131890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2152
	ctx.r8.s64 = ctx.r11.s64 + 2152;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831318A4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x831318c8
	if (cr6.eq) goto loc_831318C8;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r10,1120
	cr6.compare<uint32_t>(ctx.r10.u32, 1120, xer);
	// blt cr6,0x831318a4
	if (cr6.lt) goto loc_831318A4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_831318C8:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831318E0"))) PPC_WEAK_FUNC(sub_831318E0);
PPC_FUNC_IMPL(__imp__sub_831318E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2152
	ctx.r8.s64 = ctx.r11.s64 + 2152;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831318F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x83131918
	if (cr6.eq) goto loc_83131918;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r10,1120
	cr6.compare<uint32_t>(ctx.r10.u32, 1120, xer);
	// blt cr6,0x831318f4
	if (cr6.lt) goto loc_831318F4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83131918:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131930"))) PPC_WEAK_FUNC(sub_83131930);
PPC_FUNC_IMPL(__imp__sub_83131930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2152
	ctx.r8.s64 = ctx.r11.s64 + 2152;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83131944:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x83131968
	if (cr6.eq) goto loc_83131968;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r10,1120
	cr6.compare<uint32_t>(ctx.r10.u32, 1120, xer);
	// blt cr6,0x83131944
	if (cr6.lt) goto loc_83131944;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83131968:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 + 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131980"))) PPC_WEAK_FUNC(sub_83131980);
PPC_FUNC_IMPL(__imp__sub_83131980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2152
	ctx.r8.s64 = ctx.r11.s64 + 2152;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83131994:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x831319b8
	if (cr6.eq) goto loc_831319B8;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r10,1120
	cr6.compare<uint32_t>(ctx.r10.u32, 1120, xer);
	// blt cr6,0x83131994
	if (cr6.lt) goto loc_83131994;
	// li r9,0
	ctx.r9.s64 = 0;
loc_831319B8:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831319D0"))) PPC_WEAK_FUNC(sub_831319D0);
PPC_FUNC_IMPL(__imp__sub_831319D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x831319e0
	if (cr6.lt) goto loc_831319E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831319E0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2152
	ctx.r8.s64 = ctx.r11.s64 + 2152;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831319F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x83131a18
	if (cr6.eq) goto loc_83131A18;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r10,1120
	cr6.compare<uint32_t>(ctx.r10.u32, 1120, xer);
	// blt cr6,0x831319f4
	if (cr6.lt) goto loc_831319F4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83131A18:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,20
	ctx.r10.s64 = ctx.r8.s64 + 20;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131A38"))) PPC_WEAK_FUNC(sub_83131A38);
PPC_FUNC_IMPL(__imp__sub_83131A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,2152
	ctx.r8.s64 = ctx.r11.s64 + 2152;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_83131A4C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// beq cr6,0x83131a70
	if (cr6.eq) goto loc_83131A70;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r10,1120
	cr6.compare<uint32_t>(ctx.r10.u32, 1120, xer);
	// blt cr6,0x83131a4c
	if (cr6.lt) goto loc_83131A4C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83131A70:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,36
	ctx.r10.s64 = ctx.r8.s64 + 36;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131A88"))) PPC_WEAK_FUNC(sub_83131A88);
PPC_FUNC_IMPL(__imp__sub_83131A88) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x83131abc
	if (cr6.lt) goto loc_83131ABC;
loc_83131AA4:
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
loc_83131ABC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-5896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5896);
	// lwzx r31,r9,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// xor r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83131af4
	if (!cr6.eq) goto loc_83131AF4;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83131af8
	if (cr6.eq) goto loc_83131AF8;
loc_83131AF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83131AF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83131aa4
	if (!cr6.eq) goto loc_83131AA4;
	// bl 0x831156e8
	ctx.lr = 0x83131B08;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bdf0
	ctx.lr = 0x83131B14;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83131aa4
	if (cr6.eq) goto loc_83131AA4;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r3,r11,15,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
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

__attribute__((alias("__imp__sub_83131B38"))) PPC_WEAK_FUNC(sub_83131B38);
PPC_FUNC_IMPL(__imp__sub_83131B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83131b50
	if (!cr6.eq) goto loc_83131B50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83131B50:
	// lbz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r8,21(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// lbz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,23(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 23);
	// lbz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// lbz r10,25(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// bne cr6,0x83131bb4
	if (!cr6.eq) goto loc_83131BB4;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83131bb4
	if (!cr6.eq) goto loc_83131BB4;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83131bc0
	if (cr6.gt) goto loc_83131BC0;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
loc_83131BB4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83131bc8
	if (!cr6.gt) goto loc_83131BC8;
loc_83131BC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83131BC8:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131BD8"))) PPC_WEAK_FUNC(sub_83131BD8);
PPC_FUNC_IMPL(__imp__sub_83131BD8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x83131b38
	ctx.lr = 0x83131BE8;
	sub_83131B38(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x83131c54
	if (cr6.gt) goto loc_83131C54;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83131c54
	if (cr6.eq) goto loc_83131C54;
	// bdz 0x83131c18
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83131C18;
	// bdz 0x83131c34
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83131C34;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83131C18:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
loc_83131C34:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
loc_83131C54:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131C68"))) PPC_WEAK_FUNC(sub_83131C68);
PPC_FUNC_IMPL(__imp__sub_83131C68) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83131c94
	if (!cr6.eq) goto loc_83131C94;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-5896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5896);
	// b 0x83131ce8
	goto loc_83131CE8;
loc_83131C94:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83131b38
	ctx.lr = 0x83131C9C;
	sub_83131B38(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83131ce4
	if (cr6.eq) goto loc_83131CE4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// beq cr6,0x83131ccc
	if (cr6.eq) goto loc_83131CCC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-5896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5896);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83131CCC:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83131CE4:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_83131CE8:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83131D00"))) PPC_WEAK_FUNC(sub_83131D00);
PPC_FUNC_IMPL(__imp__sub_83131D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,-29608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29608);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D14"))) PPC_WEAK_FUNC(sub_83131D14);
PPC_FUNC_IMPL(__imp__sub_83131D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83131D18"))) PPC_WEAK_FUNC(sub_83131D18);
PPC_FUNC_IMPL(__imp__sub_83131D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-29608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29608);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r3,9(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D34"))) PPC_WEAK_FUNC(sub_83131D34);
PPC_FUNC_IMPL(__imp__sub_83131D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83131D38"))) PPC_WEAK_FUNC(sub_83131D38);
PPC_FUNC_IMPL(__imp__sub_83131D38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D50"))) PPC_WEAK_FUNC(sub_83131D50);
PPC_FUNC_IMPL(__imp__sub_83131D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
	// stb r10,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r10.u8);
	// stw r6,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r6.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D6C"))) PPC_WEAK_FUNC(sub_83131D6C);
PPC_FUNC_IMPL(__imp__sub_83131D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83131D70"))) PPC_WEAK_FUNC(sub_83131D70);
PPC_FUNC_IMPL(__imp__sub_83131D70) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D78"))) PPC_WEAK_FUNC(sub_83131D78);
PPC_FUNC_IMPL(__imp__sub_83131D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D88"))) PPC_WEAK_FUNC(sub_83131D88);
PPC_FUNC_IMPL(__imp__sub_83131D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131DA0"))) PPC_WEAK_FUNC(sub_83131DA0);
PPC_FUNC_IMPL(__imp__sub_83131DA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131DA8"))) PPC_WEAK_FUNC(sub_83131DA8);
PPC_FUNC_IMPL(__imp__sub_83131DA8) {
	PPC_FUNC_PROLOGUE();
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131DB0"))) PPC_WEAK_FUNC(sub_83131DB0);
PPC_FUNC_IMPL(__imp__sub_83131DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83131DB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// addi r30,r11,3577
	ctx.r30.s64 = ctx.r11.s64 + 3577;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r4,r30,-35
	ctx.r4.s64 = ctx.r30.s64 + -35;
	// bl 0x8259cc28
	ctx.lr = 0x83131DE4;
	sub_8259CC28(ctx, base);
	// addi r4,r30,-34
	ctx.r4.s64 = ctx.r30.s64 + -34;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8259cc28
	ctx.lr = 0x83131DF4;
	sub_8259CC28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x8259cc28
	ctx.lr = 0x83131E04;
	sub_8259CC28(ctx, base);
	// stb r29,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83131E10"))) PPC_WEAK_FUNC(sub_83131E10);
PPC_FUNC_IMPL(__imp__sub_83131E10) {
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
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3664
	ctx.r9.s64 = ctx.r10.s64 + 3664;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stb r11,76(r3)
	PPC_STORE_U8(ctx.r3.u32 + 76, ctx.r11.u8);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// bl 0x82dd2eb0
	ctx.lr = 0x83131E74;
	sub_82DD2EB0(ctx, base);
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

__attribute__((alias("__imp__sub_83131E8C"))) PPC_WEAK_FUNC(sub_83131E8C);
PPC_FUNC_IMPL(__imp__sub_83131E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83131E90"))) PPC_WEAK_FUNC(sub_83131E90);
PPC_FUNC_IMPL(__imp__sub_83131E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83131E98;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,3664
	ctx.r10.s64 = ctx.r11.s64 + 3664;
	// addi r30,r3,108
	ctx.r30.s64 = ctx.r3.s64 + 108;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83131ed0
	if (cr6.lt) goto loc_83131ED0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83131ED0;
	sub_825952B8(ctx, base);
loc_83131ED0:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,76
	ctx.r29.s64 = ctx.r28.s64 + 76;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83131f04
	if (cr6.lt) goto loc_83131F04;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83131F04;
	sub_825952B8(ctx, base);
loc_83131F04:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83131f30
	if (cr6.lt) goto loc_83131F30;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83131F30;
	sub_825952B8(ctx, base);
loc_83131F30:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,20
	ctx.r29.s64 = ctx.r28.s64 + 20;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83131f5c
	if (cr6.lt) goto loc_83131F5C;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x83131F5C;
	sub_825952B8(ctx, base);
loc_83131F5C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83131F70"))) PPC_WEAK_FUNC(sub_83131F70);
PPC_FUNC_IMPL(__imp__sub_83131F70) {
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
	// bl 0x83131e90
	ctx.lr = 0x83131F90;
	sub_83131E90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83131fa8
	if (cr6.eq) goto loc_83131FA8;
	// bl 0x82416268
	ctx.lr = 0x83131FA4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83131FA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131FC0"))) PPC_WEAK_FUNC(sub_83131FC0);
PPC_FUNC_IMPL(__imp__sub_83131FC0) {
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
	// lis r31,-31750
	ctx.r31.s64 = -2080768000;
	// lwz r3,-29608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -29608);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83132010
	if (!cr6.eq) goto loc_83132010;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,148
	ctx.r4.s64 = 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83131FF8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83132008
	if (cr6.eq) goto loc_83132008;
	// bl 0x83131e10
	ctx.lr = 0x83132004;
	sub_83131E10(ctx, base);
	// b 0x8313200c
	goto loc_8313200C;
loc_83132008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313200C:
	// stw r3,-29608(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29608, ctx.r3.u32);
loc_83132010:
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

__attribute__((alias("__imp__sub_83132024"))) PPC_WEAK_FUNC(sub_83132024);
PPC_FUNC_IMPL(__imp__sub_83132024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132028"))) PPC_WEAK_FUNC(sub_83132028);
PPC_FUNC_IMPL(__imp__sub_83132028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83132030;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83132064;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8259cb28
	ctx.lr = 0x83132078;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x8259cb28
	ctx.lr = 0x8313208C;
	sub_8259CB28(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313209C"))) PPC_WEAK_FUNC(sub_8313209C);
PPC_FUNC_IMPL(__imp__sub_8313209C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831320A0"))) PPC_WEAK_FUNC(sub_831320A0);
PPC_FUNC_IMPL(__imp__sub_831320A0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,-5636(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5636);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r10,-5636(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5636);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r11.u8);
	// stb r11,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// sth r8,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r8.u16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132130"))) PPC_WEAK_FUNC(sub_83132130);
PPC_FUNC_IMPL(__imp__sub_83132130) {
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
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// li r5,46
	ctx.r5.s64 = 46;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-5636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5636);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r11,-5636(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5636);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r3,r6,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stb r30,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r30.u8);
	// stb r30,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r30.u8);
	// stb r30,23(r31)
	PPC_STORE_U8(ctx.r31.u32 + 23, ctx.r30.u8);
	// stb r30,22(r31)
	PPC_STORE_U8(ctx.r31.u32 + 22, ctx.r30.u8);
	// stb r30,25(r31)
	PPC_STORE_U8(ctx.r31.u32 + 25, ctx.r30.u8);
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// stb r30,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r30.u8);
	// stb r30,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r30.u8);
	// sth r30,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r30.u16);
	// sth r8,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r8.u16);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// ld r11,-5684(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + -5684);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r30,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r30.u8);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// bl 0x831cdcf0
	ctx.lr = 0x83132204;
	sub_831CDCF0(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stb r30,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// ori r5,r5,49664
	ctx.r5.u64 = ctx.r5.u64 | 49664;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x831cdcf0
	ctx.lr = 0x83132220;
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

__attribute__((alias("__imp__sub_83132238"))) PPC_WEAK_FUNC(sub_83132238);
PPC_FUNC_IMPL(__imp__sub_83132238) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,-5636(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5636);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r10,-5636(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5636);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r5,r6,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r4,r5,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,23(r3)
	PPC_STORE_U8(ctx.r3.u32 + 23, ctx.r11.u8);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,27(r3)
	PPC_STORE_U8(ctx.r3.u32 + 27, ctx.r11.u8);
	// stb r11,26(r3)
	PPC_STORE_U8(ctx.r3.u32 + 26, ctx.r11.u8);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r11.u16);
	// sth r8,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r8.u16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831322D8"))) PPC_WEAK_FUNC(sub_831322D8);
PPC_FUNC_IMPL(__imp__sub_831322D8) {
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
	// bl 0x83132238
	ctx.lr = 0x831322F4;
	sub_83132238(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// sth r9,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r9.u16);
	// li r5,46
	ctx.r5.s64 = 46;
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r11,-5684(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -5684);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r30,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r30.u8);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// bl 0x831cdcf0
	ctx.lr = 0x83132330;
	sub_831CDCF0(ctx, base);
	// stb r30,115(r31)
	PPC_STORE_U8(ctx.r31.u32 + 115, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83132130
	ctx.lr = 0x8313233C;
	sub_83132130(ctx, base);
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

__attribute__((alias("__imp__sub_83132358"))) PPC_WEAK_FUNC(sub_83132358);
PPC_FUNC_IMPL(__imp__sub_83132358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x83132444
	if (cr6.gt) goto loc_83132444;
	// lis r12,-31981
	ctx.r12.s64 = -2095906816;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9084
	ctx.r12.s64 = ctx.r12.s64 + 9084;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_83132440;
	case 1:
		goto loc_8313241C;
	case 2:
		goto loc_83132428;
	case 3:
		goto loc_83132434;
	case 4:
		goto loc_831323EC;
	case 5:
		goto loc_831323F8;
	case 6:
		goto loc_83132404;
	case 7:
		goto loc_83132410;
	case 8:
		goto loc_831323E0;
	case 9:
		goto loc_831323C8;
	case 10:
		goto loc_831323D4;
	case 11:
		goto loc_831323BC;
	case 12:
		goto loc_831323B0;
	default:
		return;
	}
	// lwz r24,9280(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9280);
	// lwz r24,9244(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9244);
	// lwz r24,9256(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9256);
	// lwz r24,9268(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9268);
	// lwz r24,9196(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9196);
	// lwz r24,9208(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9208);
	// lwz r24,9220(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9220);
	// lwz r24,9232(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9232);
	// lwz r24,9184(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9184);
	// lwz r24,9160(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9160);
	// lwz r24,9172(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9172);
	// lwz r24,9148(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9148);
	// lwz r24,9136(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9136);
loc_831323B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_831323BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_831323C8:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_831323D4:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_831323E0:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_831323EC:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_831323F8:
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83132404:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83132410:
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8313241C:
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83132428:
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83132434:
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_83132440:
	// li r11,12
	ctx.r11.s64 = 12;
loc_83132444:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313244C"))) PPC_WEAK_FUNC(sub_8313244C);
PPC_FUNC_IMPL(__imp__sub_8313244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132450"))) PPC_WEAK_FUNC(sub_83132450);
PPC_FUNC_IMPL(__imp__sub_83132450) {
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
	ctx.lr = 0x83132458;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-5560
	ctx.r11.s64 = ctx.r11.s64 + -5560;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83132498
	if (!cr6.eq) goto loc_83132498;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831324c0
	goto loc_831324C0;
loc_83132498:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x831324b8
	if (!cr6.eq) goto loc_831324B8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831324bc
	if (cr6.eq) goto loc_831324BC;
loc_831324B8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831324BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831324C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831324d8
	if (cr6.eq) goto loc_831324D8;
	// li r3,70
	ctx.r3.s64 = 70;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831324D8:
	// li r10,39
	ctx.r10.s64 = 39;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831324E8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831324e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831324E8;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x83132508;
	sub_83120738(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83132358
	ctx.lr = 0x83132514;
	sub_83132358(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// li r30,37
	ctx.r30.s64 = 37;
	// addi r11,r10,3952
	ctx.r11.s64 = ctx.r10.s64 + 3952;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_83132528:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x83120738
	ctx.lr = 0x8313253C;
	sub_83120738(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// bge cr6,0x83132558
	if (!cr6.lt) goto loc_83132558;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_83132558:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x83132528
	if (!cr0.eq) goto loc_83132528;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_8313256C:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x83132580
	if (cr6.eq) goto loc_83132580;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x83132590
	if (cr6.eq) goto loc_83132590;
loc_83132580:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// blt cr6,0x8313256c
	if (cr6.lt) goto loc_8313256C;
loc_83132590:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bne cr6,0x831325a0
	if (!cr6.eq) goto loc_831325A0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_831325A0:
	// bl 0x83132358
	ctx.lr = 0x831325A4;
	sub_83132358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83745f18
	ctx.lr = 0x831325B0;
	sub_83745F18(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// beq cr6,0x8313265c
	if (cr6.eq) goto loc_8313265C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f0,14564(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14564);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r26,5
	cr6.compare<int32_t>(ctx.r26.s32, 5, xer);
	// lfs f13,3944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3944);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-27164(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-27160(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27160);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bge cr6,0x8313263c
	if (!cr6.lt) goto loc_8313263C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f11,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
loc_8313263C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bge cr6,0x8313264c
	if (!cr6.lt) goto loc_8313264C;
	// li r3,40
	ctx.r3.s64 = 40;
loc_8313264C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,109
	cr6.compare<uint32_t>(ctx.r11.u32, 109, xer);
	// ble cr6,0x8313265c
	if (!cr6.gt) goto loc_8313265C;
	// li r3,109
	ctx.r3.s64 = 109;
loc_8313265C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83132664"))) PPC_WEAK_FUNC(sub_83132664);
PPC_FUNC_IMPL(__imp__sub_83132664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132668"))) PPC_WEAK_FUNC(sub_83132668);
PPC_FUNC_IMPL(__imp__sub_83132668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83132670;
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
	// bl 0x831156e8
	ctx.lr = 0x83132684;
	sub_831156E8(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x83132690;
	sub_8311BF98(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83132450
	ctx.lr = 0x8313269C;
	sub_83132450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831326A4"))) PPC_WEAK_FUNC(sub_831326A4);
PPC_FUNC_IMPL(__imp__sub_831326A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831326A8"))) PPC_WEAK_FUNC(sub_831326A8);
PPC_FUNC_IMPL(__imp__sub_831326A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31981
	ctx.r12.s64 = -2095906816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9940
	ctx.r12.s64 = ctx.r12.s64 + 9940;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83132708;
	case 1:
		goto loc_83132710;
	case 2:
		goto loc_83132720;
	case 3:
		goto loc_83132718;
	case 4:
		goto loc_83132728;
	case 5:
		goto loc_83132748;
	case 6:
		goto loc_83132730;
	case 7:
		goto loc_83132740;
	case 8:
		goto loc_83132738;
	case 9:
		goto loc_83132750;
	case 10:
		goto loc_83132760;
	case 11:
		goto loc_83132758;
	case 12:
		goto loc_83132768;
	default:
		return;
	}
	// lwz r24,9992(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 9992);
	// lwz r24,10000(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10000);
	// lwz r24,10016(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10016);
	// lwz r24,10008(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10008);
	// lwz r24,10024(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10024);
	// lwz r24,10056(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10056);
	// lwz r24,10032(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10032);
	// lwz r24,10048(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10048);
	// lwz r24,10040(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10040);
	// lwz r24,10064(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10064);
	// lwz r24,10080(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10080);
	// lwz r24,10072(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10072);
	// lwz r24,10088(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10088);
loc_83132708:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_83132710:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_83132718:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_83132720:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_83132728:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83132730:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83132738:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_83132740:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83132748:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83132750:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83132758:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83132760:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83132768:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,98
	ctx.r3.s64 = 98;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31981
	ctx.r12.s64 = -2095906816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10136
	ctx.r12.s64 = ctx.r12.s64 + 10136;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8313282C;
	case 1:
		goto loc_83132814;
	case 2:
		goto loc_83132824;
	case 3:
		goto loc_8313281C;
	case 4:
		goto loc_8313280C;
	case 5:
		goto loc_831327F4;
	case 6:
		goto loc_83132804;
	case 7:
		goto loc_831327FC;
	case 8:
		goto loc_831327EC;
	case 9:
		goto loc_831327E4;
	case 10:
		goto loc_831327DC;
	case 11:
		goto loc_831327D4;
	case 12:
		goto loc_831327CC;
	default:
		return;
	}
	// lwz r24,10284(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10284);
	// lwz r24,10260(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10260);
	// lwz r24,10276(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10276);
	// lwz r24,10268(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10268);
	// lwz r24,10252(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10252);
	// lwz r24,10228(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10228);
	// lwz r24,10244(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10244);
	// lwz r24,10236(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10236);
	// lwz r24,10220(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10220);
	// lwz r24,10212(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10212);
	// lwz r24,10204(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10204);
	// lwz r24,10196(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10196);
	// lwz r24,10188(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 10188);
loc_831327CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831327D4:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831327DC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_831327E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_831327EC:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_831327F4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_831327FC:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_83132804:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8313280C:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83132814:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_8313281C:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_83132824:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_8313282C:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132834"))) PPC_WEAK_FUNC(sub_83132834);
PPC_FUNC_IMPL(__imp__sub_83132834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132838"))) PPC_WEAK_FUNC(sub_83132838);
PPC_FUNC_IMPL(__imp__sub_83132838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83132840;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// li r4,70
	ctx.r4.s64 = 70;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x8313287C;
	sub_831CE7D8(ctx, base);
	// addi r5,r30,74
	ctx.r5.s64 = ctx.r30.s64 + 74;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,74
	ctx.r3.s64 = ctx.r31.s64 + 74;
	// bl 0x831ce7d8
	ctx.lr = 0x8313288C;
	sub_831CE7D8(ctx, base);
	// lhz r7,78(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 78);
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r28,3
	ctx.r28.s64 = 3;
	// sth r7,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r7.u16);
loc_831328A0:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x831328AC;
	sub_82ABFDA0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bne 0x831328a0
	if (!cr0.eq) goto loc_831328A0;
	// addi r4,r30,560
	ctx.r4.s64 = ctx.r30.s64 + 560;
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x831328C8;
	sub_831CE980(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r30,632
	ctx.r10.s64 = ctx.r30.s64 + 632;
	// addi r11,r31,647
	ctx.r11.s64 = ctx.r31.s64 + 647;
	// li r8,-11
	ctx.r8.s64 = -11;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lhz r9,608(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 608);
	// sth r9,608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 608, ctx.r9.u16);
	// lwz r7,612(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	// stw r7,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r7.u32);
	// lwz r6,616(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 616);
	// stw r6,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r6.u32);
	// lwz r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r5,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r5.u32);
	// lwz r4,624(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r4,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r4.u32);
	// lbz r3,628(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 628);
	// stb r3,628(r31)
	PPC_STORE_U8(ctx.r31.u32 + 628, ctx.r3.u8);
	// lbz r9,629(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 629);
	// stb r9,629(r31)
	PPC_STORE_U8(ctx.r31.u32 + 629, ctx.r9.u8);
	// lbz r7,630(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 630);
	// stb r7,630(r31)
	PPC_STORE_U8(ctx.r31.u32 + 630, ctx.r7.u8);
	// lwz r6,632(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// stw r6,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r6.u32);
loc_83132924:
	// ld r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 4);
	// stdx r9,r11,r8
	PPC_STORE_U64(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u64);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stb r7,-3(r11)
	PPC_STORE_U8(ctx.r11.u32 + -3, ctx.r7.u8);
	// lbz r6,13(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// stb r6,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r6.u8);
	// lbz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stb r5,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r5.u8);
	// lbzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// lbz r7,18(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 18);
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// lbz r6,19(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 19);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r5,20(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lbz r4,21(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// stb r4,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// lbz r3,22(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// stb r3,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r3.u8);
	// lbz r9,23(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 23);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// lbz r7,24(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
	// lbz r6,25(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// stb r6,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r6.u8);
	// lbz r5,26(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// stb r5,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r5.u8);
	// lbz r4,27(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// stb r4,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r4.u8);
	// lwz r3,28(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r3,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r3.u32);
	// lbz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// stb r9,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r9.u8);
	// lbz r7,33(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// stb r7,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r7.u8);
	// lbz r6,34(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// stb r6,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r6.u8);
	// lbz r5,35(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 35);
	// stb r5,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r5.u8);
	// lbzu r9,36(r10)
	ea = 36 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stb r9,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r9.u8);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bdnz 0x83132924
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83132924;
	// lbz r11,1788(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1788);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1788(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1788, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831329F8"))) PPC_WEAK_FUNC(sub_831329F8);
PPC_FUNC_IMPL(__imp__sub_831329F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83132A00;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,24
	ctx.r24.s64 = 24;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r24,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r24.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r24,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r24.u8);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stb r30,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r30.u8);
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r25,4
	ctx.r25.s64 = 4;
	// li r23,1
	ctx.r23.s64 = 1;
loc_83132A38:
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r27,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83132A50;
	sub_831CDCF0(ctx, base);
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stb r25,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r25.u8);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stb r30,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r30.u8);
	// stb r23,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r23.u8);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bne 0x83132a38
	if (!cr0.eq) goto loc_83132A38;
	// stb r30,1928(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1928, ctx.r30.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r9,r28,3
	ctx.r9.s64 = ctx.r28.s64 + 3;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// addi r8,r28,1929
	ctx.r8.s64 = ctx.r28.s64 + 1929;
	// addi r10,r28,1936
	ctx.r10.s64 = ctx.r28.s64 + 1936;
loc_83132A84:
	// stbx r24,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r24.u8);
	// stbx r30,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r30.u32);
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83132a84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83132A84;
	// stb r23,1948(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1948, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83132AA8"))) PPC_WEAK_FUNC(sub_83132AA8);
PPC_FUNC_IMPL(__imp__sub_83132AA8) {
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
	// bl 0x831329f8
	ctx.lr = 0x83132AC0;
	sub_831329F8(ctx, base);
	// addi r3,r31,1952
	ctx.r3.s64 = ctx.r31.s64 + 1952;
	// bl 0x82d8cd00
	ctx.lr = 0x83132AC8;
	sub_82D8CD00(ctx, base);
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

__attribute__((alias("__imp__sub_83132ADC"))) PPC_WEAK_FUNC(sub_83132ADC);
PPC_FUNC_IMPL(__imp__sub_83132ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132AE0"))) PPC_WEAK_FUNC(sub_83132AE0);
PPC_FUNC_IMPL(__imp__sub_83132AE0) {
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
	// addi r31,r3,1952
	ctx.r31.s64 = ctx.r3.s64 + 1952;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8cd00
	ctx.lr = 0x83132B04;
	sub_82D8CD00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83132838
	ctx.lr = 0x83132B10;
	sub_83132838(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132B28"))) PPC_WEAK_FUNC(sub_83132B28);
PPC_FUNC_IMPL(__imp__sub_83132B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83132B30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83132b44
	if (!cr6.eq) goto loc_83132B44;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// b 0x83132b64
	goto loc_83132B64;
loc_83132B44:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83132b54
	if (!cr6.eq) goto loc_83132B54;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83132b64
	goto loc_83132B64;
loc_83132B54:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x83132b64
	if (cr6.eq) goto loc_83132B64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83132B64:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83132b78
	if (!cr6.eq) goto loc_83132B78;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// b 0x83132b9c
	goto loc_83132B9C;
loc_83132B78:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83132b88
	if (!cr6.eq) goto loc_83132B88;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83132b9c
	goto loc_83132B9C;
loc_83132B88:
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// li r9,255
	ctx.r9.s64 = 255;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 & ctx.r9.u64;
loc_83132B9C:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r4,204
	ctx.r31.s64 = ctx.r4.s64 + 204;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// rlwimi r9,r8,11,14,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x3F800) | (ctx.r9.u64 & 0xFFFFFFFFFFFC07FF);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_83132BB8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83132bb8
	if (!cr6.eq) goto loc_83132BB8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r5,97
	ctx.r5.s64 = 97;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x831cdcf0
	ctx.lr = 0x83132BE8;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r30,97
	cr6.compare<uint32_t>(ctx.r30.u32, 97, xer);
	// ble cr6,0x83132bf4
	if (!cr6.gt) goto loc_83132BF4;
	// li r30,97
	ctx.r30.s64 = 97;
loc_83132BF4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x83132C04;
	sub_831CE980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83132C0C"))) PPC_WEAK_FUNC(sub_83132C0C);
PPC_FUNC_IMPL(__imp__sub_83132C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132C10"))) PPC_WEAK_FUNC(sub_83132C10);
PPC_FUNC_IMPL(__imp__sub_83132C10) {
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
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r31,r11,16592
	ctx.r31.u64 = ctx.r11.u64 | 16592;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83132C3C;
	sub_831CDCF0(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83132C4C;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_83132C68"))) PPC_WEAK_FUNC(sub_83132C68);
PPC_FUNC_IMPL(__imp__sub_83132C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
loc_83132C70:
	// li r10,650
	ctx.r10.s64 = 650;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83132C7C:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,-5156(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r10,14
	ctx.r5.u64 = ctx.r10.u32 & 0x3FFFF;
	// stwx r5,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// bdnz 0x83132c7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83132C7C;
	// addi r9,r9,650
	ctx.r9.s64 = ctx.r9.s64 + 650;
	// cmplwi cr6,r9,53300
	cr6.compare<uint32_t>(ctx.r9.u32, 53300, xer);
	// blt cr6,0x83132c70
	if (cr6.lt) goto loc_83132C70;
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// li r5,164
	ctx.r5.s64 = 164;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,16592
	ctx.r3.s64 = ctx.r3.s64 + 16592;
	// b 0x831cdcf0
	sub_831CDCF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83132CB8"))) PPC_WEAK_FUNC(sub_83132CB8);
PPC_FUNC_IMPL(__imp__sub_83132CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,82
	cr6.compare<uint32_t>(ctx.r4.u32, 82, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addis r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 131072;
	// addi r10,r10,-24472
	ctx.r10.s64 = ctx.r10.s64 + -24472;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r10,r4,650
	ctx.r10.s64 = ctx.r4.s64 * 650;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132CF4"))) PPC_WEAK_FUNC(sub_83132CF4);
PPC_FUNC_IMPL(__imp__sub_83132CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132CF8"))) PPC_WEAK_FUNC(sub_83132CF8);
PPC_FUNC_IMPL(__imp__sub_83132CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,82
	cr6.compare<uint32_t>(ctx.r4.u32, 82, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addis r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 131072;
	// addi r10,r10,-24472
	ctx.r10.s64 = ctx.r10.s64 + -24472;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132D1C"))) PPC_WEAK_FUNC(sub_83132D1C);
PPC_FUNC_IMPL(__imp__sub_83132D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132D20"))) PPC_WEAK_FUNC(sub_83132D20);
PPC_FUNC_IMPL(__imp__sub_83132D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,82
	cr6.compare<uint32_t>(ctx.r4.u32, 82, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r5,650
	cr6.compare<uint32_t>(ctx.r5.u32, 650, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// mulli r11,r4,650
	ctx.r11.s64 = ctx.r4.s64 * 650;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132D44"))) PPC_WEAK_FUNC(sub_83132D44);
PPC_FUNC_IMPL(__imp__sub_83132D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132D48"))) PPC_WEAK_FUNC(sub_83132D48);
PPC_FUNC_IMPL(__imp__sub_83132D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,82
	cr6.compare<uint32_t>(ctx.r4.u32, 82, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,650
	cr6.compare<uint32_t>(ctx.r11.u32, 650, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// addi r11,r11,-24472
	ctx.r11.s64 = ctx.r11.s64 + -24472;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132D70"))) PPC_WEAK_FUNC(sub_83132D70);
PPC_FUNC_IMPL(__imp__sub_83132D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bge cr6,0x83132da8
	if (!cr6.lt) goto loc_83132DA8;
	// addi r11,r4,501
	ctx.r11.s64 = ctx.r4.s64 + 501;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// bge cr6,0x83132da8
	if (!cr6.lt) goto loc_83132DA8;
	// addi r11,r4,500
	ctx.r11.s64 = ctx.r4.s64 + 500;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
loc_83132DA8:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,-5036
	ctx.r10.s64 = ctx.r11.s64 + -5036;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132DB8"))) PPC_WEAK_FUNC(sub_83132DB8);
PPC_FUNC_IMPL(__imp__sub_83132DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bge cr6,0x83132dd0
	if (!cr6.lt) goto loc_83132DD0;
	// addi r11,r4,501
	ctx.r11.s64 = ctx.r4.s64 + 501;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
loc_83132DD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132DD8"))) PPC_WEAK_FUNC(sub_83132DD8);
PPC_FUNC_IMPL(__imp__sub_83132DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,501
	ctx.r11.s64 = ctx.r4.s64 + 501;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83132df4
	if (!cr6.eq) goto loc_83132DF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83132DF4:
	// addi r11,r4,500
	ctx.r11.s64 = ctx.r4.s64 + 500;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi. r11,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83132e58
	if (!cr0.gt) goto loc_83132E58;
loc_83132E20:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bge cr6,0x83132e4c
	if (!cr6.lt) goto loc_83132E4C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83132e50
	goto loc_83132E50;
loc_83132E4C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83132E50:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83132e20
	if (cr6.gt) goto loc_83132E20;
loc_83132E58:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132E6C"))) PPC_WEAK_FUNC(sub_83132E6C);
PPC_FUNC_IMPL(__imp__sub_83132E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83132E70"))) PPC_WEAK_FUNC(sub_83132E70);
PPC_FUNC_IMPL(__imp__sub_83132E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83132E78;
	__savegprlr_29(ctx, base);
	// lwz r30,2008(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// cmplwi cr6,r30,500
	cr6.compare<uint32_t>(ctx.r30.u32, 500, xer);
	// beq cr6,0x83133030
	if (cr6.eq) goto loc_83133030;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x83132ee0
	if (!cr6.lt) goto loc_83132EE0;
	// subfic r7,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r11.s64;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// blt cr6,0x83132ec4
	if (cr6.lt) goto loc_83132EC4;
	// addi r9,r11,501
	ctx.r9.s64 = ctx.r11.s64 + 501;
	// addi r8,r11,502
	ctx.r8.s64 = ctx.r11.s64 + 502;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwzx r8,r6,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
loc_83132EC4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x83132ed8
	if (!cr6.lt) goto loc_83132ED8;
	// addi r11,r11,501
	ctx.r11.s64 = ctx.r11.s64 + 501;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
loc_83132ED8:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_83132EE0:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83132f28
	if (!cr6.eq) goto loc_83132F28;
	// addi r11,r4,501
	ctx.r11.s64 = ctx.r4.s64 + 501;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83132fe4
	if (cr6.eq) goto loc_83132FE4;
	// addi r10,r4,500
	ctx.r10.s64 = ctx.r4.s64 + 500;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x83132fe4
	if (!cr6.gt) goto loc_83132FE4;
loc_83132F28:
	// addi r10,r4,500
	ctx.r10.s64 = ctx.r4.s64 + 500;
	// addi r11,r4,501
	ctx.r11.s64 = ctx.r4.s64 + 501;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83132fa0
	if (!cr0.gt) goto loc_83132FA0;
loc_83132F68:
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r29,r5
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, xer);
	// bge cr6,0x83132f94
	if (!cr6.lt) goto loc_83132F94;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83132f98
	goto loc_83132F98;
loc_83132F94:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83132F98:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83132f68
	if (cr6.gt) goto loc_83132F68;
loc_83132FA0:
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// bge cr6,0x83132fe4
	if (!cr6.lt) goto loc_83132FE4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_83132FCC:
	// lwzu r8,-4(r9)
	ea = -4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,2008(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x83132fcc
	if (cr6.lt) goto loc_83132FCC;
loc_83132FE4:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,2008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,2008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2008, ctx.r9.u32);
	// bge cr6,0x83133030
	if (!cr6.lt) goto loc_83133030;
	// addi r11,r4,499
	ctx.r11.s64 = ctx.r4.s64 + 499;
	// subfic r10,r4,1
	xer.ca = ctx.r4.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r4.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83133020:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83133020
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83133020;
loc_83133030:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83133034"))) PPC_WEAK_FUNC(sub_83133034);
PPC_FUNC_IMPL(__imp__sub_83133034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133038"))) PPC_WEAK_FUNC(sub_83133038);
PPC_FUNC_IMPL(__imp__sub_83133038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r5,r9,0,6,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFFFF) | (ctx.r5.u64 & 0xFFFFFFFFFC000000);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,6,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FC0000) | (ctx.r10.u64 & 0xFFFFFFFFFC03FFFF);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r7,r9,0,14,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3F000) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0FFF);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r5,r6,0,20,25
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFC0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFF03F);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r9,r8,0,12,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFF00000);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r8,r7,0,12,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFF000FF);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stb r6,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831330D4"))) PPC_WEAK_FUNC(sub_831330D4);
PPC_FUNC_IMPL(__imp__sub_831330D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831330D8"))) PPC_WEAK_FUNC(sub_831330D8);
PPC_FUNC_IMPL(__imp__sub_831330D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,-4948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4948);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,-4948(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4948);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133110"))) PPC_WEAK_FUNC(sub_83133110);
PPC_FUNC_IMPL(__imp__sub_83133110) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ld r10,-4996(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4996);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// lwz r10,-4948(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4948);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r8,r10,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r10,-4948(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4948);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313315C"))) PPC_WEAK_FUNC(sub_8313315C);
PPC_FUNC_IMPL(__imp__sub_8313315C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133160"))) PPC_WEAK_FUNC(sub_83133160);
PPC_FUNC_IMPL(__imp__sub_83133160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133174"))) PPC_WEAK_FUNC(sub_83133174);
PPC_FUNC_IMPL(__imp__sub_83133174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133178"))) PPC_WEAK_FUNC(sub_83133178);
PPC_FUNC_IMPL(__imp__sub_83133178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83133180;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x8313328c
	if (cr6.lt) goto loc_8313328C;
	// beq cr6,0x83133268
	if (cr6.eq) goto loc_83133268;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83133364
	if (!cr6.lt) goto loc_83133364;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83103d20
	ctx.lr = 0x831331A8;
	sub_83103D20(ctx, base);
	// rldicl r11,r3,61,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83133230
	if (cr6.eq) goto loc_83133230;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_831331C0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83103d60
	ctx.lr = 0x831331C8;
	sub_83103D60(ctx, base);
	// ldx r11,r3,r29
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r29.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311c790
	ctx.lr = 0x831331EC;
	sub_8311C790(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r7,14,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 14) & 0x3FFF;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne 0x831331c0
	if (!cr0.eq) goto loc_831331C0;
loc_83133230:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83103e98
	ctx.lr = 0x83133238;
	sub_83103E98(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,-7
	ctx.r9.s64 = ctx.r11.s64 + -7;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83133268:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83103bb8
	ctx.lr = 0x83133270;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83133364
	if (!cr6.eq) goto loc_83133364;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8313328C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-4924
	ctx.r30.s64 = ctx.r11.s64 + -4924;
	// lwz r4,-4924(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4924);
	// bl 0x837b0c10
	ctx.lr = 0x831332A0;
	sub_837B0C10(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_831332B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831332b4
	if (!cr6.eq) goto loc_831332B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x831332D8;
	sub_825A1EB8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x831332ec
	if (!cr6.lt) goto loc_831332EC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_831332EC:
	// bl 0x83104018
	ctx.lr = 0x831332F0;
	sub_83104018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83133340
	if (cr6.eq) goto loc_83133340;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x83133318
	if (!cr6.lt) goto loc_83133318;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_83133318:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83104938
	ctx.lr = 0x83133320;
	sub_83104938(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x83133328;
	sub_83103B18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x83133338;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83133340:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x8313335c
	if (!cr6.eq) goto loc_8313335C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8313335C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x83133364;
	sub_8387E8E0(ctx, base);
loc_83133364:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313336C"))) PPC_WEAK_FUNC(sub_8313336C);
PPC_FUNC_IMPL(__imp__sub_8313336C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133370"))) PPC_WEAK_FUNC(sub_83133370);
PPC_FUNC_IMPL(__imp__sub_83133370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83133378;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x83133404
	if (!cr6.eq) goto loc_83133404;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x831333c4
	if (cr6.eq) goto loc_831333C4;
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
	ctx.lr = 0x831333BC;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_831333C4:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83133404
	if (!cr6.gt) goto loc_83133404;
	// addi r31,r28,16
	ctx.r31.s64 = ctx.r28.s64 + 16;
loc_831333D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// blt cr6,0x831333f0
	if (cr6.lt) goto loc_831333F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x835977d8
	ctx.lr = 0x831333F0;
	sub_835977D8(ctx, base);
loc_831333F0:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831333d8
	if (cr6.lt) goto loc_831333D8;
loc_83133404:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313340C"))) PPC_WEAK_FUNC(sub_8313340C);
PPC_FUNC_IMPL(__imp__sub_8313340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133410"))) PPC_WEAK_FUNC(sub_83133410);
PPC_FUNC_IMPL(__imp__sub_83133410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,356
	ctx.r10.s64 = ctx.r3.s64 + 356;
loc_83133418:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// beq cr6,0x83133438
	if (cr6.eq) goto loc_83133438;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// blt cr6,0x83133418
	if (cr6.lt) goto loc_83133418;
	// blr 
	return;
loc_83133438:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,356(r11)
	PPC_STORE_U32(ctx.r11.u32 + 356, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,360(r11)
	PPC_STORE_U32(ctx.r11.u32 + 360, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133454"))) PPC_WEAK_FUNC(sub_83133454);
PPC_FUNC_IMPL(__imp__sub_83133454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133458"))) PPC_WEAK_FUNC(sub_83133458);
PPC_FUNC_IMPL(__imp__sub_83133458) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r10,-4736(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4736);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133488"))) PPC_WEAK_FUNC(sub_83133488);
PPC_FUNC_IMPL(__imp__sub_83133488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83133490;
	__savegprlr_28(ctx, base);
	// li r10,200
	ctx.r10.s64 = 200;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addis r11,r3,7
	ctx.r11.s64 = ctx.r3.s64 + 458752;
	// ori r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 65535;
	// addi r11,r11,-14772
	ctx.r11.s64 = ctx.r11.s64 + -14772;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// li r29,255
	ctx.r29.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lis r31,-31772
	ctx.r31.s64 = -2082209792;
	// addi r9,r10,-4668
	ctx.r9.s64 = ctx.r10.s64 + -4668;
loc_831334C4:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// beq cr6,0x831334f8
	if (cr6.eq) goto loc_831334F8;
	// lwz r3,-12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
loc_831334D8:
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, xer);
	// beq cr6,0x831334f0
	if (cr6.eq) goto loc_831334F0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x831334d8
	if (!cr6.eq) goto loc_831334D8;
loc_831334F0:
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x83133548
	if (!cr6.eq) goto loc_83133548;
loc_831334F8:
	// stw r29,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r29.u32);
	// ld r10,-4732(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + -4732);
	// std r10,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r10.u64);
	// lwz r10,-4684(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4684);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r5,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,-4684(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4684);
	// rlwimi r3,r10,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// sth r6,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r6.u16);
	// sth r7,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r7.u16);
	// lwz r10,-29164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29164);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_83133548:
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bdnz 0x831334c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831334C4;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83133554"))) PPC_WEAK_FUNC(sub_83133554);
PPC_FUNC_IMPL(__imp__sub_83133554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133558"))) PPC_WEAK_FUNC(sub_83133558);
PPC_FUNC_IMPL(__imp__sub_83133558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83133560;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,29069
	ctx.r9.u64 = ctx.r10.u64 | 29069;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x83133590
	if (!cr6.lt) goto loc_83133590;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,15820
	ctx.r3.s64 = ctx.r11.s64 + 15820;
	// bl 0x831cc150
	ctx.lr = 0x83133590;
	sub_831CC150(ctx, base);
loc_83133590:
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x831335a0
	if (!cr6.lt) goto loc_831335A0;
	// li r10,8
	ctx.r10.s64 = 8;
loc_831335A0:
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x831335b8
	if (!cr6.lt) goto loc_831335B8;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x831335b8
	if (cr6.gt) goto loc_831335B8;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_831335B8:
	// li r27,2
	ctx.r27.s64 = 2;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x831335D8;
	sub_82595718(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83133620
	if (cr6.eq) goto loc_83133620;
loc_83133600:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83133610
	if (cr6.eq) goto loc_83133610;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
loc_83133610:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83133600
	if (!cr6.eq) goto loc_83133600;
loc_83133620:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bgt cr6,0x831336a4
	if (cr6.gt) goto loc_831336A4;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83133658
	if (cr6.eq) goto loc_83133658;
loc_83133638:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83133648
	if (cr6.eq) goto loc_83133648;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_83133648:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83133638
	if (!cr6.eq) goto loc_83133638;
loc_83133658:
	// subf. r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8313367c
	if (cr0.eq) goto loc_8313367C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83133668:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83133674
	if (cr6.eq) goto loc_83133674;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83133674:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83133668
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83133668;
loc_8313367C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83133730
	if (cr6.eq) goto loc_83133730;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_8313368C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83133698
	if (cr6.eq) goto loc_83133698;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_83133698:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8313368c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8313368C;
	// b 0x83133730
	goto loc_83133730;
loc_831336A4:
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x831336d4
	if (cr6.eq) goto loc_831336D4;
loc_831336B4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831336c4
	if (cr6.eq) goto loc_831336C4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_831336C4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x831336b4
	if (!cr6.eq) goto loc_831336B4;
loc_831336D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8313370c
	if (cr6.eq) goto loc_8313370C;
loc_831336EC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831336fc
	if (cr6.eq) goto loc_831336FC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_831336FC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x831336ec
	if (!cr6.eq) goto loc_831336EC;
loc_8313370C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83133730
	if (cr6.eq) goto loc_83133730;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8313371C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83133728
	if (cr6.eq) goto loc_83133728;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83133728:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8313371c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8313371C;
loc_83133730:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83133748
	if (cr6.eq) goto loc_83133748;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83133748;
	sub_825952B8(ctx, base);
loc_83133748:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83133760"))) PPC_WEAK_FUNC(sub_83133760);
PPC_FUNC_IMPL(__imp__sub_83133760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83133768;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x83133790
	if (cr6.gt) goto loc_83133790;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83133558
	ctx.lr = 0x83133790;
	sub_83133558(ctx, base);
loc_83133790:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x831337ac
	if (cr6.gt) goto loc_831337AC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_831337AC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831337e0
	if (!cr6.eq) goto loc_831337E0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,2020
	ctx.r4.s64 = 2020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x831337D8;
	sub_82595718(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
loc_831337E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831337fc
	if (cr6.eq) goto loc_831337FC;
	// li r5,2020
	ctx.r5.s64 = 2020;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x831337FC;
	sub_831CE980(ctx, base);
loc_831337FC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83133810"))) PPC_WEAK_FUNC(sub_83133810);
PPC_FUNC_IMPL(__imp__sub_83133810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83133818;
	__savegprlr_28(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f4a360
	ctx.lr = 0x8313382C;
	sub_82F4A360(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ae5aa8
	ctx.lr = 0x83133838;
	sub_82AE5AA8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838a2b30
	ctx.lr = 0x83133844;
	sub_838A2B30(ctx, base);
	// addi r28,r31,1144
	ctx.r28.s64 = ctx.r31.s64 + 1144;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r30,r11,-29164
	ctx.r30.s64 = ctx.r11.s64 + -29164;
loc_83133858:
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83133870
	if (cr6.eq) goto loc_83133870;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8313389c
	goto loc_8313389C;
loc_83133870:
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83133888
	if (cr6.eq) goto loc_83133888;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8313389c
	goto loc_8313389C;
loc_83133888:
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_8313389C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831338c4
	if (!cr6.eq) goto loc_831338C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83133760
	ctx.lr = 0x831338B4;
	sub_83133760(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,2020
	ctx.r31.s64 = ctx.r31.s64 + 2020;
	// cmplwi cr6,r29,200
	cr6.compare<uint32_t>(ctx.r29.u32, 200, xer);
	// blt cr6,0x83133858
	if (cr6.lt) goto loc_83133858;
loc_831338C4:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83133760
	ctx.lr = 0x831338D0;
	sub_83133760(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,200
	cr6.compare<uint32_t>(ctx.r10.u32, 200, xer);
	// ble cr6,0x83133914
	if (!cr6.gt) goto loc_83133914;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83133914
	if (cr6.eq) goto loc_83133914;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// subfc r8,r9,r11
	xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r5,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r10.s64;
	// and r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 & ctx.r11.u64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
loc_83133914:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831339b8
	if (cr6.eq) goto loc_831339B8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83133924:
	// cmplwi cr6,r31,200
	cr6.compare<uint32_t>(ctx.r31.u32, 200, xer);
	// bge cr6,0x831339b8
	if (!cr6.lt) goto loc_831339B8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8313394c
	if (cr6.eq) goto loc_8313394C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8313394c
	if (cr6.eq) goto loc_8313394C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8313394C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq cr6,0x83133974
	if (cr6.eq) goto loc_83133974;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83133974
	if (cr6.eq) goto loc_83133974;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8313397c
	if (!cr6.eq) goto loc_8313397C;
loc_83133974:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x83133980
	goto loc_83133980;
loc_8313397C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83133980:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83133990
	if (cr6.gt) goto loc_83133990;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_83133990:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ae5aa8
	ctx.lr = 0x831339A4;
	sub_82AE5AA8(ctx, base);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2020
	ctx.r30.s64 = ctx.r30.s64 + 2020;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x83133924
	if (cr6.lt) goto loc_83133924;
loc_831339B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8344cfa0
	ctx.lr = 0x831339C0;
	sub_8344CFA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x831339D4;
	sub_825952B8(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831339DC"))) PPC_WEAK_FUNC(sub_831339DC);
PPC_FUNC_IMPL(__imp__sub_831339DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831339E0"))) PPC_WEAK_FUNC(sub_831339E0);
PPC_FUNC_IMPL(__imp__sub_831339E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831339E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x831339FC;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r25,4
	ctx.r28.s64 = ctx.r25.s64 + 4;
loc_83133A08:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83133A0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312db38
	ctx.lr = 0x83133A18;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83133b08
	if (cr6.eq) goto loc_83133B08;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311bcc0
	ctx.lr = 0x83133A30;
	sub_8311BCC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83133b08
	if (cr6.eq) goto loc_83133B08;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r7,r31,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bne cr6,0x83133a64
	if (!cr6.eq) goto loc_83133A64;
	// xor r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r31.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83133a68
	if (cr6.eq) goto loc_83133A68;
loc_83133A64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83133A68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83133aa8
	if (cr6.eq) goto loc_83133AA8;
	// xor r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// rlwinm r6,r11,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83133a98
	if (!cr6.eq) goto loc_83133A98;
	// xor r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r30.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83133a9c
	if (cr6.eq) goto loc_83133A9C;
loc_83133A98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83133A9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83133b30
	if (!cr6.eq) goto loc_83133B30;
loc_83133AA8:
	// rlwinm r11,r30,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x83133ac8
	if (!cr6.eq) goto loc_83133AC8;
	// xor r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83133acc
	if (cr6.eq) goto loc_83133ACC;
loc_83133AC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83133ACC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83133b08
	if (cr6.eq) goto loc_83133B08;
	// rlwinm r11,r8,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x83133af8
	if (!cr6.eq) goto loc_83133AF8;
	// xor r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83133afc
	if (cr6.eq) goto loc_83133AFC;
loc_83133AF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83133AFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83133b30
	if (!cr6.eq) goto loc_83133B30;
loc_83133B08:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x83133a0c
	if (cr6.lt) goto loc_83133A0C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(ctx.r26.u32, 16, xer);
	// blt cr6,0x83133a08
	if (cr6.lt) goto loc_83133A08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83133B30:
	// rlwinm r11,r26,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83133B44"))) PPC_WEAK_FUNC(sub_83133B44);
PPC_FUNC_IMPL(__imp__sub_83133B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133B48"))) PPC_WEAK_FUNC(sub_83133B48);
PPC_FUNC_IMPL(__imp__sub_83133B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_83133B50:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,27,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1F;
	// cmplwi cr6,r9,31
	cr6.compare<uint32_t>(ctx.r9.u32, 31, xer);
	// beq cr6,0x83133b80
	if (cr6.eq) goto loc_83133B80;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x83133b80
	if (cr6.eq) goto loc_83133B80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83133b50
	if (cr6.lt) goto loc_83133B50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83133B80:
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bne cr6,0x83133b94
	if (!cr6.eq) goto loc_83133B94;
	// li r11,31
	ctx.r11.s64 = 31;
loc_83133B94:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// rlwimi r9,r11,5,22,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x3E0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC1F);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133BA8"))) PPC_WEAK_FUNC(sub_83133BA8);
PPC_FUNC_IMPL(__imp__sub_83133BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x83133bbc
	if (!cr6.eq) goto loc_83133BBC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r3,r11,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// blr 
	return;
loc_83133BBC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83133bcc
	if (!cr6.eq) goto loc_83133BCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83133BCC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133BDC"))) PPC_WEAK_FUNC(sub_83133BDC);
PPC_FUNC_IMPL(__imp__sub_83133BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133BE0"))) PPC_WEAK_FUNC(sub_83133BE0);
PPC_FUNC_IMPL(__imp__sub_83133BE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,98
	ctx.r3.s64 = ctx.r3.s64 + 98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133BE8"))) PPC_WEAK_FUNC(sub_83133BE8);
PPC_FUNC_IMPL(__imp__sub_83133BE8) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r10,r11,5
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFF;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83133C50;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,98
	ctx.r3.s64 = ctx.r31.s64 + 98;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83133C60;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// li r5,46
	ctx.r5.s64 = 46;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83133C70;
	sub_831CDCF0(ctx, base);
	// sth r30,190(r31)
	PPC_STORE_U16(ctx.r31.u32 + 190, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_83133C90"))) PPC_WEAK_FUNC(sub_83133C90);
PPC_FUNC_IMPL(__imp__sub_83133C90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83123720
	ctx.lr = 0x83133CB4;
	sub_83123720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x83133CC4;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_83133CE0"))) PPC_WEAK_FUNC(sub_83133CE0);
PPC_FUNC_IMPL(__imp__sub_83133CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133CF0"))) PPC_WEAK_FUNC(sub_83133CF0);
PPC_FUNC_IMPL(__imp__sub_83133CF0) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,7004
	ctx.r10.s64 = ctx.r11.s64 + 7004;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x83133D1C;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83133d3c
	if (cr6.eq) goto loc_83133D3C;
	// bl 0x82595188
	ctx.lr = 0x83133D2C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83133D3C;
	sub_825952B8(ctx, base);
loc_83133D3C:
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

__attribute__((alias("__imp__sub_83133D58"))) PPC_WEAK_FUNC(sub_83133D58);
PPC_FUNC_IMPL(__imp__sub_83133D58) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,7016
	ctx.r10.s64 = ctx.r11.s64 + 7016;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x83133D84;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83133da4
	if (cr6.eq) goto loc_83133DA4;
	// bl 0x82595188
	ctx.lr = 0x83133D94;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83133DA4;
	sub_825952B8(ctx, base);
loc_83133DA4:
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

__attribute__((alias("__imp__sub_83133DC0"))) PPC_WEAK_FUNC(sub_83133DC0);
PPC_FUNC_IMPL(__imp__sub_83133DC0) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,7028
	ctx.r10.s64 = ctx.r11.s64 + 7028;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x83133DEC;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83133e0c
	if (cr6.eq) goto loc_83133E0C;
	// bl 0x82595188
	ctx.lr = 0x83133DFC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83133E0C;
	sub_825952B8(ctx, base);
loc_83133E0C:
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

__attribute__((alias("__imp__sub_83133E28"))) PPC_WEAK_FUNC(sub_83133E28);
PPC_FUNC_IMPL(__imp__sub_83133E28) {
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
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,7040
	ctx.r10.s64 = ctx.r11.s64 + 7040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83524210
	ctx.lr = 0x83133E54;
	sub_83524210(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83133e74
	if (cr6.eq) goto loc_83133E74;
	// bl 0x82595188
	ctx.lr = 0x83133E64;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83133E74;
	sub_825952B8(ctx, base);
loc_83133E74:
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

__attribute__((alias("__imp__sub_83133E90"))) PPC_WEAK_FUNC(sub_83133E90);
PPC_FUNC_IMPL(__imp__sub_83133E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133EA8"))) PPC_WEAK_FUNC(sub_83133EA8);
PPC_FUNC_IMPL(__imp__sub_83133EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// ld r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 44);
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lhz r11,-8(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x83133ed8
	if (cr6.eq) goto loc_83133ED8;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
loc_83133ED8:
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133EF0"))) PPC_WEAK_FUNC(sub_83133EF0);
PPC_FUNC_IMPL(__imp__sub_83133EF0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r11.u8);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133F38"))) PPC_WEAK_FUNC(sub_83133F38);
PPC_FUNC_IMPL(__imp__sub_83133F38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133F48"))) PPC_WEAK_FUNC(sub_83133F48);
PPC_FUNC_IMPL(__imp__sub_83133F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83133F50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82efe980
	ctx.lr = 0x83133F5C;
	sub_82EFE980(ctx, base);
	// bl 0x82efe820
	ctx.lr = 0x83133F60;
	sub_82EFE820(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// li r31,30
	ctx.r31.s64 = 30;
	// addi r11,r11,6152
	ctx.r11.s64 = ctx.r11.s64 + 6152;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83133F74:
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82efe830
	ctx.lr = 0x83133F80;
	sub_82EFE830(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83133f74
	if (!cr0.eq) goto loc_83133F74;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x83147858
	ctx.lr = 0x83133F90;
	sub_83147858(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83133F94;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83133FA4"))) PPC_WEAK_FUNC(sub_83133FA4);
PPC_FUNC_IMPL(__imp__sub_83133FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83133FA8"))) PPC_WEAK_FUNC(sub_83133FA8);
PPC_FUNC_IMPL(__imp__sub_83133FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83133FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82efe980
	ctx.lr = 0x83133FBC;
	sub_82EFE980(ctx, base);
	// bl 0x82efe820
	ctx.lr = 0x83133FC0;
	sub_82EFE820(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// li r31,119
	ctx.r31.s64 = 119;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83133FD4:
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82efe830
	ctx.lr = 0x83133FE0;
	sub_82EFE830(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83133fd4
	if (!cr0.eq) goto loc_83133FD4;
	// addi r3,r29,56
	ctx.r3.s64 = ctx.r29.s64 + 56;
	// bl 0x83147858
	ctx.lr = 0x83133FF0;
	sub_83147858(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83133FF4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83134020
	if (cr6.eq) goto loc_83134020;
	// bl 0x831156e8
	ctx.lr = 0x83134000;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311a4c8
	ctx.lr = 0x83134008;
	sub_8311A4C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8313400C;
	sub_831156E8(ctx, base);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x8311c7d0
	ctx.lr = 0x83134014;
	sub_8311C7D0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83134018;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_83134020:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83134028"))) PPC_WEAK_FUNC(sub_83134028);
PPC_FUNC_IMPL(__imp__sub_83134028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83134030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831340b0
	if (cr6.eq) goto loc_831340B0;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// bl 0x82efe980
	ctx.lr = 0x8313404C;
	sub_82EFE980(ctx, base);
	// bl 0x82efe820
	ctx.lr = 0x83134050;
	sub_82EFE820(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r30,119
	ctx.r30.s64 = 119;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_83134064:
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82efe830
	ctx.lr = 0x83134070;
	sub_82EFE830(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83134064
	if (!cr0.eq) goto loc_83134064;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x83147858
	ctx.lr = 0x83134080;
	sub_83147858(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83134084;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831340b0
	if (cr6.eq) goto loc_831340B0;
	// bl 0x831156e8
	ctx.lr = 0x83134090;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311a4c8
	ctx.lr = 0x83134098;
	sub_8311A4C8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8313409C;
	sub_831156E8(ctx, base);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x8311c7d0
	ctx.lr = 0x831340A4;
	sub_8311C7D0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x831340A8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831340B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831340B8"))) PPC_WEAK_FUNC(sub_831340B8);
PPC_FUNC_IMPL(__imp__sub_831340B8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831340C0"))) PPC_WEAK_FUNC(sub_831340C0);
PPC_FUNC_IMPL(__imp__sub_831340C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-13652(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13652);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x831341c0
	if (cr6.gt) goto loc_831341C0;
	// lis r12,-31981
	ctx.r12.s64 = -2095906816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16620
	ctx.r12.s64 = ctx.r12.s64 + 16620;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83134138;
	case 1:
		goto loc_83134140;
	case 2:
		goto loc_83134148;
	case 3:
		goto loc_83134150;
	case 4:
		goto loc_83134158;
	case 5:
		goto loc_83134160;
	case 6:
		goto loc_83134168;
	case 7:
		goto loc_83134170;
	case 8:
		goto loc_831341C0;
	case 9:
		goto loc_83134178;
	case 10:
		goto loc_83134180;
	case 11:
		goto loc_83134188;
	case 12:
		goto loc_83134190;
	case 13:
		goto loc_83134198;
	case 14:
		goto loc_831341A0;
	case 15:
		goto loc_831341A8;
	case 16:
		goto loc_831341B0;
	case 17:
		goto loc_831341C0;
	case 18:
		goto loc_831341B8;
	default:
		return;
	}
	// lwz r24,16696(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16696);
	// lwz r24,16704(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16704);
	// lwz r24,16712(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16712);
	// lwz r24,16720(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16720);
	// lwz r24,16728(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16728);
	// lwz r24,16736(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16736);
	// lwz r24,16744(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16744);
	// lwz r24,16752(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16752);
	// lwz r24,16832(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16832);
	// lwz r24,16760(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16760);
	// lwz r24,16768(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16768);
	// lwz r24,16776(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16776);
	// lwz r24,16784(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16784);
	// lwz r24,16792(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16792);
	// lwz r24,16800(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16800);
	// lwz r24,16808(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16808);
	// lwz r24,16816(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16816);
	// lwz r24,16832(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16832);
	// lwz r24,16824(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16824);
loc_83134138:
	// addi r3,r4,444
	ctx.r3.s64 = ctx.r4.s64 + 444;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134140:
	// addi r3,r4,678
	ctx.r3.s64 = ctx.r4.s64 + 678;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134148:
	// addi r3,r4,1108
	ctx.r3.s64 = ctx.r4.s64 + 1108;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134150:
	// addi r3,r4,374
	ctx.r3.s64 = ctx.r4.s64 + 374;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134158:
	// addi r3,r4,24
	ctx.r3.s64 = ctx.r4.s64 + 24;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134160:
	// addi r3,r4,304
	ctx.r3.s64 = ctx.r4.s64 + 304;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134168:
	// addi r3,r4,968
	ctx.r3.s64 = ctx.r4.s64 + 968;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134170:
	// addi r3,r4,1328
	ctx.r3.s64 = ctx.r4.s64 + 1328;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134178:
	// addi r3,r4,584
	ctx.r3.s64 = ctx.r4.s64 + 584;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134180:
	// addi r3,r4,94
	ctx.r3.s64 = ctx.r4.s64 + 94;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134188:
	// addi r3,r4,1178
	ctx.r3.s64 = ctx.r4.s64 + 1178;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134190:
	// addi r3,r4,164
	ctx.r3.s64 = ctx.r4.s64 + 164;
	// b 0x831341c4
	goto loc_831341C4;
loc_83134198:
	// addi r3,r4,1038
	ctx.r3.s64 = ctx.r4.s64 + 1038;
	// b 0x831341c4
	goto loc_831341C4;
loc_831341A0:
	// addi r3,r4,898
	ctx.r3.s64 = ctx.r4.s64 + 898;
	// b 0x831341c4
	goto loc_831341C4;
loc_831341A8:
	// addi r3,r4,758
	ctx.r3.s64 = ctx.r4.s64 + 758;
	// b 0x831341c4
	goto loc_831341C4;
loc_831341B0:
	// addi r3,r4,514
	ctx.r3.s64 = ctx.r4.s64 + 514;
	// b 0x831341c4
	goto loc_831341C4;
loc_831341B8:
	// addi r3,r4,1258
	ctx.r3.s64 = ctx.r4.s64 + 1258;
	// b 0x831341c4
	goto loc_831341C4;
loc_831341C0:
	// addi r3,r4,234
	ctx.r3.s64 = ctx.r4.s64 + 234;
loc_831341C4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r3,r4,234
	ctx.r3.s64 = ctx.r4.s64 + 234;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831341D8"))) PPC_WEAK_FUNC(sub_831341D8);
PPC_FUNC_IMPL(__imp__sub_831341D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831341E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,20
	ctx.r29.s64 = 20;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addis r26,r11,237
	ctx.r26.s64 = ctx.r11.s64 + 15532032;
	// addis r25,r11,237
	ctx.r25.s64 = ctx.r11.s64 + 15532032;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r26,r26,13408
	ctx.r26.s64 = ctx.r26.s64 + 13408;
	// addi r25,r25,13632
	ctx.r25.s64 = ctx.r25.s64 + 13632;
	// bl 0x83120738
	ctx.lr = 0x83134214;
	sub_83120738(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x83120738
	ctx.lr = 0x83134230;
	sub_83120738(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
	// bl 0x83120738
	ctx.lr = 0x8313424C;
	sub_83120738(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// blt cr6,0x83134270
	if (cr6.lt) goto loc_83134270;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// bge cr6,0x8313427c
	if (!cr6.lt) goto loc_8313427C;
loc_83134270:
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x8313427C;
	sub_83121088(ctx, base);
loc_8313427C:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x83134294;
	sub_83120738(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83120738
	ctx.lr = 0x831342AC;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x831342cc
	if (!cr6.lt) goto loc_831342CC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x83134308
	goto loc_83134308;
loc_831342CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83120738
	ctx.lr = 0x831342D4;
	sub_83120738(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83120738
	ctx.lr = 0x831342EC;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x8313431c
	if (!cr6.lt) goto loc_8313431C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83134308:
	// bl 0x83120738
	ctx.lr = 0x8313430C;
	sub_83120738(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83121088
	ctx.lr = 0x8313431C;
	sub_83121088(ctx, base);
loc_8313431C:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83134320:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831236a0
	ctx.lr = 0x8313432C;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x8313433C;
	sub_83120738(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x83134350;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x83134360;
	sub_83120738(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x831236a0
	ctx.lr = 0x83134374;
	sub_831236A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x83134384;
	sub_83120738(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// bge cr6,0x831343a8
	if (!cr6.lt) goto loc_831343A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831236a0
	ctx.lr = 0x831343A0;
	sub_831236A0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x831343c0
	goto loc_831343C0;
loc_831343A8:
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x831343cc
	if (!cr6.lt) goto loc_831343CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831236a0
	ctx.lr = 0x831343BC;
	sub_831236A0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_831343C0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x831343CC;
	sub_83121088(ctx, base);
loc_831343CC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x83134320
	if (cr6.lt) goto loc_83134320;
	// li r29,12
	ctx.r29.s64 = 12;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x831343F0;
	sub_83120738(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83120738
	ctx.lr = 0x83134408;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x83134428
	if (!cr6.lt) goto loc_83134428;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x83134464
	goto loc_83134464;
loc_83134428:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83120738
	ctx.lr = 0x83134430;
	sub_83120738(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83120738
	ctx.lr = 0x83134448;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bge cr6,0x83134478
	if (!cr6.lt) goto loc_83134478;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_83134464:
	// bl 0x83120738
	ctx.lr = 0x83134468;
	sub_83120738(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83121088
	ctx.lr = 0x83134478;
	sub_83121088(ctx, base);
loc_83134478:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8313447C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123650
	ctx.lr = 0x83134488;
	sub_83123650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x83134498;
	sub_83120738(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83123650
	ctx.lr = 0x831344AC;
	sub_83123650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x831344BC;
	sub_83120738(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x83123650
	ctx.lr = 0x831344D0;
	sub_83123650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x831344E0;
	sub_83120738(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// bge cr6,0x83134504
	if (!cr6.lt) goto loc_83134504;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123650
	ctx.lr = 0x831344FC;
	sub_83123650(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x8313451c
	goto loc_8313451C;
loc_83134504:
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x83134528
	if (!cr6.lt) goto loc_83134528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123650
	ctx.lr = 0x83134518;
	sub_83123650(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8313451C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x83134528;
	sub_83121088(ctx, base);
loc_83134528:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,27
	cr6.compare<uint32_t>(ctx.r29.u32, 27, xer);
	// blt cr6,0x8313447c
	if (cr6.lt) goto loc_8313447C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83134538:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123670
	ctx.lr = 0x83134544;
	sub_83123670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x83134554;
	sub_83120738(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83123670
	ctx.lr = 0x83134568;
	sub_83123670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x83134578;
	sub_83120738(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x83123670
	ctx.lr = 0x8313458C;
	sub_83123670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x8313459C;
	sub_83120738(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// bge cr6,0x831345c0
	if (!cr6.lt) goto loc_831345C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123670
	ctx.lr = 0x831345B8;
	sub_83123670(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x831345d8
	goto loc_831345D8;
loc_831345C0:
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x831345e4
	if (!cr6.lt) goto loc_831345E4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123670
	ctx.lr = 0x831345D4;
	sub_83123670(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_831345D8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x831345E4;
	sub_83121088(ctx, base);
loc_831345E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x83134538
	if (cr6.lt) goto loc_83134538;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_831345F4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123720
	ctx.lr = 0x83134600;
	sub_83123720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x83134610;
	sub_83120738(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x83123720
	ctx.lr = 0x83134624;
	sub_83123720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x83134634;
	sub_83120738(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r27,r10,24
	ctx.r27.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x83123720
	ctx.lr = 0x83134648;
	sub_83123720(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83120738
	ctx.lr = 0x83134658;
	sub_83120738(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// bge cr6,0x8313467c
	if (!cr6.lt) goto loc_8313467C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123720
	ctx.lr = 0x83134674;
	sub_83123720(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x83134694
	goto loc_83134694;
loc_8313467C:
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x831346a0
	if (!cr6.lt) goto loc_831346A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123720
	ctx.lr = 0x83134690;
	sub_83123720(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_83134694:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x831346A0;
	sub_83121088(ctx, base);
loc_831346A0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(ctx.r29.u32, 9, xer);
	// blt cr6,0x831345f4
	if (cr6.lt) goto loc_831345F4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831346B4"))) PPC_WEAK_FUNC(sub_831346B4);
PPC_FUNC_IMPL(__imp__sub_831346B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831346B8"))) PPC_WEAK_FUNC(sub_831346B8);
PPC_FUNC_IMPL(__imp__sub_831346B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83134718
	if (!cr6.lt) goto loc_83134718;
loc_831346D0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x83134718
	if (!cr6.lt) goto loc_83134718;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// blt cr6,0x831346d0
	if (cr6.lt) goto loc_831346D0;
loc_83134718:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134738"))) PPC_WEAK_FUNC(sub_83134738);
PPC_FUNC_IMPL(__imp__sub_83134738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x8313478c
	if (!cr6.lt) goto loc_8313478C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83134750:
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x8313478c
	if (!cr6.lt) goto loc_8313478C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x83134750
	if (cr6.lt) goto loc_83134750;
loc_8313478C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313479C"))) PPC_WEAK_FUNC(sub_8313479C);
PPC_FUNC_IMPL(__imp__sub_8313479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831347A0"))) PPC_WEAK_FUNC(sub_831347A0);
PPC_FUNC_IMPL(__imp__sub_831347A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x831347fc
	if (!cr6.lt) goto loc_831347FC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_831347B8:
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r8,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F;
	// rlwinm r8,r7,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7F;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x831347fc
	if (!cr6.lt) goto loc_831347FC;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x831347b8
	if (cr6.lt) goto loc_831347B8;
loc_831347FC:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313480C"))) PPC_WEAK_FUNC(sub_8313480C);
PPC_FUNC_IMPL(__imp__sub_8313480C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83134810"))) PPC_WEAK_FUNC(sub_83134810);
PPC_FUNC_IMPL(__imp__sub_83134810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83134884
	if (!cr6.lt) goto loc_83134884;
loc_83134824:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bge cr6,0x83134884
	if (!cr6.lt) goto loc_83134884;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// blt cr6,0x83134824
	if (cr6.lt) goto loc_83134824;
loc_83134884:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831348B0"))) PPC_WEAK_FUNC(sub_831348B0);
PPC_FUNC_IMPL(__imp__sub_831348B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831348B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// bge cr6,0x83134958
	if (!cr6.lt) goto loc_83134958;
loc_831348E4:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x831348FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83134958
	if (cr6.eq) goto loc_83134958;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// addze r30,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r30.s64 = temp.s64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lhz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blt cr6,0x831348e4
	if (cr6.lt) goto loc_831348E4;
loc_83134958:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lhz r9,2(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r8,4(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83134998"))) PPC_WEAK_FUNC(sub_83134998);
PPC_FUNC_IMPL(__imp__sub_83134998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83134a0c
	if (!cr6.lt) goto loc_83134A0C;
loc_831349B0:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x831349d0
	if (cr6.lt) goto loc_831349D0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_831349D0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83134a0c
	if (cr6.eq) goto loc_83134A0C;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r31,r9,r3
	ctx.r31.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// stdx r8,r9,r3
	PPC_STORE_U64(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u64);
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// blt cr6,0x831349b0
	if (cr6.lt) goto loc_831349B0;
loc_83134A0C:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// ld r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 8);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134A2C"))) PPC_WEAK_FUNC(sub_83134A2C);
PPC_FUNC_IMPL(__imp__sub_83134A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83134A30"))) PPC_WEAK_FUNC(sub_83134A30);
PPC_FUNC_IMPL(__imp__sub_83134A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83134aa4
	if (!cr6.lt) goto loc_83134AA4;
loc_83134A44:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bge cr6,0x83134aa4
	if (!cr6.lt) goto loc_83134AA4;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// blt cr6,0x83134a44
	if (cr6.lt) goto loc_83134A44;
loc_83134AA4:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134AD0"))) PPC_WEAK_FUNC(sub_83134AD0);
PPC_FUNC_IMPL(__imp__sub_83134AD0) {
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
	ctx.lr = 0x83134AD8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r25,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r25.s64 = temp.s64;
	// bge cr6,0x83134c94
	if (!cr6.lt) goto loc_83134C94;
loc_83134B04:
	// mulli r11,r25,632
	ctx.r11.s64 = ctx.r25.s64 * 632;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x83134B1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83134c94
	if (cr6.eq) goto loc_83134C94;
	// mulli r11,r31,632
	ctx.r11.s64 = ctx.r31.s64 * 632;
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// stb r7,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r7.u8);
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r6,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r6.u8);
	// lbz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// stb r5,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r5.u8);
	// lbz r4,3(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// stb r4,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r4.u8);
loc_83134B64:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83134b64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83134B64;
	// lbz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// li r10,46
	ctx.r10.s64 = 46;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,52
	ctx.r9.s64 = ctx.r30.s64 + 52;
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// stb r7,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r7.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r6,33(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// stb r6,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r6.u8);
	// lbz r5,34(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 34);
	// stb r5,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r5.u8);
	// lbz r4,35(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 35);
	// stb r4,35(r31)
	PPC_STORE_U8(ctx.r31.u32 + 35, ctx.r4.u8);
	// lbz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// stb r3,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r3.u8);
	// lbz r10,37(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// stb r10,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r10.u8);
	// lbz r7,38(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 38);
	// stb r7,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r7.u8);
	// lbz r6,39(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 39);
	// stb r6,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r6.u8);
	// lbz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r5,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r5.u8);
	// lbz r4,41(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// stb r4,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r4.u8);
	// lhz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// sth r3,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r3.u16);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_83134BE8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x83134be8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83134BE8;
	// lhz r11,98(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 98);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r28,3
	ctx.r28.s64 = 3;
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwimi r9,r10,0,7,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1FFFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFE000000);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwimi r8,r7,0,7,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1FC0000) | (ctx.r8.u64 & 0xFFFFFFFFFE03FFFF);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwimi r6,r5,0,14,14
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x20000) | (ctx.r6.u64 & 0xFFFFFFFFFFFDFFFF);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwimi r3,r4,0,15,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x10000) | (ctx.r3.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// sth r11,102(r31)
	PPC_STORE_U16(ctx.r31.u32 + 102, ctx.r11.u16);
loc_83134C54:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x83134C60;
	sub_82ABFDA0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bne 0x83134c54
	if (!cr0.eq) goto loc_83134C54;
	// addi r4,r30,584
	ctx.r4.s64 = ctx.r30.s64 + 584;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x83134C7C;
	sub_831CE980(ctx, base);
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r23,r25
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r25.s32, xer);
	// addze r25,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r25.s64 = temp.s64;
	// blt cr6,0x83134b04
	if (cr6.lt) goto loc_83134B04;
loc_83134C94:
	// mulli r11,r31,632
	ctx.r11.s64 = ctx.r31.s64 * 632;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x83134CA4;
	sub_82D8A4D8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83134CAC"))) PPC_WEAK_FUNC(sub_83134CAC);
PPC_FUNC_IMPL(__imp__sub_83134CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83134CB0"))) PPC_WEAK_FUNC(sub_83134CB0);
PPC_FUNC_IMPL(__imp__sub_83134CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83134d34
	if (!cr6.lt) goto loc_83134D34;
loc_83134CC8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rldicr r7,r31,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// cmpld cr6,r8,r9
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// blt cr6,0x83134d04
	if (cr6.lt) goto loc_83134D04;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83134D04:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83134d34
	if (cr6.eq) goto loc_83134D34;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// blt cr6,0x83134cc8
	if (cr6.lt) goto loc_83134CC8;
loc_83134D34:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134D48"))) PPC_WEAK_FUNC(sub_83134D48);
PPC_FUNC_IMPL(__imp__sub_83134D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83134db8
	if (!cr6.lt) goto loc_83134DB8;
loc_83134D5C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83134d78
	if (cr6.eq) goto loc_83134D78;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,19,23,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FF;
	// b 0x83134d7c
	goto loc_83134D7C;
loc_83134D78:
	// li r8,0
	ctx.r8.s64 = 0;
loc_83134D7C:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83134db8
	if (cr6.eq) goto loc_83134DB8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r9,19,23,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x83134db8
	if (!cr6.lt) goto loc_83134DB8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r7,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// blt cr6,0x83134d5c
	if (cr6.lt) goto loc_83134D5C;
loc_83134DB8:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134DC8"))) PPC_WEAK_FUNC(sub_83134DC8);
PPC_FUNC_IMPL(__imp__sub_83134DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83134e1c
	if (!cr6.lt) goto loc_83134E1C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_83134DE0:
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x83134e1c
	if (!cr6.lt) goto loc_83134E1C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x83134de0
	if (cr6.lt) goto loc_83134DE0;
loc_83134E1C:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83134E2C"))) PPC_WEAK_FUNC(sub_83134E2C);
PPC_FUNC_IMPL(__imp__sub_83134E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83134E30"))) PPC_WEAK_FUNC(sub_83134E30);
PPC_FUNC_IMPL(__imp__sub_83134E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83134E38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83134e54
	if (cr6.eq) goto loc_83134E54;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x83134E54;
	sub_835242E8(ctx, base);
loc_83134E54:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83134e68
	if (cr6.eq) goto loc_83134E68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x83134E68;
	sub_835242E8(ctx, base);
loc_83134E68:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83134e7c
	if (cr6.eq) goto loc_83134E7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835242e8
	ctx.lr = 0x83134E7C;
	sub_835242E8(ctx, base);
loc_83134E7C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83134ed4
	if (cr6.eq) goto loc_83134ED4;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83134E98:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83134e98
	if (!cr0.eq) goto loc_83134E98;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83134ed0
	if (!cr6.eq) goto loc_83134ED0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83134ED0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83134ED0:
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_83134ED4:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83134f24
	if (cr6.eq) goto loc_83134F24;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83134EE8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83134ee8
	if (!cr0.eq) goto loc_83134EE8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83134f20
	if (!cr6.eq) goto loc_83134F20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83134F20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83134F20:
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_83134F24:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83134f74
	if (cr6.eq) goto loc_83134F74;
	// lwsync 
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
loc_83134F38:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x83134f38
	if (!cr0.eq) goto loc_83134F38;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83134f70
	if (!cr6.eq) goto loc_83134F70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83134F70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83134F70:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_83134F74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83134f88
	if (cr6.eq) goto loc_83134F88;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82efead8
	ctx.lr = 0x83134F88;
	sub_82EFEAD8(ctx, base);
loc_83134F88:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x831478f8
	ctx.lr = 0x83134F94;
	sub_831478F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83134F9C"))) PPC_WEAK_FUNC(sub_83134F9C);
PPC_FUNC_IMPL(__imp__sub_83134F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83134FA0"))) PPC_WEAK_FUNC(sub_83134FA0);
PPC_FUNC_IMPL(__imp__sub_83134FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83134FA8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83134FC4:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x83134fe8
	if (!cr6.lt) goto loc_83134FE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x83134FE0;
	sub_82ABFF50(ctx, base);
	// lbzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// b 0x83134fec
	goto loc_83134FEC;
loc_83134FE8:
	// li r11,13
	ctx.r11.s64 = 13;
loc_83134FEC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83135058
	if (cr6.gt) goto loc_83135058;
	// lis r12,-31981
	ctx.r12.s64 = -2095906816;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20496
	ctx.r12.s64 = ctx.r12.s64 + 20496;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83135040;
	case 1:
		goto loc_83135040;
	case 2:
		goto loc_83135040;
	case 3:
		goto loc_83135048;
	case 4:
		goto loc_83135048;
	case 5:
		goto loc_83135048;
	case 6:
		goto loc_83135048;
	case 7:
		goto loc_83135048;
	case 8:
		goto loc_83135050;
	case 9:
		goto loc_83135050;
	case 10:
		goto loc_83135050;
	case 11:
		goto loc_83135050;
	default:
		return;
	}
	// lwz r24,20544(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20544);
	// lwz r24,20544(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20544);
	// lwz r24,20544(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20544);
	// lwz r24,20552(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20552);
	// lwz r24,20552(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20552);
	// lwz r24,20552(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20552);
	// lwz r24,20552(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20552);
	// lwz r24,20552(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20552);
	// lwz r24,20560(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20560);
	// lwz r24,20560(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20560);
	// lwz r24,20560(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20560);
	// lwz r24,20560(r19)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r19.u32 + 20560);
loc_83135040:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x8313505c
	goto loc_8313505C;
loc_83135048:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8313505c
	goto loc_8313505C;
loc_83135050:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x8313505c
	goto loc_8313505C;
loc_83135058:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8313505C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x83134fc4
	if (cr6.lt) goto loc_83134FC4;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r24,5
	ctx.r24.s64 = 5;
	// li r23,12
	ctx.r23.s64 = 12;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x83135098
	if (!cr6.eq) goto loc_83135098;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// blt cr6,0x831351b8
	if (cr6.lt) goto loc_831351B8;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// blt cr6,0x831351a0
	if (cr6.lt) goto loc_831351A0;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bge cr6,0x831354ec
	if (!cr6.lt) goto loc_831354EC;
	// b 0x831351a0
	goto loc_831351A0;
loc_83135098:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8313509C:
	// clrlwi r31,r28,24
	ctx.r31.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x8313518c
	if (!cr6.lt) goto loc_8313518C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x831350B4;
	sub_82ABFF50(ctx, base);
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8313518c
	if (!cr6.eq) goto loc_8313518C;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// bge cr6,0x831350dc
	if (!cr6.lt) goto loc_831350DC;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bge cr6,0x831350dc
	if (!cr6.lt) goto loc_831350DC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stbx r29,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u8);
	// b 0x83135188
	goto loc_83135188;
loc_831350DC:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bge cr6,0x83135100
	if (!cr6.lt) goto loc_83135100;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x83135100
	if (cr6.lt) goto loc_83135100;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// bgt cr6,0x83135100
	if (cr6.gt) goto loc_83135100;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stbx r24,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r24.u8);
	// b 0x83135188
	goto loc_83135188;
loc_83135100:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bge cr6,0x83135110
	if (!cr6.lt) goto loc_83135110;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(ctx.r28.u32, 8, xer);
	// bge cr6,0x83135180
	if (!cr6.lt) goto loc_83135180;
loc_83135110:
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// bge cr6,0x83135134
	if (!cr6.lt) goto loc_83135134;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x83135134
	if (cr6.lt) goto loc_83135134;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// bgt cr6,0x83135134
	if (cr6.gt) goto loc_83135134;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stbx r24,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r24.u8);
	// b 0x83135188
	goto loc_83135188;
loc_83135134:
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// bge cr6,0x83135144
	if (!cr6.lt) goto loc_83135144;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(ctx.r28.u32, 8, xer);
	// bge cr6,0x83135180
	if (!cr6.lt) goto loc_83135180;
loc_83135144:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bgt cr6,0x83135158
	if (cr6.gt) goto loc_83135158;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stbx r29,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r29.u8);
	// b 0x83135188
	goto loc_83135188;
loc_83135158:
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x83135180
	if (cr6.lt) goto loc_83135180;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// bgt cr6,0x83135180
	if (cr6.gt) goto loc_83135180;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ac0328
	ctx.lr = 0x83135178;
	sub_82AC0328(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x83135188
	goto loc_83135188;
loc_83135180:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stbx r23,r31,r3
	PPC_STORE_U8(ctx.r31.u32 + ctx.r3.u32, ctx.r23.u8);
loc_83135188:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8313518C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// blt cr6,0x8313509c
	if (cr6.lt) goto loc_8313509C;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x831351b8
	if (!cr6.eq) goto loc_831351B8;
loc_831351A0:
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// blt cr6,0x831351b8
	if (cr6.lt) goto loc_831351B8;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// blt cr6,0x831351b8
	if (cr6.lt) goto loc_831351B8;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bge cr6,0x831354a0
	if (!cr6.lt) goto loc_831354A0;
loc_831351B8:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// ble cr6,0x831352b0
	if (!cr6.gt) goto loc_831352B0;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// bge cr6,0x83135238
	if (!cr6.lt) goto loc_83135238;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_831351CC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x8313521c
	if (!cr6.lt) goto loc_8313521C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x831351E8;
	sub_82ABFF50(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83135210
	if (cr6.eq) goto loc_83135210;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83135210
	if (cr6.eq) goto loc_83135210;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x83135210
	if (cr6.eq) goto loc_83135210;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8313521c
	if (!cr6.eq) goto loc_8313521C;
loc_83135210:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8313521C:
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// bge cr6,0x83135238
	if (!cr6.lt) goto loc_83135238;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// beq cr6,0x83135238
	if (cr6.eq) goto loc_83135238;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// ble cr6,0x831351cc
	if (!cr6.gt) goto loc_831351CC;
loc_83135238:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bge cr6,0x831352b4
	if (!cr6.lt) goto loc_831352B4;
	// li r30,4
	ctx.r30.s64 = 4;
loc_83135244:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x83135294
	if (!cr6.lt) goto loc_83135294;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x83135260;
	sub_82ABFF50(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83135288
	if (cr6.eq) goto loc_83135288;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83135288
	if (cr6.eq) goto loc_83135288;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x83135288
	if (cr6.eq) goto loc_83135288;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x83135294
	if (!cr6.eq) goto loc_83135294;
loc_83135288:
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stb r24,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r24.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_83135294:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bge cr6,0x831352b0
	if (!cr6.lt) goto loc_831352B0;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// beq cr6,0x831352b0
	if (cr6.eq) goto loc_831352B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// ble cr6,0x83135244
	if (!cr6.gt) goto loc_83135244;
loc_831352B0:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
loc_831352B4:
	// ble cr6,0x831353b8
	if (!cr6.gt) goto loc_831353B8;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bge cr6,0x83135338
	if (!cr6.lt) goto loc_83135338;
	// li r30,8
	ctx.r30.s64 = 8;
loc_831352C4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x8313531c
	if (!cr6.lt) goto loc_8313531C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x831352E0;
	sub_82ABFF50(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83135310
	if (cr6.eq) goto loc_83135310;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83135310
	if (cr6.eq) goto loc_83135310;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83135310
	if (cr6.eq) goto loc_83135310;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83135310
	if (cr6.eq) goto loc_83135310;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x8313531c
	if (!cr6.eq) goto loc_8313531C;
loc_83135310:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stb r23,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r23.u8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_8313531C:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bge cr6,0x83135338
	if (!cr6.lt) goto loc_83135338;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// beq cr6,0x83135338
	if (cr6.eq) goto loc_83135338;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// ble cr6,0x831352c4
	if (!cr6.gt) goto loc_831352C4;
loc_83135338:
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// bge cr6,0x831353bc
	if (!cr6.lt) goto loc_831353BC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83135344:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x8313539c
	if (!cr6.lt) goto loc_8313539C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x83135360;
	sub_82ABFF50(ctx, base);
	// add r10,r3,r31
	ctx.r10.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83135390
	if (cr6.eq) goto loc_83135390;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83135390
	if (cr6.eq) goto loc_83135390;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83135390
	if (cr6.eq) goto loc_83135390;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83135390
	if (cr6.eq) goto loc_83135390;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x8313539c
	if (!cr6.eq) goto loc_8313539C;
loc_83135390:
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r29.u8);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8313539C:
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// bge cr6,0x831353b8
	if (!cr6.lt) goto loc_831353B8;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// beq cr6,0x831353b8
	if (cr6.eq) goto loc_831353B8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// ble cr6,0x83135344
	if (!cr6.gt) goto loc_83135344;
loc_831353B8:
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
loc_831353BC:
	// ble cr6,0x831354a0
	if (!cr6.gt) goto loc_831354A0;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bge cr6,0x83135430
	if (!cr6.lt) goto loc_83135430;
	// li r30,4
	ctx.r30.s64 = 4;
loc_831353CC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x83135414
	if (!cr6.lt) goto loc_83135414;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x831353E8;
	sub_82ABFF50(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83135408
	if (cr6.eq) goto loc_83135408;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83135408
	if (cr6.eq) goto loc_83135408;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83135414
	if (!cr6.eq) goto loc_83135414;
loc_83135408:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// stb r24,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r24.u8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_83135414:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bge cr6,0x83135430
	if (!cr6.lt) goto loc_83135430;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// beq cr6,0x83135430
	if (cr6.eq) goto loc_83135430;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// ble cr6,0x831353cc
	if (!cr6.gt) goto loc_831353CC;
loc_83135430:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bge cr6,0x831354a0
	if (!cr6.lt) goto loc_831354A0;
	// li r30,8
	ctx.r30.s64 = 8;
loc_8313543C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x83135484
	if (!cr6.lt) goto loc_83135484;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x83135458;
	sub_82ABFF50(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83135478
	if (cr6.eq) goto loc_83135478;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83135478
	if (cr6.eq) goto loc_83135478;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83135484
	if (!cr6.eq) goto loc_83135484;
loc_83135478:
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// stb r23,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r23.u8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_83135484:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bge cr6,0x831354a0
	if (!cr6.lt) goto loc_831354A0;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// beq cr6,0x831354a0
	if (cr6.eq) goto loc_831354A0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// ble cr6,0x8313543c
	if (!cr6.gt) goto loc_8313543C;
loc_831354A0:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x831354c4
	if (!cr6.lt) goto loc_831354C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x831354BC;
	sub_82ABFF50(ctx, base);
	// lbzx r30,r3,r31
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// b 0x831354c8
	goto loc_831354C8;
loc_831354C4:
	// li r30,13
	ctx.r30.s64 = 13;
loc_831354C8:
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x831354e0
	if (!cr6.lt) goto loc_831354E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82abff50
	ctx.lr = 0x831354DC;
	sub_82ABFF50(ctx, base);
	// stbx r30,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r30.u8);
loc_831354E0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x831354a0
	if (cr6.lt) goto loc_831354A0;
loc_831354EC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831354F4"))) PPC_WEAK_FUNC(sub_831354F4);
PPC_FUNC_IMPL(__imp__sub_831354F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831354F8"))) PPC_WEAK_FUNC(sub_831354F8);
PPC_FUNC_IMPL(__imp__sub_831354F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83135500;
	__savegprlr_25(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83133be8
	ctx.lr = 0x83135510;
	sub_83133BE8(ctx, base);
	// lis r9,237
	ctx.r9.s64 = 15532032;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r9,13184
	ctx.r26.u64 = ctx.r9.u64 | 13184;
	// addi r28,r11,6888
	ctx.r28.s64 = ctx.r11.s64 + 6888;
	// addi r27,r10,-4480
	ctx.r27.s64 = ctx.r10.s64 + -4480;
loc_8313552C:
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// bne cr6,0x8313553c
	if (!cr6.eq) goto loc_8313553C;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x83135550
	goto loc_83135550;
loc_8313553C:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
loc_83135550:
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mulli r10,r29,224
	ctx.r10.s64 = ctx.r29.s64 * 224;
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// add r31,r10,r26
	ctx.r31.u64 = ctx.r10.u64 + ctx.r26.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// std r11,44(r31)
	PPC_STORE_U64(ctx.r31.u32 + 44, ctx.r11.u64);
	// bl 0x831ce7d8
	ctx.lr = 0x83135578;
	sub_831CE7D8(ctx, base);
	// addi r3,r31,102
	ctx.r3.s64 = ctx.r31.s64 + 102;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x831ce7d8
	ctx.lr = 0x83135588;
	sub_831CE7D8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831219c8
	ctx.lr = 0x831355A4;
	sub_831219C8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x831355c0
	if (!cr6.eq) goto loc_831355C0;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r11,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// b 0x831355e0
	goto loc_831355E0;
loc_831355C0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x831355d0
	if (!cr6.eq) goto loc_831355D0;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x831355e0
	goto loc_831355E0;
loc_831355D0:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// li r11,63
	ctx.r11.s64 = 63;
	// beq cr6,0x831355e0
	if (cr6.eq) goto loc_831355E0;
	// li r11,17
	ctx.r11.s64 = 17;
loc_831355E0:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x831355F0;
	sub_83121088(ctx, base);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x83135600
	if (cr6.eq) goto loc_83135600;
	// li r11,12
	ctx.r11.s64 = 12;
loc_83135600:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x83135610;
	sub_83121088(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// blt cr6,0x8313552c
	if (cr6.lt) goto loc_8313552C;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// li r31,1
	ctx.r31.s64 = 1;
	// addis r30,r11,237
	ctx.r30.s64 = ctx.r11.s64 + 15532032;
	// addi r30,r30,13856
	ctx.r30.s64 = ctx.r30.s64 + 13856;
loc_8313562C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x8313563C;
	sub_83121088(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,13
	cr6.compare<uint32_t>(ctx.r31.u32, 13, xer);
	// ble cr6,0x8313562c
	if (!cr6.gt) goto loc_8313562C;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83135650"))) PPC_WEAK_FUNC(sub_83135650);
PPC_FUNC_IMPL(__imp__sub_83135650) {
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
	// beq cr6,0x831356a4
	if (cr6.eq) goto loc_831356A4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83135688
	if (cr6.gt) goto loc_83135688;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82416260
	ctx.lr = 0x83135680;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831356a4
	if (!cr6.eq) goto loc_831356A4;
loc_83135688:
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
	ctx.lr = 0x831356A4;
	sub_8246B850(ctx, base);
loc_831356A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831356B4"))) PPC_WEAK_FUNC(sub_831356B4);
PPC_FUNC_IMPL(__imp__sub_831356B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831356B8"))) PPC_WEAK_FUNC(sub_831356B8);
PPC_FUNC_IMPL(__imp__sub_831356B8) {
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
	// beq cr6,0x8313570c
	if (cr6.eq) goto loc_8313570C;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x831356f0
	if (cr6.gt) goto loc_831356F0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82416260
	ctx.lr = 0x831356E8;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313570c
	if (!cr6.eq) goto loc_8313570C;
loc_831356F0:
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
	ctx.lr = 0x8313570C;
	sub_8246B850(ctx, base);
loc_8313570C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8313571C"))) PPC_WEAK_FUNC(sub_8313571C);
PPC_FUNC_IMPL(__imp__sub_8313571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83135720"))) PPC_WEAK_FUNC(sub_83135720);
PPC_FUNC_IMPL(__imp__sub_83135720) {
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
	// lbz r9,29(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83135740
	if (!cr6.eq) goto loc_83135740;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_83135740:
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
	// bne cr6,0x83135768
	if (!cr6.eq) goto loc_83135768;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83135768:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x83135788
	if (!cr6.eq) goto loc_83135788;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_83135788:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135798"))) PPC_WEAK_FUNC(sub_83135798);
PPC_FUNC_IMPL(__imp__sub_83135798) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82416260
	ctx.lr = 0x831357B4;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831357f4
	if (cr6.eq) goto loc_831357F4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
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
loc_831357F4:
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
	ctx.lr = 0x83135810;
	sub_8246B850(ctx, base);
}

__attribute__((alias("__imp__sub_83135810"))) PPC_WEAK_FUNC(sub_83135810);
PPC_FUNC_IMPL(__imp__sub_83135810) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83135884
	if (!cr6.lt) goto loc_83135884;
loc_83135838:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8313585c
	if (!cr6.lt) goto loc_8313585C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8313585C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x83135838
	if (cr6.lt) goto loc_83135838;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
loc_83135884:
	// bne cr6,0x831358a0
	if (!cr6.eq) goto loc_831358A0;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_831358A0:
	// bl 0x83134738
	ctx.lr = 0x831358A4;
	sub_83134738(ctx, base);
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

__attribute__((alias("__imp__sub_831358B8"))) PPC_WEAK_FUNC(sub_831358B8);
PPC_FUNC_IMPL(__imp__sub_831358B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831358C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83135930
	if (!cr6.lt) goto loc_83135930;
loc_831358DC:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x831358f8
	if (!cr6.lt) goto loc_831358F8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831358F8:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// blt cr6,0x831358dc
	if (cr6.lt) goto loc_831358DC;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
loc_83135930:
	// bne cr6,0x83135958
	if (!cr6.eq) goto loc_83135958;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_83135958:
	// bl 0x831346b8
	ctx.lr = 0x8313595C;
	sub_831346B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83135964"))) PPC_WEAK_FUNC(sub_83135964);
PPC_FUNC_IMPL(__imp__sub_83135964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83135968"))) PPC_WEAK_FUNC(sub_83135968);
PPC_FUNC_IMPL(__imp__sub_83135968) {
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
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x831359e4
	if (!cr6.lt) goto loc_831359E4;
loc_83135990:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r8,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F;
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x831359bc
	if (!cr6.lt) goto loc_831359BC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_831359BC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x83135990
	if (cr6.lt) goto loc_83135990;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
loc_831359E4:
	// bne cr6,0x83135a00
	if (!cr6.eq) goto loc_83135A00;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
loc_83135A00:
	// bl 0x831347a0
	ctx.lr = 0x83135A04;
	sub_831347A0(ctx, base);
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

__attribute__((alias("__imp__sub_83135A18"))) PPC_WEAK_FUNC(sub_83135A18);
PPC_FUNC_IMPL(__imp__sub_83135A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83135A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83135ab0
	if (!cr6.lt) goto loc_83135AB0;
loc_83135A3C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lhz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// lhz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + -4);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x83135a60
	if (!cr6.lt) goto loc_83135A60;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83135A60:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// blt cr6,0x83135a3c
	if (cr6.lt) goto loc_83135A3C;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
loc_83135AB0:
	// bne cr6,0x83135af0
	if (!cr6.eq) goto loc_83135AF0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_83135AF0:
	// bl 0x83134810
	ctx.lr = 0x83135AF4;
	sub_83134810(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83135AFC"))) PPC_WEAK_FUNC(sub_83135AFC);
PPC_FUNC_IMPL(__imp__sub_83135AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83135B00"))) PPC_WEAK_FUNC(sub_83135B00);
PPC_FUNC_IMPL(__imp__sub_83135B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83135B08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x83135bb0
	if (!cr6.lt) goto loc_83135BB0;
loc_83135B34:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// bctrl 
	ctx.lr = 0x83135B48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83135b58
	if (cr6.eq) goto loc_83135B58;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_83135B58:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r7,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// blt cr6,0x83135b34
	if (cr6.lt) goto loc_83135B34;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_83135BB0:
	// bne cr6,0x83135bfc
	if (!cr6.eq) goto loc_83135BFC;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lbz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -8);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lhz r8,-6(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + -6);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
loc_83135BFC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831348b0
	ctx.lr = 0x83135C14;
	sub_831348B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83135C1C"))) PPC_WEAK_FUNC(sub_83135C1C);
PPC_FUNC_IMPL(__imp__sub_83135C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83135C20"))) PPC_WEAK_FUNC(sub_83135C20);
PPC_FUNC_IMPL(__imp__sub_83135C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x83135c74
	if (!cr6.lt) goto loc_83135C74;
loc_83135C34:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r9,-2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bge cr6,0x83135c50
	if (!cr6.lt) goto loc_83135C50;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83135C50:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lhzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// sthx r7,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u16);
	// blt cr6,0x83135c34
	if (cr6.lt) goto loc_83135C34;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
loc_83135C74:
	// bne cr6,0x83135c90
	if (!cr6.eq) goto loc_83135C90;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r5,-1
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// lhz r7,-2(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// sthx r7,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r7.u16);
loc_83135C90:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x83135ce4
	if (!cr6.lt) goto loc_83135CE4;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_83135CAC:
	// lhzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// lhz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x83135ce4
	if (!cr6.lt) goto loc_83135CE4;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r4,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// sthx r9,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r9.u16);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x83135cac
	if (cr6.lt) goto loc_83135CAC;
loc_83135CE4:
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u16);
	// blr 
	return;
}

