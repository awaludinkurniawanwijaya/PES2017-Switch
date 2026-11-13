#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83A431C8"))) PPC_WEAK_FUNC(sub_83A431C8);
PPC_FUNC_IMPL(__imp__sub_83A431C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// ori r9,r11,6144
	ctx.r9.u64 = ctx.r11.u64 | 6144;
	// lwbrx r11,0,r9
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// stw r11,-11604(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11604, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A431E0"))) PPC_WEAK_FUNC(sub_83A431E0);
PPC_FUNC_IMPL(__imp__sub_83A431E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A431E8;
	__savegprlr_28(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r11,143
	ctx.r7.s64 = ctx.r11.s64 + 143;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r30,r7,0,0,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x83a43258
	if (cr6.lt) goto loc_83A43258;
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
loc_83A4321C:
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r28,28(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 28);
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// lwzu r7,24(r11)
	ea = 24 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// mullw r6,r6,r29
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r7,r7,r28
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r28.s32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// blt cr6,0x83a4321c
	if (cr6.lt) goto loc_83A4321C;
loc_83A43258:
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bge cr6,0x83a43284
	if (!cr6.lt) goto loc_83A43284;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r31,r5,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
loc_83A43284:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A43294"))) PPC_WEAK_FUNC(sub_83A43294);
PPC_FUNC_IMPL(__imp__sub_83A43294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A43298"))) PPC_WEAK_FUNC(sub_83A43298);
PPC_FUNC_IMPL(__imp__sub_83A43298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A432A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a43348
	if (!cr6.gt) goto loc_83A43348;
	// lis r11,8186
	ctx.r11.s64 = 536477696;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r27,r11,34464
	ctx.r27.u64 = ctx.r11.u64 | 34464;
	// lis r26,-31741
	ctx.r26.s64 = -2080178176;
loc_83A432D0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r31,r30,64
	ctx.r31.s64 = ctx.r30.s64 + 64;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a43334
	if (!cr6.eq) goto loc_83A43334;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83d7635c
	ctx.lr = 0x83A432F0;
	__imp__XMACreateContext(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a43354
	if (cr6.lt) goto loc_83A43354;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83d7633c
	ctx.lr = 0x83A43304;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,-11604(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11604);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r10,r11,6
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r8,r9,27,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FF;
	// sth r9,80(r30)
	PPC_STORE_U16(ctx.r30.u32 + 80, ctx.r9.u16);
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// add r6,r8,r27
	ctx.r6.u64 = ctx.r8.u64 + ctx.r27.u64;
	// slw r5,r25,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r5,0,r4
	PPC_MM_STORE_U32(ctx.r4.u32, __builtin_bswap32(ctx.r5.u32));
	// eieio 
loc_83A43334:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,96
	ctx.r28.s64 = ctx.r28.s64 + 96;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a432d0
	if (cr6.lt) goto loc_83A432D0;
loc_83A43348:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_83A43354:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A43360"))) PPC_WEAK_FUNC(sub_83A43360);
PPC_FUNC_IMPL(__imp__sub_83A43360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A43368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a433c0
	if (!cr6.gt) goto loc_83A433C0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83A43388:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a433ac
	if (cr6.eq) goto loc_83A433AC;
	// bl 0x83d7636c
	ctx.lr = 0x83A433A0;
	__imp__XMAReleaseContext(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r28,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r28.u32);
loc_83A433AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a43388
	if (cr6.lt) goto loc_83A43388;
loc_83A433C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A433D8"))) PPC_WEAK_FUNC(sub_83A433D8);
PPC_FUNC_IMPL(__imp__sub_83A433D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r7,r9,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x83a43408
	if (cr6.eq) goto loc_83A43408;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// b 0x83a43414
	goto loc_83A43414;
loc_83A43408:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r9,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
loc_83A43414:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a43434
	if (cr6.eq) goto loc_83A43434;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x83a43434
	if (!cr6.eq) goto loc_83A43434;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83A43434:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a43450
	if (cr6.eq) goto loc_83A43450;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83A43450:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A43458"))) PPC_WEAK_FUNC(sub_83A43458);
PPC_FUNC_IMPL(__imp__sub_83A43458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x83a43490
	if (cr6.eq) goto loc_83A43490;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r6,r7,0,10,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x300000;
	// addis r5,r6,-48
	ctx.r5.s64 = ctx.r6.s64 + -3145728;
	// addic r4,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83A43490:
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r8,0,10,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x300000;
	// addis r6,r7,-48
	ctx.r6.s64 = ctx.r7.s64 + -3145728;
	// addic r5,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A434B8"))) PPC_WEAK_FUNC(sub_83A434B8);
PPC_FUNC_IMPL(__imp__sub_83A434B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x83a434f0
	if (cr6.eq) goto loc_83A434F0;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r7,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0x3;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_83A434F0:
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0x3;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A43518"))) PPC_WEAK_FUNC(sub_83A43518);
PPC_FUNC_IMPL(__imp__sub_83A43518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,14,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a4353c
	if (cr6.eq) goto loc_83A4353C;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A4353C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a43598
	if (!cr6.gt) goto loc_83A43598;
	// lis r8,8186
	ctx.r8.s64 = 536477696;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r8,34448
	ctx.r7.u64 = ctx.r8.u64 | 34448;
loc_83A4355C:
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r5,80(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 80);
	// rlwinm r4,r5,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r3,r5,27
	ctx.r3.u64 = ctx.r5.u32 & 0x1F;
	// add r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 + ctx.r7.u64;
	// slw r5,r6,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r3.u8 & 0x3F));
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r5,0,r4
	PPC_MM_STORE_U32(ctx.r4.u32, __builtin_bswap32(ctx.r5.u32));
	// eieio 
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x83a4355c
	if (cr6.lt) goto loc_83A4355C;
loc_83A43598:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A435AC"))) PPC_WEAK_FUNC(sub_83A435AC);
PPC_FUNC_IMPL(__imp__sub_83A435AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A435B0"))) PPC_WEAK_FUNC(sub_83A435B0);
PPC_FUNC_IMPL(__imp__sub_83A435B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a436e8
	if (!cr6.eq) goto loc_83A436E8;
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r11,6168
	ctx.r9.u64 = ctx.r11.u64 | 6168;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lwbrx r7,0,r9
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// xori r5,r7,512
	ctx.r5.u64 = ctx.r7.u64 ^ 512;
	// beq cr6,0x83a4361c
	if (cr6.eq) goto loc_83A4361C;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 + ctx.r7.u64;
loc_83A435F8:
	// lhz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x83a436f4
	if (cr6.eq) goto loc_83A436F4;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blt cr6,0x83a435f8
	if (cr6.lt) goto loc_83A435F8;
loc_83A4361C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83a436dc
	if (cr6.eq) goto loc_83A436DC;
	// li r7,32
	ctx.r7.s64 = 32;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,16
	ctx.r10.s64 = 16;
loc_83A43634:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lvx128 v63,r5,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r5,r7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r31,r10,12,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	// stvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r10,12,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a43688
	if (!cr6.eq) goto loc_83A43688;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r3.u32);
loc_83A43688:
	// rlwinm r10,r5,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a436b0
	if (!cr6.eq) goto loc_83A436B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r3,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r3.u32);
loc_83A436B0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a436c4
	if (!cr6.eq) goto loc_83A436C4;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_83A436C4:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// li r10,16
	ctx.r10.s64 = 16;
	// blt cr6,0x83a43634
	if (cr6.lt) goto loc_83A43634;
loc_83A436DC:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_83A436E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83A436F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A43700"))) PPC_WEAK_FUNC(sub_83A43700);
PPC_FUNC_IMPL(__imp__sub_83A43700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a43758
	if (cr6.eq) goto loc_83A43758;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
loc_83A43718:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,68(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// rlwinm r10,r10,18,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1F00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a4374c
	if (cr6.eq) goto loc_83A4374C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A43740:
	// dcbf r11,r7
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x83a43740
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A43740;
loc_83A4374C:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// bne 0x83a43718
	if (!cr0.eq) goto loc_83A43718;
loc_83A43758:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a437b8
	if (cr6.eq) goto loc_83A437B8;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a437b8
	if (cr6.eq) goto loc_83A437B8;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83A43780:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lwz r5,64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// blt cr6,0x83a43780
	if (cr6.lt) goto loc_83A43780;
loc_83A437B8:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a43814
	if (!cr6.gt) goto loc_83A43814;
	// lis r9,8186
	ctx.r9.s64 = 536477696;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r9,34384
	ctx.r7.u64 = ctx.r9.u64 | 34384;
loc_83A437D8:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r5,80(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 80);
	// rlwinm r4,r5,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r3,r5,27
	ctx.r3.u64 = ctx.r5.u32 & 0x1F;
	// add r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 + ctx.r7.u64;
	// slw r5,r6,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r3.u8 & 0x3F));
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r5,0,r4
	PPC_MM_STORE_U32(ctx.r4.u32, __builtin_bswap32(ctx.r5.u32));
	// eieio 
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// blt cr6,0x83a437d8
	if (cr6.lt) goto loc_83A437D8;
loc_83A43814:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,16,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A43828"))) PPC_WEAK_FUNC(sub_83A43828);
PPC_FUNC_IMPL(__imp__sub_83A43828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A43830;
	__savegprlr_29(ctx, base);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r31,r10,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r7,r9,8,19,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F00;
	// lhz r9,82(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r6,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// slw r10,r5,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// beq cr6,0x83a438fc
	if (cr6.eq) goto loc_83A438FC;
	// subfic r8,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r9.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x83a438a4
	if (!cr6.lt) goto loc_83A438A4;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r9,82(r7)
	PPC_STORE_U16(ctx.r7.u32 + 82, ctx.r9.u16);
	// b 0x83a438fc
	goto loc_83A438FC;
loc_83A438A4:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r5,r31,r9
	ctx.r5.u64 = ctx.r31.u64 + ctx.r9.u64;
	// sth r7,82(r5)
	PPC_STORE_U16(ctx.r5.u32 + 82, ctx.r7.u16);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r10,r7,27
	ctx.r10.u64 = ctx.r7.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r4,10,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x1F;
	// subfc r4,r5,r10
	xer.ca = ctx.r10.u32 >= ctx.r5.u32;
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// oris r4,r9,32768
	ctx.r4.u64 = ctx.r9.u64 | 2147483648;
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addi r9,r10,0
	ctx.r9.s64 = ctx.r10.s64 + 0;
	// rlwimi r7,r10,0,27,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1F) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFE0);
	// subfic r5,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r9.s64;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
loc_83A438FC:
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r7,r10,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r30,r10,24
	ctx.r30.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r6,27
	ctx.r9.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r5,r4,5,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x1F;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// ble cr6,0x83a43928
	if (!cr6.gt) goto loc_83A43928;
	// subf r10,r9,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r9.s64;
	// b 0x83a43944
	goto loc_83A43944;
loc_83A43928:
	// blt cr6,0x83a4393c
	if (cr6.lt) goto loc_83A4393C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r5,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a43944
	if (!cr6.eq) goto loc_83A43944;
loc_83A4393C:
	// rlwinm r10,r4,10,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x1F;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_83A43944:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a4398c
	if (cr6.eq) goto loc_83A4398C;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a43958
	if (cr6.lt) goto loc_83A43958;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_83A43958:
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r4,r4,10,27,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0x1F;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// subfc r4,r4,r9
	xer.ca = ctx.r9.u32 >= ctx.r4.u32;
	ctx.r4.s64 = ctx.r9.s64 - ctx.r4.s64;
	// oris r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 2147483648;
	// subfe r4,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// rlwimi r6,r9,0,27,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
loc_83A4398C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a439ac
	if (cr6.eq) goto loc_83A439AC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a439ac
	if (cr6.eq) goto loc_83A439AC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// sth r30,82(r7)
	PPC_STORE_U16(ctx.r7.u32 + 82, ctx.r30.u16);
loc_83A439AC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// srw r3,r8,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r6,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r6.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A439D8"))) PPC_WEAK_FUNC(sub_83A439D8);
PPC_FUNC_IMPL(__imp__sub_83A439D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r9,r10,8,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F00;
	// lhz r10,82(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 82);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r6,5,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1F;
	// clrlwi r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r6,r6,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// beq cr6,0x83a43a3c
	if (cr6.eq) goto loc_83A43A3C;
	// subfic r3,r10,256
	xer.ca = ctx.r10.u32 <= 256;
	ctx.r3.s64 = 256 - ctx.r10.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r7,1
	ctx.r7.s64 = 1;
loc_83A43A3C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a43a50
	if (!cr6.gt) goto loc_83A43A50;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// b 0x83a43a64
	goto loc_83A43A64;
loc_83A43A50:
	// blt cr6,0x83a43a60
	if (cr6.lt) goto loc_83A43A60;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a43a64
	if (!cr6.eq) goto loc_83A43A64;
loc_83A43A60:
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_83A43A64:
	// rlwinm r9,r8,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srw r3,r9,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A43A7C"))) PPC_WEAK_FUNC(sub_83A43A7C);
PPC_FUNC_IMPL(__imp__sub_83A43A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A43A80"))) PPC_WEAK_FUNC(sub_83A43A80);
PPC_FUNC_IMPL(__imp__sub_83A43A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a43ac8
	if (cr6.eq) goto loc_83A43AC8;
loc_83A43AB4:
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// dcbz r10,r7
	memset(base + ((ctx.r10.u32 + ctx.r7.u32) & ~31), 0, 32);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a43ab4
	if (cr6.lt) goto loc_83A43AB4;
loc_83A43AC8:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r5,r10,1
	ctx.r5.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r7,0,5,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7FFF000;
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r4,r9,31,20,0
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0xFFFFFFFF80000FFF) | (ctx.r4.u64 & 0x7FFFF000);
	// rlwinm r10,r10,0,12,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// rlwinm r6,r6,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// clrlwi r9,r7,6
	ctx.r9.u64 = ctx.r7.u32 & 0x3FFFFFF;
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r8,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r8.u32);
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// sth r8,82(r11)
	PPC_STORE_U16(ctx.r11.u32 + 82, ctx.r8.u16);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A43B30"))) PPC_WEAK_FUNC(sub_83A43B30);
PPC_FUNC_IMPL(__imp__sub_83A43B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x83a43b60
	if (cr6.eq) goto loc_83A43B60;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r3,r9,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1F;
	// blr 
	return;
loc_83A43B60:
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r3,r8,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A43B70"))) PPC_WEAK_FUNC(sub_83A43B70);
PPC_FUNC_IMPL(__imp__sub_83A43B70) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r5,r10,0,0,5
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFC000000) | (ctx.r5.u64 & 0xFFFFFFFF03FFFFFF);
	// rlwimi r9,r6,24,5,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0x7000000) | (ctx.r9.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A43BA4"))) PPC_WEAK_FUNC(sub_83A43BA4);
PPC_FUNC_IMPL(__imp__sub_83A43BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A43BA8"))) PPC_WEAK_FUNC(sub_83A43BA8);
PPC_FUNC_IMPL(__imp__sub_83A43BA8) {
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
	// bl 0x83a43360
	ctx.lr = 0x83A43BC0;
	sub_83A43360(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a43be8
	if (!cr6.eq) goto loc_83A43BE8;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lis r5,-22654
	ctx.r5.s64 = -1484652544;
	// addi r3,r11,-11600
	ctx.r3.s64 = ctx.r11.s64 + -11600;
	// ori r5,r5,7
	ctx.r5.u64 = ctx.r5.u64 | 7;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a43fe8
	ctx.lr = 0x83A43BE8;
	sub_83A43FE8(ctx, base);
loc_83A43BE8:
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

__attribute__((alias("__imp__sub_83A43C00"))) PPC_WEAK_FUNC(sub_83A43C00);
PPC_FUNC_IMPL(__imp__sub_83A43C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A43C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r30,r6,21,11,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r28,r10,12,30,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83a43c60
	if (!cr6.eq) goto loc_83A43C60;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83d7633c
	ctx.lr = 0x83A43C44;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// rlwimi r30,r11,0,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// oris r10,r30,16
	ctx.r10.u64 = ctx.r30.u64 | 1048576;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// b 0x83a43c94
	goto loc_83A43C94;
loc_83A43C60:
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a43ccc
	if (!cr6.eq) goto loc_83A43CCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7633c
	ctx.lr = 0x83A43C74;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r30,r11,0,0,19
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r30.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// oris r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 2097152;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
loc_83A43C94:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a43cc0
	if (!cr6.eq) goto loc_83A43CC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(ctx.r11.u32, 32767, xer);
	// beq cr6,0x83a43cc0
	if (cr6.eq) goto loc_83A43CC0;
	// rlwinm r11,r11,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FFF;
	// addic. r11,r11,32
	xer.ca = ctx.r11.u32 > 4294967263;
	ctx.r11.s64 = ctx.r11.s64 + 32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83a43cc0
	if (cr0.eq) goto loc_83A43CC0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r11,r10,0,0,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A43CC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A43CCC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A43CDC"))) PPC_WEAK_FUNC(sub_83A43CDC);
PPC_FUNC_IMPL(__imp__sub_83A43CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A43CE0"))) PPC_WEAK_FUNC(sub_83A43CE0);
PPC_FUNC_IMPL(__imp__sub_83A43CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A43CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mftb r30
	ctx.r30.u64 = PPC_QUERY_TIMEBASE();
	// bl 0x83a435b0
	ctx.lr = 0x83A43CF8;
	sub_83A435B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a43d2c
	if (!cr6.eq) goto loc_83A43D2C;
loc_83A43D00:
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x83d75f2c
	ctx.lr = 0x83A43D0C;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rldicl r10,r3,61,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// cmpld cr6,r29,r10
	cr6.compare<uint64_t>(ctx.r29.u64, ctx.r10.u64, xer);
	// bgt cr6,0x83a43d38
	if (cr6.gt) goto loc_83A43D38;
	// db16cyc 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a435b0
	ctx.lr = 0x83A43D24;
	sub_83A435B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a43d00
	if (cr6.eq) goto loc_83A43D00;
loc_83A43D2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A43D38:
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,6148
	ctx.r10.u64 = ctx.r11.u64 | 6148;
	// stwx r30,0,r10
	PPC_MM_STORE_U32(ctx.r10.u32, ctx.r30.u32);
	// eieio 
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// ori r7,r9,6148
	ctx.r7.u64 = ctx.r9.u64 | 6148;
	// stwx r8,0,r7
	PPC_MM_STORE_U32(ctx.r7.u32, ctx.r8.u32);
	// eieio 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a435b0
	ctx.lr = 0x83A43D68;
	sub_83A435B0(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// ble cr6,0x83a43d90
	if (!cr6.gt) goto loc_83A43D90;
loc_83A43D74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a43a80
	ctx.lr = 0x83A43D80;
	sub_83A43A80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a43d74
	if (cr6.lt) goto loc_83A43D74;
loc_83A43D90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// oris r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 524288;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A43DA8"))) PPC_WEAK_FUNC(sub_83A43DA8);
PPC_FUNC_IMPL(__imp__sub_83A43DA8) {
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
	ctx.lr = 0x83A43DB0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x83a431e0
	ctx.lr = 0x83A43DCC;
	sub_83A431E0(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r23,r11,-11600
	ctx.r23.s64 = ctx.r11.s64 + -11600;
	// bne cr6,0x83a43e10
	if (!cr6.eq) goto loc_83A43E10;
	// lis r5,-22654
	ctx.r5.s64 = -1484652544;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ori r5,r5,7
	ctx.r5.u64 = ctx.r5.u64 | 7;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a43fd8
	ctx.lr = 0x83A43DF4;
	sub_83A43FD8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a43e10
	if (!cr6.eq) goto loc_83A43E10;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A43E10:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r10,r11,143
	ctx.r10.s64 = ctx.r11.s64 + 143;
	// rlwinm r29,r10,0,0,24
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// bl 0x832d2308
	ctx.lr = 0x83A43E38;
	sub_832D2308(ctx, base);
	// addi r9,r26,16
	ctx.r9.s64 = ctx.r26.s64 + 16;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a43e70
	if (cr6.eq) goto loc_83A43E70;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A43E64:
	// dcbf r11,r29
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x83a43e64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A43E64;
loc_83A43E70:
	// oris r11,r24,3
	ctx.r11.u64 = ctx.r24.u64 | 196608;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
	// beq cr6,0x83a43f70
	if (cr6.eq) goto loc_83A43F70;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// ori r25,r11,44100
	ctx.r25.u64 = ctx.r11.u64 | 44100;
loc_83A43E94:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmplwi cr6,r11,24000
	cr6.compare<uint32_t>(ctx.r11.u32, 24000, xer);
	// bgt cr6,0x83a43eb4
	if (cr6.gt) goto loc_83A43EB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83a43ed4
	goto loc_83A43ED4;
loc_83A43EB4:
	// cmplwi cr6,r11,32000
	cr6.compare<uint32_t>(ctx.r11.u32, 32000, xer);
	// bgt cr6,0x83a43ec4
	if (cr6.gt) goto loc_83A43EC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83a43ed4
	goto loc_83A43ED4;
loc_83A43EC4:
	// subfc r11,r11,r25
	xer.ca = ctx.r25.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_83A43ED4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r10,r11,27,3,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x18000000) | (ctx.r10.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwimi r10,r9,29,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 29) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rlwimi r8,r7,20,8,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 20) & 0xF00000) | (ctx.r8.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x83d7633c
	ctx.lr = 0x83A43F08;
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// rlwimi r3,r4,15,5,9
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x7C00000) | (ctx.r3.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83d7633c
	ctx.lr = 0x83A43F50;
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r11,r6,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r28,r28,96
	ctx.r28.s64 = ctx.r28.s64 + 96;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x83a43e94
	if (!cr0.eq) goto loc_83A43E94;
loc_83A43F70:
	// clrlwi r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a43fc8
	if (!cr6.eq) goto loc_83A43FC8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a43298
	ctx.lr = 0x83A43F84;
	sub_83A43298(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83a43fc8
	if (!cr6.lt) goto loc_83A43FC8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a43360
	ctx.lr = 0x83A43F98;
	sub_83A43360(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a43fbc
	if (!cr6.eq) goto loc_83A43FBC;
	// lis r5,-22654
	ctx.r5.s64 = -1484652544;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ori r5,r5,7
	ctx.r5.u64 = ctx.r5.u64 | 7;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83a43fe8
	ctx.lr = 0x83A43FBC;
	sub_83A43FE8(ctx, base);
loc_83A43FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_83A43FC8:
	// stw r26,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A43FD8"))) PPC_WEAK_FUNC(sub_83A43FD8);
PPC_FUNC_IMPL(__imp__sub_83A43FD8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x832d5290
	sub_832D5290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A43FE4"))) PPC_WEAK_FUNC(sub_83A43FE4);
PPC_FUNC_IMPL(__imp__sub_83A43FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A43FE8"))) PPC_WEAK_FUNC(sub_83A43FE8);
PPC_FUNC_IMPL(__imp__sub_83A43FE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x832d53c8
	sub_832D53C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A43FF4"))) PPC_WEAK_FUNC(sub_83A43FF4);
PPC_FUNC_IMPL(__imp__sub_83A43FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A43FF8"))) PPC_WEAK_FUNC(sub_83A43FF8);
PPC_FUNC_IMPL(__imp__sub_83A43FF8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44030
	if (!cr6.eq) goto loc_83A44030;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23268
	ctx.r4.s64 = ctx.r11.s64 + -23268;
	// bl 0x831ea418
	ctx.lr = 0x83A4401C;
	sub_831EA418(ctx, base);
loc_83A4401C:
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
loc_83A44030:
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4401c
	if (cr6.eq) goto loc_83A4401C;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a481a8
	ctx.lr = 0x83A4404C;
	sub_83A481A8(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// bgt cr6,0x83a4401c
	if (cr6.gt) goto loc_83A4401C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a440dc
	if (cr6.eq) goto loc_83A440DC;
	// bdz 0x83a44078
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A44078;
	// bdz 0x83a440f0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A440F0;
	// bdz 0x83a440b4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A440B4;
	// bdz 0x83a440c8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A440C8;
	// bdz 0x83a440a0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83A440A0;
	// b 0x83a4408c
	goto loc_83A4408C;
loc_83A44078:
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
loc_83A4408C:
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
loc_83A440A0:
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
loc_83A440B4:
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
loc_83A440C8:
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
loc_83A440DC:
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
loc_83A440F0:
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
}

__attribute__((alias("__imp__sub_83A44104"))) PPC_WEAK_FUNC(sub_83A44104);
PPC_FUNC_IMPL(__imp__sub_83A44104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A44108"))) PPC_WEAK_FUNC(sub_83A44108);
PPC_FUNC_IMPL(__imp__sub_83A44108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A44110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r11.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r10.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,96(r6)
	PPC_STORE_U32(ctx.r6.u32 + 96, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x83a44190
	if (!cr6.eq) goto loc_83A44190;
	// stw r28,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r28.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r10.u32);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r9.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a44174
	if (!cr6.eq) goto loc_83A44174;
	// stw r28,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r28.u32);
	// b 0x83a44178
	goto loc_83A44178;
loc_83A44174:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_83A44178:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
loc_83A44190:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a441d4
	if (!cr6.eq) goto loc_83A441D4;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a441d0
	if (!cr6.eq) goto loc_83A441D0;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// b 0x83a441d4
	goto loc_83A441D4;
loc_83A441D0:
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_83A441D4:
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a441e8
	if (!cr6.eq) goto loc_83A441E8;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r11,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r11.u32);
loc_83A441E8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a442c8
	if (cr6.eq) goto loc_83A442C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a44274
	if (!cr6.eq) goto loc_83A44274;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a4b1f8
	ctx.lr = 0x83A44208;
	sub_83A4B1F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a44274
	if (cr6.eq) goto loc_83A44274;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r29.u32);
	// stw r7,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a44260
	if (!cr6.eq) goto loc_83A44260;
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// b 0x83a44274
	goto loc_83A44274;
loc_83A44260:
	// addi r10,r3,6
	ctx.r10.s64 = ctx.r3.s64 + 6;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
loc_83A44274:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a442c8
	if (!cr6.eq) goto loc_83A442C8;
	// stw r28,756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 756, ctx.r28.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r9,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r9.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a442bc
	if (!cr6.eq) goto loc_83A442BC;
	// stw r28,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r28.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A442BC:
	// stw r11,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
loc_83A442C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A442D0"))) PPC_WEAK_FUNC(sub_83A442D0);
PPC_FUNC_IMPL(__imp__sub_83A442D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A442D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-1008(r1)
	ea = -1008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a445d8
	if (cr6.eq) goto loc_83A445D8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a445d8
	if (cr6.eq) goto loc_83A445D8;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r27,r11,-10992
	ctx.r27.s64 = ctx.r11.s64 + -10992;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83a494e8
	ctx.lr = 0x83A44310;
	sub_83A494E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a44344
	if (!cr6.eq) goto loc_83A44344;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A44324;
	sub_831EA7A0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a445ec
	if (cr6.eq) goto loc_83A445EC;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A44338;
	sub_831EA7A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A44344:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a49390
	ctx.lr = 0x83A44354;
	sub_83A49390(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a44370
	if (!cr6.gt) goto loc_83A44370;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a44370
	if (!cr6.gt) goto loc_83A44370;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
loc_83A44370:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a4438c
	if (!cr6.gt) goto loc_83A4438C;
	// lwz r10,916(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83a4438c
	if (!cr6.gt) goto loc_83A4438C;
	// stw r11,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r11.u32);
loc_83A4438C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a493a8
	ctx.lr = 0x83A4439C;
	sub_83A493A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a443c8
	if (cr6.eq) goto loc_83A443C8;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a443b8
	if (!cr6.gt) goto loc_83A443B8;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_83A443B8:
	// lwz r10,872(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a443c8
	if (!cr6.gt) goto loc_83A443C8;
	// stw r11,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r11.u32);
loc_83A443C8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a443f4
	if (cr6.eq) goto loc_83A443F4;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a443e4
	if (!cr6.gt) goto loc_83A443E4;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_83A443E4:
	// lwz r10,876(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83a443f4
	if (!cr6.gt) goto loc_83A443F4;
	// stw r11,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r11.u32);
loc_83A443F4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a49370
	ctx.lr = 0x83A44400;
	sub_83A49370(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x83a44410
	if (!cr6.gt) goto loc_83A44410;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
loc_83A44410:
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A4441C;
	sub_831EA7A0(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x83a44458
	if (!cr6.lt) goto loc_83A44458;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83A44458:
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subfe r3,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,156(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r26,164(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r25,168(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// stw r25,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r25.u32);
	// bne cr6,0x83a444d4
	if (!cr6.eq) goto loc_83A444D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x83a44510
	goto loc_83A44510;
loc_83A444D4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// lwzx r3,r6,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r10,r6,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lwzx r9,r6,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_83A44510:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lwz r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// lwz r10,864(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// beq cr6,0x83a445cc
	if (cr6.eq) goto loc_83A445CC;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A44540;
	sub_831EA7A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a4b1f8
	ctx.lr = 0x83A4454C;
	sub_83A4B1F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83a44594
	if (cr6.eq) goto loc_83A44594;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r1,220
	ctx.r8.s64 = ctx.r1.s64 + 220;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,228
	ctx.r6.s64 = ctx.r1.s64 + 228;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r10,r7,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// stw r4,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r4.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_83A44594:
	// lwz r11,868(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// lwz r10,904(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// lwz r9,872(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,876(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// lwz r6,908(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// subfe r5,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r4,916(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// stw r7,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r7.u32);
	// stw r6,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// stw r5,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// stw r4,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r4.u32);
loc_83A445CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A445D8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23252
	ctx.r4.s64 = ctx.r11.s64 + -23252;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A445EC;
	sub_831EA418(ctx, base);
loc_83A445EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A445F8"))) PPC_WEAK_FUNC(sub_83A445F8);
PPC_FUNC_IMPL(__imp__sub_83A445F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44614
	if (!cr6.eq) goto loc_83A44614;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23172
	ctx.r4.s64 = ctx.r11.s64 + -23172;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A44614:
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// beq cr6,0x83a44638
	if (cr6.eq) goto loc_83A44638;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83a44638
	if (cr6.eq) goto loc_83A44638;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-23236
	ctx.r4.s64 = ctx.r11.s64 + -23236;
	// b 0x831ea3f0
	sub_831EA3F0(ctx, base);
	return;
loc_83A44638:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4468c
	if (cr6.eq) goto loc_83A4468C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83a4468c
	if (cr6.eq) goto loc_83A4468C;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x83a4468c
	if (cr6.eq) goto loc_83A4468C;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// beq cr6,0x83a44680
	if (cr6.eq) goto loc_83A44680;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x83a44678
	if (cr6.eq) goto loc_83A44678;
	// addi r10,r7,-3
	ctx.r10.s64 = ctx.r7.s64 + -3;
	// li r9,3
	ctx.r9.s64 = 3;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// b 0x83a44684
	goto loc_83A44684;
loc_83A44678:
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x83a44684
	goto loc_83A44684;
loc_83A44680:
	// li r7,1
	ctx.r7.s64 = 1;
loc_83A44684:
	// stw r6,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// b 0x83a48108
	sub_83A48108(ctx, base);
	return;
loc_83A4468C:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83a48108
	sub_83A48108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A446A8"))) PPC_WEAK_FUNC(sub_83A446A8);
PPC_FUNC_IMPL(__imp__sub_83A446A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A446B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a446dc
	if (!cr6.eq) goto loc_83A446DC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23156
	ctx.r4.s64 = ctx.r11.s64 + -23156;
	// bl 0x831ea418
	ctx.lr = 0x83A446D4;
	sub_831EA418(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A446DC:
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x83a4cb58
	ctx.lr = 0x83A446E8;
	sub_83A4CB58(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a4aa18
	ctx.lr = 0x83A446FC;
	sub_83A4AA18(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4470C"))) PPC_WEAK_FUNC(sub_83A4470C);
PPC_FUNC_IMPL(__imp__sub_83A4470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A44710"))) PPC_WEAK_FUNC(sub_83A44710);
PPC_FUNC_IMPL(__imp__sub_83A44710) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44750
	if (!cr6.eq) goto loc_83A44750;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23140
	ctx.r4.s64 = ctx.r11.s64 + -23140;
	// bl 0x831ea418
	ctx.lr = 0x83A4473C;
	sub_831EA418(ctx, base);
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
loc_83A44750:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rotlwi r5,r5,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r6,r11,-10992
	ctx.r6.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a48f08
	ctx.lr = 0x83A44764;
	sub_83A48F08(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83A44780"))) PPC_WEAK_FUNC(sub_83A44780);
PPC_FUNC_IMPL(__imp__sub_83A44780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83A44788;
	__savegprlr_14(ctx, base);
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a44a58
	if (cr6.eq) goto loc_83A44A58;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a44a58
	if (cr6.eq) goto loc_83A44A58;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a494e8
	ctx.lr = 0x83A447B4;
	sub_83A494E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a44a6c
	if (!cr6.eq) goto loc_83A44A6C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,896(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r5,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r5.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x83a44880
	if (cr6.eq) goto loc_83A44880;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
loc_83A44800:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r29,32(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r28,36(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r27,40(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r26,44(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r25,52(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r24,60(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r23,64(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwzu r8,68(r11)
	ea = 68 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r30.u32);
	// stw r29,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r29.u32);
	// stw r28,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r28.u32);
	// stw r27,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r27.u32);
	// stw r26,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r26.u32);
	// stw r25,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r25.u32);
	// stw r24,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r24.u32);
	// stw r23,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r23.u32);
	// stwu r8,56(r10)
	ea = 56 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x83a44800
	if (cr6.lt) goto loc_83A44800;
loc_83A44880:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// subf r3,r31,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r10,r31,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r30,r31,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r29,r31,r6
	ctx.r29.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r28,r31,r5
	ctx.r28.s64 = ctx.r5.s64 - ctx.r31.s64;
loc_83A448BC:
	// lwzx r9,r3,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwzx r5,r28,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bdnz 0x83a448bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A448BC;
	// lwz r11,836(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,824(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// lwz r9,832(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// stw r9,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r9.u32);
	// beq cr6,0x83a44a44
	if (cr6.eq) goto loc_83A44A44;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// addi r25,r1,148
	ctx.r25.s64 = ctx.r1.s64 + 148;
	// addi r24,r1,152
	ctx.r24.s64 = ctx.r1.s64 + 152;
	// addi r11,r31,736
	ctx.r11.s64 = ctx.r31.s64 + 736;
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r31.s64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r31.s64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r26,r31,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r31.s64;
	// subf r25,r31,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r31.s64;
	// subf r24,r31,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r31.s64;
	// li r23,7
	ctx.r23.s64 = 7;
loc_83A44960:
	// lwzx r22,r11,r30
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r21,r11,r29
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwzx r20,r11,r28
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r19,r11,r3
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r18,r11,r9
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r17,r11,r8
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r16,r11,r7
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r15,r11,r6
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r14,r11,r5
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// stw r22,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r22.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
	// stw r19,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// stw r18,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r18.u32);
	// stw r17,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r17.u32);
	// stw r16,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r16.u32);
	// stw r15,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r15.u32);
	// stw r14,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r14.u32);
	// bgt cr6,0x83a44a10
	if (cr6.gt) goto loc_83A44A10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83a449e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A449E0;
	// bdzf 4*cr6+eq,0x83a449e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A449E8;
	// bdzf 4*cr6+eq,0x83a449f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A449F0;
	// bdzf 4*cr6+eq,0x83a449f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A449F8;
	// bdzf 4*cr6+eq,0x83a44a00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83A44A00;
	// bne cr6,0x83a44a08
	if (!cr6.eq) goto loc_83A44A08;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x83a44a14
	goto loc_83A44A14;
loc_83A449E0:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x83a44a14
	goto loc_83A44A14;
loc_83A449E8:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x83a44a14
	goto loc_83A44A14;
loc_83A449F0:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x83a44a14
	goto loc_83A44A14;
loc_83A449F8:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x83a44a14
	goto loc_83A44A14;
loc_83A44A00:
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x83a44a14
	goto loc_83A44A14;
loc_83A44A08:
	// stw r23,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r23.u32);
	// b 0x83a44a18
	goto loc_83A44A18;
loc_83A44A10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83A44A14:
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_83A44A18:
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwzx r22,r11,r25
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r21,r11,r24
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r22,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r22.u32);
	// stw r21,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r21.u32);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// lwz r10,728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a44960
	if (cr6.lt) goto loc_83A44960;
loc_83A44A44:
	// lwz r11,892(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83A44A58:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23124
	ctx.r4.s64 = ctx.r11.s64 + -23124;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A44A6C;
	sub_831EA418(ctx, base);
loc_83A44A6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A44A78"))) PPC_WEAK_FUNC(sub_83A44A78);
PPC_FUNC_IMPL(__imp__sub_83A44A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44a90
	if (!cr6.eq) goto loc_83A44A90;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23108
	ctx.r4.s64 = ctx.r11.s64 + -23108;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A44A90:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// b 0x83a4a8f8
	sub_83A4A8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A44AA0"))) PPC_WEAK_FUNC(sub_83A44AA0);
PPC_FUNC_IMPL(__imp__sub_83A44AA0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44ae0
	if (!cr6.eq) goto loc_83A44AE0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23092
	ctx.r4.s64 = ctx.r11.s64 + -23092;
	// bl 0x831ea418
	ctx.lr = 0x83A44AC8;
	sub_831EA418(ctx, base);
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
loc_83A44AE0:
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x83a46df0
	ctx.lr = 0x83A44AE8;
	sub_83A46DF0(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a48e70
	ctx.lr = 0x83A44AF8;
	sub_83A48E70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a46e30
	ctx.lr = 0x83A44B00;
	sub_83A46E30(ctx, base);
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

__attribute__((alias("__imp__sub_83A44B18"))) PPC_WEAK_FUNC(sub_83A44B18);
PPC_FUNC_IMPL(__imp__sub_83A44B18) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44b58
	if (!cr6.eq) goto loc_83A44B58;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23076
	ctx.r4.s64 = ctx.r11.s64 + -23076;
	// bl 0x831ea418
	ctx.lr = 0x83A44B44;
	sub_831EA418(ctx, base);
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
loc_83A44B58:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a490f8
	ctx.lr = 0x83A44B68;
	sub_83A490F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
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
}

__attribute__((alias("__imp__sub_83A44B8C"))) PPC_WEAK_FUNC(sub_83A44B8C);
PPC_FUNC_IMPL(__imp__sub_83A44B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A44B90"))) PPC_WEAK_FUNC(sub_83A44B90);
PPC_FUNC_IMPL(__imp__sub_83A44B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44ba8
	if (!cr6.eq) goto loc_83A44BA8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23060
	ctx.r4.s64 = ctx.r11.s64 + -23060;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A44BA8:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// b 0x83a493f0
	sub_83A493F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A44BB8"))) PPC_WEAK_FUNC(sub_83A44BB8);
PPC_FUNC_IMPL(__imp__sub_83A44BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44bd0
	if (!cr6.eq) goto loc_83A44BD0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23044
	ctx.r4.s64 = ctx.r11.s64 + -23044;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A44BD0:
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83A44BE4"))) PPC_WEAK_FUNC(sub_83A44BE4);
PPC_FUNC_IMPL(__imp__sub_83A44BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A44BE8"))) PPC_WEAK_FUNC(sub_83A44BE8);
PPC_FUNC_IMPL(__imp__sub_83A44BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A44BF0;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a44c5c
	if (cr6.eq) goto loc_83A44C5C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83a44c5c
	if (cr6.eq) goto loc_83A44C5C;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r28,60(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A44C28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A44C44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a47830
	ctx.lr = 0x83A44C54;
	sub_83A47830(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A44C5C:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23028
	ctx.r4.s64 = ctx.r11.s64 + -23028;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A44C70;
	sub_831EA418(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A44C78"))) PPC_WEAK_FUNC(sub_83A44C78);
PPC_FUNC_IMPL(__imp__sub_83A44C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// ble cr6,0x83a44ccc
	if (!cr6.gt) goto loc_83A44CCC;
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// addi r11,r4,68
	ctx.r11.s64 = ctx.r4.s64 + 68;
loc_83A44C94:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r5,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// lwzu r8,20(r11)
	ea = 20 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a44c94
	if (cr6.lt) goto loc_83A44C94;
loc_83A44CCC:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// ld r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r8.u64);
	// ld r7,48(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r7,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r7.u64);
	// lwz r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// lwz r5,68(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r5,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,164(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r9,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r9.u32);
	// lwz r8,168(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// std r10,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r10.u64);
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r7,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r7.u32);
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r6,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r6.u32);
	// lwz r5,172(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// stw r5,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A44D68"))) PPC_WEAK_FUNC(sub_83A44D68);
PPC_FUNC_IMPL(__imp__sub_83A44D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a44da4
	if (!cr6.eq) goto loc_83A44DA4;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-23012
	ctx.r4.s64 = ctx.r11.s64 + -23012;
	// bl 0x831ea418
	ctx.lr = 0x83A44D90;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83A44DA4:
	// lis r9,-31741
	ctx.r9.s64 = -2080178176;
	// ld r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,-10992
	ctx.r5.s64 = ctx.r9.s64 + -10992;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x83a53fb0
	ctx.lr = 0x83A44DE8;
	sub_83A53FB0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A44DF8"))) PPC_WEAK_FUNC(sub_83A44DF8);
PPC_FUNC_IMPL(__imp__sub_83A44DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,72(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,64(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r8,152(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 152);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// lwz r7,20(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r8.u32);
	// lwz r7,24(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// lwz r11,28(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r10,32(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r11,156(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 156);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,172(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 172);
	// stw r8,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r8.u32);
	// lwz r7,176(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 176);
	// stw r7,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r7.u32);
	// lwz r11,68(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// bne cr6,0x83a44e94
	if (!cr6.eq) goto loc_83A44E94;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x83a44ea0
	goto loc_83A44EA0;
loc_83A44E94:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
loc_83A44EA0:
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,164(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 164);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lwz r8,168(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 168);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// ble cr6,0x83a44f00
	if (!cr6.gt) goto loc_83A44F00;
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// addi r11,r6,56
	ctx.r11.s64 = ctx.r6.s64 + 56;
loc_83A44EC8:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r7,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r7.u32);
	// lwzu r8,20(r11)
	ea = 20 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,20(r10)
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,80(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83a44ec8
	if (cr6.lt) goto loc_83A44EC8;
loc_83A44F00:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a44f54
	if (cr6.eq) goto loc_83A44F54;
	// lwz r8,172(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 172);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r8.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lwzx r7,r9,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// stw r7,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r7.u32);
	// lwz r6,84(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r6,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
loc_83A44F54:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r8,104(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// lwz r7,112(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r7,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r7.u32);
	// lwz r6,108(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r6,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// stw r9,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r9.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r8,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A44FD0"))) PPC_WEAK_FUNC(sub_83A44FD0);
PPC_FUNC_IMPL(__imp__sub_83A44FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A44FD8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r29,r11,-10992
	ctx.r29.s64 = ctx.r11.s64 + -10992;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a49230
	ctx.lr = 0x83A45000;
	sub_83A49230(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a450b0
	if (cr6.eq) goto loc_83A450B0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a49400
	ctx.lr = 0x83A4501C;
	sub_83A49400(ctx, base);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x831ce710
	ctx.lr = 0x83A45024;
	sub_831CE710(ctx, base);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A45030;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// ld r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// lfs f31,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmuls f30,f13,f31
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A4504C;
	sub_831CE710(ctx, base);
	// ld r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A45058;
	sub_831CE710(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fdivs f6,f29,f12
	ctx.f6.f64 = double(float(ctx.f29.f64 / ctx.f12.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f29,f6,f31
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fdivs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// fdivs f31,f31,f4
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f4.f64));
	// bl 0x83a46dc0
	ctx.lr = 0x83A45098;
	sub_83A46DC0(ctx, base);
	// fmuls f3,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fsubs f2,f30,f29
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fcmpu cr6,f2,f3
	cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// ble cr6,0x83a450b0
	if (!cr6.gt) goto loc_83A450B0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83a4d530
	ctx.lr = 0x83A450B0;
	sub_83A4D530(ctx, base);
loc_83A450B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A450C4"))) PPC_WEAK_FUNC(sub_83A450C4);
PPC_FUNC_IMPL(__imp__sub_83A450C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A450C8"))) PPC_WEAK_FUNC(sub_83A450C8);
PPC_FUNC_IMPL(__imp__sub_83A450C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a450e0
	if (!cr6.eq) goto loc_83A450E0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22980
	ctx.r4.s64 = ctx.r11.s64 + -22980;
	// b 0x831ea418
	sub_831EA418(ctx, base);
	return;
loc_83A450E0:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// b 0x83a49308
	sub_83A49308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A450F0"))) PPC_WEAK_FUNC(sub_83A450F0);
PPC_FUNC_IMPL(__imp__sub_83A450F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A450F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a45110
	if (!cr6.eq) goto loc_83A45110;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_83A45110:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x83a45124
	if (cr6.eq) goto loc_83A45124;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83A45124:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a4c498
	ctx.lr = 0x83A45134;
	sub_83A4C498(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83a47c68
	ctx.lr = 0x83A4513C;
	sub_83A47C68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83a47960
	ctx.lr = 0x83A45144;
	sub_83A47960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a47960
	ctx.lr = 0x83A4514C;
	sub_83A47960(ctx, base);
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r10,-16896
	ctx.r3.s64 = ctx.r10.s64 + -16896;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a77cb8
	ctx.lr = 0x83A45160;
	sub_83A77CB8(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,972
	ctx.r3.s64 = ctx.r11.s64 + 972;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4517C"))) PPC_WEAK_FUNC(sub_83A4517C);
PPC_FUNC_IMPL(__imp__sub_83A4517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A45180"))) PPC_WEAK_FUNC(sub_83A45180);
PPC_FUNC_IMPL(__imp__sub_83A45180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A45188;
	__savegprlr_27(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,820
	ctx.r4.s64 = 820;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r28,56(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r27,76(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x831ea7a0
	ctx.lr = 0x83A451B0;
	sub_831EA7A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a44108
	ctx.lr = 0x83A451C4;
	sub_83A44108(ctx, base);
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-10992
	ctx.r5.s64 = ctx.r10.s64 + -10992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a4b330
	ctx.lr = 0x83A451D8;
	sub_83A4B330(ctx, base);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x83a45208
	if (!cr6.eq) goto loc_83A45208;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A45204;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_83A45208:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a45244
	if (cr6.eq) goto loc_83A45244;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a45244
	if (!cr6.eq) goto loc_83A45244;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A45238;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A45244:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A45250"))) PPC_WEAK_FUNC(sub_83A45250);
PPC_FUNC_IMPL(__imp__sub_83A45250) {
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
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a4530c
	if (cr6.eq) goto loc_83A4530C;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a45288
	if (!cr6.eq) goto loc_83A45288;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// b 0x83a4528c
	goto loc_83A4528C;
loc_83A45288:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
loc_83A4528C:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a452c0
	if (!cr6.eq) goto loc_83A452C0;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a45300
	if (!cr6.eq) goto loc_83A45300;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22960
	ctx.r4.s64 = ctx.r11.s64 + -22960;
	// bl 0x831ea3f0
	ctx.lr = 0x83A452B4;
	sub_831EA3F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// b 0x83a4530c
	goto loc_83A4530C;
loc_83A452C0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a45300
	if (!cr6.eq) goto loc_83A45300;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a477e8
	ctx.lr = 0x83A452D0;
	sub_83A477E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a452e0
	if (cr6.eq) goto loc_83A452E0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a47790
	ctx.lr = 0x83A452E0;
	sub_83A47790(ctx, base);
loc_83A452E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a47728
	ctx.lr = 0x83A452EC;
	sub_83A47728(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a477e8
	ctx.lr = 0x83A452F4;
	sub_83A477E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a45300
	if (cr6.eq) goto loc_83A45300;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_83A45300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a46a30
	ctx.lr = 0x83A45308;
	sub_83A46A30(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_83A4530C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A45324"))) PPC_WEAK_FUNC(sub_83A45324);
PPC_FUNC_IMPL(__imp__sub_83A45324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A45328"))) PPC_WEAK_FUNC(sub_83A45328);
PPC_FUNC_IMPL(__imp__sub_83A45328) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4535c
	if (!cr6.eq) goto loc_83A4535C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22876
	ctx.r4.s64 = ctx.r11.s64 + -22876;
	// bl 0x831ea418
	ctx.lr = 0x83A45358;
	sub_831EA418(ctx, base);
	// b 0x83a453b0
	goto loc_83A453B0;
loc_83A4535C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83a43ff8
	ctx.lr = 0x83A45368;
	sub_83A43FF8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83a45378
	if (cr6.eq) goto loc_83A45378;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a45390
	if (!cr6.eq) goto loc_83A45390;
loc_83A45378:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a45390
	if (!cr6.eq) goto loc_83A45390;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x83a453b0
	goto loc_83A453B0;
loc_83A45390:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4ba58
	ctx.lr = 0x83A4539C;
	sub_83A4BA58(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a453b0
	if (!cr6.eq) goto loc_83A453B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45250
	ctx.lr = 0x83A453B0;
	sub_83A45250(ctx, base);
loc_83A453B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A453C8"))) PPC_WEAK_FUNC(sub_83A453C8);
PPC_FUNC_IMPL(__imp__sub_83A453C8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a45400
	if (!cr6.eq) goto loc_83A45400;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22860
	ctx.r4.s64 = ctx.r11.s64 + -22860;
	// bl 0x831ea418
	ctx.lr = 0x83A453FC;
	sub_831EA418(ctx, base);
	// b 0x83a45424
	goto loc_83A45424;
loc_83A45400:
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// bl 0x83a46de0
	ctx.lr = 0x83A45408;
	sub_83A46DE0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a45424
	if (cr6.eq) goto loc_83A45424;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a49188
	ctx.lr = 0x83A45424;
	sub_83A49188(ctx, base);
loc_83A45424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4543C"))) PPC_WEAK_FUNC(sub_83A4543C);
PPC_FUNC_IMPL(__imp__sub_83A4543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A45440"))) PPC_WEAK_FUNC(sub_83A45440);
PPC_FUNC_IMPL(__imp__sub_83A45440) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a45474
	if (!cr6.eq) goto loc_83A45474;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22844
	ctx.r4.s64 = ctx.r11.s64 + -22844;
	// bl 0x831ea418
	ctx.lr = 0x83A45470;
	sub_831EA418(ctx, base);
	// b 0x83a454d0
	goto loc_83A454D0;
loc_83A45474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83a43ff8
	ctx.lr = 0x83A45480;
	sub_83A43FF8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83a45490
	if (cr6.eq) goto loc_83A45490;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a454a8
	if (!cr6.eq) goto loc_83A454A8;
loc_83A45490:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a454a8
	if (!cr6.eq) goto loc_83A454A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x83a454d0
	goto loc_83A454D0;
loc_83A454A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4baa8
	ctx.lr = 0x83A454B4;
	sub_83A4BAA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a454c8
	if (!cr6.eq) goto loc_83A454C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45250
	ctx.lr = 0x83A454C8;
	sub_83A45250(ctx, base);
loc_83A454C8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_83A454D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A454E8"))) PPC_WEAK_FUNC(sub_83A454E8);
PPC_FUNC_IMPL(__imp__sub_83A454E8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4551c
	if (!cr6.eq) goto loc_83A4551C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22828
	ctx.r4.s64 = ctx.r11.s64 + -22828;
	// bl 0x831ea418
	ctx.lr = 0x83A45518;
	sub_831EA418(ctx, base);
	// b 0x83a45578
	goto loc_83A45578;
loc_83A4551C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83a43ff8
	ctx.lr = 0x83A45528;
	sub_83A43FF8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83a45538
	if (cr6.eq) goto loc_83A45538;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a45550
	if (!cr6.eq) goto loc_83A45550;
loc_83A45538:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a45550
	if (!cr6.eq) goto loc_83A45550;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// b 0x83a45578
	goto loc_83A45578;
loc_83A45550:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a4bb18
	ctx.lr = 0x83A4555C;
	sub_83A4BB18(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a45570
	if (!cr6.eq) goto loc_83A45570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45250
	ctx.lr = 0x83A45570;
	sub_83A45250(ctx, base);
loc_83A45570:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_83A45578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A45590"))) PPC_WEAK_FUNC(sub_83A45590);
PPC_FUNC_IMPL(__imp__sub_83A45590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A45598;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a45654
	if (cr6.eq) goto loc_83A45654;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a45654
	if (cr6.eq) goto loc_83A45654;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r4,184
	ctx.r4.s64 = 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A455C0;
	sub_831EA7A0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,-10992
	ctx.r29.s64 = ctx.r11.s64 + -10992;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a481a8
	ctx.lr = 0x83A455DC;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x83a455f8
	if (cr6.eq) goto loc_83A455F8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A455F8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a53db8
	ctx.lr = 0x83A45608;
	sub_83A53DB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a45634
	if (!cr6.eq) goto loc_83A45634;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x83a45624
	if (cr6.eq) goto loc_83A45624;
	// li r11,1
	ctx.r11.s64 = 1;
loc_83A45624:
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A45634:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a44c78
	ctx.lr = 0x83A45640;
	sub_83A44C78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A45654:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22812
	ctx.r4.s64 = ctx.r11.s64 + -22812;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A45668;
	sub_831EA418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A45674"))) PPC_WEAK_FUNC(sub_83A45674);
PPC_FUNC_IMPL(__imp__sub_83A45674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A45678"))) PPC_WEAK_FUNC(sub_83A45678);
PPC_FUNC_IMPL(__imp__sub_83A45678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A45680;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x831cdcf0
	ctx.lr = 0x83A456A8;
	sub_831CDCF0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83A456BC;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a456e0
	if (!cr6.eq) goto loc_83A456E0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22796
	ctx.r4.s64 = ctx.r11.s64 + -22796;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A456D8;
	sub_831EA418(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A456E0:
	// li r6,48
	ctx.r6.s64 = 48;
	// lwz r31,48(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831ea778
	ctx.lr = 0x83A456F8;
	sub_831EA778(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83a44df8
	ctx.lr = 0x83A4570C;
	sub_83A44DF8(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-10992
	ctx.r7.s64 = ctx.r11.s64 + -10992;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a54020
	ctx.lr = 0x83A45728;
	sub_83A54020(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A45730"))) PPC_WEAK_FUNC(sub_83A45730);
PPC_FUNC_IMPL(__imp__sub_83A45730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A45738;
	__savegprlr_24(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4575C;
	sub_831CDCF0(ctx, base);
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x831cdcf0
	ctx.lr = 0x83A45770;
	sub_831CDCF0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83A45784;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a457a8
	if (!cr6.eq) goto loc_83A457A8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22780
	ctx.r4.s64 = ctx.r11.s64 + -22780;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A457A0;
	sub_831EA418(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A457A8:
	// lwz r29,304(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r26,48(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// addi r25,r11,-10992
	ctx.r25.s64 = ctx.r11.s64 + -10992;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a457e4
	if (cr6.eq) goto loc_83A457E4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
loc_83A457C8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// beq cr6,0x83a4585c
	if (cr6.eq) goto loc_83A4585C;
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83a457c8
	if (!cr6.eq) goto loc_83A457C8;
loc_83A457E4:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a53db8
	ctx.lr = 0x83A457F4;
	sub_83A53DB8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a45854
	if (cr6.eq) goto loc_83A45854;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x83a45854
	if (!cr6.eq) goto loc_83A45854;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a53e60
	ctx.lr = 0x83A45828;
	sub_83A53E60(ctx, base);
loc_83A45828:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a53ec8
	ctx.lr = 0x83A4583C;
	sub_83A53EC8(ctx, base);
	// bl 0x83a46db0
	ctx.lr = 0x83A45840;
	sub_83A46DB0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a45854
	if (!cr6.eq) goto loc_83A45854;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a44fd0
	ctx.lr = 0x83A45854;
	sub_83A44FD0(ctx, base);
loc_83A45854:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A4585C:
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// li r5,176
	ctx.r5.s64 = 176;
	// bl 0x831ce980
	ctx.lr = 0x83A4586C;
	sub_831CE980(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A4587C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83a4587c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4587C;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bne cr6,0x83a458b8
	if (!cr6.eq) goto loc_83A458B8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r11.u32);
	// bne cr6,0x83a4590c
	if (!cr6.eq) goto loc_83A4590C;
	// stw r27,308(r28)
	PPC_STORE_U32(ctx.r28.u32 + 308, ctx.r27.u32);
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 312, ctx.r11.u32);
	// b 0x83a45828
	goto loc_83A45828;
loc_83A458B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a4590c
	if (cr6.eq) goto loc_83A4590C;
loc_83A458C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83a458f0
	if (cr6.eq) goto loc_83A458F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a458c4
	if (!cr6.eq) goto loc_83A458C4;
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 312, ctx.r11.u32);
	// b 0x83a45828
	goto loc_83A45828;
loc_83A458F0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,308(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// bne cr6,0x83a4590c
	if (!cr6.eq) goto loc_83A4590C;
	// stw r11,308(r28)
	PPC_STORE_U32(ctx.r28.u32 + 308, ctx.r11.u32);
loc_83A4590C:
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// lwz r11,312(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 312, ctx.r11.u32);
	// b 0x83a45828
	goto loc_83A45828;
}

__attribute__((alias("__imp__sub_83A45920"))) PPC_WEAK_FUNC(sub_83A45920);
PPC_FUNC_IMPL(__imp__sub_83A45920) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,180
	ctx.r5.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4594C;
	sub_831CDCF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a4597c
	if (!cr6.eq) goto loc_83A4597C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A45968;
	sub_831EA418(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A4597C:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a459ac
	if (!cr6.gt) goto loc_83A459AC;
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r8,132(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// bl 0x83a45730
	ctx.lr = 0x83A459AC;
	sub_83A45730(ctx, base);
loc_83A459AC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A459C0"))) PPC_WEAK_FUNC(sub_83A459C0);
PPC_FUNC_IMPL(__imp__sub_83A459C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A459C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a459f0
	if (!cr6.eq) goto loc_83A459F0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22764
	ctx.r4.s64 = ctx.r11.s64 + -22764;
	// bl 0x831ea418
	ctx.lr = 0x83A459E8;
	sub_831EA418(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A459F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a46970
	ctx.lr = 0x83A459F8;
	sub_83A46970(ctx, base);
loc_83A459F8:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a45a10
	if (!cr6.gt) goto loc_83A45A10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45920
	ctx.lr = 0x83A45A0C;
	sub_83A45920(ctx, base);
	// b 0x83a459f8
	goto loc_83A459F8;
loc_83A45A10:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a45a40
	if (cr6.eq) goto loc_83A45A40;
	// bl 0x83a477e8
	ctx.lr = 0x83A45A20;
	sub_83A477E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a45a30
	if (cr6.eq) goto loc_83A45A30;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a47790
	ctx.lr = 0x83A45A30;
	sub_83A47790(ctx, base);
loc_83A45A30:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,-16896
	ctx.r3.s64 = ctx.r11.s64 + -16896;
	// bl 0x83a77dc8
	ctx.lr = 0x83A45A40;
	sub_83A77DC8(ctx, base);
loc_83A45A40:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,52(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r27,76(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r26,60(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// beq cr6,0x83a45a70
	if (cr6.eq) goto loc_83A45A70;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a4bc58
	ctx.lr = 0x83A45A6C;
	sub_83A4BC58(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_83A45A70:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a45a90
	if (cr6.eq) goto loc_83A45A90;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A45A8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_83A45A90:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a45ab0
	if (cr6.eq) goto loc_83A45AB0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A45AAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_83A45AB0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83a45ad0
	if (cr6.eq) goto loc_83A45AD0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A45ACC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_83A45AD0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a45af0
	if (cr6.eq) goto loc_83A45AF0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A45AEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_83A45AF0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a45b04
	if (cr6.eq) goto loc_83A45B04;
	// bl 0x83a54098
	ctx.lr = 0x83A45B00;
	sub_83A54098(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_83A45B04:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a45b18
	if (cr6.eq) goto loc_83A45B18;
	// bl 0x83a54098
	ctx.lr = 0x83A45B14;
	sub_83A54098(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_83A45B18:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a45b30
	if (cr6.eq) goto loc_83A45B30;
	// bl 0x83a468c8
	ctx.lr = 0x83A45B28;
	sub_83A468C8(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_83A45B30:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a45b40
	if (cr6.eq) goto loc_83A45B40;
	// bl 0x83a468c8
	ctx.lr = 0x83A45B40;
	sub_83A468C8(ctx, base);
loc_83A45B40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A45B48"))) PPC_WEAK_FUNC(sub_83A45B48);
PPC_FUNC_IMPL(__imp__sub_83A45B48) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a45bac
	if (cr6.eq) goto loc_83A45BAC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a45bac
	if (cr6.eq) goto loc_83A45BAC;
	// bl 0x83a45180
	ctx.lr = 0x83A45B70;
	sub_83A45180(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a45bc4
	if (!cr6.gt) goto loc_83A45BC4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x83a45b8c
	if (cr6.gt) goto loc_83A45B8C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83A45B8C:
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
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
loc_83A45BAC:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22752
	ctx.r4.s64 = ctx.r11.s64 + -22752;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A45BC0;
	sub_831EA418(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
loc_83A45BC4:
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

__attribute__((alias("__imp__sub_83A45BD8"))) PPC_WEAK_FUNC(sub_83A45BD8);
PPC_FUNC_IMPL(__imp__sub_83A45BD8) {
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
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A45BF4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a45c0c
	if (!cr6.gt) goto loc_83A45C0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45920
	ctx.lr = 0x83A45C08;
	sub_83A45920(ctx, base);
	// b 0x83a45bf4
	goto loc_83A45BF4;
loc_83A45C0C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_83A45C10:
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a45c48
	if (cr6.eq) goto loc_83A45C48;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r10.u32);
	// bne cr6,0x83a45c30
	if (!cr6.eq) goto loc_83A45C30;
	// stw r9,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r9.u32);
loc_83A45C30:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// bne cr6,0x83a45c10
	if (!cr6.eq) goto loc_83A45C10;
loc_83A45C48:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a45c60
	if (cr6.eq) goto loc_83A45C60;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a4bbc8
	ctx.lr = 0x83A45C60;
	sub_83A4BBC8(ctx, base);
loc_83A45C60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A45C78"))) PPC_WEAK_FUNC(sub_83A45C78);
PPC_FUNC_IMPL(__imp__sub_83A45C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A45C80;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x83a45b48
	ctx.lr = 0x83A45CA0;
	sub_83A45B48(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a45cd4
	if (cr6.eq) goto loc_83A45CD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45bd8
	ctx.lr = 0x83A45CBC;
	sub_83A45BD8(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a45cd0
	if (cr6.eq) goto loc_83A45CD0;
	// bl 0x83a468c8
	ctx.lr = 0x83A45CCC;
	sub_83A468C8(ctx, base);
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_83A45CD0:
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
loc_83A45CD4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a45d18
	if (!cr6.eq) goto loc_83A45D18;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83a45d18
	if (!cr6.eq) goto loc_83A45D18;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a46840
	ctx.lr = 0x83A45CF0;
	sub_83A46840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a45d08
	if (!cr6.eq) goto loc_83A45D08;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,-22720
	ctx.r4.s64 = ctx.r11.s64 + -22720;
	// b 0x83a45e34
	goto loc_83A45E34;
loc_83A45D08:
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// stw r27,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r27.u32);
	// b 0x83a45d38
	goto loc_83A45D38;
loc_83A45D18:
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x83a45e28
	if (cr6.lt) goto loc_83A45E28;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a45e28
	if (cr6.eq) goto loc_83A45E28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_83A45D38:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83A45D44;
	sub_83A77B68(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgt cr6,0x83a45d54
	if (cr6.gt) goto loc_83A45D54;
	// li r11,4
	ctx.r11.s64 = 4;
loc_83A45D54:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r5,8
	ctx.r5.s64 = 8;
	// sth r11,316(r31)
	PPC_STORE_U16(ctx.r31.u32 + 316, ctx.r11.u16);
	// mulli r30,r11,296
	ctx.r30.s64 = ctx.r11.s64 * 296;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A45D70;
	sub_83A77B78(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A45D7C;
	sub_831EA7A0(ctx, base);
	// lhz r10,316(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a45db0
	if (cr6.eq) goto loc_83A45DB0;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_83A45D90:
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,296
	ctx.r10.s64 = ctx.r10.s64 + 296;
	// stw r9,288(r9)
	PPC_STORE_U32(ctx.r9.u32 + 288, ctx.r9.u32);
	// lhz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 316);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83a45d90
	if (cr6.lt) goto loc_83A45D90;
loc_83A45DB0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45180
	ctx.lr = 0x83A45DC0;
	sub_83A45180(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83a77b78
	ctx.lr = 0x83A45DD4;
	sub_83A77B78(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,-10992
	ctx.r30.s64 = ctx.r11.s64 + -10992;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a480f0
	ctx.lr = 0x83A45DF0;
	sub_83A480F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a49990
	ctx.lr = 0x83A45DFC;
	sub_83A49990(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83a45e44
	if (cr6.eq) goto loc_83A45E44;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a45e44
	if (!cr6.eq) goto loc_83A45E44;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a4bb90
	ctx.lr = 0x83A45E20;
	sub_83A4BB90(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A45E28:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22736
	ctx.r4.s64 = ctx.r11.s64 + -22736;
loc_83A45E34:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A45E3C;
	sub_831EA418(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
loc_83A45E44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A45E4C"))) PPC_WEAK_FUNC(sub_83A45E4C);
PPC_FUNC_IMPL(__imp__sub_83A45E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A45E50"))) PPC_WEAK_FUNC(sub_83A45E50);
PPC_FUNC_IMPL(__imp__sub_83A45E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A45E58;
	__savegprlr_28(ctx, base);
	// stwu r1,-1072(r1)
	ea = -1072 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a45e7c
	if (cr6.eq) goto loc_83A45E7C;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a46020
	if (!cr6.eq) goto loc_83A46020;
loc_83A45E7C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a442d0
	ctx.lr = 0x83A45E8C;
	sub_83A442D0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83a493c0
	ctx.lr = 0x83A45E94;
	sub_83A493C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a45eec
	if (!cr6.eq) goto loc_83A45EEC;
	// li r4,820
	ctx.r4.s64 = 820;
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x831ea7a0
	ctx.lr = 0x83A45EAC;
	sub_831EA7A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x83a44108
	ctx.lr = 0x83A45EC0;
	sub_83A44108(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a493c8
	ctx.lr = 0x83A45ECC;
	sub_83A493C8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a45eec
	if (cr6.eq) goto loc_83A45EEC;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83a493e8
	ctx.lr = 0x83A45EDC;
	sub_83A493E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a45f68
	if (cr6.eq) goto loc_83A45F68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45bd8
	ctx.lr = 0x83A45EEC;
	sub_83A45BD8(ctx, base);
loc_83A45EEC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45b48
	ctx.lr = 0x83A45EFC;
	sub_83A45B48(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83a493c0
	ctx.lr = 0x83A45F0C;
	sub_83A493C0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a45fb8
	if (!cr6.eq) goto loc_83A45FB8;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a45fb8
	if (!cr6.eq) goto loc_83A45FB8;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a45f40
	if (cr6.eq) goto loc_83A45F40;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a49380
	ctx.lr = 0x83A45F40;
	sub_83A49380(ctx, base);
loc_83A45F40:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x83a493e8
	ctx.lr = 0x83A45F4C;
	sub_83A493E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a45f88
	if (!cr6.eq) goto loc_83A45F88;
	// srawi r11,r30,31
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 31;
	// rlwinm r10,r29,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// subfc r9,r29,r30
	xer.ca = ctx.r30.u32 >= ctx.r29.u32;
	ctx.r9.s64 = ctx.r30.s64 - ctx.r29.s64;
	// adde r11,r10,r11
	temp.u8 = (ctx.r10.u32 + ctx.r11.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x83a45f94
	goto loc_83A45F94;
loc_83A45F68:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22616
	ctx.r4.s64 = ctx.r11.s64 + -22616;
	// bl 0x831ea3f0
	ctx.lr = 0x83A45F78;
	sub_831EA3F0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A45F88:
	// subf r11,r30,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_83A45F94:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a45fd8
	if (!cr6.eq) goto loc_83A45FD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45c78
	ctx.lr = 0x83A45FB4;
	sub_83A45C78(ctx, base);
	// b 0x83a45fd8
	goto loc_83A45FD8;
loc_83A45FB8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bge cr6,0x83a45fd8
	if (!cr6.lt) goto loc_83A45FD8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22704
	ctx.r4.s64 = ctx.r11.s64 + -22704;
	// bl 0x831ea3f0
	ctx.lr = 0x83A45FD4;
	sub_831EA3F0(ctx, base);
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
loc_83A45FD8:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a45fec
	if (!cr6.eq) goto loc_83A45FEC;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// b 0x83a45ff0
	goto loc_83A45FF0;
loc_83A45FEC:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
loc_83A45FF0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a46020
	if (!cr6.eq) goto loc_83A46020;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a47790
	ctx.lr = 0x83A46000;
	sub_83A47790(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a47728
	ctx.lr = 0x83A4600C;
	sub_83A47728(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a477e8
	ctx.lr = 0x83A46014;
	sub_83A477E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a46020
	if (cr6.eq) goto loc_83A46020;
	// stw r28,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
loc_83A46020:
	// addi r1,r1,1072
	ctx.r1.s64 = ctx.r1.s64 + 1072;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A46028"))) PPC_WEAK_FUNC(sub_83A46028);
PPC_FUNC_IMPL(__imp__sub_83A46028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A46030;
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
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a46068
	if (!cr6.eq) goto loc_83A46068;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22556
	ctx.r4.s64 = ctx.r11.s64 + -22556;
	// bl 0x831ea418
	ctx.lr = 0x83A46060;
	sub_831EA418(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A46068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83a43ff8
	ctx.lr = 0x83A46074;
	sub_83A43FF8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83a46084
	if (cr6.eq) goto loc_83A46084;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a460dc
	if (!cr6.eq) goto loc_83A460DC;
loc_83A46084:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a460dc
	if (!cr6.eq) goto loc_83A460DC;
	// li r6,68
	ctx.r6.s64 = 68;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x831ea778
	ctx.lr = 0x83A460A4;
	sub_831EA778(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a460c8
	if (cr6.eq) goto loc_83A460C8;
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r31,248
	ctx.r3.s64 = ctx.r31.s64 + 248;
	// bl 0x831ea778
	ctx.lr = 0x83A460C4;
	sub_831EA778(ctx, base);
	// stw r30,244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 244, ctx.r30.u32);
loc_83A460C8:
	// stw r27,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r27.u32);
	// stw r26,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r26.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A460DC:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x83a460f8
	if (cr6.eq) goto loc_83A460F8;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a49380
	ctx.lr = 0x83A460F8;
	sub_83A49380(ctx, base);
loc_83A460F8:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45c78
	ctx.lr = 0x83A46110;
	sub_83A45C78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A46118"))) PPC_WEAK_FUNC(sub_83A46118);
PPC_FUNC_IMPL(__imp__sub_83A46118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A46120;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a46148
	if (!cr6.eq) goto loc_83A46148;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22540
	ctx.r4.s64 = ctx.r11.s64 + -22540;
	// bl 0x831ea418
	ctx.lr = 0x83A46140;
	sub_831EA418(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A46148:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r29,48(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a461cc
	if (cr6.eq) goto loc_83A461CC;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r30,r11,-10992
	ctx.r30.s64 = ctx.r11.s64 + -10992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a481a8
	ctx.lr = 0x83A4616C;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a46188
	if (!cr6.eq) goto loc_83A46188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45e50
	ctx.lr = 0x83A4617C;
	sub_83A45E50(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a461cc
	if (cr6.eq) goto loc_83A461CC;
loc_83A46188:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a4c3d8
	ctx.lr = 0x83A46194;
	sub_83A4C3D8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a461a8
	if (!cr6.eq) goto loc_83A461A8;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// b 0x83a461ac
	goto loc_83A461AC;
loc_83A461A8:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
loc_83A461AC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a461c8
	if (!cr6.eq) goto loc_83A461C8;
	// bl 0x83a47418
	ctx.lr = 0x83A461B8;
	sub_83A47418(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a461c8
	if (cr6.eq) goto loc_83A461C8;
	// bl 0x83a478e0
	ctx.lr = 0x83A461C8;
	sub_83A478E0(ctx, base);
loc_83A461C8:
	// bl 0x83a46708
	ctx.lr = 0x83A461CC;
	sub_83A46708(ctx, base);
loc_83A461CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A461D4"))) PPC_WEAK_FUNC(sub_83A461D4);
PPC_FUNC_IMPL(__imp__sub_83A461D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A461D8"))) PPC_WEAK_FUNC(sub_83A461D8);
PPC_FUNC_IMPL(__imp__sub_83A461D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A461E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a46208
	if (!cr6.eq) goto loc_83A46208;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-22524
	ctx.r4.s64 = ctx.r11.s64 + -22524;
	// bl 0x831ea418
	ctx.lr = 0x83A46200;
	sub_831EA418(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A46208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a44b18
	ctx.lr = 0x83A46210;
	sub_83A44B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a43ff8
	ctx.lr = 0x83A46218;
	sub_83A43FF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a46290
	if (cr6.eq) goto loc_83A46290;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-10992
	ctx.r30.s64 = ctx.r11.s64 + -10992;
loc_83A4622C:
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x83a46290
	if (cr6.eq) goto loc_83A46290;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x83a46254
	if (!cr6.eq) goto loc_83A46254;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83a490f8
	ctx.lr = 0x83A46248;
	sub_83A490F8(ctx, base);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
loc_83A46254:
	// bl 0x83a81a70
	ctx.lr = 0x83A46258;
	sub_83A81A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a46118
	ctx.lr = 0x83A46260;
	sub_83A46118(ctx, base);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x83a46df0
	ctx.lr = 0x83A46268;
	sub_83A46DF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a48e70
	ctx.lr = 0x83A46274;
	sub_83A48E70(ctx, base);
	// bl 0x83a46e30
	ctx.lr = 0x83A46278;
	sub_83A46E30(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x83A46280;
	sub_83A75E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a43ff8
	ctx.lr = 0x83A46288;
	sub_83A43FF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a4622c
	if (!cr6.eq) goto loc_83A4622C;
loc_83A46290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A46298"))) PPC_WEAK_FUNC(sub_83A46298);
PPC_FUNC_IMPL(__imp__sub_83A46298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A462A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a462e4
	if (!cr6.eq) goto loc_83A462E4;
	// stw r11,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83a46ac0
	ctx.lr = 0x83A462C4;
	sub_83A46AC0(ctx, base);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a477e8
	ctx.lr = 0x83A462D0;
	sub_83A477E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a462e0
	if (cr6.eq) goto loc_83A462E0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x83a47790
	ctx.lr = 0x83A462E0;
	sub_83A47790(ctx, base);
loc_83A462E0:
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
loc_83A462E4:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a46378
	if (cr6.eq) goto loc_83A46378;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r29,r31,172
	ctx.r29.s64 = ctx.r31.s64 + 172;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4632c
	if (!cr6.eq) goto loc_83A4632C;
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// addi r5,r31,248
	ctx.r5.s64 = ctx.r31.s64 + 248;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a46318
	if (cr6.eq) goto loc_83A46318;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_83A46318:
	// addi r4,r31,176
	ctx.r4.s64 = ctx.r31.s64 + 176;
	// lwz r7,296(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// bl 0x83a46028
	ctx.lr = 0x83A4632C;
	sub_83A46028(ctx, base);
loc_83A4632C:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a46360
	if (cr6.eq) goto loc_83A46360;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a46354
	if (cr6.eq) goto loc_83A46354;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83a46368
	if (!cr6.eq) goto loc_83A46368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a454e8
	ctx.lr = 0x83A46350;
	sub_83A454E8(ctx, base);
	// b 0x83a46368
	goto loc_83A46368;
loc_83A46354:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45440
	ctx.lr = 0x83A4635C;
	sub_83A45440(ctx, base);
	// b 0x83a46368
	goto loc_83A46368;
loc_83A46360:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a45328
	ctx.lr = 0x83A46368;
	sub_83A45328(ctx, base);
loc_83A46368:
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A46378;
	sub_831EA7A0(ctx, base);
loc_83A46378:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A46380"))) PPC_WEAK_FUNC(sub_83A46380);
PPC_FUNC_IMPL(__imp__sub_83A46380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A46388;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x83a467f0
	ctx.lr = 0x83A4639C;
	sub_83A467F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a463bc
	if (!cr6.eq) goto loc_83A463BC;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-22344
	ctx.r4.s64 = ctx.r11.s64 + -22344;
	// bl 0x831ea3f0
	ctx.lr = 0x83A463B0;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A463BC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a450f0
	ctx.lr = 0x83A463C4;
	sub_83A450F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83a46414
	if (!cr6.eq) goto loc_83A46414;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x83a46414
	if (!cr6.eq) goto loc_83A46414;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x83a46840
	ctx.lr = 0x83A463E4;
	sub_83A46840(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a46408
	if (!cr6.eq) goto loc_83A46408;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-22440
	ctx.r4.s64 = ctx.r11.s64 + -22440;
	// bl 0x831ea3f0
	ctx.lr = 0x83A463FC;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A46408:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x83a46428
	goto loc_83A46428;
loc_83A46414:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, xer);
	// blt cr6,0x83a46694
	if (cr6.lt) goto loc_83A46694;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a46694
	if (cr6.eq) goto loc_83A46694;
loc_83A46428:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83a77b68
	ctx.lr = 0x83A46438;
	sub_83A77B68(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,324
	ctx.r4.s64 = 324;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83A46448;
	sub_83A77B78(ctx, base);
	// li r4,324
	ctx.r4.s64 = 324;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831ea7a0
	ctx.lr = 0x83A46454;
	sub_831EA7A0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a46460
	if (cr6.eq) goto loc_83A46460;
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
loc_83A46460:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x83a47c68
	ctx.lr = 0x83A4646C;
	sub_83A47C68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83a47960
	ctx.lr = 0x83A46474;
	sub_83A47960(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83a47960
	ctx.lr = 0x83A4647C;
	sub_83A47960(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,616
	ctx.r29.s64 = ctx.r11.s64 + 616;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83a77b78
	ctx.lr = 0x83A46498;
	sub_83A77B78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83a54050
	ctx.lr = 0x83A464A4;
	sub_83A54050(ctx, base);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a4cd48
	ctx.lr = 0x83A464B0;
	sub_83A4CD48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a464d0
	if (!cr6.eq) goto loc_83A464D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a459c0
	ctx.lr = 0x83A464C4;
	sub_83A459C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A464D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a555f8
	ctx.lr = 0x83A464D8;
	sub_83A555F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a48010
	ctx.lr = 0x83A464E4;
	sub_83A48010(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x83a464fc
	if (cr6.eq) goto loc_83A464FC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_83A464FC:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r25,r11,-10992
	ctx.r25.s64 = ctx.r11.s64 + -10992;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x83a4c498
	ctx.lr = 0x83A46510;
	sub_83A4C498(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83A46524;
	sub_83A77B78(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83a4c000
	ctx.lr = 0x83A46540;
	sub_83A4C000(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x83a48108
	ctx.lr = 0x83A46558;
	sub_83A48108(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a49a38
	ctx.lr = 0x83A4656C;
	sub_83A49A38(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a49318
	ctx.lr = 0x83A46580;
	sub_83A49318(ctx, base);
	// bl 0x83a46dd0
	ctx.lr = 0x83A46584;
	sub_83A46DD0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a49328
	ctx.lr = 0x83A46590;
	sub_83A49328(ctx, base);
	// lis r9,-31836
	ctx.r9.s64 = -2086404096;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r9,25240
	ctx.r4.s64 = ctx.r9.s64 + 25240;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a49f48
	ctx.lr = 0x83A465A8;
	sub_83A49F48(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83a49208
	ctx.lr = 0x83A465B8;
	sub_83A49208(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a555f8
	ctx.lr = 0x83A465C0;
	sub_83A555F8(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// bl 0x831ea7a0
	ctx.lr = 0x83A46604;
	sub_831EA7A0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lis r7,-31767
	ctx.r7.s64 = -2081882112;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// addi r29,r7,-16896
	ctx.r29.s64 = ctx.r7.s64 + -16896;
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// sth r30,300(r31)
	PPC_STORE_U16(ctx.r31.u32 + 300, ctx.r30.u16);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// bl 0x83a77cb8
	ctx.lr = 0x83A46640;
	sub_83A77CB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83a77b78
	ctx.lr = 0x83A46654;
	sub_83A77B78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83a77ce8
	ctx.lr = 0x83A46668;
	sub_83A77CE8(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// bl 0x83a468e8
	ctx.lr = 0x83A46680;
	sub_83A468E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a47270
	ctx.lr = 0x83A46688;
	sub_83A47270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A46694:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22508
	ctx.r4.s64 = ctx.r11.s64 + -22508;
	// bl 0x831ea3f0
	ctx.lr = 0x83A466A4;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A466B0"))) PPC_WEAK_FUNC(sub_83A466B0);
PPC_FUNC_IMPL(__imp__sub_83A466B0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a46380
	sub_83A46380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A466C0"))) PPC_WEAK_FUNC(sub_83A466C0);
PPC_FUNC_IMPL(__imp__sub_83A466C0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a466e8
	if (!cr6.eq) goto loc_83A466E8;
	// bl 0x83a5c0f0
	ctx.lr = 0x83A466E4;
	sub_83A5C0F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_83A466E8:
	// bl 0x83a47338
	ctx.lr = 0x83A466EC;
	sub_83A47338(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
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

__attribute__((alias("__imp__sub_83A46704"))) PPC_WEAK_FUNC(sub_83A46704);
PPC_FUNC_IMPL(__imp__sub_83A46704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46708"))) PPC_WEAK_FUNC(sub_83A46708);
PPC_FUNC_IMPL(__imp__sub_83A46708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r11,-11360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11360);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x83a765f0
	sub_83A765F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4671C"))) PPC_WEAK_FUNC(sub_83A4671C);
PPC_FUNC_IMPL(__imp__sub_83A4671C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46720"))) PPC_WEAK_FUNC(sub_83A46720);
PPC_FUNC_IMPL(__imp__sub_83A46720) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r31,r11,-11452
	ctx.r31.s64 = ctx.r11.s64 + -11452;
	// addi r3,r31,-76
	ctx.r3.s64 = ctx.r31.s64 + -76;
	// bl 0x83a75be8
	ctx.lr = 0x83A46744;
	sub_83A75BE8(ctx, base);
	// stw r3,-92(r31)
	PPC_STORE_U32(ctx.r31.u32 + -92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a46770
	if (!cr6.eq) goto loc_83A46770;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-22112
	ctx.r4.s64 = ctx.r11.s64 + -22112;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4675C;
	sub_831EA3F0(ctx, base);
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
loc_83A46770:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-88(r31)
	PPC_STORE_U32(ctx.r31.u32 + -88, ctx.r11.u32);
	// stw r10,-84(r31)
	PPC_STORE_U32(ctx.r31.u32 + -84, ctx.r10.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r9,-80(r31)
	PPC_STORE_U32(ctx.r31.u32 + -80, ctx.r9.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A46794;
	sub_83A75BE8(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a467c0
	if (!cr6.eq) goto loc_83A467C0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-22160
	ctx.r4.s64 = ctx.r11.s64 + -22160;
	// bl 0x831ea3f0
	ctx.lr = 0x83A467AC;
	sub_831EA3F0(ctx, base);
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
loc_83A467C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83A467EC"))) PPC_WEAK_FUNC(sub_83A467EC);
PPC_FUNC_IMPL(__imp__sub_83A467EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A467F0"))) PPC_WEAK_FUNC(sub_83A467F0);
PPC_FUNC_IMPL(__imp__sub_83A467F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,-11552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11552);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A467FC"))) PPC_WEAK_FUNC(sub_83A467FC);
PPC_FUNC_IMPL(__imp__sub_83A467FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46800"))) PPC_WEAK_FUNC(sub_83A46800);
PPC_FUNC_IMPL(__imp__sub_83A46800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A46808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31767
	ctx.r29.s64 = -2081882112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r3,-16880(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16880);
	// bl 0x83a76068
	ctx.lr = 0x83A46824;
	sub_83A76068(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,-16880(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16880);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a76090
	ctx.lr = 0x83A46834;
	sub_83A76090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4683C"))) PPC_WEAK_FUNC(sub_83A4683C);
PPC_FUNC_IMPL(__imp__sub_83A4683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46840"))) PPC_WEAK_FUNC(sub_83A46840);
PPC_FUNC_IMPL(__imp__sub_83A46840) {
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
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x83a46860
	if (!cr6.lt) goto loc_83A46860;
	// li r31,4
	ctx.r31.s64 = 4;
loc_83A46860:
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r3,-16880(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16880);
	// bl 0x83a760b8
	ctx.lr = 0x83A46874;
	sub_83A760B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a46894
	if (!cr6.eq) goto loc_83A46894;
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
loc_83A46894:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// neg r9,r31
	ctx.r9.s64 = -ctx.r31.s64;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// and r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 & ctx.r9.u64;
	// addi r7,r3,-4
	ctx.r7.s64 = ctx.r3.s64 + -4;
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r5,r7,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_83A468C8"))) PPC_WEAK_FUNC(sub_83A468C8);
PPC_FUNC_IMPL(__imp__sub_83A468C8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-16880(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16880);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r4,r7,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x83a76130
	sub_83A76130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A468E8"))) PPC_WEAK_FUNC(sub_83A468E8);
PPC_FUNC_IMPL(__imp__sub_83A468E8) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-11540
	ctx.r31.s64 = ctx.r11.s64 + -11540;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46910;
	sub_83A75CD8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r30.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a46930
	if (!cr6.eq) goto loc_83A46930;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// b 0x83a4693c
	goto loc_83A4693C;
loc_83A46930:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83A4693C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A46954;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4696C"))) PPC_WEAK_FUNC(sub_83A4696C);
PPC_FUNC_IMPL(__imp__sub_83A4696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46970"))) PPC_WEAK_FUNC(sub_83A46970);
PPC_FUNC_IMPL(__imp__sub_83A46970) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-11540
	ctx.r31.s64 = ctx.r11.s64 + -11540;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46998;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a469bc
	if (!cr6.eq) goto loc_83A469BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83a469fc
	if (!cr6.eq) goto loc_83A469FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83a469f8
	goto loc_83A469F8;
loc_83A469BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a469fc
	if (cr6.eq) goto loc_83A469FC;
loc_83A469C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83a469e0
	if (cr6.eq) goto loc_83A469E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a469c4
	if (!cr6.eq) goto loc_83A469C4;
	// b 0x83a469fc
	goto loc_83A469FC;
loc_83A469E0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a469fc
	if (!cr6.eq) goto loc_83A469FC;
loc_83A469F8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A469FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A46A18;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46A30"))) PPC_WEAK_FUNC(sub_83A46A30);
PPC_FUNC_IMPL(__imp__sub_83A46A30) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-11452
	ctx.r31.s64 = ctx.r11.s64 + -11452;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46A58;
	sub_83A75CD8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r30.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a46a7c
	if (!cr6.eq) goto loc_83A46A7C;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x83a46a88
	goto loc_83A46A88;
loc_83A46A7C:
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_83A46A88:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r10.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A46AA8;
	sub_83A75D58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46AC0"))) PPC_WEAK_FUNC(sub_83A46AC0);
PPC_FUNC_IMPL(__imp__sub_83A46AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A46AC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-11452
	ctx.r31.s64 = ctx.r11.s64 + -11452;
loc_83A46ADC:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46AE4;
	sub_83A75CD8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// beq cr6,0x83a46b80
	if (cr6.eq) goto loc_83A46B80;
loc_83A46AF4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x83a46b10
	if (cr6.eq) goto loc_83A46B10;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a46af4
	if (!cr6.eq) goto loc_83A46AF4;
	// b 0x83a46b80
	goto loc_83A46B80;
loc_83A46B10:
	// addi r9,r30,8
	ctx.r9.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x83a46b34
	if (!cr6.eq) goto loc_83A46B34;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x83a46b6c
	if (!cr6.eq) goto loc_83A46B6C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x83a46b68
	goto loc_83A46B68;
loc_83A46B34:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83a46b50
	if (cr6.eq) goto loc_83A46B50;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a46b34
	if (!cr6.eq) goto loc_83A46B34;
	// b 0x83a46b6c
	goto loc_83A46B6C;
loc_83A46B50:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x83a46b6c
	if (!cr6.eq) goto loc_83A46B6C;
loc_83A46B68:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A46B6C:
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r29,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r29.u32);
loc_83A46B80:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x83a75d58
	ctx.lr = 0x83A46B88;
	sub_83A75D58(ctx, base);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a46ba0
	if (cr6.eq) goto loc_83A46BA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a75e98
	ctx.lr = 0x83A46B9C;
	sub_83A75E98(ctx, base);
	// b 0x83a46adc
	goto loc_83A46ADC;
loc_83A46BA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A46BA8"))) PPC_WEAK_FUNC(sub_83A46BA8);
PPC_FUNC_IMPL(__imp__sub_83A46BA8) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r30,r11,-11552
	ctx.r30.s64 = ctx.r11.s64 + -11552;
	// lwz r11,-11552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a46c00
	if (cr6.eq) goto loc_83A46C00;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46BD8;
	sub_83A75CD8(ctx, base);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a46bf8
	if (cr6.eq) goto loc_83A46BF8;
loc_83A46BE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a46118
	ctx.lr = 0x83A46BEC;
	sub_83A46118(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a46be4
	if (!cr6.eq) goto loc_83A46BE4;
loc_83A46BF8:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a75d58
	ctx.lr = 0x83A46C00;
	sub_83A75D58(ctx, base);
loc_83A46C00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46C18"))) PPC_WEAK_FUNC(sub_83A46C18);
PPC_FUNC_IMPL(__imp__sub_83A46C18) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r30,r11,-11552
	ctx.r30.s64 = ctx.r11.s64 + -11552;
	// lwz r11,-11552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a46c70
	if (cr6.eq) goto loc_83A46C70;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46C48;
	sub_83A75CD8(ctx, base);
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a46c68
	if (cr6.eq) goto loc_83A46C68;
loc_83A46C54:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a44a78
	ctx.lr = 0x83A46C5C;
	sub_83A44A78(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83a46c54
	if (!cr6.eq) goto loc_83A46C54;
loc_83A46C68:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x83a75d58
	ctx.lr = 0x83A46C70;
	sub_83A75D58(ctx, base);
loc_83A46C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46C88"))) PPC_WEAK_FUNC(sub_83A46C88);
PPC_FUNC_IMPL(__imp__sub_83A46C88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A46C90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,-11456
	ctx.r31.s64 = ctx.r11.s64 + -11456;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a46d98
	if (cr6.eq) goto loc_83A46D98;
loc_83A46CB4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46CBC;
	sub_83A75CD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a46d90
	if (cr6.eq) goto loc_83A46D90;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a46d08
	if (cr6.eq) goto loc_83A46D08;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// and r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 & ctx.r9.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_83A46D08:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,140(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a46d2c
	if (!cr6.eq) goto loc_83A46D2C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a46d58
	if (!cr6.eq) goto loc_83A46D58;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x83a46d68
	goto loc_83A46D68;
loc_83A46D2C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83A46D34;
	sub_83A75D58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a44aa0
	ctx.lr = 0x83A46D3C;
	sub_83A44AA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46D44;
	sub_83A75CD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a46d58
	if (!cr6.eq) goto loc_83A46D58;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x83a46d64
	goto loc_83A46D64;
loc_83A46D58:
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_83A46D64:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_83A46D68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x83a75d58
	ctx.lr = 0x83A46D7C;
	sub_83A75D58(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x83a46cb4
	if (cr6.lt) goto loc_83A46CB4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A46D90:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83a75d58
	ctx.lr = 0x83A46D98;
	sub_83A75D58(ctx, base);
loc_83A46D98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A46DA0"))) PPC_WEAK_FUNC(sub_83A46DA0);
PPC_FUNC_IMPL(__imp__sub_83A46DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// stw r3,-11356(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11356, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46DAC"))) PPC_WEAK_FUNC(sub_83A46DAC);
PPC_FUNC_IMPL(__imp__sub_83A46DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46DB0"))) PPC_WEAK_FUNC(sub_83A46DB0);
PPC_FUNC_IMPL(__imp__sub_83A46DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,-11356(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11356);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46DBC"))) PPC_WEAK_FUNC(sub_83A46DBC);
PPC_FUNC_IMPL(__imp__sub_83A46DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46DC0"))) PPC_WEAK_FUNC(sub_83A46DC0);
PPC_FUNC_IMPL(__imp__sub_83A46DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lfs f1,-16876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16876);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46DCC"))) PPC_WEAK_FUNC(sub_83A46DCC);
PPC_FUNC_IMPL(__imp__sub_83A46DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46DD0"))) PPC_WEAK_FUNC(sub_83A46DD0);
PPC_FUNC_IMPL(__imp__sub_83A46DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lfs f1,-16872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16872);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46DDC"))) PPC_WEAK_FUNC(sub_83A46DDC);
PPC_FUNC_IMPL(__imp__sub_83A46DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46DE0"))) PPC_WEAK_FUNC(sub_83A46DE0);
PPC_FUNC_IMPL(__imp__sub_83A46DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r3,-11352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11352);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46DEC"))) PPC_WEAK_FUNC(sub_83A46DEC);
PPC_FUNC_IMPL(__imp__sub_83A46DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46DF0"))) PPC_WEAK_FUNC(sub_83A46DF0);
PPC_FUNC_IMPL(__imp__sub_83A46DF0) {
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
	// lis r31,-31741
	ctx.r31.s64 = -2080178176;
	// addi r11,r31,-11272
	ctx.r11.s64 = ctx.r31.s64 + -11272;
	// lwz r3,-76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -76);
	// bl 0x83a75cd8
	ctx.lr = 0x83A46E10;
	sub_83A75CD8(ctx, base);
	// lwz r11,-11272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11272);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11272, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_83A46E30"))) PPC_WEAK_FUNC(sub_83A46E30);
PPC_FUNC_IMPL(__imp__sub_83A46E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r10,r11,-11348
	ctx.r10.s64 = ctx.r11.s64 + -11348;
	// lwz r3,-11348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11348);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// b 0x83a75d58
	sub_83A75D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A46E4C"))) PPC_WEAK_FUNC(sub_83A46E4C);
PPC_FUNC_IMPL(__imp__sub_83A46E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A46E50"))) PPC_WEAK_FUNC(sub_83A46E50);
PPC_FUNC_IMPL(__imp__sub_83A46E50) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r31,r11,-11552
	ctx.r31.s64 = ctx.r11.s64 + -11552;
	// lwz r11,-11552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a46e8c
	if (!cr6.eq) goto loc_83A46E8C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-22064
	ctx.r4.s64 = ctx.r11.s64 + -22064;
	// bl 0x831ea3f0
	ctx.lr = 0x83A46E88;
	sub_831EA3F0(ctx, base);
	// b 0x83a46fb0
	goto loc_83A46FB0;
loc_83A46E8C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a46eb8
	if (cr6.eq) goto loc_83A46EB8;
loc_83A46E98:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a461d8
	ctx.lr = 0x83A46EA4;
	sub_83A461D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a459c0
	ctx.lr = 0x83A46EAC;
	sub_83A459C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a46e98
	if (!cr6.eq) goto loc_83A46E98;
loc_83A46EB8:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r3,r11,-10992
	ctx.r3.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a4c450
	ctx.lr = 0x83A46EC4;
	sub_83A4C450(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a46edc
	if (cr6.eq) goto loc_83A46EDC;
	// bl 0x83a55688
	ctx.lr = 0x83A46ED4;
	sub_83A55688(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
loc_83A46EDC:
	// bl 0x83a473d8
	ctx.lr = 0x83A46EE0;
	sub_83A473D8(ctx, base);
	// bl 0x83a54e30
	ctx.lr = 0x83A46EE4;
	sub_83A54E30(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a46efc
	if (!cr6.eq) goto loc_83A46EFC;
	// bl 0x83a76550
	ctx.lr = 0x83A46EF4;
	sub_83A76550(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
loc_83A46EFC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a46f2c
	if (cr6.eq) goto loc_83A46F2C;
	// bl 0x83a75cd8
	ctx.lr = 0x83A46F0C;
	sub_83A75CD8(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83a75d58
	ctx.lr = 0x83A46F14;
	sub_83A75D58(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a46f2c
	if (cr6.eq) goto loc_83A46F2C;
	// bl 0x83a75c60
	ctx.lr = 0x83A46F24;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_83A46F2C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a46f5c
	if (cr6.eq) goto loc_83A46F5C;
	// bl 0x83a75cd8
	ctx.lr = 0x83A46F3C;
	sub_83A75CD8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x83a75d58
	ctx.lr = 0x83A46F44;
	sub_83A75D58(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a46f5c
	if (cr6.eq) goto loc_83A46F5C;
	// bl 0x83a75c60
	ctx.lr = 0x83A46F54;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83A46F5C:
	// bl 0x83a788e0
	ctx.lr = 0x83A46F60;
	sub_83A788E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a46f90
	if (cr6.eq) goto loc_83A46F90;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r3,-16880(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16880);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r4,r7,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r7.s64;
	// bl 0x83a76130
	ctx.lr = 0x83A46F88;
	sub_83A76130(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_83A46F90:
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a46fa8
	if (cr6.eq) goto loc_83A46FA8;
	// bl 0x83a75c60
	ctx.lr = 0x83A46FA0;
	sub_83A75C60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
loc_83A46FA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83A46FB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A46FC8"))) PPC_WEAK_FUNC(sub_83A46FC8);
PPC_FUNC_IMPL(__imp__sub_83A46FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A46FD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r31,r11,-11440
	ctx.r31.s64 = ctx.r11.s64 + -11440;
	// addi r9,r10,-22256
	ctx.r9.s64 = ctx.r10.s64 + -22256;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r9,-136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -136, ctx.r9.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83a47320
	ctx.lr = 0x83A46FFC;
	sub_83A47320(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83a75be8
	ctx.lr = 0x83A47008;
	sub_83A75BE8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4702c
	if (!cr6.eq) goto loc_83A4702C;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-21952
	ctx.r4.s64 = ctx.r11.s64 + -21952;
	// bl 0x831ea3f0
	ctx.lr = 0x83A47020;
	sub_831EA3F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A4702C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -108, ctx.r11.u32);
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// stw r10,-104(r31)
	PPC_STORE_U32(ctx.r31.u32 + -104, ctx.r10.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x831ea7a0
	ctx.lr = 0x83A47048;
	sub_831EA7A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x831ea7a0
	ctx.lr = 0x83A4705C;
	sub_831EA7A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// beq cr6,0x83a47070
	if (cr6.eq) goto loc_83A47070;
	// stw r30,-108(r31)
	PPC_STORE_U32(ctx.r31.u32 + -108, ctx.r30.u32);
loc_83A47070:
	// bl 0x83a78c90
	ctx.lr = 0x83A47074;
	sub_83A78C90(ctx, base);
	// bl 0x83a46720
	ctx.lr = 0x83A47078;
	sub_83A46720(ctx, base);
	// bl 0x83a761e0
	ctx.lr = 0x83A4707C;
	sub_83A761E0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a470cc
	if (!cr6.eq) goto loc_83A470CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x83a76928
	ctx.lr = 0x83A470AC;
	sub_83A76928(ctx, base);
	// bl 0x83a76350
	ctx.lr = 0x83A470B0;
	sub_83A76350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a470cc
	if (!cr6.eq) goto loc_83A470CC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f1,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83a76370
	ctx.lr = 0x83A470C4;
	sub_83A76370(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_83A470CC:
	// bl 0x83a553a8
	ctx.lr = 0x83A470D0;
	sub_83A553A8(ctx, base);
	// bl 0x83a47338
	ctx.lr = 0x83A470D4;
	sub_83A47338(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83a470f8
	if (!cr6.gt) goto loc_83A470F8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a77b78
	ctx.lr = 0x83A470F0;
	sub_83A77B78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a47388
	ctx.lr = 0x83A470F8;
	sub_83A47388(ctx, base);
loc_83A470F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a47158
	if (!cr6.eq) goto loc_83A47158;
	// bl 0x83a5c0f0
	ctx.lr = 0x83A47108;
	sub_83A5C0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a77b78
	ctx.lr = 0x83A4711C;
	sub_83A77B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a55748
	ctx.lr = 0x83A4712C;
	sub_83A55748(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a47158
	if (!cr6.eq) goto loc_83A47158;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// addi r4,r11,-21992
	ctx.r4.s64 = ctx.r11.s64 + -21992;
	// bl 0x831ea3f0
	ctx.lr = 0x83A47144;
	sub_831EA3F0(ctx, base);
	// stw r28,-112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -112, ctx.r28.u32);
	// bl 0x83a46e50
	ctx.lr = 0x83A4714C;
	sub_83A46E50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83A47158:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83a48760
	ctx.lr = 0x83A47160;
	sub_83A48760(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,-112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -112, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A47170"))) PPC_WEAK_FUNC(sub_83A47170);
PPC_FUNC_IMPL(__imp__sub_83A47170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A47178;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a471e0
	if (!cr6.eq) goto loc_83A471E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ea7a0
	ctx.lr = 0x83A4719C;
	sub_831EA7A0(ctx, base);
	// lis r9,520
	ctx.r9.s64 = 34078720;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ori r7,r9,256
	ctx.r7.u64 = ctx.r9.u64 | 256;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
loc_83A471E0:
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r3,r11,-16868
	ctx.r3.s64 = ctx.r11.s64 + -16868;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x831ea778
	ctx.lr = 0x83A471F8;
	sub_831EA778(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a56d38
	ctx.lr = 0x83A47208;
	sub_83A56D38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A47210"))) PPC_WEAK_FUNC(sub_83A47210);
PPC_FUNC_IMPL(__imp__sub_83A47210) {
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
	// bl 0x83a46e50
	ctx.lr = 0x83A47220;
	sub_83A46E50(ctx, base);
	// lis r8,-31767
	ctx.r8.s64 = -2081882112;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r8,-16868
	ctx.r6.s64 = ctx.r8.s64 + -16868;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,-16868(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16868, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4726C"))) PPC_WEAK_FUNC(sub_83A4726C);
PPC_FUNC_IMPL(__imp__sub_83A4726C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47270"))) PPC_WEAK_FUNC(sub_83A47270);
PPC_FUNC_IMPL(__imp__sub_83A47270) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a472f8
	if (cr6.eq) goto loc_83A472F8;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a472f8
	if (cr6.eq) goto loc_83A472F8;
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r31,r11,-16868
	ctx.r31.s64 = ctx.r11.s64 + -16868;
	// addi r5,r10,-10992
	ctx.r5.s64 = ctx.r10.s64 + -10992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-16868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16868);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x83a49f60
	ctx.lr = 0x83A472E4;
	sub_83A49F60(ctx, base);
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
loc_83A472F8:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,-21904
	ctx.r4.s64 = ctx.r11.s64 + -21904;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ea418
	ctx.lr = 0x83A4730C;
	sub_831EA418(ctx, base);
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

__attribute__((alias("__imp__sub_83A47320"))) PPC_WEAK_FUNC(sub_83A47320);
PPC_FUNC_IMPL(__imp__sub_83A47320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// addi r9,r11,-21888
	ctx.r9.s64 = ctx.r11.s64 + -21888;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r9,-11268(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11268, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47338"))) PPC_WEAK_FUNC(sub_83A47338);
PPC_FUNC_IMPL(__imp__sub_83A47338) {
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
	// bl 0x83a79650
	ctx.lr = 0x83A47350;
	sub_83A79650(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a47370
	if (!cr6.eq) goto loc_83A47370;
	// bl 0x83a79610
	ctx.lr = 0x83A4735C;
	sub_83A79610(ctx, base);
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
loc_83A47370:
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

__attribute__((alias("__imp__sub_83A47388"))) PPC_WEAK_FUNC(sub_83A47388);
PPC_FUNC_IMPL(__imp__sub_83A47388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A47390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x83a79650
	ctx.lr = 0x83A473A4;
	sub_83A79650(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a473cc
	if (!cr6.eq) goto loc_83A473CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a79ed0
	ctx.lr = 0x83A473B8;
	sub_83A79ED0(ctx, base);
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-11264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11264, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A473CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A473D8"))) PPC_WEAK_FUNC(sub_83A473D8);
PPC_FUNC_IMPL(__imp__sub_83A473D8) {
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
	// lis r31,-31741
	ctx.r31.s64 = -2080178176;
	// lwz r11,-11264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11264);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a47404
	if (!cr6.eq) goto loc_83A47404;
	// bl 0x83a79a38
	ctx.lr = 0x83A473FC;
	sub_83A79A38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-11264(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11264, ctx.r11.u32);
loc_83A47404:
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

__attribute__((alias("__imp__sub_83A47418"))) PPC_WEAK_FUNC(sub_83A47418);
PPC_FUNC_IMPL(__imp__sub_83A47418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r11,-11264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11264);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// b 0x83a79ab0
	sub_83A79AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4742C"))) PPC_WEAK_FUNC(sub_83A4742C);
PPC_FUNC_IMPL(__imp__sub_83A4742C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47430"))) PPC_WEAK_FUNC(sub_83A47430);
PPC_FUNC_IMPL(__imp__sub_83A47430) {
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
	// bl 0x831ea7a0
	ctx.lr = 0x83A47450;
	sub_831EA7A0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4749C"))) PPC_WEAK_FUNC(sub_83A4749C);
PPC_FUNC_IMPL(__imp__sub_83A4749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A474A0"))) PPC_WEAK_FUNC(sub_83A474A0);
PPC_FUNC_IMPL(__imp__sub_83A474A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31767
	ctx.r11.s64 = -2081882112;
	// addi r3,r11,-16840
	ctx.r3.s64 = ctx.r11.s64 + -16840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A474AC"))) PPC_WEAK_FUNC(sub_83A474AC);
PPC_FUNC_IMPL(__imp__sub_83A474AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A474B0"))) PPC_WEAK_FUNC(sub_83A474B0);
PPC_FUNC_IMPL(__imp__sub_83A474B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83a4cb10
	sub_83A4CB10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A474B8"))) PPC_WEAK_FUNC(sub_83A474B8);
PPC_FUNC_IMPL(__imp__sub_83A474B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a47508
	if (cr6.eq) goto loc_83A47508;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a474d4
	if (cr6.eq) goto loc_83A474D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83A474D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// twllei r9,0
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,4476(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4476);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// rotlwi r11,r6,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r3,r6,r9
	ctx.r3.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// twlgei r4,-1
	// blr 
	return;
loc_83A47508:
	// li r3,10240
	ctx.r3.s64 = 10240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47510"))) PPC_WEAK_FUNC(sub_83A47510);
PPC_FUNC_IMPL(__imp__sub_83A47510) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a475f0
	if (cr6.eq) goto loc_83A475F0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a47544
	if (cr6.eq) goto loc_83A47544;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a475b8
	goto loc_83A475B8;
loc_83A47544:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,4808(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4808);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a475d0
	if (cr6.eq) goto loc_83A475D0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// divwu r30,r8,r9
	ctx.r30.u32 = PPCDivide(ctx.r8.u32, ctx.r9.u32);
	// twllei r9,0
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a475b0
	if (cr6.eq) goto loc_83A475B0;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x83a475b4
	if (cr6.eq) goto loc_83A475B4;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// bl 0x83a79c78
	ctx.lr = 0x83A475B0;
	sub_83A79C78(ctx, base);
loc_83A475B0:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_83A475B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A475B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A475D0:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21784
	ctx.r4.s64 = ctx.r11.s64 + -21784;
	// bl 0x831ea3f0
	ctx.lr = 0x83A475E0;
	sub_831EA3F0(ctx, base);
	// lis r3,4
	ctx.r3.s64 = 262144;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x83a475b8
	goto loc_83A475B8;
loc_83A475F0:
	// lis r3,4
	ctx.r3.s64 = 262144;
	// b 0x83a475b8
	goto loc_83A475B8;
}

__attribute__((alias("__imp__sub_83A475F8"))) PPC_WEAK_FUNC(sub_83A475F8);
PPC_FUNC_IMPL(__imp__sub_83A475F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83a4cbf0
	sub_83A4CBF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A47600"))) PPC_WEAK_FUNC(sub_83A47600);
PPC_FUNC_IMPL(__imp__sub_83A47600) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82dab7c0
	ctx.lr = 0x83A4761C;
	sub_82DAB7C0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x83a47660
	if (cr6.lt) goto loc_83A47660;
	// beq cr6,0x83a47648
	if (cr6.eq) goto loc_83A47648;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x83a47660
	if (cr6.lt) goto loc_83A47660;
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
loc_83A47648:
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
loc_83A47660:
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

__attribute__((alias("__imp__sub_83A47678"))) PPC_WEAK_FUNC(sub_83A47678);
PPC_FUNC_IMPL(__imp__sub_83A47678) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A476A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a476bc
	if (!cr6.eq) goto loc_83A476BC;
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
loc_83A476BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_83A476E8"))) PPC_WEAK_FUNC(sub_83A476E8);
PPC_FUNC_IMPL(__imp__sub_83A476E8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A47708;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47724"))) PPC_WEAK_FUNC(sub_83A47724);
PPC_FUNC_IMPL(__imp__sub_83A47724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47728"))) PPC_WEAK_FUNC(sub_83A47728);
PPC_FUNC_IMPL(__imp__sub_83A47728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A47730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-11260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a47788
	if (cr6.eq) goto loc_83A47788;
	// bl 0x825832d8
	ctx.lr = 0x83A47750;
	sub_825832D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a47788
	if (!cr6.eq) goto loc_83A47788;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a79b00
	ctx.lr = 0x83A47778;
	sub_83A79B00(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a47788
	if (!cr6.eq) goto loc_83A47788;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83A47788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A47790"))) PPC_WEAK_FUNC(sub_83A47790);
PPC_FUNC_IMPL(__imp__sub_83A47790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A47798;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-11260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a477dc
	if (cr6.eq) goto loc_83A477DC;
	// bl 0x825832d8
	ctx.lr = 0x83A477B4;
	sub_825832D8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a477d8
	if (!cr6.eq) goto loc_83A477D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a79b68
	ctx.lr = 0x83A477D4;
	sub_83A79B68(ctx, base);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_83A477D8:
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_83A477DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A477E4"))) PPC_WEAK_FUNC(sub_83A477E4);
PPC_FUNC_IMPL(__imp__sub_83A477E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A477E8"))) PPC_WEAK_FUNC(sub_83A477E8);
PPC_FUNC_IMPL(__imp__sub_83A477E8) {
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
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r11,-11260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a47818
	if (!cr6.eq) goto loc_83A47818;
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
loc_83A47818:
	// bl 0x825832d8
	ctx.lr = 0x83A4781C;
	sub_825832D8(ctx, base);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47830"))) PPC_WEAK_FUNC(sub_83A47830);
PPC_FUNC_IMPL(__imp__sub_83A47830) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x825832d8
	ctx.lr = 0x83A47850;
	sub_825832D8(ctx, base);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47870"))) PPC_WEAK_FUNC(sub_83A47870);
PPC_FUNC_IMPL(__imp__sub_83A47870) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,4764(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4764);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47880"))) PPC_WEAK_FUNC(sub_83A47880);
PPC_FUNC_IMPL(__imp__sub_83A47880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a478d4
	if (!cr6.eq) goto loc_83A478D4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,4804(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4804);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83a478a8
	if (cr6.gt) goto loc_83A478A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_83A478A8:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r11,10240
	cr6.compare<uint32_t>(ctx.r11.u32, 10240, xer);
	// bgt cr6,0x83a478b8
	if (cr6.gt) goto loc_83A478B8;
	// li r11,10240
	ctx.r11.s64 = 10240;
loc_83A478B8:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,4764(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4764);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_83A478D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A478DC"))) PPC_WEAK_FUNC(sub_83A478DC);
PPC_FUNC_IMPL(__imp__sub_83A478DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A478E0"))) PPC_WEAK_FUNC(sub_83A478E0);
PPC_FUNC_IMPL(__imp__sub_83A478E0) {
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
	// bl 0x825832d8
	ctx.lr = 0x83A478F4;
	sub_825832D8(ctx, base);
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-11260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11260);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a47914
	if (!cr6.eq) goto loc_83A47914;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// b 0x83a47944
	goto loc_83A47944;
loc_83A47914:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83a4794c
	if (!cr6.eq) goto loc_83A4794C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4cb10
	ctx.lr = 0x83A47928;
	sub_83A4CB10(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a4794c
	if (!cr6.eq) goto loc_83A4794C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4760(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4760);
	// lwz r8,4764(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4764);
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_83A47944:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4cbf0
	ctx.lr = 0x83A4794C;
	sub_83A4CBF0(ctx, base);
loc_83A4794C:
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

__attribute__((alias("__imp__sub_83A47960"))) PPC_WEAK_FUNC(sub_83A47960);
PPC_FUNC_IMPL(__imp__sub_83A47960) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83a79fc8
	ctx.lr = 0x83A47974;
	sub_83A79FC8(ctx, base);
	// addi r3,r3,688
	ctx.r3.s64 = ctx.r3.s64 + 688;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47988"))) PPC_WEAK_FUNC(sub_83A47988);
PPC_FUNC_IMPL(__imp__sub_83A47988) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a542f0
	ctx.lr = 0x83A479BC;
	sub_83A542F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// bl 0x83a9fdb0
	ctx.lr = 0x83A479C8;
	sub_83A9FDB0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x83a54188
	ctx.lr = 0x83A479EC;
	sub_83A54188(ctx, base);
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x839db810
	ctx.lr = 0x83A47A00;
	sub_839DB810(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
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

__attribute__((alias("__imp__sub_83A47A24"))) PPC_WEAK_FUNC(sub_83A47A24);
PPC_FUNC_IMPL(__imp__sub_83A47A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47A28"))) PPC_WEAK_FUNC(sub_83A47A28);
PPC_FUNC_IMPL(__imp__sub_83A47A28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a47a5c
	if (!cr6.eq) goto loc_83A47A5C;
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
loc_83A47A5C:
	// stw r4,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r4.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stw r5,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r6.u32);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a542f0
	ctx.lr = 0x83A47A7C;
	sub_83A542F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// bl 0x83a9fdb0
	ctx.lr = 0x83A47A88;
	sub_83A9FDB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a55550
	ctx.lr = 0x83A47A9C;
	sub_83A55550(ctx, base);
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

__attribute__((alias("__imp__sub_83A47AB0"))) PPC_WEAK_FUNC(sub_83A47AB0);
PPC_FUNC_IMPL(__imp__sub_83A47AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x83a55290
	sub_83A55290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A47AB4"))) PPC_WEAK_FUNC(sub_83A47AB4);
PPC_FUNC_IMPL(__imp__sub_83A47AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47AB8"))) PPC_WEAK_FUNC(sub_83A47AB8);
PPC_FUNC_IMPL(__imp__sub_83A47AB8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r4.u32);
	// stw r5,680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 680, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47AC4"))) PPC_WEAK_FUNC(sub_83A47AC4);
PPC_FUNC_IMPL(__imp__sub_83A47AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47AC8"))) PPC_WEAK_FUNC(sub_83A47AC8);
PPC_FUNC_IMPL(__imp__sub_83A47AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83A47AD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
	// bl 0x83a7a038
	ctx.lr = 0x83A47B04;
	sub_83A7A038(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a47c10
	if (cr6.eq) goto loc_83A47C10;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a47b50
	if (!cr6.gt) goto loc_83A47B50;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_83A47B2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7a2a0
	ctx.lr = 0x83A47B38;
	sub_83A7A2A0(ctx, base);
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a47b2c
	if (cr6.lt) goto loc_83A47B2C;
loc_83A47B50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A47B64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a47be4
	if (!cr6.eq) goto loc_83A47BE4;
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,372(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a47bb0
	if (cr6.eq) goto loc_83A47BB0;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r9,-31767
	ctx.r9.s64 = -2081882112;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r9,-16780
	ctx.r9.s64 = ctx.r9.s64 + -16780;
loc_83A47B98:
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r5,r7,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r5,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83a47b98
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A47B98;
loc_83A47BB0:
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a47bcc
	if (cr6.eq) goto loc_83A47BCC;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A47BCC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A47BCC:
	// ld r9,360(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 360);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r10.u64);
	// b 0x83a47bf4
	goto loc_83A47BF4;
loc_83A47BE4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// bl 0x831ea7a0
	ctx.lr = 0x83A47BF0;
	sub_831EA7A0(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
loc_83A47BF4:
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83a7a2a0
	ctx.lr = 0x83A47C00;
	sub_83A7A2A0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83a7a0d8
	ctx.lr = 0x83A47C10;
	sub_83A7A0D8(ctx, base);
loc_83A47C10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A47C18"))) PPC_WEAK_FUNC(sub_83A47C18);
PPC_FUNC_IMPL(__imp__sub_83A47C18) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-21736
	ctx.r9.s64 = ctx.r11.s64 + -21736;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83a47c50
	if (cr6.eq) goto loc_83A47C50;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83a79fb8
	ctx.lr = 0x83A47C4C;
	sub_83A79FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A47C50:
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

__attribute__((alias("__imp__sub_83A47C64"))) PPC_WEAK_FUNC(sub_83A47C64);
PPC_FUNC_IMPL(__imp__sub_83A47C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47C68"))) PPC_WEAK_FUNC(sub_83A47C68);
PPC_FUNC_IMPL(__imp__sub_83A47C68) {
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
	// bl 0x839db810
	ctx.lr = 0x83A47C78;
	sub_839DB810(ctx, base);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47C8C"))) PPC_WEAK_FUNC(sub_83A47C8C);
PPC_FUNC_IMPL(__imp__sub_83A47C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47C90"))) PPC_WEAK_FUNC(sub_83A47C90);
PPC_FUNC_IMPL(__imp__sub_83A47C90) {
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
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a47cc0
	if (cr6.eq) goto loc_83A47CC0;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x83a78a48
	ctx.lr = 0x83A47CB8;
	sub_83A78A48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_83A47CC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A47CD8;
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

__attribute__((alias("__imp__sub_83A47CEC"))) PPC_WEAK_FUNC(sub_83A47CEC);
PPC_FUNC_IMPL(__imp__sub_83A47CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47CF0"))) PPC_WEAK_FUNC(sub_83A47CF0);
PPC_FUNC_IMPL(__imp__sub_83A47CF0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a47d20
	if (!cr6.eq) goto loc_83A47D20;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x83a56fb0
	ctx.lr = 0x83A47D1C;
	sub_83A56FB0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_83A47D20:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a47d40
	if (cr6.eq) goto loc_83A47D40;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// bl 0x83a56ec8
	ctx.lr = 0x83A47D40;
	sub_83A56EC8(ctx, base);
loc_83A47D40:
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

__attribute__((alias("__imp__sub_83A47D54"))) PPC_WEAK_FUNC(sub_83A47D54);
PPC_FUNC_IMPL(__imp__sub_83A47D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47D58"))) PPC_WEAK_FUNC(sub_83A47D58);
PPC_FUNC_IMPL(__imp__sub_83A47D58) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// beq cr6,0x83a47d9c
	if (cr6.eq) goto loc_83A47D9C;
	// bl 0x83a56f00
	ctx.lr = 0x83A47D90;
	sub_83A56F00(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83102db0
	ctx.lr = 0x83A47D98;
	sub_83102DB0(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_83A47D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47DB4"))) PPC_WEAK_FUNC(sub_83A47DB4);
PPC_FUNC_IMPL(__imp__sub_83A47DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47DB8"))) PPC_WEAK_FUNC(sub_83A47DB8);
PPC_FUNC_IMPL(__imp__sub_83A47DB8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x83a47e58
	if (cr6.eq) goto loc_83A47E58;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a47e54
	if (cr6.eq) goto loc_83A47E54;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83a47e48
	if (!cr6.eq) goto loc_83A47E48;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a56f38
	ctx.lr = 0x83A47E00;
	sub_83A56F38(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulld r11,r7,r5
	ctx.r11.s64 = ctx.r7.s64 * ctx.r5.s64;
	// divdu r11,r11,r4
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r4.u64);
	// tdllei r4,0
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// bl 0x83a56f00
	ctx.lr = 0x83A47E3C;
	sub_83A56F00(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r9.u64);
	// b 0x83a47e54
	goto loc_83A47E54;
loc_83A47E48:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// bl 0x83a56ec8
	ctx.lr = 0x83A47E54;
	sub_83A56EC8(ctx, base);
loc_83A47E54:
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_83A47E58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47E70"))) PPC_WEAK_FUNC(sub_83A47E70);
PPC_FUNC_IMPL(__imp__sub_83A47E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A47E78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a47f64
	if (cr6.eq) goto loc_83A47F64;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a47f20
	if (cr6.eq) goto loc_83A47F20;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a47ec4
	if (!cr6.eq) goto loc_83A47EC4;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r10,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A47EC4:
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83a56f38
	ctx.lr = 0x83A47ED0;
	sub_83A56F38(ctx, base);
	// ld r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// mulld r3,r5,r6
	ctx.r3.s64 = ctx.r5.s64 * ctx.r6.s64;
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// divdu r11,r3,r4
	ctx.r11.u64 = PPCDivide(ctx.r3.u64, ctx.r4.u64);
	// tdllei r4,0
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A47F20:
	// ld r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// ld r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// mulld r9,r11,r10
	ctx.r9.s64 = ctx.r11.s64 * ctx.r10.s64;
	// std r9,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r9.u64);
	// ld r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 64);
	// std r8,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r8.u64);
	// ld r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// mulld r3,r4,r7
	ctx.r3.s64 = ctx.r4.s64 * ctx.r7.s64;
	// divdu r10,r3,r11
	ctx.r10.u64 = PPCDivide(ctx.r3.u64, ctx.r11.u64);
	// tdllei r11,0
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83A47F64:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// std r10,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r10.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A47F7C"))) PPC_WEAK_FUNC(sub_83A47F7C);
PPC_FUNC_IMPL(__imp__sub_83A47F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47F80"))) PPC_WEAK_FUNC(sub_83A47F80);
PPC_FUNC_IMPL(__imp__sub_83A47F80) {
	PPC_FUNC_PROLOGUE();
	// std r4,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r4.u64);
	// std r5,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47F8C"))) PPC_WEAK_FUNC(sub_83A47F8C);
PPC_FUNC_IMPL(__imp__sub_83A47F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47F90"))) PPC_WEAK_FUNC(sub_83A47F90);
PPC_FUNC_IMPL(__imp__sub_83A47F90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// ld r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A47FAC"))) PPC_WEAK_FUNC(sub_83A47FAC);
PPC_FUNC_IMPL(__imp__sub_83A47FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A47FB0"))) PPC_WEAK_FUNC(sub_83A47FB0);
PPC_FUNC_IMPL(__imp__sub_83A47FB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x83a47fb8
	sub_83A47FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A47FB8"))) PPC_WEAK_FUNC(sub_83A47FB8);
PPC_FUNC_IMPL(__imp__sub_83A47FB8) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-21736
	ctx.r9.s64 = ctx.r11.s64 + -21736;
	// addi r8,r10,-24884
	ctx.r8.s64 = ctx.r10.s64 + -24884;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a47ffc
	if (cr6.eq) goto loc_83A47FFC;
	// li r4,88
	ctx.r4.s64 = 88;
	// bl 0x83a79fb8
	ctx.lr = 0x83A47FF8;
	sub_83A79FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A47FFC:
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

__attribute__((alias("__imp__sub_83A48010"))) PPC_WEAK_FUNC(sub_83A48010);
PPC_FUNC_IMPL(__imp__sub_83A48010) {
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
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,-21672
	ctx.r5.s64 = ctx.r11.s64 + -21672;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x83a79ff0
	ctx.lr = 0x83A48040;
	sub_83A79FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a480e8
	if (cr6.eq) goto loc_83A480E8;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r8,r11,-21736
	ctx.r8.s64 = ctx.r11.s64 + -21736;
	// addi r7,r10,-21728
	ctx.r7.s64 = ctx.r10.s64 + -21728;
	// addi r6,r9,-21732
	ctx.r6.s64 = ctx.r9.s64 + -21732;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// bl 0x839db810
	ctx.lr = 0x83A48074;
	sub_839DB810(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r11,-21688
	ctx.r5.s64 = ctx.r11.s64 + -21688;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a78940
	ctx.lr = 0x83A48090;
	sub_83A78940(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a480e8
	if (cr6.eq) goto loc_83A480E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// std r10,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r10.u64);
	// std r11,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_83A480D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A480E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a480d0
	goto loc_83A480D0;
}

__attribute__((alias("__imp__sub_83A480F0"))) PPC_WEAK_FUNC(sub_83A480F0);
PPC_FUNC_IMPL(__imp__sub_83A480F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r4,1844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1844, ctx.r4.u32);
	// stw r5,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A48104"))) PPC_WEAK_FUNC(sub_83A48104);
PPC_FUNC_IMPL(__imp__sub_83A48104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A48108"))) PPC_WEAK_FUNC(sub_83A48108);
PPC_FUNC_IMPL(__imp__sub_83A48108) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83a4d3d0
	sub_83A4D3D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A48110"))) PPC_WEAK_FUNC(sub_83A48110);
PPC_FUNC_IMPL(__imp__sub_83A48110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,1700(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1700);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1108, ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,1112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1112, ctx.r11.u32);
	// stw r11,1908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1908, ctx.r11.u32);
	// stw r11,1692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1692, ctx.r11.u32);
	// stw r11,1404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1404, ctx.r11.u32);
	// beq cr6,0x83a48140
	if (cr6.eq) goto loc_83A48140;
	// stw r11,1696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1696, ctx.r11.u32);
	// b 0x83a4815c
	goto loc_83A4815C;
loc_83A48140:
	// lwz r9,1380(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a4815c
	if (cr6.eq) goto loc_83A4815C;
	// lwz r9,1396(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a4815c
	if (cr6.eq) goto loc_83A4815C;
	// stw r10,1696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1696, ctx.r10.u32);
loc_83A4815C:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,1268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1268, ctx.r11.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,1272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1272, ctx.r11.u32);
	// std r11,1184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1184, ctx.r11.u64);
	// addi r9,r3,1752
	ctx.r9.s64 = ctx.r3.s64 + 1752;
	// std r11,1200(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1200, ctx.r11.u64);
	// std r11,1216(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1216, ctx.r11.u64);
	// lfs f0,9008(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// std r10,1192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1192, ctx.r10.u64);
	// stfs f0,1752(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1752, temp.u32);
	// std r10,1208(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1208, ctx.r10.u64);
	// std r10,1224(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1224, ctx.r10.u64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r11,1736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1736, ctx.r11.u32);
	// std r11,1744(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1744, ctx.r11.u64);
loc_83A4819C:
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x83a4819c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4819C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A481A8"))) PPC_WEAK_FUNC(sub_83A481A8);
PPC_FUNC_IMPL(__imp__sub_83A481A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A481CC;
	sub_831F8200(ctx, base);
	// lwz r10,1904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x83a481f0
	if (!cr6.eq) goto loc_83A481F0;
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
loc_83A481F0:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x83a482e4
	if (cr6.gt) goto loc_83A482E4;
	// lis r12,-31835
	ctx.r12.s64 = -2086338560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-32236
	ctx.r12.s64 = ctx.r12.s64 + -32236;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83A4823C;
	case 1:
		goto loc_83A48254;
	case 2:
		goto loc_83A4826C;
	case 3:
		goto loc_83A48284;
	case 4:
		goto loc_83A4829C;
	case 5:
		goto loc_83A4829C;
	case 6:
		goto loc_83A482B4;
	case 7:
		goto loc_83A482CC;
	case 8:
		goto loc_83A482CC;
	case 9:
		goto loc_83A482CC;
	default:
		return;
	}
	// lwz r29,-32196(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32196);
	// lwz r29,-32172(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32172);
	// lwz r29,-32148(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32148);
	// lwz r29,-32124(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32124);
	// lwz r29,-32100(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32100);
	// lwz r29,-32100(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32100);
	// lwz r29,-32076(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32076);
	// lwz r29,-32052(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32052);
	// lwz r29,-32052(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32052);
	// lwz r29,-32052(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -32052);
loc_83A4823C:
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
loc_83A48254:
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
loc_83A4826C:
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
loc_83A48284:
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
loc_83A4829C:
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
loc_83A482B4:
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
loc_83A482CC:
	// lwz r3,1104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
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
loc_83A482E4:
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

__attribute__((alias("__imp__sub_83A482FC"))) PPC_WEAK_FUNC(sub_83A482FC);
PPC_FUNC_IMPL(__imp__sub_83A482FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A48300"))) PPC_WEAK_FUNC(sub_83A48300);
PPC_FUNC_IMPL(__imp__sub_83A48300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A48308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a4ebb8
	ctx.lr = 0x83A4831C;
	sub_83A4EBB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,1268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4eba0
	ctx.lr = 0x83A48330;
	sub_83A4EBA0(ctx, base);
	// lwz r11,1280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1280);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a48378
	if (cr6.eq) goto loc_83A48378;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4ebb8
	ctx.lr = 0x83A4834C;
	sub_83A4EBB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4eba0
	ctx.lr = 0x83A48360;
	sub_83A4EBA0(ctx, base);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x83a4837c
	if (cr6.eq) goto loc_83A4837C;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x83a48378
	if (cr6.eq) goto loc_83A48378;
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// bgt cr6,0x83a4837c
	if (cr6.gt) goto loc_83A4837C;
loc_83A48378:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_83A4837C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A48384"))) PPC_WEAK_FUNC(sub_83A48384);
PPC_FUNC_IMPL(__imp__sub_83A48384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A48388"))) PPC_WEAK_FUNC(sub_83A48388);
PPC_FUNC_IMPL(__imp__sub_83A48388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A48390;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1084(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r27,1268(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1268);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r26,1272(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r25,1280(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a48574
	if (cr6.eq) goto loc_83A48574;
	// lwz r11,1296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1296);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a48574
	if (cr6.eq) goto loc_83A48574;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A483D8;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a48574
	if (cr6.eq) goto loc_83A48574;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a48574
	if (cr6.eq) goto loc_83A48574;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a48574
	if (cr6.eq) goto loc_83A48574;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A48400:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a48400
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A48400;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a48458
	if (cr6.eq) goto loc_83A48458;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_83A48420:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// beq cr6,0x83a48444
	if (cr6.eq) goto loc_83A48444;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x83a48444
	if (cr6.lt) goto loc_83A48444;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// blt cr6,0x83a48444
	if (cr6.lt) goto loc_83A48444;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83A48444:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83a48420
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A48420;
loc_83A48458:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a4ebb8
	ctx.lr = 0x83A4846C;
	sub_83A4EBB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(ctx.r25.s32, -1, xer);
	// beq cr6,0x83a48488
	if (cr6.eq) goto loc_83A48488;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83a4ebb8
	ctx.lr = 0x83A48484;
	sub_83A4EBB8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_83A48488:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a48300
	ctx.lr = 0x83A48490;
	sub_83A48300(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a48574
	if (cr6.eq) goto loc_83A48574;
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// ble cr6,0x83a484a4
	if (!cr6.gt) goto loc_83A484A4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83A484A4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83a484d0
	if (!cr6.eq) goto loc_83A484D0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a4eb60
	ctx.lr = 0x83A484C8;
	sub_83A4EB60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x83a484fc
	goto loc_83A484FC;
loc_83A484D0:
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83A484D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a484f0
	if (cr6.eq) goto loc_83A484F0;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A484F0;
	sub_831CDCF0(ctx, base);
loc_83A484F0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a484d8
	if (!cr0.eq) goto loc_83A484D8;
loc_83A484FC:
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(ctx.r25.s32, -1, xer);
	// beq cr6,0x83a48550
	if (cr6.eq) goto loc_83A48550;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x83a48534
	if (!cr6.eq) goto loc_83A48534;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a4eb60
	ctx.lr = 0x83A48528;
	sub_83A4EB60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A48534:
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A48544;
	sub_831CDCF0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A48550:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// beq cr6,0x83a48568
	if (cr6.eq) goto loc_83A48568;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A48568;
	sub_831CDCF0(ctx, base);
loc_83A48568:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A48574:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A48580"))) PPC_WEAK_FUNC(sub_83A48580);
PPC_FUNC_IMPL(__imp__sub_83A48580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83A48588;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1084(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r27,1268(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1268);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r26,1272(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r25,1280(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a48750
	if (cr6.eq) goto loc_83A48750;
	// lwz r11,1296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1296);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a48750
	if (cr6.eq) goto loc_83A48750;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A485D0;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a48750
	if (cr6.eq) goto loc_83A48750;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a48750
	if (cr6.eq) goto loc_83A48750;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a48750
	if (cr6.eq) goto loc_83A48750;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A485F8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a485f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A485F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a48650
	if (cr6.eq) goto loc_83A48650;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_83A48618:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// beq cr6,0x83a4863c
	if (cr6.eq) goto loc_83A4863C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x83a4863c
	if (cr6.lt) goto loc_83A4863C;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// blt cr6,0x83a4863c
	if (cr6.lt) goto loc_83A4863C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_83A4863C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83a48618
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A48618;
loc_83A48650:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a4ebb8
	ctx.lr = 0x83A48664;
	sub_83A4EBB8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(ctx.r25.s32, -1, xer);
	// beq cr6,0x83a48680
	if (cr6.eq) goto loc_83A48680;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83a4ebb8
	ctx.lr = 0x83A4867C;
	sub_83A4EBB8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_83A48680:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a48300
	ctx.lr = 0x83A48688;
	sub_83A48300(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a48750
	if (cr6.eq) goto loc_83A48750;
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// ble cr6,0x83a4869c
	if (!cr6.gt) goto loc_83A4869C;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83A4869C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x83a486c8
	if (!cr6.eq) goto loc_83A486C8;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a4eb80
	ctx.lr = 0x83A486C0;
	sub_83A4EB80(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x83a486f4
	goto loc_83A486F4;
loc_83A486C8:
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// li r30,8
	ctx.r30.s64 = 8;
loc_83A486D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a486e8
	if (cr6.eq) goto loc_83A486E8;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A486E8;
	sub_831CDCF0(ctx, base);
loc_83A486E8:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a486d0
	if (!cr0.eq) goto loc_83A486D0;
loc_83A486F4:
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(ctx.r25.s32, -1, xer);
	// beq cr6,0x83a4872c
	if (cr6.eq) goto loc_83A4872C;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x83a48734
	if (!cr6.eq) goto loc_83A48734;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a4eb80
	ctx.lr = 0x83A48720;
	sub_83A4EB80(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A4872C:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// beq cr6,0x83a48744
	if (cr6.eq) goto loc_83A48744;
loc_83A48734:
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A48744;
	sub_831CDCF0(ctx, base);
loc_83A48744:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_83A48750:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4875C"))) PPC_WEAK_FUNC(sub_83A4875C);
PPC_FUNC_IMPL(__imp__sub_83A4875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A48760"))) PPC_WEAK_FUNC(sub_83A48760);
PPC_FUNC_IMPL(__imp__sub_83A48760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-31767
	ctx.r10.s64 = -2081882112;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,-16800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16800, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A48778"))) PPC_WEAK_FUNC(sub_83A48778);
PPC_FUNC_IMPL(__imp__sub_83A48778) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,2424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2424);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a487ec
	if (!cr6.eq) goto loc_83A487EC;
	// lwz r11,2416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// blt cr6,0x83a487c4
	if (cr6.lt) goto loc_83A487C4;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// bgt cr6,0x83a487c4
	if (cr6.gt) goto loc_83A487C4;
	// lwz r4,1716(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x83a4f4f0
	ctx.lr = 0x83A487BC;
	sub_83A4F4F0(ctx, base);
	// lwz r4,1716(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// b 0x83a48920
	goto loc_83A48920;
loc_83A487C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83A487C8:
	// stw r11,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83a4f4f0
	ctx.lr = 0x83A487D8;
	sub_83A4F4F0(ctx, base);
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
loc_83A487EC:
	// ld r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1720);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83a48804
	if (!cr6.eq) goto loc_83A48804;
	// lwz r11,1716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a487c4
	if (!cr6.gt) goto loc_83A487C4;
loc_83A48804:
	// lwz r11,2400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2400);
	// lwz r6,1716(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,1720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1720, ctx.r11.u64);
	// bge cr6,0x83a487c8
	if (!cr6.lt) goto loc_83A487C8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r5,4532(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4532);
	// lwz r4,4528(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4528);
	// bl 0x83a4e4d8
	ctx.lr = 0x83A48840;
	sub_83A4E4D8(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// std r11,1720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1720, ctx.r11.u64);
	// lwz r4,4540(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4540);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a48884
	if (cr6.eq) goto loc_83A48884;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r5,4544(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4544);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r6,1716(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// bl 0x83a4e4d8
	ctx.lr = 0x83A4886C;
	sub_83A4E4D8(ctx, base);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r6,r11
	cr6.compare<uint64_t>(ctx.r6.u64, ctx.r11.u64, xer);
	// bge cr6,0x83a48888
	if (!cr6.lt) goto loc_83A48888;
	// std r6,1720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1720, ctx.r6.u64);
	// b 0x83a48888
	goto loc_83A48888;
loc_83A48884:
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_83A48888:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4540(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4540);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a488c8
	if (cr6.eq) goto loc_83A488C8;
	// cmpld cr6,r11,r6
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r6.u64, xer);
	// bge cr6,0x83a488b4
	if (!cr6.lt) goto loc_83A488B4;
	// lwz r5,4544(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4544);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x83a488c4
	goto loc_83A488C4;
loc_83A488B4:
	// lwz r5,4532(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4532);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,4528(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4528);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
loc_83A488C4:
	// bl 0x83a4e588
	ctx.lr = 0x83A488C8;
	sub_83A4E588(ctx, base);
loc_83A488C8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x83a488e0
	if (cr6.gt) goto loc_83A488E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a4890c
	if (!cr6.gt) goto loc_83A4890C;
loc_83A488E0:
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r10,1664(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1664);
	// ld r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1720);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r9,1720(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1720);
	// std r9,1144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1144, ctx.r9.u64);
loc_83A4890C:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,1716(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4f4f0
	ctx.lr = 0x83A4891C;
	sub_83A4F4F0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83A48920:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4f500
	ctx.lr = 0x83A48928;
	sub_83A4F500(ctx, base);
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

__attribute__((alias("__imp__sub_83A4893C"))) PPC_WEAK_FUNC(sub_83A4893C);
PPC_FUNC_IMPL(__imp__sub_83A4893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A48940"))) PPC_WEAK_FUNC(sub_83A48940);
PPC_FUNC_IMPL(__imp__sub_83A48940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A48948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a48970
	if (cr6.eq) goto loc_83A48970;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A48970:
	// addi r31,r29,1084
	ctx.r31.s64 = ctx.r29.s64 + 1084;
	// li r30,3
	ctx.r30.s64 = 3;
loc_83A48978:
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a489b0
	if (!cr6.gt) goto loc_83A489B0;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a489b0
	if (cr6.eq) goto loc_83A489B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a489b0
	if (cr6.eq) goto loc_83A489B0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A489B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A489B0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a48978
	if (!cr0.eq) goto loc_83A48978;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A489C4"))) PPC_WEAK_FUNC(sub_83A489C4);
PPC_FUNC_IMPL(__imp__sub_83A489C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A489C8"))) PPC_WEAK_FUNC(sub_83A489C8);
PPC_FUNC_IMPL(__imp__sub_83A489C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A489D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a48a48
	if (cr6.eq) goto loc_83A48A48;
	// lwz r3,1096(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a48a00
	if (cr6.eq) goto loc_83A48A00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48A00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A48A00:
	// addi r31,r29,1084
	ctx.r31.s64 = ctx.r29.s64 + 1084;
	// li r30,3
	ctx.r30.s64 = 3;
loc_83A48A08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a48a34
	if (cr6.eq) goto loc_83A48A34;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a48a34
	if (cr6.eq) goto loc_83A48A34;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48A34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A48A34:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a48a08
	if (!cr0.eq) goto loc_83A48A08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1900, ctx.r11.u32);
loc_83A48A48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A48A50"))) PPC_WEAK_FUNC(sub_83A48A50);
PPC_FUNC_IMPL(__imp__sub_83A48A50) {
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
	// lwz r3,1080(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a48b0c
	if (cr6.eq) goto loc_83A48B0C;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a48b0c
	if (!cr6.eq) goto loc_83A48B0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48A94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,1168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x83a48b30
	if (!cr6.eq) goto loc_83A48B30;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a48b28
	if (!cr6.eq) goto loc_83A48B28;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48ABC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,1176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83a48ae0
	if (cr6.eq) goto loc_83A48AE0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a48ae0
	if (cr6.eq) goto loc_83A48AE0;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1868, ctx.r11.u8);
	// b 0x83a48b10
	goto loc_83A48B10;
loc_83A48AE0:
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a48b0c
	if (cr6.eq) goto loc_83A48B0C;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A48B08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
loc_83A48B0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83A48B10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83A48B28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a48b10
	goto loc_83A48B10;
loc_83A48B30:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a48b10
	if (!cr6.eq) goto loc_83A48B10;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// b 0x83a48b10
	goto loc_83A48B10;
}

__attribute__((alias("__imp__sub_83A48B4C"))) PPC_WEAK_FUNC(sub_83A48B4C);
PPC_FUNC_IMPL(__imp__sub_83A48B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A48B50"))) PPC_WEAK_FUNC(sub_83A48B50);
PPC_FUNC_IMPL(__imp__sub_83A48B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A48B58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,1084
	ctx.r31.s64 = ctx.r3.s64 + 1084;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_83A48B6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a48be0
	if (cr6.eq) goto loc_83A48BE0;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a48be0
	if (cr6.eq) goto loc_83A48BE0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48B98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a48ba8
	if (cr6.eq) goto loc_83A48BA8;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a48c68
	if (!cr6.eq) goto loc_83A48C68;
loc_83A48BA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48BC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83A48BE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A48BE0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// blt cr6,0x83a48b6c
	if (cr6.lt) goto loc_83A48B6C;
	// lwz r3,1080(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a48c5c
	if (cr6.eq) goto loc_83A48C5C;
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a48c5c
	if (!cr6.eq) goto loc_83A48C5C;
	// lwz r11,1168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a48c20
	if (cr6.eq) goto loc_83A48C20;
	// lwz r11,1172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1172);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a48c5c
	if (!cr6.eq) goto loc_83A48C5C;
loc_83A48C20:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48C30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a48c90
	if (!cr6.eq) goto loc_83A48C90;
	// lwz r11,1900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1900);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r28,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r28.u32);
	// stw r28,1168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1168, ctx.r28.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// std r28,1144(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1144, ctx.r28.u64);
	// std r10,1152(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1152, ctx.r10.u64);
	// bne cr6,0x83a48c7c
	if (!cr6.eq) goto loc_83A48C7C;
	// stw r28,1400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1400, ctx.r28.u32);
loc_83A48C5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A48C68:
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1868(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1868, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A48C7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1400, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A48C90:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83a48cc8
	if (!cr6.eq) goto loc_83A48CC8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,1172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1172, ctx.r28.u32);
	// stw r28,1168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1168, ctx.r28.u32);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// std r28,1144(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1144, ctx.r28.u64);
	// std r11,1152(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1152, ctx.r11.u64);
	// addi r4,r10,-21548
	ctx.r4.s64 = ctx.r10.s64 + -21548;
	// bl 0x831ea3f0
	ctx.lr = 0x83A48CBC;
	sub_831EA3F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83A48CC8:
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r11,1868(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1868, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A48CD8"))) PPC_WEAK_FUNC(sub_83A48CD8);
PPC_FUNC_IMPL(__imp__sub_83A48CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A48CE0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r3,1084(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1084);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A48D24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83a48d50
	if (!cr6.eq) goto loc_83A48D50;
	// ld r11,1216(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1216);
	// ld r10,1224(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1224);
	// std r11,1128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1128, ctx.r11.u64);
	// std r10,1136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1136, ctx.r10.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A48D50:
	// lwz r3,1084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A48D6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A48D74;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a48d8c
	if (!cr6.eq) goto loc_83A48D8C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4ebd0
	ctx.lr = 0x83A48D84;
	sub_83A4EBD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a48d9c
	if (cr6.eq) goto loc_83A48D9C;
loc_83A48D8C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A48D94;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x83a48e40
	if (!cr6.eq) goto loc_83A48E40;
loc_83A48D9C:
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce710
	ctx.lr = 0x83A48DA8;
	sub_831CE710(ctx, base);
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce710
	ctx.lr = 0x83A48DB8;
	sub_831CE710(ctx, base);
	// ld r3,1216(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1216);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A48DC4;
	sub_831CE710(ctx, base);
	// ld r3,1224(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1224);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A48DD0;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// fdivs f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x83a48e48
	if (cr6.gt) goto loc_83A48E48;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a48e48
	if (cr6.eq) goto loc_83A48E48;
	// ld r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1200);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x83a48e0c
	if (!cr6.eq) goto loc_83A48E0C;
	// ld r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1184);
	// ld r10,1192(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1192);
	// std r11,1200(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1200, ctx.r11.u64);
	// std r10,1208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1208, ctx.r10.u64);
loc_83A48E0C:
	// ld r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1200);
	// subf r3,r11,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x831ce710
	ctx.lr = 0x83A48E18;
	sub_831CE710(ctx, base);
	// ld r3,1208(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1208);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A48E24;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// ld r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x83a48e48
	goto loc_83A48E48;
loc_83A48E40:
	// ld r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_83A48E48:
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// std r11,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r11.u64);
	// std r29,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r29.u64);
	// std r30,1216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1216, ctx.r30.u64);
	// std r29,1224(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1224, ctx.r29.u64);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A48E70"))) PPC_WEAK_FUNC(sub_83A48E70);
PPC_FUNC_IMPL(__imp__sub_83A48E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A48E78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r10,-10992
	ctx.r4.s64 = ctx.r10.s64 + -10992;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x83a481a8
	ctx.lr = 0x83A48E98;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a48ea8
	if (cr6.eq) goto loc_83A48EA8;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x83a48eac
	if (!cr6.eq) goto loc_83A48EAC;
loc_83A48EA8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A48EAC:
	// addi r30,r31,1828
	ctx.r30.s64 = ctx.r31.s64 + 1828;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A48EBC;
	sub_83A761B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a48ef8
	if (cr6.eq) goto loc_83A48EF8;
	// lwz r3,1872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1872);
	// bl 0x83a75cd8
	ctx.lr = 0x83A48ECC;
	sub_83A75CD8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a48ee4
	if (cr6.eq) goto loc_83A48EE4;
	// bl 0x83a53678
	ctx.lr = 0x83A48EDC;
	sub_83A53678(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a50178
	ctx.lr = 0x83A48EE4;
	sub_83A50178(ctx, base);
loc_83A48EE4:
	// lwz r3,1872(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1872);
	// bl 0x83a75d58
	ctx.lr = 0x83A48EEC;
	sub_83A75D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83a761b8
	ctx.lr = 0x83A48EF8;
	sub_83A761B8(ctx, base);
loc_83A48EF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A48F04"))) PPC_WEAK_FUNC(sub_83A48F04);
PPC_FUNC_IMPL(__imp__sub_83A48F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A48F08"))) PPC_WEAK_FUNC(sub_83A48F08);
PPC_FUNC_IMPL(__imp__sub_83A48F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83A48F10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,67
	cr6.compare<uint32_t>(ctx.r10.u32, 67, xer);
	// bne cr6,0x83a48fac
	if (!cr6.eq) goto loc_83A48FAC;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(ctx.r11.u32, 82, xer);
	// bne cr6,0x83a48fac
	if (!cr6.eq) goto loc_83A48FAC;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// bne cr6,0x83a48fac
	if (!cr6.eq) goto loc_83A48FAC;
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(ctx.r11.u32, 68, xer);
	// bne cr6,0x83a48fac
	if (!cr6.eq) goto loc_83A48FAC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a7a680
	ctx.lr = 0x83A48F68;
	sub_83A7A680(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4388);
	// bl 0x83a7a460
	ctx.lr = 0x83A48F80;
	sub_83A7A460(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// addi r5,r10,-21520
	ctx.r5.s64 = ctx.r10.s64 + -21520;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83a772d0
	ctx.lr = 0x83A48F94;
	sub_83A772D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83a777f8
	ctx.lr = 0x83A48FA0;
	sub_83A777F8(ctx, base);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// ble cr6,0x83a48fac
	if (!cr6.gt) goto loc_83A48FAC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83A48FAC:
	// lwz r10,1392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83a48ffc
	if (cr6.eq) goto loc_83A48FFC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4364(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4364);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a48ffc
	if (cr6.eq) goto loc_83A48FFC;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r29,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r30.u32);
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A48FEC;
	sub_831CDCF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83A48FFC:
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r28,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,1408
	ctx.r3.s64 = ctx.r31.s64 + 1408;
	// bl 0x83a573a8
	ctx.lr = 0x83A49018;
	sub_83A573A8(ctx, base);
	// stw r28,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A49024"))) PPC_WEAK_FUNC(sub_83A49024);
PPC_FUNC_IMPL(__imp__sub_83A49024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49028"))) PPC_WEAK_FUNC(sub_83A49028);
PPC_FUNC_IMPL(__imp__sub_83A49028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A49030;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a490d4
	if (cr6.eq) goto loc_83A490D4;
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r26,1380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1380, ctx.r26.u32);
	// stw r26,1396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1396, ctx.r26.u32);
loc_83A4906C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a4906c
	if (!cr6.eq) goto loc_83A4906C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r28,256
	cr6.compare<int32_t>(ctx.r28.s32, 256, xer);
	// ble cr6,0x83a49094
	if (!cr6.gt) goto loc_83A49094;
	// li r28,255
	ctx.r28.s64 = 255;
loc_83A49094:
	// addi r30,r31,1408
	ctx.r30.s64 = ctx.r31.s64 + 1408;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A490A8;
	sub_831CDCF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83A490B8;
	sub_831CE980(ctx, base);
	// std r25,1664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1664, ctx.r25.u64);
	// std r24,1672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1672, ctx.r24.u64);
	// stw r26,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r26.u32);
	// stw r27,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r27.u32);
	// stw r27,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A490D4:
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21504
	ctx.r4.s64 = ctx.r11.s64 + -21504;
	// bl 0x831ea3f0
	ctx.lr = 0x83A490E4;
	sub_831EA3F0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A490F4"))) PPC_WEAK_FUNC(sub_83A490F4);
PPC_FUNC_IMPL(__imp__sub_83A490F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A490F8"))) PPC_WEAK_FUNC(sub_83A490F8);
PPC_FUNC_IMPL(__imp__sub_83A490F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// lwz r11,1904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a49140
	if (!cr6.eq) goto loc_83A49140;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A4912C;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4913c
	if (cr6.eq) goto loc_83A4913C;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x83a49140
	if (!cr6.eq) goto loc_83A49140;
loc_83A4913C:
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
loc_83A49140:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10992
	ctx.r4.s64 = ctx.r11.s64 + -10992;
	// bl 0x83a481a8
	ctx.lr = 0x83A49150;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a49168
	if (cr6.eq) goto loc_83A49168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a489c8
	ctx.lr = 0x83A49160;
	sub_83A489C8(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a513e0
	ctx.lr = 0x83A49168;
	sub_83A513E0(ctx, base);
loc_83A49168:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48110
	ctx.lr = 0x83A49170;
	sub_83A48110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49188"))) PPC_WEAK_FUNC(sub_83A49188);
PPC_FUNC_IMPL(__imp__sub_83A49188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83A49190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r3,1096(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1096);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r4,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r4.u32);
	// beq cr6,0x83a491c4
	if (cr6.eq) goto loc_83A491C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A491C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A491C4:
	// addi r31,r31,1084
	ctx.r31.s64 = ctx.r31.s64 + 1084;
	// li r30,3
	ctx.r30.s64 = 3;
loc_83A491CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a491f0
	if (cr6.eq) goto loc_83A491F0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A491F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83A491F0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83a491cc
	if (!cr0.eq) goto loc_83A491CC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A49204"))) PPC_WEAK_FUNC(sub_83A49204);
PPC_FUNC_IMPL(__imp__sub_83A49204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49208"))) PPC_WEAK_FUNC(sub_83A49208);
PPC_FUNC_IMPL(__imp__sub_83A49208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,1100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1100, ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bne cr6,0x83a49228
	if (!cr6.eq) goto loc_83A49228;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83a4f9f8
	sub_83A4F9F8(ctx, base);
	return;
loc_83A49228:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83a4f9f8
	sub_83A4F9F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A49230"))) PPC_WEAK_FUNC(sub_83A49230);
PPC_FUNC_IMPL(__imp__sub_83A49230) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,1100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a492ec
	if (cr6.eq) goto loc_83A492EC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a49274
	if (cr6.eq) goto loc_83A49274;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a492d8
	if (!cr6.eq) goto loc_83A492D8;
	// b 0x83a492ec
	goto loc_83A492EC;
loc_83A49274:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-10992
	ctx.r30.s64 = ctx.r11.s64 + -10992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a481a8
	ctx.lr = 0x83A49288;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a492c8
	if (cr6.eq) goto loc_83A492C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a481a8
	ctx.lr = 0x83A4929C;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a492c8
	if (cr6.eq) goto loc_83A492C8;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a492d8
	if (!cr6.gt) goto loc_83A492D8;
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a492d8
	if (cr6.eq) goto loc_83A492D8;
	// lwz r11,1084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a492d8
	if (cr6.eq) goto loc_83A492D8;
loc_83A492C8:
	// lwz r11,1084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a492ec
	if (!cr6.eq) goto loc_83A492EC;
loc_83A492D8:
	// lwz r10,1096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
loc_83A492EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49304"))) PPC_WEAK_FUNC(sub_83A49304);
PPC_FUNC_IMPL(__imp__sub_83A49304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49308"))) PPC_WEAK_FUNC(sub_83A49308);
PPC_FUNC_IMPL(__imp__sub_83A49308) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,1120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1120, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49318"))) PPC_WEAK_FUNC(sub_83A49318);
PPC_FUNC_IMPL(__imp__sub_83A49318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stfs f1,1232(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1232, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49328"))) PPC_WEAK_FUNC(sub_83A49328);
PPC_FUNC_IMPL(__imp__sub_83A49328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stfs f1,4772(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4772, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4933C"))) PPC_WEAK_FUNC(sub_83A4933C);
PPC_FUNC_IMPL(__imp__sub_83A4933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49340"))) PPC_WEAK_FUNC(sub_83A49340);
PPC_FUNC_IMPL(__imp__sub_83A49340) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4760(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4760);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,4764(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4764);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,4768(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4768);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49370"))) PPC_WEAK_FUNC(sub_83A49370);
PPC_FUNC_IMPL(__imp__sub_83A49370) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,1244(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1244);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49380"))) PPC_WEAK_FUNC(sub_83A49380);
PPC_FUNC_IMPL(__imp__sub_83A49380) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,1248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1248, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49390"))) PPC_WEAK_FUNC(sub_83A49390);
PPC_FUNC_IMPL(__imp__sub_83A49390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1252(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1252);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,1256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1256);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A493A4"))) PPC_WEAK_FUNC(sub_83A493A4);
PPC_FUNC_IMPL(__imp__sub_83A493A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A493A8"))) PPC_WEAK_FUNC(sub_83A493A8);
PPC_FUNC_IMPL(__imp__sub_83A493A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1260);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,1264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1264);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A493BC"))) PPC_WEAK_FUNC(sub_83A493BC);
PPC_FUNC_IMPL(__imp__sub_83A493BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A493C0"))) PPC_WEAK_FUNC(sub_83A493C0);
PPC_FUNC_IMPL(__imp__sub_83A493C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,836(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 836);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A493C8"))) PPC_WEAK_FUNC(sub_83A493C8);
PPC_FUNC_IMPL(__imp__sub_83A493C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1864);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a493dc
	if (!cr6.eq) goto loc_83A493DC;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83a4fa00
	sub_83A4FA00(ctx, base);
	return;
loc_83A493DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A493E4"))) PPC_WEAK_FUNC(sub_83A493E4);
PPC_FUNC_IMPL(__imp__sub_83A493E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A493E8"))) PPC_WEAK_FUNC(sub_83A493E8);
PPC_FUNC_IMPL(__imp__sub_83A493E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1864(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A493F0"))) PPC_WEAK_FUNC(sub_83A493F0);
PPC_FUNC_IMPL(__imp__sub_83A493F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stw r4,1124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1124, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49400"))) PPC_WEAK_FUNC(sub_83A49400);
PPC_FUNC_IMPL(__imp__sub_83A49400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A49408;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r9,1128(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1128);
	// addi r29,r11,-10992
	ctx.r29.s64 = ctx.r11.s64 + -10992;
	// std r9,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r8,1136(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1136);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r8,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r8.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x83a481a8
	ctx.lr = 0x83A49444;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a494d8
	if (!cr6.eq) goto loc_83A494D8;
	// lwz r11,1716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83a494d8
	if (!cr6.gt) goto loc_83A494D8;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-23580(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f31,f11,f8
	ctx.f31.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// bl 0x83a49230
	ctx.lr = 0x83A4949C;
	sub_83A49230(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83a494b0
	if (!cr6.eq) goto loc_83A494B0;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lfs f0,-21416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_83A494B0:
	// ld r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x831ce710
	ctx.lr = 0x83A494B8;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_83A494D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A494E4"))) PPC_WEAK_FUNC(sub_83A494E4);
PPC_FUNC_IMPL(__imp__sub_83A494E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A494E8"))) PPC_WEAK_FUNC(sub_83A494E8);
PPC_FUNC_IMPL(__imp__sub_83A494E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A49514;
	sub_831F8200(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bgt cr6,0x83a49568
	if (cr6.gt) goto loc_83A49568;
	// lis r12,-31835
	ctx.r12.s64 = -2086338560;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-27340
	ctx.r12.s64 = ctx.r12.s64 + -27340;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_83A49560;
	case 1:
		goto loc_83A49560;
	case 2:
		goto loc_83A49568;
	case 3:
		goto loc_83A49568;
	case 4:
		goto loc_83A49568;
	case 5:
		goto loc_83A49568;
	case 6:
		goto loc_83A49568;
	case 7:
		goto loc_83A49568;
	case 8:
		goto loc_83A49560;
	case 9:
		goto loc_83A49560;
	case 10:
		goto loc_83A49560;
	default:
		return;
	}
	// lwz r29,-27296(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27296);
	// lwz r29,-27296(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27296);
	// lwz r29,-27288(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27288);
	// lwz r29,-27288(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27288);
	// lwz r29,-27288(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27288);
	// lwz r29,-27288(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27288);
	// lwz r29,-27288(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27288);
	// lwz r29,-27288(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27288);
	// lwz r29,-27296(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27296);
	// lwz r29,-27296(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27296);
	// lwz r29,-27296(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + -27296);
loc_83A49560:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83a495d8
	goto loc_83A495D8;
loc_83A49568:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4876(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4876);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83a49560
	if (cr6.eq) goto loc_83A49560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83a4fba8
	ctx.lr = 0x83A49580;
	sub_83A4FBA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83a4959c
	if (!cr6.gt) goto loc_83A4959C;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// b 0x83a495b8
	goto loc_83A495B8;
loc_83A4959C:
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// lwz r10,-10984(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10984);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_83A495B8:
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// lwz r10,1084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a495d4
	if (!cr6.eq) goto loc_83A495D4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r11.u32);
loc_83A495D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83A495D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A495F0"))) PPC_WEAK_FUNC(sub_83A495F0);
PPC_FUNC_IMPL(__imp__sub_83A495F0) {
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
	// lwz r11,1124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83a496bc
	if (cr6.eq) goto loc_83A496BC;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a49680
	if (!cr6.eq) goto loc_83A49680;
	// ld r11,1152(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1152);
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(ctx.r11.s64, -1, xer);
	// beq cr6,0x83a496bc
	if (cr6.eq) goto loc_83A496BC;
	// ld r10,1144(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1144);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// blt cr6,0x83a496bc
	if (cr6.lt) goto loc_83A496BC;
	// lwz r3,1080(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a496bc
	if (cr6.eq) goto loc_83A496BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,1664(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1664);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A49658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// std r9,1144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1144, ctx.r9.u64);
	// stw r8,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r8.u32);
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
loc_83A49680:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a496bc
	if (!cr6.eq) goto loc_83A496BC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4f268
	ctx.lr = 0x83A49690;
	sub_83A4F268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a496bc
	if (!cr6.eq) goto loc_83A496BC;
	// lwz r5,1684(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// lwz r4,1680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4ebe8
	ctx.lr = 0x83A496A8;
	sub_83A4EBE8(ctx, base);
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r10.u32);
	// stw r9,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r9.u32);
loc_83A496BC:
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

__attribute__((alias("__imp__sub_83A496D0"))) PPC_WEAK_FUNC(sub_83A496D0);
PPC_FUNC_IMPL(__imp__sub_83A496D0) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83a49718
	if (!cr6.eq) goto loc_83A49718;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83a4f268
	ctx.lr = 0x83A496F8;
	sub_83A4F268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4973c
	if (!cr6.eq) goto loc_83A4973C;
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
loc_83A49718:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a4973c
	if (!cr6.eq) goto loc_83A4973C;
	// ld r11,1152(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1152);
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(ctx.r11.s64, -1, xer);
	// beq cr6,0x83a4973c
	if (cr6.eq) goto loc_83A4973C;
	// ld r10,1144(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 1144);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r11.s64, xer);
	// bge cr6,0x83a49740
	if (!cr6.lt) goto loc_83A49740;
loc_83A4973C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83A49740:
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

__attribute__((alias("__imp__sub_83A49754"))) PPC_WEAK_FUNC(sub_83A49754);
PPC_FUNC_IMPL(__imp__sub_83A49754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49758"))) PPC_WEAK_FUNC(sub_83A49758);
PPC_FUNC_IMPL(__imp__sub_83A49758) {
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
	// lwz r3,1080(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a49858
	if (cr6.eq) goto loc_83A49858;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x83a49858
	if (cr6.eq) goto loc_83A49858;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x83a497b4
	if (!cr6.eq) goto loc_83A497B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83A497B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
loc_83A497B4:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x83a49858
	if (!cr6.eq) goto loc_83A49858;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a49858
	if (cr6.eq) goto loc_83A49858;
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83a49858
	if (!cr6.eq) goto loc_83A49858;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83A497E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a49824
	if (cr6.eq) goto loc_83A49824;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83a49858
	if (!cr6.eq) goto loc_83A49858;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,1144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1144, ctx.r11.u64);
	// addi r4,r9,-21412
	ctx.r4.s64 = ctx.r9.s64 + -21412;
	// std r10,1152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1152, ctx.r10.u64);
	// bl 0x831ea3f0
	ctx.lr = 0x83A49820;
	sub_831EA3F0(ctx, base);
	// b 0x83a49858
	goto loc_83A49858;
loc_83A49824:
	// lwz r10,1900(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r11.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
	// std r11,1144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1144, ctx.r11.u64);
	// std r9,1152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1152, ctx.r9.u64);
	// bne cr6,0x83a49854
	if (!cr6.eq) goto loc_83A49854;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
	// b 0x83a49858
	goto loc_83A49858;
loc_83A49854:
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
loc_83A49858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49870"))) PPC_WEAK_FUNC(sub_83A49870);
PPC_FUNC_IMPL(__imp__sub_83A49870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,1276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1276);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a498cc
	if (cr6.lt) goto loc_83A498CC;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x83a498cc
	if (!cr6.lt) goto loc_83A498CC;
	// lwz r9,100(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x83a498cc
	if (cr6.eq) goto loc_83A498CC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r8,108(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x83a498cc
	if (!cr6.eq) goto loc_83A498CC;
	// mulli r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 * 20;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// subfc r11,r10,r8
	xer.ca = ctx.r8.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83A498CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A498D4"))) PPC_WEAK_FUNC(sub_83A498D4);
PPC_FUNC_IMPL(__imp__sub_83A498D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A498D8"))) PPC_WEAK_FUNC(sub_83A498D8);
PPC_FUNC_IMPL(__imp__sub_83A498D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r5,271
	ctx.r11.s64 = ctx.r5.s64 + 271;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83a49938
	if (cr6.eq) goto loc_83A49938;
	// addi r11,r5,321
	ctx.r11.s64 = ctx.r5.s64 + 321;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83a49938
	if (cr6.lt) goto loc_83A49938;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bge cr6,0x83a49938
	if (!cr6.lt) goto loc_83A49938;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83a49938
	if (cr6.eq) goto loc_83A49938;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_83A49938:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49940"))) PPC_WEAK_FUNC(sub_83A49940);
PPC_FUNC_IMPL(__imp__sub_83A49940) {
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
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,1276(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// bl 0x83a500e0
	ctx.lr = 0x83A49968;
	sub_83A500E0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83a49978
	if (!cr6.eq) goto loc_83A49978;
	// lwz r11,1276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	// stw r11,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r11.u32);
loc_83A49978:
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

__attribute__((alias("__imp__sub_83A4998C"))) PPC_WEAK_FUNC(sub_83A4998C);
PPC_FUNC_IMPL(__imp__sub_83A4998C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49990"))) PPC_WEAK_FUNC(sub_83A49990);
PPC_FUNC_IMPL(__imp__sub_83A49990) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,1088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1088, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A499A0"))) PPC_WEAK_FUNC(sub_83A499A0);
PPC_FUNC_IMPL(__imp__sub_83A499A0) {
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
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-10992
	ctx.r5.s64 = ctx.r11.s64 + -10992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a494e8
	ctx.lr = 0x83A499CC;
	sub_83A494E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a49a18
	if (cr6.eq) goto loc_83A49A18;
	// addi r11,r30,321
	ctx.r11.s64 = ctx.r30.s64 + 321;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83a49a18
	if (cr6.lt) goto loc_83A49A18;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x83a49a18
	if (!cr6.lt) goto loc_83A49A18;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83a49a18
	if (cr6.eq) goto loc_83A49A18;
	// lwz r11,1296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bne cr6,0x83a49a1c
	if (!cr6.eq) goto loc_83A49A1C;
loc_83A49A18:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83A49A1C:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49A34"))) PPC_WEAK_FUNC(sub_83A49A34);
PPC_FUNC_IMPL(__imp__sub_83A49A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49A38"))) PPC_WEAK_FUNC(sub_83A49A38);
PPC_FUNC_IMPL(__imp__sub_83A49A38) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r4,1728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1728, ctx.r4.u32);
	// stw r5,1732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1732, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49A4C"))) PPC_WEAK_FUNC(sub_83A49A4C);
PPC_FUNC_IMPL(__imp__sub_83A49A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49A50"))) PPC_WEAK_FUNC(sub_83A49A50);
PPC_FUNC_IMPL(__imp__sub_83A49A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83A49A58;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce778
	ctx.lr = 0x83A49A60;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,4752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4752);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// lwz r11,4756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4756);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// lwz r11,1728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// addi r31,r11,-10992
	ctx.r31.s64 = ctx.r11.s64 + -10992;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83a481a8
	ctx.lr = 0x83A49AA0;
	sub_83A481A8(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x83a49f38
	if (!cr6.eq) goto loc_83A49F38;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r24,r11,4752
	ctx.r24.s64 = ctx.r11.s64 + 4752;
	// bl 0x83a49400
	ctx.lr = 0x83A49AC4;
	sub_83A49400(ctx, base);
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(ctx.r31.u64, 0, xer);
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x831ce710
	ctx.lr = 0x83A49AD8;
	sub_831CE710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A49AE4;
	sub_831CE710(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f30,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// lwz r10,1716(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1716);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,1124(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1124);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fdivs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// fmuls f29,f8,f30
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// bne cr6,0x83a49e94
	if (!cr6.eq) goto loc_83A49E94;
	// lwz r9,76(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f13,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmuls f0,f9,f30
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x83a49f38
	if (cr6.lt) goto loc_83A49F38;
	// fdivs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a49b94
	if (cr6.eq) goto loc_83A49B94;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_83A49B94:
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a49d4c
	if (!cr6.lt) goto loc_83A49D4C;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,8
	cr6.compare<int32_t>(ctx.r9.s32, 8, xer);
	// blt cr6,0x83a49ce0
	if (cr6.lt) goto loc_83A49CE0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_83A49BB4:
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d4c
	if (cr6.lt) goto loc_83A49D4C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d18
	if (cr6.lt) goto loc_83A49D18;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d20
	if (cr6.lt) goto loc_83A49D20;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d28
	if (cr6.lt) goto loc_83A49D28;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d30
	if (cr6.lt) goto loc_83A49D30;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d38
	if (cr6.lt) goto loc_83A49D38;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d40
	if (cr6.lt) goto loc_83A49D40;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d48
	if (cr6.lt) goto loc_83A49D48;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r9,r10,-7
	ctx.r9.s64 = ctx.r10.s64 + -7;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, xer);
	// blt cr6,0x83a49bb4
	if (cr6.lt) goto loc_83A49BB4;
loc_83A49CE0:
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bge cr6,0x83a49d50
	if (!cr6.lt) goto loc_83A49D50;
loc_83A49CE8:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f13,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f0,f31
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x83a49d4c
	if (cr6.lt) goto loc_83A49D4C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x83a49ce8
	if (cr6.lt) goto loc_83A49CE8;
	// b 0x83a49d4c
	goto loc_83A49D4C;
loc_83A49D18:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x83a49d4c
	goto loc_83A49D4C;
loc_83A49D20:
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// b 0x83a49d4c
	goto loc_83A49D4C;
loc_83A49D28:
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// b 0x83a49d4c
	goto loc_83A49D4C;
loc_83A49D30:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x83a49d4c
	goto loc_83A49D4C;
loc_83A49D38:
	// addi r28,r28,5
	ctx.r28.s64 = ctx.r28.s64 + 5;
	// b 0x83a49d4c
	goto loc_83A49D4C;
loc_83A49D40:
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// b 0x83a49d4c
	goto loc_83A49D4C;
loc_83A49D48:
	// addi r28,r28,7
	ctx.r28.s64 = ctx.r28.s64 + 7;
loc_83A49D4C:
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
loc_83A49D50:
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfd f13,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f31,f11,f0,f31
	ctx.f31.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// beq cr6,0x83a49dd4
	if (cr6.eq) goto loc_83A49DD4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83A49D80:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x83a49dc0
	if (!cr6.lt) goto loc_83A49DC0;
	// lwz r11,1728(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a49dc0
	if (cr6.eq) goto loc_83A49DC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1732(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1732);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A49DB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83A49DC0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a49d80
	if (cr6.lt) goto loc_83A49D80;
loc_83A49DD4:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// li r27,0
	ctx.r27.s64 = 0;
loc_83A49DE4:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(ctx.r30.u64, 0, xer);
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// lwz r29,36(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bgt cr6,0x83a49e70
	if (cr6.gt) goto loc_83A49E70;
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x831ce710
	ctx.lr = 0x83A49E0C;
	sub_831CE710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A49E18;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f28,f30
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bne cr6,0x83a49e3c
	if (!cr6.eq) goto loc_83A49E3C;
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x83a49e3c
	if (!cr6.lt) goto loc_83A49E3C;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// b 0x83a49e6c
	goto loc_83A49E6C;
loc_83A49E3C:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x83a49f38
	if (cr6.lt) goto loc_83A49F38;
	// lwz r11,1728(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a49e70
	if (cr6.eq) goto loc_83A49E70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1732(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1732);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A49E64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_83A49E6C:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83A49E70:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a49de4
	if (cr6.lt) goto loc_83A49DE4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c4
	ctx.lr = 0x83A49E90;
	__restfpr_28(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83A49E94:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x83a49f38
	if (!cr6.gt) goto loc_83A49F38;
	// li r29,0
	ctx.r29.s64 = 0;
loc_83A49EA8:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ld r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(ctx.r30.u64, 0, xer);
	// beq cr6,0x83a49f38
	if (cr6.eq) goto loc_83A49F38;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83a49f24
	if (!cr6.eq) goto loc_83A49F24;
	// ld r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x831ce710
	ctx.lr = 0x83A49ED0;
	sub_831CE710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// bl 0x831ce710
	ctx.lr = 0x83A49EDC;
	sub_831CE710(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f28,f30
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f30.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// blt cr6,0x83a49f24
	if (cr6.lt) goto loc_83A49F24;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x83a49f38
	if (cr6.lt) goto loc_83A49F38;
	// lwz r11,1728(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1728);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a49f24
	if (cr6.eq) goto loc_83A49F24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,1732(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1732);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83A49F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_83A49F24:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83a49ea8
	if (cr6.lt) goto loc_83A49EA8;
loc_83A49F38:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c4
	ctx.lr = 0x83A49F44;
	__restfpr_28(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A49F48"))) PPC_WEAK_FUNC(sub_83A49F48);
PPC_FUNC_IMPL(__imp__sub_83A49F48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r4,1836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1836, ctx.r4.u32);
	// stw r5,1840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1840, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A49F5C"))) PPC_WEAK_FUNC(sub_83A49F5C);
PPC_FUNC_IMPL(__imp__sub_83A49F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A49F60"))) PPC_WEAK_FUNC(sub_83A49F60);
PPC_FUNC_IMPL(__imp__sub_83A49F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a044
	if (cr6.eq) goto loc_83A4A044;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a49f98
	if (cr6.eq) goto loc_83A49F98;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83A49F98:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a49fac
	if (cr6.eq) goto loc_83A49FAC;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_83A49FAC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a49fc0
	if (cr6.eq) goto loc_83A49FC0;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_83A49FC0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a49fd4
	if (cr6.eq) goto loc_83A49FD4;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_83A49FD4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a49fe8
	if (cr6.eq) goto loc_83A49FE8;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_83A49FE8:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83a49ffc
	if (cr6.eq) goto loc_83A49FFC;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_83A49FFC:
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lis r9,23130
	ctx.r9.s64 = 1515847680;
	// ori r9,r9,23130
	ctx.r9.u64 = ctx.r9.u64 | 23130;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A4A014:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a4a014
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4A014;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83A4A02C:
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83a4a02c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4A02C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// bl 0x83a4fac0
	ctx.lr = 0x83A4A044;
	sub_83A4FAC0(ctx, base);
loc_83A4A044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83A4A054"))) PPC_WEAK_FUNC(sub_83A4A054);
PPC_FUNC_IMPL(__imp__sub_83A4A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4A058"))) PPC_WEAK_FUNC(sub_83A4A058);
PPC_FUNC_IMPL(__imp__sub_83A4A058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4A060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83A4A070:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83a4a070
	if (!cr6.eq) goto loc_83A4A070;
	// lis r10,-31741
	ctx.r10.s64 = -2080178176;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r31,r10,-11248
	ctx.r31.s64 = ctx.r10.s64 + -11248;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x831cdcf0
	ctx.lr = 0x83A4A0A4;
	sub_831CDCF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x831ce7d8
	ctx.lr = 0x83A4A0B4;
	sub_831CE7D8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83a4a0d0
	if (cr6.eq) goto loc_83A4A0D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r6,r28,255
	xer.ca = ctx.r28.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r28.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x831d7ac8
	ctx.lr = 0x83A4A0D0;
	sub_831D7AC8(ctx, base);
loc_83A4A0D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4A0D8"))) PPC_WEAK_FUNC(sub_83A4A0D8);
PPC_FUNC_IMPL(__imp__sub_83A4A0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83A4A0E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1104, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r11,1100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1100, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,1408
	ctx.r3.s64 = ctx.r3.s64 + 1408;
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// stw r30,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r30.u32);
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// std r30,1128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1128, ctx.r30.u64);
	// std r11,1136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1136, ctx.r11.u64);
	// std r30,1144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1144, ctx.r30.u64);
	// std r29,1152(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1152, ctx.r29.u64);
	// stw r30,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r30.u32);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
	// stw r30,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r30.u32);
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// stw r30,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r30.u32);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83A4A148;
	sub_831CDCF0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// std r30,1664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1664, ctx.r30.u64);
	// li r9,100
	ctx.r9.s64 = 100;
	// std r29,1672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1672, ctx.r29.u64);
	// stw r30,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// addi r11,r31,1296
	ctx.r11.s64 = ctx.r31.s64 + 1296;
	// stw r30,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r30.u32);
	// stw r29,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r29.u32);
	// stw r9,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83A4A170:
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83a4a170
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83A4A170;
	// lis r11,-31741
	ctx.r11.s64 = -2080178176;
	// stw r29,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r29.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r29.u32);
	// addi r28,r11,-10992
	ctx.r28.s64 = ctx.r11.s64 + -10992;
	// stw r30,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r30.u32);
	// stw r30,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r30.u32);
	// stw r29,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r29.u32);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r30.u32);
	// stfs f0,1232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1232, temp.u32);
	// stw r30,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r30.u32);
	// stw r30,1260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1260, ctx.r30.u32);
	// stw r30,1264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1264, ctx.r30.u32);
	// stw r29,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r29.u32);
	// stw r30,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r30.u32);
	// std r30,1720(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1720, ctx.r30.u64);
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r30,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r30.u32);
	// stw r30,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r30.u32);
	// stw r30,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r30.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// stw r30,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r30.u32);
	// stw r30,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r30.u32);
	// stw r30,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r30.u32);
	// stw r30,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r30.u32);
	// stw r30,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r30.u32);
	// stb r30,1868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1868, ctx.r30.u8);
	// beq cr6,0x83a4a224
	if (cr6.eq) goto loc_83A4A224;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lfs f0,16100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4772(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4772, temp.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,4776(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4776, ctx.r29.u32);
	// lwz r4,1284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83a4d528
	ctx.lr = 0x83A4A224;
	sub_83A4D528(ctx, base);
loc_83A4A224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83a48110
	ctx.lr = 0x83A4A22C;
	sub_83A48110(ctx, base);
	// stw r30,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r30.u32);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,15344
	ctx.r4.s64 = ctx.r11.s64 + 15344;
	// bl 0x83a53b48
	ctx.lr = 0x83A4A244;
	sub_83A53B48(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f0,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-18584(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18584);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1884, temp.u32);
	// stfs f13,1888(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1888, temp.u32);
	// stfs f0,1892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// stfs f0,1896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1896, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4A26C"))) PPC_WEAK_FUNC(sub_83A4A26C);
PPC_FUNC_IMPL(__imp__sub_83A4A26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4A270"))) PPC_WEAK_FUNC(sub_83A4A270);
PPC_FUNC_IMPL(__imp__sub_83A4A270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A4A278;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a2b8
	if (cr6.eq) goto loc_83A4A2B8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a4a2c4
	if (!cr6.eq) goto loc_83A4A2C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4A2A8;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-21376
	ctx.r4.s64 = ctx.r10.s64 + -21376;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4A2B8;
	sub_831EA3F0(ctx, base);
loc_83A4A2B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A4A2C4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a4a2f0
	if (cr6.eq) goto loc_83A4A2F0;
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83A4A2D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4A2E8;
	sub_831CDCF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a4a2d8
	if (!cr0.eq) goto loc_83A4A2D8;
loc_83A4A2F0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a48580
	ctx.lr = 0x83A4A304;
	sub_83A48580(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4A30C"))) PPC_WEAK_FUNC(sub_83A4A30C);
PPC_FUNC_IMPL(__imp__sub_83A4A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4A310"))) PPC_WEAK_FUNC(sub_83A4A310);
PPC_FUNC_IMPL(__imp__sub_83A4A310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A4A318;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a358
	if (cr6.eq) goto loc_83A4A358;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83a4a364
	if (!cr6.eq) goto loc_83A4A364;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1904, ctx.r11.u32);
	// bl 0x83a489c8
	ctx.lr = 0x83A4A348;
	sub_83A489C8(ctx, base);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-21304
	ctx.r4.s64 = ctx.r10.s64 + -21304;
	// bl 0x831ea3f0
	ctx.lr = 0x83A4A358;
	sub_831EA3F0(ctx, base);
loc_83A4A358:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83A4A364:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83a4a390
	if (cr6.eq) goto loc_83A4A390;
	// rlwinm r29,r26,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_83A4A378:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4A388;
	sub_831CDCF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a4a378
	if (!cr0.eq) goto loc_83A4A378;
loc_83A4A390:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83a48388
	ctx.lr = 0x83A4A3A4;
	sub_83A48388(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4A3AC"))) PPC_WEAK_FUNC(sub_83A4A3AC);
PPC_FUNC_IMPL(__imp__sub_83A4A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83A4A3B0"))) PPC_WEAK_FUNC(sub_83A4A3B0);
PPC_FUNC_IMPL(__imp__sub_83A4A3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A4A3B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a4bc
	if (cr6.eq) goto loc_83A4A4BC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4a400
	if (cr6.eq) goto loc_83A4A400;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_83A4A3E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4A3F8;
	sub_831CDCF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a4a3e8
	if (!cr0.eq) goto loc_83A4A3E8;
loc_83A4A400:
	// lwz r11,1088(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1088);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4a4bc
	if (cr6.eq) goto loc_83A4A4BC;
	// lwz r11,1300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1300);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a4a4bc
	if (cr6.eq) goto loc_83A4A4BC;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A4A424;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4a4bc
	if (cr6.eq) goto loc_83A4A4BC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4a4bc
	if (cr6.eq) goto loc_83A4A4BC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a4a4bc
	if (cr6.eq) goto loc_83A4A4BC;
	// lwz r11,1300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1300);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,124(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a4a4bc
	if (cr6.eq) goto loc_83A4A4BC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a4a474
	if (cr6.eq) goto loc_83A4A474;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x83A4A474;
	sub_831CEE08(ctx, base);
loc_83A4A474:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a4eba0
	ctx.lr = 0x83A4A484;
	sub_83A4EBA0(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// ble cr6,0x83a4a490
	if (!cr6.gt) goto loc_83A4A490;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A4A490:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a4a4bc
	if (cr6.eq) goto loc_83A4A4BC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a4eb80
	ctx.lr = 0x83A4A4B4;
	sub_83A4EB80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4a4c0
	if (!cr6.eq) goto loc_83A4A4C0;
loc_83A4A4BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A4A4C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4A4C8"))) PPC_WEAK_FUNC(sub_83A4A4C8);
PPC_FUNC_IMPL(__imp__sub_83A4A4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A4A4D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a5d4
	if (cr6.eq) goto loc_83A4A5D4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4a518
	if (cr6.eq) goto loc_83A4A518;
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_83A4A500:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4A510;
	sub_831CDCF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a4a500
	if (!cr0.eq) goto loc_83A4A500;
loc_83A4A518:
	// lwz r11,1092(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1092);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4a5d4
	if (cr6.eq) goto loc_83A4A5D4;
	// lwz r11,1304(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1304);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a4a5d4
	if (cr6.eq) goto loc_83A4A5D4;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A4A53C;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4a5d4
	if (cr6.eq) goto loc_83A4A5D4;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4a5d4
	if (cr6.eq) goto loc_83A4A5D4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a4a5d4
	if (cr6.eq) goto loc_83A4A5D4;
	// lwz r11,1304(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1304);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,124(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a4a5d4
	if (cr6.eq) goto loc_83A4A5D4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a4a58c
	if (cr6.eq) goto loc_83A4A58C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x83A4A58C;
	sub_831CEE08(ctx, base);
loc_83A4A58C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a4eba0
	ctx.lr = 0x83A4A59C;
	sub_83A4EBA0(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// ble cr6,0x83a4a5a8
	if (!cr6.gt) goto loc_83A4A5A8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A4A5A8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a4a5d4
	if (cr6.eq) goto loc_83A4A5D4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a4eb80
	ctx.lr = 0x83A4A5CC;
	sub_83A4EB80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4a5d8
	if (!cr6.eq) goto loc_83A4A5D8;
loc_83A4A5D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A4A5D8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4A5E0"))) PPC_WEAK_FUNC(sub_83A4A5E0);
PPC_FUNC_IMPL(__imp__sub_83A4A5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A4A5E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a6ec
	if (cr6.eq) goto loc_83A4A6EC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4a630
	if (cr6.eq) goto loc_83A4A630;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_83A4A618:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4A628;
	sub_831CDCF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a4a618
	if (!cr0.eq) goto loc_83A4A618;
loc_83A4A630:
	// lwz r11,1084(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1084);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4a6ec
	if (cr6.eq) goto loc_83A4A6EC;
	// lwz r11,1296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1296);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a4a6ec
	if (cr6.eq) goto loc_83A4A6EC;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A4A654;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4a6ec
	if (cr6.eq) goto loc_83A4A6EC;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4a6ec
	if (cr6.eq) goto loc_83A4A6EC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a4a6ec
	if (cr6.eq) goto loc_83A4A6EC;
	// lwz r11,1300(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1300);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,124(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a4a6ec
	if (cr6.eq) goto loc_83A4A6EC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a4a6a4
	if (cr6.eq) goto loc_83A4A6A4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x83A4A6A4;
	sub_831CEE08(ctx, base);
loc_83A4A6A4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a4eba0
	ctx.lr = 0x83A4A6B4;
	sub_83A4EBA0(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// ble cr6,0x83a4a6c0
	if (!cr6.gt) goto loc_83A4A6C0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A4A6C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a4a6ec
	if (cr6.eq) goto loc_83A4A6EC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83a4eb60
	ctx.lr = 0x83A4A6E4;
	sub_83A4EB60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4a6f0
	if (!cr6.eq) goto loc_83A4A6F0;
loc_83A4A6EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A4A6F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83A4A6F8"))) PPC_WEAK_FUNC(sub_83A4A6F8);
PPC_FUNC_IMPL(__imp__sub_83A4A6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83A4A700;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83a4a804
	if (cr6.eq) goto loc_83A4A804;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83a4a748
	if (cr6.eq) goto loc_83A4A748;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r5,-4
	ctx.r30.s64 = ctx.r5.s64 + -4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_83A4A730:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83A4A740;
	sub_831CDCF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x83a4a730
	if (!cr0.eq) goto loc_83A4A730;
loc_83A4A748:
	// lwz r11,1084(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1084);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83a4a804
	if (cr6.eq) goto loc_83A4A804;
	// lwz r11,1296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1296);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x83a4a804
	if (cr6.eq) goto loc_83A4A804;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x831f8200
	ctx.lr = 0x83A4A76C;
	sub_831F8200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83a4a804
	if (cr6.eq) goto loc_83A4A804;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83a4a804
	if (cr6.eq) goto loc_83A4A804;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83a4a804
	if (cr6.eq) goto loc_83A4A804;
	// lwz r11,1304(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1304);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r31,124(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83a4a804
	if (cr6.eq) goto loc_83A4A804;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83a4a7bc
	if (cr6.eq) goto loc_83A4A7BC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cee08
	ctx.lr = 0x83A4A7BC;
	sub_831CEE08(ctx, base);
loc_83A4A7BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a4eba0
	ctx.lr = 0x83A4A7CC;
	sub_83A4EBA0(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// ble cr6,0x83a4a7d8
	if (!cr6.gt) goto loc_83A4A7D8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83A4A7D8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83a4a804
	if (cr6.eq) goto loc_83A4A804;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83a4eb60
	ctx.lr = 0x83A4A7FC;
	sub_83A4EB60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83a4a808
	if (!cr6.eq) goto loc_83A4A808;
loc_83A4A804:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83A4A808:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

