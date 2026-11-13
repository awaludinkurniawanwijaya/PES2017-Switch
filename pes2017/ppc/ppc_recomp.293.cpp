#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831CB248"))) PPC_WEAK_FUNC(sub_831CB248);
PPC_FUNC_IMPL(__imp__sub_831CB248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x831CB250;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lhz r25,176(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-456
	ctx.r31.s64 = ctx.r11.s64 + -456;
	// lwz r27,180(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cb28c
	if (!cr6.eq) goto loc_831CB28C;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x831cb2b0
	goto loc_831CB2B0;
loc_831CB28C:
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r9,r25,16
	ctx.r9.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x831cb2a8
	if (!cr6.eq) goto loc_831CB2A8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831cb2ac
	if (cr6.eq) goto loc_831CB2AC;
loc_831CB2A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CB2AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831CB2B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cb2c8
	if (cr6.eq) goto loc_831CB2C8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831CB2C8:
	// bl 0x831156e8
	ctx.lr = 0x831CB2CC;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311bf98
	ctx.lr = 0x831CB2DC;
	sub_8311BF98(ctx, base);
	// addis r11,r30,222
	ctx.r11.s64 = ctx.r30.s64 + 14548992;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addis r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 458752;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r10,r10,-7440
	ctx.r10.s64 = ctx.r10.s64 + -7440;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bge cr6,0x831cb3d0
	if (!cr6.lt) goto loc_831CB3D0;
loc_831CB30C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cb3d0
	if (cr6.eq) goto loc_831CB3D0;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x831cb334
	if (!cr6.eq) goto loc_831CB334;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x831cb35c
	goto loc_831CB35C;
loc_831CB334:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x831cb354
	if (!cr6.eq) goto loc_831CB354;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831cb358
	if (cr6.eq) goto loc_831CB358;
loc_831CB354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CB358:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831CB35C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cb37c
	if (cr6.eq) goto loc_831CB37C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831cb3d0
	if (!cr6.eq) goto loc_831CB3D0;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// b 0x831cb3d0
	goto loc_831CB3D0;
loc_831CB37C:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x831cb39c
	if (!cr6.eq) goto loc_831CB39C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x831cb3c4
	goto loc_831CB3C4;
loc_831CB39C:
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r5,r25,16
	ctx.r5.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x831cb3bc
	if (!cr6.eq) goto loc_831CB3BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831cb3c0
	if (cr6.eq) goto loc_831CB3C0;
loc_831CB3BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CB3C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831CB3C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cb3f4
	if (!cr6.eq) goto loc_831CB3F4;
loc_831CB3D0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x831cb30c
	if (cr6.lt) goto loc_831CB30C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831cb400
	if (!cr6.eq) goto loc_831CB400;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831CB3F4:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831CB400:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r10,196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// rlwinm r9,r26,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF;
	// std r29,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r29.u64);
	// addi r11,r11,1408
	ctx.r11.s64 = ctx.r11.s64 + 1408;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x831cb42c
	if (cr6.eq) goto loc_831CB42C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831cb458
	goto loc_831CB458;
loc_831CB42C:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r9,r26,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x831cb444
	if (cr6.eq) goto loc_831CB444;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x831cb458
	goto loc_831CB458;
loc_831CB444:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_831CB458:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cb480
	if (cr6.eq) goto loc_831CB480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8319dc20
	ctx.lr = 0x831CB46C;
	sub_8319DC20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_831CB480:
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CB498"))) PPC_WEAK_FUNC(sub_831CB498);
PPC_FUNC_IMPL(__imp__sub_831CB498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831CB4A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x831CB4B0;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c161b8
	ctx.lr = 0x831CB4C0;
	sub_82C161B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cb614
	if (cr6.eq) goto loc_831CB614;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bf00
	ctx.lr = 0x831CB4D8;
	sub_8311BF00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cb614
	if (cr6.eq) goto loc_831CB614;
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x831cb53c
	if (cr6.gt) goto loc_831CB53C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x831cb534
	if (cr6.eq) goto loc_831CB534;
	// bdz 0x831cb534
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831CB534;
	// bdz 0x831cb534
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831CB534;
	// bdz 0x831cb51c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831CB51C;
	// bdz 0x831cb524
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831CB524;
	// bdz 0x831cb52c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831CB52C;
	// b 0x831cb534
	goto loc_831CB534;
loc_831CB51C:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x831cb538
	goto loc_831CB538;
loc_831CB524:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x831cb538
	goto loc_831CB538;
loc_831CB52C:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x831cb538
	goto loc_831CB538;
loc_831CB534:
	// li r31,5
	ctx.r31.s64 = 5;
loc_831CB538:
	// li r30,1
	ctx.r30.s64 = 1;
loc_831CB53C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831956a8
	ctx.lr = 0x831CB544;
	sub_831956A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cb614
	if (cr6.eq) goto loc_831CB614;
	// addi r10,r28,120
	ctx.r10.s64 = ctx.r28.s64 + 120;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_831CB560:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// beq cr6,0x831cb5b4
	if (cr6.eq) goto loc_831CB5B4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// blt cr6,0x831cb560
	if (cr6.lt) goto loc_831CB560;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CB580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cb614
	if (cr6.eq) goto loc_831CB614;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_831CB594:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// beq cr6,0x831cb5bc
	if (cr6.eq) goto loc_831CB5BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x831cb594
	if (cr6.lt) goto loc_831CB594;
	// b 0x831cb5c8
	goto loc_831CB5C8;
loc_831CB5B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831cb580
	goto loc_831CB580;
loc_831CB5BC:
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_831CB5C8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// cmplwi cr6,r8,15
	cr6.compare<uint32_t>(ctx.r8.u32, 15, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ble cr6,0x831cb5e8
	if (!cr6.gt) goto loc_831CB5E8;
	// li r9,15
	ctx.r9.s64 = 15;
loc_831CB5E8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// rlwimi r11,r9,5,23,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE1F);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ble cr6,0x831cb608
	if (!cr6.gt) goto loc_831CB608;
	// li r9,3
	ctx.r9.s64 = 3;
loc_831CB608:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r11,r9,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_831CB614:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CB61C"))) PPC_WEAK_FUNC(sub_831CB61C);
PPC_FUNC_IMPL(__imp__sub_831CB61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CB620"))) PPC_WEAK_FUNC(sub_831CB620);
PPC_FUNC_IMPL(__imp__sub_831CB620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x831CB628;
	__savegprlr_20(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r20,r4,16
	ctx.r20.u64 = ctx.r4.u32 & 0xFFFF;
	// std r3,848(r1)
	PPC_STORE_U64(ctx.r1.u32 + 848, ctx.r3.u64);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r20,65535
	cr6.compare<uint32_t>(ctx.r20.u32, 65535, xer);
	// bne cr6,0x831cb64c
	if (!cr6.eq) goto loc_831CB64C;
loc_831CB640:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_831CB64C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-328
	ctx.r11.s64 = ctx.r11.s64 + -328;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831cb674
	if (!cr6.eq) goto loc_831CB674;
	// lwz r11,852(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831cb69c
	goto loc_831CB69C;
loc_831CB674:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,848(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 848);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x831cb694
	if (!cr6.eq) goto loc_831CB694;
	// lwz r11,852(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831cb698
	if (cr6.eq) goto loc_831CB698;
loc_831CB694:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_831CB698:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831CB69C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cb640
	if (!cr6.eq) goto loc_831CB640;
	// cmpwi cr6,r21,6
	cr6.compare<int32_t>(ctx.r21.s32, 6, xer);
	// bge cr6,0x831cb640
	if (!cr6.lt) goto loc_831CB640;
	// bl 0x831156e8
	ctx.lr = 0x831CB6B4;
	sub_831156E8(ctx, base);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r23,r10,111
	ctx.r23.s64 = ctx.r10.s64 + 7274496;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r23,r23,5452
	ctx.r23.s64 = ctx.r23.s64 + 5452;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r22,112(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r27,108(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r26,104(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_831CB6FC:
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bge cr6,0x831cb70c
	if (!cr6.lt) goto loc_831CB70C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_831CB70C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,588
	ctx.r5.s64 = 588;
	// bl 0x831ce980
	ctx.lr = 0x831CB718;
	sub_831CE980(ctx, base);
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c160c8
	ctx.lr = 0x831CB724;
	sub_82C160C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cb7f8
	if (cr6.eq) goto loc_831CB7F8;
	// lhz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x831cb7f8
	if (cr6.eq) goto loc_831CB7F8;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r20
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, xer);
	// bne cr6,0x831cb7f8
	if (!cr6.eq) goto loc_831CB7F8;
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82c15fc8
	ctx.lr = 0x831CB758;
	sub_82C15FC8(ctx, base);
	// cmplwi cr6,r21,5
	cr6.compare<uint32_t>(ctx.r21.u32, 5, xer);
	// bgt cr6,0x831cb7f8
	if (cr6.gt) goto loc_831CB7F8;
	// mtctr r21
	ctr.u64 = ctx.r21.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bdzf 4*cr6+eq,0x831cb788
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831CB788;
	// bdzf 4*cr6+eq,0x831cb794
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831CB794;
	// bdzf 4*cr6+eq,0x831cb7a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831CB7A4;
	// bdzf 4*cr6+eq,0x831cb7b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_831CB7B4;
	// bne cr6,0x831cb7cc
	if (!cr6.eq) goto loc_831CB7CC;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x831cb7f8
	goto loc_831CB7F8;
loc_831CB788:
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x831cb7f8
	goto loc_831CB7F8;
loc_831CB794:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,21,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x3;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// b 0x831cb7f8
	goto loc_831CB7F8;
loc_831CB7A4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x831cb7f8
	goto loc_831CB7F8;
loc_831CB7B4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cb7f8
	if (cr6.eq) goto loc_831CB7F8;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x831cb7f8
	goto loc_831CB7F8;
loc_831CB7CC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831cb7f8
	if (cr6.eq) goto loc_831CB7F8;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_831CB7F8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,588
	ctx.r28.s64 = ctx.r28.s64 + 588;
	// cmplwi cr6,r31,9000
	cr6.compare<uint32_t>(ctx.r31.u32, 9000, xer);
	// blt cr6,0x831cb6fc
	if (cr6.lt) goto loc_831CB6FC;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// cmpwi cr6,r21,5
	cr6.compare<int32_t>(ctx.r21.s32, 5, xer);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// bne cr6,0x831cb878
	if (!cr6.eq) goto loc_831CB878;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x831cb878
	if (cr6.eq) goto loc_831CB878;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
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
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
loc_831CB878:
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CB88C"))) PPC_WEAK_FUNC(sub_831CB88C);
PPC_FUNC_IMPL(__imp__sub_831CB88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CB890"))) PPC_WEAK_FUNC(sub_831CB890);
PPC_FUNC_IMPL(__imp__sub_831CB890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831CB898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x831cb948
	if (cr6.eq) goto loc_831CB948;
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
loc_831CB8B8:
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_831CB8C8:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x831cb918
	if (cr6.eq) goto loc_831CB918;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x831cb8c8
	if (cr6.lt) goto loc_831CB8C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CB8E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cb938
	if (!cr6.eq) goto loc_831CB938;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_831CB8F8:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// beq cr6,0x831cb920
	if (cr6.eq) goto loc_831CB920;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x831cb8f8
	if (cr6.lt) goto loc_831CB8F8;
	// b 0x831cb92c
	goto loc_831CB92C;
loc_831CB918:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831cb8e8
	goto loc_831CB8E8;
loc_831CB920:
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r8,r10,r29
	PPC_STORE_U16(ctx.r10.u32 + ctx.r29.u32, ctx.r8.u16);
loc_831CB92C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x831cb498
	ctx.lr = 0x831CB938;
	sub_831CB498(ctx, base);
loc_831CB938:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x831cb8b8
	if (!cr6.eq) goto loc_831CB8B8;
loc_831CB948:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CB950"))) PPC_WEAK_FUNC(sub_831CB950);
PPC_FUNC_IMPL(__imp__sub_831CB950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831CB958;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x831CB968;
	sub_831156E8(ctx, base);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,48(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,-280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -280);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x831cb99c
	if (!cr6.eq) goto loc_831CB99C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cb9a0
	if (cr6.eq) goto loc_831CB9A0;
loc_831CB99C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CB9A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cbae0
	if (!cr6.eq) goto loc_831CBAE0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x831CB9B8;
	sub_8311C148(ctx, base);
	// addis r25,r26,96
	ctx.r25.s64 = ctx.r26.s64 + 6291456;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r25,r25,-4888
	ctx.r25.s64 = ctx.r25.s64 + -4888;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x831cbae0
	if (!cr6.gt) goto loc_831CBAE0;
	// addis r28,r26,85
	ctx.r28.s64 = ctx.r26.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r28,r28,11904
	ctx.r28.s64 = ctx.r28.s64 + 11904;
	// ori r24,r11,59456
	ctx.r24.u64 = ctx.r11.u64 | 59456;
loc_831CB9E4:
	// cmplwi cr6,r30,300
	cr6.compare<uint32_t>(ctx.r30.u32, 300, xer);
	// add r11,r26,r24
	ctx.r11.u64 = ctx.r26.u64 + ctx.r24.u64;
	// bge cr6,0x831cb9f4
	if (!cr6.lt) goto loc_831CB9F4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_831CB9F4:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,56
	cr6.compare<uint32_t>(ctx.r8.u32, 56, xer);
	// beq cr6,0x831cbacc
	if (cr6.eq) goto loc_831CBACC;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r27,544
	ctx.r11.s64 = ctx.r27.s64 + 544;
loc_831CBA0C:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// beq cr6,0x831cbaa8
	if (cr6.eq) goto loc_831CBAA8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x831cba0c
	if (cr6.lt) goto loc_831CBA0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CBA2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cbacc
	if (cr6.eq) goto loc_831CBACC;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314e340
	ctx.lr = 0x831CBA44;
	sub_8314E340(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// bl 0x83197440
	ctx.lr = 0x831CBA50;
	sub_83197440(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cbacc
	if (!cr6.eq) goto loc_831CBACC;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x831cbab4
	if (cr6.eq) goto loc_831CBAB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x831cbae8
	if (!cr6.gt) goto loc_831CBAE8;
loc_831CBA84:
	// lhzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r5,r31,16
	ctx.r5.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x831cbab0
	if (cr6.eq) goto loc_831CBAB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x831cba84
	if (cr6.gt) goto loc_831CBA84;
	// b 0x831cbab4
	goto loc_831CBAB4;
loc_831CBAA8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831cba2c
	goto loc_831CBA2C;
loc_831CBAB0:
	// li r7,1
	ctx.r7.s64 = 1;
loc_831CBAB4:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cbacc
	if (!cr6.eq) goto loc_831CBACC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82badd90
	ctx.lr = 0x831CBACC;
	sub_82BADD90(ctx, base);
loc_831CBACC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,548
	ctx.r28.s64 = ctx.r28.s64 + 548;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x831cb9e4
	if (cr6.lt) goto loc_831CB9E4;
loc_831CBAE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_831CBAE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x831CBAF4;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_831CBAF4"))) PPC_WEAK_FUNC(sub_831CBAF4);
PPC_FUNC_IMPL(__imp__sub_831CBAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CBAF8"))) PPC_WEAK_FUNC(sub_831CBAF8);
PPC_FUNC_IMPL(__imp__sub_831CBAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831CBB00;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x831CBB14;
	sub_831156E8(ctx, base);
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r27,48(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lwz r10,-280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -280);
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x831cbb4c
	if (!cr6.eq) goto loc_831CBB4C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x831cbb50
	if (cr6.eq) goto loc_831CBB50;
loc_831CBB4C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831CBB50:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cbb90
	if (cr6.eq) goto loc_831CBB90;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x831cbb80
	if (!cr6.eq) goto loc_831CBB80;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cbb84
	if (cr6.eq) goto loc_831CBB84;
loc_831CBB80:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831CBB84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cbf70
	if (!cr6.eq) goto loc_831CBF70;
loc_831CBB90:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-328
	ctx.r11.s64 = ctx.r11.s64 + -328;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831cbbb4
	if (!cr6.eq) goto loc_831CBBB4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x831cbbdc
	goto loc_831CBBDC;
loc_831CBBB4:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x831cbbd4
	if (!cr6.eq) goto loc_831CBBD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831cbbd8
	if (cr6.eq) goto loc_831CBBD8;
loc_831CBBD4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831CBBD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_831CBBDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cbf70
	if (!cr6.eq) goto loc_831CBF70;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8311bd68
	ctx.lr = 0x831CBBF4;
	sub_8311BD68(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cbf70
	if (cr6.eq) goto loc_831CBF70;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,-280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -280);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x831cbc2c
	if (!cr6.eq) goto loc_831CBC2C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cbc30
	if (cr6.eq) goto loc_831CBC30;
loc_831CBC2C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831CBC30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cbd30
	if (cr6.eq) goto loc_831CBD30;
	// addis r3,r27,96
	ctx.r3.s64 = ctx.r27.s64 + 6291456;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r3,-4888
	ctx.r3.s64 = ctx.r3.s64 + -4888;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x831cbf70
	if (!cr6.gt) goto loc_831CBF70;
	// addis r5,r27,85
	ctx.r5.s64 = ctx.r27.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r6,r25,120
	ctx.r6.s64 = ctx.r25.s64 + 120;
	// addi r5,r5,11904
	ctx.r5.s64 = ctx.r5.s64 + 11904;
	// ori r30,r11,59456
	ctx.r30.u64 = ctx.r11.u64 | 59456;
loc_831CBC68:
	// cmplwi cr6,r4,300
	cr6.compare<uint32_t>(ctx.r4.u32, 300, xer);
	// add r7,r27,r30
	ctx.r7.u64 = ctx.r27.u64 + ctx.r30.u64;
	// bge cr6,0x831cbc78
	if (!cr6.lt) goto loc_831CBC78;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_831CBC78:
	// lhz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_831CBC88:
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// beq cr6,0x831cbd18
	if (cr6.eq) goto loc_831CBD18;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// blt cr6,0x831cbc88
	if (cr6.lt) goto loc_831CBC88;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831CBCA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cbcfc
	if (cr6.eq) goto loc_831CBCFC;
	// lwz r11,520(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 520);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831cbcfc
	if (!cr6.eq) goto loc_831CBCFC;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_831CBCCC:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x831cbd20
	if (cr6.eq) goto loc_831CBD20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x831cbccc
	if (cr6.lt) goto loc_831CBCCC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_831CBCEC:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 4294901760;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_831CBCFC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,548
	ctx.r5.s64 = ctx.r5.s64 + 548;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// blt cr6,0x831cbc68
	if (cr6.lt) goto loc_831CBC68;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_831CBD18:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831cbca8
	goto loc_831CBCA8;
loc_831CBD20:
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x831cbcec
	goto loc_831CBCEC;
loc_831CBD30:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x831cb950
	ctx.lr = 0x831CBD48;
	sub_831CB950(ctx, base);
	// addis r31,r27,96
	ctx.r31.s64 = ctx.r27.s64 + 6291456;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r31,r31,-4888
	ctx.r31.s64 = ctx.r31.s64 + -4888;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ble cr6,0x831cbe78
	if (!cr6.gt) goto loc_831CBE78;
	// addis r4,r27,85
	ctx.r4.s64 = ctx.r27.s64 + 5570560;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addi r6,r25,120
	ctx.r6.s64 = ctx.r25.s64 + 120;
	// addi r4,r4,11904
	ctx.r4.s64 = ctx.r4.s64 + 11904;
	// ori r30,r11,59456
	ctx.r30.u64 = ctx.r11.u64 | 59456;
loc_831CBD7C:
	// cmplwi cr6,r5,300
	cr6.compare<uint32_t>(ctx.r5.u32, 300, xer);
	// add r7,r27,r30
	ctx.r7.u64 = ctx.r27.u64 + ctx.r30.u64;
	// bge cr6,0x831cbd8c
	if (!cr6.lt) goto loc_831CBD8C;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_831CBD8C:
	// lhz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_831CBD9C:
	// lhz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// beq cr6,0x831cbf00
	if (cr6.eq) goto loc_831CBF00;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x831cbd9c
	if (cr6.lt) goto loc_831CBD9C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831CBDBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cbe64
	if (cr6.eq) goto loc_831CBE64;
	// lwz r11,520(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 520);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831cbe64
	if (!cr6.eq) goto loc_831CBE64;
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cbe1c
	if (cr6.eq) goto loc_831CBE1C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// ble cr6,0x831cbf18
	if (!cr6.gt) goto loc_831CBF18;
loc_831CBDF8:
	// lhz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// clrlwi r24,r8,16
	ctx.r24.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, xer);
	// bne cr6,0x831cbe0c
	if (!cr6.eq) goto loc_831CBE0C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_831CBE0C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x831cbdf8
	if (cr6.gt) goto loc_831CBDF8;
loc_831CBE1C:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cbe64
	if (!cr6.eq) goto loc_831CBE64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_831CBE34:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// beq cr6,0x831cbf08
	if (cr6.eq) goto loc_831CBF08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x831cbe34
	if (cr6.lt) goto loc_831CBE34;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_831CBE54:
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 4294901760;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_831CBE64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,548
	ctx.r4.s64 = ctx.r4.s64 + 548;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// blt cr6,0x831cbd7c
	if (cr6.lt) goto loc_831CBD7C;
loc_831CBE78:
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// srawi r29,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831cbf54
	if (cr6.eq) goto loc_831CBF54;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// ble cr6,0x831cbf78
	if (!cr6.gt) goto loc_831CBF78;
loc_831CBE98:
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r25,120
	ctx.r8.s64 = ctx.r25.s64 + 120;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_831CBEAC:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// beq cr6,0x831cbf24
	if (cr6.eq) goto loc_831CBF24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x831cbeac
	if (cr6.lt) goto loc_831CBEAC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_831CBECC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cbf44
	if (!cr6.eq) goto loc_831CBF44;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_831CBEE0:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// beq cr6,0x831cbf2c
	if (cr6.eq) goto loc_831CBF2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// blt cr6,0x831cbee0
	if (cr6.lt) goto loc_831CBEE0;
	// b 0x831cbf38
	goto loc_831CBF38;
loc_831CBF00:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831cbdbc
	goto loc_831CBDBC;
loc_831CBF08:
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// b 0x831cbe54
	goto loc_831CBE54;
loc_831CBF18:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x831CBF24;
	sub_831CC188(ctx, base);
loc_831CBF24:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831cbecc
	goto loc_831CBECC;
loc_831CBF2C:
	// addi r11,r11,30
	ctx.r11.s64 = ctx.r11.s64 + 30;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r7,r10,r25
	PPC_STORE_U16(ctx.r10.u32 + ctx.r25.u32, ctx.r7.u16);
loc_831CBF38:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x831cb498
	ctx.lr = 0x831CBF44;
	sub_831CB498(ctx, base);
loc_831CBF44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bgt cr6,0x831cbe98
	if (cr6.gt) goto loc_831CBE98;
loc_831CBF54:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x831cbf70
	if (cr6.eq) goto loc_831CBF70;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x831CBF70;
	sub_825952B8(ctx, base);
loc_831CBF70:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_831CBF78:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x831CBF84;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_831CBF84"))) PPC_WEAK_FUNC(sub_831CBF84);
PPC_FUNC_IMPL(__imp__sub_831CBF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CBF88"))) PPC_WEAK_FUNC(sub_831CBF88);
PPC_FUNC_IMPL(__imp__sub_831CBF88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831CBF90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831cbff0
	if (cr6.eq) goto loc_831CBFF0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_831CBFA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831cbfa8
	if (!cr6.eq) goto loc_831CBFA8;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x831CBFD0;
	sub_831D2BF8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cbff0
	if (cr0.eq) goto loc_831CBFF0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x831CBFE8;
	sub_831CE7D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
loc_831CBFF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CBFF8"))) PPC_WEAK_FUNC(sub_831CBFF8);
PPC_FUNC_IMPL(__imp__sub_831CBFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r3,r11,-588
	ctx.r3.s64 = ctx.r11.s64 + -588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC010"))) PPC_WEAK_FUNC(sub_831CC010);
PPC_FUNC_IMPL(__imp__sub_831CC010) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-596
	ctx.r11.s64 = ctx.r11.s64 + -596;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x831cc044
	if (cr0.eq) goto loc_831CC044;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831cf100
	ctx.lr = 0x831CC044;
	sub_831CF100(ctx, base);
loc_831CC044:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_831CC064"))) PPC_WEAK_FUNC(sub_831CC064);
PPC_FUNC_IMPL(__imp__sub_831CC064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC068"))) PPC_WEAK_FUNC(sub_831CC068);
PPC_FUNC_IMPL(__imp__sub_831CC068) {
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
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-596
	ctx.r10.s64 = ctx.r10.s64 + -596;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x831cbf88
	ctx.lr = 0x831CC098;
	sub_831CBF88(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-596
	ctx.r11.s64 = ctx.r11.s64 + -596;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831CC0BC"))) PPC_WEAK_FUNC(sub_831CC0BC);
PPC_FUNC_IMPL(__imp__sub_831CC0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC0C0"))) PPC_WEAK_FUNC(sub_831CC0C0);
PPC_FUNC_IMPL(__imp__sub_831CC0C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831cc010
	sub_831CC010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CC0C4"))) PPC_WEAK_FUNC(sub_831CC0C4);
PPC_FUNC_IMPL(__imp__sub_831CC0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC0C8"))) PPC_WEAK_FUNC(sub_831CC0C8);
PPC_FUNC_IMPL(__imp__sub_831CC0C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x831cc130
	if (cr6.eq) goto loc_831CC130;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831cc100
	if (cr0.eq) goto loc_831CC100;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x831cf100
	ctx.lr = 0x831CC100;
	sub_831CF100(ctx, base);
loc_831CC100:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq 0x831cc128
	if (cr0.eq) goto loc_831CC128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x831cbf88
	ctx.lr = 0x831CC124;
	sub_831CBF88(ctx, base);
	// b 0x831cc130
	goto loc_831CC130;
loc_831CC128:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_831CC130:
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

__attribute__((alias("__imp__sub_831CC14C"))) PPC_WEAK_FUNC(sub_831CC14C);
PPC_FUNC_IMPL(__imp__sub_831CC14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC150"))) PPC_WEAK_FUNC(sub_831CC150);
PPC_FUNC_IMPL(__imp__sub_831CC150) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cc068
	ctx.lr = 0x831CC168;
	sub_831CC068(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r11,r11,-596
	ctx.r11.s64 = ctx.r11.s64 + -596;
	// addi r4,r10,11364
	ctx.r4.s64 = ctx.r10.s64 + 11364;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9340
	ctx.lr = 0x831CC184;
	sub_831D9340(ctx, base);
}

__attribute__((alias("__imp__sub_831CC184"))) PPC_WEAK_FUNC(sub_831CC184);
PPC_FUNC_IMPL(__imp__sub_831CC184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC188"))) PPC_WEAK_FUNC(sub_831CC188);
PPC_FUNC_IMPL(__imp__sub_831CC188) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cc068
	ctx.lr = 0x831CC1A0;
	sub_831CC068(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r11,r11,-596
	ctx.r11.s64 = ctx.r11.s64 + -596;
	// addi r4,r10,11424
	ctx.r4.s64 = ctx.r10.s64 + 11424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d9340
	ctx.lr = 0x831CC1BC;
	sub_831D9340(ctx, base);
}

__attribute__((alias("__imp__sub_831CC1BC"))) PPC_WEAK_FUNC(sub_831CC1BC);
PPC_FUNC_IMPL(__imp__sub_831CC1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC1C0"))) PPC_WEAK_FUNC(sub_831CC1C0);
PPC_FUNC_IMPL(__imp__sub_831CC1C0) {
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
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-596
	ctx.r10.s64 = ctx.r10.s64 + -596;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x831cc0c8
	ctx.lr = 0x831CC1F0;
	sub_831CC0C8(ctx, base);
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

__attribute__((alias("__imp__sub_831CC208"))) PPC_WEAK_FUNC(sub_831CC208);
PPC_FUNC_IMPL(__imp__sub_831CC208) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831cc010
	ctx.lr = 0x831CC228;
	sub_831CC010(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831cc238
	if (cr0.eq) goto loc_831CC238;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x831CC238;
	sub_82416268(ctx, base);
loc_831CC238:
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

__attribute__((alias("__imp__sub_831CC254"))) PPC_WEAK_FUNC(sub_831CC254);
PPC_FUNC_IMPL(__imp__sub_831CC254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC258"))) PPC_WEAK_FUNC(sub_831CC258);
PPC_FUNC_IMPL(__imp__sub_831CC258) {
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
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-596
	ctx.r10.s64 = ctx.r10.s64 + -596;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x831cc0c8
	ctx.lr = 0x831CC288;
	sub_831CC0C8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-596
	ctx.r11.s64 = ctx.r11.s64 + -596;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831CC2AC"))) PPC_WEAK_FUNC(sub_831CC2AC);
PPC_FUNC_IMPL(__imp__sub_831CC2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC2B0"))) PPC_WEAK_FUNC(sub_831CC2B0);
PPC_FUNC_IMPL(__imp__sub_831CC2B0) {
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
	// bl 0x831cc258
	ctx.lr = 0x831CC2C8;
	sub_831CC258(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-596
	ctx.r11.s64 = ctx.r11.s64 + -596;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831CC2EC"))) PPC_WEAK_FUNC(sub_831CC2EC);
PPC_FUNC_IMPL(__imp__sub_831CC2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC2F0"))) PPC_WEAK_FUNC(sub_831CC2F0);
PPC_FUNC_IMPL(__imp__sub_831CC2F0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d34e0
	ctx.lr = 0x831CC308;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831cc320
	if (cr0.eq) goto loc_831CC320;
	// bl 0x831d34c8
	ctx.lr = 0x831CC320;
	sub_831D34C8(ctx, base);
loc_831CC320:
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

__attribute__((alias("__imp__sub_831CC334"))) PPC_WEAK_FUNC(sub_831CC334);
PPC_FUNC_IMPL(__imp__sub_831CC334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC338"))) PPC_WEAK_FUNC(sub_831CC338);
PPC_FUNC_IMPL(__imp__sub_831CC338) {
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
	// bl 0x831d9488
	ctx.lr = 0x831CC354;
	sub_831D9488(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x83a2a780
	ctx.lr = 0x831CC360;
	sub_83A2A780(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x831d9420
	ctx.lr = 0x831CC370;
	sub_831D9420(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq 0x831cc398
	if (cr0.eq) goto loc_831CC398;
	// bl 0x831d34e0
	ctx.lr = 0x831CC380;
	sub_831D34E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x831CC390;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x831cc3a4
	goto loc_831CC3A4;
loc_831CC398:
	// bl 0x831d34e0
	ctx.lr = 0x831CC39C;
	sub_831D34E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_831CC3A4:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_831CC3C4"))) PPC_WEAK_FUNC(sub_831CC3C4);
PPC_FUNC_IMPL(__imp__sub_831CC3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC3C8"))) PPC_WEAK_FUNC(sub_831CC3C8);
PPC_FUNC_IMPL(__imp__sub_831CC3C8) {
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
	// bl 0x831d9488
	ctx.lr = 0x831CC3D8;
	sub_831D9488(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83a2a780
	ctx.lr = 0x831CC3E4;
	sub_83A2A780(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC3FC"))) PPC_WEAK_FUNC(sub_831CC3FC);
PPC_FUNC_IMPL(__imp__sub_831CC3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC400"))) PPC_WEAK_FUNC(sub_831CC400);
PPC_FUNC_IMPL(__imp__sub_831CC400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831CC408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r11,-108
	ctx.r8.s64 = ctx.r11.s64 + -108;
loc_831CC418:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831cc418
	if (!cr0.eq) goto loc_831CC418;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831cc464
	if (!cr6.eq) goto loc_831CC464;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r30,r11,2136
	ctx.r30.s64 = ctx.r11.s64 + 2136;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_831CC44C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cd9f8
	ctx.lr = 0x831CC454;
	sub_831CD9F8(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831cc44c
	if (cr6.lt) goto loc_831CC44C;
loc_831CC464:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CC470"))) PPC_WEAK_FUNC(sub_831CC470);
PPC_FUNC_IMPL(__imp__sub_831CC470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r8,r11,-108
	ctx.r8.s64 = ctx.r11.s64 + -108;
loc_831CC48C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x831cc48c
	if (!cr0.eq) goto loc_831CC48C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x831cc4d8
	if (!cr6.lt) goto loc_831CC4D8;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r30,r11,2136
	ctx.r30.s64 = ctx.r11.s64 + 2136;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_831CC4C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823fc7c0
	ctx.lr = 0x831CC4C8;
	sub_823FC7C0(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x831cc4c0
	if (cr6.lt) goto loc_831CC4C0;
loc_831CC4D8:
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

__attribute__((alias("__imp__sub_831CC4F0"))) PPC_WEAK_FUNC(sub_831CC4F0);
PPC_FUNC_IMPL(__imp__sub_831CC4F0) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x831cc524
	if (!cr6.lt) goto loc_831CC524;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// mulli r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 * 28;
	// addi r10,r10,2136
	ctx.r10.s64 = ctx.r10.s64 + 2136;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831cda00
	ctx.lr = 0x831CC524;
	sub_831CDA00(ctx, base);
loc_831CC524:
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

__attribute__((alias("__imp__sub_831CC53C"))) PPC_WEAK_FUNC(sub_831CC53C);
PPC_FUNC_IMPL(__imp__sub_831CC53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC540"))) PPC_WEAK_FUNC(sub_831CC540);
PPC_FUNC_IMPL(__imp__sub_831CC540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// addi r11,r9,2136
	ctx.r11.s64 = ctx.r9.s64 + 2136;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x831cda08
	sub_831CDA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CC560"))) PPC_WEAK_FUNC(sub_831CC560);
PPC_FUNC_IMPL(__imp__sub_831CC560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC564"))) PPC_WEAK_FUNC(sub_831CC564);
PPC_FUNC_IMPL(__imp__sub_831CC564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC568"))) PPC_WEAK_FUNC(sub_831CC568);
PPC_FUNC_IMPL(__imp__sub_831CC568) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8246b968
	ctx.lr = 0x831CC58C;
	sub_8246B968(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cc5a8
	if (cr0.eq) goto loc_831CC5A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831CC5A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831CC5A8:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831cc5b8
	if (cr0.eq) goto loc_831CC5B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x831CC5B8;
	sub_82416268(ctx, base);
loc_831CC5B8:
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

__attribute__((alias("__imp__sub_831CC5D4"))) PPC_WEAK_FUNC(sub_831CC5D4);
PPC_FUNC_IMPL(__imp__sub_831CC5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC5D8"))) PPC_WEAK_FUNC(sub_831CC5D8);
PPC_FUNC_IMPL(__imp__sub_831CC5D8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82416260
	ctx.lr = 0x831CC5F4;
	sub_82416260(ctx, base);
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cc614
	if (cr0.eq) goto loc_831CC614;
	// lwz r11,2252(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2252);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x831cc618
	goto loc_831CC618;
loc_831CC614:
	// li r9,0
	ctx.r9.s64 = 0;
loc_831CC618:
	// stw r9,2252(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2252, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_831CC630"))) PPC_WEAK_FUNC(sub_831CC630);
PPC_FUNC_IMPL(__imp__sub_831CC630) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cc668
	if (cr6.eq) goto loc_831CC668;
	// bl 0x8246b968
	ctx.lr = 0x831CC64C;
	sub_8246B968(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cc668
	if (cr0.eq) goto loc_831CC668;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831CC668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831CC668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC678"))) PPC_WEAK_FUNC(sub_831CC678);
PPC_FUNC_IMPL(__imp__sub_831CC678) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cc4f0
	ctx.lr = 0x831CC694;
	sub_831CC4F0(ctx, base);
	// lis r31,-31750
	ctx.r31.s64 = -2080768000;
	// addi r3,r31,2256
	ctx.r3.s64 = ctx.r31.s64 + 2256;
	// bl 0x831cc630
	ctx.lr = 0x831CC6A0;
	sub_831CC630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,2256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2256, ctx.r11.u32);
	// bl 0x831cc540
	ctx.lr = 0x831CC6B0;
	sub_831CC540(ctx, base);
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

__attribute__((alias("__imp__sub_831CC6C4"))) PPC_WEAK_FUNC(sub_831CC6C4);
PPC_FUNC_IMPL(__imp__sub_831CC6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC6C8"))) PPC_WEAK_FUNC(sub_831CC6C8);
PPC_FUNC_IMPL(__imp__sub_831CC6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r3,2256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC6D4"))) PPC_WEAK_FUNC(sub_831CC6D4);
PPC_FUNC_IMPL(__imp__sub_831CC6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC6D8"))) PPC_WEAK_FUNC(sub_831CC6D8);
PPC_FUNC_IMPL(__imp__sub_831CC6D8) {
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
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,2293(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2293);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831cc710
	if (!cr0.eq) goto loc_831CC710;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31971
	ctx.r9.s64 = -2095251456;
	// stb r10,2293(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2293, ctx.r10.u8);
	// addi r3,r9,-14728
	ctx.r3.s64 = ctx.r9.s64 + -14728;
	// bl 0x831cda10
	ctx.lr = 0x831CC710;
	sub_831CDA10(ctx, base);
loc_831CC710:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r31,2256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2256, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_831CC72C"))) PPC_WEAK_FUNC(sub_831CC72C);
PPC_FUNC_IMPL(__imp__sub_831CC72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC730"))) PPC_WEAK_FUNC(sub_831CC730);
PPC_FUNC_IMPL(__imp__sub_831CC730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r24,-27048(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27048);
	// lwz r17,-560(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -560);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831CC740;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc4f0
	ctx.lr = 0x831CC758;
	sub_831CC4F0(ctx, base);
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831cc7ac
	if (cr6.eq) goto loc_831CC7AC;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_831CC768:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cc7a4
	if (cr6.eq) goto loc_831CC7A4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8246b968
	ctx.lr = 0x831CC788;
	sub_8246B968(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cc7a4
	if (cr0.eq) goto loc_831CC7A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831CC7A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831CC7A4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x831cc768
	if (!cr6.eq) goto loc_831CC768;
loc_831CC7AC:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x831cf100
	ctx.lr = 0x831CC7B4;
	sub_831CF100(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CC7BC;
	sub_831CC540(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CC738"))) PPC_WEAK_FUNC(sub_831CC738);
PPC_FUNC_IMPL(__imp__sub_831CC738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x831CC740;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc4f0
	ctx.lr = 0x831CC758;
	sub_831CC4F0(ctx, base);
	// lwz r29,12(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x831cc7ac
	if (cr6.eq) goto loc_831CC7AC;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_831CC768:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cc7a4
	if (cr6.eq) goto loc_831CC7A4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8246b968
	ctx.lr = 0x831CC788;
	sub_8246B968(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cc7a4
	if (cr0.eq) goto loc_831CC7A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831CC7A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831CC7A4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x831cc768
	if (!cr6.eq) goto loc_831CC768;
loc_831CC7AC:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x831cf100
	ctx.lr = 0x831CC7B4;
	sub_831CF100(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CC7BC;
	sub_831CC540(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CC7C4"))) PPC_WEAK_FUNC(sub_831CC7C4);
PPC_FUNC_IMPL(__imp__sub_831CC7C4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CC7DC;
	sub_831CC540(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC7EC"))) PPC_WEAK_FUNC(sub_831CC7EC);
PPC_FUNC_IMPL(__imp__sub_831CC7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC7F0"))) PPC_WEAK_FUNC(sub_831CC7F0);
PPC_FUNC_IMPL(__imp__sub_831CC7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r24,-27048(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27048);
	// lwz r17,-488(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -488);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc4f0
	ctx.lr = 0x831CC81C;
	sub_831CC4F0(ctx, base);
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// lwz r3,2252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cc848
	if (cr6.eq) goto loc_831CC848;
loc_831CC82C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,2252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2252, ctx.r11.u32);
	// bl 0x831cc568
	ctx.lr = 0x831CC83C;
	sub_831CC568(ctx, base);
	// lwz r3,2252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831cc82c
	if (!cr6.eq) goto loc_831CC82C;
loc_831CC848:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CC850;
	sub_831CC540(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC7F8"))) PPC_WEAK_FUNC(sub_831CC7F8);
PPC_FUNC_IMPL(__imp__sub_831CC7F8) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc4f0
	ctx.lr = 0x831CC81C;
	sub_831CC4F0(ctx, base);
	// lis r30,-31750
	ctx.r30.s64 = -2080768000;
	// lwz r3,2252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cc848
	if (cr6.eq) goto loc_831CC848;
loc_831CC82C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,2252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2252, ctx.r11.u32);
	// bl 0x831cc568
	ctx.lr = 0x831CC83C;
	sub_831CC568(ctx, base);
	// lwz r3,2252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831cc82c
	if (!cr6.eq) goto loc_831CC82C;
loc_831CC848:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CC850;
	sub_831CC540(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC868"))) PPC_WEAK_FUNC(sub_831CC868);
PPC_FUNC_IMPL(__imp__sub_831CC868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CC880;
	sub_831CC540(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC890"))) PPC_WEAK_FUNC(sub_831CC890);
PPC_FUNC_IMPL(__imp__sub_831CC890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831d68e0
	sub_831D68E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CC8A4"))) PPC_WEAK_FUNC(sub_831CC8A4);
PPC_FUNC_IMPL(__imp__sub_831CC8A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CC8A8"))) PPC_WEAK_FUNC(sub_831CC8A8);
PPC_FUNC_IMPL(__imp__sub_831CC8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831CC8B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x831cc924
	if (cr6.eq) goto loc_831CC924;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cc8d4
	if (cr6.eq) goto loc_831CC8D4;
	// bl 0x831cf100
	ctx.lr = 0x831CC8D4;
	sub_831CF100(ctx, base);
loc_831CC8D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831cc924
	if (cr6.eq) goto loc_831CC924;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x831cc8f4
	goto loc_831CC8F4;
loc_831CC8F0:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_831CC8F4:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x831cc8f0
	if (!cr0.eq) goto loc_831CC8F0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d2bf8
	ctx.lr = 0x831CC90C;
	sub_831D2BF8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cc924
	if (cr0.eq) goto loc_831CC924;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x831CC924;
	sub_831CE980(ctx, base);
loc_831CC924:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CC930"))) PPC_WEAK_FUNC(sub_831CC930);
PPC_FUNC_IMPL(__imp__sub_831CC930) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d68e0
	ctx.lr = 0x831CC958;
	sub_831D68E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831cc96c
	if (!cr0.eq) goto loc_831CC96C;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// b 0x831cc970
	goto loc_831CC970;
loc_831CC96C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_831CC970:
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x831cc8a8
	ctx.lr = 0x831CC978;
	sub_831CC8A8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x831cc994
	if (cr6.eq) goto loc_831CC994;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d68e0
	ctx.lr = 0x831CC98C;
	sub_831D68E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x831cc99c
	if (!cr0.eq) goto loc_831CC99C;
loc_831CC994:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,-432
	ctx.r4.s64 = ctx.r11.s64 + -432;
loc_831CC99C:
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x831cc8a8
	ctx.lr = 0x831CC9A4;
	sub_831CC8A8(ctx, base);
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

__attribute__((alias("__imp__sub_831CC9BC"))) PPC_WEAK_FUNC(sub_831CC9BC);
PPC_FUNC_IMPL(__imp__sub_831CC9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CC9C0"))) PPC_WEAK_FUNC(sub_831CC9C0);
PPC_FUNC_IMPL(__imp__sub_831CC9C0) {
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
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-428
	ctx.r10.s64 = ctx.r10.s64 + -428;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r4,r10,-432
	ctx.r4.s64 = ctx.r10.s64 + -432;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// bl 0x831cc8a8
	ctx.lr = 0x831CCA14;
	sub_831CC8A8(ctx, base);
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

__attribute__((alias("__imp__sub_831CCA2C"))) PPC_WEAK_FUNC(sub_831CCA2C);
PPC_FUNC_IMPL(__imp__sub_831CCA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCA30"))) PPC_WEAK_FUNC(sub_831CCA30);
PPC_FUNC_IMPL(__imp__sub_831CCA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r24,-27048(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27048);
	// lwz r17,-408(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-428
	ctx.r11.s64 = ctx.r11.s64 + -428;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cc738
	ctx.lr = 0x831CCA68;
	sub_831CC738(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cca78
	if (cr6.eq) goto loc_831CCA78;
	// bl 0x831cf100
	ctx.lr = 0x831CCA78;
	sub_831CF100(ctx, base);
loc_831CCA78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,21716
	ctx.r11.s64 = ctx.r11.s64 + 21716;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCA38"))) PPC_WEAK_FUNC(sub_831CCA38);
PPC_FUNC_IMPL(__imp__sub_831CCA38) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-428
	ctx.r11.s64 = ctx.r11.s64 + -428;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x831cc738
	ctx.lr = 0x831CCA68;
	sub_831CC738(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cca78
	if (cr6.eq) goto loc_831CCA78;
	// bl 0x831cf100
	ctx.lr = 0x831CCA78;
	sub_831CF100(ctx, base);
loc_831CCA78:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,21716
	ctx.r11.s64 = ctx.r11.s64 + 21716;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCAA4"))) PPC_WEAK_FUNC(sub_831CCAA4);
PPC_FUNC_IMPL(__imp__sub_831CCAA4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82a5c688
	ctx.lr = 0x831CCABC;
	sub_82A5C688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCACC"))) PPC_WEAK_FUNC(sub_831CCACC);
PPC_FUNC_IMPL(__imp__sub_831CCACC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8246c458
	ctx.lr = 0x831CCAE8;
	sub_8246C458(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCAF8"))) PPC_WEAK_FUNC(sub_831CCAF8);
PPC_FUNC_IMPL(__imp__sub_831CCAF8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831cca38
	ctx.lr = 0x831CCB18;
	sub_831CCA38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831ccb28
	if (cr0.eq) goto loc_831CCB28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x831CCB28;
	sub_82416268(ctx, base);
loc_831CCB28:
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

__attribute__((alias("__imp__sub_831CCB44"))) PPC_WEAK_FUNC(sub_831CCB44);
PPC_FUNC_IMPL(__imp__sub_831CCB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCB48"))) PPC_WEAK_FUNC(sub_831CCB48);
PPC_FUNC_IMPL(__imp__sub_831CCB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r24,-27048(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27048);
	// lwz r17,-344(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831CCB58;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// lwz r30,2256(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831ccbf0
	if (!cr6.eq) goto loc_831CCBF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc4f0
	ctx.lr = 0x831CCB7C;
	sub_831CC4F0(ctx, base);
	// lwz r30,2256(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831ccbe8
	if (!cr6.eq) goto loc_831CCBE8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82416260
	ctx.lr = 0x831CCB90;
	sub_82416260(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ccba8
	if (cr0.eq) goto loc_831CCBA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cc9c0
	ctx.lr = 0x831CCBA0;
	sub_831CC9C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831ccbac
	goto loc_831CCBAC;
loc_831CCBA8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831CCBAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cc6d8
	ctx.lr = 0x831CCBB4;
	sub_831CC6D8(ctx, base);
	// li r11,63
	ctx.r11.s64 = 63;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r4,r10,-360
	ctx.r4.s64 = ctx.r10.s64 + -360;
	// bl 0x831cc8a8
	ctx.lr = 0x831CCBCC;
	sub_831CC8A8(ctx, base);
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,2260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2260, ctx.r30.u32);
	// bl 0x8246b910
	ctx.lr = 0x831CCBDC;
	sub_8246B910(ctx, base);
	// lwz r11,2260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2260);
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// stw r11,2284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2284, ctx.r11.u32);
loc_831CCBE8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CCBF0;
	sub_831CC540(ctx, base);
loc_831CCBF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CCB50"))) PPC_WEAK_FUNC(sub_831CCB50);
PPC_FUNC_IMPL(__imp__sub_831CCB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831CCB58;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// lwz r30,2256(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831ccbf0
	if (!cr6.eq) goto loc_831CCBF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc4f0
	ctx.lr = 0x831CCB7C;
	sub_831CC4F0(ctx, base);
	// lwz r30,2256(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2256);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x831ccbe8
	if (!cr6.eq) goto loc_831CCBE8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82416260
	ctx.lr = 0x831CCB90;
	sub_82416260(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831ccba8
	if (cr0.eq) goto loc_831CCBA8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cc9c0
	ctx.lr = 0x831CCBA0;
	sub_831CC9C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831ccbac
	goto loc_831CCBAC;
loc_831CCBA8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_831CCBAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cc6d8
	ctx.lr = 0x831CCBB4;
	sub_831CC6D8(ctx, base);
	// li r11,63
	ctx.r11.s64 = 63;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r4,r10,-360
	ctx.r4.s64 = ctx.r10.s64 + -360;
	// bl 0x831cc8a8
	ctx.lr = 0x831CCBCC;
	sub_831CC8A8(ctx, base);
	// lis r29,-31750
	ctx.r29.s64 = -2080768000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,2260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2260, ctx.r30.u32);
	// bl 0x8246b910
	ctx.lr = 0x831CCBDC;
	sub_8246B910(ctx, base);
	// lwz r11,2260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2260);
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// stw r11,2284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2284, ctx.r11.u32);
loc_831CCBE8:
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CCBF0;
	sub_831CC540(ctx, base);
loc_831CCBF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CCBFC"))) PPC_WEAK_FUNC(sub_831CCBFC);
PPC_FUNC_IMPL(__imp__sub_831CCBFC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x831cc540
	ctx.lr = 0x831CCC14;
	sub_831CC540(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCC24"))) PPC_WEAK_FUNC(sub_831CCC24);
PPC_FUNC_IMPL(__imp__sub_831CCC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCC28"))) PPC_WEAK_FUNC(sub_831CCC28);
PPC_FUNC_IMPL(__imp__sub_831CCC28) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-280
	ctx.r11.s64 = ctx.r11.s64 + -280;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x831ccc54
	if (cr0.eq) goto loc_831CCC54;
	// bl 0x82416268
	ctx.lr = 0x831CCC54;
	sub_82416268(ctx, base);
loc_831CCC54:
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

__attribute__((alias("__imp__sub_831CCC6C"))) PPC_WEAK_FUNC(sub_831CCC6C);
PPC_FUNC_IMPL(__imp__sub_831CCC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCC70"))) PPC_WEAK_FUNC(sub_831CCC70);
PPC_FUNC_IMPL(__imp__sub_831CCC70) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831CCCA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bne cr6,0x831cccc4
	if (!cr6.eq) goto loc_831CCCC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831cccc8
	if (cr6.eq) goto loc_831CCCC8;
loc_831CCCC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CCCC8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_831CCCE0"))) PPC_WEAK_FUNC(sub_831CCCE0);
PPC_FUNC_IMPL(__imp__sub_831CCCE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// bne cr6,0x831cccfc
	if (!cr6.eq) goto loc_831CCCFC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x831ccd00
	if (cr6.eq) goto loc_831CCD00;
loc_831CCCFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_831CCD00:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCD08"))) PPC_WEAK_FUNC(sub_831CCD08);
PPC_FUNC_IMPL(__imp__sub_831CCD08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCD10"))) PPC_WEAK_FUNC(sub_831CCD10);
PPC_FUNC_IMPL(__imp__sub_831CCD10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCD18"))) PPC_WEAK_FUNC(sub_831CCD18);
PPC_FUNC_IMPL(__imp__sub_831CCD18) {
	PPC_FUNC_PROLOGUE();
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCD24"))) PPC_WEAK_FUNC(sub_831CCD24);
PPC_FUNC_IMPL(__imp__sub_831CCD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCD28"))) PPC_WEAK_FUNC(sub_831CCD28);
PPC_FUNC_IMPL(__imp__sub_831CCD28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,-96
	ctx.r3.s64 = ctx.r11.s64 + -96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CCD34"))) PPC_WEAK_FUNC(sub_831CCD34);
PPC_FUNC_IMPL(__imp__sub_831CCD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCD38"))) PPC_WEAK_FUNC(sub_831CCD38);
PPC_FUNC_IMPL(__imp__sub_831CCD38) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831d2f30
	ctx.lr = 0x831CCD54;
	sub_831D2F30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82475d40
	ctx.lr = 0x831CCD60;
	sub_82475D40(ctx, base);
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

__attribute__((alias("__imp__sub_831CCD78"))) PPC_WEAK_FUNC(sub_831CCD78);
PPC_FUNC_IMPL(__imp__sub_831CCD78) {
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
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x831ccda0
	if (!cr6.eq) goto loc_831CCDA0;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// b 0x831ccdac
	goto loc_831CCDAC;
loc_831CCDA0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x831d2f30
	ctx.lr = 0x831CCDA8;
	sub_831D2F30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_831CCDAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82475d40
	ctx.lr = 0x831CCDB4;
	sub_82475D40(ctx, base);
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

__attribute__((alias("__imp__sub_831CCDCC"))) PPC_WEAK_FUNC(sub_831CCDCC);
PPC_FUNC_IMPL(__imp__sub_831CCDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCDD0"))) PPC_WEAK_FUNC(sub_831CCDD0);
PPC_FUNC_IMPL(__imp__sub_831CCDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831CCDD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x831cce04
	goto loc_831CCE04;
loc_831CCDE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831CCE00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_831CCE04:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831ccde8
	if (!cr6.eq) goto loc_831CCDE8;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cce2c
	if (cr6.eq) goto loc_831CCE2C;
loc_831CCE18:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x831CCE20;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831cce18
	if (!cr6.eq) goto loc_831CCE18;
loc_831CCE2C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831cce54
	if (cr6.eq) goto loc_831CCE54;
loc_831CCE40:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x831CCE48;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x831cce40
	if (!cr6.eq) goto loc_831CCE40;
loc_831CCE54:
	// stw r29,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CCE60"))) PPC_WEAK_FUNC(sub_831CCE60);
PPC_FUNC_IMPL(__imp__sub_831CCE60) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cc4f0
	ctx.lr = 0x831CCE80;
	sub_831CC4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// addi r11,r11,2340
	ctx.r11.s64 = ctx.r11.s64 + 2340;
loc_831CCE90:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,-40
	ctx.r9.s64 = ctx.r11.s64 + -40;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831ccec4
	if (cr6.eq) goto loc_831CCEC4;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x831ccec4
	if (cr6.eq) goto loc_831CCEC4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x831cce90
	if (cr6.lt) goto loc_831CCE90;
loc_831CCEC4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,-40
	ctx.r9.s64 = ctx.r11.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r31.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x831cc540
	ctx.lr = 0x831CCEEC;
	sub_831CC540(ctx, base);
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

__attribute__((alias("__imp__sub_831CCF00"))) PPC_WEAK_FUNC(sub_831CCF00);
PPC_FUNC_IMPL(__imp__sub_831CCF00) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x831ccf40
	if (!cr6.gt) goto loc_831CCF40;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r10,2340
	ctx.r10.s64 = ctx.r10.s64 + 2340;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// bgt 0x831ccf5c
	if (cr0.gt) goto loc_831CCF5C;
loc_831CCF40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ccdd0
	ctx.lr = 0x831CCF48;
	sub_831CCDD0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ccf5c
	if (cr6.eq) goto loc_831CCF5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8246bea0
	ctx.lr = 0x831CCF5C;
	sub_8246BEA0(ctx, base);
loc_831CCF5C:
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

__attribute__((alias("__imp__sub_831CCF70"))) PPC_WEAK_FUNC(sub_831CCF70);
PPC_FUNC_IMPL(__imp__sub_831CCF70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831d34e0
	ctx.lr = 0x831CCF88;
	sub_831D34E0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831ccfa0
	if (cr0.eq) goto loc_831CCFA0;
	// bl 0x831d47d0
	ctx.lr = 0x831CCFA0;
	sub_831D47D0(ctx, base);
loc_831CCFA0:
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

__attribute__((alias("__imp__sub_831CCFB4"))) PPC_WEAK_FUNC(sub_831CCFB4);
PPC_FUNC_IMPL(__imp__sub_831CCFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCFB8"))) PPC_WEAK_FUNC(sub_831CCFB8);
PPC_FUNC_IMPL(__imp__sub_831CCFB8) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82416260
	ctx.lr = 0x831CCFD4;
	sub_82416260(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x831cd9f8
	ctx.lr = 0x831CCFDC;
	sub_831CD9F8(ctx, base);
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

__attribute__((alias("__imp__sub_831CCFF4"))) PPC_WEAK_FUNC(sub_831CCFF4);
PPC_FUNC_IMPL(__imp__sub_831CCFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CCFF8"))) PPC_WEAK_FUNC(sub_831CCFF8);
PPC_FUNC_IMPL(__imp__sub_831CCFF8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823fc7c0
	ctx.lr = 0x831CD014;
	sub_823FC7C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x831CD01C;
	sub_82416268(ctx, base);
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

__attribute__((alias("__imp__sub_831CD030"))) PPC_WEAK_FUNC(sub_831CD030);
PPC_FUNC_IMPL(__imp__sub_831CD030) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831cda00
	sub_831CDA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD038"))) PPC_WEAK_FUNC(sub_831CD038);
PPC_FUNC_IMPL(__imp__sub_831CD038) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x831cda08
	sub_831CDA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD040"))) PPC_WEAK_FUNC(sub_831CD040);
PPC_FUNC_IMPL(__imp__sub_831CD040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831CD048;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm. r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r27,r4,0,29,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// rlwinm r7,r4,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// beq 0x831cd068
	if (cr0.eq) goto loc_831CD068;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
loc_831CD068:
	// rlwinm. r11,r4,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831cd074
	if (cr0.eq) goto loc_831CD074;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
loc_831CD074:
	// rlwinm r8,r4,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// rlwinm r8,r8,0,26,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,-24
	ctx.r9.s64 = ctx.r9.s64 + -24;
loc_831CD08C:
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x831cd0a8
	if (cr6.eq) goto loc_831CD0A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831cd08c
	if (!cr6.eq) goto loc_831CD08C;
loc_831CD0A8:
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831cd0c0
	if (!cr6.eq) goto loc_831CD0C0;
loc_831CD0B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cd140
	goto loc_831CD140;
loc_831CD0C0:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r31,r11,-120
	ctx.r31.s64 = ctx.r11.s64 + -120;
	// beq cr6,0x831cd0fc
	if (cr6.eq) goto loc_831CD0FC;
	// andi. r11,r8,10
	ctx.r11.u64 = ctx.r8.u64 & 10;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x831cd0fc
	if (cr0.eq) goto loc_831CD0FC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d7758
	ctx.lr = 0x831CD0EC;
	sub_831D7758(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cd0fc
	if (cr0.eq) goto loc_831CD0FC;
loc_831CD0F4:
	// bl 0x831d0920
	ctx.lr = 0x831CD0F8;
	sub_831D0920(ctx, base);
	// b 0x831cd0b8
	goto loc_831CD0B8;
loc_831CD0FC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831d7758
	ctx.lr = 0x831CD10C;
	sub_831D7758(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831cd0b8
	if (cr0.eq) goto loc_831CD0B8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x831cd13c
	if (cr6.eq) goto loc_831CD13C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d7358
	ctx.lr = 0x831CD12C;
	sub_831D7358(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831cd13c
	if (cr0.eq) goto loc_831CD13C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831cd0f4
	goto loc_831CD0F4;
loc_831CD13C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_831CD140:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD148"))) PPC_WEAK_FUNC(sub_831CD148);
PPC_FUNC_IMPL(__imp__sub_831CD148) {
	PPC_FUNC_PROLOGUE();
	// b 0x831cd040
	sub_831CD040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD14C"))) PPC_WEAK_FUNC(sub_831CD14C);
PPC_FUNC_IMPL(__imp__sub_831CD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD150"))) PPC_WEAK_FUNC(sub_831CD150);
PPC_FUNC_IMPL(__imp__sub_831CD150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// addi r11,r11,2448
	ctx.r11.s64 = ctx.r11.s64 + 2448;
	// lwz r10,2528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2528);
	// stw r11,2532(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2532, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cd184
	if (cr6.eq) goto loc_831CD184;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,2532(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2532);
loc_831CD184:
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r10,2536(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2536);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cd1a8
	if (cr6.eq) goto loc_831CD1A8;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// lwz r11,2532(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2532);
loc_831CD1A8:
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lwz r10,2540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2540);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD1CC"))) PPC_WEAK_FUNC(sub_831CD1CC);
PPC_FUNC_IMPL(__imp__sub_831CD1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD1D0"))) PPC_WEAK_FUNC(sub_831CD1D0);
PPC_FUNC_IMPL(__imp__sub_831CD1D0) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD1D8"))) PPC_WEAK_FUNC(sub_831CD1D8);
PPC_FUNC_IMPL(__imp__sub_831CD1D8) {
	PPC_FUNC_PROLOGUE();
	// std r4,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD1E0"))) PPC_WEAK_FUNC(sub_831CD1E0);
PPC_FUNC_IMPL(__imp__sub_831CD1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// std r4,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r4.u64);
	// addi r11,r11,-11824
	ctx.r11.s64 = ctx.r11.s64 + -11824;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD1F4"))) PPC_WEAK_FUNC(sub_831CD1F4);
PPC_FUNC_IMPL(__imp__sub_831CD1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD1F8"))) PPC_WEAK_FUNC(sub_831CD1F8);
PPC_FUNC_IMPL(__imp__sub_831CD1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// std r4,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r4.u64);
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD20C"))) PPC_WEAK_FUNC(sub_831CD20C);
PPC_FUNC_IMPL(__imp__sub_831CD20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD210"))) PPC_WEAK_FUNC(sub_831CD210);
PPC_FUNC_IMPL(__imp__sub_831CD210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x831CD218;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831cd23c
	if (cr6.eq) goto loc_831CD23C;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
loc_831CD23C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_831CD240:
	// bl 0x83a1d5d8
	ctx.lr = 0x831CD244;
	sub_83A1D5D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x831cd25c
	if (!cr6.gt) goto loc_831CD25C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x831d9b18
	ctx.lr = 0x831CD258;
	sub_831D9B18(ctx, base);
	// b 0x831cd270
	goto loc_831CD270;
loc_831CD25C:
	// bl 0x831d34e0
	ctx.lr = 0x831CD260;
	sub_831D34E0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
loc_831CD270:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831cd280
	if (cr6.eq) goto loc_831CD280;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x831cd240
	goto loc_831CD240;
loc_831CD280:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831cd2a0
	if (cr6.eq) goto loc_831CD2A0;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831cd2a0
	if (cr6.eq) goto loc_831CD2A0;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x831cd2a4
	goto loc_831CD2A4;
loc_831CD2A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831CD2A4:
	// extsb r23,r11
	ctx.r23.s64 = ctx.r11.s8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// blt cr6,0x831cd44c
	if (cr6.lt) goto loc_831CD44C;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// beq cr6,0x831cd44c
	if (cr6.eq) goto loc_831CD44C;
	// cmpwi cr6,r28,36
	cr6.compare<int32_t>(ctx.r28.s32, 36, xer);
	// bgt cr6,0x831cd44c
	if (cr6.gt) goto loc_831CD44C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x831cd2f8
	if (!cr6.gt) goto loc_831CD2F8;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(ctx.r28.s32, 16, xer);
	// bne cr6,0x831cd334
	if (!cr6.eq) goto loc_831CD334;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x831cd334
	if (!cr6.eq) goto loc_831CD334;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x831cd330
	if (cr6.eq) goto loc_831CD330;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// bne cr6,0x831cd334
	if (!cr6.eq) goto loc_831CD334;
	// b 0x831cd330
	goto loc_831CD330;
loc_831CD2F8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831cd30c
	if (cr6.eq) goto loc_831CD30C;
	// li r28,10
	ctx.r28.s64 = 10;
	// b 0x831cd334
	goto loc_831CD334;
loc_831CD30C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x831cd32c
	if (cr6.eq) goto loc_831CD32C;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x831cd32c
	if (cr6.eq) goto loc_831CD32C;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x831cd334
	goto loc_831CD334;
loc_831CD32C:
	// li r28,16
	ctx.r28.s64 = 16;
loc_831CD330:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_831CD334:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x831cd344
	goto loc_831CD344;
loc_831CD340:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
loc_831CD344:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,48
	cr6.compare<int32_t>(ctx.r3.s32, 48, xer);
	// beq cr6,0x831cd340
	if (cr6.eq) goto loc_831CD340;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// bl 0x831d34c8
	ctx.lr = 0x831CD35C;
	sub_831D34C8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,36
	ctx.r30.s64 = ctx.r11.s64 + 36;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cf170
	ctx.lr = 0x831CD374;
	sub_831CF170(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cd3b8
	if (cr0.eq) goto loc_831CD3B8;
loc_831CD37C:
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// extsb r27,r10
	ctx.r27.s64 = ctx.r10.s8;
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// add r29,r11,r27
	ctx.r29.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x831d34c8
	ctx.lr = 0x831CD39C;
	sub_831D34C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831cf170
	ctx.lr = 0x831CD3AC;
	sub_831CF170(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831cd37c
	if (!cr0.eq) goto loc_831CD37C;
	// b 0x831cd3bc
	goto loc_831CD3BC;
loc_831CD3B8:
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_831CD3BC:
	// cmplw cr6,r24,r31
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, xer);
	// beq cr6,0x831cd44c
	if (cr6.eq) goto loc_831CD44C;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lbzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf. r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x831cd428
	if (cr0.lt) goto loc_831CD428;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x831cd404
	if (cr6.gt) goto loc_831CD404;
	// extsb r11,r27
	ctx.r11.s64 = ctx.r27.s8;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x831cd404
	if (cr6.lt) goto loc_831CD404;
	// divwu r11,r11,r28
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r28.u32);
	// twllei r28,0
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x831cd428
	if (cr6.eq) goto loc_831CD428;
loc_831CD404:
	// bl 0x831d3050
	ctx.lr = 0x831CD408;
	sub_831D3050(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831cd420
	if (cr6.eq) goto loc_831CD420;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
loc_831CD420:
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r23,43
	ctx.r23.s64 = 43;
loc_831CD428:
	// extsb r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x831cd438
	if (!cr6.eq) goto loc_831CD438;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_831CD438:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x831cd444
	if (cr6.eq) goto loc_831CD444;
	// stw r31,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r31.u32);
loc_831CD444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x831cd45c
	goto loc_831CD45C;
loc_831CD44C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x831cd458
	if (cr6.eq) goto loc_831CD458;
	// stw r22,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r22.u32);
loc_831CD458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831CD45C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD464"))) PPC_WEAK_FUNC(sub_831CD464);
PPC_FUNC_IMPL(__imp__sub_831CD464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD468"))) PPC_WEAK_FUNC(sub_831CD468);
PPC_FUNC_IMPL(__imp__sub_831CD468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831CD470;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831cd490
	if (!cr6.eq) goto loc_831CD490;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_831CD490:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x831d34e0
	ctx.lr = 0x831CD498;
	sub_831D34E0(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// b 0x831cd4a8
	goto loc_831CD4A8;
loc_831CD4A0:
	// bl 0x831d34e0
	ctx.lr = 0x831CD4A4;
	sub_831D34E0(ctx, base);
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
loc_831CD4A8:
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831cd4a0
	if (!cr0.eq) goto loc_831CD4A0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831cd4d8
	if (cr6.eq) goto loc_831CD4D8;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831cd4d8
	if (cr6.eq) goto loc_831CD4D8;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x831cd4dc
	goto loc_831CD4DC;
loc_831CD4D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831CD4DC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// bl 0x831cd210
	ctx.lr = 0x831CD4F4;
	sub_831CD210(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x831cd504
	if (!cr6.eq) goto loc_831CD504;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_831CD504:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x831cd520
	if (!cr6.eq) goto loc_831CD520;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831cd548
	if (!cr6.eq) goto loc_831CD548;
loc_831CD520:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// bne cr6,0x831cd534
	if (!cr6.eq) goto loc_831CD534;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// bgt cr6,0x831cd548
	if (cr6.gt) goto loc_831CD548;
loc_831CD534:
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x831cd588
	if (!cr6.eq) goto loc_831CD588;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x831cd57c
	if (!cr6.gt) goto loc_831CD57C;
loc_831CD548:
	// bl 0x831d3050
	ctx.lr = 0x831CD54C;
	sub_831D3050(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831cd564
	if (cr6.eq) goto loc_831CD564;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_831CD564:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831cd588
	if (cr6.eq) goto loc_831CD588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x831cd588
	goto loc_831CD588;
loc_831CD57C:
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x831cd588
	if (!cr6.eq) goto loc_831CD588;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_831CD588:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD590"))) PPC_WEAK_FUNC(sub_831CD590);
PPC_FUNC_IMPL(__imp__sub_831CD590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831CD598;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x831cd5b8
	if (!cr6.eq) goto loc_831CD5B8;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_831CD5B8:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x831d34e0
	ctx.lr = 0x831CD5C0;
	sub_831D34E0(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// b 0x831cd5d0
	goto loc_831CD5D0;
loc_831CD5C8:
	// bl 0x831d34e0
	ctx.lr = 0x831CD5CC;
	sub_831D34E0(ctx, base);
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
loc_831CD5D0:
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x831cd5c8
	if (!cr0.eq) goto loc_831CD5C8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831cd600
	if (cr6.eq) goto loc_831CD600;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831cd600
	if (cr6.eq) goto loc_831CD600;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x831cd604
	goto loc_831CD604;
loc_831CD600:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831CD604:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
	// bl 0x831cd6c0
	ctx.lr = 0x831CD61C;
	sub_831CD6C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x831cd62c
	if (!cr6.eq) goto loc_831CD62C;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_831CD62C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r30,r10,1
	ctx.r30.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// rldicr r31,r9,63,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x831cd650
	if (!cr6.eq) goto loc_831CD650;
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// bne cr6,0x831cd674
	if (!cr6.eq) goto loc_831CD674;
loc_831CD650:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// bne cr6,0x831cd664
	if (!cr6.eq) goto loc_831CD664;
	// cmpld cr6,r3,r30
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r30.u64, xer);
	// bgt cr6,0x831cd674
	if (cr6.gt) goto loc_831CD674;
loc_831CD664:
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x831cd6b4
	if (!cr6.eq) goto loc_831CD6B4;
	// cmpld cr6,r3,r31
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r31.u64, xer);
	// ble cr6,0x831cd6a8
	if (!cr6.gt) goto loc_831CD6A8;
loc_831CD674:
	// bl 0x831d3050
	ctx.lr = 0x831CD678;
	sub_831D3050(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831cd690
	if (cr6.eq) goto loc_831CD690;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_831CD690:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831cd6b4
	if (cr6.eq) goto loc_831CD6B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x831cd6b4
	goto loc_831CD6B4;
loc_831CD6A8:
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x831cd6b4
	if (!cr6.eq) goto loc_831CD6B4;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_831CD6B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD6BC"))) PPC_WEAK_FUNC(sub_831CD6BC);
PPC_FUNC_IMPL(__imp__sub_831CD6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD6C0"))) PPC_WEAK_FUNC(sub_831CD6C0);
PPC_FUNC_IMPL(__imp__sub_831CD6C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x831CD6C8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x831cd6ec
	if (cr6.eq) goto loc_831CD6EC;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
loc_831CD6EC:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_831CD6F0:
	// bl 0x83a1d5d8
	ctx.lr = 0x831CD6F4;
	sub_83A1D5D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x831cd70c
	if (!cr6.gt) goto loc_831CD70C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x831d9b18
	ctx.lr = 0x831CD708;
	sub_831D9B18(ctx, base);
	// b 0x831cd720
	goto loc_831CD720;
loc_831CD70C:
	// bl 0x831d34e0
	ctx.lr = 0x831CD710;
	sub_831D34E0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
loc_831CD720:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831cd730
	if (cr6.eq) goto loc_831CD730;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x831cd6f0
	goto loc_831CD6F0;
loc_831CD730:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x831cd750
	if (cr6.eq) goto loc_831CD750;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(ctx.r11.s32, 43, xer);
	// beq cr6,0x831cd750
	if (cr6.eq) goto loc_831CD750;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x831cd754
	goto loc_831CD754;
loc_831CD750:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_831CD754:
	// extsb r22,r11
	ctx.r22.s64 = ctx.r11.s8;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// blt cr6,0x831cd900
	if (cr6.lt) goto loc_831CD900;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// beq cr6,0x831cd900
	if (cr6.eq) goto loc_831CD900;
	// cmpwi cr6,r25,36
	cr6.compare<int32_t>(ctx.r25.s32, 36, xer);
	// bgt cr6,0x831cd900
	if (cr6.gt) goto loc_831CD900;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x831cd7a8
	if (!cr6.gt) goto loc_831CD7A8;
	// cmpwi cr6,r25,16
	cr6.compare<int32_t>(ctx.r25.s32, 16, xer);
	// bne cr6,0x831cd7e4
	if (!cr6.eq) goto loc_831CD7E4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bne cr6,0x831cd7e4
	if (!cr6.eq) goto loc_831CD7E4;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x831cd7e0
	if (cr6.eq) goto loc_831CD7E0;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// bne cr6,0x831cd7e4
	if (!cr6.eq) goto loc_831CD7E4;
	// b 0x831cd7e0
	goto loc_831CD7E0;
loc_831CD7A8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// beq cr6,0x831cd7bc
	if (cr6.eq) goto loc_831CD7BC;
	// li r25,10
	ctx.r25.s64 = 10;
	// b 0x831cd7e4
	goto loc_831CD7E4;
loc_831CD7BC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x831cd7dc
	if (cr6.eq) goto loc_831CD7DC;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x831cd7dc
	if (cr6.eq) goto loc_831CD7DC;
	// li r25,8
	ctx.r25.s64 = 8;
	// b 0x831cd7e4
	goto loc_831CD7E4;
loc_831CD7DC:
	// li r25,16
	ctx.r25.s64 = 16;
loc_831CD7E0:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_831CD7E4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// b 0x831cd7f4
	goto loc_831CD7F4;
loc_831CD7F0:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
loc_831CD7F4:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,48
	cr6.compare<int32_t>(ctx.r3.s32, 48, xer);
	// beq cr6,0x831cd7f0
	if (cr6.eq) goto loc_831CD7F0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// bl 0x831d34c8
	ctx.lr = 0x831CD810;
	sub_831D34C8(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,116
	ctx.r30.s64 = ctx.r11.s64 + 116;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cf170
	ctx.lr = 0x831CD828;
	sub_831CF170(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cd86c
	if (cr0.eq) goto loc_831CD86C;
	// extsw r26,r25
	ctx.r26.s64 = ctx.r25.s32;
loc_831CD834:
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mulld r11,r26,r29
	ctx.r11.s64 = ctx.r26.s64 * ctx.r29.s64;
	// extsb r28,r10
	ctx.r28.s64 = ctx.r10.s8;
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x831d34c8
	ctx.lr = 0x831CD854;
	sub_831D34C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x831cf170
	ctx.lr = 0x831CD864;
	sub_831CF170(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831cd834
	if (!cr0.eq) goto loc_831CD834;
loc_831CD86C:
	// cmplw cr6,r23,r31
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r31.u32, xer);
	// beq cr6,0x831cd900
	if (cr6.eq) goto loc_831CD900;
	// addi r11,r30,40
	ctx.r11.s64 = ctx.r30.s64 + 40;
	// lbzx r11,r25,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf. r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x831cd8dc
	if (cr0.lt) goto loc_831CD8DC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x831cd8b8
	if (cr6.gt) goto loc_831CD8B8;
	// extsb r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// cmpld cr6,r29,r11
	cr6.compare<uint64_t>(ctx.r29.u64, ctx.r11.u64, xer);
	// blt cr6,0x831cd8b8
	if (cr6.lt) goto loc_831CD8B8;
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// divdu r11,r11,r10
	ctx.r11.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// tdllei r10,0
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// beq cr6,0x831cd8dc
	if (cr6.eq) goto loc_831CD8DC;
loc_831CD8B8:
	// bl 0x831d3050
	ctx.lr = 0x831CD8BC;
	sub_831D3050(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x831cd8d4
	if (cr6.eq) goto loc_831CD8D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_831CD8D4:
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r22,43
	ctx.r22.s64 = 43;
loc_831CD8DC:
	// extsb r11,r22
	ctx.r11.s64 = ctx.r22.s8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// bne cr6,0x831cd8ec
	if (!cr6.eq) goto loc_831CD8EC;
	// neg r29,r29
	ctx.r29.s64 = -ctx.r29.s64;
loc_831CD8EC:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x831cd8f8
	if (cr6.eq) goto loc_831CD8F8;
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
loc_831CD8F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x831cd910
	goto loc_831CD910;
loc_831CD900:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x831cd90c
	if (cr6.eq) goto loc_831CD90C;
	// stw r21,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r21.u32);
loc_831CD90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831CD910:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD918"))) PPC_WEAK_FUNC(sub_831CD918);
PPC_FUNC_IMPL(__imp__sub_831CD918) {
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
	// bl 0x831cd940
	ctx.lr = 0x831CD928;
	sub_831CD940(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CD93C"))) PPC_WEAK_FUNC(sub_831CD93C);
PPC_FUNC_IMPL(__imp__sub_831CD93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD940"))) PPC_WEAK_FUNC(sub_831CD940);
PPC_FUNC_IMPL(__imp__sub_831CD940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831CD948;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831d3050
	ctx.lr = 0x831CD964;
	sub_831D3050(ctx, base);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x831d3050
	ctx.lr = 0x831CD96C;
	sub_831D3050(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x831d3650
	ctx.lr = 0x831CD984;
	sub_831D3650(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x831d3050
	ctx.lr = 0x831CD98C;
	sub_831D3050(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x831d3050
	ctx.lr = 0x831CD998;
	sub_831D3050(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// ble cr6,0x831cd9c0
	if (!cr6.gt) goto loc_831CD9C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfd f0,20040(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20040);
loc_831CD9B4:
	// fmul f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f0.f64;
	// bdnz 0x831cd9b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831CD9B4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
loc_831CD9C0:
	// bge cr6,0x831cd9dc
	if (!cr6.lt) goto loc_831CD9DC;
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,7416(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 7416);
loc_831CD9D4:
	// fmul f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f0.f64;
	// bdnz 0x831cd9d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831CD9D4;
loc_831CD9DC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD9EC"))) PPC_WEAK_FUNC(sub_831CD9EC);
PPC_FUNC_IMPL(__imp__sub_831CD9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD9F0"))) PPC_WEAK_FUNC(sub_831CD9F0);
PPC_FUNC_IMPL(__imp__sub_831CD9F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831cd940
	sub_831CD940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD9F4"))) PPC_WEAK_FUNC(sub_831CD9F4);
PPC_FUNC_IMPL(__imp__sub_831CD9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CD9F8"))) PPC_WEAK_FUNC(sub_831CD9F8);
PPC_FUNC_IMPL(__imp__sub_831CD9F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83d755dc
	__imp__RtlInitializeCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CD9FC"))) PPC_WEAK_FUNC(sub_831CD9FC);
PPC_FUNC_IMPL(__imp__sub_831CD9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CDA00"))) PPC_WEAK_FUNC(sub_831CDA00);
PPC_FUNC_IMPL(__imp__sub_831CDA00) {
	PPC_FUNC_PROLOGUE();
	// b 0x83d7554c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDA04"))) PPC_WEAK_FUNC(sub_831CDA04);
PPC_FUNC_IMPL(__imp__sub_831CDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CDA08"))) PPC_WEAK_FUNC(sub_831CDA08);
PPC_FUNC_IMPL(__imp__sub_831CDA08) {
	PPC_FUNC_PROLOGUE();
	// b 0x83d7553c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDA0C"))) PPC_WEAK_FUNC(sub_831CDA0C);
PPC_FUNC_IMPL(__imp__sub_831CDA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CDA10"))) PPC_WEAK_FUNC(sub_831CDA10);
PPC_FUNC_IMPL(__imp__sub_831CDA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r11,-72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cda24
	if (!cr6.eq) goto loc_831CDA24;
	// b 0x831cf1b0
	sub_831CF1B0(ctx, base);
	return;
loc_831CDA24:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-72(r10)
	PPC_STORE_U32(ctx.r10.u32 + -72, ctx.r11.u32);
	// addi r11,r9,2560
	ctx.r11.s64 = ctx.r9.s64 + 2560;
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDA40"))) PPC_WEAK_FUNC(sub_831CDA40);
PPC_FUNC_IMPL(__imp__sub_831CDA40) {
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
	// lis r31,-31772
	ctx.r31.s64 = -2082209792;
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bge cr6,0x831cda98
	if (!cr6.lt) goto loc_831CDA98;
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// addi r30,r10,2560
	ctx.r30.s64 = ctx.r10.s64 + 2560;
loc_831CDA6C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831cda90
	if (cr6.eq) goto loc_831CDA90;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831CDA8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
loc_831CDA90:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x831cda6c
	if (cr6.lt) goto loc_831CDA6C;
loc_831CDA98:
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

__attribute__((alias("__imp____savegprlr_14"))) PPC_WEAK_FUNC(__savegprlr_14);
PPC_FUNC_IMPL(__imp____savegprlr_14) {
	PPC_FUNC_PROLOGUE();
	// std r14,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.r14.u64);
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_15"))) PPC_WEAK_FUNC(__savegprlr_15);
PPC_FUNC_IMPL(__imp____savegprlr_15) {
	PPC_FUNC_PROLOGUE();
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_16"))) PPC_WEAK_FUNC(__savegprlr_16);
PPC_FUNC_IMPL(__imp____savegprlr_16) {
	PPC_FUNC_PROLOGUE();
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_17"))) PPC_WEAK_FUNC(__savegprlr_17);
PPC_FUNC_IMPL(__imp____savegprlr_17) {
	PPC_FUNC_PROLOGUE();
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_18"))) PPC_WEAK_FUNC(__savegprlr_18);
PPC_FUNC_IMPL(__imp____savegprlr_18) {
	PPC_FUNC_PROLOGUE();
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_19"))) PPC_WEAK_FUNC(__savegprlr_19);
PPC_FUNC_IMPL(__imp____savegprlr_19) {
	PPC_FUNC_PROLOGUE();
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_20"))) PPC_WEAK_FUNC(__savegprlr_20);
PPC_FUNC_IMPL(__imp____savegprlr_20) {
	PPC_FUNC_PROLOGUE();
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_21"))) PPC_WEAK_FUNC(__savegprlr_21);
PPC_FUNC_IMPL(__imp____savegprlr_21) {
	PPC_FUNC_PROLOGUE();
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_22"))) PPC_WEAK_FUNC(__savegprlr_22);
PPC_FUNC_IMPL(__imp____savegprlr_22) {
	PPC_FUNC_PROLOGUE();
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_23"))) PPC_WEAK_FUNC(__savegprlr_23);
PPC_FUNC_IMPL(__imp____savegprlr_23) {
	PPC_FUNC_PROLOGUE();
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_24"))) PPC_WEAK_FUNC(__savegprlr_24);
PPC_FUNC_IMPL(__imp____savegprlr_24) {
	PPC_FUNC_PROLOGUE();
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_25"))) PPC_WEAK_FUNC(__savegprlr_25);
PPC_FUNC_IMPL(__imp____savegprlr_25) {
	PPC_FUNC_PROLOGUE();
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_26"))) PPC_WEAK_FUNC(__savegprlr_26);
PPC_FUNC_IMPL(__imp____savegprlr_26) {
	PPC_FUNC_PROLOGUE();
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_27"))) PPC_WEAK_FUNC(__savegprlr_27);
PPC_FUNC_IMPL(__imp____savegprlr_27) {
	PPC_FUNC_PROLOGUE();
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_28"))) PPC_WEAK_FUNC(__savegprlr_28);
PPC_FUNC_IMPL(__imp____savegprlr_28) {
	PPC_FUNC_PROLOGUE();
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_29"))) PPC_WEAK_FUNC(__savegprlr_29);
PPC_FUNC_IMPL(__imp____savegprlr_29) {
	PPC_FUNC_PROLOGUE();
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_30"))) PPC_WEAK_FUNC(__savegprlr_30);
PPC_FUNC_IMPL(__imp____savegprlr_30) {
	PPC_FUNC_PROLOGUE();
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_31"))) PPC_WEAK_FUNC(__savegprlr_31);
PPC_FUNC_IMPL(__imp____savegprlr_31) {
	PPC_FUNC_PROLOGUE();
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_14"))) PPC_WEAK_FUNC(__restgprlr_14);
PPC_FUNC_IMPL(__imp____restgprlr_14) {
	PPC_FUNC_PROLOGUE();
	// ld r14,-152(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_15"))) PPC_WEAK_FUNC(__restgprlr_15);
PPC_FUNC_IMPL(__imp____restgprlr_15) {
	PPC_FUNC_PROLOGUE();
	// ld r15,-144(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_16"))) PPC_WEAK_FUNC(__restgprlr_16);
PPC_FUNC_IMPL(__imp____restgprlr_16) {
	PPC_FUNC_PROLOGUE();
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_17"))) PPC_WEAK_FUNC(__restgprlr_17);
PPC_FUNC_IMPL(__imp____restgprlr_17) {
	PPC_FUNC_PROLOGUE();
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_18"))) PPC_WEAK_FUNC(__restgprlr_18);
PPC_FUNC_IMPL(__imp____restgprlr_18) {
	PPC_FUNC_PROLOGUE();
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_19"))) PPC_WEAK_FUNC(__restgprlr_19);
PPC_FUNC_IMPL(__imp____restgprlr_19) {
	PPC_FUNC_PROLOGUE();
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_20"))) PPC_WEAK_FUNC(__restgprlr_20);
PPC_FUNC_IMPL(__imp____restgprlr_20) {
	PPC_FUNC_PROLOGUE();
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_21"))) PPC_WEAK_FUNC(__restgprlr_21);
PPC_FUNC_IMPL(__imp____restgprlr_21) {
	PPC_FUNC_PROLOGUE();
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_22"))) PPC_WEAK_FUNC(__restgprlr_22);
PPC_FUNC_IMPL(__imp____restgprlr_22) {
	PPC_FUNC_PROLOGUE();
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_23"))) PPC_WEAK_FUNC(__restgprlr_23);
PPC_FUNC_IMPL(__imp____restgprlr_23) {
	PPC_FUNC_PROLOGUE();
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_24"))) PPC_WEAK_FUNC(__restgprlr_24);
PPC_FUNC_IMPL(__imp____restgprlr_24) {
	PPC_FUNC_PROLOGUE();
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_25"))) PPC_WEAK_FUNC(__restgprlr_25);
PPC_FUNC_IMPL(__imp____restgprlr_25) {
	PPC_FUNC_PROLOGUE();
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_26"))) PPC_WEAK_FUNC(__restgprlr_26);
PPC_FUNC_IMPL(__imp____restgprlr_26) {
	PPC_FUNC_PROLOGUE();
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_27"))) PPC_WEAK_FUNC(__restgprlr_27);
PPC_FUNC_IMPL(__imp____restgprlr_27) {
	PPC_FUNC_PROLOGUE();
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_28"))) PPC_WEAK_FUNC(__restgprlr_28);
PPC_FUNC_IMPL(__imp____restgprlr_28) {
	PPC_FUNC_PROLOGUE();
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_29"))) PPC_WEAK_FUNC(__restgprlr_29);
PPC_FUNC_IMPL(__imp____restgprlr_29) {
	PPC_FUNC_PROLOGUE();
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_30"))) PPC_WEAK_FUNC(__restgprlr_30);
PPC_FUNC_IMPL(__imp____restgprlr_30) {
	PPC_FUNC_PROLOGUE();
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_31"))) PPC_WEAK_FUNC(__restgprlr_31);
PPC_FUNC_IMPL(__imp____restgprlr_31) {
	PPC_FUNC_PROLOGUE();
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDB54"))) PPC_WEAK_FUNC(sub_831CDB54);
PPC_FUNC_IMPL(__imp__sub_831CDB54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// mr r12,r5
	ctx.r12.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831CDB60"))) PPC_WEAK_FUNC(sub_831CDB60);
PPC_FUNC_IMPL(__imp__sub_831CDB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x831d9420
	ctx.lr = 0x831CDB78;
	sub_831D9420(ctx, base);
	// lis r10,-31738
	ctx.r10.s64 = -2079981568;
	// lis r9,-31738
	ctx.r9.s64 = -2079981568;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,24084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24084, ctx.r11.u32);
	// stw r11,24080(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24080, ctx.r11.u32);
	// bne 0x831cdb98
	if (!cr0.eq) goto loc_831CDB98;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x831cdba4
	goto loc_831CDBA4;
loc_831CDB98:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_831CDBA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDBB4"))) PPC_WEAK_FUNC(sub_831CDBB4);
PPC_FUNC_IMPL(__imp__sub_831CDBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CDBB8"))) PPC_WEAK_FUNC(sub_831CDBB8);
PPC_FUNC_IMPL(__imp__sub_831CDBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,9640(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 9640);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831CDBC8;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831cdd98
	ctx.lr = 0x831CDBD8;
	sub_831CDD98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-31738
	ctx.r24.s64 = -2079981568;
	// lis r25,-31738
	ctx.r25.s64 = -2079981568;
	// lwz r30,24080(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24080);
	// lwz r28,24084(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24084);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x831cdc84
	if (cr6.lt) goto loc_831CDC84;
	// subf r26,r28,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// blt cr6,0x831cdc84
	if (cr6.lt) goto loc_831CDC84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d9b38
	ctx.lr = 0x831CDC0C;
	sub_831D9B38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// bge cr6,0x831cdc70
	if (!cr6.lt) goto loc_831CDC70;
	// cmplwi cr6,r3,2048
	cr6.compare<uint32_t>(ctx.r3.u32, 2048, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x831cdc28
	if (cr6.lt) goto loc_831CDC28;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_831CDC28:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// blt cr6,0x831cdc44
	if (cr6.lt) goto loc_831CDC44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3198
	ctx.lr = 0x831CDC3C;
	sub_831D3198(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831cdc60
	if (!cr0.eq) goto loc_831CDC60;
loc_831CDC44:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// blt cr6,0x831cdc84
	if (cr6.lt) goto loc_831CDC84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3198
	ctx.lr = 0x831CDC58;
	sub_831D3198(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cdc84
	if (cr0.eq) goto loc_831CDC84;
loc_831CDC60:
	// srawi r11,r26,2
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,24084(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24084, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_831CDC70:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,24080(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24080, ctx.r11.u32);
	// b 0x831cdc8c
	goto loc_831CDC8C;
loc_831CDC84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_831CDC8C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x831cdca4
	ctx.lr = 0x831CDC98;
	sub_831CDCA4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDBC0"))) PPC_WEAK_FUNC(sub_831CDBC0);
PPC_FUNC_IMPL(__imp__sub_831CDBC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x831CDBC8;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831cdd98
	ctx.lr = 0x831CDBD8;
	sub_831CDD98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-31738
	ctx.r24.s64 = -2079981568;
	// lis r25,-31738
	ctx.r25.s64 = -2079981568;
	// lwz r30,24080(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24080);
	// lwz r28,24084(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24084);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x831cdc84
	if (cr6.lt) goto loc_831CDC84;
	// subf r26,r28,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// blt cr6,0x831cdc84
	if (cr6.lt) goto loc_831CDC84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d9b38
	ctx.lr = 0x831CDC0C;
	sub_831D9B38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, xer);
	// bge cr6,0x831cdc70
	if (!cr6.lt) goto loc_831CDC70;
	// cmplwi cr6,r3,2048
	cr6.compare<uint32_t>(ctx.r3.u32, 2048, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// blt cr6,0x831cdc28
	if (cr6.lt) goto loc_831CDC28;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_831CDC28:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// blt cr6,0x831cdc44
	if (cr6.lt) goto loc_831CDC44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3198
	ctx.lr = 0x831CDC3C;
	sub_831D3198(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831cdc60
	if (!cr0.eq) goto loc_831CDC60;
loc_831CDC44:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, xer);
	// blt cr6,0x831cdc84
	if (cr6.lt) goto loc_831CDC84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3198
	ctx.lr = 0x831CDC58;
	sub_831D3198(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831cdc84
	if (cr0.eq) goto loc_831CDC84;
loc_831CDC60:
	// srawi r11,r26,2
	xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,24084(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24084, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_831CDC70:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,24080(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24080, ctx.r11.u32);
	// b 0x831cdc8c
	goto loc_831CDC8C;
loc_831CDC84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_831CDC8C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x831cdca4
	ctx.lr = 0x831CDC98;
	sub_831CDCA4(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDCA4"))) PPC_WEAK_FUNC(sub_831CDCA4);
PPC_FUNC_IMPL(__imp__sub_831CDCA4) {
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
	// bl 0x831cdda0
	ctx.lr = 0x831CDCB4;
	sub_831CDDA0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDCC4"))) PPC_WEAK_FUNC(sub_831CDCC4);
PPC_FUNC_IMPL(__imp__sub_831CDCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CDCC8"))) PPC_WEAK_FUNC(sub_831CDCC8);
PPC_FUNC_IMPL(__imp__sub_831CDCC8) {
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
	// bl 0x831cdbc0
	ctx.lr = 0x831CDCD8;
	sub_831CDBC0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_831CDCF0"))) PPC_WEAK_FUNC(sub_831CDCF0);
PPC_FUNC_IMPL(__imp__sub_831CDCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// b 0x831cdd0c
	goto loc_831CDD0C;
loc_831CDD00:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_831CDD0C:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	cr0.compare<int32_t>(ctx.r0.s32, 0, xer);
	// bdnzf eq,0x831cdd00
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_831CDD00;
	// rlwimi r4,r4,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm. r0,r5,28,4,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	cr0.compare<int32_t>(ctx.r0.s32, 0, xer);
	// rlwimi r4,r4,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// beq+ 0x831cdd40
	if (cr0.eq) goto loc_831CDD40;
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
loc_831CDD28:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz+ 0x831cdd28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831CDD28;
loc_831CDD40:
	// rlwinm. r0,r5,30,30,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	cr0.compare<int32_t>(ctx.r0.s32, 0, xer);
	// beq- 0x831cdd6c
	if (cr0.eq) goto loc_831CDD6C;
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x831cdd6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831CDD6C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x831cdd6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_831CDD6C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_831CDD6C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(ctx.r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// bdzlr- 
	--ctr.u64;
	if (ctr.u32 == 0) return;
	// stb r4,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// bdzlr- 
	--ctr.u64;
	if (ctr.u32 == 0) return;
	// stb r4,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDD90"))) PPC_WEAK_FUNC(sub_831CDD90);
PPC_FUNC_IMPL(__imp__sub_831CDD90) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83d7564c
	__imp__KeBugCheck(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDD98"))) PPC_WEAK_FUNC(sub_831CDD98);
PPC_FUNC_IMPL(__imp__sub_831CDD98) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x831d9e80
	sub_831D9E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDDA0"))) PPC_WEAK_FUNC(sub_831CDDA0);
PPC_FUNC_IMPL(__imp__sub_831CDDA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x831d9c00
	sub_831D9C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDDA8"))) PPC_WEAK_FUNC(sub_831CDDA8);
PPC_FUNC_IMPL(__imp__sub_831CDDA8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9fc0
	ctx.lr = 0x831CDDBC;
	sub_831D9FC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831ceff0
	ctx.lr = 0x831CDDC4;
	sub_831CEFF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9fb0
	ctx.lr = 0x831CDDCC;
	sub_831D9FB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9f98
	ctx.lr = 0x831CDDD4;
	sub_831D9F98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDDE4"))) PPC_WEAK_FUNC(sub_831CDDE4);
PPC_FUNC_IMPL(__imp__sub_831CDDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CDDE8"))) PPC_WEAK_FUNC(sub_831CDDE8);
PPC_FUNC_IMPL(__imp__sub_831CDDE8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x831cde20
	goto loc_831CDE20;
loc_831CDE08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x831cde1c
	if (cr6.eq) goto loc_831CDE1C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831CDE1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831CDE1C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_831CDE20:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x831cde08
	if (cr6.lt) goto loc_831CDE08;
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

__attribute__((alias("__imp__sub_831CDE40"))) PPC_WEAK_FUNC(sub_831CDE40);
PPC_FUNC_IMPL(__imp__sub_831CDE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r30,21692(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 21692);
	// lwz r17,9664(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 9664);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831CDE50;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x831d9e80
	ctx.lr = 0x831CDE6C;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,2616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2616);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831cdf84
	if (cr6.eq) goto loc_831CDF84;
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// lwz r11,2612(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2612);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831cde98
	if (!cr6.eq) goto loc_831CDE98;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83d7564c
	ctx.lr = 0x831CDE98;
	__imp__KeBugCheck(ctx, base);
loc_831CDE98:
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2612(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2612, ctx.r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stb r24,2608(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2608, ctx.r24.u8);
	// bne cr6,0x831cdf70
	if (!cr6.eq) goto loc_831CDF70;
	// lis r25,-31738
	ctx.r25.s64 = -2079981568;
	// lwz r28,24084(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24084);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq 0x831cdf5c
	if (cr0.eq) goto loc_831CDF5C;
	// lis r27,-31738
	ctx.r27.s64 = -2079981568;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r30,24080(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24080);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_831CDEE0:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x831cdf5c
	if (cr6.lt) goto loc_831CDF5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cdf04
	if (!cr6.eq) goto loc_831CDF04;
loc_831CDEFC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831cdee0
	goto loc_831CDEE0;
loc_831CDF04:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x831cdf5c
	if (cr6.lt) goto loc_831CDF5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831CDF20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24084(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24084);
	// lwz r10,24080(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24080);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x831cdf38
	if (!cr6.eq) goto loc_831CDF38;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// beq cr6,0x831cdefc
	if (cr6.eq) goto loc_831CDEFC;
loc_831CDF38:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x831cdefc
	goto loc_831CDEFC;
loc_831CDF5C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r4,r11,2984
	ctx.r4.s64 = ctx.r11.s64 + 2984;
	// addi r3,r10,2972
	ctx.r3.s64 = ctx.r10.s64 + 2972;
	// bl 0x831cdde8
	ctx.lr = 0x831CDF70;
	sub_831CDDE8(ctx, base);
loc_831CDF70:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r4,r11,2992
	ctx.r4.s64 = ctx.r11.s64 + 2992;
	// addi r3,r10,2988
	ctx.r3.s64 = ctx.r10.s64 + 2988;
	// bl 0x831cdde8
	ctx.lr = 0x831CDF84;
	sub_831CDDE8(ctx, base);
loc_831CDF84:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x831cdfcc
	ctx.lr = 0x831CDF90;
	sub_831CDFCC(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831cdfa4
	if (!cr6.eq) goto loc_831CDFA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83d7564c
	ctx.lr = 0x831CDFA4;
	__imp__KeBugCheck(ctx, base);
loc_831CDFA4:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDE48"))) PPC_WEAK_FUNC(sub_831CDE48);
PPC_FUNC_IMPL(__imp__sub_831CDE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x831CDE50;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x831d9e80
	ctx.lr = 0x831CDE6C;
	sub_831D9E80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r11,2616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2616);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x831cdf84
	if (cr6.eq) goto loc_831CDF84;
	// lis r9,-31750
	ctx.r9.s64 = -2080768000;
	// lwz r11,2612(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2612);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x831cde98
	if (!cr6.eq) goto loc_831CDE98;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83d7564c
	ctx.lr = 0x831CDE98;
	__imp__KeBugCheck(ctx, base);
loc_831CDE98:
	// lis r8,-31750
	ctx.r8.s64 = -2080768000;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2612(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2612, ctx.r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stb r24,2608(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2608, ctx.r24.u8);
	// bne cr6,0x831cdf70
	if (!cr6.eq) goto loc_831CDF70;
	// lis r25,-31738
	ctx.r25.s64 = -2079981568;
	// lwz r28,24084(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24084);
	// stw r28,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r28.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq 0x831cdf5c
	if (cr0.eq) goto loc_831CDF5C;
	// lis r27,-31738
	ctx.r27.s64 = -2079981568;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r30,24080(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24080);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
loc_831CDEE0:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x831cdf5c
	if (cr6.lt) goto loc_831CDF5C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x831cdf04
	if (!cr6.eq) goto loc_831CDF04;
loc_831CDEFC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x831cdee0
	goto loc_831CDEE0;
loc_831CDF04:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x831cdf5c
	if (cr6.lt) goto loc_831CDF5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x831CDF20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24084(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24084);
	// lwz r10,24080(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24080);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x831cdf38
	if (!cr6.eq) goto loc_831CDF38;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// beq cr6,0x831cdefc
	if (cr6.eq) goto loc_831CDEFC;
loc_831CDF38:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x831cdefc
	goto loc_831CDEFC;
loc_831CDF5C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r4,r11,2984
	ctx.r4.s64 = ctx.r11.s64 + 2984;
	// addi r3,r10,2972
	ctx.r3.s64 = ctx.r10.s64 + 2972;
	// bl 0x831cdde8
	ctx.lr = 0x831CDF70;
	sub_831CDDE8(ctx, base);
loc_831CDF70:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r4,r11,2992
	ctx.r4.s64 = ctx.r11.s64 + 2992;
	// addi r3,r10,2988
	ctx.r3.s64 = ctx.r10.s64 + 2988;
	// bl 0x831cdde8
	ctx.lr = 0x831CDF84;
	sub_831CDDE8(ctx, base);
loc_831CDF84:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x831cdfcc
	ctx.lr = 0x831CDF90;
	sub_831CDFCC(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x831cdfa4
	if (!cr6.eq) goto loc_831CDFA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83d7564c
	ctx.lr = 0x831CDFA4;
	__imp__KeBugCheck(ctx, base);
loc_831CDFA4:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CDFAC"))) PPC_WEAK_FUNC(sub_831CDFAC);
PPC_FUNC_IMPL(__imp__sub_831CDFAC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,204(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// b 0x831cdfe4
	goto loc_831CDFE4;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_831CDFE4:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x831cdff4
	if (cr6.eq) goto loc_831CDFF4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x831d9c00
	ctx.lr = 0x831CDFF4;
	sub_831D9C00(ctx, base);
loc_831CDFF4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CDFCC"))) PPC_WEAK_FUNC(sub_831CDFCC);
PPC_FUNC_IMPL(__imp__sub_831CDFCC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r24,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r24.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x831cdff4
	if (cr6.eq) goto loc_831CDFF4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x831d9c00
	ctx.lr = 0x831CDFF4;
	sub_831D9C00(ctx, base);
loc_831CDFF4:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r24,-16(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE00C"))) PPC_WEAK_FUNC(sub_831CE00C);
PPC_FUNC_IMPL(__imp__sub_831CE00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE010"))) PPC_WEAK_FUNC(sub_831CE010);
PPC_FUNC_IMPL(__imp__sub_831CE010) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cde48
	sub_831CDE48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CE01C"))) PPC_WEAK_FUNC(sub_831CE01C);
PPC_FUNC_IMPL(__imp__sub_831CE01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE020"))) PPC_WEAK_FUNC(sub_831CE020);
PPC_FUNC_IMPL(__imp__sub_831CE020) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831cde48
	sub_831CDE48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CE02C"))) PPC_WEAK_FUNC(sub_831CE02C);
PPC_FUNC_IMPL(__imp__sub_831CE02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE030"))) PPC_WEAK_FUNC(sub_831CE030);
PPC_FUNC_IMPL(__imp__sub_831CE030) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831cde48
	sub_831CDE48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CE03C"))) PPC_WEAK_FUNC(sub_831CE03C);
PPC_FUNC_IMPL(__imp__sub_831CE03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE040"))) PPC_WEAK_FUNC(sub_831CE040);
PPC_FUNC_IMPL(__imp__sub_831CE040) {
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
	// bl 0x831da090
	ctx.lr = 0x831CE058;
	sub_831DA090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831da060
	ctx.lr = 0x831CE060;
	sub_831DA060(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831cde48
	ctx.lr = 0x831CE06C;
	sub_831CDE48(ctx, base);
}

__attribute__((alias("__imp__sub_831CE06C"))) PPC_WEAK_FUNC(sub_831CE06C);
PPC_FUNC_IMPL(__imp__sub_831CE06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE070"))) PPC_WEAK_FUNC(sub_831CE070);
PPC_FUNC_IMPL(__imp__sub_831CE070) {
	PPC_FUNC_PROLOGUE();
	// b 0x83d7565c
	__imp__KeTlsGetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CE074"))) PPC_WEAK_FUNC(sub_831CE074);
PPC_FUNC_IMPL(__imp__sub_831CE074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE078"))) PPC_WEAK_FUNC(sub_831CE078);
PPC_FUNC_IMPL(__imp__sub_831CE078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE084"))) PPC_WEAK_FUNC(sub_831CE084);
PPC_FUNC_IMPL(__imp__sub_831CE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE088"))) PPC_WEAK_FUNC(sub_831CE088);
PPC_FUNC_IMPL(__imp__sub_831CE088) {
	PPC_FUNC_PROLOGUE();
	// b 0x83d7566c
	__imp__KeTlsSetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CE08C"))) PPC_WEAK_FUNC(sub_831CE08C);
PPC_FUNC_IMPL(__imp__sub_831CE08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE090"))) PPC_WEAK_FUNC(sub_831CE090);
PPC_FUNC_IMPL(__imp__sub_831CE090) {
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
	// lis r31,-31772
	ctx.r31.s64 = -2082209792;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x831ce0bc
	if (cr6.eq) goto loc_831CE0BC;
	// bl 0x83d7567c
	ctx.lr = 0x831CE0B4;
	__imp__KeTlsFree(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_831CE0BC:
	// bl 0x831d9b90
	ctx.lr = 0x831CE0C0;
	sub_831D9B90(ctx, base);
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

__attribute__((alias("__imp__sub_831CE0D4"))) PPC_WEAK_FUNC(sub_831CE0D4);
PPC_FUNC_IMPL(__imp__sub_831CE0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE0D8"))) PPC_WEAK_FUNC(sub_831CE0D8);
PPC_FUNC_IMPL(__imp__sub_831CE0D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE0F8"))) PPC_WEAK_FUNC(sub_831CE0F8);
PPC_FUNC_IMPL(__imp__sub_831CE0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831CE100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82417100
	ctx.lr = 0x831CE108;
	sub_82417100(ctx, base);
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83d7565c
	ctx.lr = 0x831CE118;
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831ce1a8
	if (!cr0.eq) goto loc_831CE1A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x83d7566c
	ctx.lr = 0x831CE12C;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ce1b8
	if (cr0.eq) goto loc_831CE1B8;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831d9420
	ctx.lr = 0x831CE140;
	sub_831D9420(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// beq 0x831ce19c
	if (cr0.eq) goto loc_831CE19C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83d7566c
	ctx.lr = 0x831CE154;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ce18c
	if (cr0.eq) goto loc_831CE18C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x832d22f8
	ctx.lr = 0x831CE17C;
	sub_832D22F8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x831ce1b8
	goto loc_831CE1B8;
loc_831CE18C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cf100
	ctx.lr = 0x831CE194;
	sub_831CF100(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x831ce1b8
	goto loc_831CE1B8;
loc_831CE19C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83d7566c
	ctx.lr = 0x831CE1A4;
	__imp__KeTlsSetValue(ctx, base);
	// b 0x831ce1b8
	goto loc_831CE1B8;
loc_831CE1A8:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_831CE1B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8241a530
	ctx.lr = 0x831CE1C0;
	sub_8241A530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CE1CC"))) PPC_WEAK_FUNC(sub_831CE1CC);
PPC_FUNC_IMPL(__imp__sub_831CE1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE1D0"))) PPC_WEAK_FUNC(sub_831CE1D0);
PPC_FUNC_IMPL(__imp__sub_831CE1D0) {
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
	// bl 0x831ce0f8
	ctx.lr = 0x831CE1E4;
	sub_831CE0F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x831ce1f4
	if (!cr0.eq) goto loc_831CE1F4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x831ce040
	ctx.lr = 0x831CE1F4;
	sub_831CE040(ctx, base);
loc_831CE1F4:
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

__attribute__((alias("__imp__sub_831CE20C"))) PPC_WEAK_FUNC(sub_831CE20C);
PPC_FUNC_IMPL(__imp__sub_831CE20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE210"))) PPC_WEAK_FUNC(sub_831CE210);
PPC_FUNC_IMPL(__imp__sub_831CE210) {
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
	// beq cr6,0x831ce2bc
	if (cr6.eq) goto loc_831CE2BC;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ce23c
	if (cr6.eq) goto loc_831CE23C;
	// bl 0x831cf100
	ctx.lr = 0x831CE23C;
	sub_831CF100(ctx, base);
loc_831CE23C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ce24c
	if (cr6.eq) goto loc_831CE24C;
	// bl 0x831cf100
	ctx.lr = 0x831CE24C;
	sub_831CF100(ctx, base);
loc_831CE24C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ce25c
	if (cr6.eq) goto loc_831CE25C;
	// bl 0x831cf100
	ctx.lr = 0x831CE25C;
	sub_831CF100(ctx, base);
loc_831CE25C:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ce26c
	if (cr6.eq) goto loc_831CE26C;
	// bl 0x831cf100
	ctx.lr = 0x831CE26C;
	sub_831CF100(ctx, base);
loc_831CE26C:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ce27c
	if (cr6.eq) goto loc_831CE27C;
	// bl 0x831cf100
	ctx.lr = 0x831CE27C;
	sub_831CF100(ctx, base);
loc_831CE27C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ce28c
	if (cr6.eq) goto loc_831CE28C;
	// bl 0x831cf100
	ctx.lr = 0x831CE28C;
	sub_831CF100(ctx, base);
loc_831CE28C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831ce29c
	if (cr6.eq) goto loc_831CE29C;
	// bl 0x831cf100
	ctx.lr = 0x831CE29C;
	sub_831CF100(ctx, base);
loc_831CE29C:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x831ce2b4
	if (cr6.eq) goto loc_831CE2B4;
	// bl 0x831cf100
	ctx.lr = 0x831CE2B4;
	sub_831CF100(ctx, base);
loc_831CE2B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cf100
	ctx.lr = 0x831CE2BC;
	sub_831CF100(ctx, base);
loc_831CE2BC:
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

__attribute__((alias("__imp__sub_831CE2D0"))) PPC_WEAK_FUNC(sub_831CE2D0);
PPC_FUNC_IMPL(__imp__sub_831CE2D0) {
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
	// lis r30,-31772
	ctx.r30.s64 = -2082209792;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x831ce324
	if (cr6.eq) goto loc_831CE324;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831ce310
	if (!cr6.eq) goto loc_831CE310;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83d7565c
	ctx.lr = 0x831CE308;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_831CE310:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83d7566c
	ctx.lr = 0x831CE31C;
	__imp__KeTlsSetValue(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce210
	ctx.lr = 0x831CE324;
	sub_831CE210(ctx, base);
loc_831CE324:
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

__attribute__((alias("__imp__sub_831CE33C"))) PPC_WEAK_FUNC(sub_831CE33C);
PPC_FUNC_IMPL(__imp__sub_831CE33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE340"))) PPC_WEAK_FUNC(sub_831CE340);
PPC_FUNC_IMPL(__imp__sub_831CE340) {
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
	// bl 0x831cdda8
	ctx.lr = 0x831CE358;
	sub_831CDDA8(ctx, base);
	// bl 0x831d9cb8
	ctx.lr = 0x831CE35C;
	sub_831D9CB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ce3f8
	if (cr0.eq) goto loc_831CE3F8;
	// bl 0x83d7568c
	ctx.lr = 0x831CE368;
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// beq cr6,0x831ce3f8
	if (cr6.eq) goto loc_831CE3F8;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831d9420
	ctx.lr = 0x831CE388;
	sub_831D9420(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x831ce3f8
	if (cr0.eq) goto loc_831CE3F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83d7566c
	ctx.lr = 0x831CE39C;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831ce3f8
	if (cr0.eq) goto loc_831CE3F8;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5464
	ctx.r11.s64 = ctx.r11.s64 + 5464;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x832d22f8
	ctx.lr = 0x831CE3C4;
	sub_832D22F8(ctx, base);
	// lis r10,-31750
	ctx.r10.s64 = -2080768000;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,2620
	ctx.r10.s64 = ctx.r10.s64 + 2620;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-23872
	ctx.r11.s64 = ctx.r11.s64 + -23872;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x82416f60
	ctx.lr = 0x831CE3F0;
	sub_82416F60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831ce400
	goto loc_831CE400;
loc_831CE3F8:
	// bl 0x831ce090
	ctx.lr = 0x831CE3FC;
	sub_831CE090(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831CE400:
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

__attribute__((alias("__imp__sub_831CE418"))) PPC_WEAK_FUNC(sub_831CE418);
PPC_FUNC_IMPL(__imp__sub_831CE418) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE41C"))) PPC_WEAK_FUNC(sub_831CE41C);
PPC_FUNC_IMPL(__imp__sub_831CE41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE420"))) PPC_WEAK_FUNC(sub_831CE420);
PPC_FUNC_IMPL(__imp__sub_831CE420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// cmpw r3,r4
	cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// beqlr- 
	if (cr0.eq) return;
	// bge+ 0x831ce430
	if (!cr0.lt) goto loc_831CE430;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
loc_831CE430:
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// b 0x831ce458
	goto loc_831CE458;
loc_831CE444:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_831CE458:
	// andi. r0,r3,3
	ctx.r0.u64 = ctx.r3.u64 & 3;
	cr0.compare<int32_t>(ctx.r0.s32, 0, xer);
	// bdnzf eq,0x831ce444
	--ctr.u64;
	if (ctr.u32 != 0 && !cr0.eq) goto loc_831CE444;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(ctx.r0.s32, 0, xer);
	// beq- 0x831ce488
	if (cr0.eq) goto loc_831CE488;
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	cr0.compare<int32_t>(ctx.r0.s32, 0, xer);
	// bne- 0x831ce4ac
	if (!cr0.eq) goto loc_831CE4AC;
loc_831CE474:
	// lwz r7,-4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x831ce474
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831CE474;
loc_831CE488:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	cr0.compare<int32_t>(ctx.r0.s32, 0, xer);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (cr0.eq) return;
loc_831CE494:
	// lbz r0,-1(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x831ce494
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831CE494;
	// blr 
	return;
loc_831CE4AC:
	// lbz r7,-1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x831ce4ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831CE4AC;
	// b 0x831ce488
	goto loc_831CE488;
}

__attribute__((alias("__imp__sub_831CE4DC"))) PPC_WEAK_FUNC(sub_831CE4DC);
PPC_FUNC_IMPL(__imp__sub_831CE4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE4E0"))) PPC_WEAK_FUNC(sub_831CE4E0);
PPC_FUNC_IMPL(__imp__sub_831CE4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// stfd f2,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(ctx.r11.u32, 32752, xer);
	// bne cr6,0x831ce504
	if (!cr6.eq) goto loc_831CE504;
loc_831CE4F8:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfd f1,2104(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 2104);
	// blr 
	return;
loc_831CE504:
	// lhz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(ctx.r11.u32, 32752, xer);
	// bne cr6,0x831ce548
	if (!cr6.eq) goto loc_831CE548;
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r9,32752
	ctx.r9.s64 = 2146435072;
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x831ce530
	if (!cr6.eq) goto loc_831CE530;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_831CE530:
	// lis r9,-16
	ctx.r9.s64 = -1048576;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x831ce4f8
	if (!cr6.eq) goto loc_831CE4F8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x831ce4f8
	goto loc_831CE4F8;
loc_831CE548:
	// ld r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// ld r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// clrldi r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// clrldi r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 & 0x7FFFFFFFFFFFFFFF;
	// cmpld cr6,r8,r11
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// rldicl r8,r10,12,53
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 12) & 0x7FF;
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r5,r9,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0x8000000000000000;
	// rldicl r10,r10,11,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FFFFFFFFFFFFFFF;
	// rldicr r7,r11,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// rldicl r11,r9,12,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 12) & 0x7FF;
	// rldicr r10,r10,0,52
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFF800;
	// cmpdi cr6,r8,0
	cr6.compare<int64_t>(ctx.r8.s64, 0, xer);
	// bne cr6,0x831ce5a4
	if (!cr6.eq) goto loc_831CE5A4;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x831ce4f8
	if (cr6.eq) goto loc_831CE4F8;
	// cntlzd r8,r10
	ctx.r8.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// sld r6,r10,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r8.u8 & 0x7F));
	// subfic r8,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r8.s64;
	// b 0x831ce5a8
	goto loc_831CE5A8;
loc_831CE5A4:
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
loc_831CE5A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// rldimi r10,r9,11,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 11) & 0x7FFFFFFFFFFFF800) | (ctx.r10.u64 & 0x80000000000007FF);
	// bne cr6,0x831ce5d4
	if (!cr6.eq) goto loc_831CE5D4;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cntlzd r11,r10
	ctx.r11.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// sld r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// subfic r11,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r11.s64;
	// b 0x831ce5d8
	goto loc_831CE5D8;
loc_831CE5D4:
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
loc_831CE5D8:
	// rldicl r7,r6,63,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// b 0x831ce604
	goto loc_831CE604;
loc_831CE5E0:
	// cmpld cr6,r10,r6
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, xer);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// bge cr6,0x831ce5f0
	if (!cr6.lt) goto loc_831CE5F0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_831CE5F0:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzd r9,r10
	ctx.r9.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
loc_831CE604:
	// cmpd cr6,r11,r8
	cr6.compare<int64_t>(ctx.r11.s64, ctx.r8.s64, xer);
	// bgt cr6,0x831ce5e0
	if (cr6.gt) goto loc_831CE5E0;
	// bne cr6,0x831ce62c
	if (!cr6.eq) goto loc_831CE62C;
	// cmpld cr6,r10,r6
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r6.u64, xer);
	// blt cr6,0x831ce62c
	if (cr6.lt) goto loc_831CE62C;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// cntlzd r9,r10
	ctx.r9.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_831CE62C:
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x831ce65c
	if (cr6.eq) goto loc_831CE65C;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bgt cr6,0x831ce648
	if (cr6.gt) goto loc_831CE648;
	// subfic r9,r11,1
	xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
loc_831CE648:
	// rldicr r11,r11,52,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// rldicl r10,r10,53,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 53) & 0xFFFFFFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
loc_831CE65C:
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE664"))) PPC_WEAK_FUNC(sub_831CE664);
PPC_FUNC_IMPL(__imp__sub_831CE664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE668"))) PPC_WEAK_FUNC(sub_831CE668);
PPC_FUNC_IMPL(__imp__sub_831CE668) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lis r11,-31970
	ctx.r11.s64 = -2095185920;
	// addi r30,r8,2136
	ctx.r30.s64 = ctx.r8.s64 + 2136;
	// addi r11,r11,-19960
	ctx.r11.s64 = ctx.r11.s64 + -19960;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r11,2136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2136, ctx.r11.u32);
	// lis r31,-31970
	ctx.r31.s64 = -2095185920;
	// addi r10,r10,-22872
	ctx.r10.s64 = ctx.r10.s64 + -22872;
	// addi r9,r9,-22888
	ctx.r9.s64 = ctx.r9.s64 + -22888;
	// addi r11,r31,-22880
	ctx.r11.s64 = ctx.r31.s64 + -22880;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lis r3,-31970
	ctx.r3.s64 = -2095185920;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lis r4,-31970
	ctx.r4.s64 = -2095185920;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lis r5,-31970
	ctx.r5.s64 = -2095185920;
	// addi r10,r3,-23016
	ctx.r10.s64 = ctx.r3.s64 + -23016;
	// addi r9,r4,-19960
	ctx.r9.s64 = ctx.r4.s64 + -19960;
	// addi r11,r5,-20040
	ctx.r11.s64 = ctx.r5.s64 + -20040;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lis r6,-31970
	ctx.r6.s64 = -2095185920;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lis r7,-31970
	ctx.r7.s64 = -2095185920;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// addi r10,r6,-22984
	ctx.r10.s64 = ctx.r6.s64 + -22984;
	// addi r9,r7,-23192
	ctx.r9.s64 = ctx.r7.s64 + -23192;
	// addi r11,r8,-23352
	ctx.r11.s64 = ctx.r8.s64 + -23352;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE6FC"))) PPC_WEAK_FUNC(sub_831CE6FC);
PPC_FUNC_IMPL(__imp__sub_831CE6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE700"))) PPC_WEAK_FUNC(sub_831CE700);
PPC_FUNC_IMPL(__imp__sub_831CE700) {
	PPC_FUNC_PROLOGUE();
	// b 0x831ce668
	sub_831CE668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831CE704"))) PPC_WEAK_FUNC(sub_831CE704);
PPC_FUNC_IMPL(__imp__sub_831CE704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE708"))) PPC_WEAK_FUNC(sub_831CE708);
PPC_FUNC_IMPL(__imp__sub_831CE708) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE70C"))) PPC_WEAK_FUNC(sub_831CE70C);
PPC_FUNC_IMPL(__imp__sub_831CE70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE710"))) PPC_WEAK_FUNC(sub_831CE710);
PPC_FUNC_IMPL(__imp__sub_831CE710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// cntlzd r5,r3
	ctx.r5.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// sld r3,r3,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r5.u8 & 0x7F));
	// cmpdi r3,0
	cr0.compare<int64_t>(ctx.r3.s64, 0, xer);
	// beq 0x831ce72c
	if (cr0.eq) goto loc_831CE72C;
	// subfic r5,r5,1086
	xer.ca = ctx.r5.u32 <= 1086;
	ctx.r5.s64 = 1086 - ctx.r5.s64;
	// rldicl r3,r3,53,12
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 53) & 0xFFFFFFFFFFFFF;
	// rldimi r3,r5,52,1
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u64, 52) & 0x7FF0000000000000) | (ctx.r3.u64 & 0x800FFFFFFFFFFFFF);
loc_831CE72C:
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831CE738"))) PPC_WEAK_FUNC(sub_831CE738);
PPC_FUNC_IMPL(__imp__sub_831CE738) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831CE73C"))) PPC_WEAK_FUNC(sub_831CE73C);
PPC_FUNC_IMPL(__imp__sub_831CE73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp____savefpr_14"))) PPC_WEAK_FUNC(__savefpr_14);
PPC_FUNC_IMPL(__imp____savefpr_14) {
	PPC_FUNC_PROLOGUE();
	// stfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -144, ctx.f14.u64);
	// stfd f15,-136(r12)
	PPC_STORE_U64(ctx.r12.u32 + -136, ctx.f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_15"))) PPC_WEAK_FUNC(__savefpr_15);
PPC_FUNC_IMPL(__imp____savefpr_15) {
	PPC_FUNC_PROLOGUE();
	// stfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -136, ctx.f15.u64);
	// stfd f16,-128(r12)
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_16"))) PPC_WEAK_FUNC(__savefpr_16);
PPC_FUNC_IMPL(__imp____savefpr_16) {
	PPC_FUNC_PROLOGUE();
	// stfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -128, ctx.f16.u64);
	// stfd f17,-120(r12)
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_17"))) PPC_WEAK_FUNC(__savefpr_17);
PPC_FUNC_IMPL(__imp____savefpr_17) {
	PPC_FUNC_PROLOGUE();
	// stfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -120, ctx.f17.u64);
	// stfd f18,-112(r12)
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_18"))) PPC_WEAK_FUNC(__savefpr_18);
PPC_FUNC_IMPL(__imp____savefpr_18) {
	PPC_FUNC_PROLOGUE();
	// stfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -112, ctx.f18.u64);
	// stfd f19,-104(r12)
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_19"))) PPC_WEAK_FUNC(__savefpr_19);
PPC_FUNC_IMPL(__imp____savefpr_19) {
	PPC_FUNC_PROLOGUE();
	// stfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -104, ctx.f19.u64);
	// stfd f20,-96(r12)
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_20"))) PPC_WEAK_FUNC(__savefpr_20);
PPC_FUNC_IMPL(__imp____savefpr_20) {
	PPC_FUNC_PROLOGUE();
	// stfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -96, ctx.f20.u64);
	// stfd f21,-88(r12)
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_21"))) PPC_WEAK_FUNC(__savefpr_21);
PPC_FUNC_IMPL(__imp____savefpr_21) {
	PPC_FUNC_PROLOGUE();
	// stfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -88, ctx.f21.u64);
	// stfd f22,-80(r12)
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_22"))) PPC_WEAK_FUNC(__savefpr_22);
PPC_FUNC_IMPL(__imp____savefpr_22) {
	PPC_FUNC_PROLOGUE();
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_23"))) PPC_WEAK_FUNC(__savefpr_23);
PPC_FUNC_IMPL(__imp____savefpr_23) {
	PPC_FUNC_PROLOGUE();
	// stfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_24"))) PPC_WEAK_FUNC(__savefpr_24);
PPC_FUNC_IMPL(__imp____savefpr_24) {
	PPC_FUNC_PROLOGUE();
	// stfd f24,-64(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_25"))) PPC_WEAK_FUNC(__savefpr_25);
PPC_FUNC_IMPL(__imp____savefpr_25) {
	PPC_FUNC_PROLOGUE();
	// stfd f25,-56(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_26"))) PPC_WEAK_FUNC(__savefpr_26);
PPC_FUNC_IMPL(__imp____savefpr_26) {
	PPC_FUNC_PROLOGUE();
	// stfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_27"))) PPC_WEAK_FUNC(__savefpr_27);
PPC_FUNC_IMPL(__imp____savefpr_27) {
	PPC_FUNC_PROLOGUE();
	// stfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_28"))) PPC_WEAK_FUNC(__savefpr_28);
PPC_FUNC_IMPL(__imp____savefpr_28) {
	PPC_FUNC_PROLOGUE();
	// stfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_29"))) PPC_WEAK_FUNC(__savefpr_29);
PPC_FUNC_IMPL(__imp____savefpr_29) {
	PPC_FUNC_PROLOGUE();
	// stfd f29,-24(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_30"))) PPC_WEAK_FUNC(__savefpr_30);
PPC_FUNC_IMPL(__imp____savefpr_30) {
	PPC_FUNC_PROLOGUE();
	// stfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____savefpr_31"))) PPC_WEAK_FUNC(__savefpr_31);
PPC_FUNC_IMPL(__imp____savefpr_31) {
	PPC_FUNC_PROLOGUE();
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_14"))) PPC_WEAK_FUNC(__restfpr_14);
PPC_FUNC_IMPL(__imp____restfpr_14) {
	PPC_FUNC_PROLOGUE();
	// lfd f14,-144(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f14.u64 = PPC_LOAD_U64(ctx.r12.u32 + -144);
	// lfd f15,-136(r12)
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_15"))) PPC_WEAK_FUNC(__restfpr_15);
PPC_FUNC_IMPL(__imp____restfpr_15) {
	PPC_FUNC_PROLOGUE();
	// lfd f15,-136(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f15.u64 = PPC_LOAD_U64(ctx.r12.u32 + -136);
	// lfd f16,-128(r12)
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_16"))) PPC_WEAK_FUNC(__restfpr_16);
PPC_FUNC_IMPL(__imp____restfpr_16) {
	PPC_FUNC_PROLOGUE();
	// lfd f16,-128(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f16.u64 = PPC_LOAD_U64(ctx.r12.u32 + -128);
	// lfd f17,-120(r12)
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_17"))) PPC_WEAK_FUNC(__restfpr_17);
PPC_FUNC_IMPL(__imp____restfpr_17) {
	PPC_FUNC_PROLOGUE();
	// lfd f17,-120(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f17.u64 = PPC_LOAD_U64(ctx.r12.u32 + -120);
	// lfd f18,-112(r12)
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_18"))) PPC_WEAK_FUNC(__restfpr_18);
PPC_FUNC_IMPL(__imp____restfpr_18) {
	PPC_FUNC_PROLOGUE();
	// lfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f18.u64 = PPC_LOAD_U64(ctx.r12.u32 + -112);
	// lfd f19,-104(r12)
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_19"))) PPC_WEAK_FUNC(__restfpr_19);
PPC_FUNC_IMPL(__imp____restfpr_19) {
	PPC_FUNC_PROLOGUE();
	// lfd f19,-104(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f19.u64 = PPC_LOAD_U64(ctx.r12.u32 + -104);
	// lfd f20,-96(r12)
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_20"))) PPC_WEAK_FUNC(__restfpr_20);
PPC_FUNC_IMPL(__imp____restfpr_20) {
	PPC_FUNC_PROLOGUE();
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f20.u64 = PPC_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_21"))) PPC_WEAK_FUNC(__restfpr_21);
PPC_FUNC_IMPL(__imp____restfpr_21) {
	PPC_FUNC_PROLOGUE();
	// lfd f21,-88(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_22"))) PPC_WEAK_FUNC(__restfpr_22);
PPC_FUNC_IMPL(__imp____restfpr_22) {
	PPC_FUNC_PROLOGUE();
	// lfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f22.u64 = PPC_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp____restfpr_23"))) PPC_WEAK_FUNC(__restfpr_23);
PPC_FUNC_IMPL(__imp____restfpr_23) {
	PPC_FUNC_PROLOGUE();
	// lfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f23.u64 = PPC_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

