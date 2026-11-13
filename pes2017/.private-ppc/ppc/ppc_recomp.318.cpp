#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832A92F4"))) PPC_WEAK_FUNC(sub_832A92F4);
PPC_FUNC_IMPL(__imp__sub_832A92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A92F8"))) PPC_WEAK_FUNC(sub_832A92F8);
PPC_FUNC_IMPL(__imp__sub_832A92F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832A9300;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x832a9324
	if (!cr6.eq) goto loc_832A9324;
loc_832A9318:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832A9324:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a8e88
	ctx.lr = 0x832A932C;
	sub_832A8E88(ctx, base);
	// ld r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// ld r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// subf r30,r31,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwsync 
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r25,r29,24
	ctx.r25.s64 = ctx.r29.s64 + 24;
loc_832A9344:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r25
	ea = ctx.r25.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r24,0,r25
	ea = ctx.r25.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r24.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a9344
	if (!cr0.eq) goto loc_832A9344;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// ble cr6,0x832a9318
	if (!cr6.gt) goto loc_832A9318;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_832A9368:
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpd cr6,r6,r30
	cr6.compare<int64_t>(ctx.r6.s64, ctx.r30.s64, xer);
	// ble cr6,0x832a9378
	if (!cr6.gt) goto loc_832A9378;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_832A9378:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a9198
	ctx.lr = 0x832A9388;
	sub_832A9198(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a93e0
	if (cr6.lt) goto loc_832A93E0;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// add r26,r3,r26
	ctx.r26.u64 = ctx.r3.u64 + ctx.r26.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// beq 0x832a93b4
	if (cr0.eq) goto loc_832A93B4;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// bne cr6,0x832a9368
	if (!cr6.eq) goto loc_832A9368;
loc_832A93B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a8e88
	ctx.lr = 0x832A93BC;
	sub_832A8E88(ctx, base);
	// std r31,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r31.u64);
	// lwsync 
loc_832A93C4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ea = ctx.r25.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r24,0,r25
	ea = ctx.r25.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r24.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a93c4
	if (!cr0.eq) goto loc_832A93C4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_832A93E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A93E8"))) PPC_WEAK_FUNC(sub_832A93E8);
PPC_FUNC_IMPL(__imp__sub_832A93E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A93F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832a8e88
	ctx.lr = 0x832A9404;
	sub_832A8E88(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwsync 
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
loc_832A941C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r28
	ea = ctx.r28.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r28
	ea = ctx.r28.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a941c
	if (!cr0.eq) goto loc_832A941C;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bgt cr6,0x832a9448
	if (cr6.gt) goto loc_832A9448;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A9448:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, xer);
	// ble cr6,0x832a9458
	if (!cr6.gt) goto loc_832A9458;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832A9458:
	// extsw r6,r30
	ctx.r6.s64 = ctx.r30.s32;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a9198
	ctx.lr = 0x832A946C;
	sub_832A9198(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a94a8
	if (cr6.lt) goto loc_832A94A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8e88
	ctx.lr = 0x832A9480;
	sub_832A8E88(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwsync 
loc_832A9490:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r28
	ea = ctx.r28.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r28
	ea = ctx.r28.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a9490
	if (!cr0.eq) goto loc_832A9490;
loc_832A94A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A94B4"))) PPC_WEAK_FUNC(sub_832A94B4);
PPC_FUNC_IMPL(__imp__sub_832A94B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A94B8"))) PPC_WEAK_FUNC(sub_832A94B8);
PPC_FUNC_IMPL(__imp__sub_832A94B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832A94C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x832a94e4
	if (!cr6.eq) goto loc_832A94E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832A94E4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832a8e88
	ctx.lr = 0x832A94EC;
	sub_832A8E88(ctx, base);
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a9500
	if (!cr6.eq) goto loc_832A9500;
	// ld r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r25.u32 + 0);
	// b 0x832a9504
	goto loc_832A9504;
loc_832A9500:
	// ld r27,8(r25)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
loc_832A9504:
	// lwsync 
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r20,r25,24
	ctx.r20.s64 = ctx.r25.s64 + 24;
loc_832A9510:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r20
	ea = ctx.r20.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r21,0,r20
	ea = ctx.r20.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r21.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a9510
	if (!cr0.eq) goto loc_832A9510;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
loc_832A952C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rldicr r26,r10,0,50
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFE000;
	// subf r31,r26,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r26.s64;
	// cmpdi cr6,r31,0
	cr6.compare<int64_t>(ctx.r31.s64, 0, xer);
	// bge cr6,0x832a95d4
	if (!cr6.lt) goto loc_832A95D4;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,44(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A9574;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpd cr6,r3,r27
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r27.s64, xer);
	// beq cr6,0x832a9598
	if (cr6.eq) goto loc_832A9598;
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bgt cr6,0x832a958c
	if (cr6.gt) goto loc_832A958C;
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// b 0x832a95b8
	goto loc_832A95B8;
loc_832A958C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x832a95f8
	goto loc_832A95F8;
loc_832A9598:
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// neg r5,r10
	ctx.r5.s64 = -ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832A95B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832A95B8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a9658
	if (cr6.lt) goto loc_832A9658;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_832A95D4:
	// extsw r7,r29
	ctx.r7.s64 = ctx.r29.s32;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// extsw r5,r31
	ctx.r5.s64 = ctx.r31.s32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832a90b8
	ctx.lr = 0x832A95EC;
	sub_832A90B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a9658
	if (cr6.lt) goto loc_832A9658;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_832A95F8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a9658
	if (cr6.lt) goto loc_832A9658;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// add r22,r3,r22
	ctx.r22.u64 = ctx.r3.u64 + ctx.r22.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq 0x832a961c
	if (cr0.eq) goto loc_832A961C;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// b 0x832a952c
	goto loc_832A952C;
loc_832A961C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832a8e88
	ctx.lr = 0x832A9624;
	sub_832A8E88(ctx, base);
	// ld r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + 8);
	// std r27,0(r25)
	PPC_STORE_U64(ctx.r25.u32 + 0, ctx.r27.u64);
	// cmpd cr6,r27,r11
	cr6.compare<int64_t>(ctx.r27.s64, ctx.r11.s64, xer);
	// ble cr6,0x832a9638
	if (!cr6.gt) goto loc_832A9638;
	// std r27,8(r25)
	PPC_STORE_U64(ctx.r25.u32 + 8, ctx.r27.u64);
loc_832A9638:
	// lwsync 
loc_832A963C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r20
	ea = ctx.r20.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r21,0,r20
	ea = ctx.r20.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r21.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a963c
	if (!cr0.eq) goto loc_832A963C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_832A9658:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9660"))) PPC_WEAK_FUNC(sub_832A9660);
PPC_FUNC_IMPL(__imp__sub_832A9660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A9668;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x832a8e88
	ctx.lr = 0x832A967C;
	sub_832A8E88(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a9690
	if (!cr6.eq) goto loc_832A9690;
	// ld r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// b 0x832a9694
	goto loc_832A9694;
loc_832A9690:
	// ld r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
loc_832A9694:
	// lwsync 
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
loc_832A96A0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ea = ctx.r28.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r28
	ea = ctx.r28.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a96a0
	if (!cr0.eq) goto loc_832A96A0;
	// extsw r6,r27
	ctx.r6.s64 = ctx.r27.s32;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a9268
	ctx.lr = 0x832A96CC;
	sub_832A9268(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a9718
	if (cr6.lt) goto loc_832A9718;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x832a8e88
	ctx.lr = 0x832A96E8;
	sub_832A8E88(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// cmpd cr6,r29,r11
	cr6.compare<int64_t>(ctx.r29.s64, ctx.r11.s64, xer);
	// ble cr6,0x832a96fc
	if (!cr6.gt) goto loc_832A96FC;
	// std r29,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r29.u64);
loc_832A96FC:
	// lwsync 
loc_832A9700:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ea = ctx.r28.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r26,0,r28
	ea = ctx.r28.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a9700
	if (!cr0.eq) goto loc_832A9700;
loc_832A9718:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9724"))) PPC_WEAK_FUNC(sub_832A9724);
PPC_FUNC_IMPL(__imp__sub_832A9724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A9728"))) PPC_WEAK_FUNC(sub_832A9728);
PPC_FUNC_IMPL(__imp__sub_832A9728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A9730;
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
	// bl 0x832a8e88
	ctx.lr = 0x832A9744;
	sub_832A8E88(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x832a9770
	if (cr6.lt) goto loc_832A9770;
	// beq cr6,0x832a9764
	if (cr6.eq) goto loc_832A9764;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x832a9784
	if (!cr6.lt) goto loc_832A9784;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x832a9774
	goto loc_832A9774;
loc_832A9764:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x832a9774
	goto loc_832A9774;
loc_832A9770:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832A9774:
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// blt cr6,0x832a9784
	if (cr6.lt) goto loc_832A9784;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// b 0x832a978c
	goto loc_832A978C;
loc_832A9784:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
loc_832A978C:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
loc_832A9798:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832a9798
	if (!cr0.eq) goto loc_832A9798;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A97B8"))) PPC_WEAK_FUNC(sub_832A97B8);
PPC_FUNC_IMPL(__imp__sub_832A97B8) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a97e4
	if (cr6.eq) goto loc_832A97E4;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x832a1d18
	ctx.lr = 0x832A97E4;
	sub_832A1D18(ctx, base);
loc_832A97E4:
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A97F0;
	sub_832A5A38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32232);
	// bl 0x832b9878
	ctx.lr = 0x832A9800;
	sub_832B9878(ctx, base);
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A9808;
	sub_832A5AE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A9820"))) PPC_WEAK_FUNC(sub_832A9820);
PPC_FUNC_IMPL(__imp__sub_832A9820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832A9828;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r26.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r22,4(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r21,108(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// rlwinm r20,r6,17,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1;
	// bl 0x832a1cb0
	ctx.lr = 0x832A9870;
	sub_832A1CB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a988c
	if (!cr6.eq) goto loc_832A988C;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// ori r28,r28,12
	ctx.r28.u64 = ctx.r28.u64 | 12;
	// b 0x832a9a3c
	goto loc_832A9A3C;
loc_832A988C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83294018
	ctx.lr = 0x832A989C;
	sub_83294018(ctx, base);
	// addic. r29,r28,16
	xer.ca = ctx.r28.u32 > 4294967279;
	ctx.r29.s64 = ctx.r28.s64 + 16;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r21,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r21.u32);
	// stw r22,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r22.u32);
	// bne 0x832a98b8
	if (!cr0.eq) goto loc_832A98B8;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,12
	ctx.r28.u64 = ctx.r28.u64 | 12;
	// b 0x832a9a3c
	goto loc_832A9A3C;
loc_832A98B8:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a99e4
	if (cr6.eq) goto loc_832A99E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832A98E0;
	sub_832A1CB0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a98f8
	if (!cr6.eq) goto loc_832A98F8;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,12
	ctx.r28.u64 = ctx.r28.u64 | 12;
	// b 0x832a9a3c
	goto loc_832A9A3C;
loc_832A98F8:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stw r26,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r11,32232
	ctx.r9.s64 = ctx.r11.s64 + 32232;
	// clrldi r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
	// lis r6,-31957
	ctx.r6.s64 = -2094333952;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// lis r4,-31957
	ctx.r4.s64 = -2094333952;
	// addi r10,r8,-27672
	ctx.r10.s64 = ctx.r8.s64 + -27672;
	// addi r9,r7,-27912
	ctx.r9.s64 = ctx.r7.s64 + -27912;
	// addi r8,r6,-27040
	ctx.r8.s64 = ctx.r6.s64 + -27040;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r7,r5,-27464
	ctx.r7.s64 = ctx.r5.s64 + -27464;
	// addi r11,r4,-26840
	ctx.r11.s64 = ctx.r4.s64 + -26840;
	// stw r31,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r31.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// rlwinm r5,r25,0,26,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A9978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a9a3c
	if (cr6.lt) goto loc_832A9A3C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A999C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// bge cr6,0x832a99a8
	if (!cr6.lt) goto loc_832A99A8;
	// std r26,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
loc_832A99A8:
	// rlwinm r11,r25,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40;
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a99d0
	if (cr6.eq) goto loc_832A99D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832A99D0:
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832A99E4:
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r8,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r8.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A9A30;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a9a5c
	if (!cr6.lt) goto loc_832A9A5C;
loc_832A9A3C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x832a1d18
	ctx.lr = 0x832A9A44;
	sub_832A1D18(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// beq cr6,0x832a9a58
	if (cr6.eq) goto loc_832A9A58;
	// addi r3,r29,-16
	ctx.r3.s64 = ctx.r29.s64 + -16;
	// bl 0x832a1d18
	ctx.lr = 0x832A9A58;
	sub_832A1D18(ctx, base);
loc_832A9A58:
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
loc_832A9A5C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9A68"))) PPC_WEAK_FUNC(sub_832A9A68);
PPC_FUNC_IMPL(__imp__sub_832A9A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A9A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A9A8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x832a8e48
	ctx.lr = 0x832A9A98;
	sub_832A8E48(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a9aac
	if (cr6.eq) goto loc_832A9AAC;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x832a1d18
	ctx.lr = 0x832A9AAC;
	sub_832A1D18(ctx, base);
loc_832A9AAC:
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A9AB8;
	sub_832A5A38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32232);
	// bl 0x832b9878
	ctx.lr = 0x832A9AC8;
	sub_832B9878(ctx, base);
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832A9AD0;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9ADC"))) PPC_WEAK_FUNC(sub_832A9ADC);
PPC_FUNC_IMPL(__imp__sub_832A9ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A9AE0"))) PPC_WEAK_FUNC(sub_832A9AE0);
PPC_FUNC_IMPL(__imp__sub_832A9AE0) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x832a1d18
	ctx.lr = 0x832A9AFC;
	sub_832A1D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a9a68
	ctx.lr = 0x832A9B04;
	sub_832A9A68(ctx, base);
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

__attribute__((alias("__imp__sub_832A9B18"))) PPC_WEAK_FUNC(sub_832A9B18);
PPC_FUNC_IMPL(__imp__sub_832A9B18) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A9B40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a9b58
	if (cr6.eq) goto loc_832A9B58;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x832a1d18
	ctx.lr = 0x832A9B58;
	sub_832A1D18(ctx, base);
loc_832A9B58:
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

__attribute__((alias("__imp__sub_832A9B70"))) PPC_WEAK_FUNC(sub_832A9B70);
PPC_FUNC_IMPL(__imp__sub_832A9B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A9B78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832b9548
	ctx.lr = 0x832A9B94;
	sub_832B9548(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r29,r11,32232
	ctx.r29.s64 = ctx.r11.s64 + 32232;
	// stw r3,32232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32232, ctx.r3.u32);
	// bgt cr6,0x832a9bbc
	if (cr6.gt) goto loc_832A9BBC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-27548
	ctx.r4.s64 = ctx.r11.s64 + -27548;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x832982e8
	ctx.lr = 0x832A9BBC;
	sub_832982E8(ctx, base);
loc_832A9BBC:
	// bl 0x82aabcb0
	ctx.lr = 0x832A9BC0;
	sub_82AABCB0(ctx, base);
	// subfic r11,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r3.s64;
	// mulli r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 * 88;
	// addi r9,r11,51
	ctx.r9.s64 = ctx.r11.s64 + 51;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r8,10
	ctx.r8.s64 = 10;
	// rlwinm r10,r9,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9BEC"))) PPC_WEAK_FUNC(sub_832A9BEC);
PPC_FUNC_IMPL(__imp__sub_832A9BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A9BF0"))) PPC_WEAK_FUNC(sub_832A9BF0);
PPC_FUNC_IMPL(__imp__sub_832A9BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,32232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32232);
	// b 0x832b96b8
	sub_832B96B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9BFC"))) PPC_WEAK_FUNC(sub_832A9BFC);
PPC_FUNC_IMPL(__imp__sub_832A9BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A9C00"))) PPC_WEAK_FUNC(sub_832A9C00);
PPC_FUNC_IMPL(__imp__sub_832A9C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A9C08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x832a1350
	ctx.lr = 0x832A9C2C;
	sub_832A1350(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a9c40
	if (!cr6.lt) goto loc_832A9C40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832a9cb8
	goto loc_832A9CB8;
loc_832A9C40:
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832A9C4C;
	sub_832A5A38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,32232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32232);
	// bl 0x832b9768
	ctx.lr = 0x832A9C58;
	sub_832B9768(ctx, base);
	// lwz r11,-32528(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832a5ae8
	ctx.lr = 0x832A9C68;
	sub_832A5AE8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832a9c7c
	if (!cr6.eq) goto loc_832A9C7C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// b 0x832a9cb8
	goto loc_832A9CB8;
loc_832A9C7C:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a9c8c
	if (!cr6.eq) goto loc_832A9C8C;
	// rlwinm r30,r30,0,17,15
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
loc_832A9C8C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a9820
	ctx.lr = 0x832A9CA4;
	sub_832A9820(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a9cd4
	if (!cr6.lt) goto loc_832A9CD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a97b8
	ctx.lr = 0x832A9CB8;
	sub_832A97B8(ctx, base);
loc_832A9CB8:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x832a9cc8
	if (!cr6.gt) goto loc_832A9CC8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832A9CC8;
	sub_832A13D8(ctx, base);
loc_832A9CC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A9CD4:
	// rlwinm r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a9cec
	if (cr6.eq) goto loc_832A9CEC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r4,r11,-25888
	ctx.r4.s64 = ctx.r11.s64 + -25888;
	// b 0x832a9cf4
	goto loc_832A9CF4;
loc_832A9CEC:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r4,r11,-26008
	ctx.r4.s64 = ctx.r11.s64 + -26008;
loc_832A9CF4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a0cc0
	ctx.lr = 0x832A9D00;
	sub_832A0CC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A9D0C"))) PPC_WEAK_FUNC(sub_832A9D0C);
PPC_FUNC_IMPL(__imp__sub_832A9D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A9D10"))) PPC_WEAK_FUNC(sub_832A9D10);
PPC_FUNC_IMPL(__imp__sub_832A9D10) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a9820
	ctx.lr = 0x832A9D40;
	sub_832A9820(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a9d60
	if (cr6.lt) goto loc_832A9D60;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-25832
	ctx.r4.s64 = ctx.r11.s64 + -25832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a0cc0
	ctx.lr = 0x832A9D5C;
	sub_832A0CC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832A9D60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A9D78"))) PPC_WEAK_FUNC(sub_832A9D78);
PPC_FUNC_IMPL(__imp__sub_832A9D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832A9D80;
	__savegprlr_20(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a9da0
	if (cr6.eq) goto loc_832A9DA0;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x832a9da4
	if (!cr6.eq) goto loc_832A9DA4;
loc_832A9DA0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_832A9DA4:
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r24,r4,-1
	ctx.r24.s64 = ctx.r4.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r28,47
	ctx.r28.s64 = 47;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r26,46
	ctx.r26.s64 = 46;
	// ori r25,r8,45632
	ctx.r25.u64 = ctx.r8.u64 | 45632;
	// addi r23,r9,18556
	ctx.r23.s64 = ctx.r9.s64 + 18556;
loc_832A9DD4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832a9df8
	if (cr6.eq) goto loc_832A9DF8;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832a9e00
	if (!cr6.eq) goto loc_832A9E00;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x832a9e00
	goto loc_832A9E00;
loc_832A9DF8:
	// lbz r9,1(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_832A9E00:
	// rlwinm r8,r9,29,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1C;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// slw r4,r22,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r8,r8,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// and r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832aa084
	if (cr6.eq) goto loc_832AA084;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// cmpwi cr6,r4,47
	cr6.compare<int32_t>(ctx.r4.s32, 47, xer);
	// beq cr6,0x832a9dd4
	if (cr6.eq) goto loc_832A9DD4;
	// cmpwi cr6,r4,46
	cr6.compare<int32_t>(ctx.r4.s32, 46, xer);
	// bne cr6,0x832a9fb0
	if (!cr6.eq) goto loc_832A9FB0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832a9e54
	if (cr6.eq) goto loc_832A9E54;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832a9e5c
	if (!cr6.eq) goto loc_832A9E5C;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x832a9e5c
	goto loc_832A9E5C;
loc_832A9E54:
	// lbz r9,1(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_832A9E5C:
	// rlwinm r8,r9,29,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1C;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// slw r4,r22,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r8,r8,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// and r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832aa084
	if (cr6.eq) goto loc_832AA084;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// cmpwi cr6,r4,47
	cr6.compare<int32_t>(ctx.r4.s32, 47, xer);
	// beq cr6,0x832a9dd4
	if (cr6.eq) goto loc_832A9DD4;
	// cmpwi cr6,r4,46
	cr6.compare<int32_t>(ctx.r4.s32, 46, xer);
	// bne cr6,0x832a9f70
	if (!cr6.eq) goto loc_832A9F70;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832a9eb0
	if (cr6.eq) goto loc_832A9EB0;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832a9eb8
	if (!cr6.eq) goto loc_832A9EB8;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x832a9eb8
	goto loc_832A9EB8;
loc_832A9EB0:
	// lbz r9,1(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_832A9EB8:
	// rlwinm r8,r9,29,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1C;
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// slw r4,r22,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r8,r8,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// and r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832aa084
	if (cr6.eq) goto loc_832AA084;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// cmpwi cr6,r4,47
	cr6.compare<int32_t>(ctx.r4.s32, 47, xer);
	// beq cr6,0x832a9f28
	if (cr6.eq) goto loc_832A9F28;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x832a9f28
	if (cr6.eq) goto loc_832A9F28;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bge cr6,0x832aa090
	if (!cr6.lt) goto loc_832AA090;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(ctx.r30.u32, 64, xer);
	// bge cr6,0x832aa090
	if (!cr6.lt) goto loc_832AA090;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mulli r10,r10,29791
	ctx.r10.s64 = ctx.r10.s64 * 29791;
	// add r29,r11,r5
	ctx.r29.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r21,r11,r5
	ctx.r21.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r20,r11,r5
	ctx.r20.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r26,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r26.u8);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stb r26,2(r21)
	PPC_STORE_U8(ctx.r21.u32 + 2, ctx.r26.u8);
	// stb r9,3(r20)
	PPC_STORE_U8(ctx.r20.u32 + 3, ctx.r9.u8);
	// b 0x832a9fe4
	goto loc_832A9FE4;
loc_832A9F28:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832a9f3c
	if (cr6.eq) goto loc_832A9F3C;
	// lhzu r11,-2(r31)
	ea = -2 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwzu r10,-4(r3)
	ea = -4 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
loc_832A9F3C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x832a9dd4
	if (!cr6.eq) goto loc_832A9DD4;
loc_832A9F44:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a9f54
	if (!cr6.eq) goto loc_832A9F54;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// stb r28,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r28.u8);
loc_832A9F54:
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r30,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF0000;
	// li r6,0
	ctx.r6.s64 = 0;
	// or r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stwx r10,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u32);
	// stbx r6,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u8);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832A9F70:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x832a9f44
	if (cr6.eq) goto loc_832A9F44;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bge cr6,0x832aa090
	if (!cr6.lt) goto loc_832AA090;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(ctx.r30.u32, 64, xer);
	// bge cr6,0x832aa090
	if (!cr6.lt) goto loc_832AA090;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mulli r10,r10,961
	ctx.r10.s64 = ctx.r10.s64 * 961;
	// add r29,r11,r5
	ctx.r29.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r21,r11,r5
	ctx.r21.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,1426
	ctx.r10.s64 = ctx.r10.s64 + 1426;
	// stb r26,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r26.u8);
	// stb r9,2(r21)
	PPC_STORE_U8(ctx.r21.u32 + 2, ctx.r9.u8);
	// b 0x832a9fe4
	goto loc_832A9FE4;
loc_832A9FB0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x832a9f44
	if (cr6.eq) goto loc_832A9F44;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bge cr6,0x832aa090
	if (!cr6.lt) goto loc_832AA090;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(ctx.r30.u32, 64, xer);
	// bge cr6,0x832aa090
	if (!cr6.lt) goto loc_832AA090;
	// rlwinm r21,r10,5,0,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// add r29,r11,r5
	ctx.r29.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r10,r10,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r10.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r9,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r9.u8);
loc_832A9FE4:
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stbx r28,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r28.u8);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subfic r29,r5,1
	xer.ca = ctx.r5.u32 <= 1;
	ctx.r29.s64 = 1 - ctx.r5.s64;
loc_832AA004:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832aa028
	if (cr6.eq) goto loc_832AA028;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832aa02c
	if (!cr6.eq) goto loc_832AA02C;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// b 0x832aa02c
	goto loc_832AA02C;
loc_832AA028:
	// lbzu r9,1(r24)
	ea = 1 + ctx.r24.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r24.u32 = ea;
loc_832AA02C:
	// rlwinm r4,r9,29,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1C;
	// clrlwi r21,r9,27
	ctx.r21.u64 = ctx.r9.u32 & 0x1F;
	// slw r21,r22,r21
	ctx.r21.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r21.u8 & 0x3F));
	// lwzx r4,r4,r23
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r23.u32);
	// and r4,r21,r4
	ctx.r4.u64 = ctx.r21.u64 & ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832aa084
	if (cr6.eq) goto loc_832AA084;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// cmpwi cr6,r4,47
	cr6.compare<int32_t>(ctx.r4.s32, 47, xer);
	// beq cr6,0x832a9dd4
	if (cr6.eq) goto loc_832A9DD4;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x832a9f44
	if (cr6.eq) goto loc_832A9F44;
	// add r21,r29,r8
	ctx.r21.u64 = ctx.r29.u64 + ctx.r8.u64;
	// cmplw cr6,r21,r6
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r6.u32, xer);
	// bge cr6,0x832aa090
	if (!cr6.lt) goto loc_832AA090;
	// rlwinm r21,r10,5,0,26
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r10.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// b 0x832aa004
	goto loc_832AA004;
loc_832AA084:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832AA090:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,36
	ctx.r3.u64 = ctx.r3.u64 | 36;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA09C"))) PPC_WEAK_FUNC(sub_832AA09C);
PPC_FUNC_IMPL(__imp__sub_832AA09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AA0A0"))) PPC_WEAK_FUNC(sub_832AA0A0);
PPC_FUNC_IMPL(__imp__sub_832AA0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// li r11,47
	ctx.r11.s64 = 47;
	// addi r8,r9,32240
	ctx.r8.s64 = ctx.r9.s64 + 32240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,32240(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32240, ctx.r11.u8);
	// stb r10,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AA0BC"))) PPC_WEAK_FUNC(sub_832AA0BC);
PPC_FUNC_IMPL(__imp__sub_832AA0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AA0C0"))) PPC_WEAK_FUNC(sub_832AA0C0);
PPC_FUNC_IMPL(__imp__sub_832AA0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AA0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832aa0fc
	if (cr6.eq) goto loc_832AA0FC;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r31,264
	ctx.r5.s64 = ctx.r31.s64 + 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832a9d78
	ctx.lr = 0x832AA0F4;
	sub_832A9D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832aa134
	goto loc_832AA134;
loc_832AA0FC:
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832AA108;
	sub_832A5A38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r31,264
	ctx.r5.s64 = ctx.r31.s64 + 264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832a9d78
	ctx.lr = 0x832AA124;
	sub_832A9D78(ctx, base);
	// lwz r11,-32528(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832a5ae8
	ctx.lr = 0x832AA134;
	sub_832A5AE8(ctx, base);
loc_832AA134:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x832aa154
	if (cr6.lt) goto loc_832AA154;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwinm r11,r30,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// sth r3,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r3.u16);
	// sth r11,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AA154:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA160"))) PPC_WEAK_FUNC(sub_832AA160);
PPC_FUNC_IMPL(__imp__sub_832AA160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832AA168;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x832aa1e8
	if (!cr6.eq) goto loc_832AA1E8;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r3,264
	ctx.r5.s64 = ctx.r3.s64 + 264;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a9d78
	ctx.lr = 0x832AA1BC;
	sub_832A9D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aa25c
	if (cr6.lt) goto loc_832AA25C;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r26,264
	ctx.r5.s64 = ctx.r26.s64 + 264;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a9d78
	ctx.lr = 0x832AA1E0;
	sub_832A9D78(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x832aa25c
	goto loc_832AA25C;
loc_832AA1E8:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r11,r11,32240
	ctx.r11.s64 = ctx.r11.s64 + 32240;
	// bne cr6,0x832aa1fc
	if (!cr6.eq) goto loc_832AA1FC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_832AA1FC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832aa208
	if (!cr6.eq) goto loc_832AA208;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_832AA208:
	// lis r28,-31747
	ctx.r28.s64 = -2080571392;
	// lwz r3,-32528(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832AA214;
	sub_832A5A38(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r30,264
	ctx.r5.s64 = ctx.r30.s64 + 264;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a9d78
	ctx.lr = 0x832AA22C;
	sub_832A9D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aa254
	if (cr6.lt) goto loc_832AA254;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r26,264
	ctx.r5.s64 = ctx.r26.s64 + 264;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a9d78
	ctx.lr = 0x832AA250;
	sub_832A9D78(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_832AA254:
	// lwz r3,-32528(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832AA25C;
	sub_832A5AE8(ctx, base);
loc_832AA25C:
	// or r11,r25,r31
	ctx.r11.u64 = ctx.r25.u64 | ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832aa280
	if (!cr6.lt) goto loc_832AA280;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x832aa29c
	if (cr6.lt) goto loc_832AA29C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AA280:
	// rlwinm r11,r31,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r25,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 16) & 0xFFFF;
	// sth r11,262(r30)
	PPC_STORE_U16(ctx.r30.u32 + 262, ctx.r11.u16);
	// clrlwi r3,r25,16
	ctx.r3.u64 = ctx.r25.u32 & 0xFFFF;
	// sth r10,262(r26)
	PPC_STORE_U16(ctx.r26.u32 + 262, ctx.r10.u16);
	// sth r31,260(r30)
	PPC_STORE_U16(ctx.r30.u32 + 260, ctx.r31.u16);
	// sth r3,260(r26)
	PPC_STORE_U16(ctx.r26.u32 + 260, ctx.r3.u16);
loc_832AA29C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA2A4"))) PPC_WEAK_FUNC(sub_832AA2A4);
PPC_FUNC_IMPL(__imp__sub_832AA2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AA2A8"))) PPC_WEAK_FUNC(sub_832AA2A8);
PPC_FUNC_IMPL(__imp__sub_832AA2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AA2B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832aa2e4
	if (cr6.eq) goto loc_832AA2E4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832a9d78
	ctx.lr = 0x832AA2DC;
	sub_832A9D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832aa31c
	goto loc_832AA31C;
loc_832AA2E4:
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832AA2F0;
	sub_832A5A38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832a9d78
	ctx.lr = 0x832AA30C;
	sub_832A9D78(ctx, base);
	// lwz r11,-32528(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832a5ae8
	ctx.lr = 0x832AA31C;
	sub_832A5AE8(ctx, base);
loc_832AA31C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x832aa34c
	if (cr6.lt) goto loc_832AA34C;
	// rlwinm r11,r30,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFFFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AA34C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA358"))) PPC_WEAK_FUNC(sub_832AA358);
PPC_FUNC_IMPL(__imp__sub_832AA358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r8,262(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 262);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832aa370
	if (!cr6.eq) goto loc_832AA370;
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// blr 
	return;
loc_832AA370:
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x832aa394
	if (!cr6.eq) goto loc_832AA394;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,265(r11)
	PPC_STORE_U8(ctx.r11.u32 + 265, ctx.r10.u8);
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// sth r9,260(r11)
	PPC_STORE_U16(ctx.r11.u32 + 260, ctx.r9.u16);
	// sth r10,262(r11)
	PPC_STORE_U16(ctx.r11.u32 + 262, ctx.r10.u16);
	// blr 
	return;
loc_832AA394:
	// lhz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 260);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,264(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 264);
	// cmplwi cr6,r7,47
	cr6.compare<uint32_t>(ctx.r7.u32, 47, xer);
	// beq cr6,0x832aa3c0
	if (cr6.eq) goto loc_832AA3C0;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
loc_832AA3B0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,47
	cr6.compare<uint32_t>(ctx.r7.u32, 47, xer);
	// bne cr6,0x832aa3b0
	if (!cr6.eq) goto loc_832AA3B0;
loc_832AA3C0:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r3,r9,265
	ctx.r3.s64 = ctx.r9.s64 + 265;
	// stb r7,264(r9)
	PPC_STORE_U8(ctx.r9.u32 + 264, ctx.r7.u8);
	// sth r10,260(r11)
	PPC_STORE_U16(ctx.r11.u32 + 260, ctx.r10.u16);
	// sth r8,262(r11)
	PPC_STORE_U16(ctx.r11.u32 + 262, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AA3E4"))) PPC_WEAK_FUNC(sub_832AA3E4);
PPC_FUNC_IMPL(__imp__sub_832AA3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AA3E8"))) PPC_WEAK_FUNC(sub_832AA3E8);
PPC_FUNC_IMPL(__imp__sub_832AA3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,260(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 260);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832aa404
	if (!cr6.eq) goto loc_832AA404;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-2392
	ctx.r3.s64 = ctx.r11.s64 + -2392;
	// blr 
	return;
loc_832AA404:
	// lhz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AA41C"))) PPC_WEAK_FUNC(sub_832AA41C);
PPC_FUNC_IMPL(__imp__sub_832AA41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AA420"))) PPC_WEAK_FUNC(sub_832AA420);
PPC_FUNC_IMPL(__imp__sub_832AA420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AA428;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r8,6(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r29,262(r5)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r5.u32 + 262);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subfic r11,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r8.s64;
	// lhz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r9,260(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 260);
	// subfe r4,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhz r5,260(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 260);
	// subfic r3,r29,0
	xer.ca = ctx.r29.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r29.s64;
	// lhz r7,262(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 262);
	// and r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 & ctx.r6.u64;
	// subfe r6,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r6,r5
	ctx.r28.u64 = ctx.r6.u64 & ctx.r5.u64;
	// subf r11,r10,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r10.s64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r11.u16);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x832aa48c
	if (cr6.lt) goto loc_832AA48C;
loc_832AA47C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,36
	ctx.r3.u64 = ctx.r3.u64 | 36;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AA48C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832aa4b8
	if (!cr6.eq) goto loc_832AA4B8;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r11.u16);
	// li r9,47
	ctx.r9.s64 = 47;
	// stb r11,265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 265, ctx.r11.u8);
	// sth r10,260(r31)
	PPC_STORE_U16(ctx.r31.u32 + 260, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r9,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AA4B8:
	// subf r11,r8,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r8.s64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r8,262(r31)
	PPC_STORE_U16(ctx.r31.u32 + 262, ctx.r8.u16);
	// cmplwi cr6,r8,64
	cr6.compare<uint32_t>(ctx.r8.u32, 64, xer);
	// bge cr6,0x832aa47c
	if (!cr6.lt) goto loc_832AA47C;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r27,r28,r31
	ctx.r27.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,264
	ctx.r4.s64 = ctx.r10.s64 + 264;
	// addi r3,r27,264
	ctx.r3.s64 = ctx.r27.s64 + 264;
	// bl 0x83293f28
	ctx.lr = 0x832AA4EC;
	sub_83293F28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x83293ec8
	ctx.lr = 0x832AA4FC;
	sub_83293EC8(ctx, base);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832AA50C:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832aa50c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832AA50C;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r27,265
	ctx.r8.s64 = ctx.r27.s64 + 265;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_832AA52C:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r7,r10,-47
	ctx.r7.s64 = ctx.r10.s64 + -47;
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r4,r6,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x832aa568
	if (!cr6.eq) goto loc_832AA568;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x832aa52c
	goto loc_832AA52C;
loc_832AA568:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832aa57c
	if (cr6.eq) goto loc_832AA57C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x832aa52c
	goto loc_832AA52C;
loc_832AA57C:
	// lhz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 260);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA588"))) PPC_WEAK_FUNC(sub_832AA588);
PPC_FUNC_IMPL(__imp__sub_832AA588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AA590;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lhz r10,260(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 260);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832aa5b8
	if (!cr6.eq) goto loc_832AA5B8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-2392
	ctx.r3.s64 = ctx.r11.s64 + -2392;
	// b 0x832aa620
	goto loc_832AA620;
loc_832AA5B8:
	// lhz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r30,r3,264
	ctx.r30.s64 = ctx.r3.s64 + 264;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832aa5cc
	if (cr6.eq) goto loc_832AA5CC;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_832AA5CC:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832aa61c
	if (cr6.eq) goto loc_832AA61C;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,47
	ctx.r27.s64 = 47;
loc_832AA5E4:
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x832aa610
	if (!cr6.eq) goto loc_832AA610;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x832AA604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aa630
	if (cr6.lt) goto loc_832AA630;
loc_832AA610:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832aa5e4
	if (!cr6.eq) goto loc_832AA5E4;
loc_832AA61C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832AA620:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bctrl 
	ctx.lr = 0x832AA630;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AA630:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA638"))) PPC_WEAK_FUNC(sub_832AA638);
PPC_FUNC_IMPL(__imp__sub_832AA638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AA640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// blt cr6,0x832aa674
	if (cr6.lt) goto loc_832AA674;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-31152
	ctx.r4.s64 = ctx.r11.s64 + -31152;
	// addi r3,r10,-27392
	ctx.r3.s64 = ctx.r10.s64 + -27392;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83298338
	ctx.lr = 0x832AA668;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AA674:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,-27512
	ctx.r29.s64 = ctx.r11.s64 + -27512;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r8,r29,12
	ctx.r8.s64 = ctx.r29.s64 + 12;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x832a1cb0
	ctx.lr = 0x832AA69C;
	sub_832A1CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aa6d4
	if (cr6.eq) goto loc_832AA6D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// rlwinm r10,r30,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832AA6D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832AA6D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA6E0"))) PPC_WEAK_FUNC(sub_832AA6E0);
PPC_FUNC_IMPL(__imp__sub_832AA6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832AA6E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r25,r10,-27512
	ctx.r25.s64 = ctx.r10.s64 + -27512;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r9,r25,16
	ctx.r9.s64 = ctx.r25.s64 + 16;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r26,r3,8
	ctx.r26.s64 = ctx.r3.s64 + 8;
	// lhzx r29,r7,r9
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// beq cr6,0x832aa7a0
	if (cr6.eq) goto loc_832AA7A0;
	// subf r27,r11,r29
	ctx.r27.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r5,r27
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, xer);
	// bge cr6,0x832aa744
	if (!cr6.lt) goto loc_832AA744;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
loc_832AA744:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832AA754;
	sub_83293EC8(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// bne cr6,0x832aa7a0
	if (!cr6.eq) goto loc_832AA7A0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832AA798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
loc_832AA7A0:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x832aa7ec
	if (cr6.lt) goto loc_832AA7EC;
loc_832AA7A8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832AA7B8;
	sub_83293EC8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x832AA7E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bge cr6,0x832aa7a8
	if (!cr6.lt) goto loc_832AA7A8;
loc_832AA7EC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832aa808
	if (cr6.eq) goto loc_832AA808;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832AA804;
	sub_83293EC8(ctx, base);
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
loc_832AA808:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA810"))) PPC_WEAK_FUNC(sub_832AA810);
PPC_FUNC_IMPL(__imp__sub_832AA810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AA818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r29,r10,-27512
	ctx.r29.s64 = ctx.r10.s64 + -27512;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r29,14
	ctx.r10.s64 = ctx.r29.s64 + 14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lhzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// blt cr6,0x832aa87c
	if (cr6.lt) goto loc_832AA87C;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832AA860;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832aa880
	if (cr6.eq) goto loc_832AA880;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832AA878;
	sub_83293EC8(ctx, base);
	// b 0x832aa880
	goto loc_832AA880;
loc_832AA87C:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_832AA880:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832AA8A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AA8B4"))) PPC_WEAK_FUNC(sub_832AA8B4);
PPC_FUNC_IMPL(__imp__sub_832AA8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AA8B8"))) PPC_WEAK_FUNC(sub_832AA8B8);
PPC_FUNC_IMPL(__imp__sub_832AA8B8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aa90c
	if (cr6.eq) goto loc_832AA90C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// addi r7,r8,-27512
	ctx.r7.s64 = ctx.r8.s64 + -27512;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x832AA904;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832AA90C;
	sub_832A1D18(ctx, base);
loc_832AA90C:
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

__attribute__((alias("__imp__sub_832AA920"))) PPC_WEAK_FUNC(sub_832AA920);
PPC_FUNC_IMPL(__imp__sub_832AA920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x832AA928;
	__savegprlr_16(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r18,r20
	ctx.r18.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// addi r19,r11,29856
	ctx.r19.s64 = ctx.r11.s64 + 29856;
loc_832AA964:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832aab64
	if (cr6.eq) goto loc_832AAB64;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x832aa964
	if (cr6.eq) goto loc_832AA964;
loc_832AA980:
	// addi r29,r31,-1
	ctx.r29.s64 = ctx.r31.s64 + -1;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_832AA98C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bgt cr6,0x832aaa5c
	if (cr6.gt) goto loc_832AAA5C;
	// beq cr6,0x832aaa14
	if (cr6.eq) goto loc_832AAA14;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832aaae0
	if (cr6.eq) goto loc_832AAAE0;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// bne cr6,0x832aaa64
	if (!cr6.eq) goto loc_832AAA64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832984d0
	ctx.lr = 0x832AA9C4;
	sub_832984D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aa9d4
	if (cr6.lt) goto loc_832AA9D4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_832AA9D4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x832aac6c
	if (cr6.eq) goto loc_832AAC6C;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x832aa9f8
	if (!cr6.eq) goto loc_832AA9F8;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,45
	cr6.compare<uint32_t>(ctx.r10.u32, 45, xer);
	// beq cr6,0x832aac6c
	if (cr6.eq) goto loc_832AAC6C;
loc_832AA9F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832aaae0
	if (cr6.eq) goto loc_832AAAE0;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// bne cr6,0x832aac6c
	if (!cr6.eq) goto loc_832AAC6C;
loc_832AAA14:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832aaae0
	if (cr6.eq) goto loc_832AAAE0;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x832aaa14
	if (cr6.eq) goto loc_832AAA14;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832aaa6c
	if (cr6.eq) goto loc_832AAA6C;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83299890
	ctx.lr = 0x832AAA58;
	sub_83299890(ctx, base);
	// b 0x832aaa7c
	goto loc_832AAA7C;
loc_832AAA5C:
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// beq cr6,0x832aaacc
	if (cr6.eq) goto loc_832AAACC;
loc_832AAA64:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x832aa98c
	goto loc_832AA98C;
loc_832AAA6C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832997c0
	ctx.lr = 0x832AAA7C;
	sub_832997C0(ctx, base);
loc_832AAA7C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aac6c
	if (cr6.lt) goto loc_832AAC6C;
	// addic r11,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfe r9,r11,r25
	temp.u8 = (~ctx.r11.u32 + ctx.r25.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r25.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r25.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x832AAAB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832aa980
	if (!cr6.eq) goto loc_832AA980;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832AAACC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x832aac6c
	if (!cr6.eq) goto loc_832AAC6C;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// b 0x832aa964
	goto loc_832AA964;
loc_832AAAE0:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832aab0c
	if (cr6.eq) goto loc_832AAB0C;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83299890
	ctx.lr = 0x832AAB08;
	sub_83299890(ctx, base);
	// b 0x832aab1c
	goto loc_832AAB1C;
loc_832AAB0C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832997c0
	ctx.lr = 0x832AAB1C;
	sub_832997C0(ctx, base);
loc_832AAB1C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aac6c
	if (cr6.lt) goto loc_832AAC6C;
	// addic r11,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfe r9,r11,r25
	temp.u8 = (~ctx.r11.u32 + ctx.r25.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r25.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r25.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x832AAB58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aac80
	if (cr6.eq) goto loc_832AAC80;
loc_832AAB64:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x832aac60
	if (cr6.eq) goto loc_832AAC60;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832aab98
	if (cr6.eq) goto loc_832AAB98;
	// stw r19,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r19.u32);
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// stw r20,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r20.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83299890
	ctx.lr = 0x832AAB94;
	sub_83299890(ctx, base);
	// b 0x832aaba8
	goto loc_832AABA8;
loc_832AAB98:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832997c0
	ctx.lr = 0x832AABA8;
	sub_832997C0(ctx, base);
loc_832AABA8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832aabbc
	if (!cr6.lt) goto loc_832AABBC;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8257
	ctx.r4.u64 = ctx.r4.u64 | 8257;
	// b 0x832aac74
	goto loc_832AAC74;
loc_832AABBC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832aabfc
	if (cr6.eq) goto loc_832AABFC;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x832aabf4
	if (cr6.lt) goto loc_832AABF4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,29428
	ctx.r4.s64 = ctx.r11.s64 + 29428;
	// bl 0x83293fb0
	ctx.lr = 0x832AABE4;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832aabf4
	if (!cr6.eq) goto loc_832AABF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832aac14
	goto loc_832AAC14;
loc_832AABF4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x832aac14
	goto loc_832AAC14;
loc_832AABFC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-27056
	ctx.r10.s64 = -1773142016;
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_832AAC14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832aac40
	if (cr6.eq) goto loc_832AAC40;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// ori r4,r4,8258
	ctx.r4.u64 = ctx.r4.u64 | 8258;
	// bl 0x8329a350
	ctx.lr = 0x832AAC34;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832AAC40:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mtctr r17
	ctr.u64 = ctx.r17.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832AAC5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_832AAC60:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832AAC6C:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8256
	ctx.r4.u64 = ctx.r4.u64 | 8256;
loc_832AAC74:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AAC80;
	sub_8329A350(ctx, base);
loc_832AAC80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AAC8C"))) PPC_WEAK_FUNC(sub_832AAC8C);
PPC_FUNC_IMPL(__imp__sub_832AAC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AAC90"))) PPC_WEAK_FUNC(sub_832AAC90);
PPC_FUNC_IMPL(__imp__sub_832AAC90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// clrlwi r10,r3,30
	ctx.r10.u64 = ctx.r3.u32 & 0x3;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832aacd8
	if (cr6.eq) goto loc_832AACD8;
	// subfic r10,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r10.s64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_832AACAC:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832aad40
	if (!cr6.eq) goto loc_832AAD40;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832aacac
	if (!cr6.eq) goto loc_832AACAC;
loc_832AACD8:
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// subf. r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x832aad08
	if (!cr0.gt) goto loc_832AAD08;
loc_832AACE4:
	// lis r12,-32640
	ctx.r12.s64 = -2139095040;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ori r12,r12,32896
	ctx.r12.u64 = ctx.r12.u64 | 32896;
	// and r7,r10,r12
	ctx.r7.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832aad40
	if (!cr6.eq) goto loc_832AAD40;
	// addic. r11,r11,-4
	xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bgt 0x832aace4
	if (cr0.gt) goto loc_832AACE4;
loc_832AAD08:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832aad38
	if (cr6.eq) goto loc_832AAD38;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_832AAD14:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r8,255
	ctx.r9.s64 = ctx.r8.s64 + 255;
	// rlwinm r8,r11,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832aad40
	if (!cr6.eq) goto loc_832AAD40;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832aad14
	if (!cr6.eq) goto loc_832AAD14;
loc_832AAD38:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_832AAD40:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AAD4C"))) PPC_WEAK_FUNC(sub_832AAD4C);
PPC_FUNC_IMPL(__imp__sub_832AAD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AAD50"))) PPC_WEAK_FUNC(sub_832AAD50);
PPC_FUNC_IMPL(__imp__sub_832AAD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x832aae4c
	if (!cr6.gt) goto loc_832AAE4C;
loc_832AAD5C:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x832aad74
	if (!cr6.lt) goto loc_832AAD74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x832aae44
	goto loc_832AAE44;
loc_832AAD74:
	// cmplwi cr6,r10,192
	cr6.compare<uint32_t>(ctx.r10.u32, 192, xer);
	// blt cr6,0x832aae54
	if (cr6.lt) goto loc_832AAE54;
	// cmplwi cr6,r10,224
	cr6.compare<uint32_t>(ctx.r10.u32, 224, xer);
	// bge cr6,0x832aadac
	if (!cr6.lt) goto loc_832AADAC;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x832aae4c
	if (!cr6.gt) goto loc_832AAE4C;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// bne cr6,0x832aae54
	if (!cr6.eq) goto loc_832AAE54;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
	// b 0x832aae44
	goto loc_832AAE44;
loc_832AADAC:
	// cmplwi cr6,r10,240
	cr6.compare<uint32_t>(ctx.r10.u32, 240, xer);
	// bge cr6,0x832aadf0
	if (!cr6.lt) goto loc_832AADF0;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// ble cr6,0x832aae4c
	if (!cr6.gt) goto loc_832AAE4C;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// bne cr6,0x832aae54
	if (!cr6.eq) goto loc_832AAE54;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// bne cr6,0x832aae54
	if (!cr6.eq) goto loc_832AAE54;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r4,r4,-3
	ctx.r4.s64 = ctx.r4.s64 + -3;
	// b 0x832aae44
	goto loc_832AAE44;
loc_832AADF0:
	// cmplwi cr6,r10,248
	cr6.compare<uint32_t>(ctx.r10.u32, 248, xer);
	// bge cr6,0x832aae54
	if (!cr6.lt) goto loc_832AAE54;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// ble cr6,0x832aae4c
	if (!cr6.gt) goto loc_832AAE4C;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// bne cr6,0x832aae54
	if (!cr6.eq) goto loc_832AAE54;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// bne cr6,0x832aae54
	if (!cr6.eq) goto loc_832AAE54;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,3(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// rlwinm r8,r9,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// bne cr6,0x832aae54
	if (!cr6.eq) goto loc_832AAE54;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_832AAE44:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x832aad5c
	if (cr6.gt) goto loc_832AAD5C;
loc_832AAE4C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_832AAE54:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AAE60"))) PPC_WEAK_FUNC(sub_832AAE60);
PPC_FUNC_IMPL(__imp__sub_832AAE60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x832aaeec
	if (!cr6.gt) goto loc_832AAEEC;
loc_832AAE6C:
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// blt cr6,0x832aaedc
	if (cr6.lt) goto loc_832AAEDC;
	// cmplwi cr6,r11,161
	cr6.compare<uint32_t>(ctx.r11.u32, 161, xer);
	// blt cr6,0x832aae88
	if (cr6.lt) goto loc_832AAE88;
	// cmplwi cr6,r11,223
	cr6.compare<uint32_t>(ctx.r11.u32, 223, xer);
	// ble cr6,0x832aaedc
	if (!cr6.gt) goto loc_832AAEDC;
loc_832AAE88:
	// cmplwi cr6,r11,129
	cr6.compare<uint32_t>(ctx.r11.u32, 129, xer);
	// blt cr6,0x832aae98
	if (cr6.lt) goto loc_832AAE98;
	// cmplwi cr6,r11,159
	cr6.compare<uint32_t>(ctx.r11.u32, 159, xer);
	// ble cr6,0x832aaea8
	if (!cr6.gt) goto loc_832AAEA8;
loc_832AAE98:
	// cmplwi cr6,r11,224
	cr6.compare<uint32_t>(ctx.r11.u32, 224, xer);
	// blt cr6,0x832aaef4
	if (cr6.lt) goto loc_832AAEF4;
	// cmplwi cr6,r11,252
	cr6.compare<uint32_t>(ctx.r11.u32, 252, xer);
	// bgt cr6,0x832aaef4
	if (cr6.gt) goto loc_832AAEF4;
loc_832AAEA8:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x832aaeec
	if (!cr6.gt) goto loc_832AAEEC;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// blt cr6,0x832aaef4
	if (cr6.lt) goto loc_832AAEF4;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// beq cr6,0x832aaef4
	if (cr6.eq) goto loc_832AAEF4;
	// cmplwi cr6,r11,253
	cr6.compare<uint32_t>(ctx.r11.u32, 253, xer);
	// bge cr6,0x832aaef4
	if (!cr6.lt) goto loc_832AAEF4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
	// b 0x832aaee4
	goto loc_832AAEE4;
loc_832AAEDC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_832AAEE4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x832aae6c
	if (cr6.gt) goto loc_832AAE6C;
loc_832AAEEC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_832AAEF4:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AAF00"))) PPC_WEAK_FUNC(sub_832AAF00);
PPC_FUNC_IMPL(__imp__sub_832AAF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x832aafe4
	if (!cr6.gt) goto loc_832AAFE4;
loc_832AAF0C:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x832aaf24
	if (!cr6.lt) goto loc_832AAF24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x832aafdc
	goto loc_832AAFDC;
loc_832AAF24:
	// cmplwi cr6,r10,161
	cr6.compare<uint32_t>(ctx.r10.u32, 161, xer);
	// blt cr6,0x832aaf60
	if (cr6.lt) goto loc_832AAF60;
	// cmplwi cr6,r10,254
	cr6.compare<uint32_t>(ctx.r10.u32, 254, xer);
	// bgt cr6,0x832aaf60
	if (cr6.gt) goto loc_832AAF60;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x832aafe4
	if (!cr6.gt) goto loc_832AAFE4;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r10,161
	cr6.compare<uint32_t>(ctx.r10.u32, 161, xer);
	// blt cr6,0x832aafec
	if (cr6.lt) goto loc_832AAFEC;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x832aafec
	if (cr6.eq) goto loc_832AAFEC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
	// b 0x832aafdc
	goto loc_832AAFDC;
loc_832AAF60:
	// cmplwi cr6,r10,142
	cr6.compare<uint32_t>(ctx.r10.u32, 142, xer);
	// bne cr6,0x832aaf94
	if (!cr6.eq) goto loc_832AAF94;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x832aafe4
	if (!cr6.gt) goto loc_832AAFE4;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r10,161
	cr6.compare<uint32_t>(ctx.r10.u32, 161, xer);
	// blt cr6,0x832aafec
	if (cr6.lt) goto loc_832AAFEC;
	// cmplwi cr6,r10,223
	cr6.compare<uint32_t>(ctx.r10.u32, 223, xer);
	// bgt cr6,0x832aafec
	if (cr6.gt) goto loc_832AAFEC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
	// b 0x832aafdc
	goto loc_832AAFDC;
loc_832AAF94:
	// cmplwi cr6,r10,143
	cr6.compare<uint32_t>(ctx.r10.u32, 143, xer);
	// bne cr6,0x832aafec
	if (!cr6.eq) goto loc_832AAFEC;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// ble cr6,0x832aafe4
	if (!cr6.gt) goto loc_832AAFE4;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r10,161
	cr6.compare<uint32_t>(ctx.r10.u32, 161, xer);
	// blt cr6,0x832aafec
	if (cr6.lt) goto loc_832AAFEC;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x832aafec
	if (cr6.eq) goto loc_832AAFEC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// cmplwi cr6,r10,161
	cr6.compare<uint32_t>(ctx.r10.u32, 161, xer);
	// blt cr6,0x832aafec
	if (cr6.lt) goto loc_832AAFEC;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x832aafec
	if (cr6.eq) goto loc_832AAFEC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r4,r4,-3
	ctx.r4.s64 = ctx.r4.s64 + -3;
loc_832AAFDC:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt cr6,0x832aaf0c
	if (cr6.gt) goto loc_832AAF0C;
loc_832AAFE4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_832AAFEC:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AAFF8"))) PPC_WEAK_FUNC(sub_832AAFF8);
PPC_FUNC_IMPL(__imp__sub_832AAFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,96
	cr6.compare<uint32_t>(ctx.r4.u32, 96, xer);
	// bgt cr6,0x832ab064
	if (cr6.gt) goto loc_832AB064;
	// beq cr6,0x832ab04c
	if (cr6.eq) goto loc_832AB04C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832ab01c
	if (cr6.eq) goto loc_832AB01C;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// beq cr6,0x832ab034
	if (cr6.eq) goto loc_832AB034;
	// cmplwi cr6,r4,64
	cr6.compare<uint32_t>(ctx.r4.u32, 64, xer);
	// bne cr6,0x832ab074
	if (!cr6.eq) goto loc_832AB074;
loc_832AB01C:
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r10,r11,-24000
	ctx.r10.s64 = ctx.r11.s64 + -24000;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832AB034:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r10,r11,-21360
	ctx.r10.s64 = ctx.r11.s64 + -21360;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832AB04C:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r10,r11,-20736
	ctx.r10.s64 = ctx.r11.s64 + -20736;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832AB064:
	// cmplwi cr6,r4,128
	cr6.compare<uint32_t>(ctx.r4.u32, 128, xer);
	// beq cr6,0x832ab098
	if (cr6.eq) goto loc_832AB098;
	// cmplwi cr6,r4,160
	cr6.compare<uint32_t>(ctx.r4.u32, 160, xer);
	// beq cr6,0x832ab080
	if (cr6.eq) goto loc_832AB080;
loc_832AB074:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// blr 
	return;
loc_832AB080:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r10,r11,-21168
	ctx.r10.s64 = ctx.r11.s64 + -21168;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832AB098:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// addi r10,r11,-20896
	ctx.r10.s64 = ctx.r11.s64 + -20896;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AB0B0"))) PPC_WEAK_FUNC(sub_832AB0B0);
PPC_FUNC_IMPL(__imp__sub_832AB0B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// b 0x8329e9c0
	sub_8329E9C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB0C8"))) PPC_WEAK_FUNC(sub_832AB0C8);
PPC_FUNC_IMPL(__imp__sub_832AB0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832AB0D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832ab118
	if (!cr6.gt) goto loc_832AB118;
loc_832AB0EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB0F8;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab13c
	if (cr6.lt) goto loc_832AB13C;
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bne cr6,0x832ab154
	if (!cr6.eq) goto loc_832AB154;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x832ab0ec
	if (cr6.lt) goto loc_832AB0EC;
loc_832AB118:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832AB124;
	sub_8329E830(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_832AB134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832AB13C:
	// lis r11,-32759
	ctx.r11.s64 = -2146893824;
	// ori r10,r11,8577
	ctx.r10.u64 = ctx.r11.u64 | 8577;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bne cr6,0x832ab134
	if (!cr6.eq) goto loc_832AB134;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832ab134
	if (!cr6.gt) goto loc_832AB134;
loc_832AB154:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB160"))) PPC_WEAK_FUNC(sub_832AB160);
PPC_FUNC_IMPL(__imp__sub_832AB160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832AB168;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,18592
	ctx.r28.s64 = ctx.r11.s64 + 18592;
loc_832AB17C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832AB180:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB18C;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab1d4
	if (cr6.lt) goto loc_832AB1D4;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832ab21c
	if (cr6.eq) goto loc_832AB21C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(ctx.r31.s32, 512, xer);
	// blt cr6,0x832ab180
	if (cr6.lt) goto loc_832AB180;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832AB1C0;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r29,512
	ctx.r29.s64 = ctx.r29.s64 + 512;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x832ab17c
	goto loc_832AB17C;
loc_832AB1D4:
	// lis r11,-32759
	ctx.r11.s64 = -2146893824;
	// ori r11,r11,8577
	ctx.r11.u64 = ctx.r11.u64 | 8577;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bne cr6,0x832ab238
	if (!cr6.eq) goto loc_832AB238;
	// add. r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x832ab1f8
	if (!cr0.eq) goto loc_832AB1F8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832AB1F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832AB204;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832AB21C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832AB228;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_832AB238:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB240"))) PPC_WEAK_FUNC(sub_832AB240);
PPC_FUNC_IMPL(__imp__sub_832AB240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832AB248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_832AB258:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832AB25C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB268;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab300
	if (cr6.lt) goto loc_832AB300;
	// cmpwi cr6,r3,45
	cr6.compare<int32_t>(ctx.r3.s32, 45, xer);
	// beq cr6,0x832ab2c0
	if (cr6.eq) goto loc_832AB2C0;
	// cmpwi cr6,r3,62
	cr6.compare<int32_t>(ctx.r3.s32, 62, xer);
	// beq cr6,0x832ab290
	if (cr6.eq) goto loc_832AB290;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// beq cr6,0x832ab2f8
	if (cr6.eq) goto loc_832AB2F8;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ab2cc
	goto loc_832AB2CC;
loc_832AB290:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x832ab2cc
	if (!cr6.eq) goto loc_832AB2CC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329e830
	ctx.lr = 0x832AB2A8;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832AB2C0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bgt cr6,0x832ab2f8
	if (cr6.gt) goto loc_832AB2F8;
loc_832AB2CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(ctx.r31.s32, 512, xer);
	// blt cr6,0x832ab25c
	if (cr6.lt) goto loc_832AB25C;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832AB2E4;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r28,r28,512
	ctx.r28.s64 = ctx.r28.s64 + 512;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x832ab258
	goto loc_832AB258;
loc_832AB2F8:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8706
	ctx.r3.u64 = ctx.r3.u64 | 8706;
loc_832AB300:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB308"))) PPC_WEAK_FUNC(sub_832AB308);
PPC_FUNC_IMPL(__imp__sub_832AB308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832AB310;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_832AB320:
	// li r31,0
	ctx.r31.s64 = 0;
loc_832AB324:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB330;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab3d0
	if (cr6.lt) goto loc_832AB3D0;
	// cmpwi cr6,r3,62
	cr6.compare<int32_t>(ctx.r3.s32, 62, xer);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// beq cr6,0x832ab36c
	if (cr6.eq) goto loc_832AB36C;
	// cmpwi cr6,r3,63
	cr6.compare<int32_t>(ctx.r3.s32, 63, xer);
	// beq cr6,0x832ab35c
	if (cr6.eq) goto loc_832AB35C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832ab3a0
	if (!cr6.eq) goto loc_832AB3A0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ab374
	goto loc_832AB374;
loc_832AB35C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832ab3a0
	if (!cr6.eq) goto loc_832AB3A0;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x832ab374
	goto loc_832AB374;
loc_832AB36C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832ab3b0
	if (!cr6.eq) goto loc_832AB3B0;
loc_832AB374:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(ctx.r31.s32, 512, xer);
	// blt cr6,0x832ab324
	if (cr6.lt) goto loc_832AB324;
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832AB38C;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r28,r28,512
	ctx.r28.s64 = ctx.r28.s64 + 512;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x832ab320
	goto loc_832AB320;
loc_832AB3A0:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8706
	ctx.r3.u64 = ctx.r3.u64 | 8706;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832AB3B0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329e830
	ctx.lr = 0x832AB3C0;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_832AB3D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB3D8"))) PPC_WEAK_FUNC(sub_832AB3D8);
PPC_FUNC_IMPL(__imp__sub_832AB3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AB3E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832ab450
	if (!cr6.gt) goto loc_832AB450;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r28,r11,18592
	ctx.r28.s64 = ctx.r11.s64 + 18592;
loc_832AB408:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB414;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab4d0
	if (cr6.lt) goto loc_832AB4D0;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ab45c
	if (!cr6.eq) goto loc_832AB45C;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ab448
	if (cr6.eq) goto loc_832AB448;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x832ab408
	if (cr6.lt) goto loc_832AB408;
loc_832AB448:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x832ab46c
	if (!cr6.eq) goto loc_832AB46C;
loc_832AB450:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AB45C:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AB46C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8329e798
	ctx.lr = 0x832AB47C;
	sub_8329E798(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x832ab498
	if (!cr6.eq) goto loc_832AB498;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832ab450
	if (!cr6.eq) goto loc_832AB450;
loc_832AB498:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832AB4AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// bne cr6,0x832ab45c
	if (!cr6.eq) goto loc_832AB45C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832AB4C0;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_832AB4D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB4D8"))) PPC_WEAK_FUNC(sub_832AB4D8);
PPC_FUNC_IMPL(__imp__sub_832AB4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AB4E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB4F8;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab5b4
	if (cr6.lt) goto loc_832AB5B4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r3,35
	cr6.compare<int32_t>(ctx.r3.s32, 35, xer);
	// bne cr6,0x832ab650
	if (!cr6.eq) goto loc_832AB650;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB51C;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab5b4
	if (cr6.lt) goto loc_832AB5B4;
	// cmpwi cr6,r3,120
	cr6.compare<int32_t>(ctx.r3.s32, 120, xer);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bne cr6,0x832ab5bc
	if (!cr6.eq) goto loc_832AB5BC;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8329e690
	ctx.lr = 0x832AB538;
	sub_8329E690(ctx, base);
	// li r31,3
	ctx.r31.s64 = 3;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab5b4
	if (cr6.lt) goto loc_832AB5B4;
loc_832AB544:
	// cmpwi cr6,r3,59
	cr6.compare<int32_t>(ctx.r3.s32, 59, xer);
	// beq cr6,0x832ab5a4
	if (cr6.eq) goto loc_832AB5A4;
	// cmpwi cr6,r3,48
	cr6.compare<int32_t>(ctx.r3.s32, 48, xer);
	// blt cr6,0x832ab564
	if (cr6.lt) goto loc_832AB564;
	// cmpwi cr6,r3,57
	cr6.compare<int32_t>(ctx.r3.s32, 57, xer);
	// bgt cr6,0x832ab564
	if (cr6.gt) goto loc_832AB564;
	// addi r10,r3,-48
	ctx.r10.s64 = ctx.r3.s64 + -48;
	// b 0x832ab57c
	goto loc_832AB57C;
loc_832AB564:
	// ori r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 | 32;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x832ab5ac
	if (cr6.lt) goto loc_832AB5AC;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x832ab5ac
	if (cr6.gt) goto loc_832AB5AC;
	// addi r10,r11,-87
	ctx.r10.s64 = ctx.r11.s64 + -87;
loc_832AB57C:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8329e690
	ctx.lr = 0x832AB590;
	sub_8329E690(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ab544
	if (!cr6.lt) goto loc_832AB544;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AB5A4:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x832ab630
	if (!cr6.eq) goto loc_832AB630;
loc_832AB5AC:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
loc_832AB5B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AB5BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8329e690
	ctx.lr = 0x832AB5C4;
	sub_8329E690(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab61c
	if (cr6.lt) goto loc_832AB61C;
loc_832AB5D4:
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(ctx.r11.s32, 59, xer);
	// beq cr6,0x832ab628
	if (cr6.eq) goto loc_832AB628;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832ab5ac
	if (cr6.lt) goto loc_832AB5AC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x832ab5ac
	if (cr6.gt) goto loc_832AB5AC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
	// bl 0x8329e690
	ctx.lr = 0x832AB60C;
	sub_8329E690(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ab5d4
	if (!cr6.lt) goto loc_832AB5D4;
loc_832AB61C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AB628:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// beq cr6,0x832ab5ac
	if (cr6.eq) goto loc_832AB5AC;
loc_832AB630:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// ble cr6,0x832ab770
	if (!cr6.gt) goto loc_832AB770;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AB650:
	// addi r11,r3,-97
	ctx.r11.s64 = ctx.r3.s64 + -97;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bgt cr6,0x832ab5ac
	if (cr6.gt) goto loc_832AB5AC;
	// lis r12,-31957
	ctx.r12.s64 = -2094333952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18828
	ctx.r12.s64 = ctx.r12.s64 + -18828;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832AB6B8;
	case 1:
		goto loc_832AB5AC;
	case 2:
		goto loc_832AB5AC;
	case 3:
		goto loc_832AB5AC;
	case 4:
		goto loc_832AB5AC;
	case 5:
		goto loc_832AB5AC;
	case 6:
		goto loc_832AB704;
	case 7:
		goto loc_832AB5AC;
	case 8:
		goto loc_832AB5AC;
	case 9:
		goto loc_832AB5AC;
	case 10:
		goto loc_832AB5AC;
	case 11:
		goto loc_832AB714;
	case 12:
		goto loc_832AB5AC;
	case 13:
		goto loc_832AB5AC;
	case 14:
		goto loc_832AB5AC;
	case 15:
		goto loc_832AB5AC;
	case 16:
		goto loc_832AB724;
	default:
		return;
	}
	// lwz r25,-18760(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18760);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-18684(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18684);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-18668(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18668);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-19028(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19028);
	// lwz r25,-18652(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18652);
loc_832AB6B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB6C4;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab5b4
	if (cr6.lt) goto loc_832AB5B4;
	// cmpwi cr6,r3,109
	cr6.compare<int32_t>(ctx.r3.s32, 109, xer);
	// beq cr6,0x832ab6f0
	if (cr6.eq) goto loc_832AB6F0;
	// cmpwi cr6,r3,112
	cr6.compare<int32_t>(ctx.r3.s32, 112, xer);
	// bne cr6,0x832ab5ac
	if (!cr6.eq) goto loc_832AB5AC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,-27368
	ctx.r11.s64 = ctx.r11.s64 + -27368;
	// li r30,39
	ctx.r30.s64 = 39;
	// b 0x832ab730
	goto loc_832AB730;
loc_832AB6F0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,-27372
	ctx.r11.s64 = ctx.r11.s64 + -27372;
	// li r30,38
	ctx.r30.s64 = 38;
	// b 0x832ab730
	goto loc_832AB730;
loc_832AB704:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,62
	ctx.r30.s64 = 62;
	// addi r11,r11,-27376
	ctx.r11.s64 = ctx.r11.s64 + -27376;
	// b 0x832ab730
	goto loc_832AB730;
loc_832AB714:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,60
	ctx.r30.s64 = 60;
	// addi r11,r11,-27376
	ctx.r11.s64 = ctx.r11.s64 + -27376;
	// b 0x832ab730
	goto loc_832AB730;
loc_832AB724:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,34
	ctx.r30.s64 = 34;
	// addi r11,r11,-27384
	ctx.r11.s64 = ctx.r11.s64 + -27384;
loc_832AB730:
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x832ab770
	if (cr6.eq) goto loc_832AB770;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_832AB740:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB74C;
	sub_8329E690(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab5b4
	if (cr6.lt) goto loc_832AB5B4;
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, xer);
	// bne cr6,0x832ab5ac
	if (!cr6.eq) goto loc_832AB5AC;
	// lbzu r11,1(r28)
	ea = 1 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832ab740
	if (!cr6.eq) goto loc_832AB740;
loc_832AB770:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832AB77C;
	sub_8329E830(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(ctx.r30.s32, 255, xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// bge cr6,0x832ab7a0
	if (!cr6.lt) goto loc_832AB7A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AB7A0:
	// srawi r11,r30,8
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 8;
	// stb r30,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r30.u8);
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB7B8"))) PPC_WEAK_FUNC(sub_832AB7B8);
PPC_FUNC_IMPL(__imp__sub_832AB7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832AB7C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832ab8bc
	if (!cr6.gt) goto loc_832AB8BC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r26,r11,18592
	ctx.r26.s64 = ctx.r11.s64 + 18592;
loc_832AB7EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB7F8;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab93c
	if (cr6.lt) goto loc_832AB93C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ab8e4
	if (!cr6.eq) goto loc_832AB8E4;
	// cmpwi cr6,r3,38
	cr6.compare<int32_t>(ctx.r3.s32, 38, xer);
	// bne cr6,0x832ab89c
	if (!cr6.eq) goto loc_832AB89C;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x832ab8bc
	if (cr6.lt) goto loc_832AB8BC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8329e798
	ctx.lr = 0x832AB834;
	sub_8329E798(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832AB848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab93c
	if (cr6.lt) goto loc_832AB93C;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// bne cr6,0x832ab8e4
	if (!cr6.eq) goto loc_832AB8E4;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x8329e830
	ctx.lr = 0x832AB868;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x832ab4d8
	ctx.lr = 0x832AB884;
	sub_832AB4D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab93c
	if (cr6.lt) goto loc_832AB93C;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// subf r28,r3,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r3.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ab8b4
	goto loc_832AB8B4;
loc_832AB89C:
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832ab8bc
	if (cr6.eq) goto loc_832AB8BC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_832AB8B4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bgt cr6,0x832ab7ec
	if (cr6.gt) goto loc_832AB7EC;
loc_832AB8BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8329e798
	ctx.lr = 0x832AB8CC;
	sub_8329E798(ctx, base);
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// add. r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x832ab8f4
	if (!cr0.eq) goto loc_832AB8F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832AB8E4:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832AB8F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832AB908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ab938
	if (cr6.lt) goto loc_832AB938;
	// beq cr6,0x832ab8e4
	if (cr6.eq) goto loc_832AB8E4;
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329e830
	ctx.lr = 0x832AB92C;
	sub_8329E830(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_832AB938:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_832AB93C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AB944"))) PPC_WEAK_FUNC(sub_832AB944);
PPC_FUNC_IMPL(__imp__sub_832AB944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AB948"))) PPC_WEAK_FUNC(sub_832AB948);
PPC_FUNC_IMPL(__imp__sub_832AB948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832AB950;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,512
	cr6.compare<int32_t>(ctx.r5.s32, 512, xer);
	// ble cr6,0x832ab96c
	if (!cr6.gt) goto loc_832AB96C;
	// li r29,512
	ctx.r29.s64 = 512;
loc_832AB96C:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832ab9dc
	if (!cr6.gt) goto loc_832AB9DC;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r26,r11,18592
	ctx.r26.s64 = ctx.r11.s64 + 18592;
loc_832AB988:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832AB994;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aba8c
	if (cr6.lt) goto loc_832ABA8C;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832aba30
	if (!cr6.eq) goto loc_832ABA30;
	// cmpwi cr6,r3,62
	cr6.compare<int32_t>(ctx.r3.s32, 62, xer);
	// bne cr6,0x832ab9c8
	if (!cr6.eq) goto loc_832AB9C8;
	// cmpwi cr6,r30,93
	cr6.compare<int32_t>(ctx.r30.s32, 93, xer);
	// bne cr6,0x832ab9c8
	if (!cr6.eq) goto loc_832AB9C8;
	// cmpwi cr6,r28,93
	cr6.compare<int32_t>(ctx.r28.s32, 93, xer);
	// beq cr6,0x832aba40
	if (cr6.eq) goto loc_832ABA40;
loc_832AB9C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x832ab988
	if (cr6.lt) goto loc_832AB988;
loc_832AB9DC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r30,93
	cr6.compare<int32_t>(ctx.r30.s32, 93, xer);
	// bne cr6,0x832ab9f8
	if (!cr6.eq) goto loc_832AB9F8;
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r28,93
	cr6.compare<int32_t>(ctx.r28.s32, 93, xer);
	// bne cr6,0x832ab9f8
	if (!cr6.eq) goto loc_832AB9F8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_832AB9F8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8329e798
	ctx.lr = 0x832ABA08;
	sub_8329E798(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ABA1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832aba6c
	if (!cr6.lt) goto loc_832ABA6C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABA30:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABA40:
	// addic. r31,r31,-2
	xer.ca = ctx.r31.u32 > 1;
	ctx.r31.s64 = ctx.r31.s64 + -2;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt 0x832ab9f8
	if (cr0.gt) goto loc_832AB9F8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832ABA54;
	sub_8329E830(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABA6C:
	// beq cr6,0x832aba30
	if (cr6.eq) goto loc_832ABA30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832ABA7C;
	sub_8329E830(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_832ABA8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABA94"))) PPC_WEAK_FUNC(sub_832ABA94);
PPC_FUNC_IMPL(__imp__sub_832ABA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ABA98"))) PPC_WEAK_FUNC(sub_832ABA98);
PPC_FUNC_IMPL(__imp__sub_832ABA98) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8329e690
	ctx.lr = 0x832ABAC0;
	sub_8329E690(ctx, base);
	// lis r11,-32759
	ctx.r11.s64 = -2146893824;
	// ori r10,r11,8577
	ctx.r10.u64 = ctx.r11.u64 | 8577;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bne cr6,0x832abad8
	if (!cr6.eq) goto loc_832ABAD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832abb14
	goto loc_832ABB14;
loc_832ABAD8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832abb0c
	if (!cr6.eq) goto loc_832ABB0C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832abb0c
	if (cr6.eq) goto loc_832ABB0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8329e830
	ctx.lr = 0x832ABAF8;
	sub_8329E830(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x832abb14
	goto loc_832ABB14;
loc_832ABB0C:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8705
	ctx.r3.u64 = ctx.r3.u64 | 8705;
loc_832ABB14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ABB2C"))) PPC_WEAK_FUNC(sub_832ABB2C);
PPC_FUNC_IMPL(__imp__sub_832ABB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ABB30"))) PPC_WEAK_FUNC(sub_832ABB30);
PPC_FUNC_IMPL(__imp__sub_832ABB30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-24000
	ctx.r9.s64 = ctx.r10.s64 + -24000;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ABB50"))) PPC_WEAK_FUNC(sub_832ABB50);
PPC_FUNC_IMPL(__imp__sub_832ABB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abb60
	if (cr6.eq) goto loc_832ABB60;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
loc_832ABB60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ABB68"))) PPC_WEAK_FUNC(sub_832ABB68);
PPC_FUNC_IMPL(__imp__sub_832ABB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x832abb84
	if (cr6.lt) goto loc_832ABB84;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// addi r5,r11,10488
	ctx.r5.s64 = ctx.r11.s64 + 10488;
	// ori r4,r4,8710
	ctx.r4.u64 = ctx.r4.u64 | 8710;
	// b 0x8329a350
	sub_8329A350(ctx, base);
	return;
loc_832ABB84:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,47(r5)
	PPC_STORE_U8(ctx.r5.u32 + 47, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ABB90"))) PPC_WEAK_FUNC(sub_832ABB90);
PPC_FUNC_IMPL(__imp__sub_832ABB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832ABB98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832abbc4
	if (cr6.eq) goto loc_832ABBC4;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x832abbd0
	goto loc_832ABBD0;
loc_832ABBC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832996e8
	ctx.lr = 0x832ABBCC;
	sub_832996E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832ABBD0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x832abbe0
	if (cr6.lt) goto loc_832ABBE0;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
	// mullw r30,r30,r27
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32);
loc_832ABBE0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8329fcd8
	ctx.lr = 0x832ABBF4;
	sub_8329FCD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832abc14
	if (!cr6.lt) goto loc_832ABC14;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,8320
	ctx.r4.u64 = ctx.r4.u64 | 8320;
	// bl 0x8329a350
	ctx.lr = 0x832ABC0C;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832ABC14:
	// clrlwi r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stb r11,47(r28)
	PPC_STORE_U8(ctx.r28.u32 + 47, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABC28"))) PPC_WEAK_FUNC(sub_832ABC28);
PPC_FUNC_IMPL(__imp__sub_832ABC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832ABC30;
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
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x832abc6c
	if (cr6.lt) goto loc_832ABC6C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x83299738
	ctx.lr = 0x832ABC50;
	sub_83299738(ctx, base);
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,8710
	ctx.r4.u64 = ctx.r4.u64 | 8710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ABC64;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ABC6C:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x832abca8
	if (cr6.lt) goto loc_832ABCA8;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329fcd8
	ctx.lr = 0x832ABC88;
	sub_8329FCD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832abca8
	if (!cr6.lt) goto loc_832ABCA8;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,8320
	ctx.r4.u64 = ctx.r4.u64 | 8320;
	// bl 0x8329a350
	ctx.lr = 0x832ABCA0;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ABCA8:
	// clrlwi r11,r29,25
	ctx.r11.u64 = ctx.r29.u32 & 0x7F;
	// stb r11,47(r30)
	PPC_STORE_U8(ctx.r30.u32 + 47, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABCB8"))) PPC_WEAK_FUNC(sub_832ABCB8);
PPC_FUNC_IMPL(__imp__sub_832ABCB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,47(r5)
	PPC_STORE_U8(ctx.r5.u32 + 47, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ABCC4"))) PPC_WEAK_FUNC(sub_832ABCC4);
PPC_FUNC_IMPL(__imp__sub_832ABCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ABCC8"))) PPC_WEAK_FUNC(sub_832ABCC8);
PPC_FUNC_IMPL(__imp__sub_832ABCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832ABCD0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r27,20(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r28,r27,r6
	ctx.r28.u64 = ctx.r27.u64 + ctx.r6.u64;
	// bge cr6,0x832abd54
	if (!cr6.lt) goto loc_832ABD54;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, xer);
	// blt cr6,0x832abd24
	if (cr6.lt) goto loc_832ABD24;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8708
	ctx.r4.u64 = ctx.r4.u64 | 8708;
	// bl 0x8329a350
	ctx.lr = 0x832ABD18;
	sub_8329A350(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABD24:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8329fce0
	ctx.lr = 0x832ABD30;
	sub_8329FCE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832abd78
	if (!cr6.lt) goto loc_832ABD78;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,8321
	ctx.r4.u64 = ctx.r4.u64 | 8321;
	// bl 0x8329a350
	ctx.lr = 0x832ABD48;
	sub_8329A350(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABD54:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x832abd78
	if (cr6.lt) goto loc_832ABD78;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,8708
	ctx.r4.u64 = ctx.r4.u64 | 8708;
	// bl 0x8329a350
	ctx.lr = 0x832ABD6C;
	sub_8329A350(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABD78:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// lhz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832abdb4
	if (cr6.eq) goto loc_832ABDB4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x832abda0
	if (cr6.gt) goto loc_832ABDA0;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// b 0x832abdb4
	goto loc_832ABDB4;
loc_832ABDA0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_832ABDB4:
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832ABDC8;
	sub_83293EC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ABDE0"))) PPC_WEAK_FUNC(sub_832ABDE0);
PPC_FUNC_IMPL(__imp__sub_832ABDE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832ABDE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832abe18
	if (!cr6.eq) goto loc_832ABE18;
	// lbz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_832ABE18:
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832abf6c
	if (cr6.eq) goto loc_832ABF6C;
	// cmplwi cr6,r30,48
	cr6.compare<uint32_t>(ctx.r30.u32, 48, xer);
	// blt cr6,0x832abe3c
	if (cr6.lt) goto loc_832ABE3C;
	// cmplwi cr6,r30,57
	cr6.compare<uint32_t>(ctx.r30.u32, 57, xer);
	// bgt cr6,0x832abe3c
	if (cr6.gt) goto loc_832ABE3C;
	// addi r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 + 208;
	// b 0x832abe68
	goto loc_832ABE68;
loc_832ABE3C:
	// cmplwi cr6,r30,97
	cr6.compare<uint32_t>(ctx.r30.u32, 97, xer);
	// blt cr6,0x832abe54
	if (cr6.lt) goto loc_832ABE54;
	// cmplwi cr6,r30,102
	cr6.compare<uint32_t>(ctx.r30.u32, 102, xer);
	// bgt cr6,0x832abe54
	if (cr6.gt) goto loc_832ABE54;
	// addi r11,r30,169
	ctx.r11.s64 = ctx.r30.s64 + 169;
	// b 0x832abe68
	goto loc_832ABE68;
loc_832ABE54:
	// cmplwi cr6,r30,65
	cr6.compare<uint32_t>(ctx.r30.u32, 65, xer);
	// blt cr6,0x832abf48
	if (cr6.lt) goto loc_832ABF48;
	// cmplwi cr6,r30,70
	cr6.compare<uint32_t>(ctx.r30.u32, 70, xer);
	// bgt cr6,0x832abf48
	if (cr6.gt) goto loc_832ABF48;
	// addi r11,r30,201
	ctx.r11.s64 = ctx.r30.s64 + 201;
loc_832ABE68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r31,r11,4,24,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
loc_832ABE70:
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832abf78
	if (cr6.eq) goto loc_832ABF78;
	// cmplwi cr6,r3,48
	cr6.compare<uint32_t>(ctx.r3.u32, 48, xer);
	// blt cr6,0x832abe94
	if (cr6.lt) goto loc_832ABE94;
	// cmplwi cr6,r3,57
	cr6.compare<uint32_t>(ctx.r3.u32, 57, xer);
	// ble cr6,0x832abee8
	if (!cr6.gt) goto loc_832ABEE8;
loc_832ABE94:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// blt cr6,0x832abea4
	if (cr6.lt) goto loc_832ABEA4;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(ctx.r11.u32, 102, xer);
	// ble cr6,0x832abf08
	if (!cr6.gt) goto loc_832ABF08;
loc_832ABEA4:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(ctx.r11.u32, 65, xer);
	// blt cr6,0x832abeb4
	if (cr6.lt) goto loc_832ABEB4;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// ble cr6,0x832abf28
	if (!cr6.gt) goto loc_832ABF28;
loc_832ABEB4:
	// bl 0x83296b90
	ctx.lr = 0x832ABEB8;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832abe70
	if (!cr6.eq) goto loc_832ABE70;
loc_832ABEC4:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ABEDC;
	sub_8329A350(ctx, base);
loc_832ABEDC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABEE8:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// b 0x832abf58
	goto loc_832ABF58;
loc_832ABF08:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r11,r11,169
	ctx.r11.s64 = ctx.r11.s64 + 169;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// b 0x832abf58
	goto loc_832ABF58;
loc_832ABF28:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r11,r11,201
	ctx.r11.s64 = ctx.r11.s64 + 201;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, ctx.r11.u8);
	// b 0x832abf58
	goto loc_832ABF58;
loc_832ABF48:
	// bl 0x83296b90
	ctx.lr = 0x832ABF4C;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832abec4
	if (cr6.eq) goto loc_832ABEC4;
loc_832ABF58:
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x832abe18
	if (cr6.lt) goto loc_832ABE18;
	// b 0x832abf7c
	goto loc_832ABF7C;
loc_832ABF6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r11.u32);
	// b 0x832abf7c
	goto loc_832ABF7C;
loc_832ABF78:
	// stw r30,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r30.u32);
loc_832ABF7C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832abedc
	if (cr6.eq) goto loc_832ABEDC;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r29,20(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bge cr6,0x832abff8
	if (!cr6.lt) goto loc_832ABFF8;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832abfc4
	if (cr6.lt) goto loc_832ABFC4;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8708
	ctx.r4.u64 = ctx.r4.u64 | 8708;
	// bl 0x8329a350
	ctx.lr = 0x832ABFB8;
	sub_8329A350(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABFC4:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8329fce0
	ctx.lr = 0x832ABFD4;
	sub_8329FCE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ac01c
	if (!cr6.lt) goto loc_832AC01C;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,8321
	ctx.r4.u64 = ctx.r4.u64 | 8321;
	// bl 0x8329a350
	ctx.lr = 0x832ABFEC;
	sub_8329A350(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832ABFF8:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x832ac01c
	if (!cr6.gt) goto loc_832AC01C;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,8708
	ctx.r4.u64 = ctx.r4.u64 | 8708;
	// bl 0x8329a350
	ctx.lr = 0x832AC010;
	sub_8329A350(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832AC01C:
	// lbz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// lhz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac058
	if (cr6.eq) goto loc_832AC058;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x832ac044
	if (cr6.gt) goto loc_832AC044;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// b 0x832ac058
	goto loc_832AC058;
loc_832AC044:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_832AC058:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r27,28
	ctx.r4.s64 = ctx.r27.s64 + 28;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832AC068;
	sub_83293EC8(ctx, base);
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC078"))) PPC_WEAK_FUNC(sub_832AC078);
PPC_FUNC_IMPL(__imp__sub_832AC078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AC080;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r31,24(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// addi r30,r5,1
	ctx.r30.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832ac128
	if (cr6.eq) goto loc_832AC128;
loc_832AC0A4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296b90
	ctx.lr = 0x832AC0AC;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac0d8
	if (cr6.eq) goto loc_832AC0D8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x832ac124
	if (cr6.gt) goto loc_832AC124;
	// lbz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832ac0a4
	if (!cr6.eq) goto loc_832AC0A4;
	// b 0x832ac128
	goto loc_832AC128;
loc_832AC0D8:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r29,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// lbz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832ac128
	if (cr6.eq) goto loc_832AC128;
loc_832AC0F0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296b90
	ctx.lr = 0x832AC0F8;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832ac124
	if (!cr6.eq) goto loc_832AC124;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r29,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r29.u8);
	// lbzu r29,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832ac0f0
	if (!cr6.eq) goto loc_832AC0F0;
	// b 0x832ac128
	goto loc_832AC128;
loc_832AC124:
	// subf r27,r26,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r26.s64;
loc_832AC128:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// stw r31,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC144"))) PPC_WEAK_FUNC(sub_832AC144);
PPC_FUNC_IMPL(__imp__sub_832AC144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC148"))) PPC_WEAK_FUNC(sub_832AC148);
PPC_FUNC_IMPL(__imp__sub_832AC148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AC150;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac21c
	if (cr6.eq) goto loc_832AC21C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac188
	if (cr6.gt) goto loc_832AC188;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC180;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC188:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac1b0
	if (!cr6.eq) goto loc_832AC1B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ac1d4
	goto loc_832AC1D4;
loc_832AC1B0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac1c0
	if (cr6.gt) goto loc_832AC1C0;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// b 0x832ac1d4
	goto loc_832AC1D4;
loc_832AC1C0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832AC1D4:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r7,127
	ctx.r7.s64 = 127;
	// li r6,-128
	ctx.r6.s64 = -128;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832AC1F0;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ac224
	if (cr6.lt) goto loc_832AC224;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r11,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832AC21C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC224:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AC23C;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC244"))) PPC_WEAK_FUNC(sub_832AC244);
PPC_FUNC_IMPL(__imp__sub_832AC244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC248"))) PPC_WEAK_FUNC(sub_832AC248);
PPC_FUNC_IMPL(__imp__sub_832AC248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AC250;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac31c
	if (cr6.eq) goto loc_832AC31C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac288
	if (cr6.gt) goto loc_832AC288;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC280;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC288:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac2b0
	if (!cr6.eq) goto loc_832AC2B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ac2d4
	goto loc_832AC2D4;
loc_832AC2B0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac2c0
	if (cr6.gt) goto loc_832AC2C0;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// b 0x832ac2d4
	goto loc_832AC2D4;
loc_832AC2C0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832AC2D4:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832AC2F0;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ac324
	if (cr6.lt) goto loc_832AC324;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r11,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832AC31C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC324:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AC33C;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC344"))) PPC_WEAK_FUNC(sub_832AC344);
PPC_FUNC_IMPL(__imp__sub_832AC344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC348"))) PPC_WEAK_FUNC(sub_832AC348);
PPC_FUNC_IMPL(__imp__sub_832AC348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AC350;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac41c
	if (cr6.eq) goto loc_832AC41C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac388
	if (cr6.gt) goto loc_832AC388;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC380;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC388:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac3b0
	if (!cr6.eq) goto loc_832AC3B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ac3d4
	goto loc_832AC3D4;
loc_832AC3B0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac3c0
	if (cr6.gt) goto loc_832AC3C0;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// b 0x832ac3d4
	goto loc_832AC3D4;
loc_832AC3C0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832AC3D4:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// li r6,-32768
	ctx.r6.s64 = -32768;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832AC3F0;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ac424
	if (cr6.lt) goto loc_832AC424;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r28,2
	ctx.r10.s64 = ctx.r28.s64 + 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r11,r29,r28
	PPC_STORE_U16(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832AC41C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC424:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AC43C;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC444"))) PPC_WEAK_FUNC(sub_832AC444);
PPC_FUNC_IMPL(__imp__sub_832AC444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC448"))) PPC_WEAK_FUNC(sub_832AC448);
PPC_FUNC_IMPL(__imp__sub_832AC448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AC450;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac520
	if (cr6.eq) goto loc_832AC520;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac488
	if (cr6.gt) goto loc_832AC488;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC480;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC488:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac4b0
	if (!cr6.eq) goto loc_832AC4B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ac4d4
	goto loc_832AC4D4;
loc_832AC4B0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac4c0
	if (cr6.gt) goto loc_832AC4C0;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// b 0x832ac4d4
	goto loc_832AC4D4;
loc_832AC4C0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832AC4D4:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lis r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832AC4F4;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ac528
	if (cr6.lt) goto loc_832AC528;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r28,2
	ctx.r10.s64 = ctx.r28.s64 + 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r11,r29,r28
	PPC_STORE_U16(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832AC520:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC528:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AC540;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC548"))) PPC_WEAK_FUNC(sub_832AC548);
PPC_FUNC_IMPL(__imp__sub_832AC548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AC550;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac620
	if (cr6.eq) goto loc_832AC620;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac588
	if (cr6.gt) goto loc_832AC588;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC580;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC588:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac5b0
	if (!cr6.eq) goto loc_832AC5B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ac5d4
	goto loc_832AC5D4;
loc_832AC5B0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac5c0
	if (cr6.gt) goto loc_832AC5C0;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// b 0x832ac5d4
	goto loc_832AC5D4;
loc_832AC5C0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832AC5D4:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832AC5F4;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ac628
	if (cr6.lt) goto loc_832AC628;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r11,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832AC620:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC628:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AC640;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC648"))) PPC_WEAK_FUNC(sub_832AC648);
PPC_FUNC_IMPL(__imp__sub_832AC648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AC650;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac720
	if (cr6.eq) goto loc_832AC720;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac688
	if (cr6.gt) goto loc_832AC688;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC680;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC688:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac6b0
	if (!cr6.eq) goto loc_832AC6B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ac6d4
	goto loc_832AC6D4;
loc_832AC6B0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac6c0
	if (cr6.gt) goto loc_832AC6C0;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// b 0x832ac6d4
	goto loc_832AC6D4;
loc_832AC6C0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832AC6D4:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832AC6F4;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ac728
	if (cr6.lt) goto loc_832AC728;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r11,r29,r28
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832AC720:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC728:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AC740;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC748"))) PPC_WEAK_FUNC(sub_832AC748);
PPC_FUNC_IMPL(__imp__sub_832AC748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AC750;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac860
	if (cr6.eq) goto loc_832AC860;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac788
	if (cr6.gt) goto loc_832AC788;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC780;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC788:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac7b0
	if (!cr6.eq) goto loc_832AC7B0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832ac7d4
	goto loc_832AC7D4;
loc_832AC7B0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac7c0
	if (cr6.gt) goto loc_832AC7C0;
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// b 0x832ac7d4
	goto loc_832AC7D4;
loc_832AC7C0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r6,r7
	ctx.r30.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832AC7D4:
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83298928
	ctx.lr = 0x832AC7E4;
	sub_83298928(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r30,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, temp.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ac810
	if (cr6.eq) goto loc_832AC810;
	// bl 0x83296b90
	ctx.lr = 0x832AC800;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x832ac814
	if (cr6.eq) goto loc_832AC814;
loc_832AC810:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832AC814:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x832ac844
	if (!cr0.lt) goto loc_832AC844;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AC83C;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC844:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832AC860:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC868"))) PPC_WEAK_FUNC(sub_832AC868);
PPC_FUNC_IMPL(__imp__sub_832AC868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AC870;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ac94c
	if (cr6.eq) goto loc_832AC94C;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac8a8
	if (cr6.gt) goto loc_832AC8A8;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC8A0;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC8A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac8d0
	if (!cr6.eq) goto loc_832AC8D0;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x832ac8f4
	goto loc_832AC8F4;
loc_832AC8D0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac8e0
	if (cr6.gt) goto loc_832AC8E0;
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// b 0x832ac8f4
	goto loc_832AC8F4;
loc_832AC8E0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832AC8F4:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832AC910;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ac954
	if (cr6.lt) goto loc_832AC954;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x832ac92c
	if (!cr6.eq) goto loc_832AC92C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832AC92C:
	// stbx r11,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832AC94C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832AC954:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AC96C;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AC974"))) PPC_WEAK_FUNC(sub_832AC974);
PPC_FUNC_IMPL(__imp__sub_832AC974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AC978"))) PPC_WEAK_FUNC(sub_832AC978);
PPC_FUNC_IMPL(__imp__sub_832AC978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832AC980;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832aca58
	if (cr6.eq) goto loc_832ACA58;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832ac9b8
	if (cr6.gt) goto loc_832AC9B8;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832AC9B0;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832AC9B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832ac9e0
	if (!cr6.eq) goto loc_832AC9E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832aca04
	goto loc_832ACA04;
loc_832AC9E0:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832ac9f0
	if (cr6.gt) goto loc_832AC9F0;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x832aca04
	goto loc_832ACA04;
loc_832AC9F0:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_832ACA04:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329eeb8
	ctx.lr = 0x832ACA14;
	sub_8329EEB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832aca3c
	if (!cr6.lt) goto loc_832ACA3C;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ACA34;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832ACA3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_832ACA58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACA60"))) PPC_WEAK_FUNC(sub_832ACA60);
PPC_FUNC_IMPL(__imp__sub_832ACA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832ACA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832acb68
	if (cr6.eq) goto loc_832ACB68;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832acaa0
	if (cr6.gt) goto loc_832ACAA0;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832ACA98;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ACAA0:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 & 0x7FFFFFFFFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832ACAC4;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832acaec
	if (!cr6.lt) goto loc_832ACAEC;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ACAE4;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ACAEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r7,r9,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// or r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832acb14
	if (!cr6.eq) goto loc_832ACB14;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832acb38
	goto loc_832ACB38;
loc_832ACB14:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x832acb24
	if (cr6.gt) goto loc_832ACB24;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x832acb38
	goto loc_832ACB38;
loc_832ACB24:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
loc_832ACB38:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
loc_832ACB68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACB70"))) PPC_WEAK_FUNC(sub_832ACB70);
PPC_FUNC_IMPL(__imp__sub_832ACB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832ACB78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832acc70
	if (cr6.eq) goto loc_832ACC70;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832acbb0
	if (cr6.gt) goto loc_832ACBB0;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832ACBA8;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ACBB0:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329ec70
	ctx.lr = 0x832ACBCC;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832acbf4
	if (!cr6.lt) goto loc_832ACBF4;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ACBEC;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ACBF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r7,r9,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// or r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832acc1c
	if (!cr6.eq) goto loc_832ACC1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832acc40
	goto loc_832ACC40;
loc_832ACC1C:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x832acc2c
	if (cr6.gt) goto loc_832ACC2C;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x832acc40
	goto loc_832ACC40;
loc_832ACC2C:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
loc_832ACC40:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
loc_832ACC70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACC78"))) PPC_WEAK_FUNC(sub_832ACC78);
PPC_FUNC_IMPL(__imp__sub_832ACC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832ACC80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832acda0
	if (cr6.eq) goto loc_832ACDA0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x832accb8
	if (cr6.gt) goto loc_832ACCB8;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8718
	ctx.r4.u64 = ctx.r4.u64 | 8718;
	// bl 0x8329a350
	ctx.lr = 0x832ACCB0;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ACCB8:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83298928
	ctx.lr = 0x832ACCC8;
	sub_83298928(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832accf0
	if (cr6.eq) goto loc_832ACCF0;
	// bl 0x83296b90
	ctx.lr = 0x832ACCE0;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x832accf4
	if (cr6.eq) goto loc_832ACCF4;
loc_832ACCF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832ACCF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x832acd24
	if (!cr0.lt) goto loc_832ACD24;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8713
	ctx.r4.u64 = ctx.r4.u64 | 8713;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ACD1C;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ACD24:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r9,46(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r7,r9,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// or r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832acd4c
	if (!cr6.eq) goto loc_832ACD4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832acd70
	goto loc_832ACD70;
loc_832ACD4C:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x832acd5c
	if (cr6.gt) goto loc_832ACD5C;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x832acd70
	goto loc_832ACD70;
loc_832ACD5C:
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
loc_832ACD70:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
loc_832ACDA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACDA8"))) PPC_WEAK_FUNC(sub_832ACDA8);
PPC_FUNC_IMPL(__imp__sub_832ACDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832acdd8
	if (!cr6.eq) goto loc_832ACDD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832acdfc
	goto loc_832ACDFC;
loc_832ACDD8:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bgt cr6,0x832acde8
	if (cr6.gt) goto loc_832ACDE8;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// b 0x832acdfc
	goto loc_832ACDFC;
loc_832ACDE8:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subf r5,r8,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 & ctx.r5.u64;
loc_832ACDFC:
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x83294018
	sub_83294018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACE0C"))) PPC_WEAK_FUNC(sub_832ACE0C);
PPC_FUNC_IMPL(__imp__sub_832ACE0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ACE10"))) PPC_WEAK_FUNC(sub_832ACE10);
PPC_FUNC_IMPL(__imp__sub_832ACE10) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8329fcd8
	ctx.lr = 0x832ACE34;
	sub_8329FCD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ace4c
	if (!cr6.lt) goto loc_832ACE4C;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,8320
	ctx.r4.u64 = ctx.r4.u64 | 8320;
	// bl 0x8329a350
	ctx.lr = 0x832ACE4C;
	sub_8329A350(ctx, base);
loc_832ACE4C:
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

__attribute__((alias("__imp__sub_832ACE60"))) PPC_WEAK_FUNC(sub_832ACE60);
PPC_FUNC_IMPL(__imp__sub_832ACE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832ACE68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACE8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832acef4
	if (cr6.lt) goto loc_832ACEF4;
loc_832ACE98:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACEB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ACEB8;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832acef4
	if (cr6.lt) goto loc_832ACEF4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// subf r28,r31,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACEE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ace98
	if (!cr6.lt) goto loc_832ACE98;
loc_832ACEF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ACEFC"))) PPC_WEAK_FUNC(sub_832ACEFC);
PPC_FUNC_IMPL(__imp__sub_832ACEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832ACF00"))) PPC_WEAK_FUNC(sub_832ACF00);
PPC_FUNC_IMPL(__imp__sub_832ACF00) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACF2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832acf40
	if (cr6.eq) goto loc_832ACF40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832acf78
	if (cr6.lt) goto loc_832ACF78;
loc_832ACF40:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ACF58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832acf6c
	if (cr6.eq) goto loc_832ACF6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832acf78
	if (cr6.lt) goto loc_832ACF78;
loc_832ACF6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_832ACF78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832ACF90"))) PPC_WEAK_FUNC(sub_832ACF90);
PPC_FUNC_IMPL(__imp__sub_832ACF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832ACF98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x832abcc8
	ctx.lr = 0x832ACFB0;
	sub_832ABCC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832acfc4
	if (cr6.eq) goto loc_832ACFC4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832ad008
	if (cr6.lt) goto loc_832AD008;
loc_832ACFC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832ad008
	if (!cr6.gt) goto loc_832AD008;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// li r27,11
	ctx.r27.s64 = 11;
	// addi r29,r11,18848
	ctx.r29.s64 = ctx.r11.s64 + 18848;
loc_832ACFDC:
	// lbzu r3,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x83296b90
	ctx.lr = 0x832ACFE8;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832ad000
	if (!cr6.eq) goto loc_832AD000;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stb r27,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r27.u8);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_832AD000:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x832acfdc
	if (cr6.gt) goto loc_832ACFDC;
loc_832AD008:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD014"))) PPC_WEAK_FUNC(sub_832AD014);
PPC_FUNC_IMPL(__imp__sub_832AD014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD018"))) PPC_WEAK_FUNC(sub_832AD018);
PPC_FUNC_IMPL(__imp__sub_832AD018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832AD020;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832ad054
	if (!cr6.eq) goto loc_832AD054;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x832ad06c
	goto loc_832AD06C;
loc_832AD054:
	// cmplwi cr6,r29,52
	cr6.compare<uint32_t>(ctx.r29.u32, 52, xer);
	// blt cr6,0x832ad064
	if (cr6.lt) goto loc_832AD064;
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x832ad06c
	goto loc_832AD06C;
loc_832AD064:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83299708
	ctx.lr = 0x832AD06C;
	sub_83299708(ctx, base);
loc_832AD06C:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,18864
	ctx.r10.s64 = ctx.r10.s64 + 18864;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832AD0C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD0C8"))) PPC_WEAK_FUNC(sub_832AD0C8);
PPC_FUNC_IMPL(__imp__sub_832AD0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832AD0D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r4,44
	ctx.r25.s64 = ctx.r4.s64 + 44;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x832ab3d8
	ctx.lr = 0x832AD104;
	sub_832AB3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832ad170
	if (!cr6.gt) goto loc_832AD170;
loc_832AD110:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832AD130;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832abb50
	ctx.lr = 0x832AD138;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad1d8
	if (cr6.lt) goto loc_832AD1D8;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(ctx.r31.s32, 64, xer);
	// blt cr6,0x832ad188
	if (cr6.lt) goto loc_832AD188;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832ab3d8
	ctx.lr = 0x832AD160;
	sub_832AB3D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832ad110
	if (cr6.gt) goto loc_832AD110;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_832AD170:
	// bne cr6,0x832ad1c4
	if (!cr6.eq) goto loc_832AD1C4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x832ad188
	if (!cr6.eq) goto loc_832AD188;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AD188:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832AD1A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832ad1b4
	if (cr6.eq) goto loc_832AD1B4;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832ad1b8
	if (cr6.lt) goto loc_832AD1B8;
loc_832AD1B4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832AD1B8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AD1C4:
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AD1D8;
	sub_8329A350(ctx, base);
loc_832AD1D8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD1E0"))) PPC_WEAK_FUNC(sub_832AD1E0);
PPC_FUNC_IMPL(__imp__sub_832AD1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832AD1E8;
	__savegprlr_20(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x832ad0c8
	ctx.lr = 0x832AD210;
	sub_832AD0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832ad3d8
	if (!cr6.gt) goto loc_832AD3D8;
	// addi r23,r31,44
	ctx.r23.s64 = ctx.r31.s64 + 44;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832ab160
	ctx.lr = 0x832AD224;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad3c0
	if (cr6.lt) goto loc_832AD3C0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,9888
	ctx.r4.s64 = ctx.r11.s64 + 9888;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832AD240;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832ad260
	if (cr6.gt) goto loc_832AD260;
	// beq cr6,0x832ad3b8
	if (cr6.eq) goto loc_832AD3B8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AD258;
	sub_8329A350(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832AD260:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832ab160
	ctx.lr = 0x832AD268;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad3c0
	if (cr6.lt) goto loc_832AD3C0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832ab0b0
	ctx.lr = 0x832AD278;
	sub_832AB0B0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ad298
	if (!cr6.lt) goto loc_832AD298;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AD290;
	sub_8329A350(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832AD298:
	// cmpwi cr6,r21,34
	cr6.compare<int32_t>(ctx.r21.s32, 34, xer);
	// beq cr6,0x832ad2b0
	if (cr6.eq) goto loc_832AD2B0;
	// cmpwi cr6,r21,39
	cr6.compare<int32_t>(ctx.r21.s32, 39, xer);
	// bne cr6,0x832ad3b8
	if (!cr6.eq) goto loc_832AD3B8;
	// li r11,48
	ctx.r11.s64 = 48;
	// b 0x832ad2b4
	goto loc_832AD2B4;
loc_832AD2B0:
	// li r11,80
	ctx.r11.s64 = 80;
loc_832AD2B4:
	// clrlwi r27,r11,24
	ctx.r27.u64 = ctx.r11.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x832ab7b8
	ctx.lr = 0x832AD2D8;
	sub_832AB7B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad35c
	if (cr6.lt) goto loc_832AD35C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_832AD2E8:
	// bgt cr6,0x832ad2f4
	if (cr6.gt) goto loc_832AD2F4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x832ad32c
	if (!cr6.eq) goto loc_832AD32C;
loc_832AD2F4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stbx r26,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832AD31C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832abb50
	ctx.lr = 0x832AD324;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad3d8
	if (cr6.lt) goto loc_832AD3D8;
loc_832AD32C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x832ad374
	if (cr6.eq) goto loc_832AD374;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x832ab7b8
	ctx.lr = 0x832AD350;
	sub_832AB7B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ad2e8
	if (!cr6.lt) goto loc_832AD2E8;
loc_832AD35C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AD36C;
	sub_8329A350(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832AD374:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mtctr r20
	ctr.u64 = ctx.r20.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832AD38C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832ad3a0
	if (cr6.eq) goto loc_832AD3A0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad3d8
	if (cr6.lt) goto loc_832AD3D8;
loc_832AD3A0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x832ab0b0
	ctx.lr = 0x832AD3A8;
	sub_832AB0B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad3c0
	if (cr6.lt) goto loc_832AD3C0;
	// cmpw cr6,r3,r21
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r21.s32, xer);
	// beq cr6,0x832ad3d4
	if (cr6.eq) goto loc_832AD3D4;
loc_832AD3B8:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8706
	ctx.r3.u64 = ctx.r3.u64 | 8706;
loc_832AD3C0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AD3CC;
	sub_8329A350(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832AD3D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_832AD3D8:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD3E0"))) PPC_WEAK_FUNC(sub_832AD3E0);
PPC_FUNC_IMPL(__imp__sub_832AD3E0) {
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
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x832ad41c
	if (!cr6.eq) goto loc_832AD41C;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// bne cr6,0x832ad41c
	if (!cr6.eq) goto loc_832AD41C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,19996
	ctx.r4.s64 = ctx.r11.s64 + 19996;
	// bl 0x83293fb0
	ctx.lr = 0x832AD414;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832ad42c
	if (cr6.eq) goto loc_832AD42C;
loc_832AD41C:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,8706
	ctx.r4.u64 = ctx.r4.u64 | 8706;
	// bl 0x8329a350
	ctx.lr = 0x832AD42C;
	sub_8329A350(ctx, base);
loc_832AD42C:
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

__attribute__((alias("__imp__sub_832AD440"))) PPC_WEAK_FUNC(sub_832AD440);
PPC_FUNC_IMPL(__imp__sub_832AD440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8706
	ctx.r4.u64 = ctx.r4.u64 | 8706;
	// b 0x8329a350
	sub_8329A350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD454"))) PPC_WEAK_FUNC(sub_832AD454);
PPC_FUNC_IMPL(__imp__sub_832AD454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AD458"))) PPC_WEAK_FUNC(sub_832AD458);
PPC_FUNC_IMPL(__imp__sub_832AD458) {
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
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x832ad494
	if (!cr6.eq) goto loc_832AD494;
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// bne cr6,0x832ad494
	if (!cr6.eq) goto loc_832AD494;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,19976
	ctx.r4.s64 = ctx.r11.s64 + 19976;
	// bl 0x83293fb0
	ctx.lr = 0x832AD48C;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832ad4a4
	if (cr6.eq) goto loc_832AD4A4;
loc_832AD494:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,8706
	ctx.r4.u64 = ctx.r4.u64 | 8706;
	// bl 0x8329a350
	ctx.lr = 0x832AD4A4;
	sub_8329A350(ctx, base);
loc_832AD4A4:
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

__attribute__((alias("__imp__sub_832AD4B8"))) PPC_WEAK_FUNC(sub_832AD4B8);
PPC_FUNC_IMPL(__imp__sub_832AD4B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AD4C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bgt cr6,0x832ad528
	if (cr6.gt) goto loc_832AD528;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// bgt cr6,0x832ad528
	if (cr6.gt) goto loc_832AD528;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stbx r11,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u8);
	// bl 0x8329efe8
	ctx.lr = 0x832AD4F0;
	sub_8329EFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832ad518
	if (!cr6.eq) goto loc_832AD518;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,8704
	ctx.r4.u64 = ctx.r4.u64 | 8704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AD510;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AD518:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832aaff8
	ctx.lr = 0x832AD520;
	sub_832AAFF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AD528:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8706
	ctx.r4.u64 = ctx.r4.u64 | 8706;
	// bl 0x8329a350
	ctx.lr = 0x832AD538;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD540"))) PPC_WEAK_FUNC(sub_832AD540);
PPC_FUNC_IMPL(__imp__sub_832AD540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AD548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,44
	ctx.r30.s64 = ctx.r4.s64 + 44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,12048
	ctx.r4.s64 = ctx.r11.s64 + 12048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832AD56C;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad5dc
	if (cr6.lt) goto loc_832AD5DC;
	// bne cr6,0x832ad584
	if (!cr6.eq) goto loc_832AD584;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AD584:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ab160
	ctx.lr = 0x832AD58C;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad5dc
	if (cr6.lt) goto loc_832AD5DC;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r7,r7,-11200
	ctx.r7.s64 = ctx.r7.s64 + -11200;
	// addi r6,r6,11696
	ctx.r6.s64 = ctx.r6.s64 + 11696;
	// addi r5,r5,-11296
	ctx.r5.s64 = ctx.r5.s64 + -11296;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ad1e0
	ctx.lr = 0x832AD5C8;
	sub_832AD1E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832ad5f0
	if (cr6.gt) goto loc_832AD5F0;
	// bne cr6,0x832ad5e8
	if (!cr6.eq) goto loc_832AD5E8;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8706
	ctx.r3.u64 = ctx.r3.u64 | 8706;
loc_832AD5DC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AD5E8;
	sub_8329A350(ctx, base);
loc_832AD5E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AD5F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ab160
	ctx.lr = 0x832AD5F8;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad5dc
	if (cr6.lt) goto loc_832AD5DC;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r7,-31957
	ctx.r7.s64 = -2094333952;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r5,-31957
	ctx.r5.s64 = -2094333952;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r7,r7,-11080
	ctx.r7.s64 = ctx.r7.s64 + -11080;
	// addi r6,r6,11696
	ctx.r6.s64 = ctx.r6.s64 + 11696;
	// addi r5,r5,-11176
	ctx.r5.s64 = ctx.r5.s64 + -11176;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ad1e0
	ctx.lr = 0x832AD634;
	sub_832AD1E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad5e8
	if (cr6.lt) goto loc_832AD5E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ab160
	ctx.lr = 0x832AD644;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad5dc
	if (cr6.lt) goto loc_832AD5DC;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r7,r7,11696
	ctx.r7.s64 = ctx.r7.s64 + 11696;
	// addi r6,r6,11696
	ctx.r6.s64 = ctx.r6.s64 + 11696;
	// addi r5,r5,11696
	ctx.r5.s64 = ctx.r5.s64 + 11696;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ad1e0
	ctx.lr = 0x832AD680;
	sub_832AD1E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad5e8
	if (cr6.lt) goto loc_832AD5E8;
loc_832AD688:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x832ad6e4
	if (cr6.eq) goto loc_832AD6E4;
	// bl 0x832ab160
	ctx.lr = 0x832AD698;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad5dc
	if (cr6.lt) goto loc_832AD5DC;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r7,r7,11696
	ctx.r7.s64 = ctx.r7.s64 + 11696;
	// addi r6,r6,11696
	ctx.r6.s64 = ctx.r6.s64 + 11696;
	// addi r5,r5,11696
	ctx.r5.s64 = ctx.r5.s64 + 11696;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ad1e0
	ctx.lr = 0x832AD6D4;
	sub_832AD1E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ad688
	if (!cr6.lt) goto loc_832AD688;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AD6E4:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,29624
	ctx.r4.s64 = ctx.r11.s64 + 29624;
	// bl 0x832ab0c8
	ctx.lr = 0x832AD6F4;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad5dc
	if (cr6.lt) goto loc_832AD5DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD708"))) PPC_WEAK_FUNC(sub_832AD708);
PPC_FUNC_IMPL(__imp__sub_832AD708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832AD710;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r4,44
	ctx.r31.s64 = ctx.r4.s64 + 44;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x832ab160
	ctx.lr = 0x832AD728;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad7a4
	if (cr6.lt) goto loc_832AD7A4;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r10,-27356
	ctx.r30.s64 = ctx.r10.s64 + -27356;
	// addi r29,r11,-27364
	ctx.r29.s64 = ctx.r11.s64 + -27364;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_832AD744:
	// bgt cr6,0x832ad794
	if (cr6.gt) goto loc_832AD794;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832AD758;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad7a4
	if (cr6.lt) goto loc_832AD7A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x832ad770
	if (!cr6.gt) goto loc_832AD770;
	// bl 0x832ab240
	ctx.lr = 0x832AD76C;
	sub_832AB240(ctx, base);
	// b 0x832ad78c
	goto loc_832AD78C;
loc_832AD770:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x832ab0c8
	ctx.lr = 0x832AD77C;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832ad7a4
	if (!cr6.gt) goto loc_832AD7A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab308
	ctx.lr = 0x832AD78C;
	sub_832AB308(ctx, base);
loc_832AD78C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad7c4
	if (cr6.lt) goto loc_832AD7C4;
loc_832AD794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab160
	ctx.lr = 0x832AD79C;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ad744
	if (!cr6.lt) goto loc_832AD744;
loc_832AD7A4:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ad7bc
	if (cr6.eq) goto loc_832AD7BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aba98
	ctx.lr = 0x832AD7BC;
	sub_832ABA98(ctx, base);
loc_832AD7BC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ad7d0
	if (!cr6.lt) goto loc_832AD7D0;
loc_832AD7C4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AD7D0;
	sub_8329A350(ctx, base);
loc_832AD7D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD7D8"))) PPC_WEAK_FUNC(sub_832AD7D8);
PPC_FUNC_IMPL(__imp__sub_832AD7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AD7E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,44
	ctx.r31.s64 = ctx.r3.s64 + 44;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-27352
	ctx.r4.s64 = ctx.r11.s64 + -27352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832AD7FC;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832ad80c
	if (!cr6.eq) goto loc_832AD80C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AD80C:
	// blt cr6,0x832ad8e4
	if (cr6.lt) goto loc_832AD8E4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r11,-27364
	ctx.r30.s64 = ctx.r11.s64 + -27364;
loc_832AD81C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832AD82C;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad8e4
	if (cr6.lt) goto loc_832AD8E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x832ad850
	if (!cr6.gt) goto loc_832AD850;
	// bl 0x832ab240
	ctx.lr = 0x832AD840;
	sub_832AB240(ctx, base);
loc_832AD840:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ad81c
	if (!cr6.lt) goto loc_832AD81C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832AD850:
	// bl 0x832ab0b0
	ctx.lr = 0x832AD854;
	sub_832AB0B0(ctx, base);
	// cmpwi cr6,r3,60
	cr6.compare<int32_t>(ctx.r3.s32, 60, xer);
	// bgt cr6,0x832ad8d0
	if (cr6.gt) goto loc_832AD8D0;
	// beq cr6,0x832ad8c8
	if (cr6.eq) goto loc_832AD8C8;
	// cmpwi cr6,r3,34
	cr6.compare<int32_t>(ctx.r3.s32, 34, xer);
	// beq cr6,0x832ad89c
	if (cr6.eq) goto loc_832AD89C;
	// cmpwi cr6,r3,39
	cr6.compare<int32_t>(ctx.r3.s32, 39, xer);
	// bne cr6,0x832ad840
	if (!cr6.eq) goto loc_832AD840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab0b0
	ctx.lr = 0x832AD878;
	sub_832AB0B0(ctx, base);
	// cmpwi cr6,r3,39
	cr6.compare<int32_t>(ctx.r3.s32, 39, xer);
	// beq cr6,0x832ad81c
	if (cr6.eq) goto loc_832AD81C;
loc_832AD880:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad8e4
	if (cr6.lt) goto loc_832AD8E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab0b0
	ctx.lr = 0x832AD890;
	sub_832AB0B0(ctx, base);
	// cmpwi cr6,r3,39
	cr6.compare<int32_t>(ctx.r3.s32, 39, xer);
	// bne cr6,0x832ad880
	if (!cr6.eq) goto loc_832AD880;
	// b 0x832ad81c
	goto loc_832AD81C;
loc_832AD89C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab0b0
	ctx.lr = 0x832AD8A4;
	sub_832AB0B0(ctx, base);
	// cmpwi cr6,r3,34
	cr6.compare<int32_t>(ctx.r3.s32, 34, xer);
	// beq cr6,0x832ad81c
	if (cr6.eq) goto loc_832AD81C;
loc_832AD8AC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ad8e4
	if (cr6.lt) goto loc_832AD8E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ab0b0
	ctx.lr = 0x832AD8BC;
	sub_832AB0B0(ctx, base);
	// cmpwi cr6,r3,34
	cr6.compare<int32_t>(ctx.r3.s32, 34, xer);
	// bne cr6,0x832ad8ac
	if (!cr6.eq) goto loc_832AD8AC;
	// b 0x832ad81c
	goto loc_832AD81C;
loc_832AD8C8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x832ad81c
	goto loc_832AD81C;
loc_832AD8D0:
	// cmpwi cr6,r3,62
	cr6.compare<int32_t>(ctx.r3.s32, 62, xer);
	// bne cr6,0x832ad840
	if (!cr6.eq) goto loc_832AD840;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x832ad81c
	if (!cr0.eq) goto loc_832AD81C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_832AD8E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AD8EC"))) PPC_WEAK_FUNC(sub_832AD8EC);
PPC_FUNC_IMPL(__imp__sub_832AD8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AD8F0"))) PPC_WEAK_FUNC(sub_832AD8F0);
PPC_FUNC_IMPL(__imp__sub_832AD8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x832AD8F8;
	__savegprlr_16(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r22,r4,44
	ctx.r22.s64 = ctx.r4.s64 + 44;
	// addi r16,r11,9828
	ctx.r16.s64 = ctx.r11.s64 + 9828;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832AD934;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r20,r7,-27324
	ctx.r20.s64 = ctx.r7.s64 + -27324;
	// addi r19,r8,-27336
	ctx.r19.s64 = ctx.r8.s64 + -27336;
	// addi r18,r9,-2392
	ctx.r18.s64 = ctx.r9.s64 + -2392;
	// addi r21,r10,9820
	ctx.r21.s64 = ctx.r10.s64 + 9820;
	// addi r17,r11,-27340
	ctx.r17.s64 = ctx.r11.s64 + -27340;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_832AD968:
	// bne cr6,0x832ad9fc
	if (!cr6.eq) goto loc_832AD9FC;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x832ade38
	if (cr6.lt) goto loc_832ADE38;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_832AD978:
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab7b8
	ctx.lr = 0x832AD98C;
	sub_832AB7B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade78
	if (cr6.lt) goto loc_832ADE78;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(ctx.r26.s32, 2, xer);
	// beq cr6,0x832addd4
	if (cr6.eq) goto loc_832ADDD4;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x832ad9b0
	if (cr6.eq) goto loc_832AD9B0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832ad9ec
	if (!cr6.gt) goto loc_832AD9EC;
loc_832AD9B0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stbx r23,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r23.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AD9D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832AD9E0;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
loc_832AD9EC:
	// beq cr6,0x832adda0
	if (cr6.eq) goto loc_832ADDA0;
	// add r25,r29,r25
	ctx.r25.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// b 0x832ad978
	goto loc_832AD978;
loc_832AD9FC:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ad0c8
	ctx.lr = 0x832ADA18;
	sub_832AD0C8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade00
	if (cr6.lt) goto loc_832ADE00;
	// ble cr6,0x832adc08
	if (!cr6.gt) goto loc_832ADC08;
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// bne cr6,0x832ada5c
	if (!cr6.eq) goto loc_832ADA5C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ADA48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADA50;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_832ADA5C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab160
	ctx.lr = 0x832ADA64;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,64
	cr6.compare<int32_t>(ctx.r24.s32, 64, xer);
	// bge cr6,0x832ade0c
	if (!cr6.lt) goto loc_832ADE0C;
loc_832ADA78:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832ad1e0
	ctx.lr = 0x832ADA9C;
	sub_832AD1E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// beq cr6,0x832adacc
	if (cr6.eq) goto loc_832ADACC;
	// bl 0x832ab160
	ctx.lr = 0x832ADAB0;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ada78
	if (!cr6.lt) goto loc_832ADA78;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ADAC4;
	sub_8329A350(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832ADACC:
	// bl 0x832ab160
	ctx.lr = 0x832ADAD0;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832ADAE8;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
	// ble cr6,0x832adbbc
	if (!cr6.gt) goto loc_832ADBBC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ADB10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADB18;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ADB44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADB4C;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ADB6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADB74;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ADB9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADBA4;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt 0x832ade28
	if (cr0.lt) goto loc_832ADE28;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x832addd4
	goto loc_832ADDD4;
loc_832ADBBC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832ADBCC;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832ade34
	if (!cr6.gt) goto loc_832ADE34;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ADBF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADBF8;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x832addd4
	goto loc_832ADDD4;
loc_832ADC08:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832ADC18;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
	// ble cr6,0x832add00
	if (!cr6.gt) goto loc_832ADD00;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x832ade38
	if (cr6.lt) goto loc_832ADE38;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// beq cr6,0x832adc40
	if (cr6.eq) goto loc_832ADC40;
	// cmpwi cr6,r26,3
	cr6.compare<int32_t>(ctx.r26.s32, 3, xer);
	// beq cr6,0x832adc78
	if (cr6.eq) goto loc_832ADC78;
	// b 0x832adca4
	goto loc_832ADCA4;
loc_832ADC40:
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ADC64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADC6C;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_832ADC78:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832ADC90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADC98;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_832ADCA4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ad0c8
	ctx.lr = 0x832ADCC0;
	sub_832AD0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832ade54
	if (!cr6.gt) goto loc_832ADE54;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab160
	ctx.lr = 0x832ADCD0;
	sub_832AB160(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832ADCE8;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832ade60
	if (!cr6.gt) goto loc_832ADE60;
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt 0x832ade28
	if (cr0.lt) goto loc_832ADE28;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x832addd4
	goto loc_832ADDD4;
loc_832ADD00:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// blt cr6,0x832ade38
	if (cr6.lt) goto loc_832ADE38;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832ADD18;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
	// ble cr6,0x832adda8
	if (!cr6.gt) goto loc_832ADDA8;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_832ADD28:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab948
	ctx.lr = 0x832ADD38;
	sub_832AB948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade78
	if (cr6.lt) goto loc_832ADE78;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x832add54
	if (cr6.eq) goto loc_832ADD54;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832add90
	if (!cr6.gt) goto loc_832ADD90;
loc_832ADD54:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stbx r23,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r23.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832ADD7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832abb50
	ctx.lr = 0x832ADD84;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade4c
	if (cr6.lt) goto loc_832ADE4C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
loc_832ADD90:
	// beq cr6,0x832adda0
	if (cr6.eq) goto loc_832ADDA0;
	// add r25,r29,r25
	ctx.r25.u64 = ctx.r29.u64 + ctx.r25.u64;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// b 0x832add28
	goto loc_832ADD28;
loc_832ADDA0:
	// li r26,3
	ctx.r26.s64 = 3;
	// b 0x832addd4
	goto loc_832ADDD4;
loc_832ADDA8:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832ADDB8;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
	// ble cr6,0x832ade38
	if (!cr6.gt) goto loc_832ADE38;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab240
	ctx.lr = 0x832ADDCC;
	sub_832AB240(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ade40
	if (cr6.lt) goto loc_832ADE40;
loc_832ADDD4:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832ab0c8
	ctx.lr = 0x832ADDE4;
	sub_832AB0C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ad968
	if (!cr6.lt) goto loc_832AD968;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ADDF8;
	sub_8329A350(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832ADE00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832ADE0C:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8709
	ctx.r3.u64 = ctx.r3.u64 | 8709;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ADE20;
	sub_8329A350(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832ADE28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832ADE34:
	// bne cr6,0x832ade40
	if (!cr6.eq) goto loc_832ADE40;
loc_832ADE38:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8706
	ctx.r3.u64 = ctx.r3.u64 | 8706;
loc_832ADE40:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ADE4C;
	sub_8329A350(ctx, base);
loc_832ADE4C:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832ADE54:
	// beq cr6,0x832ade38
	if (cr6.eq) goto loc_832ADE38;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832ADE60:
	// beq cr6,0x832ade38
	if (cr6.eq) goto loc_832ADE38;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ADE70;
	sub_8329A350(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_832ADE78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x832ADE88;
	sub_8329A350(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADE90"))) PPC_WEAK_FUNC(sub_832ADE90);
PPC_FUNC_IMPL(__imp__sub_832ADE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832ADE98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-27320
	ctx.r4.s64 = ctx.r11.s64 + -27320;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x832ab0c8
	ctx.lr = 0x832ADEBC;
	sub_832AB0C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge cr6,0x832aded8
	if (!cr6.lt) goto loc_832ADED8;
	// bl 0x8329a350
	ctx.lr = 0x832ADED0;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832ADED8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832ad540
	ctx.lr = 0x832ADEE0;
	sub_832AD540(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832adf70
	if (cr6.lt) goto loc_832ADF70;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ad708
	ctx.lr = 0x832ADEF8;
	sub_832AD708(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832adf70
	if (cr6.lt) goto loc_832ADF70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ad7d8
	ctx.lr = 0x832ADF08;
	sub_832AD7D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832adf40
	if (cr6.eq) goto loc_832ADF40;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
loc_832ADF14:
	// blt cr6,0x832adf70
	if (cr6.lt) goto loc_832ADF70;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ad708
	ctx.lr = 0x832ADF28;
	sub_832AD708(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832adf70
	if (cr6.lt) goto loc_832ADF70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ad7d8
	ctx.lr = 0x832ADF38;
	sub_832AD7D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832adf14
	if (!cr6.eq) goto loc_832ADF14;
loc_832ADF40:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ad8f0
	ctx.lr = 0x832ADF50;
	sub_832AD8F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832adf70
	if (cr6.lt) goto loc_832ADF70;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ad708
	ctx.lr = 0x832ADF68;
	sub_832AD708(ctx, base);
	// srawi r11,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_832ADF70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832ADF78"))) PPC_WEAK_FUNC(sub_832ADF78);
PPC_FUNC_IMPL(__imp__sub_832ADF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832ADF80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x832adfac
	if (!cr6.eq) goto loc_832ADFAC;
loc_832ADFA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832ADFAC:
	// rlwinm r11,r24,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 26) & 0x1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832adfd0
	if (!cr6.eq) goto loc_832ADFD0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832996e8
	ctx.lr = 0x832ADFC4;
	sub_832996E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ae084
	if (!cr6.lt) goto loc_832AE084;
loc_832ADFD0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x832ADFD8;
	sub_8329E9C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832adff0
	if (!cr6.lt) goto loc_832ADFF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ae068
	goto loc_832AE068;
loc_832ADFF0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x832ADFF8;
	sub_8329E9C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ae010
	if (!cr6.lt) goto loc_832AE010;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ae068
	goto loc_832AE068;
loc_832AE010:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x832AE018;
	sub_8329E9C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ae030
	if (!cr6.lt) goto loc_832AE030;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ae068
	goto loc_832AE068;
loc_832AE030:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x832AE038;
	sub_8329E9C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ae04c
	if (!cr6.lt) goto loc_832AE04C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x832ae068
	goto loc_832AE068;
loc_832AE04C:
	// rlwinm r11,r28,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 8) & 0xFFFFFF00;
	// li r4,0
	ctx.r4.s64 = 0;
	// or r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 | ctx.r29.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r31,r7,r3
	ctx.r31.u64 = ctx.r7.u64 | ctx.r3.u64;
loc_832AE068:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x832ae080
	if (!cr6.lt) goto loc_832AE080;
loc_832AE070:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AE078;
	sub_8329A350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AE080:
	// li r29,4
	ctx.r29.s64 = 4;
loc_832AE084:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x832ae0b4
	if (cr6.lt) goto loc_832AE0B4;
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,8644
	ctx.r4.u64 = ctx.r4.u64 | 8644;
	// bl 0x8329a350
	ctx.lr = 0x832AE0AC;
	sub_8329A350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AE0B4:
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// and r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 & ctx.r27.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r4,r7,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r7.s64;
	// bl 0x8329fcd8
	ctx.lr = 0x832AE0EC;
	sub_8329FCD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ae108
	if (!cr6.lt) goto loc_832AE108;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832adfa0
	if (cr6.eq) goto loc_832ADFA0;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AE108:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x832ae1ec
	if (cr6.eq) goto loc_832AE1EC;
	// lbz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// lhz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832ae130
	if (!cr6.eq) goto loc_832AE130;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832ae154
	goto loc_832AE154;
loc_832AE130:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x832ae140
	if (cr6.gt) goto loc_832AE140;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// b 0x832ae154
	goto loc_832AE154;
loc_832AE140:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_832AE154:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329e900
	ctx.lr = 0x832AE168;
	sub_8329E900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae070
	if (cr6.lt) goto loc_832AE070;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// bl 0x83572958
	ctx.lr = 0x832AE180;
	sub_83572958(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x832ae1dc
	if (cr6.eq) goto loc_832AE1DC;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x832ae1c0
	if (cr6.eq) goto loc_832AE1C0;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bne cr6,0x832ae1ec
	if (!cr6.eq) goto loc_832AE1EC;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
loc_832AE19C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addic. r31,r31,-8
	xer.ca = ctx.r31.u32 > 7;
	ctx.r31.s64 = ctx.r31.s64 + -8;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bgt 0x832ae19c
	if (cr0.gt) goto loc_832AE19C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AE1C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832AE1C4:
	// addic. r31,r31,-4
	xer.ca = ctx.r31.u32 > 3;
	ctx.r31.s64 = ctx.r31.s64 + -4;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bgt 0x832ae1c4
	if (cr0.gt) goto loc_832AE1C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AE1DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832AE1E0:
	// addic. r31,r31,-2
	xer.ca = ctx.r31.u32 > 1;
	ctx.r31.s64 = ctx.r31.s64 + -2;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bgt 0x832ae1e0
	if (cr0.gt) goto loc_832AE1E0;
loc_832AE1EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE1F8"))) PPC_WEAK_FUNC(sub_832AE1F8);
PPC_FUNC_IMPL(__imp__sub_832AE1F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832AE200;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x832ae228
	if (!cr6.eq) goto loc_832AE228;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AE228:
	// rlwinm r11,r30,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ae23c
	if (cr6.eq) goto loc_832AE23C;
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x832ae248
	goto loc_832AE248;
loc_832AE23C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832996e8
	ctx.lr = 0x832AE244;
	sub_832996E8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832AE248:
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bge cr6,0x832ae284
	if (!cr6.lt) goto loc_832AE284;
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8329c3a0
	ctx.lr = 0x832AE274;
	sub_8329C3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
loc_832AE284:
	// bne cr6,0x832ae294
	if (!cr6.eq) goto loc_832AE294;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AE294:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// lhz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r25,r10,r4
	ctx.r25.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832ae2c0
	if (!cr6.eq) goto loc_832AE2C0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x832ae2e4
	goto loc_832AE2E4;
loc_832AE2C0:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x832ae2d0
	if (cr6.gt) goto loc_832AE2D0;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x832ae2e4
	goto loc_832AE2E4;
loc_832AE2D0:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_832AE2E4:
	// neg r11,r28
	ctx.r11.s64 = -ctx.r28.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r27,r11,30
	ctx.r27.u64 = ctx.r11.u32 & 0x3;
	// bl 0x83572958
	ctx.lr = 0x832AE2F4;
	sub_83572958(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x832ae3a0
	if (cr6.eq) goto loc_832AE3A0;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x832ae378
	if (cr6.eq) goto loc_832AE378;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x832ae338
	if (cr6.eq) goto loc_832AE338;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329ce00
	ctx.lr = 0x832AE31C;
	sub_8329CE00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ae3f4
	if (!cr6.lt) goto loc_832AE3F4;
loc_832AE328:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AE330;
	sub_8329A350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832AE338:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8329c3a0
	ctx.lr = 0x832AE344;
	sub_8329C3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8329c3a0
	ctx.lr = 0x832AE35C;
	sub_8329C3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// addic. r28,r28,-8
	xer.ca = ctx.r28.u32 > 7;
	ctx.r28.s64 = ctx.r28.s64 + -8;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bgt 0x832ae338
	if (cr0.gt) goto loc_832AE338;
	// b 0x832ae3f4
	goto loc_832AE3F4;
loc_832AE378:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
loc_832AE37C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x8329c3a0
	ctx.lr = 0x832AE388;
	sub_8329C3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// addic. r28,r28,-4
	xer.ca = ctx.r28.u32 > 3;
	ctx.r28.s64 = ctx.r28.s64 + -4;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bgt 0x832ae37c
	if (cr0.gt) goto loc_832AE37C;
	// b 0x832ae3f4
	goto loc_832AE3F4;
loc_832AE3A0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_832AE3A4:
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r4,r31,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// bl 0x8329ced8
	ctx.lr = 0x832AE3B4;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ae3c4
	if (!cr6.lt) goto loc_832AE3C4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x832ae3e0
	goto loc_832AE3E0;
loc_832AE3C4:
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329ced8
	ctx.lr = 0x832AE3D0;
	sub_8329CED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae3e0
	if (cr6.lt) goto loc_832AE3E0;
	// li r4,2
	ctx.r4.s64 = 2;
loc_832AE3E0:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// addic. r28,r28,-2
	xer.ca = ctx.r28.u32 > 1;
	ctx.r28.s64 = ctx.r28.s64 + -2;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bgt 0x832ae3a4
	if (cr0.gt) goto loc_832AE3A4;
loc_832AE3F4:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(ctx.r27.s32, 4, xer);
	// ble cr6,0x832ae404
	if (!cr6.gt) goto loc_832AE404;
	// li r30,4
	ctx.r30.s64 = 4;
loc_832AE404:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r31,24
	ctx.r31.s64 = 24;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x832ae4a0
	if (cr6.gt) goto loc_832AE4A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ae484
	if (cr6.eq) goto loc_832AE484;
	// bdz 0x832ae464
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832AE464;
	// bdz 0x832ae444
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832AE444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329ced8
	ctx.lr = 0x832AE434;
	sub_8329CED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// li r31,16
	ctx.r31.s64 = 16;
loc_832AE444:
	// srw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r31.u8 & 0x3F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x832AE454;
	sub_8329CED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
loc_832AE464:
	// srw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r31.u8 & 0x3F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x832AE474;
	sub_8329CED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
loc_832AE484:
	// srw r11,r26,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r31.u8 & 0x3F));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x832AE494;
	sub_8329CED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
loc_832AE4A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x832ae328
	if (cr6.lt) goto loc_832AE328;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE4B8"))) PPC_WEAK_FUNC(sub_832AE4B8);
PPC_FUNC_IMPL(__imp__sub_832AE4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x832AE4C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832ae4e8
	if (!cr6.eq) goto loc_832AE4E8;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r21,r11,11696
	ctx.r21.s64 = ctx.r11.s64 + 11696;
	// b 0x832ae4ec
	goto loc_832AE4EC;
loc_832AE4E8:
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
loc_832AE4EC:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832ae500
	if (!cr6.eq) goto loc_832AE500;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r24,r11,11696
	ctx.r24.s64 = ctx.r11.s64 + 11696;
	// b 0x832ae504
	goto loc_832AE504;
loc_832AE500:
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
loc_832AE504:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832ae518
	if (!cr6.eq) goto loc_832AE518;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r22,r11,11696
	ctx.r22.s64 = ctx.r11.s64 + 11696;
	// b 0x832ae51c
	goto loc_832AE51C;
loc_832AE518:
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
loc_832AE51C:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
loc_832AE528:
	// li r23,0
	ctx.r23.s64 = 0;
loc_832AE52C:
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(ctx.r23.u32, 1, xer);
	// blt cr6,0x832ae748
	if (cr6.lt) goto loc_832AE748;
	// beq cr6,0x832ae614
	if (cr6.eq) goto loc_832AE614;
	// cmplwi cr6,r23,3
	cr6.compare<uint32_t>(ctx.r23.u32, 3, xer);
	// bge cr6,0x832ae834
	if (!cr6.lt) goto loc_832AE834;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lhz r4,18(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// and r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 & ctx.r30.u64;
	// lhz r3,38(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mtctr r22
	ctr.u64 = ctx.r22.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r4,r4,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// and r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 & ctx.r30.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r5,r31
	ctx.r11.u64 = ctx.r5.u64 + ctx.r31.u64;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r3,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r8,r5,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r5.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r5,r8,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r4,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r26,r11,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// and r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 & ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x832AE5DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832abb50
	ctx.lr = 0x832AE5E4;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae850
	if (cr6.lt) goto loc_832AE850;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, xer);
	// beq cr6,0x832ae84c
	if (cr6.eq) goto loc_832AE84C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832ae608
	if (cr6.eq) goto loc_832AE608;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x832ae528
	goto loc_832AE528;
loc_832AE608:
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// b 0x832ae52c
	goto loc_832AE52C;
loc_832AE614:
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lhz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// rotlwi r10,r11,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lhz r4,38(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// and r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 & ctx.r30.u64;
	// lhz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// lhz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// subf r3,r3,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// rotlwi r4,r29,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r29.u32, 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 & ctx.r30.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r9,r31
	ctx.r29.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r8,12(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lhz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 20);
	// rlwinm r31,r9,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r8,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// lhz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// rotlwi r9,r3,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lhz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfic r8,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r4.s64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r8,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r3.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfe r8,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r26,r8,r11
	ctx.r26.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832AE70C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832abb50
	ctx.lr = 0x832AE714;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae850
	if (cr6.lt) goto loc_832AE850;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832ae52c
	if (!cr6.eq) goto loc_832AE52C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832ae738
	if (cr6.eq) goto loc_832AE738;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x832ae528
	goto loc_832AE528;
loc_832AE738:
	// li r23,2
	ctx.r23.s64 = 2;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// b 0x832ae52c
	goto loc_832AE52C;
loc_832AE748:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r5,r10,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// and r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lhz r9,42(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// and r10,r5,r30
	ctx.r10.u64 = ctx.r5.u64 & ctx.r30.u64;
	// lhz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// rotlwi r3,r4,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 & ctx.r30.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r8,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r4.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r26,r8,r9
	ctx.r26.u64 = ctx.r8.u64 & ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832AE7F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832abb50
	ctx.lr = 0x832AE7F8;
	sub_832ABB50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ae850
	if (cr6.lt) goto loc_832AE850;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832ae818
	if (cr6.eq) goto loc_832AE818;
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x832ae52c
	goto loc_832AE52C;
loc_832AE818:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832ae82c
	if (cr6.eq) goto loc_832AE82C;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x832ae52c
	goto loc_832AE52C;
loc_832AE82C:
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x832ae52c
	goto loc_832AE52C;
loc_832AE834:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-27288
	ctx.r5.s64 = ctx.r11.s64 + -27288;
	// addi r3,r10,-27316
	ctx.r3.s64 = ctx.r10.s64 + -27316;
	// li r4,131
	ctx.r4.s64 = 131;
	// bl 0x83298458
	ctx.lr = 0x832AE84C;
	sub_83298458(ctx, base);
loc_832AE84C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_832AE850:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE858"))) PPC_WEAK_FUNC(sub_832AE858);
PPC_FUNC_IMPL(__imp__sub_832AE858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ae870
	if (cr6.eq) goto loc_832AE870;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r11,-27268
	ctx.r5.s64 = ctx.r11.s64 + -27268;
	// b 0x832ae878
	goto loc_832AE878;
loc_832AE870:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r11,-27272
	ctx.r5.s64 = ctx.r11.s64 + -27272;
loc_832AE878:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,13664
	ctx.r4.s64 = ctx.r11.s64 + 13664;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE884"))) PPC_WEAK_FUNC(sub_832AE884);
PPC_FUNC_IMPL(__imp__sub_832AE884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE888"))) PPC_WEAK_FUNC(sub_832AE888);
PPC_FUNC_IMPL(__imp__sub_832AE888) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r4,r10,23360
	ctx.r4.s64 = ctx.r10.s64 + 23360;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE89C"))) PPC_WEAK_FUNC(sub_832AE89C);
PPC_FUNC_IMPL(__imp__sub_832AE89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE8A0"))) PPC_WEAK_FUNC(sub_832AE8A0);
PPC_FUNC_IMPL(__imp__sub_832AE8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8B0"))) PPC_WEAK_FUNC(sub_832AE8B0);
PPC_FUNC_IMPL(__imp__sub_832AE8B0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r4,r10,23360
	ctx.r4.s64 = ctx.r10.s64 + 23360;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8C4"))) PPC_WEAK_FUNC(sub_832AE8C4);
PPC_FUNC_IMPL(__imp__sub_832AE8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE8C8"))) PPC_WEAK_FUNC(sub_832AE8C8);
PPC_FUNC_IMPL(__imp__sub_832AE8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8D8"))) PPC_WEAK_FUNC(sub_832AE8D8);
PPC_FUNC_IMPL(__imp__sub_832AE8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,23360
	ctx.r4.s64 = ctx.r11.s64 + 23360;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8E8"))) PPC_WEAK_FUNC(sub_832AE8E8);
PPC_FUNC_IMPL(__imp__sub_832AE8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,-28908
	ctx.r4.s64 = ctx.r11.s64 + -28908;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE8F8"))) PPC_WEAK_FUNC(sub_832AE8F8);
PPC_FUNC_IMPL(__imp__sub_832AE8F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,-28912
	ctx.r4.s64 = ctx.r10.s64 + -28912;
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE914"))) PPC_WEAK_FUNC(sub_832AE914);
PPC_FUNC_IMPL(__imp__sub_832AE914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE918"))) PPC_WEAK_FUNC(sub_832AE918);
PPC_FUNC_IMPL(__imp__sub_832AE918) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,-27264
	ctx.r4.s64 = ctx.r10.s64 + -27264;
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE934"))) PPC_WEAK_FUNC(sub_832AE934);
PPC_FUNC_IMPL(__imp__sub_832AE934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE938"))) PPC_WEAK_FUNC(sub_832AE938);
PPC_FUNC_IMPL(__imp__sub_832AE938) {
	PPC_FUNC_PROLOGUE();
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
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,-28920
	ctx.r4.s64 = ctx.r11.s64 + -28920;
	// bl 0x8329d0d0
	ctx.lr = 0x832AE95C;
	sub_8329D0D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE96C"))) PPC_WEAK_FUNC(sub_832AE96C);
PPC_FUNC_IMPL(__imp__sub_832AE96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AE970"))) PPC_WEAK_FUNC(sub_832AE970);
PPC_FUNC_IMPL(__imp__sub_832AE970) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,-28920
	ctx.r4.s64 = ctx.r10.s64 + -28920;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8329d0d0
	ctx.lr = 0x832AE9A8;
	sub_8329D0D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AE9B8"))) PPC_WEAK_FUNC(sub_832AE9B8);
PPC_FUNC_IMPL(__imp__sub_832AE9B8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lbz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// addi r4,r10,-27260
	ctx.r4.s64 = ctx.r10.s64 + -27260;
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x8329d0d0
	sub_8329D0D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AE9D8"))) PPC_WEAK_FUNC(sub_832AE9D8);
PPC_FUNC_IMPL(__imp__sub_832AE9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AE9E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832aea60
	if (cr6.eq) goto loc_832AEA60;
	// lis r27,-31772
	ctx.r27.s64 = -2082209792;
loc_832AEA00:
	// lbzx r10,r30,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,19364(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19364);
	// rlwinm r9,r10,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r4,r31,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x832AEA38;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aea64
	if (cr6.lt) goto loc_832AEA64;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329ced8
	ctx.lr = 0x832AEA4C;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aea64
	if (cr6.lt) goto loc_832AEA64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// blt cr6,0x832aea00
	if (cr6.lt) goto loc_832AEA00;
loc_832AEA60:
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
loc_832AEA64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA6C"))) PPC_WEAK_FUNC(sub_832AEA6C);
PPC_FUNC_IMPL(__imp__sub_832AEA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEA70"))) PPC_WEAK_FUNC(sub_832AEA70);
PPC_FUNC_IMPL(__imp__sub_832AEA70) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8329d1b8
	sub_8329D1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA78"))) PPC_WEAK_FUNC(sub_832AEA78);
PPC_FUNC_IMPL(__imp__sub_832AEA78) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8329d1b8
	sub_8329D1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEA80"))) PPC_WEAK_FUNC(sub_832AEA80);
PPC_FUNC_IMPL(__imp__sub_832AEA80) {
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
	ctx.lr = 0x832AEA88;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,46(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 46);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lhz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 44);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// or r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 | ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832aeac0
	if (!cr6.eq) goto loc_832AEAC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832AEAC0:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bgt cr6,0x832aead0
	if (cr6.gt) goto loc_832AEAD0;
	// addi r30,r4,28
	ctx.r30.s64 = ctx.r4.s64 + 28;
	// b 0x832aeae4
	goto loc_832AEAE4;
loc_832AEAD0:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_832AEAE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r27,r28,26
	ctx.r27.u64 = ctx.r28.u32 & 0x3F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832aeb14
	if (!cr6.eq) goto loc_832AEB14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832996e8
	ctx.lr = 0x832AEAFC;
	sub_832996E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aeb14
	if (cr6.lt) goto loc_832AEB14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83299720
	ctx.lr = 0x832AEB0C;
	sub_83299720(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x832aeb18
	goto loc_832AEB18;
loc_832AEB14:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_832AEB18:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19136
	ctx.r9.s64 = ctx.r11.s64 + 19136;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r27,r10,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x832AEB3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aeb94
	if (cr6.lt) goto loc_832AEB94;
loc_832AEB48:
	// subf. r31,r28,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq 0x832aeba8
	if (cr0.eq) goto loc_832AEBA8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8329ced8
	ctx.lr = 0x832AEB60;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832aeb94
	if (cr6.lt) goto loc_832AEB94;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832AEB88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832aeb48
	if (!cr6.lt) goto loc_832AEB48;
loc_832AEB94:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329a350
	ctx.lr = 0x832AEBA0;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832AEBA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEBB4"))) PPC_WEAK_FUNC(sub_832AEBB4);
PPC_FUNC_IMPL(__imp__sub_832AEBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEBB8"))) PPC_WEAK_FUNC(sub_832AEBB8);
PPC_FUNC_IMPL(__imp__sub_832AEBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832AEBC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
	// lwz r30,24(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r27,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r27.u32);
	// bl 0x832a6bf8
	ctx.lr = 0x832AEBE8;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aebf8
	if (cr6.eq) goto loc_832AEBF8;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x832aebfc
	goto loc_832AEBFC;
loc_832AEBF8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832AEBFC:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r8,r3,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r3.s64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// bne cr6,0x832aeca4
	if (!cr6.eq) goto loc_832AECA4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832aec54
	if (!cr6.eq) goto loc_832AEC54;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832aec44
	if (!cr6.eq) goto loc_832AEC44;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832aec74
	goto loc_832AEC74;
loc_832AEC44:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bcaa0
	ctx.lr = 0x832AEC50;
	sub_832BCAA0(ctx, base);
	// b 0x832aec74
	goto loc_832AEC74;
loc_832AEC54:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832aec64
	if (!cr6.eq) goto loc_832AEC64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832aec74
	goto loc_832AEC74;
loc_832AEC64:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x832bcb28
	ctx.lr = 0x832AEC74;
	sub_832BCB28(ctx, base);
loc_832AEC74:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832aecf4
	if (!cr6.eq) goto loc_832AECF4;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AEC94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aecf4
	if (cr6.eq) goto loc_832AECF4;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// b 0x832aecf4
	goto loc_832AECF4;
loc_832AECA4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832aecd0
	if (!cr6.eq) goto loc_832AECD0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832aecbc
	if (!cr6.eq) goto loc_832AECBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832aecf4
	goto loc_832AECF4;
loc_832AECBC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x832bcd10
	ctx.lr = 0x832AECCC;
	sub_832BCD10(ctx, base);
	// b 0x832aecf4
	goto loc_832AECF4;
loc_832AECD0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832aece0
	if (!cr6.eq) goto loc_832AECE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832aecf4
	goto loc_832AECF4;
loc_832AECE0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x832bce00
	ctx.lr = 0x832AECF4;
	sub_832BCE00(ctx, base);
loc_832AECF4:
	// stw r3,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r3.u32);
	// addi r11,r25,-16
	ctx.r11.s64 = ctx.r25.s64 + -16;
loc_832AECFC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832aecfc
	if (cr6.eq) goto loc_832AECFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AED20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AED28"))) PPC_WEAK_FUNC(sub_832AED28);
PPC_FUNC_IMPL(__imp__sub_832AED28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832AED30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832a6bf8
	ctx.lr = 0x832AED48;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aed58
	if (cr6.eq) goto loc_832AED58;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x832aed5c
	goto loc_832AED5C;
loc_832AED58:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_832AED5C:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r8,r3,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r3.s64;
	// rlwinm r11,r9,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r6,r11,64
	ctx.r6.s64 = ctx.r11.s64 + 64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832aed98
	if (!cr6.eq) goto loc_832AED98;
	// lis r3,-32757
	ctx.r3.s64 = -2146762752;
	// ori r3,r3,9471
	ctx.r3.u64 = ctx.r3.u64 | 9471;
	// b 0x832aeda4
	goto loc_832AEDA4;
loc_832AED98:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bcb88
	ctx.lr = 0x832AEDA4;
	sub_832BCB88(ctx, base);
loc_832AEDA4:
	// lis r10,-32757
	ctx.r10.s64 = -2146762752;
	// sradi r11,r3,32
	xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0xFFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s64 >> 32;
	// ori r9,r10,9349
	ctx.r9.u64 = ctx.r10.u64 | 9349;
	// extsw r31,r11
	ctx.r31.s64 = ctx.r11.s32;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// bne cr6,0x832aeddc
	if (!cr6.eq) goto loc_832AEDDC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AEDD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_832AEDDC:
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// stw r10,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r10.u32);
loc_832AEDE8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832aede8
	if (cr6.eq) goto loc_832AEDE8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AEE0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEE14"))) PPC_WEAK_FUNC(sub_832AEE14);
PPC_FUNC_IMPL(__imp__sub_832AEE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AEE18"))) PPC_WEAK_FUNC(sub_832AEE18);
PPC_FUNC_IMPL(__imp__sub_832AEE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AEE20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x832aef20
	if (cr6.gt) goto loc_832AEF20;
	// lis r12,-31957
	ctx.r12.s64 = -2094333952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4524
	ctx.r12.s64 = ctx.r12.s64 + -4524;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832AEE7C;
	case 1:
		goto loc_832AEF20;
	case 2:
		goto loc_832AEF20;
	case 3:
		goto loc_832AEF20;
	case 4:
		goto loc_832AEF20;
	case 5:
		goto loc_832AEF20;
	case 6:
		goto loc_832AEF20;
	case 7:
		goto loc_832AEEAC;
	case 8:
		goto loc_832AEEC0;
	case 9:
		goto loc_832AEF14;
	default:
		return;
	}
	// lwz r25,-4484(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4484);
	// lwz r25,-4320(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4320);
	// lwz r25,-4320(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4320);
	// lwz r25,-4320(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4320);
	// lwz r25,-4320(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4320);
	// lwz r25,-4320(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4320);
	// lwz r25,-4320(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4320);
	// lwz r25,-4436(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4436);
	// lwz r25,-4416(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4416);
	// lwz r25,-4332(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4332);
loc_832AEE7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bdc98
	ctx.lr = 0x832AEE88;
	sub_832BDC98(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r8,r10,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// b 0x832aef20
	goto loc_832AEF20;
loc_832AEEAC:
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bcc10
	ctx.lr = 0x832AEEB8;
	sub_832BCC10(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// b 0x832aef28
	goto loc_832AEF28;
loc_832AEEC0:
	// bl 0x832a6bf8
	ctx.lr = 0x832AEEC4;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832aeed4
	if (cr6.eq) goto loc_832AEED4;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x832aeed8
	goto loc_832AEED8;
loc_832AEED4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_832AEED8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r11,r8,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r10,r7,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832aef20
	if (cr6.eq) goto loc_832AEF20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bcf18
	ctx.lr = 0x832AEF10;
	sub_832BCF18(ctx, base);
	// b 0x832aef20
	goto loc_832AEF20;
loc_832AEF14:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bdef0
	ctx.lr = 0x832AEF20;
	sub_832BDEF0(ctx, base);
loc_832AEF20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_832AEF28:
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
loc_832AEF2C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832aef2c
	if (cr6.eq) goto loc_832AEF2C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AEF50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AEF58"))) PPC_WEAK_FUNC(sub_832AEF58);
PPC_FUNC_IMPL(__imp__sub_832AEF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AEF60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addic. r30,r11,2
	xer.ca = ctx.r11.u32 > 4294967293;
	ctx.r30.s64 = ctx.r11.s64 + 2;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x832af00c
	if (cr0.eq) goto loc_832AF00C;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r5,7
	ctx.r10.s64 = ctx.r5.s64 + 7;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r27,r10,0,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r10,r9,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// addi r28,r27,64
	ctx.r28.s64 = ctx.r27.s64 + 64;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bge cr6,0x832af00c
	if (!cr6.lt) goto loc_832AF00C;
	// subf r4,r3,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r3.s64;
	// bl 0x832bd258
	ctx.lr = 0x832AEFAC;
	sub_832BD258(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832af00c
	if (cr6.eq) goto loc_832AF00C;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_832AEFC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832bca30
	ctx.lr = 0x832AEFCC;
	sub_832BCA30(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,1536
	ctx.r28.s64 = ctx.r28.s64 + 1536;
	// bne 0x832aefc4
	if (!cr0.eq) goto loc_832AEFC4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832af01c
	if (!cr6.eq) goto loc_832AF01C;
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r9,r11,10584
	ctx.r9.s64 = ctx.r11.s64 + 10584;
	// addi r8,r10,11696
	ctx.r8.s64 = ctx.r10.s64 + 11696;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// b 0x832af068
	goto loc_832AF068;
loc_832AF00C:
	// lis r3,-32757
	ctx.r3.s64 = -2146762752;
	// ori r3,r3,9345
	ctx.r3.u64 = ctx.r3.u64 | 9345;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AF01C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af030
	if (cr6.eq) goto loc_832AF030;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// b 0x832af038
	goto loc_832AF038;
loc_832AF030:
	// lis r11,-31913
	ctx.r11.s64 = -2091450368;
	// addi r11,r11,10584
	ctx.r11.s64 = ctx.r11.s64 + 10584;
loc_832AF038:
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r7,r31,72
	ctx.r7.s64 = ctx.r31.s64 + 72;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832af058
	if (!cr6.eq) goto loc_832AF058;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r11,r11,11696
	ctx.r11.s64 = ctx.r11.s64 + 11696;
loc_832AF058:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_832AF068:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r10,-5192
	ctx.r9.s64 = ctx.r10.s64 + -5192;
	// addi r6,r11,11696
	ctx.r6.s64 = ctx.r11.s64 + 11696;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832af088
	if (!cr6.eq) goto loc_832AF088;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r11,11696
	ctx.r9.s64 = ctx.r11.s64 + 11696;
loc_832AF088:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832af098
	if (!cr6.eq) goto loc_832AF098;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r6,r11,11696
	ctx.r6.s64 = ctx.r11.s64 + 11696;
loc_832AF098:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// addi r9,r11,-4824
	ctx.r9.s64 = ctx.r11.s64 + -4824;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// stb r8,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r8.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832af0dc
	if (!cr6.eq) goto loc_832AF0DC;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// addi r9,r9,11696
	ctx.r9.s64 = ctx.r9.s64 + 11696;
loc_832AF0DC:
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lis r6,-31957
	ctx.r6.s64 = -2094333952;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r9,r5,11696
	ctx.r9.s64 = ctx.r5.s64 + 11696;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r9,r6,-4584
	ctx.r9.s64 = ctx.r6.s64 + -4584;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// bne cr6,0x832af11c
	if (!cr6.eq) goto loc_832AF11C;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// addi r9,r9,11696
	ctx.r9.s64 = ctx.r9.s64 + 11696;
loc_832AF11C:
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r6,11696
	ctx.r10.s64 = ctx.r6.s64 + 11696;
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// sth r5,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r5.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF150"))) PPC_WEAK_FUNC(sub_832AF150);
PPC_FUNC_IMPL(__imp__sub_832AF150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AF158;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832af240
	if (cr6.eq) goto loc_832AF240;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832AF184:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af184
	if (!cr0.eq) goto loc_832AF184;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832af1ec
	if (cr6.eq) goto loc_832AF1EC;
loc_832AF1AC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x832af1c4
	if (!cr6.eq) goto loc_832AF1C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b2e08
	ctx.lr = 0x832AF1C0;
	sub_832B2E08(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832AF1C4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af1c4
	if (!cr0.eq) goto loc_832AF1C4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832af1ac
	if (!cr6.eq) goto loc_832AF1AC;
loc_832AF1EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af210
	if (cr6.eq) goto loc_832AF210;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832AF210:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// ble cr6,0x832af220
	if (!cr6.gt) goto loc_832AF220;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
loc_832AF220:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
loc_832AF228:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af228
	if (!cr0.eq) goto loc_832AF228;
loc_832AF240:
	// addi r11,r26,-16
	ctx.r11.s64 = ctx.r26.s64 + -16;
loc_832AF244:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af244
	if (cr6.eq) goto loc_832AF244;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AF268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF270"))) PPC_WEAK_FUNC(sub_832AF270);
PPC_FUNC_IMPL(__imp__sub_832AF270) {
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
	// bl 0x831cdae4
	ctx.lr = 0x832AF278;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r7,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x832af34c
	if (cr6.eq) goto loc_832AF34C;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832AF2B8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af2b8
	if (!cr0.eq) goto loc_832AF2B8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832af320
	if (cr6.eq) goto loc_832AF320;
loc_832AF2E0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x832af2f8
	if (!cr6.eq) goto loc_832AF2F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b2e08
	ctx.lr = 0x832AF2F4;
	sub_832B2E08(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_832AF2F8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af2f8
	if (!cr0.eq) goto loc_832AF2F8;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832af2e0
	if (!cr6.eq) goto loc_832AF2E0;
loc_832AF320:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwsync 
	// li r10,0
	ctx.r10.s64 = 0;
loc_832AF334:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r10,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af334
	if (!cr0.eq) goto loc_832AF334;
loc_832AF34C:
	// addi r11,r28,-16
	ctx.r11.s64 = ctx.r28.s64 + -16;
loc_832AF350:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af350
	if (cr6.eq) goto loc_832AF350;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AF374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF37C"))) PPC_WEAK_FUNC(sub_832AF37C);
PPC_FUNC_IMPL(__imp__sub_832AF37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF380"))) PPC_WEAK_FUNC(sub_832AF380);
PPC_FUNC_IMPL(__imp__sub_832AF380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AF388;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x832af454
	if (cr6.lt) goto loc_832AF454;
	// bne cr6,0x832af520
	if (!cr6.eq) goto loc_832AF520;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_832AF3B4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af3b4
	if (!cr0.eq) goto loc_832AF3B4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832af41c
	if (cr6.eq) goto loc_832AF41C;
loc_832AF3DC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x832af3f4
	if (!cr6.eq) goto loc_832AF3F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b2e08
	ctx.lr = 0x832AF3F0;
	sub_832B2E08(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_832AF3F4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af3f4
	if (!cr0.eq) goto loc_832AF3F4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832af3dc
	if (!cr6.eq) goto loc_832AF3DC;
loc_832AF41C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwsync 
loc_832AF438:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af438
	if (!cr0.eq) goto loc_832AF438;
	// b 0x832af520
	goto loc_832AF520;
loc_832AF454:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r28,24(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_832AF464:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af464
	if (!cr0.eq) goto loc_832AF464;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832af4cc
	if (cr6.eq) goto loc_832AF4CC;
loc_832AF48C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x832af4a4
	if (!cr6.eq) goto loc_832AF4A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b2e08
	ctx.lr = 0x832AF4A0;
	sub_832B2E08(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_832AF4A4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af4a4
	if (!cr0.eq) goto loc_832AF4A4;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832af48c
	if (!cr6.eq) goto loc_832AF48C;
loc_832AF4CC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x832af4e0
	if (!cr6.lt) goto loc_832AF4E0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832AF4E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r9.u32);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r8,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r8.u32);
	// lwsync 
	// li r7,0
	ctx.r7.s64 = 0;
loc_832AF508:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r6,0,r31
	ea = ctx.r31.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r6.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r7,0,r31
	ea = ctx.r31.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832af508
	if (!cr0.eq) goto loc_832AF508;
loc_832AF520:
	// addi r11,r26,-16
	ctx.r11.s64 = ctx.r26.s64 + -16;
loc_832AF524:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af524
	if (cr6.eq) goto loc_832AF524;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AF548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF550"))) PPC_WEAK_FUNC(sub_832AF550);
PPC_FUNC_IMPL(__imp__sub_832AF550) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r30,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r30.u32);
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// bl 0x82aabcb0
	ctx.lr = 0x832AF584;
	sub_82AABCB0(ctx, base);
	// subfic r10,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r3.s64;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r11,r11,-3760
	ctx.r11.s64 = ctx.r11.s64 + -3760;
	// addi r10,r31,60
	ctx.r10.s64 = ctx.r31.s64 + 60;
	// stw r6,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r6.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832af5b8
	if (!cr6.eq) goto loc_832AF5B8;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r11,r11,11696
	ctx.r11.s64 = ctx.r11.s64 + 11696;
loc_832AF5B8:
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// stw r31,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// addi r11,r6,11696
	ctx.r11.s64 = ctx.r6.s64 + 11696;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// li r7,31000
	ctx.r7.s64 = 31000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r9,r9,-3472
	ctx.r9.s64 = ctx.r9.s64 + -3472;
	// sth r7,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// stb r8,14(r31)
	PPC_STORE_U8(ctx.r31.u32 + 14, ctx.r8.u8);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832af5fc
	if (!cr6.eq) goto loc_832AF5FC;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// addi r9,r9,11696
	ctx.r9.s64 = ctx.r9.s64 + 11696;
loc_832AF5FC:
	// lis r5,-31984
	ctx.r5.s64 = -2096103424;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lis r6,-31957
	ctx.r6.s64 = -2094333952;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r9,r5,11696
	ctx.r9.s64 = ctx.r5.s64 + 11696;
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r9,r6,-3200
	ctx.r9.s64 = ctx.r6.s64 + -3200;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832af638
	if (!cr6.eq) goto loc_832AF638;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// addi r9,r9,11696
	ctx.r9.s64 = ctx.r9.s64 + 11696;
loc_832AF638:
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r6,11696
	ctx.r9.s64 = ctx.r6.s64 + 11696;
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF674"))) PPC_WEAK_FUNC(sub_832AF674);
PPC_FUNC_IMPL(__imp__sub_832AF674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF678"))) PPC_WEAK_FUNC(sub_832AF678);
PPC_FUNC_IMPL(__imp__sub_832AF678) {
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
	// addi r11,r4,-16
	ctx.r11.s64 = ctx.r4.s64 + -16;
loc_832AF690:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af690
	if (cr6.eq) goto loc_832AF690;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AF6B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832af6d0
	if (!cr6.eq) goto loc_832AF6D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83294018
	ctx.lr = 0x832AF6D0;
	sub_83294018(ctx, base);
loc_832AF6D0:
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

__attribute__((alias("__imp__sub_832AF6E4"))) PPC_WEAK_FUNC(sub_832AF6E4);
PPC_FUNC_IMPL(__imp__sub_832AF6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF6E8"))) PPC_WEAK_FUNC(sub_832AF6E8);
PPC_FUNC_IMPL(__imp__sub_832AF6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AF6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832a1d78
	ctx.lr = 0x832AF70C;
	sub_832A1D78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x832AF71C;
	sub_83294018(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
loc_832AF720:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af720
	if (cr6.eq) goto loc_832AF720;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AF744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AF74C"))) PPC_WEAK_FUNC(sub_832AF74C);
PPC_FUNC_IMPL(__imp__sub_832AF74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF750"))) PPC_WEAK_FUNC(sub_832AF750);
PPC_FUNC_IMPL(__imp__sub_832AF750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r8,r11,-2440
	ctx.r8.s64 = ctx.r11.s64 + -2440;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832af768
	if (!cr6.eq) goto loc_832AF768;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
loc_832AF768:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r11,r11,11696
	ctx.r11.s64 = ctx.r11.s64 + 11696;
	// ori r10,r10,35000
	ctx.r10.u64 = ctx.r10.u64 | 35000;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r9,r9,-2328
	ctx.r9.s64 = ctx.r9.s64 + -2328;
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// stb r7,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r7.u8);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832af7ac
	if (!cr6.eq) goto loc_832AF7AC;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// addi r9,r9,11696
	ctx.r9.s64 = ctx.r9.s64 + 11696;
loc_832AF7AC:
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,11696
	ctx.r10.s64 = ctx.r8.s64 + 11696;
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF7D0"))) PPC_WEAK_FUNC(sub_832AF7D0);
PPC_FUNC_IMPL(__imp__sub_832AF7D0) {
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
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r3,r10,-27204
	ctx.r3.s64 = ctx.r10.s64 + -27204;
	// bne cr6,0x832af81c
	if (!cr6.eq) goto loc_832AF81C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,-27224
	ctx.r4.s64 = ctx.r11.s64 + -27224;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83298398
	ctx.lr = 0x832AF818;
	sub_83298398(ctx, base);
	// b 0x832af834
	goto loc_832AF834;
loc_832AF81C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r11,-27248
	ctx.r4.s64 = ctx.r11.s64 + -27248;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x83298398
	ctx.lr = 0x832AF834;
	sub_83298398(ctx, base);
loc_832AF834:
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
loc_832AF838:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af838
	if (cr6.eq) goto loc_832AF838;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AF85C;
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

__attribute__((alias("__imp__sub_832AF874"))) PPC_WEAK_FUNC(sub_832AF874);
PPC_FUNC_IMPL(__imp__sub_832AF874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF878"))) PPC_WEAK_FUNC(sub_832AF878);
PPC_FUNC_IMPL(__imp__sub_832AF878) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,-27196
	ctx.r4.s64 = ctx.r11.s64 + -27196;
	// addi r3,r10,-27204
	ctx.r3.s64 = ctx.r10.s64 + -27204;
	// bl 0x83298398
	ctx.lr = 0x832AF8B4;
	sub_83298398(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
loc_832AF8B8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af8b8
	if (cr6.eq) goto loc_832AF8B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AF8DC;
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

__attribute__((alias("__imp__sub_832AF8F4"))) PPC_WEAK_FUNC(sub_832AF8F4);
PPC_FUNC_IMPL(__imp__sub_832AF8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AF8F8"))) PPC_WEAK_FUNC(sub_832AF8F8);
PPC_FUNC_IMPL(__imp__sub_832AF8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r9,r11,-2096
	ctx.r9.s64 = ctx.r11.s64 + -2096;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832af910
	if (!cr6.eq) goto loc_832AF910;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r9,r11,11696
	ctx.r9.s64 = ctx.r11.s64 + 11696;
loc_832AF910:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r11,r11,11696
	ctx.r11.s64 = ctx.r11.s64 + 11696;
	// li r7,10000
	ctx.r7.s64 = 10000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r10,-1928
	ctx.r10.s64 = ctx.r10.s64 + -1928;
	// sth r7,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r7.u16);
	// stb r8,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r8.u8);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832af950
	if (!cr6.eq) goto loc_832AF950;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// addi r10,r10,11696
	ctx.r10.s64 = ctx.r10.s64 + 11696;
loc_832AF950:
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// addi r10,r9,11696
	ctx.r10.s64 = ctx.r9.s64 + 11696;
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// stb r8,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r8.u8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AF970"))) PPC_WEAK_FUNC(sub_832AF970);
PPC_FUNC_IMPL(__imp__sub_832AF970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AF978;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r4,-16
	ctx.r11.s64 = ctx.r4.s64 + -16;
loc_832AF984:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832af984
	if (cr6.eq) goto loc_832AF984;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AF9A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832afa5c
	if (cr6.eq) goto loc_832AFA5C;
	// lwz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832afa10
	if (!cr6.eq) goto loc_832AFA10;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r31,28(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832b28e8
	ctx.lr = 0x832AF9D8;
	sub_832B28E8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-27100
	ctx.r9.s64 = ctx.r11.s64 + -27100;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27136
	ctx.r4.s64 = ctx.r10.s64 + -27136;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x832983f8
	ctx.lr = 0x832AFA08;
	sub_832983F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832AFA10:
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r31,28(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832b28e8
	ctx.lr = 0x832AFA28;
	sub_832B28E8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-27100
	ctx.r9.s64 = ctx.r11.s64 + -27100;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27176
	ctx.r4.s64 = ctx.r10.s64 + -27176;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x832983f8
	ctx.lr = 0x832AFA5C;
	sub_832983F8(ctx, base);
loc_832AFA5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFA64"))) PPC_WEAK_FUNC(sub_832AFA64);
PPC_FUNC_IMPL(__imp__sub_832AFA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFA68"))) PPC_WEAK_FUNC(sub_832AFA68);
PPC_FUNC_IMPL(__imp__sub_832AFA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832AFA70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832afac8
	if (cr6.eq) goto loc_832AFAC8;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x832b28e8
	ctx.lr = 0x832AFA9C;
	sub_832B28E8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-27100
	ctx.r9.s64 = ctx.r11.s64 + -27100;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r4,r10,-27088
	ctx.r4.s64 = ctx.r10.s64 + -27088;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x832983f8
	ctx.lr = 0x832AFAC8;
	sub_832983F8(ctx, base);
loc_832AFAC8:
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
loc_832AFACC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832afacc
	if (cr6.eq) goto loc_832AFACC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832AFAF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFAF8"))) PPC_WEAK_FUNC(sub_832AFAF8);
PPC_FUNC_IMPL(__imp__sub_832AFAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r8,r11,-1680
	ctx.r8.s64 = ctx.r11.s64 + -1680;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832afb10
	if (!cr6.eq) goto loc_832AFB10;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
loc_832AFB10:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r11,r11,11696
	ctx.r11.s64 = ctx.r11.s64 + 11696;
	// ori r10,r10,60000
	ctx.r10.u64 = ctx.r10.u64 | 60000;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r9,r9,-1432
	ctx.r9.s64 = ctx.r9.s64 + -1432;
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// stb r7,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r7.u8);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832afb54
	if (!cr6.eq) goto loc_832AFB54;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// addi r9,r9,11696
	ctx.r9.s64 = ctx.r9.s64 + 11696;
loc_832AFB54:
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r10,r8,11696
	ctx.r10.s64 = ctx.r8.s64 + 11696;
	// stb r7,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r7.u8);
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFB78"))) PPC_WEAK_FUNC(sub_832AFB78);
PPC_FUNC_IMPL(__imp__sub_832AFB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AFB80;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x832afbf0
	if (cr6.eq) goto loc_832AFBF0;
	// bl 0x83298cb0
	ctx.lr = 0x832AFBA4;
	sub_83298CB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_832AFBA8:
	// li r8,43
	ctx.r8.s64 = 43;
loc_832AFBAC:
	// lis r10,-28254
	ctx.r10.s64 = -1851654144;
	// li r9,3600
	ctx.r9.s64 = 3600;
	// ori r7,r10,46021
	ctx.r7.u64 = ctx.r10.u64 | 46021;
	// divw r4,r11,r9
	ctx.r4.s32 = PPCDivide(ctx.r11.s32, ctx.r9.s32);
	// mulhw r10,r11,r7
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,60
	ctx.r6.s64 = 60;
	// srawi r10,r5,11
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 11;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r10,r3,3600
	ctx.r10.s64 = ctx.r3.s64 * 3600;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r6
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r6.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832afc0c
	if (!cr0.eq) goto loc_832AFC0C;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r10,-27016
	ctx.r5.s64 = ctx.r10.s64 + -27016;
	// b 0x832afc14
	goto loc_832AFC14;
loc_832AFBF0:
	// bl 0x83298e68
	ctx.lr = 0x832AFBF4;
	sub_83298E68(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832afba8
	if (!cr6.lt) goto loc_832AFBA8;
	// li r8,45
	ctx.r8.s64 = 45;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x832afbac
	goto loc_832AFBAC;
loc_832AFC0C:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r10,-27060
	ctx.r5.s64 = ctx.r10.s64 + -27060;
loc_832AFC14:
	// lbz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// lbz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lhz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r6,1900
	ctx.r6.s64 = ctx.r6.s64 + 1900;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r10,121(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,122(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lbz r8,123(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x83297a40
	ctx.lr = 0x832AFC54;
	sub_83297A40(ctx, base);
	// subfc r7,r31,r3
	xer.ca = ctx.r3.u32 >= ctx.r31.u32;
	ctx.r7.s64 = ctx.r3.s64 - ctx.r31.s64;
	// eqv r6,r31,r3
	ctx.r6.u64 = ~(ctx.r31.u64 ^ ctx.r3.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFC70"))) PPC_WEAK_FUNC(sub_832AFC70);
PPC_FUNC_IMPL(__imp__sub_832AFC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832AFC78;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83298cb0
	ctx.lr = 0x832AFC90;
	sub_83298CB0(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,19368
	ctx.r11.s64 = ctx.r11.s64 + 19368;
	// lbz r6,109(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r9,1900
	ctx.r9.s64 = ctx.r9.s64 + 1900;
	// addi r5,r10,-26980
	ctx.r5.s64 = ctx.r10.s64 + -26980;
	// lbz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r30,105(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lbz r29,107(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lbz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x83297a40
	ctx.lr = 0x832AFCEC;
	sub_83297A40(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832AFCF8"))) PPC_WEAK_FUNC(sub_832AFCF8);
PPC_FUNC_IMPL(__imp__sub_832AFCF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83298e68
	ctx.lr = 0x832AFD20;
	sub_83298E68(ctx, base);
	// lbz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lhz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,105(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// addi r5,r11,-26944
	ctx.r5.s64 = ctx.r11.s64 + -26944;
	// lbz r9,106(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r6,r6,1900
	ctx.r6.s64 = ctx.r6.s64 + 1900;
	// lbz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r31,107(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x832AFD5C;
	sub_83297A40(ctx, base);
	// addi r7,r3,-14
	ctx.r7.s64 = ctx.r3.s64 + -14;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_832AFD80"))) PPC_WEAK_FUNC(sub_832AFD80);
PPC_FUNC_IMPL(__imp__sub_832AFD80) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d46f0
	ctx.lr = 0x832AFD94;
	sub_832D46F0(ctx, base);
	// lis r12,-414
	ctx.r12.s64 = -27131904;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r12,r12,20001
	ctx.r12.u64 = ctx.r12.u64 | 20001;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rldicr r11,r11,32,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// oris r12,r12,10945
	ctx.r12.u64 = ctx.r12.u64 | 717291520;
	// ori r12,r12,32768
	ctx.r12.u64 = ctx.r12.u64 | 32768;
	// add r3,r9,r12
	ctx.r3.u64 = ctx.r9.u64 + ctx.r12.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFDCC"))) PPC_WEAK_FUNC(sub_832AFDCC);
PPC_FUNC_IMPL(__imp__sub_832AFDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFDD0"))) PPC_WEAK_FUNC(sub_832AFDD0);
PPC_FUNC_IMPL(__imp__sub_832AFDD0) {
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
	// bl 0x832d30f8
	ctx.lr = 0x832AFDE0;
	sub_832D30F8(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFDF4"))) PPC_WEAK_FUNC(sub_832AFDF4);
PPC_FUNC_IMPL(__imp__sub_832AFDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFDF8"))) PPC_WEAK_FUNC(sub_832AFDF8);
PPC_FUNC_IMPL(__imp__sub_832AFDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mftb r3
	ctx.r3.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mftb r3
	ctx.r3.u64 = PPC_QUERY_TIMEBASE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFE10"))) PPC_WEAK_FUNC(sub_832AFE10);
PPC_FUNC_IMPL(__imp__sub_832AFE10) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,64
	ctx.r11.s64 = 64;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// stb r11,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// lis r7,152
	ctx.r7.s64 = 9961472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r6,761
	ctx.r6.s64 = 49872896;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// addi r3,r9,-560
	ctx.r3.s64 = ctx.r9.s64 + -560;
	// addi r5,r10,-640
	ctx.r5.s64 = ctx.r10.s64 + -640;
	// ori r4,r7,38528
	ctx.r4.u64 = ctx.r7.u64 | 38528;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// std r4,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r4.u64);
	// addi r8,r8,-520
	ctx.r8.s64 = ctx.r8.s64 + -520;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// ori r7,r6,2104
	ctx.r7.u64 = ctx.r6.u64 | 2104;
	// stb r9,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r9.u8);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// bl 0x832d49d0
	ctx.lr = 0x832AFE84;
	sub_832D49D0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x832afea0
	if (!cr6.eq) goto loc_832AFEA0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-26916
	ctx.r4.s64 = ctx.r11.s64 + -26916;
	// addi r3,r10,12816
	ctx.r3.s64 = ctx.r10.s64 + 12816;
	// bl 0x832982e8
	ctx.lr = 0x832AFEA0;
	sub_832982E8(ctx, base);
loc_832AFEA0:
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832afeb8
	if (cr6.eq) goto loc_832AFEB8;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_832AFEB8:
	// mulli r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 * -60;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFED4"))) PPC_WEAK_FUNC(sub_832AFED4);
PPC_FUNC_IMPL(__imp__sub_832AFED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFED8"))) PPC_WEAK_FUNC(sub_832AFED8);
PPC_FUNC_IMPL(__imp__sub_832AFED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpld cr6,r4,r5
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r5.u64, xer);
	// bne cr6,0x832afef4
	if (!cr6.eq) goto loc_832AFEF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_832AFEF4:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpld cr6,r4,r5
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r5.u64, xer);
	// bge cr6,0x832aff10
	if (!cr6.lt) goto loc_832AFF10;
loc_832AFF00:
	// rldicr r4,r4,1,62
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpld cr6,r4,r5
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r5.u64, xer);
	// blt cr6,0x832aff00
	if (cr6.lt) goto loc_832AFF00;
loc_832AFF10:
	// divdu r11,r4,r5
	ctx.r11.u64 = PPCDivide(ctx.r4.u64, ctx.r5.u64);
	// tdllei r5,0
	// mulld r10,r11,r5
	ctx.r10.s64 = ctx.r11.s64 * ctx.r5.s64;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// blt cr6,0x832aff4c
	if (cr6.lt) goto loc_832AFF4C;
loc_832AFF28:
	// rldicr r10,r10,1,62
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r11,r11,1,62
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpld cr6,r10,r5
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r5.u64, xer);
	// blt cr6,0x832aff44
	if (cr6.lt) goto loc_832AFF44;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832AFF44:
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bge cr6,0x832aff28
	if (!cr6.lt) goto loc_832AFF28;
loc_832AFF4C:
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x832aff58
	if (cr6.eq) goto loc_832AFF58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832AFF58:
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// blt cr6,0x832aff78
	if (cr6.lt) goto loc_832AFF78;
	// addi r11,r9,-64
	ctx.r11.s64 = ctx.r9.s64 + -64;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_832AFF78:
	// addi r11,r9,-32
	ctx.r11.s64 = ctx.r9.s64 + -32;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832AFF8C"))) PPC_WEAK_FUNC(sub_832AFF8C);
PPC_FUNC_IMPL(__imp__sub_832AFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832AFF90"))) PPC_WEAK_FUNC(sub_832AFF90);
PPC_FUNC_IMPL(__imp__sub_832AFF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// beq cr6,0x832b000c
	if (cr6.eq) goto loc_832B000C;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rldicl r8,r4,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rldicl r6,r10,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// mulld r3,r5,r9
	ctx.r3.s64 = ctx.r5.s64 * ctx.r9.s64;
	// mulld r4,r6,r9
	ctx.r4.s64 = ctx.r6.s64 * ctx.r9.s64;
	// rldicl r10,r3,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// mulld r5,r5,r8
	ctx.r5.s64 = ctx.r5.s64 * ctx.r8.s64;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulld r10,r6,r8
	ctx.r10.s64 = ctx.r6.s64 * ctx.r8.s64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rldicl r9,r4,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// rldicl r11,r3,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// rldicl r8,r5,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srd r3,r11,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// blr 
	return;
loc_832B000C:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicl r8,r3,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rldicl r4,r10,32,32
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mulld r6,r4,r9
	ctx.r6.s64 = ctx.r4.s64 * ctx.r9.s64;
	// mulld r9,r3,r9
	ctx.r9.s64 = ctx.r3.s64 * ctx.r9.s64;
	// mulld r10,r4,r8
	ctx.r10.s64 = ctx.r4.s64 * ctx.r8.s64;
	// mulld r4,r3,r8
	ctx.r4.s64 = ctx.r3.s64 * ctx.r8.s64;
	// rldicl r11,r6,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rotlwi r8,r6,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subfic r3,r5,32
	xer.ca = ctx.r5.u32 <= 32;
	ctx.r3.s64 = 32 - ctx.r5.s64;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// rldicl r6,r4,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r8,r3,32
	ctx.r8.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srd r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r5.u8 & 0x7F));
	// sld r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0070"))) PPC_WEAK_FUNC(sub_832B0070);
PPC_FUNC_IMPL(__imp__sub_832B0070) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B0090;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// subf r3,r10,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r10.s64;
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

__attribute__((alias("__imp__sub_832B00AC"))) PPC_WEAK_FUNC(sub_832B00AC);
PPC_FUNC_IMPL(__imp__sub_832B00AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B00B0"))) PPC_WEAK_FUNC(sub_832B00B0);
PPC_FUNC_IMPL(__imp__sub_832B00B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B00D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rldicl r6,r9,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mulld r10,r6,r5
	ctx.r10.s64 = ctx.r6.s64 * ctx.r5.s64;
	// rldicl r3,r8,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// mulld r8,r4,r5
	ctx.r8.s64 = ctx.r4.s64 * ctx.r5.s64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rldicl r11,r10,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// mulld r10,r6,r3
	ctx.r10.s64 = ctx.r6.s64 * ctx.r3.s64;
	// mulld r6,r4,r3
	ctx.r6.s64 = ctx.r4.s64 * ctx.r3.s64;
	// rldicl r8,r8,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rldicl r11,r6,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// subfic r5,r7,32
	xer.ca = ctx.r7.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r7.s64;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r3,r5,32
	ctx.r3.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sld r10,r4,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r4.u64 << (ctx.r3.u8 & 0x7F));
	// srd r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_832B014C"))) PPC_WEAK_FUNC(sub_832B014C);
PPC_FUNC_IMPL(__imp__sub_832B014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0150"))) PPC_WEAK_FUNC(sub_832B0150);
PPC_FUNC_IMPL(__imp__sub_832B0150) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B0170;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subf r8,r10,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rldicl r6,r9,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rldicl r3,r8,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// mulld r8,r6,r5
	ctx.r8.s64 = ctx.r6.s64 * ctx.r5.s64;
	// mulld r5,r4,r5
	ctx.r5.s64 = ctx.r4.s64 * ctx.r5.s64;
	// mulld r4,r4,r3
	ctx.r4.s64 = ctx.r4.s64 * ctx.r3.s64;
	// rldicl r10,r5,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulld r10,r6,r3
	ctx.r10.s64 = ctx.r6.s64 * ctx.r3.s64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rldicl r9,r8,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// rldicl r11,r3,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// rldicl r8,r4,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srd r3,r11,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
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

__attribute__((alias("__imp__sub_832B01E4"))) PPC_WEAK_FUNC(sub_832B01E4);
PPC_FUNC_IMPL(__imp__sub_832B01E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B01E8"))) PPC_WEAK_FUNC(sub_832B01E8);
PPC_FUNC_IMPL(__imp__sub_832B01E8) {
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
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b0214
	if (cr6.eq) goto loc_832B0214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832be5a0
	ctx.lr = 0x832B020C;
	sub_832BE5A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832be3e0
	ctx.lr = 0x832B0214;
	sub_832BE3E0(ctx, base);
loc_832B0214:
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

__attribute__((alias("__imp__sub_832B0228"))) PPC_WEAK_FUNC(sub_832B0228);
PPC_FUNC_IMPL(__imp__sub_832B0228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832B0230;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r25,16(r3)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// lwz r28,40(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
	// ld r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// not r26,r30
	ctx.r26.u64 = ~ctx.r30.u64;
loc_832B024C:
	// ld r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwsync 
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832B025C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf r11,r27,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r27.s64;
	// and r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 & ctx.r30.u64;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
	// and r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 & ctx.r26.u64;
	// cmpld cr6,r3,r10
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r10.u64, xer);
	// bge cr6,0x832b0278
	if (!cr6.lt) goto loc_832B0278;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_832B0278:
	// lwsync 
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
loc_832B0280:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r10,0,r29
	ea = ctx.r29.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u64 = *(volatile uint64_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r10,r31
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r31.s64, xer);
	// bne cr6,0x832b02a4
	if (!cr6.eq) goto loc_832B02A4;
	// stdcx. r11,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ea), reserved.s64, __builtin_bswap64(ctx.r11.s64));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832b0280
	if (!cr0.eq) goto loc_832B0280;
	// b 0x832b02ac
	goto loc_832B02AC;
loc_832B02A4:
	// stdcx. r10,0,r29
	ea = ctx.r29.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ea), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_832B02AC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpld cr6,r10,r31
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r31.u64, xer);
	// bne cr6,0x832b024c
	if (!cr6.eq) goto loc_832B024C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02C0"))) PPC_WEAK_FUNC(sub_832B02C0);
PPC_FUNC_IMPL(__imp__sub_832B02C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b0228
	sub_832B0228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B02C4"))) PPC_WEAK_FUNC(sub_832B02C4);
PPC_FUNC_IMPL(__imp__sub_832B02C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B02C8"))) PPC_WEAK_FUNC(sub_832B02C8);
PPC_FUNC_IMPL(__imp__sub_832B02C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x832b0228
	ctx.lr = 0x832B02E0;
	sub_832B0228(ctx, base);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rldicl r3,r3,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rldicl r6,r11,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mulld r10,r6,r5
	ctx.r10.s64 = ctx.r6.s64 * ctx.r5.s64;
	// mulld r8,r4,r5
	ctx.r8.s64 = ctx.r4.s64 * ctx.r5.s64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rldicl r11,r10,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF;
	// mulld r10,r6,r3
	ctx.r10.s64 = ctx.r6.s64 * ctx.r3.s64;
	// mulld r6,r4,r3
	ctx.r6.s64 = ctx.r4.s64 * ctx.r3.s64;
	// rldicl r8,r8,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rldicl r11,r6,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// subfic r5,r7,32
	xer.ca = ctx.r7.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r7.s64;
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrldi r3,r5,32
	ctx.r3.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sld r10,r4,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r4.u64 << (ctx.r3.u8 & 0x7F));
	// srd r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

__attribute__((alias("__imp__sub_832B0354"))) PPC_WEAK_FUNC(sub_832B0354);
PPC_FUNC_IMPL(__imp__sub_832B0354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0358"))) PPC_WEAK_FUNC(sub_832B0358);
PPC_FUNC_IMPL(__imp__sub_832B0358) {
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
	// bl 0x832b0228
	ctx.lr = 0x832B0370;
	sub_832B0228(ctx, base);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rldicl r3,r3,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rldicl r6,r11,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mulld r8,r6,r5
	ctx.r8.s64 = ctx.r6.s64 * ctx.r5.s64;
	// mulld r5,r4,r5
	ctx.r5.s64 = ctx.r4.s64 * ctx.r5.s64;
	// mulld r4,r4,r3
	ctx.r4.s64 = ctx.r4.s64 * ctx.r3.s64;
	// rldicl r10,r5,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulld r10,r6,r3
	ctx.r10.s64 = ctx.r6.s64 * ctx.r3.s64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rldicl r9,r8,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// rldicl r11,r3,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// rldicl r8,r4,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// srd r3,r11,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r7.u8 & 0x7F));
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

__attribute__((alias("__imp__sub_832B03DC"))) PPC_WEAK_FUNC(sub_832B03DC);
PPC_FUNC_IMPL(__imp__sub_832B03DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B03E0"))) PPC_WEAK_FUNC(sub_832B03E0);
PPC_FUNC_IMPL(__imp__sub_832B03E0) {
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
	// bl 0x832b0228
	ctx.lr = 0x832B03F0;
	sub_832B0228(ctx, base);
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

__attribute__((alias("__imp__sub_832B0404"))) PPC_WEAK_FUNC(sub_832B0404);
PPC_FUNC_IMPL(__imp__sub_832B0404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0408"))) PPC_WEAK_FUNC(sub_832B0408);
PPC_FUNC_IMPL(__imp__sub_832B0408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832B0410;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmpldi cr6,r7,0
	cr6.compare<uint64_t>(ctx.r7.u64, 0, xer);
	// beq cr6,0x832b05ec
	if (cr6.eq) goto loc_832B05EC;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832b05f8
	if (cr6.eq) goto loc_832B05F8;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x832afed8
	ctx.lr = 0x832B044C;
	sub_832AFED8(ctx, base);
	// cmplwi cr6,r8,64
	cr6.compare<uint32_t>(ctx.r8.u32, 64, xer);
	// blt cr6,0x832b0474
	if (cr6.lt) goto loc_832B0474;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-26700
	ctx.r4.s64 = ctx.r11.s64 + -26700;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x83298398
	ctx.lr = 0x832B0470;
	sub_83298398(ctx, base);
	// b 0x832b04fc
	goto loc_832B04FC;
loc_832B0474:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832afed8
	ctx.lr = 0x832B0484;
	sub_832AFED8(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sld r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832aff90
	ctx.lr = 0x832B049C;
	sub_832AFF90(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r11,-31512
	ctx.r27.s64 = ctx.r11.s64 + -31512;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r9,-26744
	ctx.r4.s64 = ctx.r9.s64 + -26744;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x83298398
	ctx.lr = 0x832B04C8;
	sub_83298398(ctx, base);
	// cmpldi cr6,r26,100
	cr6.compare<uint64_t>(ctx.r26.u64, 100, xer);
	// bge cr6,0x832b04e8
	if (!cr6.lt) goto loc_832B04E8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-26776
	ctx.r4.s64 = ctx.r11.s64 + -26776;
	// li r6,100
	ctx.r6.s64 = 100;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x832982e8
	ctx.lr = 0x832B04E8;
	sub_832982E8(ctx, base);
loc_832B04E8:
	// lis r11,11748
	ctx.r11.s64 = 769916928;
	// ori r10,r11,4947
	ctx.r10.u64 = ctx.r11.u64 | 4947;
	// rldicr r9,r10,12,51
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 12) & 0xFFFFFFFFFFFFF000;
	// cmpld cr6,r26,r9
	cr6.compare<uint64_t>(ctx.r26.u64, ctx.r9.u64, xer);
	// blt cr6,0x832b0554
	if (cr6.lt) goto loc_832B0554;
loc_832B04FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// addi r8,r10,19472
	ctx.r8.s64 = ctx.r10.s64 + 19472;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,11696
	ctx.r6.s64 = ctx.r9.s64 + 11696;
	// clrlwi r5,r23,24
	ctx.r5.u64 = ctx.r23.u32 & 0xFF;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// beq cr6,0x832b0540
	if (cr6.eq) goto loc_832B0540;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832B0540:
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832B0548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832B0554:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,992
	ctx.r3.s64 = ctx.r11.s64 + 992;
	// bl 0x832be348
	ctx.lr = 0x832B0568;
	sub_832BE348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// bne cr6,0x832b0588
	if (!cr6.eq) goto loc_832B0588;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-26880
	ctx.r4.s64 = ctx.r11.s64 + -26880;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x832982e8
	ctx.lr = 0x832B0588;
	sub_832982E8(ctx, base);
loc_832B0588:
	// stw r24,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r24.u32);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// addi r8,r11,19484
	ctx.r8.s64 = ctx.r11.s64 + 19484;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,488
	ctx.r6.s64 = ctx.r9.s64 + 488;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r5,r23,24
	ctx.r5.u64 = ctx.r23.u32 & 0xFF;
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// std r3,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r3.u64);
	// std r28,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r28.u64);
	// bne cr6,0x832b05d0
	if (!cr6.eq) goto loc_832B05D0;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x832B05D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832B05D0:
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicl r4,r26,63,1
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x832be498
	ctx.lr = 0x832B05E4;
	sub_832BE498(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832B05EC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r11,-26784
	ctx.r6.s64 = ctx.r11.s64 + -26784;
	// b 0x832b0600
	goto loc_832B0600;
loc_832B05F8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r6,r11,-26792
	ctx.r6.s64 = ctx.r11.s64 + -26792;
loc_832B0600:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-26852
	ctx.r4.s64 = ctx.r11.s64 + -26852;
	// addi r3,r10,-31512
	ctx.r3.s64 = ctx.r10.s64 + -31512;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x832982e8
	ctx.lr = 0x832B0618;
	sub_832982E8(ctx, base);
}

__attribute__((alias("__imp__sub_832B0618"))) PPC_WEAK_FUNC(sub_832B0618);
PPC_FUNC_IMPL(__imp__sub_832B0618) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83296ab0
	ctx.lr = 0x832B0638;
	sub_83296AB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b0658
	if (!cr6.eq) goto loc_832B0658;
loc_832B0640:
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_832B0658:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,19496
	ctx.r6.s64 = ctx.r11.s64 + 19496;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832B066C;
	sub_832B3FD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b0640
	if (cr6.eq) goto loc_832B0640;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,20863
	ctx.r11.u64 = ctx.r11.u64 | 20863;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x832b069c
	if (cr6.lt) goto loc_832B069C;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_832B069C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832B06BC"))) PPC_WEAK_FUNC(sub_832B06BC);
PPC_FUNC_IMPL(__imp__sub_832B06BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B06C0"))) PPC_WEAK_FUNC(sub_832B06C0);
PPC_FUNC_IMPL(__imp__sub_832B06C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B06C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x832948b0
	ctx.lr = 0x832B06E4;
	sub_832948B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b06fc
	if (!cr6.eq) goto loc_832B06FC;
loc_832B06F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B06FC:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,19496
	ctx.r6.s64 = ctx.r11.s64 + 19496;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b32b0
	ctx.lr = 0x832B0714;
	sub_832B32B0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b06f0
	if (cr6.eq) goto loc_832B06F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296a38
	ctx.lr = 0x832B072C;
	sub_83296A38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B0734"))) PPC_WEAK_FUNC(sub_832B0734);
PPC_FUNC_IMPL(__imp__sub_832B0734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0738"))) PPC_WEAK_FUNC(sub_832B0738);
PPC_FUNC_IMPL(__imp__sub_832B0738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,404
	ctx.r10.s64 = 404;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832B0744:
	// lwz r10,6816(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6816);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r6,6812(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6812);
	// rlwinm r5,r9,22,10,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
	// xor r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// rlwinm r9,r4,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r10,6820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	// lwz r5,6816(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6816);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r6,22,10,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r9,r10,10,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// xor r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// xor r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// rlwinm r4,r6,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r5,r7,17,0,14
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0xFFFE0000;
	// xor r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r6,6824(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6824);
	// lwz r8,6820(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r4,r9,22,10,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r5,r6,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00;
	// xor r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// xor r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r10,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r9,6828(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6828);
	// lwz r4,6824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6824);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r5,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r8,r9,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// xor r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r5,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r4,r6,17,0,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFE0000;
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r5,6832(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6832);
	// lwz r7,6828(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6828);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r8,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r4,r5,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00;
	// xor r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	// xor r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r6,r8,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r7,r9,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFE0000;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// lwz r8,6836(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6836);
	// lwz r10,6832(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6832);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r6,r4,22,10,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r7,r8,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// xor r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// xor r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r9,r4,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r5,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFE0000;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwu r8,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832b0744
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B0744;
	// li r9,1701
	ctx.r9.s64 = 1701;
	// lwz r11,9696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9696);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,9696
	ctx.r10.s64 = ctx.r3.s64 + 9696;
	// lwz r7,9700(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9700);
	// rlwinm r6,r11,22,10,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// lwz r5,16504(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16504);
	// rlwinm r4,r8,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// addi r11,r3,16504
	ctx.r11.s64 = ctx.r3.s64 + 16504;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// xor r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r7,r9,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFE0000;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stw r6,9696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9696, ctx.r6.u32);
loc_832B08AC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,9700(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9700);
	// lwz r7,9704(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9704);
	// rlwinm r6,r9,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r8,22,10,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// xor r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r7,r9,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r6,r8,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r5,9700(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9700, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832b08ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B08AC;
	// lwz r10,6808(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6808);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-16504(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16504);
	// rlwinm r6,r10,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r5,6804(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6804);
	// rlwinm r4,r8,22,10,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// xor r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r7,r10,17,0,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r6,r8,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r9,16508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16508, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0920"))) PPC_WEAK_FUNC(sub_832B0920);
PPC_FUNC_IMPL(__imp__sub_832B0920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,16508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16508);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4127
	cr6.compare<uint32_t>(ctx.r11.u32, 4127, xer);
	// blt cr6,0x832b0b14
	if (cr6.lt) goto loc_832B0B14;
	// li r9,404
	ctx.r9.s64 = 404;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832B093C:
	// lwz r9,6816(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6816);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r9,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r5,6812(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6812);
	// rlwinm r4,r8,22,10,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 22) & 0x3FFFFF;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r8,r3,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,6820(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	// lwz r4,6816(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6816);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r5,22,10,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r8,r9,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// xor r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// rlwinm r3,r5,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r4,r6,17,0,14
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFE0000;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,6820(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	// lwz r8,6824(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6824);
	// rlwinm r3,r8,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r4,r5,22,10,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x3FFFFF;
	// xor r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// xor r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r6,r8,17,0,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r8,6828(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6828);
	// lwz r3,6824(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6824);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r6,r4,22,10,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r7,r8,10,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// xor r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r9,r4,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r3,r5,17,0,14
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFE0000;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r4,6832(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6832);
	// lwz r6,6828(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6828);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r7,22,10,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r3,r4,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 10) & 0xFFFFFC00;
	// xor r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// rlwinm r5,r7,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r8,17,0,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// lwz r7,6836(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6836);
	// lwz r9,6832(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6832);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r5,r3,22,10,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r6,r7,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// xor r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// xor r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// rlwinm r8,r3,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r9,r4,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xFFFE0000;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwu r7,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832b093c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B093C;
	// li r8,1701
	ctx.r8.s64 = 1701;
	// lwz r11,9696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9696);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r10,9696
	ctx.r9.s64 = ctx.r10.s64 + 9696;
	// lwz r6,9700(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9700);
	// rlwinm r5,r11,22,10,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x3FFFFF;
	// lwz r4,16504(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16504);
	// rlwinm r3,r7,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 10) & 0xFFFFFC00;
	// addi r11,r10,16504
	ctx.r11.s64 = ctx.r10.s64 + 16504;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// xor r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r6,r8,17,0,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,9696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9696, ctx.r5.u32);
loc_832B0AA4:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,9700(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9700);
	// lwz r6,9704(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9704);
	// rlwinm r5,r8,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r3,r7,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// xor r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r6,r8,17,0,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r5,r7,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,9700(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9700, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x832b0aa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B0AA4;
	// lwz r9,6808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6808);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,-16504(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16504);
	// rlwinm r5,r9,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r4,6804(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6804);
	// rlwinm r3,r7,22,10,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0x3FFFFF;
	// xor r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r6,r9,17,0,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r5,r7,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r8,16508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16508, ctx.r8.u32);
loc_832B0B14:
	// lwz r11,16508(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16508);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,16508(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16508, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0B2C"))) PPC_WEAK_FUNC(sub_832B0B2C);
PPC_FUNC_IMPL(__imp__sub_832B0B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0B30"))) PPC_WEAK_FUNC(sub_832B0B30);
PPC_FUNC_IMPL(__imp__sub_832B0B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,76
	ctx.r10.s64 = 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832B0B3C:
	// lwz r10,1692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,1688(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// rlwinm r9,r4,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r8,r10,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r10,1696(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1696);
	// lwz r5,1692(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r6,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// xor r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// rlwinm r4,r6,11,21,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0x7FF;
	// rlwinm r5,r7,9,0,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// xor r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,1696(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1696);
	// lwz r9,1700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// xor r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// rlwinm r7,r9,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r8,r10,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r9,1704(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1704);
	// lwz r4,1700(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r5,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0x7FF;
	// rlwinm r4,r6,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// stwu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832b0b3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B0B3C;
	// li r9,420
	ctx.r9.s64 = 420;
	// lwz r11,1216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1216);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,1216
	ctx.r10.s64 = ctx.r3.s64 + 1216;
	// lwz r7,1220(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1220);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r5,2900(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2900);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,2900
	ctx.r11.s64 = ctx.r3.s64 + 2900;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// xor r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// rlwinm r8,r10,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r9,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stw r6,1216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1216, ctx.r6.u32);
loc_832B0C44:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,1220(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1220);
	// lwz r7,1224(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1224);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r8,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r7,r9,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r6,r8,11,21,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r5,1220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1220, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832b0c44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B0C44;
	// lwz r10,1684(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1684);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-2900(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2900);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1680(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1680);
	// rlwinm r4,r8,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r7,r10,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r6,r8,11,21,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r9,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0CB8"))) PPC_WEAK_FUNC(sub_832B0CB8);
PPC_FUNC_IMPL(__imp__sub_832B0CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,2904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,726
	cr6.compare<uint32_t>(ctx.r11.u32, 726, xer);
	// blt cr6,0x832b0e4c
	if (cr6.lt) goto loc_832B0E4C;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832B0CD4:
	// lwz r9,1692(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,1688(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1688);
	// rlwinm r4,r8,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r8,r3,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r7,r9,11,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,1696(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1696);
	// lwz r4,1692(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// rlwinm r3,r5,11,21,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0x7FF;
	// rlwinm r4,r6,9,0,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 9) & 0xFFFFFE00;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r5,1700(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	// lwz r7,1696(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1696);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r3,r8,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// xor r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r6,r8,11,21,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r9,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r8,1704(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1704);
	// lwz r3,1700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1700);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r6,r4,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r9,r4,11,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0x7FF;
	// rlwinm r3,r5,9,0,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 9) & 0xFFFFFE00;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// stwu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832b0cd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B0CD4;
	// li r8,420
	ctx.r8.s64 = 420;
	// lwz r11,1216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1216);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r10,1216
	ctx.r9.s64 = ctx.r10.s64 + 1216;
	// lwz r6,1220(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1220);
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,2900(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2900);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r10,2900
	ctx.r11.s64 = ctx.r10.s64 + 2900;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// xor r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// rlwinm r7,r9,11,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r6,r8,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,1216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1216, ctx.r5.u32);
loc_832B0DDC:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,1220(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1220);
	// lwz r6,1224(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1224);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r3,r7,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r6,r8,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r5,r7,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x7FF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,1220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1220, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x832b0ddc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B0DDC;
	// lwz r9,1684(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1684);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,-2900(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2900);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,1680(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1680);
	// rlwinm r3,r7,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r6,r9,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r5,r7,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x7FF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r8,2904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2904, ctx.r8.u32);
loc_832B0E4C:
	// lwz r11,2904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2904);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,2904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2904, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0E64"))) PPC_WEAK_FUNC(sub_832B0E64);
PPC_FUNC_IMPL(__imp__sub_832B0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B0E68"))) PPC_WEAK_FUNC(sub_832B0E68);
PPC_FUNC_IMPL(__imp__sub_832B0E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832B0E74:
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,380(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// rlwinm r5,r9,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// xor r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// rlwinm r9,r4,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r10,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r5,384(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r6,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// xor r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// rlwinm r4,r6,11,21,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0x7FF;
	// rlwinm r5,r7,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// xor r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,388(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r9,392(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// xor r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// xor r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r7.u64;
	// rlwinm r7,r9,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r10,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r9,396(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lwz r4,392(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r5,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r10,r5,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0x7FF;
	// rlwinm r4,r6,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// xor r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// stwu r9,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832b0e74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B0E74;
	// li r9,93
	ctx.r9.s64 = 93;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// lwz r7,180(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r5,552(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r3,552
	ctx.r11.s64 = ctx.r3.s64 + 552;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// xor r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// rlwinm r8,r10,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r9,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stw r6,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r6.u32);
loc_832B0F7C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,180(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// lwz r7,184(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r8,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// xor r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r7,r9,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r8,11,21,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r5,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832b0f7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B0F7C;
	// lwz r10,376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-552(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -552);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,372(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// rlwinm r4,r8,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// xor r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r7,r10,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r6,r8,11,21,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r9,556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 556, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B0FF0"))) PPC_WEAK_FUNC(sub_832B0FF0);
PPC_FUNC_IMPL(__imp__sub_832B0FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 556);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,139
	cr6.compare<uint32_t>(ctx.r11.u32, 139, xer);
	// blt cr6,0x832b1184
	if (cr6.lt) goto loc_832B1184;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832B100C:
	// lwz r9,384(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,380(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// rlwinm r4,r8,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r8,r3,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r7,r9,11,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r9,388(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r4,384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r5,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r5,r7,r4
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r4.u64;
	// xor r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// rlwinm r3,r5,11,21,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0x7FF;
	// rlwinm r4,r6,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// xor r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r5,392(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwz r7,388(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 388);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r3,r8,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// xor r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r6.u64;
	// rlwinm r6,r8,11,21,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r9,7,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r8,396(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	// lwz r3,392(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r6,r4,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// xor r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r3.u64;
	// xor r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// rlwinm r9,r4,11,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0x7FF;
	// rlwinm r3,r5,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// stwu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832b100c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B100C;
	// li r8,93
	ctx.r8.s64 = 93;
	// lwz r11,176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r10,176
	ctx.r9.s64 = ctx.r10.s64 + 176;
	// lwz r6,180(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// rlwinm r5,r11,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,552(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 552);
	// rlwinm r3,r7,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r10,552
	ctx.r11.s64 = ctx.r10.s64 + 552;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// xor r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// rlwinm r7,r9,11,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r5.u32);
loc_832B1114:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,180(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 180);
	// lwz r6,184(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r3,r7,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// xor r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r6,r8,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r5,r7,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x7FF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 180, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x832b1114
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B1114;
	// lwz r9,376(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 376);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,-552(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -552);
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,372(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 372);
	// rlwinm r3,r7,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// xor r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r6,r9,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r5,r7,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x7FF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r8,556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 556, ctx.r8.u32);
loc_832B1184:
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 556, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B119C"))) PPC_WEAK_FUNC(sub_832B119C);
PPC_FUNC_IMPL(__imp__sub_832B119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B11A0"))) PPC_WEAK_FUNC(sub_832B11A0);
PPC_FUNC_IMPL(__imp__sub_832B11A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832B11AC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	// lwz r8,-16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// rlwinm r9,r4,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r8,r10,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stw r7,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x832b11ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B11AC;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r5,64(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// xor r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r9,r4,r7
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// rlwinm r8,r10,11,21,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r9,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// xor r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
loc_832B1228:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r7,52(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r8,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r7,r9,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r6,r8,11,21,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r5,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r5.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832b1228
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B1228;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r8,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r7,r10,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r6,r8,11,21,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FF;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B129C"))) PPC_WEAK_FUNC(sub_832B129C);
PPC_FUNC_IMPL(__imp__sub_832B129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B12A0"))) PPC_WEAK_FUNC(sub_832B12A0);
PPC_FUNC_IMPL(__imp__sub_832B12A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,17
	cr6.compare<uint32_t>(ctx.r10.u32, 17, xer);
	// blt cr6,0x832b13a8
	if (cr6.lt) goto loc_832B13A8;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832B12BC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,-20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// lwz r7,-16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r8,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// xor r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// rlwinm r8,r3,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r7,r9,11,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r6,-20(r10)
	PPC_STORE_U32(ctx.r10.u32 + -20, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x832b12bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B12BC;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r5,r10,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// xor r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// rlwinm r7,r9,11,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r6,r8,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// xor r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// stw r5,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
loc_832B1338:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,48(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r6,52(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r3,r7,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r6,r8,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r5,r7,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x7FF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r4.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x832b1338
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B1338;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,-64(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r3,r7,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// xor r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// xor r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// rlwinm r6,r9,9,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r5,r7,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0x7FF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
loc_832B13A8:
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B13C0"))) PPC_WEAK_FUNC(sub_832B13C0);
PPC_FUNC_IMPL(__imp__sub_832B13C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r10,26,6,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r6,r10,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// xor r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// rlwinm r6,r9,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r7,r10,19,0,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF80000;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r7,r4,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r6,r4,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// xor r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// rlwinm r11,r5,19,0,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 19) & 0xFFF80000;
	// rlwinm r10,r4,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 25) & 0x1FFFFFF;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r7,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// xor r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// xor r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// rlwinm r6,r9,19,0,12
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF80000;
	// rlwinm r5,r7,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1468"))) PPC_WEAK_FUNC(sub_832B1468);
PPC_FUNC_IMPL(__imp__sub_832B1468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x832b151c
	if (cr6.lt) goto loc_832B151C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r3,r9,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r5,r9,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// xor r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// xor r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// rlwinm r5,r8,25,7,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r6,r9,19,0,12
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF80000;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// xor r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r6,r3,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r5,r3,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// xor r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// xor r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// rlwinm r10,r4,19,0,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 19) & 0xFFF80000;
	// rlwinm r9,r3,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1FFFFFF;
	// xor r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r9,r6,26,6,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0x3FFFFFF;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// xor r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// xor r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r4.u64;
	// rlwinm r5,r8,19,0,12
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFFF80000;
	// rlwinm r4,r6,25,7,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1FFFFFF;
	// xor r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_832B151C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1534"))) PPC_WEAK_FUNC(sub_832B1534);
PPC_FUNC_IMPL(__imp__sub_832B1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1538"))) PPC_WEAK_FUNC(sub_832B1538);
PPC_FUNC_IMPL(__imp__sub_832B1538) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1544"))) PPC_WEAK_FUNC(sub_832B1544);
PPC_FUNC_IMPL(__imp__sub_832B1544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1548"))) PPC_WEAK_FUNC(sub_832B1548);
PPC_FUNC_IMPL(__imp__sub_832B1548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// rlwinm r8,r10,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// rlwinm r7,r9,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// rlwinm r4,r6,2,25,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7C;
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// rlwinm r10,r11,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r8,r7,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r7,r5,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x7C;
	// rlwinm r6,r9,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// xor r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// lwzx r4,r4,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r6,r5,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// lwzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// rlwinm r7,r4,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// xor r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// xor r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// xor r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// stwx r6,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r6.u32);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// rlwinm r4,r7,2,25,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x7C;
	// rlwinm r11,r6,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// xor r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// stwx r8,r4,r3
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// clrlwi r6,r7,27
	ctx.r6.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r5,r6,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7C;
	// stw r6,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r6.u32);
	// lwzx r3,r5,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B15F8"))) PPC_WEAK_FUNC(sub_832B15F8);
PPC_FUNC_IMPL(__imp__sub_832B15F8) {
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
	// lhz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,32496(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32496, ctx.r11.u32);
	// bl 0x832a70c8
	ctx.lr = 0x832B1628;
	sub_832A70C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b24c8
	ctx.lr = 0x832B1634;
	sub_832B24C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832a5848
	ctx.lr = 0x832B163C;
	sub_832A5848(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832beb98
	ctx.lr = 0x832B1644;
	sub_832BEB98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832beb08
	ctx.lr = 0x832B164C;
	sub_832BEB08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832bea78
	ctx.lr = 0x832B1654;
	sub_832BEA78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832be6e0
	ctx.lr = 0x832B165C;
	sub_832BE6E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832be160
	ctx.lr = 0x832B1664;
	sub_832BE160(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B167C"))) PPC_WEAK_FUNC(sub_832B167C);
PPC_FUNC_IMPL(__imp__sub_832B167C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1680"))) PPC_WEAK_FUNC(sub_832B1680);
PPC_FUNC_IMPL(__imp__sub_832B1680) {
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
	// bl 0x832be2d0
	ctx.lr = 0x832B1690;
	sub_832BE2D0(ctx, base);
	// bl 0x832be750
	ctx.lr = 0x832B1694;
	sub_832BE750(ctx, base);
	// bl 0x832beae8
	ctx.lr = 0x832B1698;
	sub_832BEAE8(ctx, base);
	// bl 0x832beb78
	ctx.lr = 0x832B169C;
	sub_832BEB78(ctx, base);
	// bl 0x832bec08
	ctx.lr = 0x832B16A0;
	sub_832BEC08(ctx, base);
	// bl 0x832a58f0
	ctx.lr = 0x832B16A4;
	sub_832A58F0(ctx, base);
	// bl 0x832b26d8
	ctx.lr = 0x832B16A8;
	sub_832B26D8(ctx, base);
	// bl 0x832a7120
	ctx.lr = 0x832B16AC;
	sub_832A7120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B16BC"))) PPC_WEAK_FUNC(sub_832B16BC);
PPC_FUNC_IMPL(__imp__sub_832B16BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B16C0"))) PPC_WEAK_FUNC(sub_832B16C0);
PPC_FUNC_IMPL(__imp__sub_832B16C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x832B16C8;
	__savegprlr_18(ctx, base);
	// addi r31,r1,-240
	ctx.r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31748
	ctx.r27.s64 = -2080636928;
	// lwz r5,32496(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32496);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x831d2724
	ctx.lr = 0x832B16F0;
	sub_831D2724(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832b2720
	ctx.lr = 0x832B1708;
	sub_832B2720(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r29,r11,-30944
	ctx.r29.s64 = ctx.r11.s64 + -30944;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r28,r7,-26612
	ctx.r28.s64 = ctx.r7.s64 + -26612;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83298398
	ctx.lr = 0x832B173C;
	sub_83298398(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x832a5900
	ctx.lr = 0x832B1744;
	sub_832A5900(ctx, base);
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r6,-31068
	ctx.r5.s64 = ctx.r6.s64 + -31068;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x83298398
	ctx.lr = 0x832B176C;
	sub_83298398(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x832bec18
	ctx.lr = 0x832B1774;
	sub_832BEC18(ctx, base);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r5,-26408
	ctx.r5.s64 = ctx.r5.s64 + -26408;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x83298398
	ctx.lr = 0x832B179C;
	sub_83298398(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x832beb88
	ctx.lr = 0x832B17A4;
	sub_832BEB88(ctx, base);
	// lis r3,-32221
	ctx.r3.s64 = -2111635456;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r3,19080
	ctx.r5.s64 = ctx.r3.s64 + 19080;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x83298398
	ctx.lr = 0x832B17CC;
	sub_83298398(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x832beaf8
	ctx.lr = 0x832B17D4;
	sub_832BEAF8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r11,-26420
	ctx.r5.s64 = ctx.r11.s64 + -26420;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x83298398
	ctx.lr = 0x832B17FC;
	sub_83298398(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x832be760
	ctx.lr = 0x832B1804;
	sub_832BE760(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r9,-26432
	ctx.r5.s64 = ctx.r9.s64 + -26432;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x83298398
	ctx.lr = 0x832B182C;
	sub_83298398(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x832be5f0
	ctx.lr = 0x832B1834;
	sub_832BE5F0(ctx, base);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r5,r8,-26440
	ctx.r5.s64 = ctx.r8.s64 + -26440;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83298398
	ctx.lr = 0x832B185C;
	sub_83298398(ctx, base);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r7,-26500
	ctx.r4.s64 = ctx.r7.s64 + -26500;
	// bl 0x83298398
	ctx.lr = 0x832B186C;
	sub_83298398(ctx, base);
	// lwz r4,32496(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32496);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832b1970
	if (cr6.eq) goto loc_832B1970;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r28,r11,-26536
	ctx.r28.s64 = ctx.r11.s64 + -26536;
	// addi r26,r10,-20092
	ctx.r26.s64 = ctx.r10.s64 + -20092;
	// addi r25,r9,-26544
	ctx.r25.s64 = ctx.r9.s64 + -26544;
	// addi r24,r8,-26548
	ctx.r24.s64 = ctx.r8.s64 + -26548;
	// addi r23,r7,-26556
	ctx.r23.s64 = ctx.r7.s64 + -26556;
	// addi r22,r6,-26564
	ctx.r22.s64 = ctx.r6.s64 + -26564;
	// addi r21,r5,-26572
	ctx.r21.s64 = ctx.r5.s64 + -26572;
loc_832B18B8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x832b18cc
	if (cr6.eq) goto loc_832B18CC;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x832b1960
	if (!cr6.eq) goto loc_832B1960;
loc_832B18CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x832b1918
	if (cr6.gt) goto loc_832B1918;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832b18f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B18F8;
	// bdzf 4*cr6+eq,0x832b1900
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B1900;
	// bdzf 4*cr6+eq,0x832b1908
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B1908;
	// bne cr6,0x832b1910
	if (!cr6.eq) goto loc_832B1910;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// b 0x832b191c
	goto loc_832B191C;
loc_832B18F8:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// b 0x832b191c
	goto loc_832B191C;
loc_832B1900:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// b 0x832b191c
	goto loc_832B191C;
loc_832B1908:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// b 0x832b191c
	goto loc_832B191C;
loc_832B1910:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// b 0x832b191c
	goto loc_832B191C;
loc_832B1918:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_832B191C:
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// li r11,42
	ctx.r11.s64 = 42;
	// beq cr6,0x832b192c
	if (cr6.eq) goto loc_832B192C;
	// li r11,32
	ctx.r11.s64 = 32;
loc_832B192C:
	// lwz r19,-12(r30)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r18,-8(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x83298398
	ctx.lr = 0x832B195C;
	sub_83298398(ctx, base);
	// lwz r4,32496(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32496);
loc_832B1960:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplw cr6,r20,r4
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r4.u32, xer);
	// blt cr6,0x832b18b8
	if (cr6.lt) goto loc_832B18B8;
loc_832B1970:
	// addi r1,r31,240
	ctx.r1.s64 = ctx.r31.s64 + 240;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1978"))) PPC_WEAK_FUNC(sub_832B1978);
PPC_FUNC_IMPL(__imp__sub_832B1978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B1980;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x832a6ec0
	ctx.lr = 0x832B1998;
	sub_832A6EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b19ac
	if (!cr6.lt) goto loc_832B19AC;
loc_832B19A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B19AC:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b9548
	ctx.lr = 0x832B19C0;
	sub_832B9548(ctx, base);
	// stw r3,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b19a0
	if (!cr6.gt) goto loc_832B19A0;
	// addi r11,r30,15
	ctx.r11.s64 = ctx.r30.s64 + 15;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mullw r11,r10,r29
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// addi r9,r11,51
	ctx.r9.s64 = ctx.r11.s64 + 51;
	// rlwinm r11,r9,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B19EC"))) PPC_WEAK_FUNC(sub_832B19EC);
PPC_FUNC_IMPL(__imp__sub_832B19EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B19F0"))) PPC_WEAK_FUNC(sub_832B19F0);
PPC_FUNC_IMPL(__imp__sub_832B19F0) {
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
	// bl 0x832a6ee8
	ctx.lr = 0x832B1A0C;
	sub_832A6EE8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832b9768
	ctx.lr = 0x832B1A14;
	sub_832B9768(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832B1A20;
	sub_832A6EF0(ctx, base);
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

__attribute__((alias("__imp__sub_832B1A3C"))) PPC_WEAK_FUNC(sub_832B1A3C);
PPC_FUNC_IMPL(__imp__sub_832B1A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1A40"))) PPC_WEAK_FUNC(sub_832B1A40);
PPC_FUNC_IMPL(__imp__sub_832B1A40) {
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
	// bl 0x832a6ee8
	ctx.lr = 0x832B1A60;
	sub_832A6EE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x832b9878
	ctx.lr = 0x832B1A6C;
	sub_832B9878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832B1A74;
	sub_832A6EF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1A8C"))) PPC_WEAK_FUNC(sub_832B1A8C);
PPC_FUNC_IMPL(__imp__sub_832B1A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1A90"))) PPC_WEAK_FUNC(sub_832B1A90);
PPC_FUNC_IMPL(__imp__sub_832B1A90) {
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
	// bl 0x832a6ee8
	ctx.lr = 0x832B1AB0;
	sub_832A6EE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x832b99d0
	ctx.lr = 0x832B1AC0;
	sub_832B99D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832B1AC8;
	sub_832A6EF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1AE0"))) PPC_WEAK_FUNC(sub_832B1AE0);
PPC_FUNC_IMPL(__imp__sub_832B1AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832B1AE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x83295af0
	ctx.lr = 0x832B1B04;
	sub_83295AF0(ctx, base);
	// bl 0x83294b60
	ctx.lr = 0x832B1B08;
	sub_83294B60(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r11,-26292
	ctx.r5.s64 = ctx.r11.s64 + -26292;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832953a0
	ctx.lr = 0x832B1B28;
	sub_832953A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b1b3c
	if (cr6.lt) goto loc_832B1B3C;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_832B1B3C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r11,-26300
	ctx.r5.s64 = ctx.r11.s64 + -26300;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832953a0
	ctx.lr = 0x832B1B5C;
	sub_832953A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b1b70
	if (cr6.lt) goto loc_832B1B70;
	// stw r31,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r31.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_832B1B70:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r11,-26308
	ctx.r5.s64 = ctx.r11.s64 + -26308;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832953a0
	ctx.lr = 0x832B1B90;
	sub_832953A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b1ba4
	if (cr6.lt) goto loc_832B1BA4;
	// stw r31,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r31.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_832B1BA4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83295af0
	ctx.lr = 0x832B1BAC;
	sub_83295AF0(ctx, base);
	// bl 0x83294b98
	ctx.lr = 0x832B1BB0;
	sub_83294B98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b1bc4
	if (cr6.eq) goto loc_832B1BC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832B1BC4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r26,4(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r27,r11,19544
	ctx.r27.s64 = ctx.r11.s64 + 19544;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_832B1BD4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x83296d78
	ctx.lr = 0x832B1BE0;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b1ca0
	if (cr6.eq) goto loc_832B1CA0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r27,28
	ctx.r11.s64 = ctx.r27.s64 + 28;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x832b1bd4
	if (cr6.lt) goto loc_832B1BD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B1BFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b1c20
	if (!cr6.eq) goto loc_832B1C20;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-26336
	ctx.r4.s64 = ctx.r11.s64 + -26336;
	// addi r3,r10,-26348
	ctx.r3.s64 = ctx.r10.s64 + -26348;
	// bl 0x83298338
	ctx.lr = 0x832B1C20;
	sub_83298338(ctx, base);
loc_832B1C20:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r10,-26356
	ctx.r5.s64 = ctx.r10.s64 + -26356;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832953a0
	ctx.lr = 0x832B1C48;
	sub_832953A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b1c5c
	if (cr6.lt) goto loc_832B1C5C;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
loc_832B1C5C:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r11,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r10,-26364
	ctx.r5.s64 = ctx.r10.s64 + -26364;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832953a0
	ctx.lr = 0x832B1C84;
	sub_832953A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b1c94
	if (cr6.lt) goto loc_832B1C94;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_832B1C94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832B1CA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832b1bfc
	goto loc_832B1BFC;
}

__attribute__((alias("__imp__sub_832B1CA8"))) PPC_WEAK_FUNC(sub_832B1CA8);
PPC_FUNC_IMPL(__imp__sub_832B1CA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832b1cf4
	if (!cr6.gt) goto loc_832B1CF4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-26256
	ctx.r4.s64 = ctx.r11.s64 + -26256;
	// addi r3,r10,-26348
	ctx.r3.s64 = ctx.r10.s64 + -26348;
	// bl 0x83298338
	ctx.lr = 0x832B1CE8;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// b 0x832b1d44
	goto loc_832B1D44;
loc_832B1CF4:
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5ba0
	ctx.lr = 0x832B1D08;
	sub_832A5BA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b1d1c
	if (!cr6.gt) goto loc_832B1D1C;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// b 0x832b1d40
	goto loc_832B1D40;
loc_832B1D1C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-26284
	ctx.r4.s64 = ctx.r11.s64 + -26284;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r10,-26348
	ctx.r3.s64 = ctx.r10.s64 + -26348;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x83298338
	ctx.lr = 0x832B1D40;
	sub_83298338(ctx, base);
loc_832B1D40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832B1D44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1D5C"))) PPC_WEAK_FUNC(sub_832B1D5C);
PPC_FUNC_IMPL(__imp__sub_832B1D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1D60"))) PPC_WEAK_FUNC(sub_832B1D60);
PPC_FUNC_IMPL(__imp__sub_832B1D60) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b1d9c
	if (!cr6.eq) goto loc_832B1D9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,19
	ctx.r3.u64 = ctx.r3.u64 | 19;
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
loc_832B1D9C:
	// bl 0x832a5d78
	ctx.lr = 0x832B1DA0;
	sub_832A5D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832B1DBC"))) PPC_WEAK_FUNC(sub_832B1DBC);
PPC_FUNC_IMPL(__imp__sub_832B1DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1DC0"))) PPC_WEAK_FUNC(sub_832B1DC0);
PPC_FUNC_IMPL(__imp__sub_832B1DC0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b1de8
	if (cr6.eq) goto loc_832B1DE8;
	// bl 0x832a1d18
	ctx.lr = 0x832B1DE8;
	sub_832A1D18(ctx, base);
loc_832B1DE8:
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832B1DF4;
	sub_832A5A38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32500);
	// bl 0x832b9878
	ctx.lr = 0x832B1E04;
	sub_832B9878(ctx, base);
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832B1E0C;
	sub_832A5AE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B1E24"))) PPC_WEAK_FUNC(sub_832B1E24);
PPC_FUNC_IMPL(__imp__sub_832B1E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1E28"))) PPC_WEAK_FUNC(sub_832B1E28);
PPC_FUNC_IMPL(__imp__sub_832B1E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832B1E30;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832b1e60
	if (!cr6.eq) goto loc_832B1E60;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-26188
	ctx.r5.s64 = ctx.r11.s64 + -26188;
	// b 0x832b1eb8
	goto loc_832B1EB8;
loc_832B1E60:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83295b88
	ctx.lr = 0x832B1E70;
	sub_83295B88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b1e94
	if (!cr6.lt) goto loc_832B1E94;
loc_832B1E78:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
	// stw r22,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r22.u32);
	// ori r31,r31,8259
	ctx.r31.u64 = ctx.r31.u64 | 8259;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832B1E94:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26200
	ctx.r4.s64 = ctx.r11.s64 + -26200;
	// bl 0x83296d78
	ctx.lr = 0x832B1EA4;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b1e78
	if (!cr6.eq) goto loc_832B1E78;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-26208
	ctx.r5.s64 = ctx.r11.s64 + -26208;
loc_832B1EB8:
	// bl 0x83295250
	ctx.lr = 0x832B1EBC;
	sub_83295250(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b1e78
	if (cr6.eq) goto loc_832B1E78;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83295e38
	ctx.lr = 0x832B1ED0;
	sub_83295E38(ctx, base);
	// mulli r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 * 44;
	// add r24,r11,r28
	ctx.r24.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x832a1cb0
	ctx.lr = 0x832B1EEC;
	sub_832A1CB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b1f14
	if (!cr6.eq) goto loc_832B1F14;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
	// stw r22,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r22.u32);
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832B1F14:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r25,r31,r24
	ctx.r25.u64 = ctx.r31.u64 + ctx.r24.u64;
	// ble cr6,0x832b1f78
	if (!cr6.gt) goto loc_832B1F78;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_832B1F38:
	// subf r6,r31,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b1ae0
	ctx.lr = 0x832B1F4C;
	sub_832B1AE0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x832b1f8c
	if (cr6.eq) goto loc_832B1F8C;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x83295570
	ctx.lr = 0x832B1F64;
	sub_83295570(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r27,r30
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, xer);
	// blt cr6,0x832b1f38
	if (cr6.lt) goto loc_832B1F38;
loc_832B1F78:
	// stw r26,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832B1F8C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x832965f8
	ctx.lr = 0x832B1FA0;
	sub_832965F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b1fb0
	if (!cr6.lt) goto loc_832B1FB0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r31,r11,10512
	ctx.r31.s64 = ctx.r11.s64 + 10512;
loc_832B1FB0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-26232
	ctx.r4.s64 = ctx.r11.s64 + -26232;
	// addi r3,r10,-26348
	ctx.r3.s64 = ctx.r10.s64 + -26348;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B1FC8;
	sub_83298338(ctx, base);
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r31,r31,8259
	ctx.r31.u64 = ctx.r31.u64 | 8259;
	// bl 0x832a1d18
	ctx.lr = 0x832B1FD8;
	sub_832A1D18(ctx, base);
	// stw r22,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r22,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B1FEC"))) PPC_WEAK_FUNC(sub_832B1FEC);
PPC_FUNC_IMPL(__imp__sub_832B1FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B1FF0"))) PPC_WEAK_FUNC(sub_832B1FF0);
PPC_FUNC_IMPL(__imp__sub_832B1FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832B1FF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-26172
	ctx.r3.s64 = ctx.r11.s64 + -26172;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x83296e58
	ctx.lr = 0x832B2018;
	sub_83296E58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b2040
	if (cr6.eq) goto loc_832B2040;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83296ba8
	ctx.lr = 0x832B2028;
	sub_83296BA8(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addi r26,r3,-1
	ctx.r26.s64 = ctx.r3.s64 + -1;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,42
	cr6.compare<uint32_t>(ctx.r10.u32, 42, xer);
	// beq cr6,0x832b2040
	if (cr6.eq) goto loc_832B2040;
	// addi r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 1;
loc_832B2040:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832b20d8
	if (!cr6.gt) goto loc_832B20D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B205C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83293fb0
	ctx.lr = 0x832B2074;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b20a4
	if (!cr6.eq) goto loc_832B20A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r23
	ctr.u64 = ctx.r23.u64;
	// bctrl 
	ctx.lr = 0x832B2088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b2098
	if (cr6.lt) goto loc_832B2098;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x832b20a4
	goto loc_832B20A4;
loc_832B2098:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x832b20a4
	if (!cr6.eq) goto loc_832B20A4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_832B20A4:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x832b205c
	if (cr6.lt) goto loc_832B205C;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x832b20cc
	if (!cr6.gt) goto loc_832B20CC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832B20CC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// blt cr6,0x832b20dc
	if (cr6.lt) goto loc_832B20DC;
loc_832B20D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832B20DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B20E4"))) PPC_WEAK_FUNC(sub_832B20E4);
PPC_FUNC_IMPL(__imp__sub_832B20E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B20E8"))) PPC_WEAK_FUNC(sub_832B20E8);
PPC_FUNC_IMPL(__imp__sub_832B20E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832B20F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832b216c
	if (!cr6.gt) goto loc_832B216C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r27,r11,-26348
	ctx.r27.s64 = ctx.r11.s64 + -26348;
	// addi r26,r10,-29412
	ctx.r26.s64 = ctx.r10.s64 + -29412;
loc_832B2120:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832b2158
	if (!cr6.gt) goto loc_832B2158;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83298398
	ctx.lr = 0x832B2144;
	sub_83298398(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b2158
	if (cr6.eq) goto loc_832B2158;
	// bl 0x832a5d78
	ctx.lr = 0x832B2154;
	sub_832A5D78(ctx, base);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
loc_832B2158:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x832b2120
	if (cr6.lt) goto loc_832B2120;
loc_832B216C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b217c
	if (cr6.eq) goto loc_832B217C;
	// bl 0x832a1d18
	ctx.lr = 0x832B217C;
	sub_832A1D18(ctx, base);
loc_832B217C:
	// lis r31,-31747
	ctx.r31.s64 = -2080571392;
	// lwz r3,-32528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832B2188;
	sub_832A5A38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,32500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32500);
	// bl 0x832b9878
	ctx.lr = 0x832B2198;
	sub_832B9878(ctx, base);
	// lwz r3,-32528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832B21A0;
	sub_832A5AE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B21AC"))) PPC_WEAK_FUNC(sub_832B21AC);
PPC_FUNC_IMPL(__imp__sub_832B21AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B21B0"))) PPC_WEAK_FUNC(sub_832B21B0);
PPC_FUNC_IMPL(__imp__sub_832B21B0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832b9548
	ctx.lr = 0x832B21DC;
	sub_832B9548(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,32500(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32500, ctx.r3.u32);
	// bgt cr6,0x832b2200
	if (cr6.gt) goto loc_832B2200;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-26168
	ctx.r4.s64 = ctx.r11.s64 + -26168;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x832982e8
	ctx.lr = 0x832B2200;
	sub_832982E8(ctx, base);
loc_832B2200:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,51
	ctx.r11.s64 = ctx.r11.s64 + 51;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B2228"))) PPC_WEAK_FUNC(sub_832B2228);
PPC_FUNC_IMPL(__imp__sub_832B2228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,32500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32500);
	// b 0x832b96b8
	sub_832B96B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B2234"))) PPC_WEAK_FUNC(sub_832B2234);
PPC_FUNC_IMPL(__imp__sub_832B2234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2238"))) PPC_WEAK_FUNC(sub_832B2238);
PPC_FUNC_IMPL(__imp__sub_832B2238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832B2240;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,11
	ctx.r3.s64 = 11;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x832a1350
	ctx.lr = 0x832B2264;
	sub_832A1350(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b2278
	if (!cr6.lt) goto loc_832B2278;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832b22d0
	goto loc_832B22D0;
loc_832B2278:
	// lis r31,-31747
	ctx.r31.s64 = -2080571392;
	// lwz r3,-32528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832B2284;
	sub_832A5A38(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,32500(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32500);
	// bl 0x832b9768
	ctx.lr = 0x832B2290;
	sub_832B9768(ctx, base);
	// lwz r11,-32528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832a5ae8
	ctx.lr = 0x832B22A0;
	sub_832A5AE8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b22d0
	if (cr6.eq) goto loc_832B22D0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b1e28
	ctx.lr = 0x832B22BC;
	sub_832B1E28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b22ec
	if (!cr6.lt) goto loc_832B22EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b1dc0
	ctx.lr = 0x832B22D0;
	sub_832B1DC0(ctx, base);
loc_832B22D0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832b22e0
	if (!cr6.gt) goto loc_832B22E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832B22E0;
	sub_832A13D8(ctx, base);
loc_832B22E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B22EC:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8424
	ctx.r4.s64 = ctx.r11.s64 + 8424;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a0cc0
	ctx.lr = 0x832B2300;
	sub_832A0CC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B230C"))) PPC_WEAK_FUNC(sub_832B230C);
PPC_FUNC_IMPL(__imp__sub_832B230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2310"))) PPC_WEAK_FUNC(sub_832B2310);
PPC_FUNC_IMPL(__imp__sub_832B2310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r5,r11,7336
	ctx.r5.s64 = ctx.r11.s64 + 7336;
	// b 0x832b1ff0
	sub_832B1FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B231C"))) PPC_WEAK_FUNC(sub_832B231C);
PPC_FUNC_IMPL(__imp__sub_832B231C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2320"))) PPC_WEAK_FUNC(sub_832B2320);
PPC_FUNC_IMPL(__imp__sub_832B2320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r5,r11,7520
	ctx.r5.s64 = ctx.r11.s64 + 7520;
	// b 0x832b1ff0
	sub_832B1FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B232C"))) PPC_WEAK_FUNC(sub_832B232C);
PPC_FUNC_IMPL(__imp__sub_832B232C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2330"))) PPC_WEAK_FUNC(sub_832B2330);
PPC_FUNC_IMPL(__imp__sub_832B2330) {
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
	// bl 0x832a6bf8
	ctx.lr = 0x832B2350;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b237c
	if (!cr6.eq) goto loc_832B237C;
	// bl 0x832b16c0
	ctx.lr = 0x832B235C;
	sub_832B16C0(ctx, base);
	// bl 0x83254150
	ctx.lr = 0x832B2360;
	sub_83254150(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-31128
	ctx.r4.s64 = ctx.r11.s64 + -31128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B2378;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832B237C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B2394"))) PPC_WEAK_FUNC(sub_832B2394);
PPC_FUNC_IMPL(__imp__sub_832B2394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2398"))) PPC_WEAK_FUNC(sub_832B2398);
PPC_FUNC_IMPL(__imp__sub_832B2398) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r10,r11,32504
	ctx.r10.s64 = ctx.r11.s64 + 32504;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r31,192(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// lwz r30,196(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// subf r9,r31,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r31.s64;
	// subf r8,r4,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r4.s64;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x832b2418
	if (!cr6.lt) goto loc_832B2418;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bge cr6,0x832b2400
	if (!cr6.lt) goto loc_832B2400;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r4,r11,-26092
	ctx.r4.s64 = ctx.r11.s64 + -26092;
	// bl 0x83298338
	ctx.lr = 0x832B23F8;
	sub_83298338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x832b241c
	goto loc_832B241C;
loc_832B2400:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,-26136
	ctx.r4.s64 = ctx.r11.s64 + -26136;
	// bl 0x83298338
	ctx.lr = 0x832B2410;
	sub_83298338(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x832b241c
	goto loc_832B241C;
loc_832B2418:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_832B241C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B2434"))) PPC_WEAK_FUNC(sub_832B2434);
PPC_FUNC_IMPL(__imp__sub_832B2434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2438"))) PPC_WEAK_FUNC(sub_832B2438);
PPC_FUNC_IMPL(__imp__sub_832B2438) {
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
	// rlwinm r11,r4,0,9,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x7E0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x832b2470
	if (cr6.eq) goto loc_832B2470;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-26028
	ctx.r4.s64 = ctx.r11.s64 + -26028;
	// b 0x832b2498
	goto loc_832B2498;
loc_832B2470:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1510
	ctx.lr = 0x832B247C;
	sub_832A1510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b2490
	if (cr6.eq) goto loc_832B2490;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832b24b0
	goto loc_832B24B0;
loc_832B2490:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-26052
	ctx.r4.s64 = ctx.r11.s64 + -26052;
loc_832B2498:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x83298338
	ctx.lr = 0x832B24AC;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832B24B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B24C8"))) PPC_WEAK_FUNC(sub_832B24C8);
PPC_FUNC_IMPL(__imp__sub_832B24C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832B24D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r29,32(r4)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832b24fc
	if (!cr6.eq) goto loc_832B24FC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25660
	ctx.r4.s64 = ctx.r11.s64 + -25660;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832B24FC;
	sub_832982E8(ctx, base);
loc_832B24FC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r10,0,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832b2530
	if (!cr6.eq) goto loc_832B2530;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25684
	ctx.r4.s64 = ctx.r11.s64 + -25684;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832B2530;
	sub_832982E8(ctx, base);
loc_832B2530:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832b254c
	if (!cr6.eq) goto loc_832B254C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25708
	ctx.r4.s64 = ctx.r11.s64 + -25708;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832B254C;
	sub_832982E8(ctx, base);
loc_832B254C:
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// ble cr6,0x832b2568
	if (!cr6.gt) goto loc_832B2568;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25760
	ctx.r4.s64 = ctx.r11.s64 + -25760;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832B2568;
	sub_832982E8(ctx, base);
loc_832B2568:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r27,r11,32504
	ctx.r27.s64 = ctx.r11.s64 + 32504;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// stw r5,192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 192, ctx.r5.u32);
	// stw r6,196(r27)
	PPC_STORE_U32(ctx.r27.u32 + 196, ctx.r6.u32);
	// bl 0x832a6ec0
	ctx.lr = 0x832B2580;
	sub_832A6EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b259c
	if (!cr6.lt) goto loc_832B259C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25804
	ctx.r4.s64 = ctx.r11.s64 + -25804;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832B259C;
	sub_832982E8(ctx, base);
loc_832B259C:
	// addi r3,r27,4
	ctx.r3.s64 = ctx.r27.s64 + 4;
	// bl 0x83a759f8
	ctx.lr = 0x832B25A4;
	sub_83A759F8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r27,48
	ctx.r3.s64 = ctx.r27.s64 + 48;
	// bl 0x832b1978
	ctx.lr = 0x832B25B8;
	sub_832B1978(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b25d8
	if (!cr6.eq) goto loc_832B25D8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25836
	ctx.r4.s64 = ctx.r11.s64 + -25836;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832B25D8;
	sub_832982E8(ctx, base);
loc_832B25D8:
	// bl 0x82aabcb0
	ctx.lr = 0x832B25DC;
	sub_82AABCB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lhz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,4095
	ctx.r8.s64 = ctx.r11.s64 + 4095;
	// sld r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// rlwinm r28,r8,0,0,19
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF000;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// addi r25,r10,-30944
	ctx.r25.s64 = ctx.r10.s64 + -30944;
	// ble cr6,0x832b2628
	if (!cr6.gt) goto loc_832B2628;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-25896
	ctx.r4.s64 = ctx.r11.s64 + -25896;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83298338
	ctx.lr = 0x832B2624;
	sub_83298338(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_832B2628:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x832b2644
	if (!cr6.eq) goto loc_832B2644;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-25960
	ctx.r4.s64 = ctx.r11.s64 + -25960;
	// bl 0x83298338
	ctx.lr = 0x832B2644;
	sub_83298338(ctx, base);
loc_832B2644:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// and r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 & ctx.r26.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bne cr6,0x832b2674
	if (!cr6.eq) goto loc_832B2674;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x832b2688
	goto loc_832B2688;
loc_832B2674:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-31512
	ctx.r3.s64 = ctx.r11.s64 + -31512;
	// bl 0x832b2398
	ctx.lr = 0x832B2684;
	sub_832B2398(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
loc_832B2688:
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r31,r9,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r31,335
	ctx.r4.s64 = ctx.r31.s64 + 335;
	// bl 0x832becd8
	ctx.lr = 0x832B26AC;
	sub_832BECD8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b26c8
	if (!cr6.eq) goto loc_832B26C8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-25992
	ctx.r4.s64 = ctx.r11.s64 + -25992;
	// bl 0x832982e8
	ctx.lr = 0x832B26C8;
	sub_832982E8(ctx, base);
loc_832B26C8:
	// add r11,r31,r24
	ctx.r11.u64 = ctx.r31.u64 + ctx.r24.u64;
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B26D8"))) PPC_WEAK_FUNC(sub_832B26D8);
PPC_FUNC_IMPL(__imp__sub_832B26D8) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,32504
	ctx.r31.s64 = ctx.r11.s64 + 32504;
	// lwz r3,32504(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32504);
	// bl 0x832bee80
	ctx.lr = 0x832B26F8;
	sub_832BEE80(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x83307688
	ctx.lr = 0x832B2700;
	sub_83307688(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x83102db0
	ctx.lr = 0x832B2708;
	sub_83102DB0(ctx, base);
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

__attribute__((alias("__imp__sub_832B271C"))) PPC_WEAK_FUNC(sub_832B271C);
PPC_FUNC_IMPL(__imp__sub_832B271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

