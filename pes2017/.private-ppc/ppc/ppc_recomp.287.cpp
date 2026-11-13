#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83145438"))) PPC_WEAK_FUNC(sub_83145438);
PPC_FUNC_IMPL(__imp__sub_83145438) {
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
	ctx.lr = 0x83145440;
	__savegprlr_14(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	ctx.r16.s64 = 0;
	// clrlwi r22,r4,24
	ctx.r22.u64 = ctx.r4.u32 & 0xFF;
	// lis r11,57
	ctx.r11.s64 = 3735552;
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r16,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// ori r14,r11,37536
	ctx.r14.u64 = ctx.r11.u64 | 37536;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// bne cr6,0x83145514
	if (!cr6.eq) goto loc_83145514;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83145514
	if (cr6.eq) goto loc_83145514;
	// li r4,50
	ctx.r4.s64 = 50;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cd8a88
	ctx.lr = 0x83145498;
	sub_82CD8A88(ctx, base);
	// lis r11,58
	ctx.r11.s64 = 3801088;
	// lwz r9,12(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// ori r10,r11,44832
	ctx.r10.u64 = ctx.r11.u64 | 44832;
	// add r31,r9,r14
	ctx.r31.u64 = ctx.r9.u64 + ctx.r14.u64;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83145500
	if (cr6.eq) goto loc_83145500;
loc_831454B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// bl 0x8311c750
	ctx.lr = 0x831454C8;
	sub_8311C750(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cd8e28
	ctx.lr = 0x831454D8;
	sub_82CD8E28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82ab5f20
	ctx.lr = 0x831454EC;
	sub_82AB5F20(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// bne 0x831454b4
	if (!cr0.eq) goto loc_831454B4;
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83145500:
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// srawi r5,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8306b430
	ctx.lr = 0x83145514;
	sub_8306B430(ctx, base);
loc_83145514:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// addi r25,r11,7204
	ctx.r25.s64 = ctx.r11.s64 + 7204;
loc_83145524:
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r31,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// bl 0x82efe928
	ctx.lr = 0x83145538;
	sub_82EFE928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r4,r31,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lwz r3,8(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// bl 0x82efe958
	ctx.lr = 0x83145548;
	sub_82EFE958(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r26,r31,r26
	ctx.r26.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82cd8a88
	ctx.lr = 0x8314555C;
	sub_82CD8A88(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83145618
	if (cr6.eq) goto loc_83145618;
loc_83145564:
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// bne cr6,0x831455e8
	if (!cr6.eq) goto loc_831455E8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x831455e8
	if (!cr6.eq) goto loc_831455E8;
	// subf r11,r29,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r29.s64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// srawi. r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x831455c0
	if (!cr0.gt) goto loc_831455C0;
loc_83145588:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bge cr6,0x831455b4
	if (!cr6.lt) goto loc_831455B4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x831455b8
	goto loc_831455B8;
loc_831455B4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831455B8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83145588
	if (cr6.gt) goto loc_83145588;
loc_831455C0:
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// beq cr6,0x831455d8
	if (cr6.eq) goto loc_831455D8;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x831455dc
	if (!cr6.lt) goto loc_831455DC;
loc_831455D8:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_831455DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314560c
	if (!cr6.eq) goto loc_8314560C;
loc_831455E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// bl 0x8311c750
	ctx.lr = 0x831455FC;
	sub_8311C750(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82cd8e28
	ctx.lr = 0x8314560C;
	sub_82CD8E28(ctx, base);
loc_8314560C:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// bne 0x83145564
	if (!cr0.eq) goto loc_83145564;
loc_83145618:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// blt cr6,0x83145524
	if (cr6.lt) goto loc_83145524;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r17,112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r23,12
	ctx.r23.s64 = 12;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// subf r10,r17,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r17.s64;
	// stb r16,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r16.u8);
	// divw r24,r10,r23
	ctx.r24.s32 = PPCDivide(ctx.r10.s32, ctx.r23.s32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8313ecd8
	ctx.lr = 0x83145650;
	sub_8313ECD8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83145660
	if (cr6.eq) goto loc_83145660;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x83145660;
	sub_82416268(ctx, base);
loc_83145660:
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r16,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// bl 0x83142e38
	ctx.lr = 0x83145678;
	sub_83142E38(ctx, base);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// lwz r18,112(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bne cr6,0x8314578c
	if (!cr6.eq) goto loc_8314578C;
	// lwz r11,12(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314578c
	if (cr6.eq) goto loc_8314578C;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r8,50
	cr6.compare<uint32_t>(ctx.r8.u32, 50, xer);
	// bge cr6,0x8314571c
	if (!cr6.lt) goto loc_8314571C;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82416260
	ctx.lr = 0x831456C4;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145838
	if (cr6.eq) goto loc_83145838;
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r9,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831ce420
	ctx.lr = 0x831456E8;
	sub_831CE420(ctx, base);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r7,r3,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r3.s64;
	// srawi r30,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 2;
	// beq cr6,0x83145704
	if (cr6.eq) goto loc_83145704;
	// bl 0x82416268
	ctx.lr = 0x83145704;
	sub_82416268(ctx, base);
loc_83145704:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r31.u32);
	// addi r10,r31,200
	ctx.r10.s64 = ctx.r31.s64 + 200;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r10.u32);
	// stw r9,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r9.u32);
loc_8314571C:
	// lis r11,58
	ctx.r11.s64 = 3801088;
	// lwz r10,12(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// ori r9,r11,44836
	ctx.r9.u64 = ctx.r11.u64 | 44836;
	// addis r11,r10,58
	ctx.r11.s64 = ctx.r10.s64 + 3801088;
	// addi r11,r11,-22600
	ctx.r11.s64 = ctx.r11.s64 + -22600;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83145778
	if (cr6.eq) goto loc_83145778;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83145740:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8311c750
	ctx.lr = 0x8314574C;
	sub_8311C750(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x8314575C;
	sub_82AB5F20(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ab5f20
	ctx.lr = 0x83145768;
	sub_82AB5F20(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83145740
	if (!cr0.eq) goto loc_83145740;
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83145778:
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// srawi r5,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306b430
	ctx.lr = 0x8314578C;
	sub_8306B430(ctx, base);
loc_8314578C:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// addi r27,r11,8208
	ctx.r27.s64 = ctx.r11.s64 + 8208;
loc_8314579C:
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r31,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x82efe928
	ctx.lr = 0x831457B0;
	sub_82EFE928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r4,r31,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwz r3,8(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// bl 0x82efe958
	ctx.lr = 0x831457C0;
	sub_82EFE958(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ab5b98
	ctx.lr = 0x831457D4;
	sub_82AB5B98(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8314589c
	if (cr6.eq) goto loc_8314589C;
loc_831457DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8311c750
	ctx.lr = 0x831457E8;
	sub_8311C750(ctx, base);
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bne cr6,0x83145884
	if (!cr6.eq) goto loc_83145884;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83145884
	if (!cr6.eq) goto loc_83145884;
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// srawi. r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x8314585c
	if (!cr0.gt) goto loc_8314585C;
loc_8314580C:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bge cr6,0x83145850
	if (!cr6.lt) goto loc_83145850;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83145854
	goto loc_83145854;
loc_83145838:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,15364
	ctx.r10.s64 = ctx.r11.s64 + 15364;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x8246b850
	ctx.lr = 0x83145850;
	sub_8246B850(ctx, base);
loc_83145850:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83145854:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8314580c
	if (cr6.gt) goto loc_8314580C;
loc_8314585C:
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// beq cr6,0x83145874
	if (cr6.eq) goto loc_83145874;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x83145878
	if (!cr6.lt) goto loc_83145878;
loc_83145874:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_83145878:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83145890
	if (!cr6.eq) goto loc_83145890;
loc_83145884:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x83145890;
	sub_82AB5F20(ctx, base);
loc_83145890:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x831457dc
	if (!cr0.eq) goto loc_831457DC;
loc_8314589C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(ctx.r29.u32, 7, xer);
	// blt cr6,0x8314579c
	if (cr6.lt) goto loc_8314579C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831458b8
	if (cr6.eq) goto loc_831458B8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x831458B8;
	sub_82416268(ctx, base);
loc_831458B8:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r4,4(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x8306b430
	ctx.lr = 0x831458CC;
	sub_8306B430(ctx, base);
	// lwz r10,4(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x83145928
	if (cr0.eq) goto loc_83145928;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// ori r29,r11,59752
	ctx.r29.u64 = ctx.r11.u64 | 59752;
loc_831458F0:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x83132e70
	ctx.lr = 0x83145908;
	sub_83132E70(ctx, base);
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r6.u32, xer);
	// blt cr6,0x831458f0
	if (cr6.lt) goto loc_831458F0;
loc_83145928:
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// bl 0x8313f7b8
	ctx.lr = 0x83145940;
	sub_8313F7B8(ctx, base);
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// lis r9,87
	ctx.r9.s64 = 5701632;
	// ori r28,r10,60644
	ctx.r28.u64 = ctx.r10.u64 | 60644;
	// lwz r8,4(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ori r22,r9,45232
	ctx.r22.u64 = ctx.r9.u64 | 45232;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// subf r5,r7,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// srawi. r4,r5,2
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mulli r10,r6,632
	ctx.r10.s64 = ctx.r6.s64 * 632;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r3,r22
	ctx.r10.u64 = ctx.r3.u64 + ctx.r22.u64;
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// beq 0x83145b8c
	if (cr0.eq) goto loc_83145B8C;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r10,52
	ctx.r29.s64 = ctx.r10.s64 + 52;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r24,-31772
	ctx.r24.s64 = -2082209792;
	// add r20,r11,r17
	ctx.r20.u64 = ctx.r11.u64 + ctx.r17.u64;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// subf r10,r17,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r17.s64;
	// addi r19,r11,6836
	ctx.r19.s64 = ctx.r11.s64 + 6836;
	// divw r25,r10,r23
	ctx.r25.s32 = PPCDivide(ctx.r10.s32, ctx.r23.s32);
	// lwz r23,100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_831459B0:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// lwzx r30,r26,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// ble cr6,0x83145a08
	if (!cr6.gt) goto loc_83145A08;
loc_831459C8:
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// bge cr6,0x831459fc
	if (!cr6.lt) goto loc_831459FC;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x83145a00
	goto loc_83145A00;
loc_831459FC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83145A00:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x831459c8
	if (cr6.gt) goto loc_831459C8;
loc_83145A08:
	// cmplw cr6,r8,r20
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, xer);
	// beq cr6,0x83145a1c
	if (cr6.eq) goto loc_83145A1C;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83145a20
	if (cr6.eq) goto loc_83145A20;
loc_83145A1C:
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
loc_83145A20:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83145a70
	if (!cr6.eq) goto loc_83145A70;
	// lis r11,58
	ctx.r11.s64 = 3801088;
	// lwz r10,12(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// ori r9,r11,44832
	ctx.r9.u64 = ctx.r11.u64 | 44832;
	// add r11,r10,r14
	ctx.r11.u64 = ctx.r10.u64 + ctx.r14.u64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83145b68
	if (cr6.eq) goto loc_83145B68;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83145A4C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83145a5c
	if (!cr6.eq) goto loc_83145A5C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83145A5C:
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bdnz 0x83145a4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83145A4C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83145b68
	if (cr6.eq) goto loc_83145B68;
	// b 0x83145a74
	goto loc_83145A74;
loc_83145A70:
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_83145A74:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// sth r16,-8(r29)
	PPC_STORE_U16(ctx.r29.u32 + -8, ctx.r16.u16);
	// stw r30,-4(r29)
	PPC_STORE_U32(ctx.r29.u32 + -4, ctx.r30.u32);
	// lwz r11,-13652(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -13652);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83145aac
	if (cr6.eq) goto loc_83145AAC;
	// addi r5,r31,62
	ctx.r5.s64 = ctx.r31.s64 + 62;
loc_83145AAC:
	// bl 0x831ce7d8
	ctx.lr = 0x83145AB0;
	sub_831CE7D8(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83145ae0
	if (!cr6.eq) goto loc_83145AE0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831d0b08
	ctx.lr = 0x83145AD0;
	sub_831D0B08(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x83145AE0;
	sub_831CE7D8(ctx, base);
loc_83145AE0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r27,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r27.s64;
	// rlwinm r30,r10,9,23,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FF;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// sth r30,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r30.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r16,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r16.u8);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x831366c8
	ctx.lr = 0x83145B1C;
	sub_831366C8(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x83145b4c
	if (cr6.eq) goto loc_83145B4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83145b3c
	if (cr6.eq) goto loc_83145B3C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,19,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1FF;
	// b 0x83145b40
	goto loc_83145B40;
loc_83145B3C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_83145B40:
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83145b58
	if (cr6.eq) goto loc_83145B58;
loc_83145B4C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r30,r10,19,23,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FF;
loc_83145B58:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// sth r30,46(r29)
	PPC_STORE_U16(ctx.r29.u32 + 46, ctx.r30.u16);
	// rlwinm r10,r11,0,16,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r10,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r10.u32);
loc_83145B68:
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r29,r29,632
	ctx.r29.s64 = ctx.r29.s64 + 632;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r21,r8
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r8.u32, xer);
	// blt cr6,0x831459b0
	if (cr6.lt) goto loc_831459B0;
loc_83145B8C:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// li r9,632
	ctx.r9.s64 = 632;
	// addi r6,r10,16040
	ctx.r6.s64 = ctx.r10.s64 + 16040;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwzx r8,r11,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// mulli r10,r8,632
	ctx.r10.s64 = ctx.r8.s64 * 632;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r7,r22
	ctx.r4.u64 = ctx.r7.u64 + ctx.r22.u64;
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r5,r9
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r9.s32);
	// bl 0x8313e580
	ctx.lr = 0x83145BBC;
	sub_8313E580(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83145bcc
	if (cr6.eq) goto loc_83145BCC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82416268
	ctx.lr = 0x83145BCC;
	sub_82416268(ctx, base);
loc_83145BCC:
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplw cr6,r18,r30
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r30.u32, xer);
	// beq cr6,0x83145c04
	if (cr6.eq) goto loc_83145C04;
loc_83145BDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145bec
	if (cr6.eq) goto loc_83145BEC;
	// bl 0x82416268
	ctx.lr = 0x83145BEC;
	sub_82416268(ctx, base);
loc_83145BEC:
	// stw r16,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r16.u32);
	// stw r16,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r16.u32);
	// stw r16,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r16.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x83145bdc
	if (!cr6.eq) goto loc_83145BDC;
loc_83145C04:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82416268
	ctx.lr = 0x83145C0C;
	sub_82416268(ctx, base);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x83145c1c
	if (cr6.eq) goto loc_83145C1C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82416268
	ctx.lr = 0x83145C1C;
	sub_82416268(ctx, base);
loc_83145C1C:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145C24"))) PPC_WEAK_FUNC(sub_83145C24);
PPC_FUNC_IMPL(__imp__sub_83145C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145C28"))) PPC_WEAK_FUNC(sub_83145C28);
PPC_FUNC_IMPL(__imp__sub_83145C28) {
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
	ctx.lr = 0x83145C30;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r20,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r20.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83142e38
	ctx.lr = 0x83145C58;
	sub_83142E38(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// addi r27,r11,8264
	ctx.r27.s64 = ctx.r11.s64 + 8264;
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83145C68:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x82efe928
	ctx.lr = 0x83145C78;
	sub_82EFE928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x82efe958
	ctx.lr = 0x83145C88;
	sub_82EFE958(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145d20
	if (cr6.eq) goto loc_83145D20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,-8
	ctx.r29.s64 = ctx.r31.s64 + -8;
loc_83145C98:
	// lbz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 14);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x83145cf4
	if (cr6.gt) goto loc_83145CF4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83145ccc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83145CCC;
	// bdzf 4*cr6+eq,0x83145cd4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83145CD4;
	// bdzf 4*cr6+eq,0x83145cdc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83145CDC;
	// bdzf 4*cr6+eq,0x83145ce4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83145CE4;
	// bne cr6,0x83145cec
	if (!cr6.eq) goto loc_83145CEC;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x83145cf8
	goto loc_83145CF8;
loc_83145CCC:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x83145cf8
	goto loc_83145CF8;
loc_83145CD4:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x83145cf8
	goto loc_83145CF8;
loc_83145CDC:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x83145cf8
	goto loc_83145CF8;
loc_83145CE4:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x83145cf8
	goto loc_83145CF8;
loc_83145CEC:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x83145cf8
	goto loc_83145CF8;
loc_83145CF4:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_83145CF8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r3,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x8311c750
	ctx.lr = 0x83145D04;
	sub_8311C750(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x83145D18;
	sub_82AB5F20(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83145c98
	if (!cr0.eq) goto loc_83145C98;
loc_83145D20:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,7
	cr6.compare<uint32_t>(ctx.r28.u32, 7, xer);
	// blt cr6,0x83145c68
	if (cr6.lt) goto loc_83145C68;
	// clrlwi r23,r26,24
	ctx.r23.u64 = ctx.r26.u32 & 0xFF;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// bne cr6,0x83145ddc
	if (!cr6.eq) goto loc_83145DDC;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83145ddc
	if (cr6.eq) goto loc_83145DDC;
	// addi r29,r21,112
	ctx.r29.s64 = ctx.r21.s64 + 112;
	// li r4,10000
	ctx.r4.s64 = 10000;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ab5b98
	ctx.lr = 0x83145D6C;
	sub_82AB5B98(ctx, base);
	// lis r11,58
	ctx.r11.s64 = 3801088;
	// lwz r9,12(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// ori r10,r11,44824
	ctx.r10.u64 = ctx.r11.u64 | 44824;
	// addis r11,r9,57
	ctx.r11.s64 = ctx.r9.s64 + 3735552;
	// addi r11,r11,-3064
	ctx.r11.s64 = ctx.r11.s64 + -3064;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83145dc8
	if (cr6.eq) goto loc_83145DC8;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_83145D90:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8311c750
	ctx.lr = 0x83145D9C;
	sub_8311C750(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x83145DAC;
	sub_82AB5F20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ab5f20
	ctx.lr = 0x83145DB8;
	sub_82AB5F20(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83145d90
	if (!cr0.eq) goto loc_83145D90;
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83145DC8:
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// srawi r5,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8306b430
	ctx.lr = 0x83145DDC;
	sub_8306B430(ctx, base);
loc_83145DDC:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// addi r24,r21,112
	ctx.r24.s64 = ctx.r21.s64 + 112;
	// addi r27,r11,8236
	ctx.r27.s64 = ctx.r11.s64 + 8236;
loc_83145DF0:
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r31,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// bl 0x82efe928
	ctx.lr = 0x83145E04;
	sub_82EFE928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r4,r31,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// lwz r3,8(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// bl 0x82efe958
	ctx.lr = 0x83145E14;
	sub_82EFE958(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82ab5b98
	ctx.lr = 0x83145E28;
	sub_82AB5B98(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83145ed8
	if (cr6.eq) goto loc_83145ED8;
loc_83145E30:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8311c750
	ctx.lr = 0x83145E3C;
	sub_8311C750(ctx, base);
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bne cr6,0x83145ec0
	if (!cr6.eq) goto loc_83145EC0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83145ec0
	if (!cr6.eq) goto loc_83145EC0;
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// srawi. r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x83145e98
	if (!cr0.gt) goto loc_83145E98;
loc_83145E60:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// bge cr6,0x83145e8c
	if (!cr6.lt) goto loc_83145E8C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83145e90
	goto loc_83145E90;
loc_83145E8C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83145E90:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83145e60
	if (cr6.gt) goto loc_83145E60;
loc_83145E98:
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// beq cr6,0x83145eb0
	if (cr6.eq) goto loc_83145EB0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x83145eb4
	if (!cr6.lt) goto loc_83145EB4;
loc_83145EB0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83145EB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83145ecc
	if (!cr6.eq) goto loc_83145ECC;
loc_83145EC0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ab5f20
	ctx.lr = 0x83145ECC;
	sub_82AB5F20(ctx, base);
loc_83145ECC:
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x83145e30
	if (!cr0.eq) goto loc_83145E30;
loc_83145ED8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(ctx.r29.u32, 7, xer);
	// blt cr6,0x83145df0
	if (cr6.lt) goto loc_83145DF0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83145ef4
	if (cr6.eq) goto loc_83145EF4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x83145EF4;
	sub_82416268(ctx, base);
loc_83145EF4:
	// addi r31,r21,-16
	ctx.r31.s64 = ctx.r21.s64 + -16;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83145EFC:
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzu r3,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x8306b430
	ctx.lr = 0x83145F10;
	sub_8306B430(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x83145efc
	if (!cr0.eq) goto loc_83145EFC;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// ori r28,r11,19684
	ctx.r28.u64 = ctx.r11.u64 | 19684;
loc_83145F28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83145f7c
	if (cr0.eq) goto loc_83145F7C;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_83145F44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r5,r11,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83124fd0
	ctx.lr = 0x83145F5C;
	sub_83124FD0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r29,r6
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, xer);
	// blt cr6,0x83145f44
	if (cr6.lt) goto loc_83145F44;
loc_83145F7C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r27,8
	cr6.compare<uint32_t>(ctx.r27.u32, 8, xer);
	// blt cr6,0x83145f28
	if (cr6.lt) goto loc_83145F28;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x83145fd4
	if (cr6.eq) goto loc_83145FD4;
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// cmplw cr6,r21,r30
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r30.u32, xer);
	// beq cr6,0x83145fcc
	if (cr6.eq) goto loc_83145FCC;
loc_83145FA4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145fb4
	if (cr6.eq) goto loc_83145FB4;
	// bl 0x82416268
	ctx.lr = 0x83145FB4;
	sub_82416268(ctx, base);
loc_83145FB4:
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// stw r20,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r20.u32);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x83145fa4
	if (!cr6.eq) goto loc_83145FA4;
loc_83145FCC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82416268
	ctx.lr = 0x83145FD4;
	sub_82416268(ctx, base);
loc_83145FD4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145FDC"))) PPC_WEAK_FUNC(sub_83145FDC);
PPC_FUNC_IMPL(__imp__sub_83145FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83145FE0"))) PPC_WEAK_FUNC(sub_83145FE0);
PPC_FUNC_IMPL(__imp__sub_83145FE0) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314605c
	if (cr6.eq) goto loc_8314605C;
	// bl 0x8313fb88
	ctx.lr = 0x83146004;
	sub_8313FB88(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831420f8
	ctx.lr = 0x8314600C;
	sub_831420F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831409c0
	ctx.lr = 0x83146018;
	sub_831409C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83143a30
	ctx.lr = 0x83146024;
	sub_83143A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83142040
	ctx.lr = 0x83146030;
	sub_83142040(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83141a30
	ctx.lr = 0x83146038;
	sub_83141A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83145c28
	ctx.lr = 0x83146044;
	sub_83145C28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83145438
	ctx.lr = 0x83146050;
	sub_83145438(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
loc_8314605C:
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

__attribute__((alias("__imp__sub_83146074"))) PPC_WEAK_FUNC(sub_83146074);
PPC_FUNC_IMPL(__imp__sub_83146074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146078"))) PPC_WEAK_FUNC(sub_83146078);
PPC_FUNC_IMPL(__imp__sub_83146078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83146080;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831463c4
	if (cr6.eq) goto loc_831463C4;
	// bl 0x8313fb88
	ctx.lr = 0x83146098;
	sub_8313FB88(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831420f8
	ctx.lr = 0x831460A0;
	sub_831420F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831409c0
	ctx.lr = 0x831460AC;
	sub_831409C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83143a30
	ctx.lr = 0x831460B8;
	sub_83143A30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83142040
	ctx.lr = 0x831460C4;
	sub_83142040(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83141a30
	ctx.lr = 0x831460CC;
	sub_83141A30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83145c28
	ctx.lr = 0x831460D8;
	sub_83145C28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83145438
	ctx.lr = 0x831460E4;
	sub_83145438(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831463bc
	if (cr6.eq) goto loc_831463BC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831463bc
	if (cr6.eq) goto loc_831463BC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,58
	ctx.r10.s64 = 3801088;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r7,r10,44800
	ctx.r7.u64 = ctx.r10.u64 | 44800;
	// ori r6,r9,27328
	ctx.r6.u64 = ctx.r9.u64 | 27328;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r3,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x831461a8
	if (!cr6.gt) goto loc_831461A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_83146148:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stwx r6,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwimi r5,r4,0,3,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1FFFFFFF) | (ctx.r5.u64 & 0xFFFFFFFFE0000000);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83146148
	if (cr6.gt) goto loc_83146148;
loc_831461A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,58
	ctx.r10.s64 = 3801088;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r7,r10,44840
	ctx.r7.u64 = ctx.r10.u64 | 44840;
	// ori r6,r9,27332
	ctx.r6.u64 = ctx.r9.u64 | 27332;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stwx r3,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x83146268
	if (!cr6.gt) goto loc_83146268;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r3,55
	ctx.r3.s64 = 3604480;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r30,57
	ctx.r30.s64 = 3735552;
	// ori r5,r6,22532
	ctx.r5.u64 = ctx.r6.u64 | 22532;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r3,r3,20608
	ctx.r3.u64 = ctx.r3.u64 | 20608;
	// ori r4,r11,22528
	ctx.r4.u64 = ctx.r11.u64 | 22528;
	// ori r6,r30,43140
	ctx.r6.u64 = ctx.r30.u64 | 43140;
loc_83146208:
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwzx r10,r30,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,0,3,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x1FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFE0000000);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r30,r10,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83146208
	if (cr6.gt) goto loc_83146208;
loc_83146268:
	// lis r9,58
	ctx.r9.s64 = 3801088;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r9,44844
	ctx.r28.u64 = ctx.r9.u64 | 44844;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x831462c4
	if (!cr6.gt) goto loc_831462C4;
	// lis r29,57
	ctx.r29.s64 = 3735552;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r29,r29,47936
	ctx.r29.u64 = ctx.r29.u64 | 47936;
	// ori r27,r9,27336
	ctx.r27.u64 = ctx.r9.u64 | 27336;
loc_83146290:
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x835977d8
	ctx.lr = 0x831462A8;
	sub_835977D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x83146290
	if (cr6.gt) goto loc_83146290;
loc_831462C4:
	// lis r9,58
	ctx.r9.s64 = 3801088;
	// ori r30,r9,44820
	ctx.r30.u64 = ctx.r9.u64 | 44820;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,10000
	cr6.compare<uint32_t>(ctx.r8.u32, 10000, xer);
	// bgt cr6,0x831463bc
	if (cr6.gt) goto loc_831463BC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r26,r10,27356
	ctx.r26.u64 = ctx.r10.u64 | 27356;
	// ori r29,r9,27352
	ctx.r29.u64 = ctx.r9.u64 | 27352;
	// lwzx r8,r28,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83146340
	if (!cr6.eq) goto loc_83146340;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r27,r28,r26
	ctx.r27.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83146340
	if (!cr6.eq) goto loc_83146340;
	// li r11,28
	ctx.r11.s64 = 28;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,40000
	ctx.r4.u64 = ctx.r4.u64 | 40000;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x83146324;
	sub_82595718(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// ori r5,r5,40000
	ctx.r5.u64 = ctx.r5.u64 | 40000;
	// bl 0x831cdcf0
	ctx.lr = 0x83146338;
	sub_831CDCF0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
loc_83146340:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stwx r7,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r7.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ble cr6,0x831463bc
	if (!cr6.gt) goto loc_831463BC;
	// lis r7,45
	ctx.r7.s64 = 2949120;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r7,63368
	ctx.r7.u64 = ctx.r7.u64 | 63368;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_83146380:
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 72;
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// lwzx r5,r3,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r3,r4,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bgt cr6,0x83146380
	if (cr6.gt) goto loc_83146380;
loc_831463BC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
loc_831463C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831463D0"))) PPC_WEAK_FUNC(sub_831463D0);
PPC_FUNC_IMPL(__imp__sub_831463D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831463D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314647c
	if (cr6.eq) goto loc_8314647C;
	// bl 0x8313fb88
	ctx.lr = 0x831463F0;
	sub_8313FB88(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831420f8
	ctx.lr = 0x831463F8;
	sub_831420F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831409c0
	ctx.lr = 0x83146404;
	sub_831409C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83143a30
	ctx.lr = 0x83146410;
	sub_83143A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83142040
	ctx.lr = 0x8314641C;
	sub_83142040(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83141a30
	ctx.lr = 0x83146424;
	sub_83141A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83145c28
	ctx.lr = 0x83146430;
	sub_83145C28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83145438
	ctx.lr = 0x8314643C;
	sub_83145438(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83146440;
	sub_831156E8(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831156e8
	ctx.lr = 0x83146448;
	sub_831156E8(ctx, base);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// beq cr6,0x83146470
	if (cr6.eq) goto loc_83146470;
loc_83146454:
	// bl 0x831156e8
	ctx.lr = 0x83146458;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83146464;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x83146454
	if (!cr6.eq) goto loc_83146454;
loc_83146470:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
loc_8314647C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146488"))) PPC_WEAK_FUNC(sub_83146488);
PPC_FUNC_IMPL(__imp__sub_83146488) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314651c
	if (cr6.eq) goto loc_8314651C;
	// bl 0x8313fb88
	ctx.lr = 0x831464AC;
	sub_8313FB88(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831420f8
	ctx.lr = 0x831464B4;
	sub_831420F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x831409c0
	ctx.lr = 0x831464C0;
	sub_831409C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83143a30
	ctx.lr = 0x831464CC;
	sub_83143A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83142040
	ctx.lr = 0x831464D8;
	sub_83142040(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83140090
	ctx.lr = 0x831464E0;
	sub_83140090(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83141a30
	ctx.lr = 0x831464E8;
	sub_83141A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83145c28
	ctx.lr = 0x831464F4;
	sub_83145C28(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83140c78
	ctx.lr = 0x831464FC;
	sub_83140C78(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83140528
	ctx.lr = 0x83146504;
	sub_83140528(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83145438
	ctx.lr = 0x83146510;
	sub_83145438(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,48(r10)
	PPC_STORE_U8(ctx.r10.u32 + 48, ctx.r11.u8);
loc_8314651C:
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

__attribute__((alias("__imp__sub_83146534"))) PPC_WEAK_FUNC(sub_83146534);
PPC_FUNC_IMPL(__imp__sub_83146534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146538"))) PPC_WEAK_FUNC(sub_83146538);
PPC_FUNC_IMPL(__imp__sub_83146538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x831465a4
	if (cr6.gt) goto loc_831465A4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x831465a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831465A4;
	// bdzf 4*cr6+eq,0x83146568
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83146568;
	// bdzf 4*cr6+eq,0x8314657c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8314657C;
	// bne cr6,0x83146590
	if (!cr6.eq) goto loc_83146590;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83146568:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,30,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8314657C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83146590:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,21,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7F;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_831465A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831465AC"))) PPC_WEAK_FUNC(sub_831465AC);
PPC_FUNC_IMPL(__imp__sub_831465AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831465B0"))) PPC_WEAK_FUNC(sub_831465B0);
PPC_FUNC_IMPL(__imp__sub_831465B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x83146618
	if (cr6.gt) goto loc_83146618;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83146618
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83146618;
	// bdzf 4*cr6+eq,0x831465dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831465DC;
	// bdzf 4*cr6+eq,0x831465f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831465F0;
	// bne cr6,0x83146604
	if (!cr6.eq) goto loc_83146604;
	// sth r5,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831465DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r5,2,16,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0xFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0003);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831465F0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,18,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83146604:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r5,11,14,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 11) & 0x3F800) | (ctx.r11.u64 & 0xFFFFFFFFFFFC07FF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83146618:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146620"))) PPC_WEAK_FUNC(sub_83146620);
PPC_FUNC_IMPL(__imp__sub_83146620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83146628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8314663c
	if (!cr6.eq) goto loc_8314663C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// b 0x8314665c
	goto loc_8314665C;
loc_8314663C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x8314664c
	if (!cr6.eq) goto loc_8314664C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8314665c
	goto loc_8314665C;
loc_8314664C:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x8314665c
	if (cr6.eq) goto loc_8314665C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8314665C:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83146670
	if (!cr6.eq) goto loc_83146670;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// b 0x83146694
	goto loc_83146694;
loc_83146670:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83146680
	if (!cr6.eq) goto loc_83146680;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83146694
	goto loc_83146694;
loc_83146680:
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
loc_83146694:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r4,104
	ctx.r31.s64 = ctx.r4.s64 + 104;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// rlwimi r9,r8,11,14,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x3F800) | (ctx.r9.u64 & 0xFFFFFFFFFFFC07FF);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_831466B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831466b0
	if (!cr6.eq) goto loc_831466B0;
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
	ctx.lr = 0x831466E0;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r30,97
	cr6.compare<uint32_t>(ctx.r30.u32, 97, xer);
	// ble cr6,0x831466ec
	if (!cr6.gt) goto loc_831466EC;
	// li r30,97
	ctx.r30.s64 = 97;
loc_831466EC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x831466FC;
	sub_831CE980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146704"))) PPC_WEAK_FUNC(sub_83146704);
PPC_FUNC_IMPL(__imp__sub_83146704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146708"))) PPC_WEAK_FUNC(sub_83146708);
PPC_FUNC_IMPL(__imp__sub_83146708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x83146778
	if (cr6.gt) goto loc_83146778;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8314673c
	if (cr6.eq) goto loc_8314673C;
	// bdz 0x83146728
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83146728;
	// bdz 0x83146764
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83146764;
	// b 0x83146750
	goto loc_83146750;
loc_83146728:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8314673C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,27,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1FF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83146750:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83146764:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_83146778:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146780"))) PPC_WEAK_FUNC(sub_83146780);
PPC_FUNC_IMPL(__imp__sub_83146780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8314679c
	if (!cr6.eq) goto loc_8314679C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,10,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// b 0x831467cc
	goto loc_831467CC;
loc_8314679C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x831467b0
	if (!cr6.eq) goto loc_831467B0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831467cc
	goto loc_831467CC;
loc_831467B0:
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x831467c4
	if (!cr6.eq) goto loc_831467C4;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r11,1023
	ctx.r11.s64 = 1023;
	// b 0x831467cc
	goto loc_831467CC;
loc_831467C4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_831467CC:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x831467e4
	if (!cr6.eq) goto loc_831467E4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// b 0x83146808
	goto loc_83146808;
loc_831467E4:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x831467f4
	if (!cr6.eq) goto loc_831467F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83146808
	goto loc_83146808;
loc_831467F4:
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r6,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
loc_83146808:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8314681c
	if (!cr6.eq) goto loc_8314681C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x8314683c
	goto loc_8314683C;
loc_8314681C:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x8314682c
	if (!cr6.eq) goto loc_8314682C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8314683c
	goto loc_8314683C;
loc_8314682C:
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// addic r6,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 & ctx.r7.u64;
loc_8314683C:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r6,r8,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r9,4,19,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0x1FF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE00F);
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
	// rlwimi r5,r11,14,0,17
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0xFFFFC000) | (ctx.r5.u64 & 0xFFFFFFFF00003FFF);
	// or r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 | ctx.r6.u64;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// rlwimi r11,r10,1,18,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3FFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC001);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146868"))) PPC_WEAK_FUNC(sub_83146868);
PPC_FUNC_IMPL(__imp__sub_83146868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83146870;
	__savegprlr_27(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r28,r30,14
	ctx.r28.u64 = ctx.r30.u32 & 0x3FFFF;
	// lwz r11,-4096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4096);
	// clrlwi r29,r11,14
	ctx.r29.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// beq cr6,0x83146900
	if (cr6.eq) goto loc_83146900;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r31,r11,8956
	ctx.r31.u64 = ctx.r11.u64 | 8956;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
loc_831468A8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// ble cr6,0x831468c0
	if (!cr6.gt) goto loc_831468C0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_831468C0:
	// clrlwi r9,r9,14
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFF;
	// subf r9,r9,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r9.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83146908
	if (!cr6.eq) goto loc_83146908;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x831468e4
	if (!cr6.gt) goto loc_831468E4;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_831468E4:
	// clrlwi r11,r10,14
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x83146938
	if (cr6.eq) goto loc_83146938;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,60
	ctx.r4.s64 = ctx.r4.s64 + 60;
	// cmplwi cr6,r8,850
	cr6.compare<uint32_t>(ctx.r8.u32, 850, xer);
	// blt cr6,0x831468a8
	if (cr6.lt) goto loc_831468A8;
loc_83146900:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83146908:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x83146930
	if (!cr6.lt) goto loc_83146930;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r8,r11,18624
	ctx.r8.s64 = ctx.r11.s64 + 18624;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
loc_83146930:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83146938:
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r30,14
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFF;
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bge cr6,0x83146930
	if (!cr6.lt) goto loc_83146930;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r8,r11,18624
	ctx.r8.s64 = ctx.r11.s64 + 18624;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146980"))) PPC_WEAK_FUNC(sub_83146980);
PPC_FUNC_IMPL(__imp__sub_83146980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83146988;
	__savegprlr_28(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r31,r10,14
	ctx.r31.u64 = ctx.r10.u32 & 0x3FFFF;
	// lwz r29,-4096(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4096);
	// clrlwi r10,r29,14
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x831469f0
	if (cr6.eq) goto loc_831469F0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r5,r11,8956
	ctx.r5.u64 = ctx.r11.u64 | 8956;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
loc_831469C0:
	// lwz r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r11,r28,14
	ctx.r11.u64 = ctx.r28.u32 & 0x3FFFF;
	// cmplw cr6,r28,r7
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, xer);
	// ble cr6,0x831469d4
	if (!cr6.gt) goto loc_831469D4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831469D4:
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x831469f8
	if (cr6.eq) goto loc_831469F8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 + 60;
	// cmplwi cr6,r9,850
	cr6.compare<uint32_t>(ctx.r9.u32, 850, xer);
	// blt cr6,0x831469c0
	if (cr6.lt) goto loc_831469C0;
loc_831469F0:
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_831469F8:
	// mulli r11,r9,60
	ctx.r11.s64 = ctx.r9.s64 * 60;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r11,r10,14
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFF;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x83146a14
	if (!cr6.gt) goto loc_83146A14;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83146A14:
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x83146a30
	if (!cr6.lt) goto loc_83146A30;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83146A30:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x83146a40
	if (!cr6.eq) goto loc_83146A40;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83146A40:
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x831469f0
	if (cr6.eq) goto loc_831469F0;
	// clrlwi r11,r10,14
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// ble cr6,0x83146a5c
	if (!cr6.gt) goto loc_83146A5C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83146A5C:
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x83146a78
	if (!cr6.lt) goto loc_83146A78;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_83146A78:
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x831469f0
	if (cr6.eq) goto loc_831469F0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146A88"))) PPC_WEAK_FUNC(sub_83146A88);
PPC_FUNC_IMPL(__imp__sub_83146A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83146A90;
	__savegprlr_29(ctx, base);
	// lhz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r30,17
	ctx.r11.u64 = ctx.r30.u32 & 0x7FFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// beq cr6,0x83146b84
	if (cr6.eq) goto loc_83146B84;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,-4144
	ctx.r6.s64 = ctx.r11.s64 + -4144;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83146acc
	if (!cr6.eq) goto loc_83146ACC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83146af4
	goto loc_83146AF4;
loc_83146ACC:
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83146aec
	if (!cr6.eq) goto loc_83146AEC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83146af0
	if (cr6.eq) goto loc_83146AF0;
loc_83146AEC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83146AF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83146AF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83146b84
	if (!cr6.eq) goto loc_83146B84;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// ld r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// ori r8,r11,6716
	ctx.r8.u64 = ctx.r11.u64 | 6716;
	// add r10,r31,r8
	ctx.r10.u64 = ctx.r31.u64 + ctx.r8.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83146B1C:
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r4,-48(r1)
	PPC_STORE_U16(ctx.r1.u32 + -48, ctx.r4.u16);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// stw r29,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r29.u32);
	// bne cr6,0x83146b38
	if (!cr6.eq) goto loc_83146B38;
	// std r6,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r6.u64);
	// b 0x83146b40
	goto loc_83146B40;
loc_83146B38:
	// ld r29,-48(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r29,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r29.u64);
loc_83146B40:
	// lwz r29,-36(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// cmplw cr6,r29,r7
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, xer);
	// beq cr6,0x83146b8c
	if (cr6.eq) goto loc_83146B8C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,250
	cr6.compare<uint32_t>(ctx.r9.u32, 250, xer);
	// blt cr6,0x83146b1c
	if (cr6.lt) goto loc_83146B1C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83146B60:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// sth r4,-40(r1)
	PPC_STORE_U16(ctx.r1.u32 + -40, ctx.r4.u16);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// stw r9,-36(r1)
	PPC_STORE_U32(ctx.r1.u32 + -36, ctx.r9.u32);
	// beq cr6,0x83146ba0
	if (cr6.eq) goto loc_83146BA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,250
	cr6.compare<uint32_t>(ctx.r11.u32, 250, xer);
	// blt cr6,0x83146b60
	if (cr6.lt) goto loc_83146B60;
loc_83146B84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83146B8C:
	// addi r11,r9,9032
	ctx.r11.s64 = ctx.r9.s64 + 9032;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sthx r30,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u16);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83146BA0:
	// addi r10,r11,9032
	ctx.r10.s64 = ctx.r11.s64 + 9032;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// sthx r30,r9,r31
	PPC_STORE_U16(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u16);
	// ld r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r6,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r6.u64);
	// lwz r5,-36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -36);
	// stwx r5,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146BCC"))) PPC_WEAK_FUNC(sub_83146BCC);
PPC_FUNC_IMPL(__imp__sub_83146BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146BD0"))) PPC_WEAK_FUNC(sub_83146BD0);
PPC_FUNC_IMPL(__imp__sub_83146BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83146BD8;
	__savegprlr_26(ctx, base);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// beq cr6,0x83146d1c
	if (cr6.eq) goto loc_83146D1C;
	// lis r27,-31772
	ctx.r27.s64 = -2082209792;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,-4096(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4096);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83146d1c
	if (cr6.eq) goto loc_83146D1C;
	// addis r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,-28282
	ctx.r10.s64 = ctx.r10.s64 + -28282;
	// ori r29,r11,8956
	ctx.r29.u64 = ctx.r11.u64 | 8956;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r3,r29
	ctx.r7.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_83146C38:
	// lwz r26,0(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r26,14
	ctx.r11.u64 = ctx.r26.u32 & 0x3FFFF;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, xer);
	// ble cr6,0x83146c4c
	if (!cr6.gt) goto loc_83146C4C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83146C4C:
	// lwz r26,0(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// xor r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83146c90
	if (cr6.eq) goto loc_83146C90;
	// cmplwi cr6,r6,21
	cr6.compare<uint32_t>(ctx.r6.u32, 21, xer);
	// bge cr6,0x83146c80
	if (!cr6.lt) goto loc_83146C80;
	// lhz r26,0(r4)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r26.u16);
	// b 0x83146c84
	goto loc_83146C84;
loc_83146C80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83146C84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83146cf0
	if (!cr6.eq) goto loc_83146CF0;
loc_83146C90:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 + 60;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplwi cr6,r8,850
	cr6.compare<uint32_t>(ctx.r8.u32, 850, xer);
	// blt cr6,0x83146c38
	if (cr6.lt) goto loc_83146C38;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_83146CB0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r7,14
	ctx.r11.u64 = ctx.r7.u32 & 0x3FFFF;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// ble cr6,0x83146cc4
	if (!cr6.gt) goto loc_83146CC4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83146CC4:
	// lwz r7,-4096(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4096);
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83146d08
	if (!cr6.eq) goto loc_83146D08;
	// cmplwi cr6,r6,21
	cr6.compare<uint32_t>(ctx.r6.u32, 21, xer);
	// bge cr6,0x83146cf8
	if (!cr6.lt) goto loc_83146CF8;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// b 0x83146cfc
	goto loc_83146CFC;
loc_83146CF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83146CF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83146CFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83146d24
	if (!cr6.eq) goto loc_83146D24;
loc_83146D08:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 + 60;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplwi cr6,r8,850
	cr6.compare<uint32_t>(ctx.r8.u32, 850, xer);
	// blt cr6,0x83146cb0
	if (cr6.lt) goto loc_83146CB0;
loc_83146D1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83146D24:
	// mulli r11,r8,60
	ctx.r11.s64 = ctx.r8.s64 * 60;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r8,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r8.u32);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146D40"))) PPC_WEAK_FUNC(sub_83146D40);
PPC_FUNC_IMPL(__imp__sub_83146D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83146D48;
	__savegprlr_29(ctx, base);
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r10,r11,17
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// beq cr6,0x83146e34
	if (cr6.eq) goto loc_83146E34;
	// lhz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x83146e34
	if (cr6.eq) goto loc_83146E34;
	// addis r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,-28409
	ctx.r10.s64 = ctx.r10.s64 + -28409;
	// ori r31,r11,8716
	ctx.r31.u64 = ctx.r11.u64 | 8716;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83146D90:
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bne cr6,0x83146dc8
	if (!cr6.eq) goto loc_83146DC8;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bge cr6,0x83146db8
	if (!cr6.lt) goto loc_83146DB8;
	// lhz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// b 0x83146dbc
	goto loc_83146DBC;
loc_83146DB8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83146DBC:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83146e08
	if (!cr6.eq) goto loc_83146E08;
loc_83146DC8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplwi cr6,r7,40
	cr6.compare<uint32_t>(ctx.r7.u32, 40, xer);
	// blt cr6,0x83146d90
	if (cr6.lt) goto loc_83146D90;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_83146DE4:
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// bne cr6,0x83146e20
	if (!cr6.eq) goto loc_83146E20;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bge cr6,0x83146e10
	if (!cr6.lt) goto loc_83146E10;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// b 0x83146e14
	goto loc_83146E14;
loc_83146E08:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83146E10:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83146E14:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83146e3c
	if (!cr6.eq) goto loc_83146E3C;
loc_83146E20:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// blt cr6,0x83146de4
	if (cr6.lt) goto loc_83146DE4;
loc_83146E34:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83146E3C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sthx r9,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u16);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83146E5C"))) PPC_WEAK_FUNC(sub_83146E5C);
PPC_FUNC_IMPL(__imp__sub_83146E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83146E60"))) PPC_WEAK_FUNC(sub_83146E60);
PPC_FUNC_IMPL(__imp__sub_83146E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r9,-4144
	ctx.r3.s64 = ctx.r9.s64 + -4144;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r5,-4144(r9)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4144);
	// addi r11,r11,6716
	ctx.r11.s64 = ctx.r11.s64 + 6716;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_83146E88:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r7,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r7.u16);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// stw r3,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r3.u32);
	// bne cr6,0x83146ea4
	if (!cr6.eq) goto loc_83146EA4;
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// b 0x83146eac
	goto loc_83146EAC;
loc_83146EA4:
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
loc_83146EAC:
	// lwz r3,-4(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// beq cr6,0x83146ed0
	if (cr6.eq) goto loc_83146ED0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// blt cr6,0x83146e88
	if (cr6.lt) goto loc_83146E88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83146ED0:
	// addi r11,r10,9032
	ctx.r11.s64 = ctx.r10.s64 + 9032;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// sth r9,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146EE8"))) PPC_WEAK_FUNC(sub_83146EE8);
PPC_FUNC_IMPL(__imp__sub_83146EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-28282
	ctx.r11.s64 = ctx.r11.s64 + -28282;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8956
	ctx.r9.s64 = ctx.r9.s64 + 8956;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
loc_83146F14:
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r31,14
	ctx.r11.u64 = ctx.r31.u32 & 0x3FFFF;
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r7.u32, xer);
	// ble cr6,0x83146f28
	if (!cr6.gt) goto loc_83146F28;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83146F28:
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// xor r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83146f64
	if (!cr6.eq) goto loc_83146F64;
	// cmplwi cr6,r6,21
	cr6.compare<uint32_t>(ctx.r6.u32, 21, xer);
	// bge cr6,0x83146f54
	if (!cr6.lt) goto loc_83146F54;
	// lhz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r31.u16);
	// b 0x83146f58
	goto loc_83146F58;
loc_83146F54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83146F58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83146f84
	if (!cr6.eq) goto loc_83146F84;
loc_83146F64:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 + 60;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplwi cr6,r8,850
	cr6.compare<uint32_t>(ctx.r8.u32, 850, xer);
	// blt cr6,0x83146f14
	if (cr6.lt) goto loc_83146F14;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83146F84:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146F90"))) PPC_WEAK_FUNC(sub_83146F90);
PPC_FUNC_IMPL(__imp__sub_83146F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,-28409
	ctx.r11.s64 = ctx.r11.s64 + -28409;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,8716
	ctx.r9.s64 = ctx.r9.s64 + 8716;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_83146FAC:
	// lhz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// bne cr6,0x83146fe4
	if (!cr6.eq) goto loc_83146FE4;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bge cr6,0x83146fd4
	if (!cr6.lt) goto loc_83146FD4;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// b 0x83146fd8
	goto loc_83146FD8;
loc_83146FD4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83146FD8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83147000
	if (!cr6.eq) goto loc_83147000;
loc_83146FE4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 6;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// cmplwi cr6,r8,40
	cr6.compare<uint32_t>(ctx.r8.u32, 40, xer);
	// blt cr6,0x83146fac
	if (cr6.lt) goto loc_83146FAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83147000:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147008"))) PPC_WEAK_FUNC(sub_83147008);
PPC_FUNC_IMPL(__imp__sub_83147008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,6714
	ctx.r5.u64 = ctx.r5.u64 | 6714;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8314702C;
	sub_831CDCF0(ctx, base);
	// li r11,50
	ctx.r11.s64 = 50;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// addi r10,r10,6712
	ctx.r10.s64 = ctx.r10.s64 + 6712;
	// addi r9,r9,-4144
	ctx.r9.s64 = ctx.r9.s64 + -4144;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
loc_8314704C:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// sth r11,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// sth r11,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// sth r11,32(r10)
	PPC_STORE_U16(ctx.r10.u32 + 32, ctx.r11.u16);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r8.u32);
	// sthu r11,40(r10)
	ea = 40 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8314704c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314704C;
	// li r9,8
	ctx.r9.s64 = 8;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,8714
	ctx.r10.s64 = ctx.r10.s64 + 8714;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314709C:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// sth r11,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r11.u16);
	// sth r11,10(r10)
	PPC_STORE_U16(ctx.r10.u32 + 10, ctx.r11.u16);
	// sth r11,12(r10)
	PPC_STORE_U16(ctx.r10.u32 + 12, ctx.r11.u16);
	// sth r11,14(r10)
	PPC_STORE_U16(ctx.r10.u32 + 14, ctx.r11.u16);
	// sth r11,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// sth r11,18(r10)
	PPC_STORE_U16(ctx.r10.u32 + 18, ctx.r11.u16);
	// sth r11,20(r10)
	PPC_STORE_U16(ctx.r10.u32 + 20, ctx.r11.u16);
	// sth r11,22(r10)
	PPC_STORE_U16(ctx.r10.u32 + 22, ctx.r11.u16);
	// sth r11,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, ctx.r11.u16);
	// sth r11,26(r10)
	PPC_STORE_U16(ctx.r10.u32 + 26, ctx.r11.u16);
	// sth r11,28(r10)
	PPC_STORE_U16(ctx.r10.u32 + 28, ctx.r11.u16);
	// sthu r11,30(r10)
	ea = 30 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8314709c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314709C;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// li r5,850
	ctx.r5.s64 = 850;
	// addi r10,r10,8964
	ctx.r10.s64 = ctx.r10.s64 + 8964;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
loc_831470EC:
	// lwz r8,-4096(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4096);
	// li r7,21
	ctx.r7.s64 = 21;
	// addi r6,r10,6
	ctx.r6.s64 = ctx.r10.s64 + 6;
	// clrlwi r8,r8,14
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFF;
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r8,-4096(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4096);
	// clrlwi r4,r8,14
	ctx.r4.u64 = ctx.r8.u32 & 0x3FFFF;
	// stw r4,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r4.u32);
	// lwz r8,-4096(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4096);
	// clrlwi r3,r8,14
	ctx.r3.u64 = ctx.r8.u32 & 0x3FFFF;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// lwz r8,-4096(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4096);
	// clrlwi r8,r8,14
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFF;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_83147128:
	// sthu r11,2(r6)
	ea = 2 + ctx.r6.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x83147128
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83147128;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// bne 0x831470ec
	if (!cr0.eq) goto loc_831470EC;
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

__attribute__((alias("__imp__sub_83147150"))) PPC_WEAK_FUNC(sub_83147150);
PPC_FUNC_IMPL(__imp__sub_83147150) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83146e60
	ctx.lr = 0x8314717C;
	sub_83146E60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83147190
	if (!cr6.eq) goto loc_83147190;
loc_83147188:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831471d8
	goto loc_831471D8;
loc_83147190:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x83147188
	if (!cr6.lt) goto loc_83147188;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r9,6464
	ctx.r7.u64 = ctx.r9.u64 | 6464;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x83147188
	if (!cr6.lt) goto loc_83147188;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83147188
	if (cr6.eq) goto loc_83147188;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x831471D4;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831471D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831471F0"))) PPC_WEAK_FUNC(sub_831471F0);
PPC_FUNC_IMPL(__imp__sub_831471F0) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83146ee8
	ctx.lr = 0x8314721C;
	sub_83146EE8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83147230
	if (!cr6.eq) goto loc_83147230;
loc_83147228:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83147284
	goto loc_83147284;
loc_83147230:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// beq cr6,0x83147228
	if (cr6.eq) goto loc_83147228;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x83147228
	if (!cr6.lt) goto loc_83147228;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r9,6464
	ctx.r7.u64 = ctx.r9.u64 | 6464;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x83147228
	if (!cr6.lt) goto loc_83147228;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83147228
	if (cr6.eq) goto loc_83147228;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83147280;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83147284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314729C"))) PPC_WEAK_FUNC(sub_8314729C);
PPC_FUNC_IMPL(__imp__sub_8314729C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831472A0"))) PPC_WEAK_FUNC(sub_831472A0);
PPC_FUNC_IMPL(__imp__sub_831472A0) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x83146ee8
	ctx.lr = 0x831472C4;
	sub_83146EE8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831472e8
	if (!cr6.eq) goto loc_831472E8;
loc_831472D0:
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
loc_831472E8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// bne cr6,0x831472d0
	if (!cr6.eq) goto loc_831472D0;
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83147318"))) PPC_WEAK_FUNC(sub_83147318);
PPC_FUNC_IMPL(__imp__sub_83147318) {
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
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83146f90
	ctx.lr = 0x83147344;
	sub_83146F90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83147358
	if (!cr6.eq) goto loc_83147358;
loc_83147350:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831473a0
	goto loc_831473A0;
loc_83147358:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplwi cr6,r11,2000
	cr6.compare<uint32_t>(ctx.r11.u32, 2000, xer);
	// bge cr6,0x83147350
	if (!cr6.lt) goto loc_83147350;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r9,6464
	ctx.r7.u64 = ctx.r9.u64 | 6464;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x83147350
	if (!cr6.lt) goto loc_83147350;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83147350
	if (cr6.eq) goto loc_83147350;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x8314739C;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_831473A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831473B8"))) PPC_WEAK_FUNC(sub_831473B8);
PPC_FUNC_IMPL(__imp__sub_831473B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r8,-4144
	ctx.r4.s64 = ctx.r8.s64 + -4144;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r9,r11,6716
	ctx.r9.u64 = ctx.r11.u64 | 6716;
	// ld r5,-4144(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4144);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// add r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_831473E0:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sth r7,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r7.u16);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// stw r4,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// bne cr6,0x831473fc
	if (!cr6.eq) goto loc_831473FC;
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// b 0x83147404
	goto loc_83147404;
loc_831473FC:
	// ld r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r4.u64);
loc_83147404:
	// lwz r4,-4(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// beq cr6,0x83147428
	if (cr6.eq) goto loc_83147428;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,250
	cr6.compare<uint32_t>(ctx.r10.u32, 250, xer);
	// blt cr6,0x831473e0
	if (cr6.lt) goto loc_831473E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83147428:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// sth r10,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147448"))) PPC_WEAK_FUNC(sub_83147448);
PPC_FUNC_IMPL(__imp__sub_83147448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// addi r10,r10,8956
	ctx.r10.s64 = ctx.r10.s64 + 8956;
	// li r4,-1
	ctx.r4.s64 = -1;
	// ori r8,r11,65535
	ctx.r8.u64 = ctx.r11.u64 | 65535;
	// li r6,21
	ctx.r6.s64 = 21;
loc_83147470:
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r31,14
	ctx.r11.u64 = ctx.r31.u32 & 0x3FFFF;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// ble cr6,0x83147484
	if (!cr6.gt) goto loc_83147484;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83147484:
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x831474a4
	if (!cr6.eq) goto loc_831474A4;
	// subfc r11,r6,r5
	xer.ca = ctx.r5.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831474c0
	if (!cr6.eq) goto loc_831474C0;
loc_831474A4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// cmplwi cr6,r9,850
	cr6.compare<uint32_t>(ctx.r9.u32, 850, xer);
	// blt cr6,0x83147470
	if (cr6.lt) goto loc_83147470;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831474C0:
	// cmplwi cr6,r5,21
	cr6.compare<uint32_t>(ctx.r5.u32, 21, xer);
	// bge cr6,0x831474e4
	if (!cr6.lt) goto loc_831474E4;
	// mulli r11,r9,30
	ctx.r11.s64 = ctx.r9.s64 * 30;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-28282
	ctx.r9.s64 = ctx.r9.s64 + -28282;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
loc_831474E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831474F0"))) PPC_WEAK_FUNC(sub_831474F0);
PPC_FUNC_IMPL(__imp__sub_831474F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8716
	ctx.r10.s64 = ctx.r10.s64 + 8716;
	// li r8,2
	ctx.r8.s64 = 2;
loc_83147504:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x83147524
	if (!cr6.eq) goto loc_83147524;
	// subfc r7,r8,r5
	xer.ca = ctx.r5.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8314753c
	if (!cr6.eq) goto loc_8314753C;
loc_83147524:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// blt cr6,0x83147504
	if (cr6.lt) goto loc_83147504;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8314753C:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// bge cr6,0x83147564
	if (!cr6.lt) goto loc_83147564;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,-1
	ctx.r9.s64 = -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addis r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 65536;
	// addi r7,r7,-28409
	ctx.r7.s64 = ctx.r7.s64 + -28409;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u16);
loc_83147564:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314756C"))) PPC_WEAK_FUNC(sub_8314756C);
PPC_FUNC_IMPL(__imp__sub_8314756C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147570"))) PPC_WEAK_FUNC(sub_83147570);
PPC_FUNC_IMPL(__imp__sub_83147570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83147578;
	__savegprlr_28(ctx, base);
	// li r11,300
	ctx.r11.s64 = 300;
	// li r10,600
	ctx.r10.s64 = 600;
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r11,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// li r31,12
	ctx.r31.s64 = 12;
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// li r30,16
	ctx.r30.s64 = 16;
	// stw r10,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r10.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r11,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r11.u32);
	// stw r11,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r11.u32);
	// li r7,75
	ctx.r7.s64 = 75;
	// stw r10,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r10.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r11.u32);
	// li r11,40
	ctx.r11.s64 = 40;
	// sth r4,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r4.u16);
	// li r29,110
	ctx.r29.s64 = 110;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r30.u16);
	// li r31,360
	ctx.r31.s64 = 360;
	// li r30,400
	ctx.r30.s64 = 400;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// li r10,30
	ctx.r10.s64 = 30;
	// li r11,350
	ctx.r11.s64 = 350;
	// sth r7,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r7.u16);
	// sth r7,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r7.u16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// sth r29,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r29.u16);
	// li r6,50
	ctx.r6.s64 = 50;
	// stw r4,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r4.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// stw r31,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r31.u32);
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// stw r30,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r30.u32);
	// li r7,170
	ctx.r7.s64 = 170;
	// li r29,60
	ctx.r29.s64 = 60;
	// stw r10,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r10.u32);
	// li r9,450
	ctx.r9.s64 = 450;
	// stw r11,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r11.u32);
	// li r4,150
	ctx.r4.s64 = 150;
	// sth r6,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// li r31,200
	ctx.r31.s64 = 200;
	// stw r7,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r7.u32);
	// li r30,500
	ctx.r30.s64 = 500;
	// stw r29,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, ctx.r29.u32);
	// li r28,2000
	ctx.r28.s64 = 2000;
	// stw r6,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r6.u32);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// stw r9,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r9.u32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// stw r31,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r31.u32);
	// stw r30,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r30.u32);
	// stw r28,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r28.u32);
	// stw r5,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r5.u32);
loc_83147660:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x83147660
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83147660;
	// sth r5,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r5.u16);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147678"))) PPC_WEAK_FUNC(sub_83147678);
PPC_FUNC_IMPL(__imp__sub_83147678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83147680:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bne cr6,0x831476ac
	if (!cr6.eq) goto loc_831476AC;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r7,r8,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// bne cr6,0x831476ac
	if (!cr6.eq) goto loc_831476AC;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// beq cr6,0x831476c4
	if (cr6.eq) goto loc_831476C4;
loc_831476AC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// blt cr6,0x83147680
	if (cr6.lt) goto loc_83147680;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831476C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831476CC"))) PPC_WEAK_FUNC(sub_831476CC);
PPC_FUNC_IMPL(__imp__sub_831476CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831476D0"))) PPC_WEAK_FUNC(sub_831476D0);
PPC_FUNC_IMPL(__imp__sub_831476D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831476D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831476F4:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831476f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831476F4;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x830ff290
	ctx.lr = 0x83147708;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x831477a8
	if (cr6.gt) goto loc_831477A8;
	// lis r12,-31980
	ctx.r12.s64 = -2095841280;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30512
	ctx.r12.s64 = ctx.r12.s64 + 30512;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83147778;
	case 1:
		goto loc_83147780;
	case 2:
		goto loc_831477A8;
	case 3:
		goto loc_83147778;
	case 4:
		goto loc_83147780;
	case 5:
		goto loc_831477A8;
	case 6:
		goto loc_831477A8;
	case 7:
		goto loc_831477A8;
	case 8:
		goto loc_831477A8;
	case 9:
		goto loc_831477A8;
	case 10:
		goto loc_83147788;
	case 11:
		goto loc_83147788;
	case 12:
		goto loc_831477A8;
	case 13:
		goto loc_8314779C;
	case 14:
		goto loc_8314779C;
	case 15:
		goto loc_831477A8;
	case 16:
		goto loc_831477A4;
	case 17:
		goto loc_831477A4;
	default:
		return;
	}
	// lwz r24,30584(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30584);
	// lwz r24,30592(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30592);
	// lwz r24,30632(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30632);
	// lwz r24,30584(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30584);
	// lwz r24,30592(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30592);
	// lwz r24,30632(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30632);
	// lwz r24,30632(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30632);
	// lwz r24,30632(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30632);
	// lwz r24,30632(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30632);
	// lwz r24,30632(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30632);
	// lwz r24,30600(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30600);
	// lwz r24,30600(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30600);
	// lwz r24,30632(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30632);
	// lwz r24,30620(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30620);
	// lwz r24,30620(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30620);
	// lwz r24,30632(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30632);
	// lwz r24,30628(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30628);
	// lwz r24,30628(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + 30628);
loc_83147778:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x831477a8
	goto loc_831477A8;
loc_83147780:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x831477a8
	goto loc_831477A8;
loc_83147788:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831477a8
	if (cr6.eq) goto loc_831477A8;
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x831477a8
	goto loc_831477A8;
loc_8314779C:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x831477a8
	goto loc_831477A8;
loc_831477A4:
	// li r31,8
	ctx.r31.s64 = 8;
loc_831477A8:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x831477c0
	if (cr6.lt) goto loc_831477C0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x831477c0
	if (cr6.gt) goto loc_831477C0;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
loc_831477C0:
	// li r3,8
	ctx.r3.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_831477C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_831477D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r9,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// bne cr6,0x831477fc
	if (!cr6.eq) goto loc_831477FC;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r7,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x831477fc
	if (!cr6.eq) goto loc_831477FC;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83147850
	if (cr6.eq) goto loc_83147850;
loc_831477FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// blt cr6,0x831477d0
	if (cr6.lt) goto loc_831477D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83147810:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314783c
	if (cr6.eq) goto loc_8314783C;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x83147828
	if (!cr6.eq) goto loc_83147828;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_83147828:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314783c
	if (cr6.eq) goto loc_8314783C;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8314783C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// blt cr6,0x831477c8
	if (cr6.lt) goto loc_831477C8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83147850:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x83147810
	goto loc_83147810;
}

__attribute__((alias("__imp__sub_83147858"))) PPC_WEAK_FUNC(sub_83147858);
PPC_FUNC_IMPL(__imp__sub_83147858) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83147898
	if (!cr6.eq) goto loc_83147898;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,-3864(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3864);
	// bl 0x83104938
	ctx.lr = 0x83147890;
	sub_83104938(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x83103b18
	ctx.lr = 0x83147898;
	sub_83103B18(ctx, base);
loc_83147898:
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

__attribute__((alias("__imp__sub_831478AC"))) PPC_WEAK_FUNC(sub_831478AC);
PPC_FUNC_IMPL(__imp__sub_831478AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831478B0"))) PPC_WEAK_FUNC(sub_831478B0);
PPC_FUNC_IMPL(__imp__sub_831478B0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831478dc
	if (cr6.eq) goto loc_831478DC;
	// bl 0x83103bb8
	ctx.lr = 0x831478CC;
	sub_83103BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831478e0
	if (cr6.eq) goto loc_831478E0;
loc_831478DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831478E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831478F4"))) PPC_WEAK_FUNC(sub_831478F4);
PPC_FUNC_IMPL(__imp__sub_831478F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831478F8"))) PPC_WEAK_FUNC(sub_831478F8);
PPC_FUNC_IMPL(__imp__sub_831478F8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147924
	if (cr6.eq) goto loc_83147924;
	// bl 0x83103e98
	ctx.lr = 0x8314791C;
	sub_83103E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83147924:
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

__attribute__((alias("__imp__sub_83147938"))) PPC_WEAK_FUNC(sub_83147938);
PPC_FUNC_IMPL(__imp__sub_83147938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83147940;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8314797c
	if (cr6.eq) goto loc_8314797C;
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
	ctx.lr = 0x83147974;
	sub_831CE420(ctx, base);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_8314797C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831479c4
	if (cr6.eq) goto loc_831479C4;
	// bl 0x83103d60
	ctx.lr = 0x8314798C;
	sub_83103D60(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x831479c4
	if (cr6.lt) goto loc_831479C4;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8314799C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83103d60
	ctx.lr = 0x831479A4;
	sub_83103D60(ctx, base);
	// lwzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x835977d8
	ctx.lr = 0x831479B8;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8314799c
	if (!cr0.eq) goto loc_8314799C;
loc_831479C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831479CC"))) PPC_WEAK_FUNC(sub_831479CC);
PPC_FUNC_IMPL(__imp__sub_831479CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831479D0"))) PPC_WEAK_FUNC(sub_831479D0);
PPC_FUNC_IMPL(__imp__sub_831479D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x831479D8;
	__savegprlr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// addi r21,r11,-3640
	ctx.r21.s64 = ctx.r11.s64 + -3640;
	// li r16,0
	ctx.r16.s64 = 0;
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// ori r24,r10,14904
	ctx.r24.u64 = ctx.r10.u64 | 14904;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// addi r22,r4,120
	ctx.r22.s64 = ctx.r4.s64 + 120;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// addi r20,r6,248
	ctx.r20.s64 = ctx.r6.s64 + 248;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r17,r9,42280
	ctx.r17.u64 = ctx.r9.u64 | 42280;
	// li r18,-1
	ctx.r18.s64 = -1;
loc_83147A24:
	// lhz r11,808(r19)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r19.u32 + 808);
	// ld r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// clrlwi r8,r11,25
	ctx.r8.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bge cr6,0x83147a44
	if (!cr6.lt) goto loc_83147A44;
	// ld r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_83147A44:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83147a5c
	if (!cr6.eq) goto loc_83147A5C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x83147a84
	goto loc_83147A84;
loc_83147A5C:
	// lhz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83147a7c
	if (!cr6.eq) goto loc_83147A7C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x83147a80
	if (cr6.eq) goto loc_83147A80;
loc_83147A7C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_83147A80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83147A84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83147bcc
	if (!cr6.eq) goto loc_83147BCC;
	// bl 0x831156e8
	ctx.lr = 0x83147A94;
	sub_831156E8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83147ad8
	if (cr6.eq) goto loc_83147AD8;
	// bl 0x831156e8
	ctx.lr = 0x83147AA4;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r24
	ctx.r3.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// bl 0x83123be0
	ctx.lr = 0x83147ABC;
	sub_83123BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x83147AC8;
	sub_82B1E0E8(ctx, base);
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r31,r11,7176
	ctx.r31.s64 = ctx.r11.s64 + 7176;
	// stb r25,7176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7176, ctx.r25.u8);
	// b 0x83147b90
	goto loc_83147B90;
loc_83147AD8:
	// bl 0x831156e8
	ctx.lr = 0x83147ADC;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 + ctx.r28.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
	// bl 0x8311bf98
	ctx.lr = 0x83147AF4;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x83147B00;
	sub_82B1E0E8(ctx, base);
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// addi r31,r11,7176
	ctx.r31.s64 = ctx.r11.s64 + 7176;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r25,7176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7176, ctx.r25.u8);
	// beq cr6,0x83147b34
	if (cr6.eq) goto loc_83147B34;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83153e98
	ctx.lr = 0x83147B24;
	sub_83153E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83147b34
	if (!cr6.eq) goto loc_83147B34;
	// stb r16,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r16.u8);
loc_83147B34:
	// ldx r11,r30,r17
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r17.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83147b58
	if (!cr6.eq) goto loc_83147B58;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83147b80
	goto loc_83147B80;
loc_83147B58:
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83147b78
	if (!cr6.eq) goto loc_83147B78;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x83147b7c
	if (cr6.eq) goto loc_83147B7C;
loc_83147B78:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_83147B7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83147B80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83147b90
	if (cr6.eq) goto loc_83147B90;
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
loc_83147B90:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83147bb4
	if (cr6.eq) goto loc_83147BB4;
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r11.u8);
loc_83147BB4:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r3,r18
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, xer);
	// bge cr6,0x83147bc8
	if (!cr6.lt) goto loc_83147BC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83179380
	ctx.lr = 0x83147BC8;
	sub_83179380(ctx, base);
loc_83147BC8:
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
loc_83147BCC:
	// addi r26,r26,224
	ctx.r26.s64 = ctx.r26.s64 + 224;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r20,r20,8
	ctx.r20.s64 = ctx.r20.s64 + 8;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpwi cr6,r26,7168
	cr6.compare<int32_t>(ctx.r26.s32, 7168, xer);
	// blt cr6,0x83147a24
	if (cr6.lt) goto loc_83147A24;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147BEC"))) PPC_WEAK_FUNC(sub_83147BEC);
PPC_FUNC_IMPL(__imp__sub_83147BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147BF0"))) PPC_WEAK_FUNC(sub_83147BF0);
PPC_FUNC_IMPL(__imp__sub_83147BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,32
	cr6.compare<int32_t>(ctx.r4.s32, 32, xer);
	// bge cr6,0x83147c64
	if (!cr6.lt) goto loc_83147C64;
	// mulli r11,r4,224
	ctx.r11.s64 = ctx.r4.s64 * 224;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-3640
	ctx.r11.s64 = ctx.r11.s64 + -3640;
	// ld r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + 52);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// bne cr6,0x83147c2c
	if (!cr6.eq) goto loc_83147C2C;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83147c54
	goto loc_83147C54;
loc_83147C2C:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83147c4c
	if (!cr6.eq) goto loc_83147C4C;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83147c50
	if (cr6.eq) goto loc_83147C50;
loc_83147C4C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83147C50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83147C54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83147C64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147C6C"))) PPC_WEAK_FUNC(sub_83147C6C);
PPC_FUNC_IMPL(__imp__sub_83147C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147C70"))) PPC_WEAK_FUNC(sub_83147C70);
PPC_FUNC_IMPL(__imp__sub_83147C70) {
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83147C90;
	sub_831CDCF0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83147C9C:
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// blt cr6,0x83147c9c
	if (cr6.lt) goto loc_83147C9C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_83147CC0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r9.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt cr6,0x83147cc0
	if (cr6.lt) goto loc_83147CC0;
	// sth r9,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r9.u16);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r9,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r9.u8);
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// sth r9,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r9.u16);
	// stb r9,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_83147D04"))) PPC_WEAK_FUNC(sub_83147D04);
PPC_FUNC_IMPL(__imp__sub_83147D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147D08"))) PPC_WEAK_FUNC(sub_83147D08);
PPC_FUNC_IMPL(__imp__sub_83147D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83147D10;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce778
	ctx.lr = 0x83147D18;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f29,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f28,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f28.f64 = double(temp.f32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lfs f30,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
loc_83147D4C:
	// cmpwi cr6,r28,32
	cr6.compare<int32_t>(ctx.r28.s32, 32, xer);
	// bge cr6,0x83147d60
	if (!cr6.lt) goto loc_83147D60;
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// lbz r11,7176(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7176);
	// b 0x83147d64
	goto loc_83147D64;
loc_83147D60:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83147D64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83147e7c
	if (cr6.eq) goto loc_83147E7C;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// bge cr6,0x83147d84
	if (!cr6.lt) goto loc_83147D84;
	// add r11,r28,r25
	ctx.r11.u64 = ctx.r28.u64 + ctx.r25.u64;
	// lbz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// b 0x83147d88
	goto loc_83147D88;
loc_83147D84:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_83147D88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83147e7c
	if (cr6.eq) goto loc_83147E7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83147bf0
	ctx.lr = 0x83147DA0;
	sub_83147BF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147e7c
	if (cr6.eq) goto loc_83147E7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83147bf0
	ctx.lr = 0x83147DB8;
	sub_83147BF0(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83123620
	ctx.lr = 0x83147DC8;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x83147DD8;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83147e78
	if (cr6.eq) goto loc_83147E78;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83147DF0:
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x83147e18
	if (!cr6.lt) goto loc_83147E18;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// bne cr6,0x83147e44
	if (!cr6.eq) goto loc_83147E44;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// b 0x83147e1c
	goto loc_83147E1C;
loc_83147E18:
	// li r3,13
	ctx.r3.s64 = 13;
loc_83147E1C:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x83123620
	ctx.lr = 0x83147E24;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x83147E34;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83147e44
	if (cr6.eq) goto loc_83147E44;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83147E44:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83147df0
	if (cr6.lt) goto loc_83147DF0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83147e78
	if (cr6.eq) goto loc_83147E78;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f30,f12
	ctx.f31.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
loc_83147E78:
	// fsubs f29,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
loc_83147E7C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,32
	cr6.compare<uint32_t>(ctx.r28.u32, 32, xer);
	// blt cr6,0x83147d4c
	if (cr6.lt) goto loc_83147D4C;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831ce7c4
	ctx.lr = 0x83147E98;
	__restfpr_28(ctx, base);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83147E9C"))) PPC_WEAK_FUNC(sub_83147E9C);
PPC_FUNC_IMPL(__imp__sub_83147E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147EA0"))) PPC_WEAK_FUNC(sub_83147EA0);
PPC_FUNC_IMPL(__imp__sub_83147EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bne cr6,0x83147ec0
	if (!cr6.eq) goto loc_83147EC0;
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83147EC0:
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x83147ed0
	if (!cr6.eq) goto loc_83147ED0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83147ED0:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83147f0c
	if (!cr6.eq) goto loc_83147F0C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83147ef8
	if (!cr6.eq) goto loc_83147EF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83147EF8:
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_83147F0C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F1C"))) PPC_WEAK_FUNC(sub_83147F1C);
PPC_FUNC_IMPL(__imp__sub_83147F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83147F20"))) PPC_WEAK_FUNC(sub_83147F20);
PPC_FUNC_IMPL(__imp__sub_83147F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83147F28;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// bgt cr6,0x83147fa0
	if (cr6.gt) goto loc_83147FA0;
	// bge cr6,0x83147f54
	if (!cr6.lt) goto loc_83147F54;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lbz r11,7176(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7176);
	// b 0x83147f58
	goto loc_83147F58;
loc_83147F54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83147F58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83147fa0
	if (cr6.eq) goto loc_83147FA0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r26,188
	ctx.r11.s64 = ctx.r26.s64 + 188;
loc_83147F70:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// beq cr6,0x83147f90
	if (cr6.eq) goto loc_83147F90;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x83147f70
	if (cr6.lt) goto loc_83147F70;
	// b 0x83147f94
	goto loc_83147F94;
loc_83147F90:
	// li r8,1
	ctx.r8.s64 = 1;
loc_83147F94:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83147fa4
	if (!cr6.eq) goto loc_83147FA4;
loc_83147FA0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_83147FA4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831480e8
	if (cr6.eq) goto loc_831480E8;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r28,188(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-3640
	ctx.r30.s64 = ctx.r11.s64 + -3640;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_83147FC8:
	// addi r11,r27,47
	ctx.r11.s64 = ctx.r27.s64 + 47;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r26
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// bge cr6,0x831480d0
	if (!cr6.lt) goto loc_831480D0;
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lbz r8,7176(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7176);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831480d0
	if (cr6.eq) goto loc_831480D0;
	// mulli r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 * 224;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ld r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x83148014
	if (!cr6.eq) goto loc_83148014;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x8314803c
	goto loc_8314803C;
loc_83148014:
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83148034
	if (!cr6.eq) goto loc_83148034;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83148038
	if (cr6.eq) goto loc_83148038;
loc_83148034:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83148038:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314803C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831480d0
	if (!cr6.eq) goto loc_831480D0;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831480d0
	if (cr6.eq) goto loc_831480D0;
	// ld r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x83148074
	if (!cr6.eq) goto loc_83148074;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314809c
	goto loc_8314809C;
loc_83148074:
	// lhz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83148094
	if (!cr6.eq) goto loc_83148094;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83148098
	if (cr6.eq) goto loc_83148098;
loc_83148094:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83148098:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314809C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// bl 0x83151e90
	ctx.lr = 0x831480B4;
	sub_83151E90(ctx, base);
	// clrlwi r6,r29,24
	ctx.r6.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bge cr6,0x831480d0
	if (!cr6.lt) goto loc_831480D0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_831480D0:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83147fc8
	if (cr6.lt) goto loc_83147FC8;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
loc_831480E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831480F0"))) PPC_WEAK_FUNC(sub_831480F0);
PPC_FUNC_IMPL(__imp__sub_831480F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831480F8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r26,r11,-3640
	ctx.r26.s64 = ctx.r11.s64 + -3640;
loc_83148110:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r23,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// bgt cr6,0x83148178
	if (cr6.gt) goto loc_83148178;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// bne cr6,0x8314813c
	if (!cr6.eq) goto loc_8314813C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// beq cr6,0x83148178
	if (cr6.eq) goto loc_83148178;
loc_8314813C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r27,188
	ctx.r11.s64 = ctx.r27.s64 + 188;
loc_83148148:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// beq cr6,0x83148168
	if (cr6.eq) goto loc_83148168;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x83148148
	if (cr6.lt) goto loc_83148148;
	// b 0x8314816c
	goto loc_8314816C;
loc_83148168:
	// li r8,1
	ctx.r8.s64 = 1;
loc_8314816C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314817c
	if (!cr6.eq) goto loc_8314817C;
loc_83148178:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8314817C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831482f4
	if (cr6.eq) goto loc_831482F4;
	// lwz r28,188(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 188);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
loc_83148198:
	// addi r11,r30,47
	ctx.r11.s64 = ctx.r30.s64 + 47;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// bge cr6,0x831482dc
	if (!cr6.lt) goto loc_831482DC;
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// lbz r8,7176(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7176);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831482dc
	if (cr6.eq) goto loc_831482DC;
	// mulli r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 * 224;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ld r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x831481e4
	if (!cr6.eq) goto loc_831481E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x8314820c
	goto loc_8314820C;
loc_831481E4:
	// lhz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x83148204
	if (!cr6.eq) goto loc_83148204;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83148208
	if (cr6.eq) goto loc_83148208;
loc_83148204:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83148208:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314820C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831482dc
	if (!cr6.eq) goto loc_831482DC;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831482dc
	if (cr6.eq) goto loc_831482DC;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// bne cr6,0x83148238
	if (!cr6.eq) goto loc_83148238;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// beq cr6,0x831482dc
	if (cr6.eq) goto loc_831482DC;
loc_83148238:
	// ld r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bne cr6,0x8314825c
	if (!cr6.eq) goto loc_8314825C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83148284
	goto loc_83148284;
loc_8314825C:
	// lhz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x8314827c
	if (!cr6.eq) goto loc_8314827C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83148280
	if (cr6.eq) goto loc_83148280;
loc_8314827C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83148280:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83148284:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// bl 0x83151df8
	ctx.lr = 0x8314829C;
	sub_83151DF8(ctx, base);
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x831482c0
	if (!cr6.lt) goto loc_831482C0;
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831482c0
	if (!cr6.eq) goto loc_831482C0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x831482c0
	if (cr6.eq) goto loc_831482C0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831482C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x831482dc
	if (!cr6.lt) goto loc_831482DC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_831482DC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83148198
	if (cr6.lt) goto loc_83148198;
	// stwx r28,r23,r27
	PPC_STORE_U32(ctx.r23.u32 + ctx.r27.u32, ctx.r28.u32);
loc_831482F4:
	// addi r11,r25,1
	ctx.r11.s64 = ctx.r25.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x83148110
	if (cr6.lt) goto loc_83148110;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83148310"))) PPC_WEAK_FUNC(sub_83148310);
PPC_FUNC_IMPL(__imp__sub_83148310) {
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
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x83148398
	if (!cr6.eq) goto loc_83148398;
	// bl 0x830ff290
	ctx.lr = 0x83148330;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x83148334;
	sub_830FFAA8(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x83148400
	if (cr6.gt) goto loc_83148400;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31912
	ctx.r12.s64 = ctx.r12.s64 + -31912;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831483E8;
	case 1:
		goto loc_831483E8;
	case 2:
		goto loc_83148400;
	case 3:
		goto loc_83148400;
	case 4:
		goto loc_83148400;
	case 5:
		goto loc_83148400;
	case 6:
		goto loc_83148400;
	case 7:
		goto loc_83148400;
	case 8:
		goto loc_83148400;
	case 9:
		goto loc_83148400;
	case 10:
		goto loc_831483E8;
	case 11:
		goto loc_831483E8;
	case 12:
		goto loc_831483E8;
	case 13:
		goto loc_831483E8;
	case 14:
		goto loc_831483E8;
	case 15:
		goto loc_831483E8;
	default:
		return;
	}
	// lwz r24,-31768(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31768);
	// lwz r24,-31768(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31768);
	// lwz r24,-31744(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31744);
	// lwz r24,-31744(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31744);
	// lwz r24,-31744(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31744);
	// lwz r24,-31744(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31744);
	// lwz r24,-31744(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31744);
	// lwz r24,-31744(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31744);
	// lwz r24,-31744(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31744);
	// lwz r24,-31744(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31744);
	// lwz r24,-31768(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31768);
	// lwz r24,-31768(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31768);
	// lwz r24,-31768(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31768);
	// lwz r24,-31768(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31768);
	// lwz r24,-31768(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31768);
	// lwz r24,-31768(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -31768);
loc_83148398:
	// bl 0x831156e8
	ctx.lr = 0x8314839C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831483bc
	if (cr6.eq) goto loc_831483BC;
	// bl 0x83115808
	ctx.lr = 0x831483AC;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x831483c0
	if (!cr6.eq) goto loc_831483C0;
loc_831483BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831483C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148400
	if (cr6.eq) goto loc_83148400;
	// bl 0x831156e8
	ctx.lr = 0x831483D0;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r3,r11,192
	ctx.r3.s64 = ctx.r11.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x831483E0;
	sub_83126788(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x83148400
	if (!cr6.eq) goto loc_83148400;
loc_831483E8:
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
loc_83148400:
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

__attribute__((alias("__imp__sub_83148418"))) PPC_WEAK_FUNC(sub_83148418);
PPC_FUNC_IMPL(__imp__sub_83148418) {
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
	// li r5,712
	ctx.r5.s64 = 712;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83148438;
	sub_831CDCF0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,23
	ctx.r8.s64 = 23;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stb r9,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r9.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
loc_8314845C:
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// blt cr6,0x8314845c
	if (cr6.lt) goto loc_8314845C;
	// li r8,32
	ctx.r8.s64 = 32;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// addi r6,r31,88
	ctx.r6.s64 = ctx.r31.s64 + 88;
	// addi r9,r31,116
	ctx.r9.s64 = ctx.r31.s64 + 116;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_83148494:
	// stbx r11,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r11.u8);
	// stbx r11,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83148494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148494;
	// stb r11,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r11.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r11,249(r31)
	PPC_STORE_U8(ctx.r31.u32 + 249, ctx.r11.u8);
	// stb r11,250(r31)
	PPC_STORE_U8(ctx.r31.u32 + 250, ctx.r11.u8);
	// stb r11,251(r31)
	PPC_STORE_U8(ctx.r31.u32 + 251, ctx.r11.u8);
	// stb r11,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r11.u8);
	// stb r11,253(r31)
	PPC_STORE_U8(ctx.r31.u32 + 253, ctx.r11.u8);
	// stb r11,254(r31)
	PPC_STORE_U8(ctx.r31.u32 + 254, ctx.r11.u8);
	// stb r11,255(r31)
	PPC_STORE_U8(ctx.r31.u32 + 255, ctx.r11.u8);
	// stb r11,256(r31)
	PPC_STORE_U8(ctx.r31.u32 + 256, ctx.r11.u8);
	// stb r11,257(r31)
	PPC_STORE_U8(ctx.r31.u32 + 257, ctx.r11.u8);
	// stb r11,258(r31)
	PPC_STORE_U8(ctx.r31.u32 + 258, ctx.r11.u8);
	// stb r11,259(r31)
	PPC_STORE_U8(ctx.r31.u32 + 259, ctx.r11.u8);
	// stb r11,260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 260, ctx.r11.u8);
	// stb r11,261(r31)
	PPC_STORE_U8(ctx.r31.u32 + 261, ctx.r11.u8);
loc_831484E4:
	// mulli r10,r9,14
	ctx.r10.s64 = ctx.r9.s64 * 14;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r10,262
	ctx.r8.s64 = ctx.r10.s64 + 262;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,262(r10)
	PPC_STORE_U8(ctx.r10.u32 + 262, ctx.r11.u8);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// stb r11,263(r10)
	PPC_STORE_U8(ctx.r10.u32 + 263, ctx.r11.u8);
	// stb r11,264(r10)
	PPC_STORE_U8(ctx.r10.u32 + 264, ctx.r11.u8);
	// stb r11,265(r10)
	PPC_STORE_U8(ctx.r10.u32 + 265, ctx.r11.u8);
	// stb r11,266(r10)
	PPC_STORE_U8(ctx.r10.u32 + 266, ctx.r11.u8);
	// stb r11,267(r10)
	PPC_STORE_U8(ctx.r10.u32 + 267, ctx.r11.u8);
	// stb r11,268(r10)
	PPC_STORE_U8(ctx.r10.u32 + 268, ctx.r11.u8);
	// stb r11,269(r10)
	PPC_STORE_U8(ctx.r10.u32 + 269, ctx.r11.u8);
	// stb r11,270(r10)
	PPC_STORE_U8(ctx.r10.u32 + 270, ctx.r11.u8);
	// stb r11,271(r10)
	PPC_STORE_U8(ctx.r10.u32 + 271, ctx.r11.u8);
	// stb r11,272(r10)
	PPC_STORE_U8(ctx.r10.u32 + 272, ctx.r11.u8);
	// stb r11,273(r10)
	PPC_STORE_U8(ctx.r10.u32 + 273, ctx.r11.u8);
	// stb r11,274(r10)
	PPC_STORE_U8(ctx.r10.u32 + 274, ctx.r11.u8);
	// stb r11,275(r10)
	PPC_STORE_U8(ctx.r10.u32 + 275, ctx.r11.u8);
	// blt cr6,0x831484e4
	if (cr6.lt) goto loc_831484E4;
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

__attribute__((alias("__imp__sub_8314854C"))) PPC_WEAK_FUNC(sub_8314854C);
PPC_FUNC_IMPL(__imp__sub_8314854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148550"))) PPC_WEAK_FUNC(sub_83148550);
PPC_FUNC_IMPL(__imp__sub_83148550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// ld r10,-3640(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3640);
	// std r10,4(r3)
	PPC_STORE_U64(ctx.r3.u32 + 4, ctx.r10.u64);
	// li r10,10
	ctx.r10.s64 = 10;
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r11.u8);
	// stb r11,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r11.u8);
loc_83148578:
	// addi r8,r11,30
	ctx.r8.s64 = ctx.r11.s64 + 30;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// sthx r9,r5,r3
	PPC_STORE_U16(ctx.r5.u32 + ctx.r3.u32, ctx.r9.u16);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stwx r10,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r10.u32);
	// blt cr6,0x83148578
	if (cr6.lt) goto loc_83148578;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831485A4"))) PPC_WEAK_FUNC(sub_831485A4);
PPC_FUNC_IMPL(__imp__sub_831485A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831485A8"))) PPC_WEAK_FUNC(sub_831485A8);
PPC_FUNC_IMPL(__imp__sub_831485A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-3640
	ctx.r10.s64 = ctx.r11.s64 + -3640;
	// lhz r6,-3640(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -3640);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_831485BC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x831485d4
	if (!cr6.eq) goto loc_831485D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831485fc
	goto loc_831485FC;
loc_831485D4:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831485f4
	if (!cr6.eq) goto loc_831485F4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831485f8
	if (cr6.eq) goto loc_831485F8;
loc_831485F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831485F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831485FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83148768
	if (!cr6.eq) goto loc_83148768;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83148620
	if (!cr6.eq) goto loc_83148620;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83148648
	goto loc_83148648;
loc_83148620:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83148640
	if (!cr6.eq) goto loc_83148640;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83148644
	if (cr6.eq) goto loc_83148644;
loc_83148640:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83148644:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83148648:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83148768
	if (!cr6.eq) goto loc_83148768;
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148750
	if (cr6.eq) goto loc_83148750;
	// lbz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83148748
	if (cr6.eq) goto loc_83148748;
	// lbz r11,13(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x83148724
	if (cr6.lt) goto loc_83148724;
	// bgt cr6,0x8314872c
	if (cr6.gt) goto loc_8314872C;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,10
	cr6.compare<int32_t>(ctx.r8.s32, 10, xer);
	// beq cr6,0x83148724
	if (cr6.eq) goto loc_83148724;
	// addi r11,r9,30
	ctx.r11.s64 = ctx.r9.s64 + 30;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r10,r4
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83148714
	if (cr6.eq) goto loc_83148714;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// cmplwi cr6,r8,6
	cr6.compare<uint32_t>(ctx.r8.u32, 6, xer);
	// bgt cr6,0x83148734
	if (cr6.gt) goto loc_83148734;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83148734
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83148734;
	// bdzf 4*cr6+eq,0x831486fc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831486FC;
	// bdzf 4*cr6+eq,0x83148734
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83148734;
	// bdzf 4*cr6+eq,0x831486e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831486E4;
	// bdzf 4*cr6+eq,0x83148734
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83148734;
	// bne cr6,0x831486e4
	if (!cr6.eq) goto loc_831486E4;
loc_831486E4:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r5,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// b 0x83148710
	goto loc_83148710;
loc_831486FC:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r5,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 31;
	// xor r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
loc_83148710:
	// bgt cr6,0x83148734
	if (cr6.gt) goto loc_83148734;
loc_83148714:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x831485bc
	if (cr6.lt) goto loc_831485BC;
loc_83148724:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8314872C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83148734:
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83148748:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314875c
	if (!cr6.eq) goto loc_8314875C;
loc_83148750:
	// lbz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83148724
	if (cr6.eq) goto loc_83148724;
loc_8314875C:
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83148768:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83148780
	if (!cr6.eq) goto loc_83148780;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831487a8
	goto loc_831487A8;
loc_83148780:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831487a0
	if (!cr6.eq) goto loc_831487A0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831487a4
	if (cr6.eq) goto loc_831487A4;
loc_831487A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831487A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831487A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148800
	if (cr6.eq) goto loc_83148800;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x831487cc
	if (!cr6.eq) goto loc_831487CC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831487f4
	goto loc_831487F4;
loc_831487CC:
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x831487ec
	if (!cr6.eq) goto loc_831487EC;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831487f0
	if (cr6.eq) goto loc_831487F0;
loc_831487EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831487F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831487F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83148724
	if (!cr6.eq) goto loc_83148724;
loc_83148800:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83148824
	if (!cr6.eq) goto loc_83148824;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_83148824:
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83148844
	if (!cr6.eq) goto loc_83148844;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83148848
	if (cr6.eq) goto loc_83148848;
loc_83148844:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83148848:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314885C"))) PPC_WEAK_FUNC(sub_8314885C);
PPC_FUNC_IMPL(__imp__sub_8314885C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83148860"))) PPC_WEAK_FUNC(sub_83148860);
PPC_FUNC_IMPL(__imp__sub_83148860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// beq cr6,0x83148948
	if (cr6.eq) goto loc_83148948;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x83148908
	if (cr6.eq) goto loc_83148908;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x831488c0
	if (cr6.eq) goto loc_831488C0;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// bge cr6,0x83148980
	if (!cr6.lt) goto loc_83148980;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_831488C0:
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r8,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// stw r5,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// bge cr6,0x83148980
	if (!cr6.lt) goto loc_83148980;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_83148908:
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r8,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// stw r6,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// bge cr6,0x83148980
	if (!cr6.lt) goto loc_83148980;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_83148948:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r10.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r9,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r9.u32);
	// stw r8,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// bge cr6,0x83148980
	if (!cr6.lt) goto loc_83148980;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_83148980:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148988"))) PPC_WEAK_FUNC(sub_83148988);
PPC_FUNC_IMPL(__imp__sub_83148988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83148990;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x83148f3c
	if (cr6.gt) goto loc_83148F3C;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30272
	ctx.r12.s64 = ctx.r12.s64 + -30272;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_831489EC;
	case 1:
		goto loc_83148CFC;
	case 2:
		goto loc_83148D14;
	case 3:
		goto loc_83148D14;
	case 4:
		goto loc_83148DE8;
	case 5:
		goto loc_83148DE8;
	case 6:
		goto loc_83148E68;
	case 7:
		goto loc_83148E68;
	case 8:
		goto loc_83148CF0;
	case 9:
		goto loc_83148CF0;
	case 10:
		goto loc_83148F3C;
	default:
		return;
	}
	// lwz r24,-30228(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -30228);
	// lwz r24,-29444(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29444);
	// lwz r24,-29420(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29420);
	// lwz r24,-29420(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29420);
	// lwz r24,-29208(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29208);
	// lwz r24,-29208(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29208);
	// lwz r24,-29080(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29080);
	// lwz r24,-29080(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29080);
	// lwz r24,-29456(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29456);
	// lwz r24,-29456(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29456);
	// lwz r24,-28868(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -28868);
loc_831489EC:
	// li r30,12
	ctx.r30.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148A04;
	sub_83120738(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83148a20
	if (!cr6.eq) goto loc_83148A20;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148A20:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148A34;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x83148cf0
	if (cr6.gt) goto loc_83148CF0;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30120
	ctx.r12.s64 = ctx.r12.s64 + -30120;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83148A8C;
	case 1:
		goto loc_83148A8C;
	case 2:
		goto loc_83148A8C;
	case 3:
		goto loc_83148A8C;
	case 4:
		goto loc_83148B48;
	case 5:
		goto loc_83148B48;
	case 6:
		goto loc_83148B48;
	case 7:
		goto loc_83148B48;
	case 8:
		goto loc_83148B48;
	case 9:
		goto loc_83148C58;
	case 10:
		goto loc_83148C58;
	case 11:
		goto loc_83148C58;
	case 12:
		goto loc_83148C58;
	default:
		return;
	}
	// lwz r24,-30068(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -30068);
	// lwz r24,-30068(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -30068);
	// lwz r24,-30068(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -30068);
	// lwz r24,-30068(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -30068);
	// lwz r24,-29880(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29880);
	// lwz r24,-29880(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29880);
	// lwz r24,-29880(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29880);
	// lwz r24,-29880(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29880);
	// lwz r24,-29880(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29880);
	// lwz r24,-29608(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29608);
	// lwz r24,-29608(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29608);
	// lwz r24,-29608(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29608);
	// lwz r24,-29608(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29608);
loc_83148A8C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148ABC;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83148ad4
	if (!cr6.eq) goto loc_83148AD4;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148AD4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148AE8;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83148b08
	if (!cr6.eq) goto loc_83148B08;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148B08:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148B1C;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83148cf0
	if (!cr6.eq) goto loc_83148CF0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83148cf0
	if (!cr6.eq) goto loc_83148CF0;
loc_83148B3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148B48:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148B88;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83148bb8
	if (!cr6.eq) goto loc_83148BB8;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148BB8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148BCC;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83148be4
	if (!cr6.eq) goto loc_83148BE4;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148BE4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148BF8;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83148c18
	if (!cr6.eq) goto loc_83148C18;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148C18:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148C2C;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x83148cf0
	if (!cr6.eq) goto loc_83148CF0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83148cf0
	if (!cr6.eq) goto loc_83148CF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148C58:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148C90;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bne cr6,0x83148cb0
	if (!cr6.eq) goto loc_83148CB0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148CB0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148CC4;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x83148cf0
	if (!cr6.eq) goto loc_83148CF0;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83148ce4
	if (cr6.eq) goto loc_83148CE4;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// bne cr6,0x83148cf0
	if (!cr6.eq) goto loc_83148CF0;
loc_83148CE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148CF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148CFC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a66ea0
	ctx.lr = 0x83148D08;
	sub_82A66EA0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148D14:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83148d34
	if (!cr6.eq) goto loc_83148D34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148D28;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148D34:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148D40;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148d6c
	if (cr6.eq) goto loc_83148D6C;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83148d6c
	if (cr6.eq) goto loc_83148D6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148D60;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148D6C:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83132450
	ctx.lr = 0x83148D7C;
	sub_83132450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x83148ddc
	if (!cr6.eq) goto loc_83148DDC;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148DA0;
	sub_83120738(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x83148ddc
	if (!cr6.eq) goto loc_83148DDC;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-21060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lbz r30,87(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
loc_83148DDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148DE8:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83148e08
	if (!cr6.eq) goto loc_83148E08;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148DFC;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148cf0
	if (cr6.eq) goto loc_83148CF0;
loc_83148E08:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148E14;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148e40
	if (cr6.eq) goto loc_83148E40;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83148e40
	if (cr6.eq) goto loc_83148E40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148E34;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148cf0
	if (cr6.eq) goto loc_83148CF0;
loc_83148E40:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148E58;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148E68:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x83148e88
	if (!cr6.eq) goto loc_83148E88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148E7C;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148E88:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148E94;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148ec0
	if (cr6.eq) goto loc_83148EC0;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83148ec0
	if (cr6.eq) goto loc_83148EC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83148EB4;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83148b3c
	if (cr6.eq) goto loc_83148B3C;
loc_83148EC0:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83132450
	ctx.lr = 0x83148ED0;
	sub_83132450(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(ctx.r29.s32, 7, xer);
	// bne cr6,0x83148f30
	if (!cr6.eq) goto loc_83148F30;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x83148EF4;
	sub_83120738(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x83148f30
	if (!cr6.eq) goto loc_83148F30;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-21060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lbz r30,87(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
loc_83148F30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83148F3C:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83148F48"))) PPC_WEAK_FUNC(sub_83148F48);
PPC_FUNC_IMPL(__imp__sub_83148F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83148F50;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r15,r11,60640
	ctx.r15.u64 = ctx.r11.u64 | 60640;
	// li r18,0
	ctx.r18.s64 = 0;
	// lwzx r10,r3,r15
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r15.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83149108
	if (!cr6.gt) goto loc_83149108;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,72
	ctx.r10.s64 = 4718592;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r16,2
	ctx.r16.s64 = 2;
	// ori r14,r10,7136
	ctx.r14.u64 = ctx.r10.u64 | 7136;
	// li r17,12
	ctx.r17.s64 = 12;
	// addi r21,r11,-3640
	ctx.r21.s64 = ctx.r11.s64 + -3640;
loc_83148F90:
	// cmplwi cr6,r18,653
	cr6.compare<uint32_t>(ctx.r18.u32, 653, xer);
	// blt cr6,0x83148fa4
	if (cr6.lt) goto loc_83148FA4;
	// addis r26,r3,96
	ctx.r26.s64 = ctx.r3.s64 + 6291456;
	// addi r26,r26,-7392
	ctx.r26.s64 = ctx.r26.s64 + -7392;
	// b 0x83148fac
	goto loc_83148FAC;
loc_83148FA4:
	// add r11,r19,r3
	ctx.r11.u64 = ctx.r19.u64 + ctx.r3.u64;
	// add r26,r11,r14
	ctx.r26.u64 = ctx.r11.u64 + ctx.r14.u64;
loc_83148FAC:
	// ld r4,504(r26)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r26.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x83148FB4;
	sub_8311BE78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831490f0
	if (cr6.eq) goto loc_831490F0;
	// lbz r24,617(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 617);
	// li r25,0
	ctx.r25.s64 = 0;
	// lbz r22,616(r3)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r3.u32 + 616);
	// li r27,0
	ctx.r27.s64 = 0;
	// lbz r23,618(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 618);
loc_83148FD4:
	// cmplwi cr6,r27,32
	cr6.compare<uint32_t>(ctx.r27.u32, 32, xer);
	// bge cr6,0x831490d0
	if (!cr6.lt) goto loc_831490D0;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lbz r29,584(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 584);
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(ctx.r29.s32, 32, xer);
	// bge cr6,0x831490d0
	if (!cr6.lt) goto loc_831490D0;
	// lhz r11,808(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 808);
	// ld r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bge cr6,0x83149014
	if (!cr6.lt) goto loc_83149014;
	// addi r11,r29,31
	ctx.r11.s64 = ctx.r29.s64 + 31;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r26.u32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
loc_83149014:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83149030
	if (!cr6.eq) goto loc_83149030;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314905c
	goto loc_8314905C;
loc_83149030:
	// lhz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83149054
	if (!cr6.eq) goto loc_83149054;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83149058
	if (cr6.eq) goto loc_83149058;
loc_83149054:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83149058:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314905C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831490d0
	if (!cr6.eq) goto loc_831490D0;
	// lwz r3,48(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x83149070;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, xer);
	// beq cr6,0x831490d0
	if (cr6.eq) goto loc_831490D0;
	// cmpw cr6,r29,r22
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r22.s32, xer);
	// beq cr6,0x831490d0
	if (cr6.eq) goto loc_831490D0;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83151df8
	ctx.lr = 0x83149090;
	sub_83151DF8(ctx, base);
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x831490A8;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831490b8
	if (!cr6.eq) goto loc_831490B8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_831490B8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x831490d0
	if (!cr6.lt) goto loc_831490D0;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_831490D0:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83148fd4
	if (cr6.lt) goto loc_83148FD4;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// stb r11,1196(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1196, ctx.r11.u8);
	// stb r11,618(r28)
	PPC_STORE_U8(ctx.r28.u32 + 618, ctx.r11.u8);
loc_831490F0:
	// lwz r3,48(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 48);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r19,r19,1312
	ctx.r19.s64 = ctx.r19.s64 + 1312;
	// lwzx r11,r3,r15
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r15.u32);
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, xer);
	// blt cr6,0x83148f90
	if (cr6.lt) goto loc_83148F90;
loc_83149108:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149110"))) PPC_WEAK_FUNC(sub_83149110);
PPC_FUNC_IMPL(__imp__sub_83149110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83149118;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r26.u8);
	// addi r31,r3,216
	ctx.r31.s64 = ctx.r3.s64 + 216;
	// stb r26,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r26.u8);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r24,r3,7176
	ctx.r24.s64 = ctx.r3.s64 + 7176;
	// lis r27,-31750
	ctx.r27.s64 = -2080768000;
	// lis r29,-31772
	ctx.r29.s64 = -2082209792;
	// lis r25,-31772
	ctx.r25.s64 = -2082209792;
loc_83149148:
	// addi r30,r31,-208
	ctx.r30.s64 = ctx.r31.s64 + -208;
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8314915C;
	sub_831CDCF0(ctx, base);
	// ld r9,-3640(r25)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r25.u32 + -3640);
	// addi r11,r31,-88
	ctx.r11.s64 = ctx.r31.s64 + -88;
	// li r10,12
	ctx.r10.s64 = 12;
	// std r9,-164(r31)
	PPC_STORE_U64(ctx.r31.u32 + -164, ctx.r9.u64);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,-3592(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r9,-3592(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// rlwimi r7,r9,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r9,-3592(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r6,r9,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lwz r9,-3592(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// rlwimi r5,r9,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lwz r9,-3592(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// lwz r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// rlwimi r4,r9,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r4.u32);
	// lwz r9,-3592(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r3.u32);
	// lwz r9,-20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// oris r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 4294901760;
	// stw r8,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r8.u32);
loc_831491D8:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 4294901760;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x831491d8
	if (!cr0.eq) goto loc_831491D8;
	// stw r26,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r26.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r11,-3592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// li r4,95
	ctx.r4.s64 = 95;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-3592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// rlwimi r10,r11,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r10.u32);
	// lwz r11,-3592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r9.u32);
	// lwz r11,-3592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3592);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r9.u32);
	// bl 0x83121088
	ctx.lr = 0x83149240;
	sub_83121088(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x83149250;
	sub_83121088(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x83149260;
	sub_83121088(ctx, base);
	// lwz r11,-28368(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28368);
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// stw r11,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r11.u32);
	// lwz r11,-28368(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28368);
	// stw r11,216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 216, ctx.r11.u32);
	// lwz r11,-28368(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -28368);
	// stw r11,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r11.u32);
	// stbx r26,r24,r28
	PPC_STORE_U8(ctx.r24.u32 + ctx.r28.u32, ctx.r26.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,32
	cr6.compare<int32_t>(ctx.r28.s32, 32, xer);
	// blt cr6,0x83149148
	if (cr6.lt) goto loc_83149148;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149294"))) PPC_WEAK_FUNC(sub_83149294);
PPC_FUNC_IMPL(__imp__sub_83149294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149298"))) PPC_WEAK_FUNC(sub_83149298);
PPC_FUNC_IMPL(__imp__sub_83149298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831492fc
	if (cr6.eq) goto loc_831492FC;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// li r11,32
	ctx.r11.s64 = 32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831492c0
	if (cr6.eq) goto loc_831492C0;
	// li r11,11
	ctx.r11.s64 = 11;
loc_831492C0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83149408
	if (cr6.eq) goto loc_83149408;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
loc_831492D4:
	// addi r9,r11,47
	ctx.r9.s64 = ctx.r11.s64 + 47;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stwx r8,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r8.u32);
	// blt cr6,0x831492d4
	if (cr6.lt) goto loc_831492D4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_831492FC:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r8,255
	ctx.r8.s64 = 255;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stb r31,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r31.u8);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_83149314:
	// addi r11,r9,47
	ctx.r11.s64 = ctx.r9.s64 + 47;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// bge cr6,0x831493a0
	if (!cr6.lt) goto loc_831493A0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x83149388
	if (!cr6.lt) goto loc_83149388;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r30,7176(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7176);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83149368
	if (!cr6.eq) goto loc_83149368;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// stwx r8,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// bge cr6,0x83149360
	if (!cr6.lt) goto loc_83149360;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r31,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r31.u8);
loc_83149360:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x831493d8
	goto loc_831493D8;
loc_83149368:
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u32);
	// bge cr6,0x831493d8
	if (!cr6.lt) goto loc_831493D8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r6.u8);
	// b 0x831493d8
	goto loc_831493D8;
loc_83149388:
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// stwx r8,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x831493d8
	goto loc_831493D8;
loc_831493A0:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// blt cr6,0x831493b0
	if (cr6.lt) goto loc_831493B0;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x831493d8
	goto loc_831493D8;
loc_831493B0:
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r10,7176(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831493c8
	if (!cr6.eq) goto loc_831493C8;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x831493d8
	goto loc_831493D8;
loc_831493C8:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x831493d8
	if (!cr6.lt) goto loc_831493D8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r31,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r31.u8);
loc_831493D8:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x831493f8
	if (!cr6.eq) goto loc_831493F8;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831493f8
	if (!cr6.eq) goto loc_831493F8;
	// stb r6,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r6.u8);
loc_831493F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x83149314
	if (cr6.lt) goto loc_83149314;
loc_83149408:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149414"))) PPC_WEAK_FUNC(sub_83149414);
PPC_FUNC_IMPL(__imp__sub_83149414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149418"))) PPC_WEAK_FUNC(sub_83149418);
PPC_FUNC_IMPL(__imp__sub_83149418) {
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
	// li r5,316
	ctx.r5.s64 = 316;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83149438;
	sub_831CDCF0(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82ac0800
	ctx.lr = 0x83149440;
	sub_82AC0800(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_83149448:
	// addi r9,r11,47
	ctx.r9.s64 = ctx.r11.s64 + 47;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// blt cr6,0x83149448
	if (cr6.lt) goto loc_83149448;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83149468:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// stwx r10,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u32);
	// blt cr6,0x83149468
	if (cr6.lt) goto loc_83149468;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8314949C"))) PPC_WEAK_FUNC(sub_8314949C);
PPC_FUNC_IMPL(__imp__sub_8314949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831494A0"))) PPC_WEAK_FUNC(sub_831494A0);
PPC_FUNC_IMPL(__imp__sub_831494A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x831494A8;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// addi r23,r8,262
	ctx.r23.s64 = ctx.r8.s64 + 262;
	// addi r22,r11,-3640
	ctx.r22.s64 = ctx.r11.s64 + -3640;
	// lhz r9,-3640(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -3640);
	// lis r8,-32222
	ctx.r8.s64 = -2111700992;
	// lfs f29,3172(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3172);
	ctx.f29.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// addi r26,r6,8
	ctx.r26.s64 = ctx.r6.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfs f31,-26260(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8976(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8976);
	ctx.f30.f64 = double(temp.f32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// ori r20,r6,65535
	ctx.r20.u64 = ctx.r6.u64 | 65535;
	// li r17,2
	ctx.r17.s64 = 2;
	// li r15,12
	ctx.r15.s64 = 12;
	// cmpwi cr6,r28,32
	cr6.compare<int32_t>(ctx.r28.s32, 32, xer);
	// bge cr6,0x831498d4
	if (!cr6.lt) goto loc_831498D4;
loc_83149530:
	// ld r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x83149550
	if (!cr6.eq) goto loc_83149550;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x83149578
	goto loc_83149578;
loc_83149550:
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83149570
	if (!cr6.eq) goto loc_83149570;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x83149574
	if (cr6.eq) goto loc_83149574;
loc_83149570:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83149574:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83149578:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831498d4
	if (!cr6.eq) goto loc_831498D4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x831498d4
	if (cr6.eq) goto loc_831498D4;
	// ld r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 44);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bne cr6,0x831495ac
	if (!cr6.eq) goto loc_831495AC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x831495d4
	goto loc_831495D4;
loc_831495AC:
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x831495cc
	if (!cr6.eq) goto loc_831495CC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq cr6,0x831495d0
	if (cr6.eq) goto loc_831495D0;
loc_831495CC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831495D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831495D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831498d4
	if (!cr6.eq) goto loc_831498D4;
	// cmplwi cr6,r25,32
	cr6.compare<uint32_t>(ctx.r25.u32, 32, xer);
	// bge cr6,0x831495f4
	if (!cr6.lt) goto loc_831495F4;
	// add r11,r25,r16
	ctx.r11.u64 = ctx.r25.u64 + ctx.r16.u64;
	// lbz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// b 0x831495f8
	goto loc_831495F8;
loc_831495F4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831495F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x831498d4
	if (cr6.eq) goto loc_831498D4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// sth r20,180(r1)
	PPC_STORE_U16(ctx.r1.u32 + 180, ctx.r20.u16);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// bl 0x83148550
	ctx.lr = 0x83149614;
	sub_83148550(ctx, base);
	// add r11,r25,r19
	ctx.r11.u64 = ctx.r25.u64 + ctx.r19.u64;
	// ld r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 44);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(ctx.r18.s32, 0, xer);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// lbz r9,7176(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7176);
	// std r10,180(r1)
	PPC_STORE_U64(ctx.r1.u32 + 180, ctx.r10.u64);
	// stb r9,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r9.u8);
	// bne cr6,0x83149668
	if (!cr6.eq) goto loc_83149668;
	// add r11,r25,r27
	ctx.r11.u64 = ctx.r25.u64 + ctx.r27.u64;
	// stb r17,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r17.u8);
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83149650
	if (cr6.eq) goto loc_83149650;
	// stb r21,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r21.u8);
	// b 0x831496f8
	goto loc_831496F8;
loc_83149650:
	// add r11,r25,r27
	ctx.r11.u64 = ctx.r25.u64 + ctx.r27.u64;
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831496f8
	if (cr6.eq) goto loc_831496F8;
	// stb r28,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r28.u8);
	// b 0x831496f8
	goto loc_831496F8;
loc_83149668:
	// cmpwi cr6,r18,1
	cr6.compare<int32_t>(ctx.r18.s32, 1, xer);
	// bne cr6,0x831496d8
	if (!cr6.eq) goto loc_831496D8;
	// add r11,r25,r27
	ctx.r11.u64 = ctx.r25.u64 + ctx.r27.u64;
	// stb r21,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r21.u8);
	// lbz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314968c
	if (cr6.eq) goto loc_8314968C;
	// stb r28,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r28.u8);
	// b 0x831496f8
	goto loc_831496F8;
loc_8314968C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x831496c0
	if (!cr6.eq) goto loc_831496C0;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83120738
	ctx.lr = 0x831496A8;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831496c0
	if (!cr6.eq) goto loc_831496C0;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r11.u8);
	// b 0x831496f8
	goto loc_831496F8;
loc_831496C0:
	// add r11,r25,r27
	ctx.r11.u64 = ctx.r25.u64 + ctx.r27.u64;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831496f8
	if (cr6.eq) goto loc_831496F8;
	// stb r17,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r17.u8);
	// b 0x831496f8
	goto loc_831496F8;
loc_831496D8:
	// cmpwi cr6,r18,2
	cr6.compare<int32_t>(ctx.r18.s32, 2, xer);
	// bne cr6,0x831496f8
	if (!cr6.eq) goto loc_831496F8;
	// add r10,r25,r27
	ctx.r10.u64 = ctx.r25.u64 + ctx.r27.u64;
	// lbz r9,88(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 88);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r21
	ctx.r5.u64 = ctx.r6.u64 & ctx.r21.u64;
	// stb r5,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r5.u8);
loc_831496F8:
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83148860
	ctx.lr = 0x83149708;
	sub_83148860(ctx, base);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x831498c0
	if (cr6.eq) goto loc_831498C0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83149714:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83148860
	ctx.lr = 0x83149720;
	sub_83148860(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// beq cr6,0x83149800
	if (cr6.eq) goto loc_83149800;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x83149800
	if (cr6.eq) goto loc_83149800;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83148988
	ctx.lr = 0x8314974C;
	sub_83148988(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x831497ec
	if (!cr6.eq) goto loc_831497EC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83120738
	ctx.lr = 0x83149770;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x831497ec
	if (cr6.gt) goto loc_831497EC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x831497a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831497A0;
	// bdzf 4*cr6+eq,0x831497ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831497EC;
	// bdzf 4*cr6+eq,0x831497ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831497EC;
	// bdzf 4*cr6+eq,0x831497a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831497A0;
	// bne cr6,0x831497a0
	if (!cr6.eq) goto loc_831497A0;
loc_831497A0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// bge cr6,0x831497ec
	if (!cr6.lt) goto loc_831497EC;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r8.u64);
	// lfd f13,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f0,160(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fnmsubs f9,f11,f30,f31
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * ctx.f30.f64 - ctx.f31.f64)));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fnmsubs f7,f9,f29,f31
	ctx.f7.f64 = double(float(-(ctx.f9.f64 * ctx.f29.f64 - ctx.f31.f64)));
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lbz r30,87(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
loc_831497EC:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x831498a0
	goto loc_831498A0;
loc_83149800:
	// bl 0x831156e8
	ctx.lr = 0x83149804;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83149824
	if (cr6.eq) goto loc_83149824;
	// bl 0x83115808
	ctx.lr = 0x83149814;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne cr6,0x83149828
	if (!cr6.eq) goto loc_83149828;
loc_83149824:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83149828:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831498a0
	if (cr6.eq) goto loc_831498A0;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// bl 0x831c44a0
	ctx.lr = 0x83149848;
	sub_831C44A0(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r27,248
	ctx.r5.s64 = ctx.r27.s64 + 248;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831c5550
	ctx.lr = 0x8314986C;
	sub_831C5550(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// beq cr6,0x83149894
	if (cr6.eq) goto loc_83149894;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x83149894;
	sub_825952B8(ctx, base);
loc_83149894:
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
loc_831498A0:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r31,4(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83148860
	ctx.lr = 0x831498B8;
	sub_83148860(ctx, base);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// bne cr6,0x83149714
	if (!cr6.eq) goto loc_83149714;
loc_831498C0:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d93d78
	ctx.lr = 0x831498CC;
	sub_82D93D78(ctx, base);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lhz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
loc_831498D4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,224
	ctx.r26.s64 = ctx.r26.s64 + 224;
	// addi r23,r23,14
	ctx.r23.s64 = ctx.r23.s64 + 14;
	// cmpwi cr6,r25,32
	cr6.compare<int32_t>(ctx.r25.s32, 32, xer);
	// blt cr6,0x83149530
	if (cr6.lt) goto loc_83149530;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bne cr6,0x83149920
	if (!cr6.eq) goto loc_83149920;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83149908
	if (cr6.eq) goto loc_83149908;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83149908;
	sub_82416268(ctx, base);
loc_83149908:
	// li r3,255
	ctx.r3.s64 = 255;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83149920:
	// subf r11,r31,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r31.s64;
	// li r10,84
	ctx.r10.s64 = 84;
	// clrlwi r30,r14,24
	ctx.r30.u64 = ctx.r14.u32 & 0xFF;
	// divw r5,r11,r10
	ctx.r5.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bgt cr6,0x8314995c
	if (cr6.gt) goto loc_8314995C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x83149944;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_8314995C:
	// bl 0x82d915a0
	ctx.lr = 0x83149960;
	sub_82D915A0(ctx, base);
	// mulli r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 * 84;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq cr6,0x83149978
	if (cr6.eq) goto loc_83149978;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83149978;
	sub_82416268(ctx, base);
loc_83149978:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149990"))) PPC_WEAK_FUNC(sub_83149990);
PPC_FUNC_IMPL(__imp__sub_83149990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x83149998;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r21,r3,24
	ctx.r21.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplwi cr6,r21,16
	cr6.compare<uint32_t>(ctx.r21.u32, 16, xer);
	// bge cr6,0x83149d04
	if (!cr6.lt) goto loc_83149D04;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// sth r25,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r25.u16);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stb r25,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r25.u8);
	// li r20,1
	ctx.r20.s64 = 1;
	// lfs f30,20056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20056);
	ctx.f30.f64 = double(temp.f32);
	// stb r25,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r25.u8);
	// li r18,12
	ctx.r18.s64 = 12;
	// addi r19,r11,-3752
	ctx.r19.s64 = ctx.r11.s64 + -3752;
loc_831499EC:
	// li r28,255
	ctx.r28.s64 = 255;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_831499FC:
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x83149a60
	if (!cr6.lt) goto loc_83149A60;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,255
	cr6.compare<int32_t>(ctx.r9.s32, 255, xer);
	// bne cr6,0x83149a9c
	if (!cr6.eq) goto loc_83149A9C;
	// add r11,r30,r23
	ctx.r11.u64 = ctx.r30.u64 + ctx.r23.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83149a64
	if (!cr6.eq) goto loc_83149A64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_83149A2C:
	// clrlwi r27,r28,24
	ctx.r27.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// bge cr6,0x83149d04
	if (!cr6.lt) goto loc_83149D04;
	// add r11,r27,r23
	ctx.r11.u64 = ctx.r27.u64 + ctx.r23.u64;
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r26,5
	cr6.compare<uint32_t>(ctx.r26.u32, 5, xer);
	// lbz r28,28(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// bge cr6,0x83149ab4
	if (!cr6.lt) goto loc_83149AB4;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r19.u32);
	// b 0x83149ab8
	goto loc_83149AB8;
loc_83149A60:
	// li r11,13
	ctx.r11.s64 = 13;
loc_83149A64:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83147d08
	ctx.lr = 0x83149A78;
	sub_83147D08(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// bgt cr6,0x83149a88
	if (cr6.gt) goto loc_83149A88;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_83149A88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83149a9c
	if (cr6.eq) goto loc_83149A9C;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_83149A9C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// blt cr6,0x831499fc
	if (cr6.lt) goto loc_831499FC;
	// b 0x83149a2c
	goto loc_83149A2C;
loc_83149AB4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83149AB8:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831494a0
	ctx.lr = 0x83149AD4;
	sub_831494A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x83149cf4
	if (cr6.eq) goto loc_83149CF4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83147bf0
	ctx.lr = 0x83149AEC;
	sub_83147BF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83149cf4
	if (cr6.eq) goto loc_83149CF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83147bf0
	ctx.lr = 0x83149B00;
	sub_83147BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x83149b14
	if (!cr6.lt) goto loc_83149B14;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r20,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r20.u8);
loc_83149B14:
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// bne cr6,0x83149b4c
	if (!cr6.eq) goto loc_83149B4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83149B38;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83149b4c
	if (!cr6.eq) goto loc_83149B4C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// b 0x83149b9c
	goto loc_83149B9C;
loc_83149B4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83149B58;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83149b8c
	if (cr6.eq) goto loc_83149B8C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x83149b8c
	if (cr6.eq) goto loc_83149B8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82acc6b8
	ctx.lr = 0x83149B78;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83149b8c
	if (!cr6.eq) goto loc_83149B8C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// b 0x83149b9c
	goto loc_83149B9C;
loc_83149B8C:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83132450
	ctx.lr = 0x83149B9C;
	sub_83132450(ctx, base);
loc_83149B9C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x83149BC0;
	sub_83120738(ctx, base);
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// bl 0x831156e8
	ctx.lr = 0x83149BD4;
	sub_831156E8(ctx, base);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83149bf4
	if (cr6.eq) goto loc_83149BF4;
	// bl 0x83115808
	ctx.lr = 0x83149BE4;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x83149bf8
	if (!cr6.eq) goto loc_83149BF8;
loc_83149BF4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83149BF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83149c64
	if (cr6.eq) goto loc_83149C64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// bl 0x831c44a0
	ctx.lr = 0x83149C18;
	sub_831C44A0(ctx, base);
	// mulli r11,r29,14
	ctx.r11.s64 = ctx.r29.s64 * 14;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,262
	ctx.r4.s64 = ctx.r11.s64 + 262;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r22,248
	ctx.r5.s64 = ctx.r22.s64 + 248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 44);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x831c5550
	ctx.lr = 0x83149C4C;
	sub_831C5550(ctx, base);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r10,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// bl 0x827ac0e0
	ctx.lr = 0x83149C64;
	sub_827AC0E0(ctx, base);
loc_83149C64:
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x83149C78;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// bne cr6,0x83149c90
	if (!cr6.eq) goto loc_83149C90;
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
loc_83149C90:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123620
	ctx.lr = 0x83149C9C;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x83149CAC;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83149cc4
	if (cr6.eq) goto loc_83149CC4;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_83149CC4:
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(ctx.r29.s32, 32, xer);
	// bge cr6,0x83149cd8
	if (!cr6.lt) goto loc_83149CD8;
	// add r11,r29,r24
	ctx.r11.u64 = ctx.r29.u64 + ctx.r24.u64;
	// lbz r11,7176(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7176);
	// b 0x83149cdc
	goto loc_83149CDC;
loc_83149CD8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_83149CDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83149cf4
	if (cr6.eq) goto loc_83149CF4;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
loc_83149CF4:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r26,11
	cr6.compare<uint32_t>(ctx.r26.u32, 11, xer);
	// blt cr6,0x831499ec
	if (cr6.lt) goto loc_831499EC;
loc_83149D04:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149D14"))) PPC_WEAK_FUNC(sub_83149D14);
PPC_FUNC_IMPL(__imp__sub_83149D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83149D18"))) PPC_WEAK_FUNC(sub_83149D18);
PPC_FUNC_IMPL(__imp__sub_83149D18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83149D20;
	__savegprlr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// bl 0x83147c70
	ctx.lr = 0x83149D44;
	sub_83147C70(ctx, base);
	// clrlwi r23,r28,24
	ctx.r23.u64 = ctx.r28.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_83149D54:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x83149d70
	if (!cr6.eq) goto loc_83149D70;
	// srawi r11,r28,2
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r8,r9,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83149e4c
	if (!cr0.eq) goto loc_83149E4C;
loc_83149D70:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x83149D80;
	sub_831CE980(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83149990
	ctx.lr = 0x83149D98;
	sub_83149990(ctx, base);
	// lhz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83149e2c
	if (cr6.eq) goto loc_83149E2C;
	// lbz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r10,178(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 178);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83149e30
	if (cr6.gt) goto loc_83149E30;
	// blt cr6,0x83149e2c
	if (cr6.lt) goto loc_83149E2C;
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r6,180(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 180);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x83149e2c
	if (cr6.lt) goto loc_83149E2C;
	// lbz r11,179(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 179);
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// blt cr6,0x83149e2c
	if (cr6.lt) goto loc_83149E2C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x83149e04
	if (cr6.eq) goto loc_83149E04;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83149e20
	if (!cr6.eq) goto loc_83149E20;
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r7,182(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// b 0x83149e28
	goto loc_83149E28;
loc_83149E04:
	// lbz r11,181(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 181);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x83149e2c
	if (cr6.lt) goto loc_83149E2C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83149e30
	if (!cr6.eq) goto loc_83149E30;
loc_83149E20:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
loc_83149E28:
	// bge cr6,0x83149e30
	if (!cr6.lt) goto loc_83149E30;
loc_83149E2C:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_83149E30:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83149e4c
	if (cr6.eq) goto loc_83149E4C;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x831ce980
	ctx.lr = 0x83149E4C;
	sub_831CE980(ctx, base);
loc_83149E4C:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(ctx.r31.u32, 16, xer);
	// blt cr6,0x83149d54
	if (cr6.lt) goto loc_83149D54;
	// clrlwi r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83149E68:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x83149e80
	if (!cr6.lt) goto loc_83149E80;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x83149e84
	goto loc_83149E84;
loc_83149E80:
	// li r11,255
	ctx.r11.s64 = 255;
loc_83149E84:
	// addi r8,r10,47
	ctx.r8.s64 = ctx.r10.s64 + 47;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r7,r27
	PPC_STORE_U32(ctx.r7.u32 + ctx.r27.u32, ctx.r11.u32);
	// bge cr6,0x83149ea0
	if (!cr6.lt) goto loc_83149EA0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r25,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r25.u8);
loc_83149EA0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83149eb8
	if (cr6.eq) goto loc_83149EB8;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x83149eb8
	if (!cr6.lt) goto loc_83149EB8;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
loc_83149EB8:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// blt cr6,0x83149e68
	if (cr6.lt) goto loc_83149E68;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149ED0"))) PPC_WEAK_FUNC(sub_83149ED0);
PPC_FUNC_IMPL(__imp__sub_83149ED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83149ED8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r29,r11,-3640
	ctx.r29.s64 = ctx.r11.s64 + -3640;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_83149F08:
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// cmpwi cr6,r31,255
	cr6.compare<int32_t>(ctx.r31.s32, 255, xer);
	// beq cr6,0x8314a028
	if (cr6.eq) goto loc_8314A028;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(ctx.r31.s32, 32, xer);
	// bge cr6,0x8314a028
	if (!cr6.lt) goto loc_8314A028;
	// mulli r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 * 224;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// ld r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x83149f4c
	if (!cr6.eq) goto loc_83149F4C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x83149f74
	goto loc_83149F74;
loc_83149F4C:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83149f6c
	if (!cr6.eq) goto loc_83149F6C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x83149f70
	if (cr6.eq) goto loc_83149F70;
loc_83149F6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83149F70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83149F74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314a028
	if (!cr6.eq) goto loc_8314A028;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314a028
	if (cr6.eq) goto loc_8314A028;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83147bf0
	ctx.lr = 0x83149F98;
	sub_83147BF0(ctx, base);
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x83149fb8
	if (!cr6.eq) goto loc_83149FB8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83149fe0
	goto loc_83149FE0;
loc_83149FB8:
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83149fd8
	if (!cr6.eq) goto loc_83149FD8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x83149fdc
	if (cr6.eq) goto loc_83149FDC;
loc_83149FD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83149FDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83149FE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314a028
	if (!cr6.eq) goto loc_8314A028;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lbz r9,7176(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7176);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314a028
	if (cr6.eq) goto loc_8314A028;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// bge cr6,0x8314a014
	if (!cr6.lt) goto loc_8314A014;
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r31.u32);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_8314A014:
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(ctx.r31.u32, 32, xer);
	// bge cr6,0x8314a028
	if (!cr6.lt) goto loc_8314A028;
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stb r25,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r25.u8);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_8314A028:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x83149f08
	if (cr6.lt) goto loc_83149F08;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83149d18
	ctx.lr = 0x8314A058;
	sub_83149D18(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314A060"))) PPC_WEAK_FUNC(sub_8314A060);
PPC_FUNC_IMPL(__imp__sub_8314A060) {
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
	ctx.lr = 0x8314A068;
	__savegprlr_14(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r4,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r4.u32);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// stw r6,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r6.u32);
	// li r28,11
	ctx.r28.s64 = 11;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r9,13
	ctx.r9.s64 = 13;
	// li r15,0
	ctx.r15.s64 = 0;
loc_8314A09C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stwu r15,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r15.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8314a09c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314A09C;
	// lbz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 8);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r7,r11,-11
	ctx.r7.s64 = ctx.r11.s64 + -11;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lfs f13,-28496(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28496);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,25332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25332);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// addi r10,r10,-3640
	ctx.r10.s64 = ctx.r10.s64 + -3640;
	// stw r15,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r15.u32);
	// li r23,12
	ctx.r23.s64 = 12;
	// stw r15,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r15.u32);
	// sth r15,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r15.u16);
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
	// stb r15,10(r5)
	PPC_STORE_U8(ctx.r5.u32 + 10, ctx.r15.u8);
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r16,84(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r3,r17,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r17.s64;
	// subf r11,r16,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r16.s64;
	// addi r14,r11,-12
	ctx.r14.s64 = ctx.r11.s64 + -12;
	// bne cr6,0x8314a370
	if (!cr6.eq) goto loc_8314A370;
	// addi r27,r1,252
	ctx.r27.s64 = ctx.r1.s64 + 252;
	// addi r26,r24,232
	ctx.r26.s64 = ctx.r24.s64 + 232;
	// li r25,21
	ctx.r25.s64 = 21;
loc_8314A154:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(ctx.r29.s32, 32, xer);
	// bge cr6,0x8314a35c
	if (!cr6.lt) goto loc_8314A35C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,716(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// bl 0x83147bf0
	ctx.lr = 0x8314A16C;
	sub_83147BF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314a35c
	if (cr6.eq) goto loc_8314A35C;
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314a198
	if (!cr6.eq) goto loc_8314A198;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8314a1c0
	goto loc_8314A1C0;
loc_8314A198:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314a1b8
	if (!cr6.eq) goto loc_8314A1B8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314a1bc
	if (cr6.eq) goto loc_8314A1BC;
loc_8314A1B8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A1BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314A1C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314a35c
	if (!cr6.eq) goto loc_8314A35C;
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(ctx.r29.s32, 32, xer);
	// bge cr6,0x8314a1e4
	if (!cr6.lt) goto loc_8314A1E4;
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,7176(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7176);
	// b 0x8314a1e8
	goto loc_8314A1E8;
loc_8314A1E4:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A1E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314a35c
	if (cr6.eq) goto loc_8314A35C;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// bge cr6,0x8314a20c
	if (!cr6.lt) goto loc_8314A20C;
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// b 0x8314a210
	goto loc_8314A210;
loc_8314A20C:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A210:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314a35c
	if (!cr6.eq) goto loc_8314A35C;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x8314A230;
	sub_83120738(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bgt cr6,0x8314a2a4
	if (cr6.gt) goto loc_8314A2A4;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23980
	ctx.r12.s64 = ctx.r12.s64 + -23980;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8314A288;
	case 1:
		goto loc_8314A290;
	case 2:
		goto loc_8314A290;
	case 3:
		goto loc_8314A290;
	case 4:
		goto loc_8314A298;
	case 5:
		goto loc_8314A298;
	case 6:
		goto loc_8314A298;
	case 7:
		goto loc_8314A298;
	case 8:
		goto loc_8314A298;
	case 9:
		goto loc_8314A2A0;
	case 10:
		goto loc_8314A2A0;
	case 11:
		goto loc_8314A2A0;
	case 12:
		goto loc_8314A2A0;
	default:
		return;
	}
	// lwz r24,-23928(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23928);
	// lwz r24,-23920(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23920);
	// lwz r24,-23920(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23920);
	// lwz r24,-23920(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23920);
	// lwz r24,-23912(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23912);
	// lwz r24,-23912(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23912);
	// lwz r24,-23912(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23912);
	// lwz r24,-23912(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23912);
	// lwz r24,-23912(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23912);
	// lwz r24,-23904(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23904);
	// lwz r24,-23904(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23904);
	// lwz r24,-23904(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23904);
	// lwz r24,-23904(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -23904);
loc_8314A288:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x8314a2a4
	goto loc_8314A2A4;
loc_8314A290:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// b 0x8314a2a4
	goto loc_8314A2A4;
loc_8314A298:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// b 0x8314a2a4
	goto loc_8314A2A4;
loc_8314A2A0:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8314A2A4:
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_8314A2A8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x8314a2c0
	if (!cr6.lt) goto loc_8314A2C0;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// b 0x8314a2c4
	goto loc_8314A2C4;
loc_8314A2C0:
	// li r31,13
	ctx.r31.s64 = 13;
loc_8314A2C4:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x8314A2D8;
	sub_83120738(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x8314a2f0
	if (!cr6.eq) goto loc_8314A2F0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8314A2F0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x8314a2a8
	if (cr6.lt) goto loc_8314A2A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,716(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// stw r29,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r29.u32);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// bl 0x83147bf0
	ctx.lr = 0x8314A310;
	sub_83147BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x8314A31C;
	sub_83120738(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stwu r9,12(r27)
	ea = 12 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r27.u32 = ea;
	// bge cr6,0x8314a354
	if (!cr6.lt) goto loc_8314A354;
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stb r10,52(r8)
	PPC_STORE_U8(ctx.r8.u32 + 52, ctx.r10.u8);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8314a35c
	goto loc_8314A35C;
loc_8314A354:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8314A35C:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8314a154
	if (!cr0.eq) goto loc_8314A154;
	// lwz r6,716(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8314A370:
	// lbz r11,1(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bge cr6,0x8314a82c
	if (!cr6.lt) goto loc_8314A82C;
loc_8314A37C:
	// li r4,13
	ctx.r4.s64 = 13;
	// cmplwi cr6,r21,1
	cr6.compare<uint32_t>(ctx.r21.u32, 1, xer);
	// bge cr6,0x8314a39c
	if (!cr6.lt) goto loc_8314A39C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x8314a5c4
	goto loc_8314A5C4;
loc_8314A39C:
	// cmplw cr6,r18,r16
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r16.u32, xer);
	// bge cr6,0x8314a42c
	if (!cr6.lt) goto loc_8314A42C;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_8314A3A8:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a3c4
	if (!cr6.lt) goto loc_8314A3C4;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8314a3f4
	if (cr6.eq) goto loc_8314A3F4;
loc_8314A3C4:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a408
	if (!cr6.lt) goto loc_8314A408;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8314a3f4
	if (cr6.eq) goto loc_8314A3F4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a408
	if (!cr6.lt) goto loc_8314A408;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8314a408
	if (!cr6.eq) goto loc_8314A408;
loc_8314A3F4:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314a418
	if (cr6.eq) goto loc_8314A418;
loc_8314A408:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x8314a3a8
	if (cr6.lt) goto loc_8314A3A8;
	// b 0x8314a420
	goto loc_8314A420;
loc_8314A418:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8314A420:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bne cr6,0x8314a5c4
	if (!cr6.eq) goto loc_8314A5C4;
loc_8314A42C:
	// cmplw cr6,r19,r17
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r17.u32, xer);
	// bge cr6,0x8314a4ec
	if (!cr6.lt) goto loc_8314A4EC;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_8314A438:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a454
	if (!cr6.lt) goto loc_8314A454;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8314a4b4
	if (cr6.eq) goto loc_8314A4B4;
loc_8314A454:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a4c8
	if (!cr6.lt) goto loc_8314A4C8;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x8314a4b4
	if (cr6.eq) goto loc_8314A4B4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a4c8
	if (!cr6.lt) goto loc_8314A4C8;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x8314a4b4
	if (cr6.eq) goto loc_8314A4B4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a4c8
	if (!cr6.lt) goto loc_8314A4C8;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x8314a4b4
	if (cr6.eq) goto loc_8314A4B4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a4c8
	if (!cr6.lt) goto loc_8314A4C8;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x8314a4c8
	if (!cr6.eq) goto loc_8314A4C8;
loc_8314A4B4:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314a4d8
	if (cr6.eq) goto loc_8314A4D8;
loc_8314A4C8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x8314a438
	if (cr6.lt) goto loc_8314A438;
	// b 0x8314a4e0
	goto loc_8314A4E0;
loc_8314A4D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8314A4E0:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bne cr6,0x8314a5c4
	if (!cr6.eq) goto loc_8314A5C4;
loc_8314A4EC:
	// cmplw cr6,r20,r14
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r14.u32, xer);
	// bge cr6,0x8314a594
	if (!cr6.lt) goto loc_8314A594;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
loc_8314A4F8:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a514
	if (!cr6.lt) goto loc_8314A514;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x8314a55c
	if (cr6.eq) goto loc_8314A55C;
loc_8314A514:
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a570
	if (!cr6.lt) goto loc_8314A570;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8314a55c
	if (cr6.eq) goto loc_8314A55C;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a570
	if (!cr6.lt) goto loc_8314A570;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x8314a55c
	if (cr6.eq) goto loc_8314A55C;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bge cr6,0x8314a570
	if (!cr6.lt) goto loc_8314A570;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x8314a570
	if (!cr6.eq) goto loc_8314A570;
loc_8314A55C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314a580
	if (cr6.eq) goto loc_8314A580;
loc_8314A570:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x8314a4f8
	if (cr6.lt) goto loc_8314A4F8;
	// b 0x8314a588
	goto loc_8314A588;
loc_8314A580:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
loc_8314A588:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpwi cr6,r4,13
	cr6.compare<int32_t>(ctx.r4.s32, 13, xer);
	// bne cr6,0x8314a5c4
	if (!cr6.eq) goto loc_8314A5C4;
loc_8314A594:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x8314a5a8
	if (cr6.lt) goto loc_8314A5A8;
	// li r11,10
	ctx.r11.s64 = 10;
loc_8314A5A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x8314a5c0
	if (!cr6.lt) goto loc_8314A5C0;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lbz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// b 0x8314a5c4
	goto loc_8314A5C4;
loc_8314A5C0:
	// li r4,13
	ctx.r4.s64 = 13;
loc_8314A5C4:
	// lbz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 8);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,700(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x8314a5f4
	if (!cr6.lt) goto loc_8314A5F4;
	// lwz r26,716(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x831494a0
	ctx.lr = 0x8314A5F0;
	sub_831494A0(ctx, base);
	// b 0x8314a604
	goto loc_8314A604;
loc_8314A5F4:
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r6,716(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// bl 0x831494a0
	ctx.lr = 0x8314A600;
	sub_831494A0(ctx, base);
	// lwz r26,716(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_8314A604:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bge cr6,0x8314a67c
	if (!cr6.lt) goto loc_8314A67C;
	// mulli r11,r3,224
	ctx.r11.s64 = ctx.r3.s64 * 224;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ld r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8314a644
	if (!cr6.eq) goto loc_8314A644;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x8314a66c
	goto loc_8314A66C;
loc_8314A644:
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x8314a664
	if (!cr6.eq) goto loc_8314A664;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314a668
	if (cr6.eq) goto loc_8314A668;
loc_8314A664:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314A66C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314a680
	if (cr6.eq) goto loc_8314A680;
loc_8314A67C:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_8314A680:
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r30,32
	cr6.compare<int32_t>(ctx.r30.s32, 32, xer);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r27,r11
	ctx.r7.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r29,r7,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r30.u32);
	// bge cr6,0x8314a700
	if (!cr6.lt) goto loc_8314A700;
	// mulli r11,r30,224
	ctx.r11.s64 = ctx.r30.s64 * 224;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ld r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 52);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8314a6c8
	if (!cr6.eq) goto loc_8314A6C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8314a6f0
	goto loc_8314A6F0;
loc_8314A6C8:
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314a6e8
	if (!cr6.eq) goto loc_8314A6E8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314a6ec
	if (cr6.eq) goto loc_8314A6EC;
loc_8314A6E8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A6EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314A6F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314a704
	if (cr6.eq) goto loc_8314A704;
loc_8314A700:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
loc_8314A704:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x8314A714;
	sub_83120738(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x83120738
	ctx.lr = 0x8314A734;
	sub_83120738(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x8314a774
	if (!cr6.eq) goto loc_8314A774;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83123620
	ctx.lr = 0x8314A750;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x83120738
	ctx.lr = 0x8314A760;
	sub_83120738(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314a774
	if (!cr6.eq) goto loc_8314A774;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314a7e4
	goto loc_8314A7E4;
loc_8314A774:
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83123620
	ctx.lr = 0x8314A780;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x83120738
	ctx.lr = 0x8314A790;
	sub_83120738(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314a7d4
	if (cr6.eq) goto loc_8314A7D4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8314a7d4
	if (cr6.eq) goto loc_8314A7D4;
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// bl 0x83123620
	ctx.lr = 0x8314A7B0;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// bl 0x83120738
	ctx.lr = 0x8314A7C0;
	sub_83120738(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314a7d4
	if (!cr6.eq) goto loc_8314A7D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314a7e4
	goto loc_8314A7E4;
loc_8314A7D4:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83132450
	ctx.lr = 0x8314A7E4;
	sub_83132450(ctx, base);
loc_8314A7E4:
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(ctx.r30.s32, 255, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stwx r9,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u32);
	// beq cr6,0x8314a818
	if (cr6.eq) goto loc_8314A818;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// bge cr6,0x8314a818
	if (!cr6.lt) goto loc_8314A818;
	// lwz r10,700(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
	// stb r9,52(r8)
	PPC_STORE_U8(ctx.r8.u32 + 52, ctx.r9.u8);
loc_8314A818:
	// lbz r10,1(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8314a37c
	if (cr6.lt) goto loc_8314A37C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_8314A82C:
	// lbz r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 8);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// ble cr6,0x8314a86c
	if (!cr6.gt) goto loc_8314A86C;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lis r8,-31980
	ctx.r8.s64 = -2095841280;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r8,32416
	ctx.r6.s64 = ctx.r8.s64 + 32416;
	// li r5,12
	ctx.r5.s64 = 12;
	// subf r4,r28,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r28.s64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831d88b0
	ctx.lr = 0x8314A860;
	sub_831D88B0(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x8314a870
	goto loc_8314A870;
loc_8314A86C:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8314A870:
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r3,716(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,700(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8314A89C:
	// cmplwi cr6,r7,32
	cr6.compare<uint32_t>(ctx.r7.u32, 32, xer);
	// bge cr6,0x8314aa18
	if (!cr6.lt) goto loc_8314AA18;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// bge cr6,0x8314aa08
	if (!cr6.lt) goto loc_8314AA08;
	// ld r11,44(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 44);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8314a8cc
	if (!cr6.eq) goto loc_8314A8CC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8314a8f4
	goto loc_8314A8F4;
loc_8314A8CC:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x8314a8ec
	if (!cr6.eq) goto loc_8314A8EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// beq cr6,0x8314a8f0
	if (cr6.eq) goto loc_8314A8F0;
loc_8314A8EC:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A8F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314A8F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314aa08
	if (!cr6.eq) goto loc_8314AA08;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314aa08
	if (cr6.eq) goto loc_8314AA08;
	// ld r11,44(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 44);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8314a928
	if (!cr6.eq) goto loc_8314A928;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8314a950
	goto loc_8314A950;
loc_8314A928:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x8314a948
	if (!cr6.eq) goto loc_8314A948;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// beq cr6,0x8314a94c
	if (cr6.eq) goto loc_8314A94C;
loc_8314A948:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A94C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314A950:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// ld r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8314a980
	if (!cr6.eq) goto loc_8314A980;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8314a9a8
	goto loc_8314A9A8;
loc_8314A980:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x8314a9a0
	if (!cr6.eq) goto loc_8314A9A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// beq cr6,0x8314a9a4
	if (cr6.eq) goto loc_8314A9A4;
loc_8314A9A0:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A9A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314A9A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314aa08
	if (!cr6.eq) goto loc_8314AA08;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r11,7176(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314aa08
	if (!cr6.eq) goto loc_8314AA08;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x8314a9d8
	if (!cr6.lt) goto loc_8314A9D8;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lbz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// b 0x8314a9dc
	goto loc_8314A9DC;
loc_8314A9D8:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_8314A9DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314aa08
	if (!cr6.eq) goto loc_8314AA08;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x8314aa00
	if (!cr6.lt) goto loc_8314AA00;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stb r5,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r5.u8);
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_8314AA00:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_8314AA08:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,224
	ctx.r8.s64 = ctx.r8.s64 + 224;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// blt cr6,0x8314a89c
	if (cr6.lt) goto loc_8314A89C;
loc_8314AA18:
	// li r9,21
	ctx.r9.s64 = 21;
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// addi r10,r24,228
	ctx.r10.s64 = ctx.r24.s64 + 228;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314AA28:
	// lwzu r9,12(r11)
	ea = 12 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8314aa28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314AA28;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314AA3C"))) PPC_WEAK_FUNC(sub_8314AA3C);
PPC_FUNC_IMPL(__imp__sub_8314AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314AA40"))) PPC_WEAK_FUNC(sub_8314AA40);
PPC_FUNC_IMPL(__imp__sub_8314AA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8314AA48;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7456(r1)
	ea = -7456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8314ab4c
	if (cr6.eq) goto loc_8314AB4C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bge cr6,0x8314ab4c
	if (!cr6.lt) goto loc_8314AB4C;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314aa98
	if (!cr6.eq) goto loc_8314AA98;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83148310
	ctx.lr = 0x8314AA8C;
	sub_83148310(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314aa9c
	if (cr6.eq) goto loc_8314AA9C;
loc_8314AA98:
	// li r25,1
	ctx.r25.s64 = 1;
loc_8314AA9C:
	// addi r29,r1,184
	ctx.r29.s64 = ctx.r1.s64 + 184;
	// li r30,31
	ctx.r30.s64 = 31;
loc_8314AAA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b00d00
	ctx.lr = 0x8314AAAC;
	sub_82B00D00(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// bge 0x8314aaa4
	if (!cr0.lt) goto loc_8314AAA4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83149110
	ctx.lr = 0x8314AAC0;
	sub_83149110(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831479d0
	ctx.lr = 0x8314AAD8;
	sub_831479D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83147c70
	ctx.lr = 0x8314AAE0;
	sub_83147C70(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83149298
	ctx.lr = 0x8314AAF8;
	sub_83149298(ctx, base);
	// lbz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314ab34
	if (!cr6.eq) goto loc_8314AB34;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83149ed0
	ctx.lr = 0x8314AB20;
	sub_83149ED0(ctx, base);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8314a060
	ctx.lr = 0x8314AB34;
	sub_8314A060(ctx, base);
loc_8314AB34:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83147f20
	ctx.lr = 0x8314AB40;
	sub_83147F20(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831480f0
	ctx.lr = 0x8314AB4C;
	sub_831480F0(ctx, base);
loc_8314AB4C:
	// addi r1,r1,7456
	ctx.r1.s64 = ctx.r1.s64 + 7456;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314AB54"))) PPC_WEAK_FUNC(sub_8314AB54);
PPC_FUNC_IMPL(__imp__sub_8314AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314AB58"))) PPC_WEAK_FUNC(sub_8314AB58);
PPC_FUNC_IMPL(__imp__sub_8314AB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8314AB60;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7456(r1)
	ea = -7456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8314ac98
	if (cr6.eq) goto loc_8314AC98;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bge cr6,0x8314ac98
	if (!cr6.lt) goto loc_8314AC98;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314abb4
	if (!cr6.eq) goto loc_8314ABB4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83148310
	ctx.lr = 0x8314ABA8;
	sub_83148310(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314abb8
	if (cr6.eq) goto loc_8314ABB8;
loc_8314ABB4:
	// li r24,1
	ctx.r24.s64 = 1;
loc_8314ABB8:
	// addi r30,r1,184
	ctx.r30.s64 = ctx.r1.s64 + 184;
	// li r31,31
	ctx.r31.s64 = 31;
loc_8314ABC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b00d00
	ctx.lr = 0x8314ABC8;
	sub_82B00D00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// bge 0x8314abc0
	if (!cr0.lt) goto loc_8314ABC0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83149110
	ctx.lr = 0x8314ABDC;
	sub_83149110(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r7,1(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x831479d0
	ctx.lr = 0x8314ABF4;
	sub_831479D0(ctx, base);
	// li r9,11
	ctx.r9.s64 = 11;
loc_8314ABF8:
	// addi r11,r9,47
	ctx.r11.s64 = ctx.r9.s64 + 47;
	// addi r10,r1,7352
	ctx.r10.s64 = ctx.r1.s64 + 7352;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314ac24
	if (cr6.eq) goto loc_8314AC24;
	// stbx r25,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u8);
	// lbz r11,177(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 177);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r10.u8);
loc_8314AC24:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8314abf8
	if (cr6.lt) goto loc_8314ABF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83147c70
	ctx.lr = 0x8314AC40;
	sub_83147C70(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83149298
	ctx.lr = 0x8314AC58;
	sub_83149298(ctx, base);
	// lbz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314ac80
	if (!cr6.eq) goto loc_8314AC80;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83149ed0
	ctx.lr = 0x8314AC80;
	sub_83149ED0(ctx, base);
loc_8314AC80:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83147f20
	ctx.lr = 0x8314AC8C;
	sub_83147F20(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831480f0
	ctx.lr = 0x8314AC98;
	sub_831480F0(ctx, base);
loc_8314AC98:
	// addi r1,r1,7456
	ctx.r1.s64 = ctx.r1.s64 + 7456;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314ACA0"))) PPC_WEAK_FUNC(sub_8314ACA0);
PPC_FUNC_IMPL(__imp__sub_8314ACA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8314ACA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8314adfc
	if (cr6.eq) goto loc_8314ADFC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bge cr6,0x8314adfc
	if (!cr6.lt) goto loc_8314ADFC;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82ac0af0
	ctx.lr = 0x8314ACD8;
	sub_82AC0AF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83149418
	ctx.lr = 0x8314ACE0;
	sub_83149418(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314ACE4:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x8314acf8
	if (!cr6.lt) goto loc_8314ACF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,584(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 584);
	// b 0x8314acfc
	goto loc_8314ACFC;
loc_8314ACF8:
	// li r10,255
	ctx.r10.s64 = 255;
loc_8314ACFC:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r1,316
	ctx.r7.s64 = ctx.r1.s64 + 316;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// blt cr6,0x8314ace4
	if (cr6.lt) goto loc_8314ACE4;
	// addi r4,r31,104
	ctx.r4.s64 = ctx.r31.s64 + 104;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82abfda0
	ctx.lr = 0x8314AD24;
	sub_82ABFDA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r11,625(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 625);
	// lbz r10,616(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 616);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lbz r9,617(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 617);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r8,618(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 618);
	// lbz r7,619(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 619);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lbz r30,620(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 620);
	// lbz r29,621(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 621);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x8314aa40
	ctx.lr = 0x8314AD70;
	sub_8314AA40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314AD74:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x8314ad90
	if (!cr6.lt) goto loc_8314AD90;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,316
	ctx.r9.s64 = ctx.r1.s64 + 316;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r7,584(r8)
	PPC_STORE_U8(ctx.r8.u32 + 584, ctx.r7.u8);
loc_8314AD90:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8314ad74
	if (cr6.lt) goto loc_8314AD74;
	// addi r31,r31,584
	ctx.r31.s64 = ctx.r31.s64 + 584;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x8314ADB4;
	sub_831CE980(ctx, base);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,47
	ctx.r5.s64 = 47;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stb r3,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r8.u8);
	// stb r6,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r6.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r7,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r7.u8);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r9,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x8314ADFC;
	sub_831CE980(ctx, base);
loc_8314ADFC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314AE04"))) PPC_WEAK_FUNC(sub_8314AE04);
PPC_FUNC_IMPL(__imp__sub_8314AE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314AE08"))) PPC_WEAK_FUNC(sub_8314AE08);
PPC_FUNC_IMPL(__imp__sub_8314AE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8314AE10;
	__savegprlr_28(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8314af64
	if (cr6.eq) goto loc_8314AF64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bge cr6,0x8314af64
	if (!cr6.lt) goto loc_8314AF64;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82ac0af0
	ctx.lr = 0x8314AE40;
	sub_82AC0AF0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83149418
	ctx.lr = 0x8314AE48;
	sub_83149418(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314AE4C:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x8314ae60
	if (!cr6.lt) goto loc_8314AE60;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r10,1162(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1162);
	// b 0x8314ae64
	goto loc_8314AE64;
loc_8314AE60:
	// li r10,255
	ctx.r10.s64 = 255;
loc_8314AE64:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r1,316
	ctx.r7.s64 = ctx.r1.s64 + 316;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// blt cr6,0x8314ae4c
	if (cr6.lt) goto loc_8314AE4C;
	// addi r4,r31,832
	ctx.r4.s64 = ctx.r31.s64 + 832;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82abfda0
	ctx.lr = 0x8314AE8C;
	sub_82ABFDA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r11,1203(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1203);
	// lbz r10,1194(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1194);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lbz r9,1195(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1195);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r8,1196(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1196);
	// lbz r7,1197(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1197);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lbz r30,1198(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1198);
	// lbz r29,1199(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1199);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x8314aa40
	ctx.lr = 0x8314AED8;
	sub_8314AA40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314AEDC:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x8314aef8
	if (!cr6.lt) goto loc_8314AEF8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,316
	ctx.r9.s64 = ctx.r1.s64 + 316;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r7,1162(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1162, ctx.r7.u8);
loc_8314AEF8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x8314aedc
	if (cr6.lt) goto loc_8314AEDC;
	// addi r31,r31,1162
	ctx.r31.s64 = ctx.r31.s64 + 1162;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x8314AF1C;
	sub_831CE980(ctx, base);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r5,47
	ctx.r5.s64 = 47;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stb r3,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r8.u8);
	// stb r6,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r6.u8);
	// stb r10,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r10.u8);
	// stb r7,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r7.u8);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stb r9,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x8314AF64;
	sub_831CE980(ctx, base);
loc_8314AF64:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314AF6C"))) PPC_WEAK_FUNC(sub_8314AF6C);
PPC_FUNC_IMPL(__imp__sub_8314AF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314AF70"))) PPC_WEAK_FUNC(sub_8314AF70);
PPC_FUNC_IMPL(__imp__sub_8314AF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8314AF78;
	__savegprlr_23(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8c428
	ctx.lr = 0x8314AF88;
	sub_82D8C428(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x8314AF94;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8314AF98;
	sub_830FFAA8(ctx, base);
	// addi r10,r3,-21
	ctx.r10.s64 = ctx.r3.s64 + -21;
	// lis r9,95
	ctx.r9.s64 = 6225920;
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// subfic r7,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// ori r26,r9,60640
	ctx.r26.u64 = ctx.r9.u64 | 60640;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r28,0
	ctx.r28.s64 = 0;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// lwzx r11,r3,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8314b064
	if (!cr6.gt) goto loc_8314B064;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,72
	ctx.r10.s64 = 4718592;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r23,r11,58144
	ctx.r23.u64 = ctx.r11.u64 | 58144;
	// ori r24,r10,7136
	ctx.r24.u64 = ctx.r10.u64 | 7136;
	// ori r25,r9,65535
	ctx.r25.u64 = ctx.r9.u64 | 65535;
loc_8314AFE8:
	// cmplwi cr6,r28,653
	cr6.compare<uint32_t>(ctx.r28.u32, 653, xer);
	// blt cr6,0x8314aff8
	if (cr6.lt) goto loc_8314AFF8;
	// add r31,r3,r23
	ctx.r31.u64 = ctx.r3.u64 + ctx.r23.u64;
	// b 0x8314b000
	goto loc_8314B000;
loc_8314AFF8:
	// add r11,r27,r3
	ctx.r11.u64 = ctx.r27.u64 + ctx.r3.u64;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_8314B000:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8311bdf0
	ctx.lr = 0x8314B008;
	sub_8311BDF0(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r4,504(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 504);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8311be78
	ctx.lr = 0x8314B01C;
	sub_8311BE78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314b04c
	if (cr6.eq) goto loc_8314B04C;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8314aca0
	ctx.lr = 0x8314B038;
	sub_8314ACA0(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8314ae08
	ctx.lr = 0x8314B04C;
	sub_8314AE08(ctx, base);
loc_8314B04C:
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,1312
	ctx.r27.s64 = ctx.r27.s64 + 1312;
	// lwzx r11,r3,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r26.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x8314afe8
	if (cr6.lt) goto loc_8314AFE8;
loc_8314B064:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314B06C"))) PPC_WEAK_FUNC(sub_8314B06C);
PPC_FUNC_IMPL(__imp__sub_8314B06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314B070"))) PPC_WEAK_FUNC(sub_8314B070);
PPC_FUNC_IMPL(__imp__sub_8314B070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,10400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10400);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314b0c8
	if (cr6.eq) goto loc_8314B0C8;
	// rlwinm r8,r4,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
loc_8314B084:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314b0a8
	if (!cr6.eq) goto loc_8314B0A8;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314b0ac
	if (cr6.eq) goto loc_8314B0AC;
loc_8314B0A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314B0AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314b0d0
	if (!cr6.eq) goto loc_8314B0D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314b084
	if (cr6.lt) goto loc_8314B084;
loc_8314B0C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8314B0D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314B0D8"))) PPC_WEAK_FUNC(sub_8314B0D8);
PPC_FUNC_IMPL(__imp__sub_8314B0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,2400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2400);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314b130
	if (cr6.eq) goto loc_8314B130;
	// rlwinm r8,r4,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
loc_8314B0EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314b110
	if (!cr6.eq) goto loc_8314B110;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314b114
	if (cr6.eq) goto loc_8314B114;
loc_8314B110:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314B114:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314b138
	if (!cr6.eq) goto loc_8314B138;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314b0ec
	if (cr6.lt) goto loc_8314B0EC;
loc_8314B130:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8314B138:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314B140"))) PPC_WEAK_FUNC(sub_8314B140);
PPC_FUNC_IMPL(__imp__sub_8314B140) {
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
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,200(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 200);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x831235b8
	ctx.lr = 0x8314B180;
	sub_831235B8(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_8314B1B4"))) PPC_WEAK_FUNC(sub_8314B1B4);
PPC_FUNC_IMPL(__imp__sub_8314B1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314B1B8"))) PPC_WEAK_FUNC(sub_8314B1B8);
PPC_FUNC_IMPL(__imp__sub_8314B1B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314B1C8"))) PPC_WEAK_FUNC(sub_8314B1C8);
PPC_FUNC_IMPL(__imp__sub_8314B1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83132450
	sub_83132450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314B1CC"))) PPC_WEAK_FUNC(sub_8314B1CC);
PPC_FUNC_IMPL(__imp__sub_8314B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314B1D0"))) PPC_WEAK_FUNC(sub_8314B1D0);
PPC_FUNC_IMPL(__imp__sub_8314B1D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83132668
	sub_83132668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314B1D4"))) PPC_WEAK_FUNC(sub_8314B1D4);
PPC_FUNC_IMPL(__imp__sub_8314B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314B1D8"))) PPC_WEAK_FUNC(sub_8314B1D8);
PPC_FUNC_IMPL(__imp__sub_8314B1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,-24912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f8.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f9,-11368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11368);
	ctx.f9.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f11,16100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16100);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x8314b260
	if (!cr6.eq) goto loc_8314B260;
	// li r11,2
	ctx.r11.s64 = 2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r10,r3,128
	ctx.r10.s64 = ctx.r3.s64 + 128;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8314B218:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314b23c
	if (!cr6.eq) goto loc_8314B23C;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8314b234
	if (!cr6.eq) goto loc_8314B234;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x8314b250
	goto loc_8314B250;
loc_8314B234:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x8314b250
	goto loc_8314B250;
loc_8314B23C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
loc_8314B250:
	// fadds f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8314b218
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B218;
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
loc_8314B260:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r9,r11,16096
	ctx.r9.s64 = ctx.r11.s64 + 16096;
	// addi r8,r10,16092
	ctx.r8.s64 = ctx.r10.s64 + 16092;
	// lbzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r11,r8,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// add. r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8314b2d0
	if (cr0.eq) goto loc_8314B2D0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314B28C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314b2b0
	if (!cr6.eq) goto loc_8314B2B0;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8314b2a8
	if (!cr6.eq) goto loc_8314B2A8;
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x8314b2c4
	goto loc_8314B2C4;
loc_8314B2A8:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// b 0x8314b2c4
	goto loc_8314B2C4;
loc_8314B2B0:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// frsp f0,f7
	ctx.f0.f64 = double(float(ctx.f7.f64));
loc_8314B2C4:
	// fadds f10,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8314b28c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B28C;
loc_8314B2D0:
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// bne cr6,0x8314b334
	if (!cr6.eq) goto loc_8314B334;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lwz r7,128(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,9796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9796);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// b 0x8314b350
	goto loc_8314B350;
loc_8314B334:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f0,f10,f8
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
loc_8314B350:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8314b370
	if (cr6.gt) goto loc_8314B370;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,30444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30444);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8314b374
	if (!cr6.lt) goto loc_8314B374;
loc_8314B370:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_8314B374:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lfs f13,16088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16088);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,16084(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16084);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f13,f0,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// cmplwi cr6,r3,100
	cr6.compare<uint32_t>(ctx.r3.u32, 100, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314B3A8"))) PPC_WEAK_FUNC(sub_8314B3A8);
PPC_FUNC_IMPL(__imp__sub_8314B3A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8314B3B0;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-3512
	ctx.r11.s64 = ctx.r11.s64 + -3512;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfs f30,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314b3fc
	if (!cr6.eq) goto loc_8314B3FC;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314b424
	goto loc_8314B424;
loc_8314B3FC:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314b41c
	if (!cr6.eq) goto loc_8314B41C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314b420
	if (cr6.eq) goto loc_8314B420;
loc_8314B41C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314B420:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314B424:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314b444
	if (cr6.eq) goto loc_8314B444;
	// li r3,70
	ctx.r3.s64 = 70;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8314B444:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,16104
	ctx.r11.s64 = ctx.r11.s64 + 16104;
	// li r30,57
	ctx.r30.s64 = 57;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8314B458:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// bne cr6,0x8314b4f8
	if (!cr6.eq) goto loc_8314B4F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8314B474;
	sub_83120738(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,38
	cr6.compare<int32_t>(ctx.r4.s32, 38, xer);
	// bne cr6,0x8314b490
	if (!cr6.eq) goto loc_8314B490;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 * 14;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8314B490:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f31,f0,f11,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f31.f64));
	// blt cr6,0x8314b4ec
	if (cr6.lt) goto loc_8314B4EC;
	// bne cr6,0x8314b4f8
	if (!cr6.eq) goto loc_8314B4F8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8314B4C8;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f31,f0,f11,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f31.f64));
	// b 0x8314b4f8
	goto loc_8314B4F8;
loc_8314B4EC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_8314B4F8:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x8314b458
	if (!cr0.eq) goto loc_8314B458;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8314B51C;
	sub_83120738(ctx, base);
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(ctx.r27.s32, 8, xer);
	// bne cr6,0x8314b558
	if (!cr6.eq) goto loc_8314B558;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x8314b54c
	if (cr6.eq) goto loc_8314B54C;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x8314b540
	if (cr6.eq) goto loc_8314B540;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x8314b558
	if (!cr6.eq) goto loc_8314B558;
loc_8314B540:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,4328(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4328);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8314b554
	goto loc_8314B554;
loc_8314B54C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21712);
	ctx.f0.f64 = double(temp.f32);
loc_8314B554:
	// fmuls f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_8314B558:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314b57c
	if (cr6.eq) goto loc_8314B57C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
loc_8314B57C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(ctx.r27.s32, 18, xer);
	// lfs f0,-24912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// beq cr6,0x8314b5cc
	if (cr6.eq) goto loc_8314B5CC;
	// cmpwi cr6,r27,22
	cr6.compare<int32_t>(ctx.r27.s32, 22, xer);
	// bne cr6,0x8314b624
	if (!cr6.eq) goto loc_8314B624;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83120738
	ctx.lr = 0x8314B5A8;
	sub_83120738(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,21212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21212);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f31,f11,f0,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f31.f64));
	// b 0x8314b624
	goto loc_8314B624;
loc_8314B5CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-11368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8314b5ec
	if (cr6.gt) goto loc_8314B5EC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x8314b614
	goto loc_8314B614;
loc_8314B5EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-6664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6664);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x8314b604
	if (cr6.lt) goto loc_8314B604;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8314b614
	goto loc_8314B614;
loc_8314B604:
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,14604(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14604);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8314B614:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f13,9104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_8314B624:
	// fctidz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lbz r3,111(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// bge cr6,0x8314b63c
	if (!cr6.lt) goto loc_8314B63C;
	// li r3,40
	ctx.r3.s64 = 40;
loc_8314B63C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,99
	cr6.compare<uint32_t>(ctx.r11.u32, 99, xer);
	// ble cr6,0x8314b64c
	if (!cr6.gt) goto loc_8314B64C;
	// li r3,99
	ctx.r3.s64 = 99;
loc_8314B64C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314B65C"))) PPC_WEAK_FUNC(sub_8314B65C);
PPC_FUNC_IMPL(__imp__sub_8314B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314B660"))) PPC_WEAK_FUNC(sub_8314B660);
PPC_FUNC_IMPL(__imp__sub_8314B660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314B668;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3512
	ctx.r11.s64 = ctx.r11.s64 + -3512;
	// li r29,0
	ctx.r29.s64 = 0;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314b6a0
	if (!cr6.eq) goto loc_8314B6A0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314b6c8
	goto loc_8314B6C8;
loc_8314B6A0:
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8314b6c0
	if (!cr6.eq) goto loc_8314B6C0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314b6c4
	if (cr6.eq) goto loc_8314B6C4;
loc_8314B6C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8314B6C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314B6C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314b6e0
	if (cr6.eq) goto loc_8314B6E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314B6E0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x8314B6F4;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// ble cr6,0x8314b708
	if (!cr6.gt) goto loc_8314B708;
	// li r30,7
	ctx.r30.s64 = 7;
loc_8314B708:
	// li r11,13
	ctx.r11.s64 = 13;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83132450
	ctx.lr = 0x8314B720;
	sub_83132450(ctx, base);
	// li r9,55
	ctx.r9.s64 = 55;
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// li r8,60
	ctx.r8.s64 = 60;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r7,70
	ctx.r7.s64 = 70;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r5,85
	ctx.r5.s64 = 85;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// li r4,88
	ctx.r4.s64 = 88;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// ble cr6,0x8314b798
	if (!cr6.gt) goto loc_8314B798;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_8314B774:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314b794
	if (cr6.lt) goto loc_8314B794;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x8314b774
	if (cr6.lt) goto loc_8314B774;
	// b 0x8314b798
	goto loc_8314B798;
loc_8314B794:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8314B798:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// blt cr6,0x8314b7ec
	if (cr6.lt) goto loc_8314B7EC;
	// bgt cr6,0x8314b7b0
	if (cr6.gt) goto loc_8314B7B0;
	// cmplwi cr6,r9,80
	cr6.compare<uint32_t>(ctx.r9.u32, 80, xer);
	// blt cr6,0x8314b7b0
	if (cr6.lt) goto loc_8314B7B0;
	// li r3,4
	ctx.r3.s64 = 4;
loc_8314B7B0:
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// bgt cr6,0x8314b7c4
	if (cr6.gt) goto loc_8314B7C4;
	// cmplwi cr6,r9,85
	cr6.compare<uint32_t>(ctx.r9.u32, 85, xer);
	// blt cr6,0x8314b7c4
	if (cr6.lt) goto loc_8314B7C4;
	// li r3,5
	ctx.r3.s64 = 5;
loc_8314B7C4:
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// bgt cr6,0x8314b7d8
	if (cr6.gt) goto loc_8314B7D8;
	// cmplwi cr6,r9,88
	cr6.compare<uint32_t>(ctx.r9.u32, 88, xer);
	// blt cr6,0x8314b7d8
	if (cr6.lt) goto loc_8314B7D8;
	// li r3,6
	ctx.r3.s64 = 6;
loc_8314B7D8:
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// bgt cr6,0x8314b7ec
	if (cr6.gt) goto loc_8314B7EC;
	// cmplwi cr6,r9,90
	cr6.compare<uint32_t>(ctx.r9.u32, 90, xer);
	// blt cr6,0x8314b7ec
	if (cr6.lt) goto loc_8314B7EC;
	// li r3,7
	ctx.r3.s64 = 7;
loc_8314B7EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314B7F4"))) PPC_WEAK_FUNC(sub_8314B7F4);
PPC_FUNC_IMPL(__imp__sub_8314B7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314B7F8"))) PPC_WEAK_FUNC(sub_8314B7F8);
PPC_FUNC_IMPL(__imp__sub_8314B7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8314B800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314B810;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314B824;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314b94c
	if (cr6.eq) goto loc_8314B94C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314B83C;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8314b854
	if (cr6.eq) goto loc_8314B854;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8314b94c
	if (!cr6.eq) goto loc_8314B94C;
loc_8314B854:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,-3464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3464);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8314b884
	if (!cr6.eq) goto loc_8314B884;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314b888
	if (cr6.eq) goto loc_8314B888;
loc_8314B884:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314B888:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314b94c
	if (!cr6.eq) goto loc_8314B94C;
	// lhz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314B8A4;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314b94c
	if (cr6.eq) goto loc_8314B94C;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831177f8
	ctx.lr = 0x8314B8C0;
	sub_831177F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314b94c
	if (cr6.eq) goto loc_8314B94C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bl 0x831177a0
	ctx.lr = 0x8314B8D8;
	sub_831177A0(ctx, base);
	// lwz r6,2116(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2116);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8314b94c
	if (cr6.eq) goto loc_8314B94C;
	// addi r5,r3,52
	ctx.r5.s64 = ctx.r3.s64 + 52;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8314B8F4:
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// bge cr6,0x8314b904
	if (!cr6.lt) goto loc_8314B904;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8314B904:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// rlwinm r3,r4,0,0,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314b92c
	if (!cr6.eq) goto loc_8314B92C;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314b930
	if (cr6.eq) goto loc_8314B930;
loc_8314B92C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314B930:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314b958
	if (!cr6.eq) goto loc_8314B958;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x8314b8f4
	if (cr6.lt) goto loc_8314B8F4;
loc_8314B94C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8314B958:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r11,6,26,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314B968"))) PPC_WEAK_FUNC(sub_8314B968);
PPC_FUNC_IMPL(__imp__sub_8314B968) {
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
	// bl 0x831156e8
	ctx.lr = 0x8314B97C;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,9328
	ctx.r5.s64 = ctx.r9.s64 + 9328;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831178a0
	ctx.lr = 0x8314B9A4;
	sub_831178A0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314B9B0;
	sub_8311C338(ctx, base);
	// lwz r8,540(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r8,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314ba2c
	if (cr6.eq) goto loc_8314BA2C;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
	// rlwinm r7,r5,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3FFF;
	// addi r6,r11,-3464
	ctx.r6.s64 = ctx.r11.s64 + -3464;
loc_8314B9D8:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8314b9e8
	if (cr6.lt) goto loc_8314B9E8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8314B9E8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r11,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bne cr6,0x8314ba0c
	if (!cr6.eq) goto loc_8314BA0C;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314ba10
	if (cr6.eq) goto loc_8314BA10;
loc_8314BA0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314BA10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314ba44
	if (!cr6.eq) goto loc_8314BA44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314b9d8
	if (cr6.lt) goto loc_8314B9D8;
loc_8314BA2C:
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
loc_8314BA44:
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

__attribute__((alias("__imp__sub_8314BA5C"))) PPC_WEAK_FUNC(sub_8314BA5C);
PPC_FUNC_IMPL(__imp__sub_8314BA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BA60"))) PPC_WEAK_FUNC(sub_8314BA60);
PPC_FUNC_IMPL(__imp__sub_8314BA60) {
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
	// bl 0x831156e8
	ctx.lr = 0x8314BA74;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,9328
	ctx.r5.s64 = ctx.r9.s64 + 9328;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831178a0
	ctx.lr = 0x8314BA9C;
	sub_831178A0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314BAA8;
	sub_8311C338(ctx, base);
	// lwz r8,540(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r8,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314bb24
	if (cr6.eq) goto loc_8314BB24;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
	// rlwinm r7,r5,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3FFF;
	// addi r6,r11,-3464
	ctx.r6.s64 = ctx.r11.s64 + -3464;
loc_8314BAD0:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8314bae0
	if (cr6.lt) goto loc_8314BAE0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8314BAE0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r11,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bne cr6,0x8314bb04
	if (!cr6.eq) goto loc_8314BB04;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314bb08
	if (cr6.eq) goto loc_8314BB08;
loc_8314BB04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314BB08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314bb3c
	if (!cr6.eq) goto loc_8314BB3C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314bad0
	if (cr6.lt) goto loc_8314BAD0;
loc_8314BB24:
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
loc_8314BB3C:
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

__attribute__((alias("__imp__sub_8314BB54"))) PPC_WEAK_FUNC(sub_8314BB54);
PPC_FUNC_IMPL(__imp__sub_8314BB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BB58"))) PPC_WEAK_FUNC(sub_8314BB58);
PPC_FUNC_IMPL(__imp__sub_8314BB58) {
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
	// bl 0x831156e8
	ctx.lr = 0x8314BB6C;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,9328
	ctx.r5.s64 = ctx.r9.s64 + 9328;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r31,48(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831178a0
	ctx.lr = 0x8314BB94;
	sub_831178A0(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314BBA0;
	sub_8311C338(ctx, base);
	// lwz r8,540(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r8,23,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314bc1c
	if (cr6.eq) goto loc_8314BC1C;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r9,r3,328
	ctx.r9.s64 = ctx.r3.s64 + 328;
	// rlwinm r7,r5,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3FFF;
	// addi r6,r11,-3464
	ctx.r6.s64 = ctx.r11.s64 + -3464;
loc_8314BBC8:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8314bbd8
	if (cr6.lt) goto loc_8314BBD8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8314BBD8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r11,14,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r4,r7
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, xer);
	// bne cr6,0x8314bbfc
	if (!cr6.eq) goto loc_8314BBFC;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// clrlwi r4,r11,14
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314bc00
	if (cr6.eq) goto loc_8314BC00;
loc_8314BBFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314BC00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314bc34
	if (!cr6.eq) goto loc_8314BC34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314bbc8
	if (cr6.lt) goto loc_8314BBC8;
loc_8314BC1C:
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
loc_8314BC34:
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

__attribute__((alias("__imp__sub_8314BC4C"))) PPC_WEAK_FUNC(sub_8314BC4C);
PPC_FUNC_IMPL(__imp__sub_8314BC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BC50"))) PPC_WEAK_FUNC(sub_8314BC50);
PPC_FUNC_IMPL(__imp__sub_8314BC50) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x831156e8
	ctx.lr = 0x8314BC78;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,9328
	ctx.r5.s64 = ctx.r9.s64 + 9328;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x831178a0
	ctx.lr = 0x8314BC9C;
	sub_831178A0(ctx, base);
	// clrlwi r31,r31,16
	ctx.r31.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831c6578
	ctx.lr = 0x8314BCB0;
	sub_831C6578(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314bdb8
	if (cr6.eq) goto loc_8314BDB8;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831c64a0
	ctx.lr = 0x8314BCCC;
	sub_831C64A0(ctx, base);
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r4,r11,26,6,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314bdb8
	if (cr6.eq) goto loc_8314BDB8;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// rlwinm r9,r6,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3FFF;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_8314BCF0:
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// bge cr6,0x8314bd00
	if (!cr6.lt) goto loc_8314BD00;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8314BD00:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// rlwinm r3,r11,14,18,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314bd28
	if (!cr6.eq) goto loc_8314BD28;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314bd2c
	if (cr6.eq) goto loc_8314BD2C;
loc_8314BD28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314BD2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314bd74
	if (!cr6.eq) goto loc_8314BD74;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314bd60
	if (!cr6.eq) goto loc_8314BD60;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314bd64
	if (cr6.eq) goto loc_8314BD64;
loc_8314BD60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314BD64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8314bd78
	if (cr6.eq) goto loc_8314BD78;
loc_8314BD74:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8314BD78:
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8314bd8c
	if (cr6.eq) goto loc_8314BD8C;
	// rlwinm r30,r30,0,31,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_8314BD8C:
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8314bd9c
	if (cr6.eq) goto loc_8314BD9C;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_8314BD9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314bdd4
	if (!cr6.eq) goto loc_8314BDD4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// blt cr6,0x8314bcf0
	if (cr6.lt) goto loc_8314BCF0;
loc_8314BDB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314BDBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314BDD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314bdbc
	goto loc_8314BDBC;
}

__attribute__((alias("__imp__sub_8314BDDC"))) PPC_WEAK_FUNC(sub_8314BDDC);
PPC_FUNC_IMPL(__imp__sub_8314BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BDE0"))) PPC_WEAK_FUNC(sub_8314BDE0);
PPC_FUNC_IMPL(__imp__sub_8314BDE0) {
	PPC_FUNC_PROLOGUE();
	// li r4,51
	ctx.r4.s64 = 51;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8314bc50
	sub_8314BC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314BDEC"))) PPC_WEAK_FUNC(sub_8314BDEC);
PPC_FUNC_IMPL(__imp__sub_8314BDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BDF0"))) PPC_WEAK_FUNC(sub_8314BDF0);
PPC_FUNC_IMPL(__imp__sub_8314BDF0) {
	PPC_FUNC_PROLOGUE();
	// li r4,51
	ctx.r4.s64 = 51;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8314bc50
	sub_8314BC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314BDFC"))) PPC_WEAK_FUNC(sub_8314BDFC);
PPC_FUNC_IMPL(__imp__sub_8314BDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BE00"))) PPC_WEAK_FUNC(sub_8314BE00);
PPC_FUNC_IMPL(__imp__sub_8314BE00) {
	PPC_FUNC_PROLOGUE();
	// li r4,52
	ctx.r4.s64 = 52;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8314bc50
	sub_8314BC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314BE0C"))) PPC_WEAK_FUNC(sub_8314BE0C);
PPC_FUNC_IMPL(__imp__sub_8314BE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BE10"))) PPC_WEAK_FUNC(sub_8314BE10);
PPC_FUNC_IMPL(__imp__sub_8314BE10) {
	PPC_FUNC_PROLOGUE();
	// li r4,52
	ctx.r4.s64 = 52;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8314bc50
	sub_8314BC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314BE1C"))) PPC_WEAK_FUNC(sub_8314BE1C);
PPC_FUNC_IMPL(__imp__sub_8314BE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BE20"))) PPC_WEAK_FUNC(sub_8314BE20);
PPC_FUNC_IMPL(__imp__sub_8314BE20) {
	PPC_FUNC_PROLOGUE();
	// li r4,51
	ctx.r4.s64 = 51;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x8314bc50
	sub_8314BC50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314BE2C"))) PPC_WEAK_FUNC(sub_8314BE2C);
PPC_FUNC_IMPL(__imp__sub_8314BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BE30"))) PPC_WEAK_FUNC(sub_8314BE30);
PPC_FUNC_IMPL(__imp__sub_8314BE30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314BE50;
	sub_831156E8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r10,9328
	ctx.r5.s64 = ctx.r10.s64 + 9328;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x8314BE7C;
	sub_831178A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8311c148
	ctx.lr = 0x8314BE88;
	sub_8311C148(ctx, base);
	// lhz r7,808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r7,25
	ctx.r9.u64 = ctx.r7.u32 & 0x7F;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314bf1c
	if (cr6.eq) goto loc_8314BF1C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r3,248
	ctx.r8.s64 = ctx.r3.s64 + 248;
	// ld r7,-3512(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3512);
loc_8314BEAC:
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8314bec0
	if (!cr6.lt) goto loc_8314BEC0;
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8314BEC0:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8314bed8
	if (!cr6.eq) goto loc_8314BED8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x8314bf00
	goto loc_8314BF00;
loc_8314BED8:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x8314bef8
	if (!cr6.eq) goto loc_8314BEF8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314befc
	if (cr6.eq) goto loc_8314BEFC;
loc_8314BEF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314BEFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314BF00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314bf38
	if (!cr6.eq) goto loc_8314BF38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314beac
	if (cr6.lt) goto loc_8314BEAC;
loc_8314BF1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314BF20:
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
loc_8314BF38:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314bf20
	goto loc_8314BF20;
}

__attribute__((alias("__imp__sub_8314BF40"))) PPC_WEAK_FUNC(sub_8314BF40);
PPC_FUNC_IMPL(__imp__sub_8314BF40) {
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
	// bl 0x831156e8
	ctx.lr = 0x8314BF5C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123768
	ctx.lr = 0x8314BF70;
	sub_83123768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x8314bfa0
	if (cr6.eq) goto loc_8314BFA0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123a08
	ctx.lr = 0x8314BF8C;
	sub_83123A08(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// beq cr6,0x8314bfa4
	if (cr6.eq) goto loc_8314BFA4;
loc_8314BFA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8314BFA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314BFBC"))) PPC_WEAK_FUNC(sub_8314BFBC);
PPC_FUNC_IMPL(__imp__sub_8314BFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314BFC0"))) PPC_WEAK_FUNC(sub_8314BFC0);
PPC_FUNC_IMPL(__imp__sub_8314BFC0) {
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
	ctx.lr = 0x8314BFD8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8319dc20
	ctx.lr = 0x8314BFEC;
	sub_8319DC20(ctx, base);
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8319df40
	ctx.lr = 0x8314C000;
	sub_8319DF40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314c044
	if (cr6.eq) goto loc_8314C044;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r11,46732
	ctx.r9.u64 = ctx.r11.u64 | 46732;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x8314c03c
	if (!cr6.eq) goto loc_8314C03C;
	// rlwinm r11,r11,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8314c044
	if (cr6.eq) goto loc_8314C044;
loc_8314C03C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314c048
	goto loc_8314C048;
loc_8314C044:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8314C048:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C060"))) PPC_WEAK_FUNC(sub_8314C060);
PPC_FUNC_IMPL(__imp__sub_8314C060) {
	PPC_FUNC_PROLOGUE();
	// b 0x831326a8
	sub_831326A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314C064"))) PPC_WEAK_FUNC(sub_8314C064);
PPC_FUNC_IMPL(__imp__sub_8314C064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314C068"))) PPC_WEAK_FUNC(sub_8314C068);
PPC_FUNC_IMPL(__imp__sub_8314C068) {
	PPC_FUNC_PROLOGUE();
	// b 0x83132770
	// ERROR 83132770
	return;
}

__attribute__((alias("__imp__sub_8314C06C"))) PPC_WEAK_FUNC(sub_8314C06C);
PPC_FUNC_IMPL(__imp__sub_8314C06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314C070"))) PPC_WEAK_FUNC(sub_8314C070);
PPC_FUNC_IMPL(__imp__sub_8314C070) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x8314C090;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addis r30,r4,205
	ctx.r30.s64 = ctx.r4.s64 + 13434880;
	// addi r5,r10,9328
	ctx.r5.s64 = ctx.r10.s64 + 9328;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r30,-18420
	ctx.r30.s64 = ctx.r30.s64 + -18420;
	// bl 0x831178a0
	ctx.lr = 0x8314C0B8;
	sub_831178A0(ctx, base);
	// addis r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 262144;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,11860
	ctx.r7.s64 = ctx.r7.s64 + 11860;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_8314C0CC:
	// cmplwi cr6,r9,70
	cr6.compare<uint32_t>(ctx.r9.u32, 70, xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bge cr6,0x8314c0dc
	if (!cr6.lt) goto loc_8314C0DC;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8314C0DC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314c154
	if (cr6.eq) goto loc_8314C154;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// bne cr6,0x8314c130
	if (!cr6.eq) goto loc_8314C130;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// xor r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r5,r6,0,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8314c11c
	if (!cr6.eq) goto loc_8314C11C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8314c120
	if (cr6.eq) goto loc_8314C120;
loc_8314C11C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314C120:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314c134
	if (cr6.eq) goto loc_8314C134;
loc_8314C130:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314C134:
	// clrlwi r6,r31,31
	ctx.r6.u64 = ctx.r31.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x8314c148
	if (cr6.eq) goto loc_8314C148;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_8314C148:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314c180
	if (!cr6.eq) goto loc_8314C180;
loc_8314C154:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplwi cr6,r9,70
	cr6.compare<uint32_t>(ctx.r9.u32, 70, xer);
	// blt cr6,0x8314c0cc
	if (cr6.lt) goto loc_8314C0CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314C168:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314C180:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314c168
	goto loc_8314C168;
}

__attribute__((alias("__imp__sub_8314C188"))) PPC_WEAK_FUNC(sub_8314C188);
PPC_FUNC_IMPL(__imp__sub_8314C188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8314C190;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314C19C;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r29,0
	ctx.r29.s64 = 0;
	// addis r26,r24,214
	ctx.r26.s64 = ctx.r24.s64 + 14024704;
	// addi r25,r11,-3512
	ctx.r25.s64 = ctx.r11.s64 + -3512;
	// addi r26,r26,10896
	ctx.r26.s64 = ctx.r26.s64 + 10896;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_8314C1BC:
	// cmplwi cr6,r29,72
	cr6.compare<uint32_t>(ctx.r29.u32, 72, xer);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bge cr6,0x8314c1cc
	if (!cr6.lt) goto loc_8314C1CC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8314C1CC:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8314c1ec
	if (!cr6.eq) goto loc_8314C1EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314c214
	goto loc_8314C214;
loc_8314C1EC:
	// lhz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314c20c
	if (!cr6.eq) goto loc_8314C20C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314c210
	if (cr6.eq) goto loc_8314C210;
loc_8314C20C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314C210:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314C214:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314c290
	if (!cr6.eq) goto loc_8314C290;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314c290
	if (!cr6.eq) goto loc_8314C290;
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(ctx.r11.u32, 2048, xer);
	// bne cr6,0x8314c290
	if (!cr6.eq) goto loc_8314C290;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825a2298
	ctx.lr = 0x8314C248;
	sub_825A2298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314c274
	if (cr6.eq) goto loc_8314C274;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x825a2298
	ctx.lr = 0x8314C268;
	sub_825A2298(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314c290
	if (!cr6.eq) goto loc_8314C290;
loc_8314C274:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8314C280;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8314b140
	ctx.lr = 0x8314C28C;
	sub_8314B140(ctx, base);
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
loc_8314C290:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,5852
	ctx.r28.s64 = ctx.r28.s64 + 5852;
	// cmplwi cr6,r29,72
	cr6.compare<uint32_t>(ctx.r29.u32, 72, xer);
	// blt cr6,0x8314c1bc
	if (cr6.lt) goto loc_8314C1BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,9328
	ctx.r5.s64 = ctx.r10.s64 + 9328;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x8314C2C0;
	sub_831178A0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8311c148
	ctx.lr = 0x8314C2CC;
	sub_8311C148(ctx, base);
	// lhz r9,808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r11,r9,25
	ctx.r11.u64 = ctx.r9.u32 & 0x7F;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314c3d4
	if (cr6.eq) goto loc_8314C3D4;
	// addi r28,r3,248
	ctx.r28.s64 = ctx.r3.s64 + 248;
loc_8314C2E8:
	// ld r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bge cr6,0x8314c30c
	if (!cr6.lt) goto loc_8314C30C;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r30,512(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 512);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
loc_8314C30C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314c328
	if (!cr6.eq) goto loc_8314C328;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314c354
	goto loc_8314C354;
loc_8314C328:
	// lhz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314c34c
	if (!cr6.eq) goto loc_8314C34C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314c350
	if (cr6.eq) goto loc_8314C350;
loc_8314C34C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314C350:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314C354:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314c3bc
	if (!cr6.eq) goto loc_8314C3BC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8314C368;
	sub_8311BF98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ad3e80
	ctx.lr = 0x8314C378;
	sub_82AD3E80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314c3bc
	if (cr6.eq) goto loc_8314C3BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ad3dd8
	ctx.lr = 0x8314C394;
	sub_82AD3DD8(ctx, base);
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8314c3bc
	if (!cr6.eq) goto loc_8314C3BC;
	// rlwinm r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,2048
	cr6.compare<uint32_t>(ctx.r10.u32, 2048, xer);
	// bne cr6,0x8314c3bc
	if (!cr6.eq) goto loc_8314C3BC;
	// rlwimi r11,r30,2,22,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 2) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
loc_8314C3BC:
	// lhz r11,808(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8314c2e8
	if (cr6.lt) goto loc_8314C2E8;
loc_8314C3D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314C3DC"))) PPC_WEAK_FUNC(sub_8314C3DC);
PPC_FUNC_IMPL(__imp__sub_8314C3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314C3E0"))) PPC_WEAK_FUNC(sub_8314C3E0);
PPC_FUNC_IMPL(__imp__sub_8314C3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8314C3E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x8314C3F0;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,9328
	ctx.r5.s64 = ctx.r9.s64 + 9328;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831178a0
	ctx.lr = 0x8314C418;
	sub_831178A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8311c148
	ctx.lr = 0x8314C424;
	sub_8311C148(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x8314C42C;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8314C430;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x8314c554
	if (!cr6.eq) goto loc_8314C554;
	// lhz r11,808(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 808);
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314c5cc
	if (cr6.eq) goto loc_8314C5CC;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r28,r25,248
	ctx.r28.s64 = ctx.r25.s64 + 248;
	// addi r30,r10,-3512
	ctx.r30.s64 = ctx.r10.s64 + -3512;
	// li r29,1
	ctx.r29.s64 = 1;
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8314C464:
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bge cr6,0x8314c47c
	if (!cr6.lt) goto loc_8314C47C;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
loc_8314C47C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314c494
	if (!cr6.eq) goto loc_8314C494;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x8314c4bc
	goto loc_8314C4BC;
loc_8314C494:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314c4b4
	if (!cr6.eq) goto loc_8314C4B4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x8314c4b8
	if (cr6.eq) goto loc_8314C4B8;
loc_8314C4B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314C4B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314C4BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314c524
	if (!cr6.eq) goto loc_8314C524;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311bf98
	ctx.lr = 0x8314C4D0;
	sub_8311BF98(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x831235b8
	ctx.lr = 0x8314C4E4;
	sub_831235B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,-3464(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3464);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8314c510
	if (!cr6.eq) goto loc_8314C510;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314c514
	if (cr6.eq) goto loc_8314C514;
loc_8314C510:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314C514:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314c548
	if (cr6.eq) goto loc_8314C548;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8314C524:
	// lhz r11,808(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8314c464
	if (cr6.lt) goto loc_8314C464;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8314C548:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8314C554:
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x8314c5cc
	if (!cr6.eq) goto loc_8314C5CC;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + ctx.r10.u32);
	// bl 0x8311bf98
	ctx.lr = 0x8314C570;
	sub_8311BF98(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x831235b8
	ctx.lr = 0x8314C588;
	sub_831235B8(ctx, base);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,-3464(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3464);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8314c5b8
	if (!cr6.eq) goto loc_8314C5B8;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314c5bc
	if (cr6.eq) goto loc_8314C5BC;
loc_8314C5B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314C5BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314c5d0
	if (cr6.eq) goto loc_8314C5D0;
loc_8314C5CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314C5D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314C5D8"))) PPC_WEAK_FUNC(sub_8314C5D8);
PPC_FUNC_IMPL(__imp__sub_8314C5D8) {
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
	ctx.lr = 0x8314C5F8;
	sub_831156E8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x8314C604;
	sub_8311C148(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r10,808(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 808);
	// clrlwi r8,r10,25
	ctx.r8.u64 = ctx.r10.u32 & 0x7F;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314c6b4
	if (cr6.eq) goto loc_8314C6B4;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r6,248
	ctx.r7.s64 = ctx.r6.s64 + 248;
	// ld r5,-3512(r10)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r10.u32 + -3512);
loc_8314C630:
	// li r9,0
	ctx.r9.s64 = 0;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8314c650
	if (!cr6.lt) goto loc_8314C650;
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r9,512(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 512);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_8314C650:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8314c668
	if (!cr6.eq) goto loc_8314C668;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314c690
	goto loc_8314C690;
loc_8314C668:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x8314c688
	if (!cr6.eq) goto loc_8314C688;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8314c68c
	if (cr6.eq) goto loc_8314C68C;
loc_8314C688:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8314C68C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8314C690:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314c6b0
	if (!cr6.eq) goto loc_8314C6B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314c630
	if (cr6.lt) goto loc_8314C630;
	// b 0x8314c6b4
	goto loc_8314C6B4;
loc_8314C6B0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
loc_8314C6B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C6CC"))) PPC_WEAK_FUNC(sub_8314C6CC);
PPC_FUNC_IMPL(__imp__sub_8314C6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314C6D0"))) PPC_WEAK_FUNC(sub_8314C6D0);
PPC_FUNC_IMPL(__imp__sub_8314C6D0) {
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
	ctx.lr = 0x8314C6E8;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x8314C6F0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8314C6F4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x8314c7d8
	if (!cr6.eq) goto loc_8314C7D8;
	// addis r11,r31,229
	ctx.r11.s64 = ctx.r31.s64 + 15007744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-23256
	ctx.r11.s64 = ctx.r11.s64 + -23256;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x8314C718;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83180258
	ctx.lr = 0x8314C724;
	sub_83180258(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8314c738
	if (!cr6.eq) goto loc_8314C738;
loc_8314C730:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8314c7dc
	goto loc_8314C7DC;
loc_8314C738:
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// rlwinm r9,r11,0,4,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8314c730
	if (cr6.eq) goto loc_8314C730;
	// addis r11,r31,205
	ctx.r11.s64 = ctx.r31.s64 + 13434880;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-18420
	ctx.r11.s64 = ctx.r11.s64 + -18420;
	// addis r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 262144;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r6,r6,11860
	ctx.r6.s64 = ctx.r6.s64 + 11860;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r7,-3464(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3464);
loc_8314C76C:
	// cmplwi cr6,r9,70
	cr6.compare<uint32_t>(ctx.r9.u32, 70, xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bge cr6,0x8314c77c
	if (!cr6.lt) goto loc_8314C77C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8314C77C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314c7c8
	if (cr6.eq) goto loc_8314C7C8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// rlwinm r4,r5,0,0,13
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8314c7ac
	if (!cr6.eq) goto loc_8314C7AC;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8314c7b0
	if (cr6.eq) goto loc_8314C7B0;
loc_8314C7AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314C7B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314c7c8
	if (!cr6.eq) goto loc_8314C7C8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x8314c730
	if (cr6.eq) goto loc_8314C730;
loc_8314C7C8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplwi cr6,r9,70
	cr6.compare<uint32_t>(ctx.r9.u32, 70, xer);
	// blt cr6,0x8314c76c
	if (cr6.lt) goto loc_8314C76C;
loc_8314C7D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314C7DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C7F4"))) PPC_WEAK_FUNC(sub_8314C7F4);
PPC_FUNC_IMPL(__imp__sub_8314C7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314C7F8"))) PPC_WEAK_FUNC(sub_8314C7F8);
PPC_FUNC_IMPL(__imp__sub_8314C7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8314C800;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314C810;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addis r26,r11,222
	ctx.r26.s64 = ctx.r11.s64 + 14548992;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r26,26340
	ctx.r26.s64 = ctx.r26.s64 + 26340;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ac1a78
	ctx.lr = 0x8314C830;
	sub_82AC1A78(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314c8e8
	if (cr6.eq) goto loc_8314C8E8;
	// addi r24,r26,836
	ctx.r24.s64 = ctx.r26.s64 + 836;
	// lbz r22,0(r31)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_8314C848:
	// cmplwi cr6,r29,60
	cr6.compare<uint32_t>(ctx.r29.u32, 60, xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bge cr6,0x8314c858
	if (!cr6.lt) goto loc_8314C858;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8314C858:
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// bne cr6,0x8314c874
	if (!cr6.eq) goto loc_8314C874;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ac1a78
	ctx.lr = 0x8314C868;
	sub_82AC1A78(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x8314c8d8
	if (!cr6.eq) goto loc_8314C8D8;
loc_8314C874:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8314c8d8
	if (cr6.gt) goto loc_8314C8D8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8314c8c0
	if (cr6.eq) goto loc_8314C8C0;
	// bdz 0x8314c8cc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8314C8CC;
	// bdz 0x8314c8d8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8314C8D8;
	// bdz 0x8314c8d8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8314C8D8;
	// bdnz 0x8314c8a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C8A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// b 0x8314c8d4
	goto loc_8314C8D4;
loc_8314C8A8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r10,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// b 0x8314c8d4
	goto loc_8314C8D4;
loc_8314C8C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,24,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFF;
	// b 0x8314c8d4
	goto loc_8314C8D4;
loc_8314C8CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,22,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FF;
loc_8314C8D4:
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8314C8D8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,48
	ctx.r27.s64 = ctx.r27.s64 + 48;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// blt cr6,0x8314c848
	if (cr6.lt) goto loc_8314C848;
loc_8314C8E8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8314c948
	if (!cr6.eq) goto loc_8314C948;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8314c948
	if (cr6.eq) goto loc_8314C948;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8314C948:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314C954"))) PPC_WEAK_FUNC(sub_8314C954);
PPC_FUNC_IMPL(__imp__sub_8314C954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314C958"))) PPC_WEAK_FUNC(sub_8314C958);
PPC_FUNC_IMPL(__imp__sub_8314C958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8314C960;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314C96C;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// addis r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 6291456;
	// addi r29,r29,-4872
	ctx.r29.s64 = ctx.r29.s64 + -4872;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8314ca28
	if (!cr6.eq) goto loc_8314CA28;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,17016
	ctx.r25.s64 = ctx.r11.s64 + 17016;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8314C99C:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83132cf8
	ctx.lr = 0x8314C9B0;
	sub_83132CF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314c9f8
	if (cr6.eq) goto loc_8314C9F8;
loc_8314C9BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83132cb8
	ctx.lr = 0x8314C9CC;
	sub_83132CB8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8314ca14
	if (cr6.eq) goto loc_8314CA14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x83132cf8
	ctx.lr = 0x8314C9EC;
	sub_83132CF8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8314c9bc
	if (cr6.lt) goto loc_8314C9BC;
loc_8314C9F8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r26,30
	cr6.compare<uint32_t>(ctx.r26.u32, 30, xer);
	// blt cr6,0x8314c99c
	if (cr6.lt) goto loc_8314C99C;
loc_8314CA08:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8314CA14:
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8314CA28:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,-3464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3464);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8314ca58
	if (!cr6.eq) goto loc_8314CA58;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314ca5c
	if (cr6.eq) goto loc_8314CA5C;
loc_8314CA58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314CA5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314ca08
	if (!cr6.eq) goto loc_8314CA08;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x8314CA70;
	sub_8311C148(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r8,788(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,17016
	ctx.r9.s64 = ctx.r11.s64 + 17016;
	// rlwinm r8,r8,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8314CA88:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x8314cab0
	if (cr6.eq) goto loc_8314CAB0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// blt cr6,0x8314ca88
	if (cr6.lt) goto loc_8314CA88;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8314CAB0:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314CAC4"))) PPC_WEAK_FUNC(sub_8314CAC4);
PPC_FUNC_IMPL(__imp__sub_8314CAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314CAC8"))) PPC_WEAK_FUNC(sub_8314CAC8);
PPC_FUNC_IMPL(__imp__sub_8314CAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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

__attribute__((alias("__imp__sub_8314CAD8"))) PPC_WEAK_FUNC(sub_8314CAD8);
PPC_FUNC_IMPL(__imp__sub_8314CAD8) {
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
	ctx.lr = 0x8314CAF0;
	sub_831156E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x8314cb20
	if (!cr6.eq) goto loc_8314CB20;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123878
	ctx.lr = 0x8314CB0C;
	sub_83123878(ctx, base);
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
loc_8314CB20:
	// bl 0x831156e8
	ctx.lr = 0x8314CB24;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x8314CB38;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x8314CB48;
	sub_8311C338(ctx, base);
	// lhz r4,78(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x8314cb5c
	if (cr6.eq) goto loc_8314CB5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314CB5C;
	sub_8311C338(ctx, base);
loc_8314CB5C:
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r3,r11,15,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1F;
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

__attribute__((alias("__imp__sub_8314CB78"))) PPC_WEAK_FUNC(sub_8314CB78);
PPC_FUNC_IMPL(__imp__sub_8314CB78) {
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
	ctx.lr = 0x8314CB90;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8314CB94;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x8314cbb4
	if (cr6.eq) goto loc_8314CBB4;
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
loc_8314CBB4:
	// bl 0x831156e8
	ctx.lr = 0x8314CBB8;
	sub_831156E8(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x8314CBC4;
	sub_8311BF98(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// rlwinm r10,r11,0,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE000000;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8314CBE8"))) PPC_WEAK_FUNC(sub_8314CBE8);
PPC_FUNC_IMPL(__imp__sub_8314CBE8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314CC08;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// cmplwi cr6,r10,84
	cr6.compare<uint32_t>(ctx.r10.u32, 84, xer);
	// addi r11,r11,-21588
	ctx.r11.s64 = ctx.r11.s64 + -21588;
	// bgt cr6,0x8314d144
	if (cr6.gt) goto loc_8314D144;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-13256
	ctx.r12.s64 = ctx.r12.s64 + -13256;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8314CD8C;
	case 1:
		goto loc_8314CD9C;
	case 2:
		goto loc_8314CDAC;
	case 3:
		goto loc_8314CDBC;
	case 4:
		goto loc_8314CDCC;
	case 5:
		goto loc_8314CDDC;
	case 6:
		goto loc_8314CDEC;
	case 7:
		goto loc_8314CDFC;
	case 8:
		goto loc_8314CE2C;
	case 9:
		goto loc_8314CE3C;
	case 10:
		goto loc_8314CE48;
	case 11:
		goto loc_8314CE8C;
	case 12:
		goto loc_8314CE98;
	case 13:
		goto loc_8314CEA4;
	case 14:
		goto loc_8314CEB0;
	case 15:
		goto loc_8314CEC0;
	case 16:
		goto loc_8314CED0;
	case 17:
		goto loc_8314CEE0;
	case 18:
		goto loc_8314CE14;
	case 19:
		goto loc_8314CF10;
	case 20:
		goto loc_8314CF00;
	case 21:
		goto loc_8314CEF0;
	case 22:
		goto loc_8314CF78;
	case 23:
		goto loc_8314CF84;
	case 24:
		goto loc_8314CF90;
	case 25:
		goto loc_8314CF9C;
	case 26:
		goto loc_8314CFA8;
	case 27:
		goto loc_8314CFB4;
	case 28:
		goto loc_8314CFC0;
	case 29:
		goto loc_8314CFCC;
	case 30:
		goto loc_8314CFD8;
	case 31:
		goto loc_8314CF6C;
	case 32:
		goto loc_8314D144;
	case 33:
		goto loc_8314D144;
	case 34:
		goto loc_8314D144;
	case 35:
		goto loc_8314CF1C;
	case 36:
		goto loc_8314CF2C;
	case 37:
		goto loc_8314CF3C;
	case 38:
		goto loc_8314CF4C;
	case 39:
		goto loc_8314CF5C;
	case 40:
		goto loc_8314D144;
	case 41:
		goto loc_8314D144;
	case 42:
		goto loc_8314D144;
	case 43:
		goto loc_8314D144;
	case 44:
		goto loc_8314D144;
	case 45:
		goto loc_8314D144;
	case 46:
		goto loc_8314D144;
	case 47:
		goto loc_8314D144;
	case 48:
		goto loc_8314D144;
	case 49:
		goto loc_8314D144;
	case 50:
		goto loc_8314D144;
	case 51:
		goto loc_8314D144;
	case 52:
		goto loc_8314D144;
	case 53:
		goto loc_8314D144;
	case 54:
		goto loc_8314D144;
	case 55:
		goto loc_8314D144;
	case 56:
		goto loc_8314D144;
	case 57:
		goto loc_8314D144;
	case 58:
		goto loc_8314D144;
	case 59:
		goto loc_8314D144;
	case 60:
		goto loc_8314D144;
	case 61:
		goto loc_8314D144;
	case 62:
		goto loc_8314D144;
	case 63:
		goto loc_8314D144;
	case 64:
		goto loc_8314D144;
	case 65:
		goto loc_8314D144;
	case 66:
		goto loc_8314D144;
	case 67:
		goto loc_8314D144;
	case 68:
		goto loc_8314D144;
	case 69:
		goto loc_8314D144;
	case 70:
		goto loc_8314D144;
	case 71:
		goto loc_8314D144;
	case 72:
		goto loc_8314D144;
	case 73:
		goto loc_8314D144;
	case 74:
		goto loc_8314D144;
	case 75:
		goto loc_8314D084;
	case 76:
		goto loc_8314CFE4;
	case 77:
		goto loc_8314D014;
	case 78:
		goto loc_8314D024;
	case 79:
		goto loc_8314D034;
	case 80:
		goto loc_8314D044;
	case 81:
		goto loc_8314CFFC;
	case 82:
		goto loc_8314D054;
	case 83:
		goto loc_8314D064;
	case 84:
		goto loc_8314D074;
	default:
		return;
	}
	// lwz r24,-12916(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12916);
	// lwz r24,-12900(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12900);
	// lwz r24,-12884(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12884);
	// lwz r24,-12868(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12868);
	// lwz r24,-12852(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12852);
	// lwz r24,-12836(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12836);
	// lwz r24,-12820(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12820);
	// lwz r24,-12804(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12804);
	// lwz r24,-12756(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12756);
	// lwz r24,-12740(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12740);
	// lwz r24,-12728(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12728);
	// lwz r24,-12660(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12660);
	// lwz r24,-12648(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12648);
	// lwz r24,-12636(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12636);
	// lwz r24,-12624(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12624);
	// lwz r24,-12608(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12608);
	// lwz r24,-12592(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12592);
	// lwz r24,-12576(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12576);
	// lwz r24,-12780(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12780);
	// lwz r24,-12528(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12528);
	// lwz r24,-12544(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12544);
	// lwz r24,-12560(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12560);
	// lwz r24,-12424(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12424);
	// lwz r24,-12412(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12412);
	// lwz r24,-12400(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12400);
	// lwz r24,-12388(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12388);
	// lwz r24,-12376(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12376);
	// lwz r24,-12364(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12364);
	// lwz r24,-12352(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12352);
	// lwz r24,-12340(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12340);
	// lwz r24,-12328(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12328);
	// lwz r24,-12436(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12436);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-12516(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12516);
	// lwz r24,-12500(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12500);
	// lwz r24,-12484(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12484);
	// lwz r24,-12468(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12468);
	// lwz r24,-12452(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12452);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-11964(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11964);
	// lwz r24,-12156(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12156);
	// lwz r24,-12316(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12316);
	// lwz r24,-12268(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12268);
	// lwz r24,-12252(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12252);
	// lwz r24,-12236(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12236);
	// lwz r24,-12220(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12220);
	// lwz r24,-12292(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12292);
	// lwz r24,-12204(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12204);
	// lwz r24,-12188(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12188);
	// lwz r24,-12172(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -12172);
loc_8314CD8C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CD9C:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CDAC:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CDBC:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CDCC:
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CDDC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CDEC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CDFC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314d144
	if (cr6.lt) goto loc_8314D144;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CE14:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314d144
	if (cr6.lt) goto loc_8314D144;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CE2C:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CE3C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CE48:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8314ce60
	if (!cr6.eq) goto loc_8314CE60;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x8314ce74
	if (cr6.eq) goto loc_8314CE74;
loc_8314CE60:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8314ce80
	if (!cr6.eq) goto loc_8314CE80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8314ce80
	if (!cr6.eq) goto loc_8314CE80;
loc_8314CE74:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CE80:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CE8C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CE98:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CEA4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stb r10,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CEB0:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CEC0:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CED0:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CEE0:
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CEF0:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF00:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF10:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF1C:
	// lhz r10,86(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 86);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,86(r11)
	PPC_STORE_U16(ctx.r11.u32 + 86, ctx.r10.u16);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF2C:
	// lhz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 88);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,88(r11)
	PPC_STORE_U16(ctx.r11.u32 + 88, ctx.r10.u16);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF3C:
	// lhz r10,90(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 90);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,90(r11)
	PPC_STORE_U16(ctx.r11.u32 + 90, ctx.r10.u16);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF4C:
	// lhz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,92(r11)
	PPC_STORE_U16(ctx.r11.u32 + 92, ctx.r10.u16);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF5C:
	// lhz r10,94(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 94);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF6C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,84(r11)
	PPC_STORE_U8(ctx.r11.u32 + 84, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF78:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF84:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF90:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CF9C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CFA8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CFB4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CFC0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,74(r11)
	PPC_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CFCC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,75(r11)
	PPC_STORE_U8(ctx.r11.u32 + 75, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CFD8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,76(r11)
	PPC_STORE_U8(ctx.r11.u32 + 76, ctx.r10.u8);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CFE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,132(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314d144
	if (cr6.lt) goto loc_8314D144;
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314CFFC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,152(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314d144
	if (cr6.lt) goto loc_8314D144;
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314D014:
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314D024:
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314D034:
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314D044:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314D054:
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314D064:
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314D074:
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// b 0x8314d144
	goto loc_8314D144;
loc_8314D084:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,-59
	ctx.r10.s64 = ctx.r10.s64 + -59;
	// cmplwi cr6,r10,34
	cr6.compare<uint32_t>(ctx.r10.u32, 34, xer);
	// bgt cr6,0x8314d144
	if (cr6.gt) goto loc_8314D144;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-12116
	ctx.r12.s64 = ctx.r12.s64 + -12116;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8314D138;
	case 1:
		goto loc_8314D138;
	case 2:
		goto loc_8314D138;
	case 3:
		goto loc_8314D138;
	case 4:
		goto loc_8314D138;
	case 5:
		goto loc_8314D138;
	case 6:
		goto loc_8314D138;
	case 7:
		goto loc_8314D138;
	case 8:
		goto loc_8314D138;
	case 9:
		goto loc_8314D138;
	case 10:
		goto loc_8314D138;
	case 11:
		goto loc_8314D138;
	case 12:
		goto loc_8314D138;
	case 13:
		goto loc_8314D138;
	case 14:
		goto loc_8314D138;
	case 15:
		goto loc_8314D138;
	case 16:
		goto loc_8314D138;
	case 17:
		goto loc_8314D138;
	case 18:
		goto loc_8314D138;
	case 19:
		goto loc_8314D138;
	case 20:
		goto loc_8314D138;
	case 21:
		goto loc_8314D138;
	case 22:
		goto loc_8314D138;
	case 23:
		goto loc_8314D138;
	case 24:
		goto loc_8314D138;
	case 25:
		goto loc_8314D138;
	case 26:
		goto loc_8314D138;
	case 27:
		goto loc_8314D138;
	case 28:
		goto loc_8314D138;
	case 29:
		goto loc_8314D138;
	case 30:
		goto loc_8314D138;
	case 31:
		goto loc_8314D138;
	case 32:
		goto loc_8314D138;
	case 33:
		goto loc_8314D138;
	case 34:
		goto loc_8314D138;
	default:
		return;
	}
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
	// lwz r24,-11976(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -11976);
loc_8314D138:
	// lbz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 124);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,124(r11)
	PPC_STORE_U8(ctx.r11.u32 + 124, ctx.r10.u8);
loc_8314D144:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D15C"))) PPC_WEAK_FUNC(sub_8314D15C);
PPC_FUNC_IMPL(__imp__sub_8314D15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314D160"))) PPC_WEAK_FUNC(sub_8314D160);
PPC_FUNC_IMPL(__imp__sub_8314D160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8314D168;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314D180;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addis r27,r31,205
	ctx.r27.s64 = ctx.r31.s64 + 13434880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r27,r27,-18420
	ctx.r27.s64 = ctx.r27.s64 + -18420;
	// bl 0x8311c3d8
	ctx.lr = 0x8314D19C;
	sub_8311C3D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314D1B0;
	sub_82C161B8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314d268
	if (cr6.eq) goto loc_8314D268;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314D1C8;
	sub_8311C338(ctx, base);
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8314d268
	if (!cr6.eq) goto loc_8314D268;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,103
	cr6.compare<uint32_t>(ctx.r11.u32, 103, xer);
	// beq cr6,0x8314d268
	if (cr6.eq) goto loc_8314D268;
	// ld r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82f7d488
	ctx.lr = 0x8314D1F4;
	sub_82F7D488(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314d268
	if (cr6.eq) goto loc_8314D268;
	// ld r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82a67128
	ctx.lr = 0x8314D214;
	sub_82A67128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314d268
	if (cr6.eq) goto loc_8314D268;
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8314d240
	if (!cr6.gt) goto loc_8314D240;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
loc_8314D240:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// ble cr6,0x8314d268
	if (!cr6.gt) goto loc_8314D268;
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r10.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r9.u32);
loc_8314D268:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314D270"))) PPC_WEAK_FUNC(sub_8314D270);
PPC_FUNC_IMPL(__imp__sub_8314D270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8314D278;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314D28C;
	sub_831156E8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x831235b8
	ctx.lr = 0x8314D2B0;
	sub_831235B8(ctx, base);
	// lis r31,-31772
	ctx.r31.s64 = -2082209792;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,-3464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3464);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8314d2e0
	if (!cr6.eq) goto loc_8314D2E0;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314d2e4
	if (cr6.eq) goto loc_8314D2E4;
loc_8314D2E0:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8314D2E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314d30c
	if (!cr6.eq) goto loc_8314D30C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c148
	ctx.lr = 0x8314D2F8;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x8314d30c
	if (cr6.eq) goto loc_8314D30C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8314D30C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x8314D31C;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x8314D32C;
	sub_8311C338(ctx, base);
	// lwz r9,520(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x8314d3a8
	if (!cr6.eq) goto loc_8314D3A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x831235b8
	ctx.lr = 0x8314D350;
	sub_831235B8(ctx, base);
	// lwz r11,-3464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3464);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8314d37c
	if (!cr6.eq) goto loc_8314D37C;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314d380
	if (cr6.eq) goto loc_8314D380;
loc_8314D37C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8314D380:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314d3a8
	if (!cr6.eq) goto loc_8314D3A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c148
	ctx.lr = 0x8314D394;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x8314d3a8
	if (cr6.eq) goto loc_8314D3A8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8314D3A8:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314d468
	if (cr6.eq) goto loc_8314D468;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x8314D3CC;
	sub_83120738(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x8314D3DC;
	sub_83120738(ctx, base);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,-28496(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28496);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// lwz r31,108(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x83120738
	ctx.lr = 0x8314D420;
	sub_83120738(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8314d444
	if (!cr6.eq) goto loc_8314D444;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8314d444
	if (cr6.eq) goto loc_8314D444;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,10
	ctx.r10.s64 = 10;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// divwu r31,r9,r10
	ctx.r31.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
loc_8314D444:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x8314d458
	if (cr6.lt) goto loc_8314D458;
	// subf r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
loc_8314D458:
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83121088
	ctx.lr = 0x8314D468;
	sub_83121088(ctx, base);
loc_8314D468:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314D470"))) PPC_WEAK_FUNC(sub_8314D470);
PPC_FUNC_IMPL(__imp__sub_8314D470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8314D478;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314D488;
	sub_831156E8(ctx, base);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r10,r4,192
	ctx.r10.s64 = ctx.r4.s64 + 12582912;
	// cmplwi cr6,r11,365
	cr6.compare<uint32_t>(ctx.r11.u32, 365, xer);
	// addi r10,r10,-10964
	ctx.r10.s64 = ctx.r10.s64 + -10964;
	// blt cr6,0x8314d4a8
	if (cr6.lt) goto loc_8314D4A8;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// b 0x8314d4b0
	goto loc_8314D4B0;
loc_8314D4A8:
	// mulli r11,r11,532
	ctx.r11.s64 = ctx.r11.s64 * 532;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8314D4B0:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,9328
	ctx.r5.s64 = ctx.r11.s64 + 9328;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831178a0
	ctx.lr = 0x8314D4CC;
	sub_831178A0(ctx, base);
	// bl 0x8314c958
	ctx.lr = 0x8314D4D0;
	sub_8314C958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8319dd28
	ctx.lr = 0x8314D4DC;
	sub_8319DD28(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8314D4E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319dd28
	ctx.lr = 0x8314D4EC;
	sub_8319DD28(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8314d504
	if (cr6.lt) goto loc_8314D504;
	// ld r11,404(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 404);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x8314d514
	goto loc_8314D514;
loc_8314D504:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// ld r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 404);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
loc_8314D514:
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// beq cr6,0x8314d540
	if (cr6.eq) goto loc_8314D540;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8314d4e0
	if (cr6.lt) goto loc_8314D4E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8314D540:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314D54C"))) PPC_WEAK_FUNC(sub_8314D54C);
PPC_FUNC_IMPL(__imp__sub_8314D54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314D550"))) PPC_WEAK_FUNC(sub_8314D550);
PPC_FUNC_IMPL(__imp__sub_8314D550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8314D558;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314d578
	if (!cr6.eq) goto loc_8314D578;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8314D578:
	// bl 0x831156e8
	ctx.lr = 0x8314D57C;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r10,r11,52994
	ctx.r10.u64 = ctx.r11.u64 | 52994;
	// lhzx r31,r29,r10
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d4758
	ctx.lr = 0x8314D594;
	sub_831D4758(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x831d4788
	ctx.lr = 0x8314D59C;
	sub_831D4788(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831d4788
	ctx.lr = 0x8314D5A4;
	sub_831D4788(ctx, base);
	// mullw r9,r28,r3
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// divwu r8,r9,r30
	ctx.r8.u32 = PPCDivide(ctx.r9.u32, ctx.r30.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// mullw r6,r8,r30
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// subf r3,r6,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r6.s64;
	// ori r5,r7,32769
	ctx.r5.u64 = ctx.r7.u64 | 32769;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// addis r9,r29,221
	ctx.r9.s64 = ctx.r29.s64 + 14483456;
	// mullw r11,r4,r30
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// twllei r30,0
	// mulhwu r10,r11,r5
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r8,r10,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// addi r9,r9,-26512
	ctx.r9.s64 = ctx.r9.s64 + -26512;
	// rlwinm r7,r8,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// blt cr6,0x8314d630
	if (cr6.lt) goto loc_8314D630;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r10,32769
	ctx.r7.u64 = ctx.r10.u64 | 32769;
	// ori r6,r8,13970
	ctx.r6.u64 = ctx.r8.u64 | 13970;
	// mulhw r10,r11,r7
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r5,15
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 15;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r4,r10,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// sthx r8,r9,r6
	PPC_STORE_U16(ctx.r9.u32 + ctx.r6.u32, ctx.r8.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8314D630:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,13970
	ctx.r8.u64 = ctx.r10.u64 | 13970;
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314D644"))) PPC_WEAK_FUNC(sub_8314D644);
PPC_FUNC_IMPL(__imp__sub_8314D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314D648"))) PPC_WEAK_FUNC(sub_8314D648);
PPC_FUNC_IMPL(__imp__sub_8314D648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,91
	ctx.r10.s64 = 91;
	// addi r11,r11,17256
	ctx.r11.s64 = ctx.r11.s64 + 17256;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314D664:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8314d674
	if (!cr6.eq) goto loc_8314D674;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8314D674:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x8314d664
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314D664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D680"))) PPC_WEAK_FUNC(sub_8314D680);
PPC_FUNC_IMPL(__imp__sub_8314D680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// beq cr6,0x8314d6f4
	if (cr6.eq) goto loc_8314D6F4;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// beq cr6,0x8314d6c8
	if (cr6.eq) goto loc_8314D6C8;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bne cr6,0x8314d720
	if (!cr6.eq) goto loc_8314D720;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8314d6b4
	if (!cr6.eq) goto loc_8314D6B4;
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,112
	ctx.r3.u64 = ctx.r3.u64 | 112;
	// blr 
	return;
loc_8314D6B4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8314d720
	if (!cr6.eq) goto loc_8314D720;
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,111
	ctx.r3.u64 = ctx.r3.u64 | 111;
	// blr 
	return;
loc_8314D6C8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8314d6e0
	if (!cr6.eq) goto loc_8314D6E0;
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,114
	ctx.r3.u64 = ctx.r3.u64 | 114;
	// blr 
	return;
loc_8314D6E0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8314d720
	if (!cr6.eq) goto loc_8314D720;
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,113
	ctx.r3.u64 = ctx.r3.u64 | 113;
	// blr 
	return;
loc_8314D6F4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8314d70c
	if (!cr6.eq) goto loc_8314D70C;
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,110
	ctx.r3.u64 = ctx.r3.u64 | 110;
	// blr 
	return;
loc_8314D70C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8314d720
	if (!cr6.eq) goto loc_8314D720;
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,109
	ctx.r3.u64 = ctx.r3.u64 | 109;
	// blr 
	return;
loc_8314D720:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D728"))) PPC_WEAK_FUNC(sub_8314D728);
PPC_FUNC_IMPL(__imp__sub_8314D728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8314D730;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314D73C;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// addis r21,r27,96
	ctx.r21.s64 = ctx.r27.s64 + 6291456;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// addi r21,r21,-4896
	ctx.r21.s64 = ctx.r21.s64 + -4896;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x8314d8d4
	if (!cr6.gt) goto loc_8314D8D4;
	// lis r23,-31772
	ctx.r23.s64 = -2082209792;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// addis r24,r27,72
	ctx.r24.s64 = ctx.r27.s64 + 4718592;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// ori r22,r10,58144
	ctx.r22.u64 = ctx.r10.u64 | 58144;
	// lwz r10,-3464(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3464);
	// addi r24,r24,7136
	ctx.r24.s64 = ctx.r24.s64 + 7136;
	// addi r28,r11,-3512
	ctx.r28.s64 = ctx.r11.s64 + -3512;
loc_8314D77C:
	// cmplwi cr6,r25,653
	cr6.compare<uint32_t>(ctx.r25.u32, 653, xer);
	// add r30,r27,r22
	ctx.r30.u64 = ctx.r27.u64 + ctx.r22.u64;
	// bge cr6,0x8314d78c
	if (!cr6.lt) goto loc_8314D78C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8314D78C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8314d7b4
	if (!cr6.eq) goto loc_8314D7B4;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314d7b8
	if (cr6.eq) goto loc_8314D7B8;
loc_8314D7B4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8314D7B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314d8c0
	if (!cr6.eq) goto loc_8314D8C0;
	// lwz r11,796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwinm r9,r11,0,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8314d8c0
	if (!cr6.eq) goto loc_8314D8C0;
	// lwz r11,788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwinm r9,r11,7,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// cmplwi cr6,r9,82
	cr6.compare<uint32_t>(ctx.r9.u32, 82, xer);
	// beq cr6,0x8314d8c0
	if (cr6.eq) goto loc_8314D8C0;
	// lhz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314d8c0
	if (cr6.eq) goto loc_8314D8C0;
	// addi r29,r30,248
	ctx.r29.s64 = ctx.r30.s64 + 248;
loc_8314D7FC:
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// bge cr6,0x8314d814
	if (!cr6.lt) goto loc_8314D814;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
loc_8314D814:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314d830
	if (!cr6.eq) goto loc_8314D830;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314d85c
	goto loc_8314D85C;
loc_8314D830:
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314d854
	if (!cr6.eq) goto loc_8314D854;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314d858
	if (cr6.eq) goto loc_8314D858;
loc_8314D854:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8314D858:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314D85C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314d8a4
	if (!cr6.eq) goto loc_8314D8A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311bd68
	ctx.lr = 0x8314D870;
	sub_8311BD68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314d8a4
	if (cr6.eq) goto loc_8314D8A4;
	// lbz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314d88c
	if (cr6.eq) goto loc_8314D88C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r11.u32);
loc_8314D88C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x831235e8
	ctx.lr = 0x8314D8A4;
	sub_831235E8(ctx, base);
loc_8314D8A4:
	// lhz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8314d7fc
	if (cr6.lt) goto loc_8314D7FC;
	// lwz r10,-3464(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3464);
loc_8314D8C0:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,1312
	ctx.r24.s64 = ctx.r24.s64 + 1312;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x8314d77c
	if (cr6.lt) goto loc_8314D77C;
loc_8314D8D4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314D8DC"))) PPC_WEAK_FUNC(sub_8314D8DC);
PPC_FUNC_IMPL(__imp__sub_8314D8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314D8E0"))) PPC_WEAK_FUNC(sub_8314D8E0);
PPC_FUNC_IMPL(__imp__sub_8314D8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314D8E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314D8F8;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// ori r9,r11,60640
	ctx.r9.u64 = ctx.r11.u64 | 60640;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,-3464(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3464);
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8314d9a4
	if (cr6.eq) goto loc_8314D9A4;
	// addis r7,r6,72
	ctx.r7.s64 = ctx.r6.s64 + 4718592;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// rlwinm r31,r4,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// addi r7,r7,7136
	ctx.r7.s64 = ctx.r7.s64 + 7136;
	// ori r3,r11,58144
	ctx.r3.u64 = ctx.r11.u64 | 58144;
loc_8314D930:
	// cmplwi cr6,r8,653
	cr6.compare<uint32_t>(ctx.r8.u32, 653, xer);
	// add r10,r6,r3
	ctx.r10.u64 = ctx.r6.u64 + ctx.r3.u64;
	// bge cr6,0x8314d940
	if (!cr6.lt) goto loc_8314D940;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8314D940:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r9,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x8314d964
	if (!cr6.eq) goto loc_8314D964;
	// xor r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314d968
	if (cr6.eq) goto loc_8314D968;
loc_8314D964:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314D968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314d994
	if (!cr6.eq) goto loc_8314D994;
	// lwz r11,796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 796);
	// rlwinm r11,r11,0,16,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(ctx.r11.u32, 8192, xer);
	// bne cr6,0x8314d994
	if (!cr6.eq) goto loc_8314D994;
	// lhz r11,784(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 784);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8314d9b4
	if (cr6.eq) goto loc_8314D9B4;
loc_8314D994:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1312
	ctx.r7.s64 = ctx.r7.s64 + 1312;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x8314d930
	if (cr6.lt) goto loc_8314D930;
loc_8314D9A4:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314D9B4:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314D9C4"))) PPC_WEAK_FUNC(sub_8314D9C4);
PPC_FUNC_IMPL(__imp__sub_8314D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314D9C8"))) PPC_WEAK_FUNC(sub_8314D9C8);
PPC_FUNC_IMPL(__imp__sub_8314D9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8314D9D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314D9E0;
	sub_831156E8(ctx, base);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// addis r28,r27,96
	ctx.r28.s64 = ctx.r27.s64 + 6291456;
	// ori r25,r10,59456
	ctx.r25.u64 = ctx.r10.u64 | 59456;
	// addi r28,r28,-4888
	ctx.r28.s64 = ctx.r28.s64 + -4888;
	// ori r23,r11,11904
	ctx.r23.u64 = ctx.r11.u64 | 11904;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314da68
	if (cr6.eq) goto loc_8314DA68;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r9,r27,r23
	ctx.r9.u64 = ctx.r27.u64 + ctx.r23.u64;
loc_8314DA14:
	// cmplwi cr6,r10,300
	cr6.compare<uint32_t>(ctx.r10.u32, 300, xer);
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bge cr6,0x8314da24
	if (!cr6.lt) goto loc_8314DA24;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8314DA24:
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314da58
	if (!cr6.eq) goto loc_8314DA58;
	// lhz r6,78(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// bne cr6,0x8314da58
	if (!cr6.eq) goto loc_8314DA58;
	// lwz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bne cr6,0x8314da58
	if (!cr6.eq) goto loc_8314DA58;
	// lwz r6,536(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// rlwinm r5,r6,9,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x8314dbcc
	if (cr6.eq) goto loc_8314DBCC;
loc_8314DA58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,548
	ctx.r9.s64 = ctx.r9.s64 + 548;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314da14
	if (cr6.lt) goto loc_8314DA14;
loc_8314DA68:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314dae8
	if (cr6.eq) goto loc_8314DAE8;
	// add r29,r27,r23
	ctx.r29.u64 = ctx.r27.u64 + ctx.r23.u64;
loc_8314DA78:
	// cmplwi cr6,r30,300
	cr6.compare<uint32_t>(ctx.r30.u32, 300, xer);
	// add r31,r27,r25
	ctx.r31.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bge cr6,0x8314da88
	if (!cr6.lt) goto loc_8314DA88;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8314DA88:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8314dad4
	if (!cr6.eq) goto loc_8314DAD4;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8314dad4
	if (!cr6.eq) goto loc_8314DAD4;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8314dad4
	if (!cr6.eq) goto loc_8314DAD4;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314dbc4
	if (cr6.eq) goto loc_8314DBC4;
	// bl 0x83197440
	ctx.lr = 0x8314DAC8;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314dbd8
	if (cr6.eq) goto loc_8314DBD8;
loc_8314DAD4:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,548
	ctx.r29.s64 = ctx.r29.s64 + 548;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314da78
	if (cr6.lt) goto loc_8314DA78;
loc_8314DAE8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314db34
	if (cr6.eq) goto loc_8314DB34;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r10,r27,r23
	ctx.r10.u64 = ctx.r27.u64 + ctx.r23.u64;
loc_8314DAFC:
	// cmplwi cr6,r9,300
	cr6.compare<uint32_t>(ctx.r9.u32, 300, xer);
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bge cr6,0x8314db0c
	if (!cr6.lt) goto loc_8314DB0C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8314DB0C:
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314db24
	if (!cr6.eq) goto loc_8314DB24;
	// lwz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// beq cr6,0x8314dbcc
	if (cr6.eq) goto loc_8314DBCC;
loc_8314DB24:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,548
	ctx.r10.s64 = ctx.r10.s64 + 548;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314dafc
	if (cr6.lt) goto loc_8314DAFC;
loc_8314DB34:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314db80
	if (cr6.eq) goto loc_8314DB80;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r10,r27,r23
	ctx.r10.u64 = ctx.r27.u64 + ctx.r23.u64;
loc_8314DB48:
	// cmplwi cr6,r9,300
	cr6.compare<uint32_t>(ctx.r9.u32, 300, xer);
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bge cr6,0x8314db58
	if (!cr6.lt) goto loc_8314DB58;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8314DB58:
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314db70
	if (!cr6.eq) goto loc_8314DB70;
	// lwz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// beq cr6,0x8314dbcc
	if (cr6.eq) goto loc_8314DBCC;
loc_8314DB70:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,548
	ctx.r10.s64 = ctx.r10.s64 + 548;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314db48
	if (cr6.lt) goto loc_8314DB48;
loc_8314DB80:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314dbc0
	if (cr6.eq) goto loc_8314DBC0;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r10,r27,r23
	ctx.r10.u64 = ctx.r27.u64 + ctx.r23.u64;
loc_8314DB94:
	// cmplwi cr6,r9,300
	cr6.compare<uint32_t>(ctx.r9.u32, 300, xer);
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bge cr6,0x8314dba4
	if (!cr6.lt) goto loc_8314DBA4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8314DBA4:
	// lwz r6,88(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x8314dbcc
	if (cr6.eq) goto loc_8314DBCC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,548
	ctx.r10.s64 = ctx.r10.s64 + 548;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314db94
	if (cr6.lt) goto loc_8314DB94;
loc_8314DBC0:
	// lhzx r3,r27,r23
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r23.u32);
loc_8314DBC4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8314DBCC:
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8314DBD8:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314DBE4"))) PPC_WEAK_FUNC(sub_8314DBE4);
PPC_FUNC_IMPL(__imp__sub_8314DBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314DBE8"))) PPC_WEAK_FUNC(sub_8314DBE8);
PPC_FUNC_IMPL(__imp__sub_8314DBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,17984
	ctx.r11.s64 = ctx.r11.s64 + 17984;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314DBFC:
	// lbz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314dc1c
	if (!cr6.eq) goto loc_8314DC1C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8314DC1C:
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314dc3c
	if (!cr6.eq) goto loc_8314DC3C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8314DC3C:
	// lbz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314dc5c
	if (!cr6.eq) goto loc_8314DC5C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8314DC5C:
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314dc7c
	if (!cr6.eq) goto loc_8314DC7C;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8314DC7C:
	// lbz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314dc9c
	if (!cr6.eq) goto loc_8314DC9C;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8314DC9C:
	// lbz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314dcbc
	if (!cr6.eq) goto loc_8314DCBC;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_8314DCBC:
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bdnz 0x8314dbfc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314DBFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314DCC8"))) PPC_WEAK_FUNC(sub_8314DCC8);
PPC_FUNC_IMPL(__imp__sub_8314DCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8314DCD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314DCE4;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x8314DCEC;
	sub_831156E8(ctx, base);
	// clrlwi r25,r23,24
	ctx.r25.u64 = ctx.r23.u32 & 0xFF;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addis r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 327680;
	// addi r28,r28,14904
	ctx.r28.s64 = ctx.r28.s64 + 14904;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123a08
	ctx.lr = 0x8314DD0C;
	sub_83123A08(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314df74
	if (cr6.eq) goto loc_8314DF74;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83123ad8
	ctx.lr = 0x8314DD28;
	sub_83123AD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314df74
	if (cr6.eq) goto loc_8314DF74;
	// ld r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 504);
	// clrlwi r9,r30,14
	ctx.r9.u64 = ctx.r30.u32 & 0x3FFFF;
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// bne cr6,0x8314dd58
	if (!cr6.eq) goto loc_8314DD58;
	// li r11,16381
	ctx.r11.s64 = 16381;
	// li r10,-3
	ctx.r10.s64 = -3;
	// b 0x8314dd60
	goto loc_8314DD60;
loc_8314DD58:
	// li r11,16382
	ctx.r11.s64 = 16382;
	// li r10,-2
	ctx.r10.s64 = -2;
loc_8314DD60:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,16383
	cr6.compare<uint32_t>(ctx.r11.u32, 16383, xer);
	// rlwimi r8,r11,18,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// bgt cr6,0x8314dd80
	if (cr6.gt) goto loc_8314DD80;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r7,r11,65535
	ctx.r7.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x8314dd84
	if (!cr6.gt) goto loc_8314DD84;
loc_8314DD80:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_8314DD84:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// ble cr6,0x8314dd9c
	if (!cr6.gt) goto loc_8314DD9C;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_8314DD9C:
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// sth r9,504(r31)
	PPC_STORE_U16(ctx.r31.u32 + 504, ctx.r9.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r7,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r7.u32);
	// sth r10,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r10.u16);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// lhz r5,808(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 808);
	// clrlwi r4,r5,25
	ctx.r4.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314de88
	if (cr6.eq) goto loc_8314DE88;
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r29,-31772
	ctx.r29.s64 = -2082209792;
loc_8314DDD8:
	// lhz r9,808(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 808);
	// ld r10,-3512(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + -3512);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8314de00
	if (!cr6.lt) goto loc_8314DE00;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r30,512(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 512);
	// ldx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r31.u32);
loc_8314DE00:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// bl 0x83123ba8
	ctx.lr = 0x8314DE30;
	sub_83123BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314de6c
	if (cr6.eq) goto loc_8314DE6C;
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,44(r3)
	PPC_STORE_U64(ctx.r3.u32 + 44, ctx.r10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,808(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 808);
	// clrlwi r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8314de70
	if (!cr6.lt) goto loc_8314DE70;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r10,r7,r31
	PPC_STORE_U64(ctx.r7.u32 + ctx.r31.u32, ctx.r10.u64);
	// stb r30,512(r8)
	PPC_STORE_U8(ctx.r8.u32 + 512, ctx.r30.u8);
	// b 0x8314de70
	goto loc_8314DE70;
loc_8314DE6C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8314DE70:
	// lhz r10,808(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314ddd8
	if (cr6.lt) goto loc_8314DDD8;
loc_8314DE88:
	// bl 0x830ff290
	ctx.lr = 0x8314DE8C;
	sub_830FF290(ctx, base);
	// bl 0x830ff948
	ctx.lr = 0x8314DE90;
	sub_830FF948(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314df74
	if (!cr6.eq) goto loc_8314DF74;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314df74
	if (cr6.eq) goto loc_8314DF74;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r10,r11,7644
	ctx.r10.u64 = ctx.r11.u64 | 7644;
	// lbzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314df74
	if (cr6.eq) goto loc_8314DF74;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(ctx.r25.u32, 2, xer);
	// bge cr6,0x8314ded8
	if (!cr6.lt) goto loc_8314DED8;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// add r10,r25,r24
	ctx.r10.u64 = ctx.r25.u64 + ctx.r24.u64;
	// ori r9,r11,12256
	ctx.r9.u64 = ctx.r11.u64 | 12256;
	// li r8,1
	ctx.r8.s64 = 1;
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
loc_8314DED8:
	// addis r26,r24,238
	ctx.r26.s64 = ctx.r24.s64 + 15597568;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// addi r26,r26,5340
	ctx.r26.s64 = ctx.r26.s64 + 5340;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,32
	ctx.r29.s64 = 32;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// ori r31,r11,7648
	ctx.r31.u64 = ctx.r11.u64 | 7648;
loc_8314DEF8:
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bge cr6,0x8314df08
	if (!cr6.lt) goto loc_8314DF08;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8314DF08:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x8314DF14;
	sub_831CE980(ctx, base);
	// subfc r11,r27,r25
	xer.ca = ctx.r25.u32 >= ctx.r27.u32;
	ctx.r11.s64 = ctx.r25.s64 - ctx.r27.s64;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r9,r23
	ctx.r11.u64 = ctx.r9.u64 & ctx.r23.u64;
	// blt cr6,0x8314df3c
	if (cr6.lt) goto loc_8314DF3C;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// b 0x8314df50
	goto loc_8314DF50;
loc_8314DF3C:
	// rlwinm r11,r11,5,19,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1FE0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_8314DF50:
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x831ce980
	ctx.lr = 0x8314DF64;
	sub_831CE980(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// bne 0x8314def8
	if (!cr0.eq) goto loc_8314DEF8;
loc_8314DF74:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314DF7C"))) PPC_WEAK_FUNC(sub_8314DF7C);
PPC_FUNC_IMPL(__imp__sub_8314DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314DF80"))) PPC_WEAK_FUNC(sub_8314DF80);
PPC_FUNC_IMPL(__imp__sub_8314DF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,18128
	ctx.r8.s64 = ctx.r11.s64 + 18128;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8314DF94:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x8314dfb8
	if (cr6.eq) goto loc_8314DFB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// blt cr6,0x8314df94
	if (cr6.lt) goto loc_8314DF94;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8314DFB8:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314DFC8"))) PPC_WEAK_FUNC(sub_8314DFC8);
PPC_FUNC_IMPL(__imp__sub_8314DFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8314DFD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314DFDC;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,60648
	ctx.r10.u64 = ctx.r11.u64 | 60648;
	// lwzx r29,r31,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8314e0c4
	if (cr6.eq) goto loc_8314E0C4;
	// addis r4,r31,85
	ctx.r4.s64 = ctx.r31.s64 + 5570560;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r4,r4,11904
	ctx.r4.s64 = ctx.r4.s64 + 11904;
	// ori r30,r10,59456
	ctx.r30.u64 = ctx.r10.u64 | 59456;
	// addi r3,r11,-3464
	ctx.r3.s64 = ctx.r11.s64 + -3464;
loc_8314E010:
	// cmplwi cr6,r5,300
	cr6.compare<uint32_t>(ctx.r5.u32, 300, xer);
	// add r6,r31,r30
	ctx.r6.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bge cr6,0x8314e020
	if (!cr6.lt) goto loc_8314E020;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_8314E020:
	// lwz r11,92(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8314e038
	if (!cr6.eq) goto loc_8314E038;
	// lhz r10,78(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 78);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x8314e040
	if (cr6.eq) goto loc_8314E040;
loc_8314E038:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x8314e0b4
	if (!cr6.eq) goto loc_8314E0B4;
loc_8314E040:
	// lwz r11,540(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 540);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r11,23,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314e0b4
	if (cr6.eq) goto loc_8314E0B4;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r6,328
	ctx.r9.s64 = ctx.r6.s64 + 328;
loc_8314E05C:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x8314e06c
	if (cr6.lt) goto loc_8314E06C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8314E06C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r27,r27,0,0,13
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8314e094
	if (!cr6.eq) goto loc_8314E094;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314e098
	if (cr6.eq) goto loc_8314E098;
loc_8314E094:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314E098:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314e0d0
	if (!cr6.eq) goto loc_8314E0D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314e05c
	if (cr6.lt) goto loc_8314E05C;
loc_8314E0B4:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,548
	ctx.r4.s64 = ctx.r4.s64 + 548;
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// blt cr6,0x8314e010
	if (cr6.lt) goto loc_8314E010;
loc_8314E0C4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8314E0D0:
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314E0DC"))) PPC_WEAK_FUNC(sub_8314E0DC);
PPC_FUNC_IMPL(__imp__sub_8314E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314E0E0"))) PPC_WEAK_FUNC(sub_8314E0E0);
PPC_FUNC_IMPL(__imp__sub_8314E0E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8314E0E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314E0F4;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r29,r11,96
	ctx.r29.s64 = ctx.r11.s64 + 6291456;
	// addi r29,r29,-4872
	ctx.r29.s64 = ctx.r29.s64 + -4872;
loc_8314E104:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83132cf8
	ctx.lr = 0x8314E110;
	sub_83132CF8(ctx, base);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8314e148
	if (cr6.eq) goto loc_8314E148;
	// clrlwi r28,r26,14
	ctx.r28.u64 = ctx.r26.u32 & 0x3FFFF;
loc_8314E124:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83132cb8
	ctx.lr = 0x8314E134;
	sub_83132CB8(ctx, base);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// beq cr6,0x8314e160
	if (cr6.eq) goto loc_8314E160;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x8314e124
	if (cr6.lt) goto loc_8314E124;
loc_8314E148:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,74
	cr6.compare<uint32_t>(ctx.r30.u32, 74, xer);
	// blt cr6,0x8314e104
	if (cr6.lt) goto loc_8314E104;
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8314E160:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314E16C"))) PPC_WEAK_FUNC(sub_8314E16C);
PPC_FUNC_IMPL(__imp__sub_8314E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314E170"))) PPC_WEAK_FUNC(sub_8314E170);
PPC_FUNC_IMPL(__imp__sub_8314E170) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314E190;
	sub_831156E8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,60636
	ctx.r10.u64 = ctx.r11.u64 | 60636;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8314e1f0
	if (cr6.eq) goto loc_8314E1F0;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// ori r7,r11,13856
	ctx.r7.u64 = ctx.r11.u64 | 13856;
loc_8314E1BC:
	// cmplwi cr6,r9,21097
	cr6.compare<uint32_t>(ctx.r9.u32, 21097, xer);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bge cr6,0x8314e1cc
	if (!cr6.lt) goto loc_8314E1CC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8314E1CC:
	// ld r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 44);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// beq cr6,0x8314e218
	if (cr6.eq) goto loc_8314E218;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x8314e1bc
	if (cr6.lt) goto loc_8314E1BC;
loc_8314E1F0:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// ld r11,-3512(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -3512);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_8314E1FC:
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
loc_8314E218:
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// b 0x8314e1fc
	goto loc_8314E1FC;
}

__attribute__((alias("__imp__sub_8314E22C"))) PPC_WEAK_FUNC(sub_8314E22C);
PPC_FUNC_IMPL(__imp__sub_8314E22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314E230"))) PPC_WEAK_FUNC(sub_8314E230);
PPC_FUNC_IMPL(__imp__sub_8314E230) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3512
	ctx.r11.s64 = ctx.r11.s64 + -3512;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314e270
	if (!cr6.eq) goto loc_8314E270;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8314e298
	goto loc_8314E298;
loc_8314E270:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8314e290
	if (!cr6.eq) goto loc_8314E290;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8314e294
	if (cr6.eq) goto loc_8314E294;
loc_8314E290:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314E294:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8314E298:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314e2ac
	if (cr6.eq) goto loc_8314E2AC;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// b 0x8314e2d4
	goto loc_8314E2D4;
loc_8314E2AC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8311c6c8
	ctx.lr = 0x8314E2B4;
	sub_8311C6C8(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314e2d4
	if (!cr6.eq) goto loc_8314E2D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314e2d4
	if (cr6.eq) goto loc_8314E2D4;
	// rlwinm r3,r3,0,14,12
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
loc_8314E2D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314E2EC"))) PPC_WEAK_FUNC(sub_8314E2EC);
PPC_FUNC_IMPL(__imp__sub_8314E2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314E2F0"))) PPC_WEAK_FUNC(sub_8314E2F0);
PPC_FUNC_IMPL(__imp__sub_8314E2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-3464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3464);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8314e320
	if (!cr6.eq) goto loc_8314E320;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314e324
	if (cr6.eq) goto loc_8314E324;
loc_8314E320:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314E324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314e338
	if (cr6.eq) goto loc_8314E338;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// blr 
	return;
loc_8314E338:
	// clrlwi r3,r10,14
	ctx.r3.u64 = ctx.r10.u32 & 0x3FFFF;
	// b 0x8311c6c0
	sub_8311C6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314E340"))) PPC_WEAK_FUNC(sub_8314E340);
PPC_FUNC_IMPL(__imp__sub_8314E340) {
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
	ctx.lr = 0x8314E35C;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314E370;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314e384
	if (!cr6.eq) goto loc_8314E384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8314e3a4
	goto loc_8314E3A4;
loc_8314E384:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314E390;
	sub_8311C338(ctx, base);
	// lhz r11,78(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x8314e3a0
	if (!cr6.eq) goto loc_8314E3A0;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
loc_8314E3A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_8314E3A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314E3BC"))) PPC_WEAK_FUNC(sub_8314E3BC);
PPC_FUNC_IMPL(__imp__sub_8314E3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314E3C0"))) PPC_WEAK_FUNC(sub_8314E3C0);
PPC_FUNC_IMPL(__imp__sub_8314E3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314E3C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314E3D8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314E3EC;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314e410
	if (!cr6.eq) goto loc_8314E410;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3516);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314E410:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314E41C;
	sub_8311C338(ctx, base);
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314E434"))) PPC_WEAK_FUNC(sub_8314E434);
PPC_FUNC_IMPL(__imp__sub_8314E434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314E438"))) PPC_WEAK_FUNC(sub_8314E438);
PPC_FUNC_IMPL(__imp__sub_8314E438) {
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
	ctx.lr = 0x8314E454;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314E468;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314e47c
	if (!cr6.eq) goto loc_8314E47C;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8314e48c
	goto loc_8314E48C;
loc_8314E47C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314E488;
	sub_8311C338(ctx, base);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
loc_8314E48C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314E4A4"))) PPC_WEAK_FUNC(sub_8314E4A4);
PPC_FUNC_IMPL(__imp__sub_8314E4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314E4A8"))) PPC_WEAK_FUNC(sub_8314E4A8);
PPC_FUNC_IMPL(__imp__sub_8314E4A8) {
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
	// bl 0x831156e8
	ctx.lr = 0x8314E4C4;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x8314E4D4;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// li r30,7
	ctx.r30.s64 = 7;
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// bne cr6,0x8314e530
	if (!cr6.eq) goto loc_8314E530;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,46628
	ctx.r10.u64 = ctx.r11.u64 | 46628;
	// lhzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8311c338
	ctx.lr = 0x8314E4FC;
	sub_8311C338(ctx, base);
	// lwz r9,540(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r8,r9,0,16,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314e514
	if (cr6.eq) goto loc_8314E514;
	// addi r11,r3,328
	ctx.r11.s64 = ctx.r3.s64 + 328;
	// b 0x8314e51c
	goto loc_8314E51C;
loc_8314E514:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-3464
	ctx.r11.s64 = ctx.r11.s64 + -3464;
loc_8314E51C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x8314E528;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
loc_8314E530:
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(ctx.r11.s32, 51, xer);
	// bgt cr6,0x8314e5ac
	if (cr6.gt) goto loc_8314E5AC;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// bge cr6,0x8314e5d8
	if (!cr6.lt) goto loc_8314E5D8;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x8314e5f4
	if (cr6.gt) goto loc_8314E5F4;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6816
	ctx.r12.s64 = ctx.r12.s64 + -6816;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8314E5D8;
	case 1:
		goto loc_8314E5E0;
	case 2:
		goto loc_8314E5E8;
	case 3:
		goto loc_8314E5E8;
	case 4:
		goto loc_8314E5F0;
	case 5:
		goto loc_8314E5F4;
	case 6:
		goto loc_8314E5F4;
	case 7:
		goto loc_8314E5D8;
	case 8:
		goto loc_8314E5D8;
	case 9:
		goto loc_8314E5D8;
	case 10:
		goto loc_8314E5D8;
	case 11:
		goto loc_8314E5D8;
	case 12:
		goto loc_8314E5D8;
	case 13:
		goto loc_8314E5E8;
	case 14:
		goto loc_8314E5E8;
	case 15:
		goto loc_8314E5E8;
	case 16:
		goto loc_8314E5D8;
	case 17:
		goto loc_8314E5E8;
	case 18:
		goto loc_8314E5F0;
	default:
		return;
	}
	// lwz r24,-6696(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6696);
	// lwz r24,-6688(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6688);
	// lwz r24,-6680(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6680);
	// lwz r24,-6680(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6680);
	// lwz r24,-6672(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6672);
	// lwz r24,-6668(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6668);
	// lwz r24,-6668(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6668);
	// lwz r24,-6696(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6696);
	// lwz r24,-6696(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6696);
	// lwz r24,-6696(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6696);
	// lwz r24,-6696(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6696);
	// lwz r24,-6696(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6696);
	// lwz r24,-6696(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6696);
	// lwz r24,-6680(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6680);
	// lwz r24,-6680(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6680);
	// lwz r24,-6680(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6680);
	// lwz r24,-6696(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6696);
	// lwz r24,-6680(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6680);
	// lwz r24,-6672(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6672);
loc_8314E5AC:
	// addi r11,r11,-67
	ctx.r11.s64 = ctx.r11.s64 + -67;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8314e5f4
	if (cr6.gt) goto loc_8314E5F4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8314e5f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8314E5F0;
	// bdzf 4*cr6+eq,0x8314e5f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8314E5F4;
	// bdzf 4*cr6+eq,0x8314e5f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8314E5F4;
	// bdzf 4*cr6+eq,0x8314e5e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8314E5E8;
	// bdzf 4*cr6+eq,0x8314e5f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8314E5F4;
	// bne cr6,0x8314e5e0
	if (!cr6.eq) goto loc_8314E5E0;
loc_8314E5D8:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x8314e5f4
	goto loc_8314E5F4;
loc_8314E5E0:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x8314e5f4
	goto loc_8314E5F4;
loc_8314E5E8:
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x8314e5f4
	goto loc_8314E5F4;
loc_8314E5F0:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8314E5F4:
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

__attribute__((alias("__imp__sub_8314E610"))) PPC_WEAK_FUNC(sub_8314E610);
PPC_FUNC_IMPL(__imp__sub_8314E610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,69
	cr6.compare<uint32_t>(ctx.r3.u32, 69, xer);
	// bgt cr6,0x8314e808
	if (cr6.gt) goto loc_8314E808;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6608
	ctx.r12.s64 = ctx.r12.s64 + -6608;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_8314E808;
	case 1:
		goto loc_8314E808;
	case 2:
		goto loc_8314E808;
	case 3:
		goto loc_8314E808;
	case 4:
		goto loc_8314E808;
	case 5:
		goto loc_8314E808;
	case 6:
		goto loc_8314E808;
	case 7:
		goto loc_8314E748;
	case 8:
		goto loc_8314E750;
	case 9:
		goto loc_8314E758;
	case 10:
		goto loc_8314E760;
	case 11:
		goto loc_8314E768;
	case 12:
		goto loc_8314E770;
	case 13:
		goto loc_8314E778;
	case 14:
		goto loc_8314E780;
	case 15:
		goto loc_8314E788;
	case 16:
		goto loc_8314E790;
	case 17:
		goto loc_8314E798;
	case 18:
		goto loc_8314E7A0;
	case 19:
		goto loc_8314E808;
	case 20:
		goto loc_8314E808;
	case 21:
		goto loc_8314E808;
	case 22:
		goto loc_8314E808;
	case 23:
		goto loc_8314E7C8;
	case 24:
		goto loc_8314E808;
	case 25:
		goto loc_8314E808;
	case 26:
		goto loc_8314E7D0;
	case 27:
		goto loc_8314E7D8;
	case 28:
		goto loc_8314E7E0;
	case 29:
		goto loc_8314E808;
	case 30:
		goto loc_8314E7F0;
	case 31:
		goto loc_8314E808;
	case 32:
		goto loc_8314E808;
	case 33:
		goto loc_8314E808;
	case 34:
		goto loc_8314E808;
	case 35:
		goto loc_8314E808;
	case 36:
		goto loc_8314E808;
	case 37:
		goto loc_8314E808;
	case 38:
		goto loc_8314E808;
	case 39:
		goto loc_8314E7F8;
	case 40:
		goto loc_8314E800;
	case 41:
		goto loc_8314E808;
	case 42:
		goto loc_8314E808;
	case 43:
		goto loc_8314E808;
	case 44:
		goto loc_8314E808;
	case 45:
		goto loc_8314E808;
	case 46:
		goto loc_8314E808;
	case 47:
		goto loc_8314E808;
	case 48:
		goto loc_8314E7A8;
	case 49:
		goto loc_8314E7B8;
	case 50:
		goto loc_8314E7C0;
	case 51:
		goto loc_8314E7B0;
	case 52:
		goto loc_8314E808;
	case 53:
		goto loc_8314E808;
	case 54:
		goto loc_8314E808;
	case 55:
		goto loc_8314E808;
	case 56:
		goto loc_8314E808;
	case 57:
		goto loc_8314E808;
	case 58:
		goto loc_8314E808;
	case 59:
		goto loc_8314E808;
	case 60:
		goto loc_8314E808;
	case 61:
		goto loc_8314E808;
	case 62:
		goto loc_8314E808;
	case 63:
		goto loc_8314E808;
	case 64:
		goto loc_8314E808;
	case 65:
		goto loc_8314E7E8;
	case 66:
		goto loc_8314E808;
	case 67:
		goto loc_8314E808;
	case 68:
		goto loc_8314E808;
	case 69:
		goto loc_8314E808;
	default:
		return;
	}
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6328(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6328);
	// lwz r24,-6320(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6320);
	// lwz r24,-6312(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6312);
	// lwz r24,-6304(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6304);
	// lwz r24,-6296(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6296);
	// lwz r24,-6288(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6288);
	// lwz r24,-6280(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6280);
	// lwz r24,-6272(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6272);
	// lwz r24,-6264(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6264);
	// lwz r24,-6256(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6256);
	// lwz r24,-6248(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6248);
	// lwz r24,-6240(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6240);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6200(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6200);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6192(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6192);
	// lwz r24,-6184(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6184);
	// lwz r24,-6176(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6176);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6160(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6160);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6152(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6152);
	// lwz r24,-6144(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6144);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6232(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6232);
	// lwz r24,-6216(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6216);
	// lwz r24,-6208(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6208);
	// lwz r24,-6224(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6224);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6168(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6168);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
	// lwz r24,-6136(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6136);
loc_8314E748:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_8314E750:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_8314E758:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_8314E760:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_8314E768:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_8314E770:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_8314E778:
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
loc_8314E780:
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
loc_8314E788:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
loc_8314E790:
	// li r3,39
	ctx.r3.s64 = 39;
	// blr 
	return;
loc_8314E798:
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8314E7A0:
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
loc_8314E7A8:
	// li r3,66
	ctx.r3.s64 = 66;
	// blr 
	return;
loc_8314E7B0:
	// li r3,69
	ctx.r3.s64 = 69;
	// blr 
	return;
loc_8314E7B8:
	// li r3,67
	ctx.r3.s64 = 67;
	// blr 
	return;
loc_8314E7C0:
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
loc_8314E7C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8314E7D0:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8314E7D8:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_8314E7E0:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8314E7E8:
	// li r3,91
	ctx.r3.s64 = 91;
	// blr 
	return;
loc_8314E7F0:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8314E7F8:
	// li r3,50
	ctx.r3.s64 = 50;
	// blr 
	return;
loc_8314E800:
	// li r3,51
	ctx.r3.s64 = 51;
	// blr 
	return;
loc_8314E808:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314E814"))) PPC_WEAK_FUNC(sub_8314E814);
PPC_FUNC_IMPL(__imp__sub_8314E814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314E818"))) PPC_WEAK_FUNC(sub_8314E818);
PPC_FUNC_IMPL(__imp__sub_8314E818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314E820;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314E830;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314E840;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314e858
	if (!cr6.eq) goto loc_8314E858;
loc_8314E84C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314E858:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314E864;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8314e89c
	if (cr6.eq) goto loc_8314E89C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8314e8e8
	if (!cr6.eq) goto loc_8314E8E8;
	// lwz r10,532(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x8314e84c
	if (cr6.gt) goto loc_8314E84C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8314e8a8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8314E8A8;
	// bdzf 4*cr6+eq,0x8314e84c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8314E84C;
	// bne cr6,0x8314e8c4
	if (!cr6.eq) goto loc_8314E8C4;
loc_8314E89C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314E8A8:
	// cmpwi cr6,r29,53
	cr6.compare<int32_t>(ctx.r29.s32, 53, xer);
	// beq cr6,0x8314e89c
	if (cr6.eq) goto loc_8314E89C;
	// cmpwi cr6,r29,54
	cr6.compare<int32_t>(ctx.r29.s32, 54, xer);
	// beq cr6,0x8314e89c
	if (cr6.eq) goto loc_8314E89C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314E8C4:
	// cmpwi cr6,r29,46
	cr6.compare<int32_t>(ctx.r29.s32, 46, xer);
	// bne cr6,0x8314e84c
	if (!cr6.eq) goto loc_8314E84C;
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r10,r11,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r10,2048
	cr6.compare<uint32_t>(ctx.r10.u32, 2048, xer);
	// ble cr6,0x8314e84c
	if (!cr6.gt) goto loc_8314E84C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314E8E8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8314e90c
	if (cr6.eq) goto loc_8314E90C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x8314e90c
	if (cr6.eq) goto loc_8314E90C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x8314e84c
	if (!cr6.eq) goto loc_8314E84C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314E90C:
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r11,60648
	ctx.r9.u64 = ctx.r11.u64 | 60648;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8314e84c
	if (cr6.eq) goto loc_8314E84C;
	// addis r9,r30,85
	ctx.r9.s64 = ctx.r30.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r9,r9,11904
	ctx.r9.s64 = ctx.r9.s64 + 11904;
	// ori r6,r11,59456
	ctx.r6.u64 = ctx.r11.u64 | 59456;
loc_8314E940:
	// cmplwi cr6,r10,300
	cr6.compare<uint32_t>(ctx.r10.u32, 300, xer);
	// add r11,r30,r6
	ctx.r11.u64 = ctx.r30.u64 + ctx.r6.u64;
	// bge cr6,0x8314e950
	if (!cr6.lt) goto loc_8314E950;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8314E950:
	// lhz r3,78(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 78);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x8314e97c
	if (!cr6.eq) goto loc_8314E97C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8314e970
	if (!cr6.eq) goto loc_8314E970;
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// b 0x8314e97c
	goto loc_8314E97C;
loc_8314E970:
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bne cr6,0x8314e84c
	if (!cr6.eq) goto loc_8314E84C;
loc_8314E97C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,548
	ctx.r9.s64 = ctx.r9.s64 + 548;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314e940
	if (cr6.lt) goto loc_8314E940;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8314e84c
	if (cr6.eq) goto loc_8314E84C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// bl 0x8314e818
	ctx.lr = 0x8314E9A0;
	sub_8314E818(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314E9A8"))) PPC_WEAK_FUNC(sub_8314E9A8);
PPC_FUNC_IMPL(__imp__sub_8314E9A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8314E9B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314E9BC;
	sub_831156E8(ctx, base);
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c3d8
	ctx.lr = 0x8314E9C8;
	sub_8311C3D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r8,r10,28,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x831c64a0
	ctx.lr = 0x8314E9EC;
	sub_831C64A0(ctx, base);
	// lwz r7,516(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r6,r7,0,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFC0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8314ea5c
	if (cr6.eq) goto loc_8314EA5C;
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8314EA0C:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bge cr6,0x8314ea1c
	if (!cr6.lt) goto loc_8314EA1C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8314EA1C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8314EA20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312db38
	ctx.lr = 0x8314EA2C;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x8314ea68
	if (cr6.eq) goto loc_8314EA68;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// ble cr6,0x8314ea20
	if (!cr6.gt) goto loc_8314EA20;
	// lwz r11,516(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 516);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x8314ea0c
	if (cr6.lt) goto loc_8314EA0C;
loc_8314EA5C:
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8314EA68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314EA74"))) PPC_WEAK_FUNC(sub_8314EA74);
PPC_FUNC_IMPL(__imp__sub_8314EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314EA78"))) PPC_WEAK_FUNC(sub_8314EA78);
PPC_FUNC_IMPL(__imp__sub_8314EA78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314EA80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314EA8C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8314e9a8
	ctx.lr = 0x8314EA9C;
	sub_8314E9A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x8314EAAC;
	sub_8311C3D8(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314eadc
	if (!cr6.eq) goto loc_8314EADC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312db38
	ctx.lr = 0x8314EAD0;
	sub_8312DB38(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314EADC:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x8314eaf4
	if (!cr6.eq) goto loc_8314EAF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312db38
	ctx.lr = 0x8314EAF0;
	sub_8312DB38(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
loc_8314EAF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314EAFC"))) PPC_WEAK_FUNC(sub_8314EAFC);
PPC_FUNC_IMPL(__imp__sub_8314EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314EB00"))) PPC_WEAK_FUNC(sub_8314EB00);
PPC_FUNC_IMPL(__imp__sub_8314EB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314EB08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314EB14;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x8314EB24;
	sub_8311C3D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314EB38;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314eb70
	if (cr6.eq) goto loc_8314EB70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314EB50;
	sub_8311C338(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314eb70
	if (cr6.eq) goto loc_8314EB70;
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r3,r11,4,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314EB70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314EB7C"))) PPC_WEAK_FUNC(sub_8314EB7C);
PPC_FUNC_IMPL(__imp__sub_8314EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314EB80"))) PPC_WEAK_FUNC(sub_8314EB80);
PPC_FUNC_IMPL(__imp__sub_8314EB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314EB88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314EB94;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x8314EBA4;
	sub_8311C3D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314EBB8;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314ec2c
	if (cr6.eq) goto loc_8314EC2C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314EBD0;
	sub_8311C338(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x8314ebe4
	if (cr6.eq) goto loc_8314EBE4;
	// cmplwi cr6,r11,78
	cr6.compare<uint32_t>(ctx.r11.u32, 78, xer);
	// bne cr6,0x8314ec0c
	if (!cr6.eq) goto loc_8314EC0C;
loc_8314EBE4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,848
	cr6.compare<uint32_t>(ctx.r10.u32, 848, xer);
	// bne cr6,0x8314ec0c
	if (!cr6.eq) goto loc_8314EC0C;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bne cr6,0x8314ec0c
	if (!cr6.eq) goto loc_8314EC0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314EC0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314ec2c
	if (cr6.eq) goto loc_8314EC2C;
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r3,r11,5,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314EC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314EC38"))) PPC_WEAK_FUNC(sub_8314EC38);
PPC_FUNC_IMPL(__imp__sub_8314EC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314EC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314EC4C;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x8314EC5C;
	sub_8311C3D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314EC70;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314ecd0
	if (cr6.eq) goto loc_8314ECD0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314EC88;
	sub_8311C338(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8314ecd0
	if (cr6.eq) goto loc_8314ECD0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8314ecd0
	if (cr6.eq) goto loc_8314ECD0;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x8314ecb4
	if (cr6.eq) goto loc_8314ECB4;
	// cmplwi cr6,r11,78
	cr6.compare<uint32_t>(ctx.r11.u32, 78, xer);
	// bne cr6,0x8314ecc0
	if (!cr6.eq) goto loc_8314ECC0;
loc_8314ECB4:
	// rlwinm r11,r10,0,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r11,848
	cr6.compare<uint32_t>(ctx.r11.u32, 848, xer);
	// beq cr6,0x8314ecd0
	if (cr6.eq) goto loc_8314ECD0;
loc_8314ECC0:
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r3,r11,6,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314ECD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314ECDC"))) PPC_WEAK_FUNC(sub_8314ECDC);
PPC_FUNC_IMPL(__imp__sub_8314ECDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314ECE0"))) PPC_WEAK_FUNC(sub_8314ECE0);
PPC_FUNC_IMPL(__imp__sub_8314ECE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314ECE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314ECF4;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x8314ED04;
	sub_8311C3D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c161b8
	ctx.lr = 0x8314ED18;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314ed94
	if (cr6.eq) goto loc_8314ED94;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314ED30;
	sub_8311C338(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r10,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8314ed94
	if (cr6.eq) goto loc_8314ED94;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8314ed94
	if (cr6.eq) goto loc_8314ED94;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x8314ed5c
	if (cr6.eq) goto loc_8314ED5C;
	// cmplwi cr6,r11,78
	cr6.compare<uint32_t>(ctx.r11.u32, 78, xer);
	// bne cr6,0x8314ed68
	if (!cr6.eq) goto loc_8314ED68;
loc_8314ED5C:
	// rlwinm r9,r10,0,16,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r9,848
	cr6.compare<uint32_t>(ctx.r9.u32, 848, xer);
	// beq cr6,0x8314ed94
	if (cr6.eq) goto loc_8314ED94;
loc_8314ED68:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(ctx.r11.u32, 13, xer);
	// beq cr6,0x8314ed78
	if (cr6.eq) goto loc_8314ED78;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, xer);
	// bne cr6,0x8314ed84
	if (!cr6.eq) goto loc_8314ED84;
loc_8314ED78:
	// rlwinm r11,r10,0,16,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r11,848
	cr6.compare<uint32_t>(ctx.r11.u32, 848, xer);
	// beq cr6,0x8314ed94
	if (cr6.eq) goto loc_8314ED94;
loc_8314ED84:
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// rlwinm r3,r11,7,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314ED94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314EDA0"))) PPC_WEAK_FUNC(sub_8314EDA0);
PPC_FUNC_IMPL(__imp__sub_8314EDA0) {
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
	// bl 0x8314ea78
	ctx.lr = 0x8314EDBC;
	sub_8314EA78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314EDC4;
	sub_831156E8(ctx, base);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c3d8
	ctx.lr = 0x8314EDD0;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8314ee10
	if (!cr6.eq) goto loc_8314EE10;
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
loc_8314EE10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314EE28"))) PPC_WEAK_FUNC(sub_8314EE28);
PPC_FUNC_IMPL(__imp__sub_8314EE28) {
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
	// bl 0x830ff290
	ctx.lr = 0x8314EE38;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bgt cr6,0x8314f03c
	if (cr6.gt) goto loc_8314F03C;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4508
	ctx.r12.s64 = ctx.r12.s64 + -4508;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8314F038;
	case 1:
		goto loc_8314F038;
	case 2:
		goto loc_8314F03C;
	case 3:
		goto loc_8314F038;
	case 4:
		goto loc_8314F03C;
	case 5:
		goto loc_8314F03C;
	case 6:
		goto loc_8314F03C;
	case 7:
		goto loc_8314F03C;
	case 8:
		goto loc_8314F03C;
	case 9:
		goto loc_8314F03C;
	case 10:
		goto loc_8314F03C;
	case 11:
		goto loc_8314F03C;
	case 12:
		goto loc_8314F03C;
	case 13:
		goto loc_8314EF84;
	case 14:
		goto loc_8314EF98;
	case 15:
		goto loc_8314EFAC;
	case 16:
		goto loc_8314EF84;
	case 17:
		goto loc_8314EF98;
	case 18:
		goto loc_8314EFAC;
	case 19:
		goto loc_8314F03C;
	case 20:
		goto loc_8314F03C;
	case 21:
		goto loc_8314F03C;
	case 22:
		goto loc_8314F03C;
	case 23:
		goto loc_8314EFC0;
	case 24:
		goto loc_8314EFC0;
	case 25:
		goto loc_8314EFD4;
	case 26:
		goto loc_8314EFE8;
	case 27:
		goto loc_8314EFFC;
	case 28:
		goto loc_8314F03C;
	case 29:
		goto loc_8314F010;
	case 30:
		goto loc_8314F010;
	case 31:
		goto loc_8314F03C;
	case 32:
		goto loc_8314F03C;
	case 33:
		goto loc_8314F03C;
	case 34:
		goto loc_8314F024;
	case 35:
		goto loc_8314F024;
	case 36:
		goto loc_8314F038;
	case 37:
		goto loc_8314F038;
	case 38:
		goto loc_8314F038;
	case 39:
		goto loc_8314F038;
	case 40:
		goto loc_8314F03C;
	case 41:
		goto loc_8314EF3C;
	case 42:
		goto loc_8314EF3C;
	case 43:
		goto loc_8314F024;
	case 44:
		goto loc_8314F03C;
	case 45:
		goto loc_8314F038;
	case 46:
		goto loc_8314F03C;
	case 47:
		goto loc_8314EF3C;
	case 48:
		goto loc_8314EF3C;
	case 49:
		goto loc_8314F038;
	case 50:
		goto loc_8314F038;
	case 51:
		goto loc_8314EF3C;
	case 52:
		goto loc_8314F038;
	case 53:
		goto loc_8314EF3C;
	default:
		return;
	}
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4220(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4220);
	// lwz r24,-4200(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4200);
	// lwz r24,-4180(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4180);
	// lwz r24,-4220(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4220);
	// lwz r24,-4200(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4200);
	// lwz r24,-4180(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4180);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4160(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4160);
	// lwz r24,-4160(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4160);
	// lwz r24,-4140(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4140);
	// lwz r24,-4120(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4120);
	// lwz r24,-4100(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4100);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4080(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4080);
	// lwz r24,-4080(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4080);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4060(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4060);
	// lwz r24,-4060(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4060);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4292(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4292);
	// lwz r24,-4292(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4292);
	// lwz r24,-4060(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4060);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4036(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4036);
	// lwz r24,-4292(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4292);
	// lwz r24,-4292(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4292);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4292(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4292);
	// lwz r24,-4040(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4040);
	// lwz r24,-4292(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -4292);
loc_8314EF3C:
	// bl 0x831156e8
	ctx.lr = 0x8314EF40;
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
	// beq cr6,0x8314ef84
	if (cr6.eq) goto loc_8314EF84;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x8314efc0
	if (cr6.eq) goto loc_8314EFC0;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// li r10,4
	ctx.r10.s64 = 4;
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
loc_8314EF84:
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
loc_8314EF98:
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
loc_8314EFAC:
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8314EFC0:
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
loc_8314EFD4:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8314EFE8:
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8314EFFC:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8314F010:
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8314F024:
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8314F038:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314F03C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314F04C"))) PPC_WEAK_FUNC(sub_8314F04C);
PPC_FUNC_IMPL(__imp__sub_8314F04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F050"))) PPC_WEAK_FUNC(sub_8314F050);
PPC_FUNC_IMPL(__imp__sub_8314F050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314F058;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314F064;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x8314F06C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r29,r10,5
	ctx.r29.s64 = ctx.r10.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831239e0
	ctx.lr = 0x8314F08C;
	sub_831239E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831239e0
	ctx.lr = 0x8314F09C;
	sub_831239E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x8314F0A4;
	sub_83123768(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x8314f1b0
	if (cr6.eq) goto loc_8314F1B0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r4,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// lwz r10,-3464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3464);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314f0e0
	if (!cr6.eq) goto loc_8314F0E0;
	// xor r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8314f0e4
	if (cr6.eq) goto loc_8314F0E4;
loc_8314F0E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314F0E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314f1b0
	if (!cr6.eq) goto loc_8314F1B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314f114
	if (!cr6.eq) goto loc_8314F114;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314f118
	if (cr6.eq) goto loc_8314F118;
loc_8314F114:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314F118:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314f1b0
	if (!cr6.eq) goto loc_8314F1B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x8314F12C;
	sub_8311C148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x8314F13C;
	sub_8311C148(ctx, base);
	// lwz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314f160
	if (!cr6.eq) goto loc_8314F160;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314F160:
	// lwz r10,788(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r9,r10,15,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8314f184
	if (!cr6.eq) goto loc_8314F184;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314F184:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8314f1a0
	if (cr6.eq) goto loc_8314F1A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314F1A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314F1B0:
	// bl 0x831156e8
	ctx.lr = 0x8314F1B4;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r9,9328
	ctx.r5.s64 = ctx.r9.s64 + 9328;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// bl 0x831178a0
	ctx.lr = 0x8314F1D8;
	sub_831178A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314F1E4"))) PPC_WEAK_FUNC(sub_8314F1E4);
PPC_FUNC_IMPL(__imp__sub_8314F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F1E8"))) PPC_WEAK_FUNC(sub_8314F1E8);
PPC_FUNC_IMPL(__imp__sub_8314F1E8) {
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
	// bl 0x831156e8
	ctx.lr = 0x8314F200;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82c161b8
	ctx.lr = 0x8314F20C;
	sub_82C161B8(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314F22C"))) PPC_WEAK_FUNC(sub_8314F22C);
PPC_FUNC_IMPL(__imp__sub_8314F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F230"))) PPC_WEAK_FUNC(sub_8314F230);
PPC_FUNC_IMPL(__imp__sub_8314F230) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314F238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,-1
	ctx.r29.s64 = -1;
	// bl 0x831156e8
	ctx.lr = 0x8314F244;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x830ff290
	ctx.lr = 0x8314F24C;
	sub_830FF290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314f2a8
	if (cr6.eq) goto loc_8314F2A8;
	// bl 0x830ffaa8
	ctx.lr = 0x8314F25C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x8314f278
	if (!cr6.eq) goto loc_8314F278;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// ori r10,r11,46724
	ctx.r10.u64 = ctx.r11.u64 | 46724;
	// lhzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314F278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ffaa8
	ctx.lr = 0x8314F280;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x8314f2a8
	if (!cr6.eq) goto loc_8314F2A8;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x8311bf98
	ctx.lr = 0x8314F29C;
	sub_8311BF98(ctx, base);
	// lhz r3,188(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 188);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8314F2A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314F2B4"))) PPC_WEAK_FUNC(sub_8314F2B4);
PPC_FUNC_IMPL(__imp__sub_8314F2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F2B8"))) PPC_WEAK_FUNC(sub_8314F2B8);
PPC_FUNC_IMPL(__imp__sub_8314F2B8) {
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
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bgt cr6,0x8314f494
	if (cr6.gt) goto loc_8314F494;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-3348
	ctx.r12.s64 = ctx.r12.s64 + -3348;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u32) {
	case 0:
		goto loc_8314F4BC;
	case 1:
		goto loc_8314F344;
	case 2:
		goto loc_8314F35C;
	case 3:
		goto loc_8314F374;
	case 4:
		goto loc_8314F38C;
	case 5:
		goto loc_8314F3A4;
	case 6:
		goto loc_8314F494;
	case 7:
		goto loc_8314F464;
	case 8:
		goto loc_8314F494;
	case 9:
		goto loc_8314F494;
	case 10:
		goto loc_8314F3BC;
	case 11:
		goto loc_8314F3D4;
	case 12:
		goto loc_8314F494;
	case 13:
		goto loc_8314F3EC;
	case 14:
		goto loc_8314F494;
	case 15:
		goto loc_8314F494;
	case 16:
		goto loc_8314F404;
	case 17:
		goto loc_8314F494;
	case 18:
		goto loc_8314F47C;
	case 19:
		goto loc_8314F41C;
	case 20:
		goto loc_8314F434;
	case 21:
		goto loc_8314F44C;
	default:
		return;
	}
	// lwz r24,-2884(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2884);
	// lwz r24,-3260(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3260);
	// lwz r24,-3236(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3236);
	// lwz r24,-3212(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3212);
	// lwz r24,-3188(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3188);
	// lwz r24,-3164(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3164);
	// lwz r24,-2924(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2924);
	// lwz r24,-2972(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2972);
	// lwz r24,-2924(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2924);
	// lwz r24,-2924(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2924);
	// lwz r24,-3140(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3140);
	// lwz r24,-3116(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3116);
	// lwz r24,-2924(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2924);
	// lwz r24,-3092(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3092);
	// lwz r24,-2924(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2924);
	// lwz r24,-2924(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2924);
	// lwz r24,-3068(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3068);
	// lwz r24,-2924(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2924);
	// lwz r24,-2948(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2948);
	// lwz r24,-3044(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3044);
	// lwz r24,-3020(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -3020);
	// lwz r24,-2996(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -2996);
loc_8314F344:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_8314F35C:
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8314F374:
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_8314F38C:
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_8314F3A4:
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
loc_8314F3BC:
	// li r3,7
	ctx.r3.s64 = 7;
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
loc_8314F3D4:
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_8314F3EC:
	// li r3,9
	ctx.r3.s64 = 9;
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
loc_8314F404:
	// li r3,8
	ctx.r3.s64 = 8;
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
loc_8314F41C:
	// li r3,10
	ctx.r3.s64 = 10;
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
loc_8314F434:
	// li r3,11
	ctx.r3.s64 = 11;
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
loc_8314F44C:
	// li r3,12
	ctx.r3.s64 = 12;
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
loc_8314F464:
	// li r3,13
	ctx.r3.s64 = 13;
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
loc_8314F47C:
	// li r3,14
	ctx.r3.s64 = 14;
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
loc_8314F494:
	// bl 0x8310d4a0
	ctx.lr = 0x8314F498;
	sub_8310D4A0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// beq cr6,0x8314f4bc
	if (cr6.eq) goto loc_8314F4BC;
	// bl 0x8310d4a0
	ctx.lr = 0x8314F4A4;
	sub_8310D4A0(ctx, base);
	// bl 0x8314f2b8
	ctx.lr = 0x8314F4A8;
	sub_8314F2B8(ctx, base);
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
loc_8314F4BC:
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

__attribute__((alias("__imp__sub_8314F4D4"))) PPC_WEAK_FUNC(sub_8314F4D4);
PPC_FUNC_IMPL(__imp__sub_8314F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F4D8"))) PPC_WEAK_FUNC(sub_8314F4D8);
PPC_FUNC_IMPL(__imp__sub_8314F4D8) {
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
	// bl 0x831156e8
	ctx.lr = 0x8314F4F0;
	sub_831156E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x8314F4FC;
	sub_8311C148(ctx, base);
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

__attribute__((alias("__imp__sub_8314F518"))) PPC_WEAK_FUNC(sub_8314F518);
PPC_FUNC_IMPL(__imp__sub_8314F518) {
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
	ctx.lr = 0x8314F528;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8314F52C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x8314f560
	if (cr6.eq) goto loc_8314F560;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// beq cr6,0x8314f560
	if (cr6.eq) goto loc_8314F560;
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// beq cr6,0x8314f560
	if (cr6.eq) goto loc_8314F560;
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// beq cr6,0x8314f560
	if (cr6.eq) goto loc_8314F560;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x8314f560
	if (cr6.eq) goto loc_8314F560;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8314f564
	if (!cr6.eq) goto loc_8314F564;
loc_8314F560:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8314F564:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314F574"))) PPC_WEAK_FUNC(sub_8314F574);
PPC_FUNC_IMPL(__imp__sub_8314F574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F578"))) PPC_WEAK_FUNC(sub_8314F578);
PPC_FUNC_IMPL(__imp__sub_8314F578) {
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
	ctx.lr = 0x8314F588;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(ctx.r11.u32, 49, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,52
	cr6.compare<uint32_t>(ctx.r11.u32, 52, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(ctx.r11.u32, 55, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(ctx.r11.u32, 59, xer);
	// beq cr6,0x8314f5f0
	if (cr6.eq) goto loc_8314F5F0;
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(ctx.r11.u32, 61, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8314f5f4
	if (!cr6.eq) goto loc_8314F5F4;
loc_8314F5F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8314F5F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314F604"))) PPC_WEAK_FUNC(sub_8314F604);
PPC_FUNC_IMPL(__imp__sub_8314F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F608"))) PPC_WEAK_FUNC(sub_8314F608);
PPC_FUNC_IMPL(__imp__sub_8314F608) {
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
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-3464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3464);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8314f64c
	if (!cr6.eq) goto loc_8314F64C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314f650
	if (cr6.eq) goto loc_8314F650;
loc_8314F64C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314F650:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314f674
	if (cr6.eq) goto loc_8314F674;
loc_8314F65C:
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
loc_8314F674:
	// bl 0x831156e8
	ctx.lr = 0x8314F678;
	sub_831156E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x8314F684;
	sub_8311C148(ctx, base);
	// lwz r11,808(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 808);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r11,166
	cr6.compare<uint32_t>(ctx.r11.u32, 166, xer);
	// bgt cr6,0x8314f780
	if (cr6.gt) goto loc_8314F780;
	// beq cr6,0x8314f768
	if (cr6.eq) goto loc_8314F768;
	// cmplwi cr6,r11,114
	cr6.compare<uint32_t>(ctx.r11.u32, 114, xer);
	// bgt cr6,0x8314f708
	if (cr6.gt) goto loc_8314F708;
	// beq cr6,0x8314f6f0
	if (cr6.eq) goto loc_8314F6F0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x8314f65c
	if (cr6.eq) goto loc_8314F65C;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// beq cr6,0x8314f6d8
	if (cr6.eq) goto loc_8314F6D8;
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(ctx.r11.u32, 94, xer);
	// bne cr6,0x8314f850
	if (!cr6.eq) goto loc_8314F850;
	// li r3,10
	ctx.r3.s64 = 10;
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
loc_8314F6D8:
	// li r3,14
	ctx.r3.s64 = 14;
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
loc_8314F6F0:
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
loc_8314F708:
	// cmplwi cr6,r11,121
	cr6.compare<uint32_t>(ctx.r11.u32, 121, xer);
	// beq cr6,0x8314f750
	if (cr6.eq) goto loc_8314F750;
	// cmplwi cr6,r11,132
	cr6.compare<uint32_t>(ctx.r11.u32, 132, xer);
	// beq cr6,0x8314f738
	if (cr6.eq) goto loc_8314F738;
	// cmplwi cr6,r11,163
	cr6.compare<uint32_t>(ctx.r11.u32, 163, xer);
	// bne cr6,0x8314f850
	if (!cr6.eq) goto loc_8314F850;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_8314F738:
	// li r3,13
	ctx.r3.s64 = 13;
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
loc_8314F750:
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_8314F768:
	// li r3,5
	ctx.r3.s64 = 5;
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
loc_8314F780:
	// cmplwi cr6,r11,330
	cr6.compare<uint32_t>(ctx.r11.u32, 330, xer);
	// bgt cr6,0x8314f804
	if (cr6.gt) goto loc_8314F804;
	// beq cr6,0x8314f7ec
	if (cr6.eq) goto loc_8314F7EC;
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(ctx.r11.u32, 191, xer);
	// beq cr6,0x8314f7d4
	if (cr6.eq) goto loc_8314F7D4;
	// cmplwi cr6,r11,292
	cr6.compare<uint32_t>(ctx.r11.u32, 292, xer);
	// beq cr6,0x8314f7bc
	if (cr6.eq) goto loc_8314F7BC;
	// cmplwi cr6,r11,302
	cr6.compare<uint32_t>(ctx.r11.u32, 302, xer);
	// bne cr6,0x8314f850
	if (!cr6.eq) goto loc_8314F850;
	// li r3,11
	ctx.r3.s64 = 11;
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
loc_8314F7BC:
	// li r3,9
	ctx.r3.s64 = 9;
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
loc_8314F7D4:
	// li r3,6
	ctx.r3.s64 = 6;
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
loc_8314F7EC:
	// li r3,4
	ctx.r3.s64 = 4;
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
loc_8314F804:
	// cmplwi cr6,r11,340
	cr6.compare<uint32_t>(ctx.r11.u32, 340, xer);
	// beq cr6,0x8314f84c
	if (cr6.eq) goto loc_8314F84C;
	// cmplwi cr6,r11,371
	cr6.compare<uint32_t>(ctx.r11.u32, 371, xer);
	// beq cr6,0x8314f834
	if (cr6.eq) goto loc_8314F834;
	// cmplwi cr6,r11,404
	cr6.compare<uint32_t>(ctx.r11.u32, 404, xer);
	// bne cr6,0x8314f850
	if (!cr6.eq) goto loc_8314F850;
	// li r3,7
	ctx.r3.s64 = 7;
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
loc_8314F834:
	// li r3,15
	ctx.r3.s64 = 15;
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
loc_8314F84C:
	// li r3,12
	ctx.r3.s64 = 12;
loc_8314F850:
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

__attribute__((alias("__imp__sub_8314F864"))) PPC_WEAK_FUNC(sub_8314F864);
PPC_FUNC_IMPL(__imp__sub_8314F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F868"))) PPC_WEAK_FUNC(sub_8314F868);
PPC_FUNC_IMPL(__imp__sub_8314F868) {
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
	ctx.lr = 0x8314F884;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8314f8a4
	if (cr6.eq) goto loc_8314F8A4;
	// bl 0x83115808
	ctx.lr = 0x8314F894;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8314f8a8
	if (!cr6.eq) goto loc_8314F8A8;
loc_8314F8A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8314F8A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8314f8bc
	if (!cr6.eq) goto loc_8314F8BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314f904
	goto loc_8314F904;
loc_8314F8BC:
	// bl 0x831156e8
	ctx.lr = 0x8314F8C0;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x8314F8C8;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123778
	ctx.lr = 0x8314F8D8;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x8314F8E4;
	sub_8311C338(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r31,88(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// bl 0x8311c148
	ctx.lr = 0x8314F8F8;
	sub_8311C148(ctx, base);
	// addi r3,r3,1209
	ctx.r3.s64 = ctx.r3.s64 + 1209;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x831476d0
	ctx.lr = 0x8314F904;
	sub_831476D0(ctx, base);
loc_8314F904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314F91C"))) PPC_WEAK_FUNC(sub_8314F91C);
PPC_FUNC_IMPL(__imp__sub_8314F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314F920"))) PPC_WEAK_FUNC(sub_8314F920);
PPC_FUNC_IMPL(__imp__sub_8314F920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314F928;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce76c
	ctx.lr = 0x8314F930;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lfd f31,18440(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18440);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfd f30,18432(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 18432);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmul f1,f13,f30
	ctx.f1.f64 = ctx.f13.f64 * ctx.f30.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8314F96C;
	sub_831D20A0(ctx, base);
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f1,f11,f30
	ctx.f1.f64 = ctx.f11.f64 * ctx.f30.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8314F98C;
	sub_831D20A0(ctx, base);
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmul f1,f9,f30
	ctx.f1.f64 = ctx.f9.f64 * ctx.f30.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8314F9AC;
	sub_831D20A0(ctx, base);
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,18424(r6)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 18424);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmul f8,f29,f0
	ctx.f8.f64 = ctx.f29.f64 * ctx.f0.f64;
	// lfd f0,18416(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18416);
	// lfd f13,18408(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 18408);
	// lfd f30,8968(r3)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8968);
	// lfd f12,20616(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20616);
	// lfd f31,26360(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 26360);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmadd f7,f28,f0,f8
	ctx.f7.f64 = ctx.f28.f64 * ctx.f0.f64 + ctx.f8.f64;
	// fmadd f6,f1,f13,f7
	ctx.f6.f64 = ctx.f1.f64 * ctx.f13.f64 + ctx.f7.f64;
	// fmul f5,f6,f30
	ctx.f5.f64 = ctx.f6.f64 * ctx.f30.f64;
	// fmul f26,f5,f12
	ctx.f26.f64 = ctx.f5.f64 * ctx.f12.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8314FA00;
	sub_831D20A0(ctx, base);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lfd f0,18400(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 18400);
	// lis r4,-32223
	ctx.r4.s64 = -2111766528;
	// fmul f4,f29,f0
	ctx.f4.f64 = ctx.f29.f64 * ctx.f0.f64;
	// lfd f0,18392(r6)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 18392);
	// lfd f13,18384(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 18384);
	// lfd f12,18376(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 18376);
	// fmsub f3,f1,f0,f13
	ctx.f3.f64 = ctx.f1.f64 * ctx.f0.f64 - ctx.f13.f64;
	// lfd f11,18368(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 18368);
	// stfd f3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.f3.u64);
	// lfd f0,18360(r4)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 18360);
	// fmadd f1,f27,f12,f4
	ctx.f1.f64 = ctx.f27.f64 * ctx.f12.f64 + ctx.f4.f64;
	// fmadd f13,f28,f11,f1
	ctx.f13.f64 = ctx.f28.f64 * ctx.f11.f64 + ctx.f1.f64;
	// fmul f12,f13,f30
	ctx.f12.f64 = ctx.f13.f64 * ctx.f30.f64;
	// fmul f1,f12,f0
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8314FA54;
	sub_831D20A0(ctx, base);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8314FA64;
	sub_831D20A0(ctx, base);
	// lis r3,-32223
	ctx.r3.s64 = -2111766528;
	// fsub f11,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f25.f64 - ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// lfd f0,18352(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 18352);
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// stfd f10,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.f10.u64);
	// bl 0x831d20a0
	ctx.lr = 0x8314FA84;
	sub_831D20A0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lfd f0,18344(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18344);
	// fmul f9,f27,f0
	ctx.f9.f64 = ctx.f27.f64 * ctx.f0.f64;
	// lfd f0,18336(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18336);
	// lfd f13,18328(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 18328);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// lfd f12,18320(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 18320);
	// fmadd f8,f29,f0,f9
	ctx.f8.f64 = ctx.f29.f64 * ctx.f0.f64 + ctx.f9.f64;
	// fmadd f7,f28,f13,f8
	ctx.f7.f64 = ctx.f28.f64 * ctx.f13.f64 + ctx.f8.f64;
	// fmul f6,f7,f30
	ctx.f6.f64 = ctx.f7.f64 * ctx.f30.f64;
	// fmul f1,f6,f12
	ctx.f1.f64 = ctx.f6.f64 * ctx.f12.f64;
	// bl 0x831d20a0
	ctx.lr = 0x8314FAC4;
	sub_831D20A0(ctx, base);
	// fsub f5,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f27.f64 - ctx.f1.f64;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lfd f0,18312(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 18312);
	// fmul f4,f5,f0
	ctx.f4.f64 = ctx.f5.f64 * ctx.f0.f64;
	// stfd f4,16(r29)
	PPC_STORE_U64(ctx.r29.u32 + 16, ctx.f4.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831ce7b8
	ctx.lr = 0x8314FAE4;
	__restfpr_25(ctx, base);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314FAE8"))) PPC_WEAK_FUNC(sub_8314FAE8);
PPC_FUNC_IMPL(__imp__sub_8314FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce764
	ctx.lr = 0x8314FAF8;
	__savefpr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// std r3,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r3.u64);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// std r6,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r6.u64);
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r5,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r5.u64);
	// lfd f11,224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r7,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r7.u64);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f0,9000(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 9000);
	// std r8,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r8.u64);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ld r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r6,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// std r5,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r5.u64);
	// std r4,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r4.u64);
	// std r3,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r3.u64);
	// std r11,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r10.u64);
	// bge cr6,0x8314fb70
	if (!cr6.lt) goto loc_8314FB70;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8314fb74
	goto loc_8314FB74;
loc_8314FB70:
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8314FB74:
	// lfd f12,256(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x8314fb84
	if (cr6.lt) goto loc_8314FB84;
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
loc_8314FB84:
	// lfd f10,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fsub f9,f13,f0
	ctx.f9.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsub f7,f8,f10
	ctx.f7.f64 = ctx.f8.f64 - ctx.f10.f64;
	// lfd f6,120(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fsub f4,f5,f6
	ctx.f4.f64 = ctx.f5.f64 - ctx.f6.f64;
	// lfd f1,232(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// lfd f31,264(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fmul f3,f1,f1
	ctx.f3.f64 = ctx.f1.f64 * ctx.f1.f64;
	// fmul f10,f31,f31
	ctx.f10.f64 = ctx.f31.f64 * ctx.f31.f64;
	// lfd f2,240(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// lfd f30,272(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// lfd f0,20040(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20040);
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmul f8,f7,f7
	ctx.f8.f64 = ctx.f7.f64 * ctx.f7.f64;
	// fmadd f26,f2,f2,f3
	ctx.f26.f64 = ctx.f2.f64 * ctx.f2.f64 + ctx.f3.f64;
	// fmadd f25,f30,f30,f10
	ctx.f25.f64 = ctx.f30.f64 * ctx.f30.f64 + ctx.f10.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fmadd f28,f4,f4,f8
	ctx.f28.f64 = ctx.f4.f64 * ctx.f4.f64 + ctx.f8.f64;
	// fmadd f7,f9,f9,f28
	ctx.f7.f64 = ctx.f9.f64 * ctx.f9.f64 + ctx.f28.f64;
	// fsqrt f24,f7
	ctx.f24.f64 = sqrt(ctx.f7.f64);
	// bgt cr6,0x8314fc08
	if (cr6.gt) goto loc_8314FC08;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfd f0,18456(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18456);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x8314fbfc
	if (!cr6.gt) goto loc_8314FBFC;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8314fc08
	if (cr6.gt) goto loc_8314FC08;
loc_8314FBFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,20632(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20632);
	// b 0x8314fca4
	goto loc_8314FCA4;
loc_8314FC08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f27,8968(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8968);
	// lfd f29,17056(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + 17056);
	// fcmpu cr6,f26,f27
	cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// ble cr6,0x8314fc68
	if (!cr6.gt) goto loc_8314FC68;
	// fcmpu cr6,f25,f27
	cr6.compare(ctx.f25.f64, ctx.f27.f64);
	// ble cr6,0x8314fc68
	if (!cr6.gt) goto loc_8314FC68;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lfd f0,-4680(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4680);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8314fc68
	if (!cr6.lt) goto loc_8314FC68;
	// bl 0x831d17c0
	ctx.lr = 0x8314FC3C;
	sub_831D17C0(ctx, base);
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831d17c0
	ctx.lr = 0x8314FC4C;
	sub_831D17C0(ctx, base);
	// fsub f1,f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64 - ctx.f1.f64;
	// bl 0x831d1a10
	ctx.lr = 0x8314FC54;
	sub_831D1A10(ctx, base);
	// fsub f0,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64 - ctx.f1.f64;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8314fc64
	if (!cr6.gt) goto loc_8314FC64;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_8314FC64:
	// fmul f24,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f0.f64 * ctx.f24.f64;
loc_8314FC68:
	// fcmpu cr6,f26,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// bgt cr6,0x8314fca0
	if (cr6.gt) goto loc_8314FCA0;
	// fcmpu cr6,f25,f27
	cr6.compare(ctx.f25.f64, ctx.f27.f64);
	// bgt cr6,0x8314fca0
	if (cr6.gt) goto loc_8314FCA0;
	// fsqrt f12,f28
	ctx.f12.f64 = sqrt(ctx.f28.f64);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,18448(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18448);
	// lfd f13,15760(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 15760);
	// fmadd f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8314fc9c
	if (!cr6.gt) goto loc_8314FC9C;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_8314FC9C:
	// fmul f24,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f0.f64 * ctx.f24.f64;
loc_8314FCA0:
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
loc_8314FCA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831ce7b0
	ctx.lr = 0x8314FCB0;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314FCBC"))) PPC_WEAK_FUNC(sub_8314FCBC);
PPC_FUNC_IMPL(__imp__sub_8314FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314FCC0"))) PPC_WEAK_FUNC(sub_8314FCC0);
PPC_FUNC_IMPL(__imp__sub_8314FCC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// lfd f0,8(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lfd f12,8(r4)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// fsub f13,f0,f12
	ctx.f13.f64 = ctx.f0.f64 - ctx.f12.f64;
	// lfd f10,16(r3)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lfd f11,16(r4)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// fsub f8,f10,f11
	ctx.f8.f64 = ctx.f10.f64 - ctx.f11.f64;
	// lfd f7,0(r3)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lfd f10,0(r4)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsub f4,f7,f10
	ctx.f4.f64 = ctx.f7.f64 - ctx.f10.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfd f9,18480(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 18480);
	// lfd f7,18472(r9)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r9.u32 + 18472);
	// lfd f6,18464(r10)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 18464);
	// lfd f0,8968(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8968);
	// lfd f5,9000(r7)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r7.u32 + 9000);
	// fmul f3,f13,f13
	ctx.f3.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmadd f2,f8,f8,f3
	ctx.f2.f64 = ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64;
	// fmadd f1,f4,f4,f2
	ctx.f1.f64 = ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64;
	// fsqrt f13,f1
	ctx.f13.f64 = sqrt(ctx.f1.f64);
	// fcmpu cr6,f13,f9
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bgt cr6,0x8314fd2c
	if (cr6.gt) goto loc_8314FD2C;
	// fmr f8,f5
	ctx.f8.f64 = ctx.f5.f64;
	// b 0x8314fd4c
	goto loc_8314FD4C;
loc_8314FD2C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8314fd48
	if (!cr6.lt) goto loc_8314FD48;
	// fsub f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fsub f8,f7,f13
	ctx.f8.f64 = ctx.f7.f64 - ctx.f13.f64;
	// fmul f8,f8,f6
	ctx.f8.f64 = ctx.f8.f64 * ctx.f6.f64;
	// fcmpu cr6,f8,f0
	cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x8314fd4c
	if (!cr6.gt) goto loc_8314FD4C;
loc_8314FD48:
	// fmr f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f0.f64;
loc_8314FD4C:
	// lfd f13,32(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// fsub f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 - ctx.f12.f64;
	// lfd f4,40(r3)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// fsub f3,f4,f11
	ctx.f3.f64 = ctx.f4.f64 - ctx.f11.f64;
	// lfd f2,24(r3)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// fsub f1,f2,f10
	ctx.f1.f64 = ctx.f2.f64 - ctx.f10.f64;
	// fmul f13,f12,f12
	ctx.f13.f64 = ctx.f12.f64 * ctx.f12.f64;
	// fmadd f12,f3,f3,f13
	ctx.f12.f64 = ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64;
	// fmadd f11,f1,f1,f12
	ctx.f11.f64 = ctx.f1.f64 * ctx.f1.f64 + ctx.f12.f64;
	// fsqrt f13,f11
	ctx.f13.f64 = sqrt(ctx.f11.f64);
	// fcmpu cr6,f13,f9
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bgt cr6,0x8314fd84
	if (cr6.gt) goto loc_8314FD84;
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
	// b 0x8314fda4
	goto loc_8314FDA4;
loc_8314FD84:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8314fda0
	if (!cr6.lt) goto loc_8314FDA0;
	// fsub f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fsub f12,f7,f13
	ctx.f12.f64 = ctx.f7.f64 - ctx.f13.f64;
	// fmul f13,f12,f6
	ctx.f13.f64 = ctx.f12.f64 * ctx.f6.f64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8314fda4
	if (!cr6.gt) goto loc_8314FDA4;
loc_8314FDA0:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8314FDA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f8,f5
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f8.f64, ctx.f5.f64);
	// lfd f0,15760(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 15760);
	// fmadd f1,f13,f0,f8
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f8.f64;
	// ble cr6,0x8314fdc0
	if (!cr6.gt) goto loc_8314FDC0;
	// fcmpu cr6,f13,f5
	cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bgtlr cr6
	if (cr6.gt) return;
loc_8314FDC0:
	// fmul f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314FDC8"))) PPC_WEAK_FUNC(sub_8314FDC8);
PPC_FUNC_IMPL(__imp__sub_8314FDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-524
	ctx.r12.s64 = ctx.r12.s64 + -524;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8314FE24;
	case 1:
		goto loc_8314FE24;
	case 2:
		goto loc_8314FE24;
	case 3:
		goto loc_8314FE2C;
	case 4:
		goto loc_8314FE2C;
	case 5:
		goto loc_8314FE2C;
	case 6:
		goto loc_8314FE2C;
	case 7:
		goto loc_8314FE2C;
	case 8:
		goto loc_8314FE34;
	case 9:
		goto loc_8314FE34;
	case 10:
		goto loc_8314FE34;
	case 11:
		goto loc_8314FE34;
	default:
		return;
	}
	// lwz r24,-476(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -476);
	// lwz r24,-476(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -476);
	// lwz r24,-476(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -476);
	// lwz r24,-468(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -468);
	// lwz r24,-468(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -468);
	// lwz r24,-468(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -468);
	// lwz r24,-468(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -468);
	// lwz r24,-468(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -468);
	// lwz r24,-460(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -460);
	// lwz r24,-460(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -460);
	// lwz r24,-460(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -460);
	// lwz r24,-460(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -460);
loc_8314FE24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8314FE2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8314FE34:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314FE3C"))) PPC_WEAK_FUNC(sub_8314FE3C);
PPC_FUNC_IMPL(__imp__sub_8314FE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8314FE40"))) PPC_WEAK_FUNC(sub_8314FE40);
PPC_FUNC_IMPL(__imp__sub_8314FE40) {
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
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x8314FE60;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x8314fee8
	if (cr6.gt) goto loc_8314FEE8;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-372
	ctx.r12.s64 = ctx.r12.s64 + -372;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8314FEBC;
	case 1:
		goto loc_8314FEBC;
	case 2:
		goto loc_8314FEBC;
	case 3:
		goto loc_8314FED0;
	case 4:
		goto loc_8314FED0;
	case 5:
		goto loc_8314FED0;
	case 6:
		goto loc_8314FED0;
	case 7:
		goto loc_8314FED0;
	case 8:
		goto loc_8314FEE4;
	case 9:
		goto loc_8314FEE4;
	case 10:
		goto loc_8314FEE4;
	case 11:
		goto loc_8314FEE4;
	default:
		return;
	}
	// lwz r24,-324(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -324);
	// lwz r24,-324(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -324);
	// lwz r24,-324(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -324);
	// lwz r24,-304(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -304);
	// lwz r24,-304(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -304);
	// lwz r24,-304(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -304);
	// lwz r24,-304(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -304);
	// lwz r24,-304(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -304);
	// lwz r24,-284(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -284);
	// lwz r24,-284(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -284);
	// lwz r24,-284(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -284);
	// lwz r24,-284(r20)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r20.u32 + -284);
loc_8314FEBC:
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
loc_8314FED0:
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
loc_8314FEE4:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8314FEE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314FEF8"))) PPC_WEAK_FUNC(sub_8314FEF8);
PPC_FUNC_IMPL(__imp__sub_8314FEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8314FF00;
	__savegprlr_28(ctx, base);
	// stwu r1,-2080(r1)
	ea = -2080 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314FF14;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c148
	ctx.lr = 0x8314FF24;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x8314FF34;
	sub_831CE980(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,1224(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// bl 0x8311c260
	ctx.lr = 0x8314FF40;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x8314FF50;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// li r5,160
	ctx.r5.s64 = 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x8314ff84
	if (!cr6.lt) goto loc_8314FF84;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x8314FF78;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2080
	ctx.r1.s64 = ctx.r1.s64 + 2080;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8314FF84:
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x831ce980
	ctx.lr = 0x8314FF8C;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2080
	ctx.r1.s64 = ctx.r1.s64 + 2080;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314FF98"))) PPC_WEAK_FUNC(sub_8314FF98);
PPC_FUNC_IMPL(__imp__sub_8314FF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8314FFA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-2064(r1)
	ea = -2064 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x8314FFB0;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c148
	ctx.lr = 0x8314FFC0;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x8314FFD0;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,1224(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// bl 0x8311c260
	ctx.lr = 0x8314FFDC;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x8314FFEC;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,664
	ctx.r4.s64 = ctx.r1.s64 + 664;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x8314FFFC;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2064
	ctx.r1.s64 = ctx.r1.s64 + 2064;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83150008"))) PPC_WEAK_FUNC(sub_83150008);
PPC_FUNC_IMPL(__imp__sub_83150008) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// bl 0x831156e8
	ctx.lr = 0x83150024;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c3d8
	ctx.lr = 0x83150030;
	sub_8311C3D8(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82c15fc8
	ctx.lr = 0x83150038;
	sub_82C15FC8(ctx, base);
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

__attribute__((alias("__imp__sub_8315004C"))) PPC_WEAK_FUNC(sub_8315004C);
PPC_FUNC_IMPL(__imp__sub_8315004C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150050"))) PPC_WEAK_FUNC(sub_83150050);
PPC_FUNC_IMPL(__imp__sub_83150050) {
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
	ctx.lr = 0x83150068;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c3d8
	ctx.lr = 0x83150074;
	sub_8311C3D8(ctx, base);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8315009c
	if (cr6.eq) goto loc_8315009C;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_8315009C:
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_831500B4"))) PPC_WEAK_FUNC(sub_831500B4);
PPC_FUNC_IMPL(__imp__sub_831500B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831500B8"))) PPC_WEAK_FUNC(sub_831500B8);
PPC_FUNC_IMPL(__imp__sub_831500B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831500C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x831156e8
	ctx.lr = 0x831500D4;
	sub_831156E8(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r10,-3464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3464);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x83150108
	if (!cr6.eq) goto loc_83150108;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8315010c
	if (cr6.eq) goto loc_8315010C;
loc_83150108:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8315010C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831501fc
	if (!cr6.eq) goto loc_831501FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8315013c
	if (!cr6.eq) goto loc_8315013C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83150140
	if (cr6.eq) goto loc_83150140;
loc_8315013C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83150140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831501fc
	if (!cr6.eq) goto loc_831501FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x83150158;
	sub_8311C148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x83150168;
	sub_8311C148(ctx, base);
	// lwz r11,1300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1300);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// clrlwi r11,r10,14
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x83150184
	if (!cr6.eq) goto loc_83150184;
	// li r27,1
	ctx.r27.s64 = 1;
loc_83150184:
	// lwz r10,1300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1300);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r8,r10,14
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFF;
	// clrlwi r10,r9,14
	ctx.r10.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x831501a0
	if (!cr6.eq) goto loc_831501A0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_831501A0:
	// lwz r9,1304(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1304);
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x831501b4
	if (!cr6.eq) goto loc_831501B4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_831501B4:
	// lwz r9,1304(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1304);
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x831501c8
	if (!cr6.eq) goto loc_831501C8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_831501C8:
	// lwz r9,1308(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1308);
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bne cr6,0x831501dc
	if (!cr6.eq) goto loc_831501DC;
	// li r27,1
	ctx.r27.s64 = 1;
loc_831501DC:
	// lwz r11,1308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1308);
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x831501f0
	if (!cr6.eq) goto loc_831501F0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_831501F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_831501FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83150208"))) PPC_WEAK_FUNC(sub_83150208);
PPC_FUNC_IMPL(__imp__sub_83150208) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,-3512
	ctx.r11.s64 = ctx.r11.s64 + -3512;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,50
	ctx.r5.s64 = 50;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// bne cr6,0x83150278
	if (!cr6.eq) goto loc_83150278;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8315029c
	goto loc_8315029C;
loc_83150278:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x83150298
	if (!cr6.eq) goto loc_83150298;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83150298
	if (!cr6.eq) goto loc_83150298;
	// li r10,1
	ctx.r10.s64 = 1;
loc_83150298:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_8315029C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831502c0
	if (cr6.eq) goto loc_831502C0;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_831502C0:
	// bl 0x831156e8
	ctx.lr = 0x831502C4;
	sub_831156E8(ctx, base);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x831502D0;
	sub_8311BF98(ctx, base);
	// bl 0x8314b660
	ctx.lr = 0x831502D4;
	sub_8314B660(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_831502F4"))) PPC_WEAK_FUNC(sub_831502F4);
PPC_FUNC_IMPL(__imp__sub_831502F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831502F8"))) PPC_WEAK_FUNC(sub_831502F8);
PPC_FUNC_IMPL(__imp__sub_831502F8) {
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
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,-3464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3464);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83150344
	if (!cr6.eq) goto loc_83150344;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83150348
	if (cr6.eq) goto loc_83150348;
loc_83150344:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83150348:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8315035c
	if (cr6.eq) goto loc_8315035C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83150500
	goto loc_83150500;
loc_8315035C:
	// bl 0x831156e8
	ctx.lr = 0x83150360;
	sub_831156E8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x8315036C;
	sub_8311C148(ctx, base);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// bgt cr6,0x831504fc
	if (cr6.gt) goto loc_831504FC;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,920
	ctx.r12.s64 = ctx.r12.s64 + 920;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_831504A0;
	case 1:
		goto loc_831504A8;
	case 2:
		goto loc_831504B0;
	case 3:
		goto loc_831504B8;
	case 4:
		goto loc_831504C0;
	case 5:
		goto loc_831504C8;
	case 6:
		goto loc_831504D8;
	case 7:
		goto loc_831504E0;
	case 8:
		goto loc_831504E8;
	case 9:
		goto loc_831504D0;
	case 10:
		goto loc_831504F0;
	case 11:
		goto loc_831504F8;
	case 12:
		goto loc_831504FC;
	case 13:
		goto loc_831504FC;
	case 14:
		goto loc_831504FC;
	case 15:
		goto loc_831504FC;
	case 16:
		goto loc_831504FC;
	case 17:
		goto loc_831504FC;
	case 18:
		goto loc_831504FC;
	case 19:
		goto loc_831504F0;
	case 20:
		goto loc_831504F0;
	case 21:
		goto loc_831504F0;
	case 22:
		goto loc_831504FC;
	case 23:
		goto loc_831504F8;
	case 24:
		goto loc_831504FC;
	case 25:
		goto loc_831504FC;
	case 26:
		goto loc_831504FC;
	case 27:
		goto loc_831504FC;
	case 28:
		goto loc_831504FC;
	case 29:
		goto loc_831504FC;
	case 30:
		goto loc_831504FC;
	case 31:
		goto loc_831504FC;
	case 32:
		goto loc_831504F8;
	case 33:
		goto loc_831504F8;
	case 34:
		goto loc_831504FC;
	case 35:
		goto loc_831504FC;
	case 36:
		goto loc_831504FC;
	case 37:
		goto loc_831504FC;
	case 38:
		goto loc_831504FC;
	case 39:
		goto loc_831504FC;
	case 40:
		goto loc_831504FC;
	case 41:
		goto loc_831504A0;
	case 42:
		goto loc_831504C0;
	case 43:
		goto loc_831504A8;
	case 44:
		goto loc_831504B0;
	case 45:
		goto loc_831504FC;
	case 46:
		goto loc_831504FC;
	case 47:
		goto loc_831504FC;
	case 48:
		goto loc_831504FC;
	case 49:
		goto loc_831504FC;
	case 50:
		goto loc_831504FC;
	case 51:
		goto loc_831504FC;
	case 52:
		goto loc_831504FC;
	case 53:
		goto loc_831504FC;
	case 54:
		goto loc_831504FC;
	case 55:
		goto loc_831504FC;
	case 56:
		goto loc_831504FC;
	case 57:
		goto loc_831504FC;
	case 58:
		goto loc_831504FC;
	case 59:
		goto loc_831504FC;
	case 60:
		goto loc_831504D0;
	case 61:
		goto loc_831504F8;
	case 62:
		goto loc_831504FC;
	case 63:
		goto loc_831504FC;
	case 64:
		goto loc_831504F0;
	case 65:
		goto loc_831504F0;
	default:
		return;
	}
	// lwz r24,1184(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1184);
	// lwz r24,1192(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1192);
	// lwz r24,1200(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1200);
	// lwz r24,1208(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1208);
	// lwz r24,1216(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1216);
	// lwz r24,1224(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1224);
	// lwz r24,1240(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1240);
	// lwz r24,1248(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1248);
	// lwz r24,1256(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1256);
	// lwz r24,1232(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1232);
	// lwz r24,1264(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1264);
	// lwz r24,1272(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1272);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1264(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1264);
	// lwz r24,1264(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1264);
	// lwz r24,1264(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1264);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1272(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1272);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1272(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1272);
	// lwz r24,1272(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1272);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1184(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1184);
	// lwz r24,1216(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1216);
	// lwz r24,1192(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1192);
	// lwz r24,1200(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1200);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1232(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1232);
	// lwz r24,1272(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1272);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1276(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1276);
	// lwz r24,1264(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1264);
	// lwz r24,1264(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1264);
loc_831504A0:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504A8:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504B0:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504B8:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504C0:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504C8:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504D0:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504D8:
	// li r31,9
	ctx.r31.s64 = 9;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504E0:
	// li r31,10
	ctx.r31.s64 = 10;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504E8:
	// li r31,11
	ctx.r31.s64 = 11;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504F0:
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x831504fc
	goto loc_831504FC;
loc_831504F8:
	// li r31,13
	ctx.r31.s64 = 13;
loc_831504FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83150500:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150518"))) PPC_WEAK_FUNC(sub_83150518);
PPC_FUNC_IMPL(__imp__sub_83150518) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x83150538;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x8315053C;
	sub_830FFAA8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 & ctx.r31.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x83150568
	if (!cr6.eq) goto loc_83150568;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r7,r10,18500
	ctx.r7.s64 = ctx.r10.s64 + 18500;
	// b 0x83150570
	goto loc_83150570;
loc_83150568:
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// addi r7,r10,18488
	ctx.r7.s64 = ctx.r10.s64 + 18488;
loc_83150570:
	// lwzx r4,r4,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// bl 0x82d042a8
	ctx.lr = 0x83150578;
	sub_82D042A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150590"))) PPC_WEAK_FUNC(sub_83150590);
PPC_FUNC_IMPL(__imp__sub_83150590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83150598;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x831505A0;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32223
	ctx.r9.s64 = -2111766528;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r9,9328
	ctx.r5.s64 = ctx.r9.s64 + 9328;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,48(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831178a0
	ctx.lr = 0x831505C8;
	sub_831178A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x831505D4;
	sub_8311C148(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lhz r8,808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 808);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-3512
	ctx.r29.s64 = ctx.r11.s64 + -3512;
	// clrlwi r11,r8,25
	ctx.r11.u64 = ctx.r8.u32 & 0x7F;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83150694
	if (cr6.eq) goto loc_83150694;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r3,248
	ctx.r30.s64 = ctx.r3.s64 + 248;
loc_831505FC:
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// bge cr6,0x83150614
	if (!cr6.lt) goto loc_83150614;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
loc_83150614:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8315062c
	if (!cr6.eq) goto loc_8315062C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x83150654
	goto loc_83150654;
loc_8315062C:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8315064c
	if (!cr6.eq) goto loc_8315064C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83150650
	if (cr6.eq) goto loc_83150650;
loc_8315064C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83150650:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83150654:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8315067c
	if (!cr6.eq) goto loc_8315067C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8311bf98
	ctx.lr = 0x83150668;
	sub_8311BF98(ctx, base);
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831506fc
	if (!cr6.eq) goto loc_831506FC;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_8315067C:
	// lhz r11,808(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x831505fc
	if (cr6.lt) goto loc_831505FC;
loc_83150694:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314c958
	ctx.lr = 0x8315069C;
	sub_8314C958(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,60636
	ctx.r10.u64 = ctx.r11.u64 | 60636;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r27,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831507cc
	if (cr6.eq) goto loc_831507CC;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r5,r11,13856
	ctx.r5.u64 = ctx.r11.u64 | 13856;
loc_831506CC:
	// cmplwi cr6,r8,21097
	cr6.compare<uint32_t>(ctx.r8.u32, 21097, xer);
	// add r9,r27,r5
	ctx.r9.u64 = ctx.r27.u64 + ctx.r5.u64;
	// bge cr6,0x831506dc
	if (!cr6.lt) goto loc_831506DC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_831506DC:
	// ld r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 44);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bne cr6,0x83150708
	if (!cr6.eq) goto loc_83150708;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83150730
	goto loc_83150730;
loc_831506FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83150708:
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83150728
	if (!cr6.eq) goto loc_83150728;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8315072c
	if (cr6.eq) goto loc_8315072C;
loc_83150728:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8315072C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83150730:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831507bc
	if (!cr6.eq) goto loc_831507BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83150760
	if (cr6.eq) goto loc_83150760;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83150760
	if (cr6.eq) goto loc_83150760;
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// rlwinm r11,r11,0,23,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// b 0x83150774
	goto loc_83150774;
loc_83150760:
	// lwz r11,184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83150790
	if (cr6.eq) goto loc_83150790;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
loc_83150774:
	// beq cr6,0x83150790
	if (cr6.eq) goto loc_83150790;
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x83150790
	if (cr6.eq) goto loc_83150790;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83150794
	if (!cr6.eq) goto loc_83150794;
loc_83150790:
	// li r10,1
	ctx.r10.s64 = 1;
loc_83150794:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831507bc
	if (cr6.eq) goto loc_831507BC;
	// lwz r11,180(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831507b4
	if (cr6.eq) goto loc_831507B4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831507B4:
	// cmplwi cr6,r31,23
	cr6.compare<uint32_t>(ctx.r31.u32, 23, xer);
	// bge cr6,0x831506fc
	if (!cr6.lt) goto loc_831506FC;
loc_831507BC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,224
	ctx.r7.s64 = ctx.r7.s64 + 224;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x831506cc
	if (cr6.lt) goto loc_831506CC;
loc_831507CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831507D8"))) PPC_WEAK_FUNC(sub_831507D8);
PPC_FUNC_IMPL(__imp__sub_831507D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831507E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-3512
	ctx.r11.s64 = ctx.r11.s64 + -3512;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83150810
	if (!cr6.eq) goto loc_83150810;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83150838
	goto loc_83150838;
loc_83150810:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x83150830
	if (!cr6.eq) goto loc_83150830;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x83150834
	if (cr6.eq) goto loc_83150834;
loc_83150830:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83150834:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83150838:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83150940
	if (!cr6.eq) goto loc_83150940;
	// bl 0x831156e8
	ctx.lr = 0x83150848;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bf98
	ctx.lr = 0x83150858;
	sub_8311BF98(ctx, base);
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// rlwinm r9,r10,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x8315087c
	if (!cr6.eq) goto loc_8315087C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8315087C:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,9328
	ctx.r5.s64 = ctx.r11.s64 + 9328;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831178a0
	ctx.lr = 0x83150898;
	sub_831178A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x831508A4;
	sub_8311C148(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,1296(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1296);
	// bl 0x8311c148
	ctx.lr = 0x831508B8;
	sub_8311C148(ctx, base);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// rlwinm r31,r30,14,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// lwz r11,-3464(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3464);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x831508e4
	if (!cr6.eq) goto loc_831508E4;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831508e8
	if (cr6.eq) goto loc_831508E8;
loc_831508E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831508E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83150940
	if (!cr6.eq) goto loc_83150940;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831235b8
	ctx.lr = 0x83150908;
	sub_831235B8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8315092c
	if (!cr6.eq) goto loc_8315092C;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83150930
	if (cr6.eq) goto loc_83150930;
loc_8315092C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_83150930:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83150944
	if (!cr6.eq) goto loc_83150944;
loc_83150940:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83150944:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315094C"))) PPC_WEAK_FUNC(sub_8315094C);
PPC_FUNC_IMPL(__imp__sub_8315094C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150950"))) PPC_WEAK_FUNC(sub_83150950);
PPC_FUNC_IMPL(__imp__sub_83150950) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x83150968;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-15
	ctx.r11.s64 = ctx.r11.s64 + -15;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x83150a6c
	if (cr6.gt) goto loc_83150A6C;
	// lis r12,-31979
	ctx.r12.s64 = -2095775744;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2448
	ctx.r12.s64 = ctx.r12.s64 + 2448;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83150A14;
	case 1:
		goto loc_83150A1C;
	case 2:
		goto loc_83150A44;
	case 3:
		goto loc_83150A54;
	case 4:
		goto loc_83150A5C;
	case 5:
		goto loc_83150A64;
	case 6:
		goto loc_83150A6C;
	case 7:
		goto loc_83150A6C;
	case 8:
		goto loc_83150A6C;
	case 9:
		goto loc_83150A6C;
	case 10:
		goto loc_83150A6C;
	case 11:
		goto loc_83150A6C;
	case 12:
		goto loc_83150A24;
	case 13:
		goto loc_83150A2C;
	case 14:
		goto loc_83150A34;
	case 15:
		goto loc_83150A3C;
	case 16:
		goto loc_83150A6C;
	case 17:
		goto loc_83150A6C;
	case 18:
		goto loc_83150A6C;
	case 19:
		goto loc_83150A6C;
	case 20:
		goto loc_83150A6C;
	case 21:
		goto loc_83150A4C;
	case 22:
		goto loc_83150A6C;
	case 23:
		goto loc_83150A6C;
	case 24:
		goto loc_83150A70;
	case 25:
		goto loc_83150A70;
	case 26:
		goto loc_83150A70;
	case 27:
		goto loc_83150A6C;
	case 28:
		goto loc_83150A6C;
	case 29:
		goto loc_83150A6C;
	case 30:
		goto loc_83150A6C;
	case 31:
		goto loc_83150A6C;
	case 32:
		goto loc_83150A64;
	default:
		return;
	}
	// lwz r24,2580(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2580);
	// lwz r24,2588(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2588);
	// lwz r24,2628(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2628);
	// lwz r24,2644(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2644);
	// lwz r24,2652(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2652);
	// lwz r24,2660(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2660);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2596(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2596);
	// lwz r24,2604(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2604);
	// lwz r24,2612(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2612);
	// lwz r24,2620(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2620);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2636(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2636);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2672(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2672);
	// lwz r24,2672(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2672);
	// lwz r24,2672(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2672);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2668(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2668);
	// lwz r24,2660(r21)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + 2660);
loc_83150A14:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A1C:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A24:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A2C:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A34:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A3C:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A44:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A4C:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A54:
	// li r31,9
	ctx.r31.s64 = 9;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A5C:
	// li r31,10
	ctx.r31.s64 = 10;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A64:
	// li r31,11
	ctx.r31.s64 = 11;
	// b 0x83150a70
	goto loc_83150A70;
loc_83150A6C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83150A70:
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

__attribute__((alias("__imp__sub_83150A88"))) PPC_WEAK_FUNC(sub_83150A88);
PPC_FUNC_IMPL(__imp__sub_83150A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83150A90;
	__savegprlr_26(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
loc_83150A94:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83150b80
	if (cr6.eq) goto loc_83150B80;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x83150b80
	if (cr0.eq) goto loc_83150B80;
loc_83150AAC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x83150b70
	if (!cr6.lt) goto loc_83150B70;
loc_83150AC0:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,5(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// bge cr6,0x83150b60
	if (!cr6.lt) goto loc_83150B60;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r30,r1,-80
	ctx.r30.s64 = ctx.r1.s64 + -80;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// lwz r6,-80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lbz r31,-76(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + -76);
	// lbz r30,-75(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + -75);
	// lwz r29,-72(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// lwz r28,-68(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// lbz r27,5(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r26,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r26.u8);
	// stb r27,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r27.u8);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r27.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stb r31,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r31.u8);
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
loc_83150B60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x83150ac0
	if (cr6.lt) goto loc_83150AC0;
loc_83150B70:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// blt cr6,0x83150aac
	if (cr6.lt) goto loc_83150AAC;
loc_83150B80:
	// addi r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 + 6;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r8,24
	cr6.compare<uint32_t>(ctx.r8.u32, 24, xer);
	// blt cr6,0x83150a94
	if (cr6.lt) goto loc_83150A94;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83150B94"))) PPC_WEAK_FUNC(sub_83150B94);
PPC_FUNC_IMPL(__imp__sub_83150B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150B98"))) PPC_WEAK_FUNC(sub_83150B98);
PPC_FUNC_IMPL(__imp__sub_83150B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83150BAC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83150bac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83150BAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83150be4
	if (cr6.eq) goto loc_83150BE4;
	// addi r9,r4,188
	ctx.r9.s64 = ctx.r4.s64 + 188;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83150BC8:
	// lwzu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// bdnz 0x83150bc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83150BC8;
loc_83150BE4:
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// beq cr6,0x83150cac
	if (cr6.eq) goto loc_83150CAC;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83150cac
	if (cr6.eq) goto loc_83150CAC;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// beq cr6,0x83150ca4
	if (cr6.eq) goto loc_83150CA4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83150ca4
	if (cr6.eq) goto loc_83150CA4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83150c2c
	if (!cr6.eq) goto loc_83150C2C;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x83150cb0
	goto loc_83150CB0;
loc_83150C2C:
	// lbz r8,212(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 212);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lbz r6,196(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 196);
	// lbz r5,228(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 228);
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r6,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r6.u64);
	// lfd f11,-48(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r5,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r5.u64);
	// lfd f10,-48(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,-7352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7352);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// frsp f12,f9
	ctx.f12.f64 = double(float(ctx.f9.f64));
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// frsp f0,f8
	ctx.f0.f64 = double(float(ctx.f8.f64));
	// fadds f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// fcmpu cr6,f0,f6
	cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x83150c90
	if (!cr6.gt) goto loc_83150C90;
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x83150c90
	if (!cr6.gt) goto loc_83150C90;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x83150cb0
	goto loc_83150CB0;
loc_83150C90:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x83150cac
	if (!cr6.lt) goto loc_83150CAC;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x83150cac
	if (!cr6.lt) goto loc_83150CAC;
loc_83150CA4:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x83150cb0
	goto loc_83150CB0;
loc_83150CAC:
	// li r11,10
	ctx.r11.s64 = 10;
loc_83150CB0:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x83150cc4
	if (cr6.eq) goto loc_83150CC4;
loc_83150CBC:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83150CC4:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x83150ce4
	if (cr6.eq) goto loc_83150CE4;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x83150cdc
	if (cr6.eq) goto loc_83150CDC;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83150cbc
	if (cr6.eq) goto loc_83150CBC;
loc_83150CDC:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_83150CE4:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150CEC"))) PPC_WEAK_FUNC(sub_83150CEC);
PPC_FUNC_IMPL(__imp__sub_83150CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150CF0"))) PPC_WEAK_FUNC(sub_83150CF0);
PPC_FUNC_IMPL(__imp__sub_83150CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83150D04:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83150d04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83150D04;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83150d3c
	if (cr6.eq) goto loc_83150D3C;
	// addi r9,r4,188
	ctx.r9.s64 = ctx.r4.s64 + 188;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83150D20:
	// lwzu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// bdnz 0x83150d20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83150D20;
loc_83150D3C:
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x83150dc0
	if (!cr6.lt) goto loc_83150DC0;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83150d6c
	if (cr6.lt) goto loc_83150D6C;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x83150dc4
	goto loc_83150DC4;
loc_83150D6C:
	// lbz r10,213(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 213);
	// lbz r11,229(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 229);
	// lbz r9,228(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 228);
	// lbz r7,212(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 212);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r5,r9,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r9.s64;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r6,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r6.u64);
	// lfd f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r4,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r4.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f7
	cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x83150dc4
	if (cr6.lt) goto loc_83150DC4;
loc_83150DC0:
	// li r10,2
	ctx.r10.s64 = 2;
loc_83150DC4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x83150df8
	if (cr6.eq) goto loc_83150DF8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x83150de0
	if (cr6.eq) goto loc_83150DE0;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_83150DE0:
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// blr 
	return;
loc_83150DF8:
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150E10"))) PPC_WEAK_FUNC(sub_83150E10);
PPC_FUNC_IMPL(__imp__sub_83150E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83150E24:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83150e24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83150E24;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83150e5c
	if (cr6.eq) goto loc_83150E5C;
	// addi r9,r4,188
	ctx.r9.s64 = ctx.r4.s64 + 188;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83150E40:
	// lwzu r11,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// bdnz 0x83150e40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83150E40;
loc_83150E5C:
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x83150e78
	if (cr6.lt) goto loc_83150E78;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83150f00
	goto loc_83150F00;
loc_83150E78:
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bge cr6,0x83150efc
	if (!cr6.lt) goto loc_83150EFC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x83150eac
	if (!cr6.eq) goto loc_83150EAC;
	// lwz r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x83150eac
	if (!cr6.eq) goto loc_83150EAC;
	// lwz r11,-28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x83150efc
	if (cr6.eq) goto loc_83150EFC;
loc_83150EAC:
	// lbz r9,244(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 244);
	// lbz r8,228(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 228);
	// std r9,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r9.u64);
	// lfd f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// std r8,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r8.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x83150efc
	if (!cr6.gt) goto loc_83150EFC;
	// lbz r10,212(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 212);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r10.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x83150f00
	if (cr6.gt) goto loc_83150F00;
loc_83150EFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83150F00:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x83150f30
	if (cr6.eq) goto loc_83150F30;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x83150f1c
	if (cr6.eq) goto loc_83150F1C;
loc_83150F14:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83150F1C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83150f14
	if (cr6.lt) goto loc_83150F14;
	// bne cr6,0x83150f14
	if (!cr6.eq) goto loc_83150F14;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_83150F30:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x83150f40
	if (cr6.lt) goto loc_83150F40;
	// li r3,16
	ctx.r3.s64 = 16;
	// beqlr cr6
	if (cr6.eq) return;
loc_83150F40:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150F48"))) PPC_WEAK_FUNC(sub_83150F48);
PPC_FUNC_IMPL(__imp__sub_83150F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
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

__attribute__((alias("__imp__sub_83150F60"))) PPC_WEAK_FUNC(sub_83150F60);
PPC_FUNC_IMPL(__imp__sub_83150F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// ble cr6,0x83150f84
	if (!cr6.gt) goto loc_83150F84;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// ble cr6,0x83150f84
	if (!cr6.gt) goto loc_83150F84;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_83150F84:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// li r10,255
	ctx.r10.s64 = 255;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x83150f9c
	if (!cr6.lt) goto loc_83150F9C;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x83150fa0
	goto loc_83150FA0;
loc_83150F9C:
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
loc_83150FA0:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x83150fb8
	if (!cr6.lt) goto loc_83150FB8;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x83150fbc
	goto loc_83150FBC;
loc_83150FB8:
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
loc_83150FBC:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bge cr6,0x83150fd4
	if (!cr6.lt) goto loc_83150FD4;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_83150FD4:
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150FDC"))) PPC_WEAK_FUNC(sub_83150FDC);
PPC_FUNC_IMPL(__imp__sub_83150FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150FE0"))) PPC_WEAK_FUNC(sub_83150FE0);
PPC_FUNC_IMPL(__imp__sub_83150FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83150FE8;
	__savegprlr_26(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x831156e8
	ctx.lr = 0x83151008;
	sub_831156E8(ctx, base);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8312c158
	ctx.lr = 0x8315102C;
	sub_8312C158(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// bl 0x83150f60
	ctx.lr = 0x83151050;
	sub_83150F60(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lbz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x8314f920
	ctx.lr = 0x83151064;
	sub_8314F920(ctx, base);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// bl 0x8314fae8
	ctx.lr = 0x83151080;
	sub_8314FAE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83151088"))) PPC_WEAK_FUNC(sub_83151088);
PPC_FUNC_IMPL(__imp__sub_83151088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83151090;
	__savegprlr_27(ctx, base);
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,-28016
	ctx.r11.s64 = ctx.r11.s64 + -28016;
	// lwz r10,-27856(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27856);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83151170
	if (!cr6.eq) goto loc_83151170;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32223
	ctx.r7.s64 = -2111766528;
	// lis r6,-32223
	ctx.r6.s64 = -2111766528;
	// addi r8,r8,-2720
	ctx.r8.s64 = ctx.r8.s64 + -2720;
	// addi r7,r7,18624
	ctx.r7.s64 = ctx.r7.s64 + 18624;
	// addi r6,r6,18608
	ctx.r6.s64 = ctx.r6.s64 + 18608;
	// lis r28,-32223
	ctx.r28.s64 = -2111766528;
	// lis r5,-32223
	ctx.r5.s64 = -2111766528;
	// lis r31,-32223
	ctx.r31.s64 = -2111766528;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r30,-32223
	ctx.r30.s64 = -2111766528;
	// lvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r29,-32223
	ctx.r29.s64 = -2111766528;
	// lvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r27,-32223
	ctx.r27.s64 = -2111766528;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// addi r8,r28,18592
	ctx.r8.s64 = ctx.r28.s64 + 18592;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,18576
	ctx.r5.s64 = ctx.r5.s64 + 18576;
	// addi r31,r31,18560
	ctx.r31.s64 = ctx.r31.s64 + 18560;
	// addi r30,r30,18544
	ctx.r30.s64 = ctx.r30.s64 + 18544;
	// addi r29,r29,18528
	ctx.r29.s64 = ctx.r29.s64 + 18528;
	// addi r7,r27,18512
	ctx.r7.s64 = ctx.r27.s64 + 18512;
	// lvx128 v55,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,16
	ctx.r6.s64 = 16;
	// lvx128 v59,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v57,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,48
	ctx.r31.s64 = 48;
	// lvx128 v56,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,64
	ctx.r30.s64 = 64;
	// lvx128 v54,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,80
	ctx.r29.s64 = 80;
	// stvx128 v62,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// li r7,112
	ctx.r7.s64 = 112;
	// stvx128 v61,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,128
	ctx.r28.s64 = 128;
	// stvx128 v60,r11,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,144
	ctx.r6.s64 = 144;
	// stvx128 v59,r11,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stvx128 v58,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,-27856(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27856, ctx.r10.u32);
	// stvx128 v56,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r11,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_83151170:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// li r9,10
	ctx.r9.s64 = 10;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// rlwinm r4,r5,4,20,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFF0;
	// lvx128 v63,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83151194"))) PPC_WEAK_FUNC(sub_83151194);
PPC_FUNC_IMPL(__imp__sub_83151194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151198"))) PPC_WEAK_FUNC(sub_83151198);
PPC_FUNC_IMPL(__imp__sub_83151198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831511A0;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r6,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r6
	xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r7,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// and r28,r7,r6
	ctx.r28.u64 = ctx.r7.u64 & ctx.r6.u64;
	// bl 0x831156e8
	ctx.lr = 0x831511D4;
	sub_831156E8(ctx, base);
	// lwz r27,56(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x831156e8
	ctx.lr = 0x831511DC;
	sub_831156E8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,52(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// addi r4,r4,24068
	ctx.r4.s64 = ctx.r4.s64 + 24068;
	// bl 0x831ce980
	ctx.lr = 0x831511F8;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x83151360
	if (!cr6.eq) goto loc_83151360;
	// lbz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83151360
	if (!cr6.eq) goto loc_83151360;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfd f30,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// stfd f30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f30.u64);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// stfd f30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f30.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfd f30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f30.u64);
	// bl 0x8312c158
	ctx.lr = 0x83151244;
	sub_8312C158(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x83150f60
	ctx.lr = 0x83151254;
	sub_83150F60(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// bl 0x8314f920
	ctx.lr = 0x83151268;
	sub_8314F920(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x8315126C;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123968
	ctx.lr = 0x83151280;
	sub_83123968(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83150fe0
	ctx.lr = 0x8315129C;
	sub_83150FE0(ctx, base);
	// lis r23,-32209
	ctx.r23.s64 = -2110849024;
	// lfd f0,26616(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r23.u32 + 26616);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83151394
	if (!cr6.lt) goto loc_83151394;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stb r11,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stb r10,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r10.u8);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stb r10,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r10.u8);
loc_831512EC:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83150fe0
	ctx.lr = 0x83151308;
	sub_83150FE0(ctx, base);
	// lfd f0,26616(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r23.u32 + 26616);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83151394
	if (!cr6.lt) goto loc_83151394;
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8315132c
	if (!cr6.gt) goto loc_8315132C;
	// lbz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
loc_8315132C:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r24,4
	cr6.compare<uint32_t>(ctx.r24.u32, 4, xer);
	// blt cr6,0x831512ec
	if (cr6.lt) goto loc_831512EC;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x83151394
	if (!cr6.gt) goto loc_83151394;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// stb r26,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r26.u8);
	// stb r25,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r25.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83151360:
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8312c158
	ctx.lr = 0x83151384;
	sub_8312C158(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83150f60
	ctx.lr = 0x83151394;
	sub_83150F60(ctx, base);
loc_83151394:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831513A4"))) PPC_WEAK_FUNC(sub_831513A4);
PPC_FUNC_IMPL(__imp__sub_831513A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831513A8"))) PPC_WEAK_FUNC(sub_831513A8);
PPC_FUNC_IMPL(__imp__sub_831513A8) {
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
	// li r31,5
	ctx.r31.s64 = 5;
	// bl 0x831156e8
	ctx.lr = 0x831513C8;
	sub_831156E8(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8315141c
	if (cr6.eq) goto loc_8315141C;
	// bl 0x831156e8
	ctx.lr = 0x831513D8;
	sub_831156E8(ctx, base);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_831513E4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x83151408
	if (cr6.eq) goto loc_83151408;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,19200
	cr6.compare<uint32_t>(ctx.r10.u32, 19200, xer);
	// blt cr6,0x831513e4
	if (cr6.lt) goto loc_831513E4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83151420
	goto loc_83151420;
loc_83151408:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r10,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// b 0x83151420
	goto loc_83151420;
loc_8315141C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83151420:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151438"))) PPC_WEAK_FUNC(sub_83151438);
PPC_FUNC_IMPL(__imp__sub_83151438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83151440;
	__savegprlr_26(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x831cdcf0
	ctx.lr = 0x83151460;
	sub_831CDCF0(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x83151464;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// li r26,13
	ctx.r26.s64 = 13;
	// addi r29,r11,-3512
	ctx.r29.s64 = ctx.r11.s64 + -3512;
loc_83151484:
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123ad8
	ctx.lr = 0x83151490;
	sub_83123AD8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x831514d8
	if (!cr6.lt) goto loc_831514D8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,584(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 584);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x831514d8
	if (!cr6.lt) goto loc_831514D8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r3,584
	ctx.r10.s64 = ctx.r3.s64 + 584;
loc_831514B4:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x831514d0
	if (cr6.eq) goto loc_831514D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// blt cr6,0x831514b4
	if (cr6.lt) goto loc_831514B4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_831514D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// b 0x831514dc
	goto loc_831514DC;
loc_831514D8:
	// li r11,255
	ctx.r11.s64 = 255;
loc_831514DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r4,r1,324
	ctx.r4.s64 = ctx.r1.s64 + 324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123ba8
	ctx.lr = 0x831514F4;
	sub_83123BA8(ctx, base);
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bne cr6,0x83151518
	if (!cr6.eq) goto loc_83151518;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x83151540
	goto loc_83151540;
loc_83151518:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x83151538
	if (!cr6.eq) goto loc_83151538;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8315153c
	if (cr6.eq) goto loc_8315153C;
loc_83151538:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8315153C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83151540:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83151564
	if (!cr6.eq) goto loc_83151564;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83132450
	ctx.lr = 0x8315155C;
	sub_83132450(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_83151564:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x83151484
	if (cr6.lt) goto loc_83151484;
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-20040
	ctx.r6.s64 = ctx.r11.s64 + -20040;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831d88b0
	ctx.lr = 0x8315158C;
	sub_831D88B0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83151598:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831515a8
	if (cr6.eq) goto loc_831515A8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_831515A8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831515b8
	if (cr6.eq) goto loc_831515B8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_831515B8:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831515c8
	if (cr6.eq) goto loc_831515C8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_831515C8:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831515d8
	if (cr6.eq) goto loc_831515D8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_831515D8:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831515e8
	if (cr6.eq) goto loc_831515E8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_831515E8:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831515f8
	if (cr6.eq) goto loc_831515F8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_831515F8:
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x83151598
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83151598;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315160C"))) PPC_WEAK_FUNC(sub_8315160C);
PPC_FUNC_IMPL(__imp__sub_8315160C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

