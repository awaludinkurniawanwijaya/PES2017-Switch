#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82CCAE80"))) PPC_WEAK_FUNC(sub_82CCAE80);
PPC_FUNC_IMPL(__imp__sub_82CCAE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,544
	ctx.r11.s64 = ctx.r4.s64 + 544;
loc_82CCAE8C:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ccaec0
	if (cr6.eq) goto loc_82CCAEC0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x82ccae8c
	if (cr6.lt) goto loc_82CCAE8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCAEAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccaec8
	if (cr6.eq) goto loc_82CCAEC8;
loc_82CCAEB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CCAEC0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ccaeac
	goto loc_82CCAEAC;
loc_82CCAEC8:
	// lwz r11,540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 540);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r11,23,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ccaf44
	if (cr6.eq) goto loc_82CCAF44;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r5,328
	ctx.r9.s64 = ctx.r5.s64 + 328;
	// addi r6,r11,8828
	ctx.r6.s64 = ctx.r11.s64 + 8828;
loc_82CCAEEC:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt cr6,0x82ccaefc
	if (cr6.lt) goto loc_82CCAEFC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82CCAEFC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r4,r5,0,0,13
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ccaf24
	if (!cr6.eq) goto loc_82CCAF24;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r5,r11,14
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ccaf28
	if (cr6.eq) goto loc_82CCAF28;
loc_82CCAF24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCAF28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccaeb8
	if (!cr6.eq) goto loc_82CCAEB8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ccaeec
	if (cr6.lt) goto loc_82CCAEEC;
loc_82CCAF44:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCAF4C"))) PPC_WEAK_FUNC(sub_82CCAF4C);
PPC_FUNC_IMPL(__imp__sub_82CCAF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCAF50"))) PPC_WEAK_FUNC(sub_82CCAF50);
PPC_FUNC_IMPL(__imp__sub_82CCAF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CCAF58;
	__savegprlr_22(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CCAF70;
	sub_831156E8(ctx, base);
	// lwz r11,92(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 92);
	// lwz r25,48(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82ccb130
	if (!cr6.eq) goto loc_82CCB130;
	// lwz r11,532(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 532);
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r10,r11,0,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccb130
	if (cr6.eq) goto loc_82CCB130;
	// lis r11,99
	ctx.r11.s64 = 6488064;
	// addi r23,r22,96
	ctx.r23.s64 = ctx.r22.s64 + 96;
	// ori r27,r11,11884
	ctx.r27.u64 = ctx.r11.u64 | 11884;
loc_82CCAFA0:
	// cmplwi cr6,r24,58
	cr6.compare<uint32_t>(ctx.r24.u32, 58, xer);
	// bge cr6,0x82ccafb4
	if (!cr6.lt) goto loc_82CCAFB4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,1500
	cr6.compare<uint32_t>(ctx.r11.u32, 1500, xer);
	// blt cr6,0x82ccafbc
	if (cr6.lt) goto loc_82CCAFBC;
loc_82CCAFB4:
	// add r4,r25,r27
	ctx.r4.u64 = ctx.r25.u64 + ctx.r27.u64;
	// b 0x82ccafc8
	goto loc_82CCAFC8;
loc_82CCAFBC:
	// mulli r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 * 520;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82CCAFC8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,520
	ctx.r5.s64 = 520;
	// bl 0x831ce980
	ctx.lr = 0x82CCAFD4;
	sub_831CE980(ctx, base);
	// lwz r11,644(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r28,r11,26,6,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ccb118
	if (cr6.eq) goto loc_82CCB118;
	// addi r29,r1,132
	ctx.r29.s64 = ctx.r1.s64 + 132;
loc_82CCAFEC:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(ctx.r30.u32, 16, xer);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// bge cr6,0x82ccaffc
	if (!cr6.lt) goto loc_82CCAFFC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CCAFFC:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CCB00C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ccb00c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CCB00C;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// ori r10,r31,1
	ctx.r10.u64 = ctx.r31.u64 | 1;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ori r31,r10,2
	ctx.r31.u64 = ctx.r10.u64 | 2;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ccb04c
	if (!cr6.eq) goto loc_82CCB04C;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccb050
	if (cr6.eq) goto loc_82CCB050;
loc_82CCB04C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCB050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccb0a0
	if (!cr6.eq) goto loc_82CCB0A0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ori r10,r31,4
	ctx.r10.u64 = ctx.r31.u64 | 4;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// ori r31,r10,8
	ctx.r31.u64 = ctx.r10.u64 | 8;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ccb08c
	if (!cr6.eq) goto loc_82CCB08C;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccb090
	if (cr6.eq) goto loc_82CCB090;
loc_82CCB08C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCB090:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ccb0a4
	if (cr6.eq) goto loc_82CCB0A4;
loc_82CCB0A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCB0A4:
	// rlwinm r10,r31,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ccb0b8
	if (cr6.eq) goto loc_82CCB0B8;
	// rlwinm r31,r31,0,29,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
loc_82CCB0B8:
	// rlwinm r10,r31,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ccb0c8
	if (cr6.eq) goto loc_82CCB0C8;
	// rlwinm r31,r31,0,30,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82CCB0C8:
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ccb0d8
	if (cr6.eq) goto loc_82CCB0D8;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82CCB0D8:
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ccb0e8
	if (cr6.eq) goto loc_82CCB0E8;
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_82CCB0E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccb108
	if (!cr6.eq) goto loc_82CCB108;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83157f88
	ctx.lr = 0x82CCB100;
	sub_83157F88(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82ccb13c
	if (cr6.eq) goto loc_82CCB13C;
loc_82CCB108:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82ccafec
	if (cr6.lt) goto loc_82CCAFEC;
loc_82CCB118:
	// lwz r11,532(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 532);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// rlwinm r10,r11,25,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ccafa0
	if (cr6.lt) goto loc_82CCAFA0;
loc_82CCB130:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82CCB13C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB148"))) PPC_WEAK_FUNC(sub_82CCB148);
PPC_FUNC_IMPL(__imp__sub_82CCB148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCB150;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCB15C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,48(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8319dc20
	ctx.lr = 0x82CCB16C;
	sub_8319DC20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCB178;
	sub_8311C3D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82CCB18C;
	sub_8311C338(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8319f2c8
	ctx.lr = 0x82CCB1A0;
	sub_8319F2C8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ccb250
	if (cr6.eq) goto loc_82CCB250;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82ccb218
	if (cr6.eq) goto loc_82CCB218;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82ccb1c8
	if (cr6.eq) goto loc_82CCB1C8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
loc_82CCB1C8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82ccb218
	if (cr6.eq) goto loc_82CCB218;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x82ccb218
	if (cr6.eq) goto loc_82CCB218;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,0,16,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF0;
	// cmplwi cr6,r10,816
	cr6.compare<uint32_t>(ctx.r10.u32, 816, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
	// li r11,39
	ctx.r11.s64 = 39;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319ee58
	ctx.lr = 0x82CCB204;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCB218:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFF;
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x82ccb280
	if (!cr6.eq) goto loc_82CCB280;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bne cr6,0x82ccb25c
	if (!cr6.eq) goto loc_82CCB25C;
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8319ee58
	ctx.lr = 0x82CCB244;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
loc_82CCB250:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCB25C:
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8319ee58
	ctx.lr = 0x82CCB268;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCB280:
	// cmplwi cr6,r10,51
	cr6.compare<uint32_t>(ctx.r10.u32, 51, xer);
	// bne cr6,0x82ccb2e0
	if (!cr6.eq) goto loc_82CCB2E0;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bne cr6,0x82ccb2bc
	if (!cr6.eq) goto loc_82CCB2BC;
	// li r11,36
	ctx.r11.s64 = 36;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8319ee58
	ctx.lr = 0x82CCB2A4;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCB2BC:
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8319ee58
	ctx.lr = 0x82CCB2C8;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCB2E0:
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bne cr6,0x82ccb31c
	if (!cr6.eq) goto loc_82CCB31C;
	// li r11,38
	ctx.r11.s64 = 38;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8319ee58
	ctx.lr = 0x82CCB304;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccb338
	if (!cr6.eq) goto loc_82CCB338;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCB31C:
	// li r11,37
	ctx.r11.s64 = 37;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8319ee58
	ctx.lr = 0x82CCB328;
	sub_8319EE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccb33c
	if (cr6.eq) goto loc_82CCB33C;
loc_82CCB338:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82CCB33C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB344"))) PPC_WEAK_FUNC(sub_82CCB344);
PPC_FUNC_IMPL(__imp__sub_82CCB344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB348"))) PPC_WEAK_FUNC(sub_82CCB348);
PPC_FUNC_IMPL(__imp__sub_82CCB348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,48
	cr6.compare<uint32_t>(ctx.r4.u32, 48, xer);
	// bgt cr6,0x82ccb3d0
	if (cr6.gt) goto loc_82CCB3D0;
	// beq cr6,0x82ccb3c0
	if (cr6.eq) goto loc_82CCB3C0;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82ccb3d0
	if (cr6.gt) goto loc_82CCB3D0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ccb390
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB390;
	// bdzf 4*cr6+eq,0x82ccb3a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB3A0;
	// bdzf 4*cr6+eq,0x82ccb3c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB3C0;
	// bdzf 4*cr6+eq,0x82ccb3d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB3D0;
	// bdzf 4*cr6+eq,0x82ccb3d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB3D0;
	// bne cr6,0x82ccb3b0
	if (!cr6.eq) goto loc_82CCB3B0;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8664
	ctx.r10.s64 = ctx.r11.s64 + 8664;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
loc_82CCB390:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8664
	ctx.r10.s64 = ctx.r11.s64 + 8664;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
loc_82CCB3A0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8664
	ctx.r10.s64 = ctx.r11.s64 + 8664;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// blr 
	return;
loc_82CCB3B0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8664
	ctx.r10.s64 = ctx.r11.s64 + 8664;
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// blr 
	return;
loc_82CCB3C0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8664
	ctx.r10.s64 = ctx.r11.s64 + 8664;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// blr 
	return;
loc_82CCB3D0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,8664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8664);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB3DC"))) PPC_WEAK_FUNC(sub_82CCB3DC);
PPC_FUNC_IMPL(__imp__sub_82CCB3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB3E0"))) PPC_WEAK_FUNC(sub_82CCB3E0);
PPC_FUNC_IMPL(__imp__sub_82CCB3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r3,8668(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8668);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB3EC"))) PPC_WEAK_FUNC(sub_82CCB3EC);
PPC_FUNC_IMPL(__imp__sub_82CCB3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB3F0"))) PPC_WEAK_FUNC(sub_82CCB3F0);
PPC_FUNC_IMPL(__imp__sub_82CCB3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCB3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCB404;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCB414;
	sub_8311C3D8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r4,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// lwz r11,8828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8828);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ccb448
	if (!cr6.eq) goto loc_82CCB448;
	// xor r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r8,r9,14
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ccb44c
	if (cr6.eq) goto loc_82CCB44C;
loc_82CCB448:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82CCB44C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ccb4cc
	if (!cr6.eq) goto loc_82CCB4CC;
	// rlwinm r9,r30,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ccb478
	if (!cr6.eq) goto loc_82CCB478;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccb47c
	if (cr6.eq) goto loc_82CCB47C;
loc_82CCB478:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCB47C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccb4cc
	if (!cr6.eq) goto loc_82CCB4CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x82CCB490;
	sub_8311C148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x82CCB4A0;
	sub_8311C148(ctx, base);
	// lwz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82ccb4c0
	if (!cr6.eq) goto loc_82CCB4C0;
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// rlwinm r10,r11,15,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x82ccb4cc
	if (cr6.eq) goto loc_82CCB4CC;
loc_82CCB4C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCB4CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCB4D8"))) PPC_WEAK_FUNC(sub_82CCB4D8);
PPC_FUNC_IMPL(__imp__sub_82CCB4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x82ccb4ec
	if (!cr6.eq) goto loc_82CCB4EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CCB4EC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB4F8"))) PPC_WEAK_FUNC(sub_82CCB4F8);
PPC_FUNC_IMPL(__imp__sub_82CCB4F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82ccb50c
	if (!cr6.eq) goto loc_82CCB50C;
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_82CCB50C:
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB518"))) PPC_WEAK_FUNC(sub_82CCB518);
PPC_FUNC_IMPL(__imp__sub_82CCB518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,48
	cr6.compare<uint32_t>(ctx.r4.u32, 48, xer);
	// bgt cr6,0x82ccb554
	if (cr6.gt) goto loc_82CCB554;
	// beq cr6,0x82ccb564
	if (cr6.eq) goto loc_82CCB564;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82ccb55c
	if (cr6.gt) goto loc_82CCB55C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ccb564
	if (cr6.eq) goto loc_82CCB564;
	// bdz 0x82ccb564
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCB564;
	// bdz 0x82ccb55c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCB55C;
	// bdz 0x82ccb564
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCB564;
	// bdz 0x82ccb564
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCB564;
	// bdz 0x82ccb564
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCB564;
	// b 0x82ccb564
	goto loc_82CCB564;
loc_82CCB554:
	// cmplwi cr6,r4,91
	cr6.compare<uint32_t>(ctx.r4.u32, 91, xer);
	// beq cr6,0x82ccb564
	if (cr6.eq) goto loc_82CCB564;
loc_82CCB55C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CCB564:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB56C"))) PPC_WEAK_FUNC(sub_82CCB56C);
PPC_FUNC_IMPL(__imp__sub_82CCB56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB570"))) PPC_WEAK_FUNC(sub_82CCB570);
PPC_FUNC_IMPL(__imp__sub_82CCB570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bgt cr6,0x82ccb694
	if (cr6.gt) goto loc_82CCB694;
	// lis r12,-32051
	ctx.r12.s64 = -2100494336;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-19052
	ctx.r12.s64 = ctx.r12.s64 + -19052;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82CCB65C;
	case 1:
		goto loc_82CCB66C;
	case 2:
		goto loc_82CCB66C;
	case 3:
		goto loc_82CCB66C;
	case 4:
		goto loc_82CCB66C;
	case 5:
		goto loc_82CCB66C;
	case 6:
		goto loc_82CCB66C;
	case 7:
		goto loc_82CCB66C;
	case 8:
		goto loc_82CCB66C;
	case 9:
		goto loc_82CCB674;
	case 10:
		goto loc_82CCB67C;
	case 11:
		goto loc_82CCB65C;
	case 12:
		goto loc_82CCB65C;
	case 13:
		goto loc_82CCB65C;
	case 14:
		goto loc_82CCB65C;
	case 15:
		goto loc_82CCB65C;
	case 16:
		goto loc_82CCB65C;
	case 17:
		goto loc_82CCB65C;
	case 18:
		goto loc_82CCB68C;
	case 19:
		goto loc_82CCB68C;
	case 20:
		goto loc_82CCB65C;
	case 21:
		goto loc_82CCB694;
	case 22:
		goto loc_82CCB65C;
	case 23:
		goto loc_82CCB67C;
	case 24:
		goto loc_82CCB664;
	case 25:
		goto loc_82CCB684;
	case 26:
		goto loc_82CCB684;
	case 27:
		goto loc_82CCB684;
	case 28:
		goto loc_82CCB684;
	case 29:
		goto loc_82CCB694;
	case 30:
		goto loc_82CCB65C;
	case 31:
		goto loc_82CCB654;
	case 32:
		goto loc_82CCB654;
	case 33:
		goto loc_82CCB654;
	case 34:
		goto loc_82CCB654;
	case 35:
		goto loc_82CCB654;
	case 36:
		goto loc_82CCB654;
	case 37:
		goto loc_82CCB654;
	case 38:
		goto loc_82CCB654;
	case 39:
		goto loc_82CCB694;
	case 40:
		goto loc_82CCB694;
	case 41:
		goto loc_82CCB694;
	case 42:
		goto loc_82CCB694;
	case 43:
		goto loc_82CCB694;
	case 44:
		goto loc_82CCB65C;
	case 45:
		goto loc_82CCB684;
	case 46:
		goto loc_82CCB694;
	case 47:
		goto loc_82CCB65C;
	default:
		return;
	}
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18836(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18836);
	// lwz r22,-18836(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18836);
	// lwz r22,-18836(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18836);
	// lwz r22,-18836(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18836);
	// lwz r22,-18836(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18836);
	// lwz r22,-18836(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18836);
	// lwz r22,-18836(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18836);
	// lwz r22,-18836(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18836);
	// lwz r22,-18828(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18828);
	// lwz r22,-18820(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18820);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18804(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18804);
	// lwz r22,-18804(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18804);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18796(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18796);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18820(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18820);
	// lwz r22,-18844(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18844);
	// lwz r22,-18812(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18812);
	// lwz r22,-18812(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18812);
	// lwz r22,-18812(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18812);
	// lwz r22,-18812(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18812);
	// lwz r22,-18796(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18796);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18860(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18860);
	// lwz r22,-18860(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18860);
	// lwz r22,-18860(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18860);
	// lwz r22,-18860(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18860);
	// lwz r22,-18860(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18860);
	// lwz r22,-18860(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18860);
	// lwz r22,-18860(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18860);
	// lwz r22,-18860(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18860);
	// lwz r22,-18796(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18796);
	// lwz r22,-18796(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18796);
	// lwz r22,-18796(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18796);
	// lwz r22,-18796(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18796);
	// lwz r22,-18796(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18796);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
	// lwz r22,-18812(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18812);
	// lwz r22,-18796(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18796);
	// lwz r22,-18852(r12)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r12.u32 + -18852);
loc_82CCB654:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82CCB65C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82CCB664:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82CCB66C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82CCB674:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82CCB67C:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82CCB684:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82CCB68C:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_82CCB694:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB69C"))) PPC_WEAK_FUNC(sub_82CCB69C);
PPC_FUNC_IMPL(__imp__sub_82CCB69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB6A0"))) PPC_WEAK_FUNC(sub_82CCB6A0);
PPC_FUNC_IMPL(__imp__sub_82CCB6A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,11
	ctx.r11.s64 = 11;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,8704
	ctx.r5.s64 = ctx.r7.s64 + 8704;
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB6CC"))) PPC_WEAK_FUNC(sub_82CCB6CC);
PPC_FUNC_IMPL(__imp__sub_82CCB6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB6D0"))) PPC_WEAK_FUNC(sub_82CCB6D0);
PPC_FUNC_IMPL(__imp__sub_82CCB6D0) {
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
	// bl 0x82ccb570
	ctx.lr = 0x82CCB6E0;
	sub_82CCB570(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// subfe r6,r10,r8
	temp.u8 = (~ctx.r10.u32 + ctx.r8.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r7,8704
	ctx.r5.s64 = ctx.r7.s64 + 8704;
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB718"))) PPC_WEAK_FUNC(sub_82CCB718);
PPC_FUNC_IMPL(__imp__sub_82CCB718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r5,-32
	ctx.r10.s64 = ctx.r5.s64 + -32;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// lwz r11,8776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8776);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x82ccb770
	if (cr6.gt) goto loc_82CCB770;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ccb754
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB754;
	// bdzf 4*cr6+eq,0x82ccb760
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB760;
	// bdzf 4*cr6+eq,0x82ccb754
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB754;
	// bdzf 4*cr6+eq,0x82ccb760
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB760;
	// bdzf 4*cr6+eq,0x82ccb754
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB754;
	// bdzf 4*cr6+eq,0x82ccb760
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCB760;
	// bne cr6,0x82ccb76c
	if (!cr6.eq) goto loc_82CCB76C;
loc_82CCB754:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82CCB760:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82CCB76C:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82CCB770:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB778"))) PPC_WEAK_FUNC(sub_82CCB778);
PPC_FUNC_IMPL(__imp__sub_82CCB778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r3,r4,24
	ctx.r3.u64 = ctx.r4.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CCB790:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ccb7b0
	if (!cr6.eq) goto loc_82CCB7B0;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// b 0x82ccb7b4
	goto loc_82CCB7B4;
loc_82CCB7B0:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82CCB7B4:
	// bdnz 0x82ccb790
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CCB790;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB7BC"))) PPC_WEAK_FUNC(sub_82CCB7BC);
PPC_FUNC_IMPL(__imp__sub_82CCB7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCB7C0"))) PPC_WEAK_FUNC(sub_82CCB7C0);
PPC_FUNC_IMPL(__imp__sub_82CCB7C0) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82ccb570
	ctx.lr = 0x82CCB7D4;
	sub_82CCB570(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r3
	xer.ca = ctx.r3.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// subfe r6,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// and r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 & ctx.r3.u64;
	// addi r9,r10,8704
	ctx.r9.s64 = ctx.r10.s64 + 8704;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccb868
	if (cr6.eq) goto loc_82CCB868;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82CCB80C:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ccb80c
	if (!cr6.eq) goto loc_82CCB80C;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ccb868
	if (cr6.eq) goto loc_82CCB868;
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r5,r10,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r6,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// subfe r4,r7,r5
	temp.u8 = (~ctx.r7.u32 + ctx.r5.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// and r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 & ctx.r11.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82CCB868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CCB868:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCB878"))) PPC_WEAK_FUNC(sub_82CCB878);
PPC_FUNC_IMPL(__imp__sub_82CCB878) {
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
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82ccb8a0
	if (cr6.eq) goto loc_82CCB8A0;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82ccb8a4
	if (!cr6.eq) goto loc_82CCB8A4;
loc_82CCB8A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CCB8A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccb99c
	if (!cr6.eq) goto loc_82CCB99C;
	// addi r11,r31,-9
	ctx.r11.s64 = ctx.r31.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ccb99c
	if (!cr6.eq) goto loc_82CCB99C;
	// cmpwi cr6,r31,23
	cr6.compare<int32_t>(ctx.r31.s32, 23, xer);
	// bgt cr6,0x82ccb8e8
	if (cr6.gt) goto loc_82CCB8E8;
	// beq cr6,0x82ccb8fc
	if (cr6.eq) goto loc_82CCB8FC;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82ccb8fc
	if (cr6.eq) goto loc_82CCB8FC;
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(ctx.r31.s32, 13, xer);
	// beq cr6,0x82ccb8fc
	if (cr6.eq) goto loc_82CCB8FC;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(ctx.r31.s32, 15, xer);
	// b 0x82ccb8f4
	goto loc_82CCB8F4;
loc_82CCB8E8:
	// cmpwi cr6,r31,31
	cr6.compare<int32_t>(ctx.r31.s32, 31, xer);
	// beq cr6,0x82ccb8fc
	if (cr6.eq) goto loc_82CCB8FC;
	// cmpwi cr6,r31,45
	cr6.compare<int32_t>(ctx.r31.s32, 45, xer);
loc_82CCB8F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82ccb900
	if (!cr6.eq) goto loc_82CCB900;
loc_82CCB8FC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CCB900:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccb92c
	if (cr6.eq) goto loc_82CCB92C;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
loc_82CCB910:
	// addi r10,r11,8700
	ctx.r10.s64 = ctx.r11.s64 + 8700;
	// lwz r3,-56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -56);
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
loc_82CCB92C:
	// addi r11,r31,-25
	ctx.r11.s64 = ctx.r31.s64 + -25;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ccb960
	if (cr6.eq) goto loc_82CCB960;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8700
	ctx.r10.s64 = ctx.r11.s64 + 8700;
	// lwz r3,-48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -48);
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
loc_82CCB960:
	// bl 0x830ff290
	ctx.lr = 0x82CCB964;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82CCB968;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82ccb9bc
	if (cr6.eq) goto loc_82CCB9BC;
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// blt cr6,0x82ccb984
	if (cr6.lt) goto loc_82CCB984;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82ccb988
	if (!cr6.gt) goto loc_82CCB988;
loc_82CCB984:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCB988:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccb99c
	if (!cr6.eq) goto loc_82CCB99C;
	// cmpwi cr6,r31,21
	cr6.compare<int32_t>(ctx.r31.s32, 21, xer);
	// bne cr6,0x82ccb9f4
	if (!cr6.eq) goto loc_82CCB9F4;
loc_82CCB99C:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8700
	ctx.r10.s64 = ctx.r11.s64 + 8700;
	// lwz r3,-52(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -52);
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
loc_82CCB9BC:
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// beq cr6,0x82ccba98
	if (cr6.eq) goto loc_82CCBA98;
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(ctx.r31.s32, 24, xer);
	// beq cr6,0x82ccba98
	if (cr6.eq) goto loc_82CCBA98;
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// bne cr6,0x82ccb9f4
	if (!cr6.eq) goto loc_82CCB9F4;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8700
	ctx.r10.s64 = ctx.r11.s64 + 8700;
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
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
loc_82CCB9F4:
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(ctx.r31.s32, 26, xer);
	// blt cr6,0x82ccba14
	if (cr6.lt) goto loc_82CCBA14;
	// cmpwi cr6,r31,29
	cr6.compare<int32_t>(ctx.r31.s32, 29, xer);
	// ble cr6,0x82ccba0c
	if (!cr6.gt) goto loc_82CCBA0C;
	// cmpwi cr6,r31,46
	cr6.compare<int32_t>(ctx.r31.s32, 46, xer);
	// bne cr6,0x82ccba14
	if (!cr6.eq) goto loc_82CCBA14;
loc_82CCBA0C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ccba18
	goto loc_82CCBA18;
loc_82CCBA14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCBA18:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccba44
	if (cr6.eq) goto loc_82CCBA44;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8700
	ctx.r10.s64 = ctx.r11.s64 + 8700;
	// lwz r3,-40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -40);
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
loc_82CCBA44:
	// cmpwi cr6,r31,19
	cr6.compare<int32_t>(ctx.r31.s32, 19, xer);
	// beq cr6,0x82ccba78
	if (cr6.eq) goto loc_82CCBA78;
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(ctx.r31.s32, 20, xer);
	// beq cr6,0x82ccba78
	if (cr6.eq) goto loc_82CCBA78;
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(ctx.r31.s32, 48, xer);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// bne cr6,0x82ccb910
	if (!cr6.eq) goto loc_82CCB910;
	// lwz r3,8700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8700);
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
loc_82CCBA78:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8700
	ctx.r10.s64 = ctx.r11.s64 + 8700;
	// lwz r3,-44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -44);
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
loc_82CCBA98:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r10,r11,8700
	ctx.r10.s64 = ctx.r11.s64 + 8700;
	// lwz r3,-8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
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

__attribute__((alias("__imp__sub_82CCBAB8"))) PPC_WEAK_FUNC(sub_82CCBAB8);
PPC_FUNC_IMPL(__imp__sub_82CCBAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CCBAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCBAD0;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCBAE0;
	sub_8311C3D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x82CCBAF0;
	sub_8311C338(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r9,-13004
	ctx.r4.s64 = ctx.r9.s64 + -13004;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r28,88(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCBB14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccbbe0
	if (cr6.eq) goto loc_82CCBBE0;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82ccbb8c
	if (cr6.eq) goto loc_82CCBB8C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCBB38;
	sub_82D2AEC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82CCBB44;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82CCBB58;
	sub_82D32C58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stb r11,317(r30)
	PPC_STORE_U8(ctx.r30.u32 + 317, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,8704
	ctx.r9.s64 = ctx.r10.s64 + 8704;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCBB84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CCBB8C:
	// lwz r10,520(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// li r11,8
	ctx.r11.s64 = 8;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82ccbba0
	if (!cr6.eq) goto loc_82CCBBA0;
	// li r11,9
	ctx.r11.s64 = 9;
loc_82CCBBA0:
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// subfe r4,r8,r6
	temp.u8 = (~ctx.r8.u32 + ctx.r6.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r10,72(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// addi r9,r5,8704
	ctx.r9.s64 = ctx.r5.s64 + 8704;
	// and r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 & ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82CCBBE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CCBBE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCBBE8"))) PPC_WEAK_FUNC(sub_82CCBBE8);
PPC_FUNC_IMPL(__imp__sub_82CCBBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CCBBF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r6,100
	ctx.r3.s64 = ctx.r6.s64 + 100;
	// addi r4,r10,-12236
	ctx.r4.s64 = ctx.r10.s64 + -12236;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCBC20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccbcbc
	if (cr6.eq) goto loc_82CCBCBC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCBC38;
	sub_82D2AEC8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,8776(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8776);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82ccbcac
	if (cr6.eq) goto loc_82CCBCAC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCBC58;
	sub_82D2AEC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82CCBC64;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82CCBC78;
	sub_82D32C58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stb r11,317(r31)
	PPC_STORE_U8(ctx.r31.u32 + 317, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r10,8704
	ctx.r9.s64 = ctx.r10.s64 + 8704;
	// lwz r7,72(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCBCA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CCBCAC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ccb7c0
	ctx.lr = 0x82CCBCBC;
	sub_82CCB7C0(ctx, base);
loc_82CCBCBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCBCC4"))) PPC_WEAK_FUNC(sub_82CCBCC4);
PPC_FUNC_IMPL(__imp__sub_82CCBCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCBCC8"))) PPC_WEAK_FUNC(sub_82CCBCC8);
PPC_FUNC_IMPL(__imp__sub_82CCBCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCBCD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// bl 0x8315ffd0
	ctx.lr = 0x82CCBD00;
	sub_8315FFD0(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x82ccbd18
	if (!cr6.eq) goto loc_82CCBD18;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// ori r4,r4,346
	ctx.r4.u64 = ctx.r4.u64 | 346;
	// b 0x82ccbd28
	goto loc_82CCBD28;
loc_82CCBD18:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x82ccbd30
	if (!cr6.eq) goto loc_82CCBD30;
	// lis r4,120
	ctx.r4.s64 = 7864320;
	// ori r4,r4,345
	ctx.r4.u64 = ctx.r4.u64 | 345;
loc_82CCBD28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CCBD30;
	sub_82D042A8(ctx, base);
loc_82CCBD30:
	// bl 0x830ff290
	ctx.lr = 0x82CCBD34;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82CCBD38;
	sub_830FFAA8(ctx, base);
	// lis r11,29
	ctx.r11.s64 = 1900544;
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// ori r30,r11,643
	ctx.r30.u64 = ctx.r11.u64 | 643;
	// beq cr6,0x82ccbd88
	if (cr6.eq) goto loc_82CCBD88;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// blt cr6,0x82ccbd60
	if (cr6.lt) goto loc_82CCBD60;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82ccbd64
	if (!cr6.gt) goto loc_82CCBD64;
loc_82CCBD60:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CCBD64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccbd78
	if (!cr6.eq) goto loc_82CCBD78;
	// cmpwi cr6,r10,21
	cr6.compare<int32_t>(ctx.r10.s32, 21, xer);
	// bne cr6,0x82ccbd88
	if (!cr6.eq) goto loc_82CCBD88;
loc_82CCBD78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CCBD84;
	sub_82D042A8(ctx, base);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_82CCBD88:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82ccbd9c
	if (cr6.eq) goto loc_82CCBD9C;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x82ccbda0
	if (!cr6.eq) goto loc_82CCBDA0;
loc_82CCBD9C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CCBDA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccbdd0
	if (cr6.eq) goto loc_82CCBDD0;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x831525a0
	ctx.lr = 0x82CCBDB4;
	sub_831525A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccbdcc
	if (!cr6.eq) goto loc_82CCBDCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CCBDCC;
	sub_82D042A8(ctx, base);
loc_82CCBDCC:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_82CCBDD0:
	// addi r11,r10,-9
	ctx.r11.s64 = ctx.r10.s64 + -9;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ccbdf4
	if (cr6.eq) goto loc_82CCBDF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82CCBDF0;
	sub_82D042A8(ctx, base);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_82CCBDF4:
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82ccbe10
	if (!cr6.eq) goto loc_82CCBE10;
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// ori r4,r4,77
	ctx.r4.u64 = ctx.r4.u64 | 77;
	// bl 0x82d042a8
	ctx.lr = 0x82CCBE0C;
	sub_82D042A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CCBE10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCBE18"))) PPC_WEAK_FUNC(sub_82CCBE18);
PPC_FUNC_IMPL(__imp__sub_82CCBE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CCBE20;
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,99
	cr6.compare<uint32_t>(ctx.r5.u32, 99, xer);
	// bgt cr6,0x82ccbf24
	if (cr6.gt) goto loc_82CCBF24;
	// cmplwi cr6,r6,99
	cr6.compare<uint32_t>(ctx.r6.u32, 99, xer);
	// bgt cr6,0x82ccbf24
	if (cr6.gt) goto loc_82CCBF24;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r29,r4,100
	ctx.r29.s64 = ctx.r4.s64 + 100;
	// addi r31,r11,-14295
	ctx.r31.s64 = ctx.r11.s64 + -14295;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r31,2071
	ctx.r4.s64 = ctx.r31.s64 + 2071;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCBE68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,2083
	ctx.r4.s64 = ctx.r31.s64 + 2083;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCBE84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCBE98;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCBEA8;
	sub_82D2AEC8(ctx, base);
	// clrlwi r6,r28,24
	ctx.r6.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ccbf0c
	if (cr6.eq) goto loc_82CCBF0C;
	// addi r4,r31,-30
	ctx.r4.s64 = ctx.r31.s64 + -30;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CCBEC0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CCBED4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCBEDC;
	sub_8387E8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82CCBEE8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CCBEFC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCBF04;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CCBF0C:
	// clrldi r4,r27,32
	ctx.r4.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CCBF18;
	sub_82D294D0(ctx, base);
	// clrldi r4,r26,32
	ctx.r4.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CCBF24;
	sub_82D294D0(ctx, base);
loc_82CCBF24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCBF2C"))) PPC_WEAK_FUNC(sub_82CCBF2C);
PPC_FUNC_IMPL(__imp__sub_82CCBF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCBF30"))) PPC_WEAK_FUNC(sub_82CCBF30);
PPC_FUNC_IMPL(__imp__sub_82CCBF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CCBF38;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCBF4C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r15,r31,24
	ctx.r15.u64 = ctx.r31.u32 & 0xFF;
	// addis r20,r11,192
	ctx.r20.s64 = ctx.r11.s64 + 12582912;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r20,r20,-10964
	ctx.r20.s64 = ctx.r20.s64 + -10964;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// addis r14,r20,3
	ctx.r14.s64 = ctx.r20.s64 + 196608;
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// addi r14,r14,-2426
	ctx.r14.s64 = ctx.r14.s64 + -2426;
	// li r18,-1
	ctx.r18.s64 = -1;
	// ori r19,r11,63108
	ctx.r19.u64 = ctx.r11.u64 | 63108;
	// li r23,20
	ctx.r23.s64 = 20;
	// li r21,12
	ctx.r21.s64 = 12;
	// li r16,2
	ctx.r16.s64 = 2;
loc_82CCBF88:
	// lhz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r14.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8319db70
	ctx.lr = 0x82CCBFA4;
	sub_8319DB70(ctx, base);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplw cr6,r10,r15
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, xer);
	// bne cr6,0x82ccc1cc
	if (!cr6.eq) goto loc_82CCC1CC;
	// lis r28,0
	ctx.r28.s64 = 0;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r25,365
	cr6.compare<uint32_t>(ctx.r25.u32, 365, xer);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// bge cr6,0x82ccbfe4
	if (!cr6.lt) goto loc_82CCBFE4;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82CCBFE4:
	// lhz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 400);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccc07c
	if (cr6.eq) goto loc_82CCC07C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82CCBFF8:
	// cmplwi cr6,r29,200
	cr6.compare<uint32_t>(ctx.r29.u32, 200, xer);
	// blt cr6,0x82ccc008
	if (cr6.lt) goto loc_82CCC008;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// b 0x82ccc00c
	goto loc_82CCC00C;
loc_82CCC008:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_82CCC00C:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ccb3f0
	ctx.lr = 0x82CCC018;
	sub_82CCB3F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccc064
	if (cr6.eq) goto loc_82CCC064;
	// cmplwi cr6,r29,200
	cr6.compare<uint32_t>(ctx.r29.u32, 200, xer);
	// blt cr6,0x82ccc034
	if (cr6.lt) goto loc_82CCC034;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// b 0x82ccc038
	goto loc_82CCC038;
loc_82CCC034:
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_82CCC038:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ccb148
	ctx.lr = 0x82CCC040;
	sub_82CCB148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccc064
	if (cr6.eq) goto loc_82CCC064;
	// cmplwi cr6,r29,200
	cr6.compare<uint32_t>(ctx.r29.u32, 200, xer);
	// blt cr6,0x82ccc05c
	if (cr6.lt) goto loc_82CCC05C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// b 0x82ccc060
	goto loc_82CCC060;
loc_82CCC05C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_82CCC060:
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_82CCC064:
	// lhz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 400);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ccbff8
	if (cr6.lt) goto loc_82CCBFF8;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
loc_82CCC07C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8315cf38
	ctx.lr = 0x82CCC084;
	sub_8315CF38(ctx, base);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(ctx.r11.s32, 50, xer);
	// beq cr6,0x82ccc0a0
	if (cr6.eq) goto loc_82CCC0A0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82CCC0A0:
	// cmplwi cr6,r28,65535
	cr6.compare<uint32_t>(ctx.r28.u32, 65535, xer);
	// bne cr6,0x82ccc1c0
	if (!cr6.eq) goto loc_82CCC1C0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x82ccc1c0
	if (!cr6.eq) goto loc_82CCC1C0;
	// lwz r9,104(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 104);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhzx r11,r20,r19
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + ctx.r19.u32);
	// cmplwi cr6,r9,181
	cr6.compare<uint32_t>(ctx.r9.u32, 181, xer);
	// bne cr6,0x82ccc0dc
	if (!cr6.eq) goto loc_82CCC0DC;
	// cmplwi cr6,r11,181
	cr6.compare<uint32_t>(ctx.r11.u32, 181, xer);
	// bge cr6,0x82ccc0d0
	if (!cr6.lt) goto loc_82CCC0D0;
	// addi r11,r11,365
	ctx.r11.s64 = ctx.r11.s64 + 365;
loc_82CCC0D0:
	// cmplwi cr6,r10,181
	cr6.compare<uint32_t>(ctx.r10.u32, 181, xer);
	// bge cr6,0x82ccc0dc
	if (!cr6.lt) goto loc_82CCC0DC;
	// addi r10,r10,365
	ctx.r10.s64 = ctx.r10.s64 + 365;
loc_82CCC0DC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82ccc1c0
	if (!cr6.gt) goto loc_82CCC1C0;
	// lwz r10,152(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 152);
	// addi r29,r24,148
	ctx.r29.s64 = ctx.r24.s64 + 148;
	// lwz r11,148(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 148);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r10,r9,r23
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ccc1c0
	if (cr0.eq) goto loc_82CCC1C0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82CCC104:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bge cr6,0x82ccc1c0
	if (!cr6.lt) goto loc_82CCC1C0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// ble cr6,0x82ccc1e4
	if (!cr6.gt) goto loc_82CCC1E4;
	// lhzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// sth r10,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r10.u16);
	// bl 0x82cd1f28
	ctx.lr = 0x82CCC12C;
	sub_82CD1F28(ctx, base);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// divw r10,r8,r21
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r21.s32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccc180
	if (cr6.eq) goto loc_82CCC180;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// ble cr6,0x82ccc1f0
	if (!cr6.gt) goto loc_82CCC1F0;
loc_82CCC154:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r25
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, xer);
	// beq cr6,0x82ccc174
	if (cr6.eq) goto loc_82CCC174;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ccc154
	if (cr6.gt) goto loc_82CCC154;
	// b 0x82ccc180
	goto loc_82CCC180;
loc_82CCC174:
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
loc_82CCC180:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ccc194
	if (cr6.eq) goto loc_82CCC194;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82CCC194;
	sub_825952B8(ctx, base);
loc_82CCC194:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// divw r10,r9,r23
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r23.s32);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ccc104
	if (cr6.lt) goto loc_82CCC104;
loc_82CCC1C0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x835bc6a8
	ctx.lr = 0x82CCC1CC;
	sub_835BC6A8(ctx, base);
loc_82CCC1CC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r17,r17,532
	ctx.r17.s64 = ctx.r17.s64 + 532;
	// cmplwi cr6,r25,365
	cr6.compare<uint32_t>(ctx.r25.u32, 365, xer);
	// blt cr6,0x82ccbf88
	if (cr6.lt) goto loc_82CCBF88;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CCC1E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCC1F0;
	sub_831CC188(ctx, base);
loc_82CCC1F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCC1FC;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CCC1FC"))) PPC_WEAK_FUNC(sub_82CCC1FC);
PPC_FUNC_IMPL(__imp__sub_82CCC1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCC200"))) PPC_WEAK_FUNC(sub_82CCC200);
PPC_FUNC_IMPL(__imp__sub_82CCC200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CCC208;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r4,r11,-12200
	ctx.r4.s64 = ctx.r11.s64 + -12200;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82CCC238;
	sub_8259CC28(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC254;
	sub_82D042A8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC268;
	sub_825A1DA8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ccc288
	if (cr6.lt) goto loc_82CCC288;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CCC288;
	sub_825952B8(ctx, base);
loc_82CCC288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCC294"))) PPC_WEAK_FUNC(sub_82CCC294);
PPC_FUNC_IMPL(__imp__sub_82CCC294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCC298"))) PPC_WEAK_FUNC(sub_82CCC298);
PPC_FUNC_IMPL(__imp__sub_82CCC298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82CCC2A0;
	__savegprlr_19(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// sth r5,470(r1)
	PPC_STORE_U16(ctx.r1.u32 + 470, ctx.r5.u16);
	// li r22,15
	ctx.r22.s64 = 15;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// addi r29,r11,-14274
	ctx.r29.s64 = ctx.r11.s64 + -14274;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r29,-19
	ctx.r4.s64 = ctx.r29.s64 + -19;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82CCC2E0;
	sub_8259CC28(ctx, base);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r4,r29,2086
	ctx.r4.s64 = ctx.r29.s64 + 2086;
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x82CCC2FC;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82CCC300;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,470
	ctx.r3.s64 = ctx.r1.s64 + 470;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8314e340
	ctx.lr = 0x82CCC310;
	sub_8314E340(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8311c338
	ctx.lr = 0x82CCC320;
	sub_8311C338(ctx, base);
	// lwz r10,540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// lhz r9,82(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 82);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r25,92(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r20,r31
	ctx.r20.u64 = ctx.r31.u64;
	// lwz r28,88(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// rlwinm r21,r10,30,25,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x7F;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x82ccc348
	if (!cr6.eq) goto loc_82CCC348;
	// li r20,1
	ctx.r20.s64 = 1;
loc_82CCC348:
	// cmplwi cr6,r28,48
	cr6.compare<uint32_t>(ctx.r28.u32, 48, xer);
	// bgt cr6,0x82ccc384
	if (cr6.gt) goto loc_82CCC384;
	// beq cr6,0x82ccc394
	if (cr6.eq) goto loc_82CCC394;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82ccc38c
	if (cr6.gt) goto loc_82CCC38C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ccc394
	if (cr6.eq) goto loc_82CCC394;
	// bdz 0x82ccc394
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCC394;
	// bdz 0x82ccc38c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCC38C;
	// bdz 0x82ccc394
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCC394;
	// bdz 0x82ccc394
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCC394;
	// bdz 0x82ccc394
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CCC394;
	// b 0x82ccc394
	goto loc_82CCC394;
loc_82CCC384:
	// cmplwi cr6,r28,91
	cr6.compare<uint32_t>(ctx.r28.u32, 91, xer);
	// beq cr6,0x82ccc394
	if (cr6.eq) goto loc_82CCC394;
loc_82CCC38C:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x82ccc398
	goto loc_82CCC398;
loc_82CCC394:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82CCC398:
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CCC3D8;
	sub_8259CC28(ctx, base);
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// beq cr6,0x82ccc3f4
	if (cr6.eq) goto loc_82CCC3F4;
	// cmplwi cr6,r28,48
	cr6.compare<uint32_t>(ctx.r28.u32, 48, xer);
	// beq cr6,0x82ccc3f4
	if (cr6.eq) goto loc_82CCC3F4;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,17
	ctx.r4.u64 = ctx.r4.u64 | 17;
	// b 0x82ccc3fc
	goto loc_82CCC3FC;
loc_82CCC3F4:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,95
	ctx.r4.u64 = ctx.r4.u64 | 95;
loc_82CCC3FC:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC404;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// beq cr6,0x82ccc450
	if (cr6.eq) goto loc_82CCC450;
	// cmplwi cr6,r28,48
	cr6.compare<uint32_t>(ctx.r28.u32, 48, xer);
	// beq cr6,0x82ccc450
	if (cr6.eq) goto loc_82CCC450;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x82ccc450
	if (cr6.eq) goto loc_82CCC450;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// beq cr6,0x82ccc450
	if (cr6.eq) goto loc_82CCC450;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// beq cr6,0x82ccc444
	if (cr6.eq) goto loc_82CCC444;
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(ctx.r11.u32, 101, xer);
	// beq cr6,0x82ccc444
	if (cr6.eq) goto loc_82CCC444;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,16
	ctx.r4.u64 = ctx.r4.u64 | 16;
	// b 0x82ccc458
	goto loc_82CCC458;
loc_82CCC444:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,95
	ctx.r4.u64 = ctx.r4.u64 | 95;
	// b 0x82ccc458
	goto loc_82CCC458;
loc_82CCC450:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,94
	ctx.r4.u64 = ctx.r4.u64 | 94;
loc_82CCC458:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC460;
	sub_82D042A8(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x82ccc474
	if (!cr6.eq) goto loc_82CCC474;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
	// b 0x82ccc484
	goto loc_82CCC484;
loc_82CCC474:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(ctx.r26.s32, 1, xer);
	// bne cr6,0x82ccc48c
	if (!cr6.eq) goto loc_82CCC48C;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,22
	ctx.r4.u64 = ctx.r4.u64 | 22;
loc_82CCC484:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC48C;
	sub_82D042A8(ctx, base);
loc_82CCC48C:
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC4A4;
	sub_825A1DA8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC4B8;
	sub_825A1DA8(ctx, base);
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(ctx.r25.s32, 4, xer);
	// bne cr6,0x82ccc5c0
	if (!cr6.eq) goto loc_82CCC5C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x837b0c10
	ctx.lr = 0x82CCC4CC;
	sub_837B0C10(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccc4ec
	if (cr6.lt) goto loc_82CCC4EC;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82CCC4EC;
	sub_825952B8(ctx, base);
loc_82CCC4EC:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x82ccc514
	if (cr6.lt) goto loc_82CCC514;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82CCC514;
	sub_825952B8(ctx, base);
loc_82CCC514:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x82ccc53c
	if (cr6.lt) goto loc_82CCC53C;
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82CCC53C;
	sub_825952B8(ctx, base);
loc_82CCC53C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x82ccc564
	if (cr6.lt) goto loc_82CCC564;
	// stw r30,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CCC564;
	sub_825952B8(ctx, base);
loc_82CCC564:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82ccc58c
	if (cr6.lt) goto loc_82CCC58C;
	// stw r30,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r30.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82CCC58C;
	sub_825952B8(ctx, base);
loc_82CCC58C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x82ccca78
	if (cr6.lt) goto loc_82CCCA78;
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CCC5B4;
	sub_825952B8(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82CCC5C0:
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(ctx.r25.s32, 3, xer);
	// bne cr6,0x82ccc878
	if (!cr6.eq) goto loc_82CCC878;
	// addi r11,r23,-46
	ctx.r11.s64 = ctx.r23.s64 + -46;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82ccc934
	if (cr6.gt) goto loc_82CCC934;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ccc788
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCC788;
	// bdzf 4*cr6+eq,0x82ccc7d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCC7D0;
	// bdzf 4*cr6+eq,0x82ccc790
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCC790;
	// bdzf 4*cr6+eq,0x82ccc7e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCC7E4;
	// bdzf 4*cr6+eq,0x82ccc734
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCC734;
	// bdzf 4*cr6+eq,0x82ccc718
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCC718;
	// bdzf 4*cr6+eq,0x82ccc7f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCC7F4;
	// bne cr6,0x82ccc864
	if (!cr6.eq) goto loc_82CCC864;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// bne cr6,0x82ccc618
	if (!cr6.eq) goto loc_82CCC618;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,23
	ctx.r4.u64 = ctx.r4.u64 | 23;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC614;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC618:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bne cr6,0x82ccc634
	if (!cr6.eq) goto loc_82CCC634;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC630;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC634:
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(ctx.r28.u32, 8, xer);
	// bne cr6,0x82ccc650
	if (!cr6.eq) goto loc_82CCC650;
loc_82CCC63C:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,25
	ctx.r4.u64 = ctx.r4.u64 | 25;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC64C;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC650:
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// beq cr6,0x82ccc63c
	if (cr6.eq) goto loc_82CCC63C;
	// cmplwi cr6,r28,48
	cr6.compare<uint32_t>(ctx.r28.u32, 48, xer);
	// beq cr6,0x82ccc63c
	if (cr6.eq) goto loc_82CCC63C;
	// cmplwi cr6,r28,6
	cr6.compare<uint32_t>(ctx.r28.u32, 6, xer);
	// beq cr6,0x82ccc63c
	if (cr6.eq) goto loc_82CCC63C;
	// cmplwi cr6,r28,91
	cr6.compare<uint32_t>(ctx.r28.u32, 91, xer);
	// beq cr6,0x82ccc63c
	if (cr6.eq) goto loc_82CCC63C;
	// cmplwi cr6,r28,65
	cr6.compare<uint32_t>(ctx.r28.u32, 65, xer);
	// bne cr6,0x82ccc688
	if (!cr6.eq) goto loc_82CCC688;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,143
	ctx.r4.u64 = ctx.r4.u64 | 143;
	// b 0x82ccc92c
	goto loc_82CCC92C;
loc_82CCC688:
	// cmplwi cr6,r28,70
	cr6.compare<uint32_t>(ctx.r28.u32, 70, xer);
	// beq cr6,0x82ccc774
	if (cr6.eq) goto loc_82CCC774;
	// cmplwi cr6,r28,71
	cr6.compare<uint32_t>(ctx.r28.u32, 71, xer);
	// beq cr6,0x82ccc774
	if (cr6.eq) goto loc_82CCC774;
	// cmplwi cr6,r28,72
	cr6.compare<uint32_t>(ctx.r28.u32, 72, xer);
	// bne cr6,0x82ccc6dc
	if (!cr6.eq) goto loc_82CCC6DC;
	// cmplwi cr6,r21,2
	cr6.compare<uint32_t>(ctx.r21.u32, 2, xer);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x82ccc6bc
	if (cr6.gt) goto loc_82CCC6BC;
	// ori r4,r4,29
	ctx.r4.u64 = ctx.r4.u64 | 29;
	// bl 0x82d04220
	ctx.lr = 0x82CCC6B8;
	sub_82D04220(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC6BC:
	// cmplwi cr6,r21,4
	cr6.compare<uint32_t>(ctx.r21.u32, 4, xer);
	// bgt cr6,0x82ccc6d0
	if (cr6.gt) goto loc_82CCC6D0;
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// bl 0x82d04220
	ctx.lr = 0x82CCC6CC;
	sub_82D04220(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC6D0:
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// bl 0x82d04220
	ctx.lr = 0x82CCC6D8;
	sub_82D04220(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC6DC:
	// cmplwi cr6,r21,32
	cr6.compare<uint32_t>(ctx.r21.u32, 32, xer);
	// bne cr6,0x82ccc710
	if (!cr6.eq) goto loc_82CCC710;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccc700
	if (cr6.eq) goto loc_82CCC700;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC6FC;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC700:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,24
	ctx.r4.u64 = ctx.r4.u64 | 24;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC70C;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC710:
	// cmplwi cr6,r21,4
	cr6.compare<uint32_t>(ctx.r21.u32, 4, xer);
	// bgt cr6,0x82ccc72c
	if (cr6.gt) goto loc_82CCC72C;
loc_82CCC718:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC728;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC72C:
	// cmplwi cr6,r21,8
	cr6.compare<uint32_t>(ctx.r21.u32, 8, xer);
	// bgt cr6,0x82ccc748
	if (cr6.gt) goto loc_82CCC748;
loc_82CCC734:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC744;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC748:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccc764
	if (cr6.eq) goto loc_82CCC764;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC760;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC764:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,23
	ctx.r4.u64 = ctx.r4.u64 | 23;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC770;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC774:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,28
	ctx.r4.u64 = ctx.r4.u64 | 28;
	// bl 0x82d04220
	ctx.lr = 0x82CCC784;
	sub_82D04220(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC788:
	// cmplwi cr6,r28,65
	cr6.compare<uint32_t>(ctx.r28.u32, 65, xer);
	// bne cr6,0x82ccc7a0
	if (!cr6.eq) goto loc_82CCC7A0;
loc_82CCC790:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,143
	ctx.r4.u64 = ctx.r4.u64 | 143;
	// b 0x82ccc92c
	goto loc_82CCC92C;
loc_82CCC7A0:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccc7c0
	if (cr6.eq) goto loc_82CCC7C0;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC7BC;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC7C0:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC7CC;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC7D0:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,619
	ctx.r4.u64 = ctx.r4.u64 | 619;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC7E0;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC7E4:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,143
	ctx.r4.u64 = ctx.r4.u64 | 143;
	// b 0x82ccc92c
	goto loc_82CCC92C;
loc_82CCC7F4:
	// lhz r11,470(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 470);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,86
	cr6.compare<uint32_t>(ctx.r11.u32, 86, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,88
	cr6.compare<uint32_t>(ctx.r11.u32, 88, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,89
	cr6.compare<uint32_t>(ctx.r11.u32, 89, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,91
	cr6.compare<uint32_t>(ctx.r11.u32, 91, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(ctx.r11.u32, 92, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// beq cr6,0x82ccc934
	if (cr6.eq) goto loc_82CCC934;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,29
	ctx.r4.u64 = ctx.r4.u64 | 29;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC860;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC864:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC874;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC878:
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// bne cr6,0x82ccca84
	if (!cr6.eq) goto loc_82CCCA84;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ccc8a4
	if (!cr6.eq) goto loc_82CCC8A4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC8A0;
	sub_825A1DA8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC8A4:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x82ccc8c4
	if (!cr6.eq) goto loc_82CCC8C4;
loc_82CCC8AC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC8C0;
	sub_825A1DA8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
loc_82CCC8C4:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(ctx.r11.u32, 101, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// cmplwi cr6,r11,69
	cr6.compare<uint32_t>(ctx.r11.u32, 69, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(ctx.r11.u32, 70, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// cmplwi cr6,r11,71
	cr6.compare<uint32_t>(ctx.r11.u32, 71, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// cmplwi cr6,r11,72
	cr6.compare<uint32_t>(ctx.r11.u32, 72, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// beq cr6,0x82ccc8ac
	if (cr6.eq) goto loc_82CCC8AC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC920;
	sub_825A1DA8(ctx, base);
	// addi r5,r23,1
	ctx.r5.s64 = ctx.r23.s64 + 1;
loc_82CCC924:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,18
	ctx.r4.u64 = ctx.r4.u64 | 18;
loc_82CCC92C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82CCC934;
	sub_82D042A8(ctx, base);
loc_82CCC934:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC948;
	sub_825A1DA8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC95C;
	sub_825A1DA8(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82CCC970;
	sub_825A1DA8(ctx, base);
	// stw r22,20(r19)
	PPC_STORE_U32(ctx.r19.u32 + 20, ctx.r22.u32);
	// stw r31,16(r19)
	PPC_STORE_U32(ctx.r19.u32 + 16, ctx.r31.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stb r31,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CCC990;
	sub_8259CB28(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccc9b0
	if (cr6.lt) goto loc_82CCC9B0;
	// stw r30,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r30.u32);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82CCC9B0;
	sub_825952B8(ctx, base);
loc_82CCC9B0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r22,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r22.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// blt cr6,0x82ccc9d8
	if (cr6.lt) goto loc_82CCC9D8;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82CCC9D8;
	sub_825952B8(ctx, base);
loc_82CCC9D8:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x82ccca00
	if (cr6.lt) goto loc_82CCCA00;
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82CCCA00;
	sub_825952B8(ctx, base);
loc_82CCCA00:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x82ccca28
	if (cr6.lt) goto loc_82CCCA28;
	// stw r30,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r30.u32);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CCCA28;
	sub_825952B8(ctx, base);
loc_82CCCA28:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82ccca50
	if (cr6.lt) goto loc_82CCCA50;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82CCCA50;
	sub_825952B8(ctx, base);
loc_82CCCA50:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// blt cr6,0x82ccca78
	if (cr6.lt) goto loc_82CCCA78;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CCCA78;
	sub_825952B8(ctx, base);
loc_82CCCA78:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82CCCA84:
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// addi r5,r23,1
	ctx.r5.s64 = ctx.r23.s64 + 1;
	// rlwinm r10,r11,25,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ccc924
	if (!cr6.eq) goto loc_82CCC924;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccc924
	if (!cr6.eq) goto loc_82CCC924;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// bl 0x82d042a8
	ctx.lr = 0x82CCCAB4;
	sub_82D042A8(ctx, base);
	// b 0x82ccc934
	goto loc_82CCC934;
}

__attribute__((alias("__imp__sub_82CCCAB8"))) PPC_WEAK_FUNC(sub_82CCCAB8);
PPC_FUNC_IMPL(__imp__sub_82CCCAB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CCCAC0;
	__savegprlr_14(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r5.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r4,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r4.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CCCAD8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CCCAE0;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CCCAE8;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCCAF0;
	sub_831156E8(ctx, base);
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// addi r5,r1,532
	ctx.r5.s64 = ctx.r1.s64 + 532;
	// ori r10,r11,52146
	ctx.r10.u64 = ctx.r11.u64 | 52146;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x8319db70
	ctx.lr = 0x82CCCB18;
	sub_8319DB70(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r7,100(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// li r14,0
	ctx.r14.s64 = 0;
	// rlwinm r11,r10,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stb r11,102(r26)
	PPC_STORE_U8(ctx.r26.u32 + 102, ctx.r11.u8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cccb7c
	if (cr6.eq) goto loc_82CCCB7C;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
loc_82CCCB48:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82cccb68
	if (!cr6.eq) goto loc_82CCCB68;
	// lwz r11,116(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// lwz r8,112(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// b 0x82cccb6c
	goto loc_82CCCB6C;
loc_82CCCB68:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82CCCB6C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x82cccb48
	if (cr6.lt) goto loc_82CCCB48;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_82CCCB7C:
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// addi r31,r26,112
	ctx.r31.s64 = ctx.r26.s64 + 112;
	// lwz r10,116(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82cccba4
	if (cr6.gt) goto loc_82CCCBA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCCBA4;
	sub_831CC188(ctx, base);
loc_82CCCBA4:
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82bb0a60
	ctx.lr = 0x82CCCBB4;
	sub_82BB0A60(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// divw. r11,r9,r11
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bne 0x82cccbf4
	if (!cr0.eq) goto loc_82CCCBF4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ccd1f4
	if (cr6.eq) goto loc_82CCD1F4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825952b8
	ctx.lr = 0x82CCCBEC;
	sub_825952B8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CCCBF4:
	// lbz r11,102(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 102);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cccc08
	if (!cr6.eq) goto loc_82CCCC08;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82cccc10
	goto loc_82CCCC10;
loc_82CCCC08:
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82CCCC10:
	// lbz r9,100(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cccc50
	if (cr6.eq) goto loc_82CCCC50;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_82CCCC28:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82cccc40
	if (!cr6.eq) goto loc_82CCCC40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
loc_82CCCC40:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82cccc28
	if (cr6.lt) goto loc_82CCCC28;
loc_82CCCC50:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82cccc74
	if (cr6.gt) goto loc_82CCCC74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCCC74;
	sub_831CC188(ctx, base);
loc_82CCCC74:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82bb0a60
	ctx.lr = 0x82CCCC84;
	sub_82BB0A60(ctx, base);
	// lbz r11,102(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 102);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x82cccc98
	if (!cr6.eq) goto loc_82CCCC98;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82cccca0
	goto loc_82CCCCA0;
loc_82CCCC98:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82CCCCA0:
	// lbz r9,100(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 100);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cccce0
	if (cr6.eq) goto loc_82CCCCE0;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
loc_82CCCCB8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82ccccd0
	if (!cr6.eq) goto loc_82CCCCD0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 4;
loc_82CCCCD0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ccccb8
	if (cr6.lt) goto loc_82CCCCB8;
loc_82CCCCE0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82cccd04
	if (cr6.gt) goto loc_82CCCD04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCCD04;
	sub_831CC188(ctx, base);
loc_82CCCD04:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82bb0a60
	ctx.lr = 0x82CCCD14;
	sub_82BB0A60(ctx, base);
	// addi r15,r26,132
	ctx.r15.s64 = ctx.r26.s64 + 132;
	// addi r31,r29,-1
	ctx.r31.s64 = ctx.r29.s64 + -1;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x834b4ab8
	ctx.lr = 0x82CCCD24;
	sub_834B4AB8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r20,r30,100
	ctx.r20.s64 = ctx.r30.s64 + 100;
	// ori r18,r11,65535
	ctx.r18.u64 = ctx.r11.u64 | 65535;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r18,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r18.u32);
	// bl 0x82dad028
	ctx.lr = 0x82CCCD3C;
	sub_82DAD028(ctx, base);
	// lwz r17,224(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r19,208(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccd1ac
	if (cr6.eq) goto loc_82CCD1AC;
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r21,r31,r27
	ctx.r21.s64 = ctx.r27.s64 - ctx.r31.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r23,15
	ctx.r23.s64 = 15;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r16,-1
	ctx.r16.s64 = -1;
	// add r22,r11,r28
	ctx.r22.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r25,r11,-13100
	ctx.r25.s64 = ctx.r11.s64 + -13100;
loc_82CCCD7C:
	// add r24,r21,r27
	ctx.r24.u64 = ctx.r21.u64 + ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82ccc200
	ctx.lr = 0x82CCCD90;
	sub_82CCC200(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cccda4
	if (cr6.lt) goto loc_82CCCDA4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cccda8
	goto loc_82CCCDA8;
loc_82CCCDA4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CCCDA8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82CCCDB0;
	sub_82D2E228(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// li r30,2
	ctx.r30.s64 = 2;
	// blt cr6,0x82cccdd4
	if (cr6.lt) goto loc_82CCCDD4;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CCCDD4;
	sub_825952B8(ctx, base);
loc_82CCCDD4:
	// stw r23,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r23.u32);
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// stw r14,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r14.u32);
	// addi r4,r25,816
	ctx.r4.s64 = ctx.r25.s64 + 816;
	// stb r14,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r14.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCCDFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r25,-184
	ctx.r4.s64 = ctx.r25.s64 + -184;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCCE1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r4,r25,-88
	ctx.r4.s64 = ctx.r25.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CCCE34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccd1fc
	if (cr6.eq) goto loc_82CCD1FC;
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// addi r4,r25,-1226
	ctx.r4.s64 = ctx.r25.s64 + -1226;
	// stw r14,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r14.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r14,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r14.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8259cc28
	ctx.lr = 0x82CCCE5C;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CCCE70;
	sub_82D291E0(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccce8c
	if (cr6.lt) goto loc_82CCCE8C;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82CCCE8C;
	sub_825952B8(ctx, base);
loc_82CCCE8C:
	// stw r23,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r14,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r14.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r14,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r14.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCCEA8;
	sub_82D2AEC8(ctx, base);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r14,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// bge cr6,0x82cccf30
	if (!cr6.lt) goto loc_82CCCF30;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r9,r17,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r17.s64;
	// divw. r30,r9,r10
	ctx.r30.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82cccfe8
	if (cr0.eq) goto loc_82CCCFE8;
	// add r31,r27,r30
	ctx.r31.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CCCEEC;
	sub_82D294D0(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ccd24c
	if (!cr6.gt) goto loc_82CCD24C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cccfe8
	if (cr6.eq) goto loc_82CCCFE8;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82CCCF20:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82cccf20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CCCF20;
	// b 0x82cccfe8
	goto loc_82CCCFE8;
loc_82CCCF30:
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r31.s32, xer);
	// blt cr6,0x82cccfac
	if (cr6.lt) goto loc_82CCCFAC;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r9,r19,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r19.s64;
	// divw. r30,r9,r10
	ctx.r30.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x82cccfe8
	if (cr0.eq) goto loc_82CCCFE8;
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r31,r11,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// clrldi r4,r10,32
	ctx.r4.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// bl 0x82d294d0
	ctx.lr = 0x82CCCF68;
	sub_82D294D0(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ccd24c
	if (!cr6.gt) goto loc_82CCD24C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x82cccfe8
	if (cr6.eq) goto loc_82CCCFE8;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + ctx.r19.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82CCCF9C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82cccf9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CCCF9C;
	// b 0x82cccfe8
	goto loc_82CCCFE8;
loc_82CCCFAC:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// bl 0x82d294d0
	ctx.lr = 0x82CCCFBC;
	sub_82D294D0(ctx, base);
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// ble cr6,0x82ccd24c
	if (!cr6.gt) goto loc_82CCD24C;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// ble cr6,0x82ccd26c
	if (!cr6.gt) goto loc_82CCD26C;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CCCFDC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82cccfdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CCCFDC;
loc_82CCCFE8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x835bc6a8
	ctx.lr = 0x82CCCFF4;
	sub_835BC6A8(ctx, base);
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,65535
	cr6.compare<uint32_t>(ctx.r31.u32, 65535, xer);
	// beq cr6,0x82ccd070
	if (cr6.eq) goto loc_82CCD070;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8311c3d8
	ctx.lr = 0x82CCD010;
	sub_8311C3D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82CCD024;
	sub_8319DC20(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// bl 0x8319dab0
	ctx.lr = 0x82CCD030;
	sub_8319DAB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bb07d8
	ctx.lr = 0x82CCD03C;
	sub_82BB07D8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ccd070
	if (cr6.eq) goto loc_82CCD070;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x8319edd8
	ctx.lr = 0x82CCD054;
	sub_8319EDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82acebe8
	ctx.lr = 0x82CCD060;
	sub_82ACEBE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccd070
	if (cr6.eq) goto loc_82CCD070;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82CCD070:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccd0a0
	if (cr6.eq) goto loc_82CCD0A0;
	// lwz r11,524(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ccd08c
	if (!cr6.eq) goto loc_82CCD08C;
	// stw r31,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r31.u32);
loc_82CCD08C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ccbab8
	ctx.lr = 0x82CCD09C;
	sub_82CCBAB8(ctx, base);
	// b 0x82ccd16c
	goto loc_82CCD16C;
loc_82CCD0A0:
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x82ccd0f0
	if (cr6.eq) goto loc_82CCD0F0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r24,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r24.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82acef18
	ctx.lr = 0x82CCD0C4;
	sub_82ACEF18(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82ccb718
	ctx.lr = 0x82CCD0D8;
	sub_82CCB718(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82ccbbe8
	ctx.lr = 0x82CCD0EC;
	sub_82CCBBE8(ctx, base);
	// b 0x82ccd16c
	goto loc_82CCD16C;
loc_82CCD0F0:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x82ccd16c
	if (cr6.lt) goto loc_82CCD16C;
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r8,152(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 152);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// ble cr6,0x82ccd278
	if (!cr6.gt) goto loc_82CCD278;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,320(r1)
	PPC_STORE_U16(ctx.r1.u32 + 320, ctx.r10.u16);
	// bl 0x82cd1f28
	ctx.lr = 0x82CCD13C;
	sub_82CD1F28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82CCD140;
	sub_831156E8(ctx, base);
	// lhz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 320);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82CCD14C;
	sub_8311C338(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,88(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// bl 0x82ccbbe8
	ctx.lr = 0x82CCD164;
	sub_82CCBBE8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e638
	ctx.lr = 0x82CCD16C;
	sub_8387E638(ctx, base);
loc_82CCD16C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCD188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r22,r22,20
	ctx.r22.s64 = ctx.r22.s64 + 20;
	// bl 0x82dad028
	ctx.lr = 0x82CCD198;
	sub_82DAD028(ctx, base);
	// add r9,r21,r27
	ctx.r9.u64 = ctx.r21.u64 + ctx.r27.u64;
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// blt cr6,0x82cccd7c
	if (cr6.lt) goto loc_82CCCD7C;
	// lwz r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r30,2
	ctx.r30.s64 = 2;
loc_82CCD1AC:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82ccd1c4
	if (cr6.eq) goto loc_82CCD1C4;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825952b8
	ctx.lr = 0x82CCD1C4;
	sub_825952B8(ctx, base);
loc_82CCD1C4:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x82ccd1dc
	if (cr6.eq) goto loc_82CCD1DC;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825952b8
	ctx.lr = 0x82CCD1DC;
	sub_825952B8(ctx, base);
loc_82CCD1DC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ccd1f4
	if (cr6.eq) goto loc_82CCD1F4;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825952b8
	ctx.lr = 0x82CCD1F4;
	sub_825952B8(ctx, base);
loc_82CCD1F4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CCD1FC:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82ccd214
	if (cr6.eq) goto loc_82CCD214;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x825952b8
	ctx.lr = 0x82CCD214;
	sub_825952B8(ctx, base);
loc_82CCD214:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x82ccd22c
	if (cr6.eq) goto loc_82CCD22C;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825952b8
	ctx.lr = 0x82CCD22C;
	sub_825952B8(ctx, base);
loc_82CCD22C:
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ccd1f4
	if (cr6.eq) goto loc_82CCD1F4;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x82CCD244;
	sub_825952B8(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CCD24C:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82f73d60
	ctx.lr = 0x82CCD254;
	sub_82F73D60(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82f73d60
	ctx.lr = 0x82CCD25C;
	sub_82F73D60(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82f73d60
	ctx.lr = 0x82CCD264;
	sub_82F73D60(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CCD26C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCD278;
	sub_831CC188(ctx, base);
loc_82CCD278:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCD284;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CCD284"))) PPC_WEAK_FUNC(sub_82CCD284);
PPC_FUNC_IMPL(__imp__sub_82CCD284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD288"))) PPC_WEAK_FUNC(sub_82CCD288);
PPC_FUNC_IMPL(__imp__sub_82CCD288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CCD290;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r4.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCD2A4;
	sub_831156E8(ctx, base);
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCD2B8;
	sub_8311C3D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x82CCD2C8;
	sub_8311C338(ctx, base);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8311c148
	ctx.lr = 0x82CCD2E0;
	sub_8311C148(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8311c148
	ctx.lr = 0x82CCD2F0;
	sub_8311C148(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// addi r28,r11,-12724
	ctx.r28.s64 = ctx.r11.s64 + -12724;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r28,-192
	ctx.r4.s64 = ctx.r28.s64 + -192;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCD318;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r28,-104
	ctx.r4.s64 = ctx.r28.s64 + -104;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CCD334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r28,448
	ctx.r4.s64 = ctx.r28.s64 + 448;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CCD350;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r28,464
	ctx.r4.s64 = ctx.r28.s64 + 464;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCD36C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r28,480
	ctx.r4.s64 = ctx.r28.s64 + 480;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCD388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ccd5a4
	if (cr6.eq) goto loc_82CCD5A4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82ccd5a4
	if (cr6.eq) goto loc_82CCD5A4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82ccd5a4
	if (cr6.eq) goto loc_82CCD5A4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82ccd5a4
	if (cr6.eq) goto loc_82CCD5A4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccd5a4
	if (cr6.eq) goto loc_82CCD5A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCD3D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ccd408
	if (cr6.eq) goto loc_82CCD408;
	// lbz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r9,23(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 23);
	// lbz r11,21(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 21);
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 20);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ccd414
	goto loc_82CCD414;
loc_82CCD408:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82CCD414:
	// bl 0x82ccbe18
	ctx.lr = 0x82CCD418;
	sub_82CCBE18(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCD428;
	sub_82D2AEC8(ctx, base);
	// lwz r11,324(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 324);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ccd448
	if (cr6.eq) goto loc_82CCD448;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82CCD448:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CCD45C;
	sub_82D329F8(ctx, base);
	// stb r31,317(r27)
	PPC_STORE_U8(ctx.r27.u32 + 317, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCD470;
	sub_82D2AEC8(ctx, base);
	// lwz r11,324(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r30,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ccd488
	if (cr6.eq) goto loc_82CCD488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82CCD488:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CCD49C;
	sub_82D329F8(ctx, base);
	// stb r31,317(r26)
	PPC_STORE_U8(ctx.r26.u32 + 317, ctx.r31.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCD4B0;
	sub_82D2AEC8(ctx, base);
	// addi r4,r22,4
	ctx.r4.s64 = ctx.r22.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CCD4BC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CCD4D0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCD4D8;
	sub_8387E8E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCD4E8;
	sub_82D2AEC8(ctx, base);
	// addi r4,r21,4
	ctx.r4.s64 = ctx.r21.s64 + 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CCD4F4;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CCD508;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCD510;
	sub_8387E8E0(ctx, base);
	// lwz r11,128(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 128);
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ccd5a4
	if (!cr6.eq) goto loc_82CCD5A4;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,14
	ctx.r4.u64 = ctx.r4.u64 | 14;
	// bl 0x82d042a8
	ctx.lr = 0x82CCD540;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,332
	ctx.r4.s64 = ctx.r1.s64 + 332;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83162d40
	ctx.lr = 0x82CCD554;
	sub_83162D40(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a6b900
	ctx.lr = 0x82CCD564;
	sub_82A6B900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82CCD578;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCD580;
	sub_8387E8E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CCD594;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCD59C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCD5A4;
	sub_8387E8E0(ctx, base);
loc_82CCD5A4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCD5AC"))) PPC_WEAK_FUNC(sub_82CCD5AC);
PPC_FUNC_IMPL(__imp__sub_82CCD5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD5B0"))) PPC_WEAK_FUNC(sub_82CCD5B0);
PPC_FUNC_IMPL(__imp__sub_82CCD5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCD5B8;
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
	// beq cr6,0x82ccd5fc
	if (cr6.eq) goto loc_82CCD5FC;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82CCD5D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ccd5ec
	if (cr6.eq) goto loc_82CCD5EC;
	// lhzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// bl 0x82cd1f28
	ctx.lr = 0x82CCD5EC;
	sub_82CD1F28(ctx, base);
loc_82CCD5EC:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82ccd5d0
	if (!cr6.eq) goto loc_82CCD5D0;
loc_82CCD5FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCD608"))) PPC_WEAK_FUNC(sub_82CCD608);
PPC_FUNC_IMPL(__imp__sub_82CCD608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CCD610;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ccd634
	if (!cr6.gt) goto loc_82CCD634;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CCD634;
	sub_831CC150(ctx, base);
loc_82CCD634:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82ccd6f0
	if (!cr6.lt) goto loc_82CCD6F0;
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r26,r4,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82CCD668;
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
	// beq cr6,0x82ccd6a4
	if (cr6.eq) goto loc_82CCD6A4;
loc_82CCD680:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ccd694
	if (cr6.eq) goto loc_82CCD694;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bb0a60
	ctx.lr = 0x82CCD694;
	sub_82BB0A60(ctx, base);
loc_82CCD694:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ccd680
	if (!cr6.eq) goto loc_82CCD680;
loc_82CCD6A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r30,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 4;
	// beq cr6,0x82ccd6d8
	if (cr6.eq) goto loc_82CCD6D8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bbbf28
	ctx.lr = 0x82CCD6C8;
	sub_82BBBF28(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CCD6D8;
	sub_825952B8(ctx, base);
loc_82CCD6D8:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
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
loc_82CCD6F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCD6F8"))) PPC_WEAK_FUNC(sub_82CCD6F8);
PPC_FUNC_IMPL(__imp__sub_82CCD6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ccd728
	if (!cr6.lt) goto loc_82CCD728;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82CCD728:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
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
	// blt cr6,0x82ccd758
	if (cr6.lt) goto loc_82CCD758;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CCD758:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x82ccd764
	if (!cr6.lt) goto loc_82CCD764;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82CCD764:
	// b 0x82ccd608
	sub_82CCD608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCD768"))) PPC_WEAK_FUNC(sub_82CCD768);
PPC_FUNC_IMPL(__imp__sub_82CCD768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CCD76C"))) PPC_WEAK_FUNC(sub_82CCD76C);
PPC_FUNC_IMPL(__imp__sub_82CCD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD770"))) PPC_WEAK_FUNC(sub_82CCD770);
PPC_FUNC_IMPL(__imp__sub_82CCD770) {
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
	// bge cr6,0x82ccd7a8
	if (!cr6.lt) goto loc_82CCD7A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82ccd7ac
	if (!cr6.gt) goto loc_82CCD7AC;
loc_82CCD7A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CCD7AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccd7f8
	if (cr6.eq) goto loc_82CCD7F8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r10,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// srawi r30,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 4;
	// bne cr6,0x82ccd7dc
	if (!cr6.eq) goto loc_82CCD7DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd6f8
	ctx.lr = 0x82CCD7DC;
	sub_82CCD6F8(ctx, base);
loc_82CCD7DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccd824
	if (cr6.eq) goto loc_82CCD824;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82ccd820
	goto loc_82CCD820;
loc_82CCD7F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ccd810
	if (!cr6.eq) goto loc_82CCD810;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccd6f8
	ctx.lr = 0x82CCD810;
	sub_82CCD6F8(ctx, base);
loc_82CCD810:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccd824
	if (cr6.eq) goto loc_82CCD824;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82CCD820:
	// bl 0x82bb0a60
	ctx.lr = 0x82CCD824;
	sub_82BB0A60(ctx, base);
loc_82CCD824:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82CCD848"))) PPC_WEAK_FUNC(sub_82CCD848);
PPC_FUNC_IMPL(__imp__sub_82CCD848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CCD850;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-12096
	ctx.r9.s64 = ctx.r11.s64 + -12096;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,148
	ctx.r31.s64 = ctx.r3.s64 + 148;
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccd8a4
	if (cr6.eq) goto loc_82CCD8A4;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831b31b0
	ctx.lr = 0x82CCD894;
	sub_831B31B0(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CCD8A4;
	sub_825952B8(ctx, base);
loc_82CCD8A4:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ccd8cc
	if (cr6.eq) goto loc_82CCD8CC;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82CCD8CC;
	sub_825952B8(ctx, base);
loc_82CCD8CC:
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// stw r29,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r29.u32);
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccd908
	if (cr6.eq) goto loc_82CCD908;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bbbf28
	ctx.lr = 0x82CCD8F8;
	sub_82BBBF28(ctx, base);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CCD908;
	sub_825952B8(ctx, base);
loc_82CCD908:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bl 0x82d25548
	ctx.lr = 0x82CCD91C;
	sub_82D25548(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCD924"))) PPC_WEAK_FUNC(sub_82CCD924);
PPC_FUNC_IMPL(__imp__sub_82CCD924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCD928"))) PPC_WEAK_FUNC(sub_82CCD928);
PPC_FUNC_IMPL(__imp__sub_82CCD928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CCD930;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82CCD948:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// ble cr6,0x82ccd958
	if (!cr6.gt) goto loc_82CCD958;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CCD958:
	// lbz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 100);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ccd97c
	if (!cr6.eq) goto loc_82CCD97C;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccd9d0
	if (!cr6.eq) goto loc_82CCD9D0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ccd97c
	if (!cr6.eq) goto loc_82CCD97C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CCD97C:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccbf30
	ctx.lr = 0x82CCD998;
	sub_82CCBF30(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x82ccd770
	ctx.lr = 0x82CCD9A4;
	sub_82CCD770(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ccd9bc
	if (cr6.eq) goto loc_82CCD9BC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82CCD9BC;
	sub_825952B8(ctx, base);
loc_82CCD9BC:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// b 0x82ccd948
	goto loc_82CCD948;
loc_82CCD9D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCD9D8"))) PPC_WEAK_FUNC(sub_82CCD9D8);
PPC_FUNC_IMPL(__imp__sub_82CCD9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCD9E0;
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
	ctx.lr = 0x82CCD9F4;
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
	ctx.lr = 0x82CCDA0C;
	sub_82D253F8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stb r10,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r10.u8);
	// lis r7,0
	ctx.r7.s64 = 0;
	// stb r10,102(r31)
	PPC_STORE_U8(ctx.r31.u32 + 102, ctx.r10.u8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,-12096
	ctx.r6.s64 = ctx.r9.s64 + -12096;
	// addi r5,r8,-17088
	ctx.r5.s64 = ctx.r8.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// li r3,364
	ctx.r3.s64 = 364;
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// stb r4,101(r31)
	PPC_STORE_U8(ctx.r31.u32 + 101, ctx.r4.u8);
	// ori r9,r7,65535
	ctx.r9.u64 = ctx.r7.u64 | 65535;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// addi r10,r10,8584
	ctx.r10.s64 = ctx.r10.s64 + 8584;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_82CCDA8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82d20ae0
	ctx.lr = 0x82CCDA98;
	sub_82D20AE0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x82ccda8c
	if (!cr0.eq) goto loc_82CCDA8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCDAAC"))) PPC_WEAK_FUNC(sub_82CCDAAC);
PPC_FUNC_IMPL(__imp__sub_82CCDAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCDAB0"))) PPC_WEAK_FUNC(sub_82CCDAB0);
PPC_FUNC_IMPL(__imp__sub_82CCDAB0) {
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
	// bl 0x82ccd848
	ctx.lr = 0x82CCDAD0;
	sub_82CCD848(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccdae8
	if (cr6.eq) goto loc_82CCDAE8;
	// bl 0x82416268
	ctx.lr = 0x82CCDAE4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CCDAE8:
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

__attribute__((alias("__imp__sub_82CCDB00"))) PPC_WEAK_FUNC(sub_82CCDB00);
PPC_FUNC_IMPL(__imp__sub_82CCDB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CCDB08;
	__savegprlr_14(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// bl 0x82d34e50
	ctx.lr = 0x82CCDB20;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82CCDB24;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccdb3c
	if (!cr6.eq) goto loc_82CCDB3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CCDB3C:
	// bl 0x831156e8
	ctx.lr = 0x82CCDB40;
	sub_831156E8(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r31,r10,-14360
	ctx.r31.s64 = ctx.r10.s64 + -14360;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r24,48(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x831178a0
	ctx.lr = 0x82CCDB68;
	sub_831178A0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x831178a0
	ctx.lr = 0x82CCDB84;
	sub_831178A0(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8316fb10
	ctx.lr = 0x82CCDB94;
	sub_8316FB10(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r3.u16);
	// cmplwi cr6,r8,99
	cr6.compare<uint32_t>(ctx.r8.u32, 99, xer);
	// bne cr6,0x82ccdbb0
	if (!cr6.eq) goto loc_82CCDBB0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x83153330
	ctx.lr = 0x82CCDBAC;
	sub_83153330(ctx, base);
	// b 0x82ccdbb8
	goto loc_82CCDBB8;
loc_82CCDBB0:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8314c958
	ctx.lr = 0x82CCDBB8;
	sub_8314C958(ctx, base);
loc_82CCDBB8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r5,r22,104
	ctx.r5.s64 = ctx.r22.s64 + 104;
	// addi r31,r22,108
	ctx.r31.s64 = ctx.r22.s64 + 108;
	// bne cr6,0x82ccdbdc
	if (!cr6.eq) goto loc_82CCDBDC;
	// li r11,181
	ctx.r11.s64 = 181;
	// li r10,180
	ctx.r10.s64 = 180;
	// stw r11,104(r22)
	PPC_STORE_U32(ctx.r22.u32 + 104, ctx.r11.u32);
	// stw r10,108(r22)
	PPC_STORE_U32(ctx.r22.u32 + 108, ctx.r10.u32);
	// b 0x82ccdbe8
	goto loc_82CCDBE8;
loc_82CCDBDC:
	// li r11,364
	ctx.r11.s64 = 364;
	// stw r28,104(r22)
	PPC_STORE_U32(ctx.r22.u32 + 104, ctx.r28.u32);
	// stw r11,108(r22)
	PPC_STORE_U32(ctx.r22.u32 + 108, ctx.r11.u32);
loc_82CCDBE8:
	// addis r30,r24,195
	ctx.r30.s64 = ctx.r24.s64 + 12779520;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,-13390
	ctx.r30.s64 = ctx.r30.s64 + -13390;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x8319db70
	ctx.lr = 0x82CCDC04;
	sub_8319DB70(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,100(r22)
	PPC_STORE_U8(ctx.r22.u32 + 100, ctx.r9.u8);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// bl 0x8319db70
	ctx.lr = 0x82CCDC28;
	sub_8319DB70(ctx, base);
	// lis r7,194
	ctx.r7.s64 = 12713984;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// ori r6,r7,52144
	ctx.r6.u64 = ctx.r7.u64 | 52144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// stb r11,101(r22)
	PPC_STORE_U8(ctx.r22.u32 + 101, ctx.r11.u8);
	// lhzx r10,r24,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + ctx.r6.u32);
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// bl 0x8319db70
	ctx.lr = 0x82CCDC58;
	sub_8319DB70(ctx, base);
	// lbz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r7,99
	ctx.r7.s64 = 6488064;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stb r8,102(r22)
	PPC_STORE_U8(ctx.r22.u32 + 102, ctx.r8.u8);
	// lis r8,85
	ctx.r8.s64 = 5570560;
	// lwz r9,8828(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8828);
	// ori r14,r10,60648
	ctx.r14.u64 = ctx.r10.u64 | 60648;
	// ori r15,r8,11904
	ctx.r15.u64 = ctx.r8.u64 | 11904;
	// li r17,2
	ctx.r17.s64 = 2;
	// li r21,12
	ctx.r21.s64 = 12;
	// ori r20,r7,11884
	ctx.r20.u64 = ctx.r7.u64 | 11884;
loc_82CCDC90:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// add r19,r10,r11
	ctx.r19.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// xor r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// rlwinm r8,r10,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ccdcc4
	if (!cr6.eq) goto loc_82CCDCC4;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccdcc8
	if (cr6.eq) goto loc_82CCDCC8;
loc_82CCDCC4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CCDCC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cce3d8
	if (!cr6.eq) goto loc_82CCE3D8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82CCDCE0;
	sub_8311C148(ctx, base);
	// lwzx r11,r24,r14
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r14.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// add r16,r24,r14
	ctx.r16.u64 = ctx.r24.u64 + ctx.r14.u64;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82cce3c4
	if (!cr6.gt) goto loc_82CCE3C4;
loc_82CCDD08:
	// cmplwi cr6,r18,300
	cr6.compare<uint32_t>(ctx.r18.u32, 300, xer);
	// blt cr6,0x82ccdd1c
	if (cr6.lt) goto loc_82CCDD1C;
	// addis r27,r24,96
	ctx.r27.s64 = ctx.r24.s64 + 6291456;
	// addi r27,r27,-6080
	ctx.r27.s64 = ctx.r27.s64 + -6080;
	// b 0x82ccdd28
	goto loc_82CCDD28;
loc_82CCDD1C:
	// mulli r11,r18,548
	ctx.r11.s64 = ctx.r18.s64 * 548;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r27,r11,r15
	ctx.r27.u64 = ctx.r11.u64 + ctx.r15.u64;
loc_82CCDD28:
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r9,r29,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r29.s64;
	// srawi r10,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccdd54
	if (cr6.eq) goto loc_82CCDD54;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// ble cr6,0x82cce410
	if (!cr6.gt) goto loc_82CCE410;
loc_82CCDD48:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ccdd48
	if (cr6.gt) goto loc_82CCDD48;
loc_82CCDD54:
	// lwz r11,88(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x8316f790
	ctx.lr = 0x82CCDD6C;
	sub_8316F790(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cce208
	if (!cr6.eq) goto loc_82CCE208;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ccae80
	ctx.lr = 0x82CCDD88;
	sub_82CCAE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce208
	if (cr6.eq) goto loc_82CCE208;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x82ccddc4
	if (cr6.eq) goto loc_82CCDDC4;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// beq cr6,0x82ccddc4
	if (cr6.eq) goto loc_82CCDDC4;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// beq cr6,0x82ccddbc
	if (cr6.eq) goto loc_82CCDDBC;
	// cmplwi cr6,r11,101
	cr6.compare<uint32_t>(ctx.r11.u32, 101, xer);
	// bne cr6,0x82ccddd4
	if (!cr6.eq) goto loc_82CCDDD4;
loc_82CCDDBC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ccddc8
	goto loc_82CCDDC8;
loc_82CCDDC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CCDDC8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x83572958
	ctx.lr = 0x82CCDDD0;
	sub_83572958(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82CCDDD4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ccaf50
	ctx.lr = 0x82CCDDE4;
	sub_82CCAF50(ctx, base);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// bl 0x82a683c0
	ctx.lr = 0x82CCDE04;
	sub_82A683C0(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82ccde40
	if (cr6.eq) goto loc_82CCDE40;
	// lhz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// bl 0x82a68348
	ctx.lr = 0x82CCDE18;
	sub_82A68348(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccde40
	if (!cr6.eq) goto loc_82CCDE40;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cce1fc
	if (cr6.eq) goto loc_82CCE1FC;
	// stw r17,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r17.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x825952b8
	ctx.lr = 0x82CCDE3C;
	sub_825952B8(ctx, base);
	// b 0x82cce1fc
	goto loc_82CCE1FC;
loc_82CCDE40:
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lhz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// bl 0x831c9500
	ctx.lr = 0x82CCDE4C;
	sub_831C9500(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r21
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82cce154
	if (cr0.eq) goto loc_82CCE154;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cce154
	if (!cr6.eq) goto loc_82CCE154;
	// lwz r11,536(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 536);
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ccde88
	if (!cr6.eq) goto loc_82CCDE88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r22,148
	ctx.r3.s64 = ctx.r22.s64 + 148;
	// bl 0x831b7a28
	ctx.lr = 0x82CCDE88;
	sub_831B7A28(ctx, base);
loc_82CCDE88:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce154
	if (cr6.eq) goto loc_82CCE154;
	// lwz r11,92(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82cce154
	if (!cr6.eq) goto loc_82CCE154;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82c168a8
	ctx.lr = 0x82CCDEA8;
	sub_82C168A8(ctx, base);
	// lwz r11,532(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 532);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// rlwinm r10,r11,0,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cce03c
	if (cr6.eq) goto loc_82CCE03C;
	// addi r30,r27,96
	ctx.r30.s64 = ctx.r27.s64 + 96;
loc_82CCDEC0:
	// cmplwi cr6,r31,58
	cr6.compare<uint32_t>(ctx.r31.u32, 58, xer);
	// bge cr6,0x82ccded4
	if (!cr6.lt) goto loc_82CCDED4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1500
	cr6.compare<uint32_t>(ctx.r11.u32, 1500, xer);
	// blt cr6,0x82ccdedc
	if (cr6.lt) goto loc_82CCDEDC;
loc_82CCDED4:
	// add r4,r24,r20
	ctx.r4.u64 = ctx.r24.u64 + ctx.r20.u64;
	// b 0x82ccdee8
	goto loc_82CCDEE8;
loc_82CCDEDC:
	// mulli r11,r11,520
	ctx.r11.s64 = ctx.r11.s64 * 520;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r4,r11,r20
	ctx.r4.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_82CCDEE8:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82c16910
	ctx.lr = 0x82CCDEF0;
	sub_82C16910(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lwz r10,804(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x83196f58
	ctx.lr = 0x82CCDF14;
	sub_83196F58(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cce024
	if (cr6.eq) goto loc_82CCE024;
	// lwz r11,804(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r5,r11,26,6,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82cce024
	if (cr6.eq) goto loc_82CCE024;
	// lwz r8,0(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
loc_82CCDF3C:
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// bge cr6,0x82ccdf4c
	if (!cr6.lt) goto loc_82CCDF4C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82CCDF4C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,252
	ctx.r10.s64 = ctx.r1.s64 + 252;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82CCDF5C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ccdf5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CCDF5C;
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// rlwinm r10,r8,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x3FFF;
	// ori r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 | 1;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ccdf94
	if (!cr6.eq) goto loc_82CCDF94;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ccdf98
	if (cr6.eq) goto loc_82CCDF98;
loc_82CCDF94:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CCDF98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccdfe0
	if (!cr6.eq) goto loc_82CCDFE0;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ccdfcc
	if (!cr6.eq) goto loc_82CCDFCC;
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccdfd0
	if (cr6.eq) goto loc_82CCDFD0;
loc_82CCDFCC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CCDFD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ccdfe4
	if (cr6.eq) goto loc_82CCDFE4;
loc_82CCDFE0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82CCDFE4:
	// rlwinm r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ccdff8
	if (cr6.eq) goto loc_82CCDFF8;
	// rlwinm r26,r26,0,31,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82CCDFF8:
	// clrlwi r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82cce008
	if (cr6.eq) goto loc_82CCE008;
	// rlwinm r26,r26,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
loc_82CCE008:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce03c
	if (cr6.eq) goto loc_82CCE03C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// blt cr6,0x82ccdf3c
	if (cr6.lt) goto loc_82CCDF3C;
loc_82CCE024:
	// lwz r11,532(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 532);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r11,25,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ccdec0
	if (cr6.lt) goto loc_82CCDEC0;
loc_82CCE03C:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r11,r9,r21
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lhz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// sth r8,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r8.u16);
	// beq 0x82cce0ec
	if (cr0.eq) goto loc_82CCE0EC;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x82cce41c
	if (!cr6.gt) goto loc_82CCE41C;
loc_82CCE074:
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,804(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bgt cr6,0x82cce0cc
	if (cr6.gt) goto loc_82CCE0CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83196f58
	ctx.lr = 0x82CCE09C;
	sub_83196F58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce0cc
	if (cr6.eq) goto loc_82CCE0CC;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r21
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// ble cr6,0x82cce428
	if (!cr6.gt) goto loc_82CCE428;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82d54828
	ctx.lr = 0x82CCE0CC;
	sub_82D54828(ctx, base);
loc_82CCE0CC:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r9,r21
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82cce074
	if (cr6.gt) goto loc_82CCE074;
loc_82CCE0EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r4,80(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 80);
	// bl 0x8311c338
	ctx.lr = 0x82CCE0F8;
	sub_8311C338(ctx, base);
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cce124
	if (cr6.eq) goto loc_82CCE124;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ccae80
	ctx.lr = 0x82CCE118;
	sub_82CCAE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cce360
	if (!cr6.eq) goto loc_82CCE360;
loc_82CCE124:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r22,148
	ctx.r3.s64 = ctx.r22.s64 + 148;
	// bl 0x831b7a28
	ctx.lr = 0x82CCE130;
	sub_831B7A28(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cce148
	if (cr6.eq) goto loc_82CCE148;
	// stw r17,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r17.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x825952b8
	ctx.lr = 0x82CCE148;
	sub_825952B8(ctx, base);
loc_82CCE148:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
loc_82CCE154:
	// lhz r29,80(r27)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r27.u32 + 80);
loc_82CCE158:
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
loc_82CCE15C:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82cce178
	if (!cr6.eq) goto loc_82CCE178;
	// lhz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 84);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// beq cr6,0x82cce1e0
	if (cr6.eq) goto loc_82CCE1E0;
loc_82CCE178:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82badd90
	ctx.lr = 0x82CCE184;
	sub_82BADD90(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x82CCE194;
	sub_8311C338(ctx, base);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cce1ac
	if (!cr6.eq) goto loc_82CCE1AC;
	// lhz r29,80(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// b 0x82cce158
	goto loc_82CCE158;
loc_82CCE1AC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x8316f790
	ctx.lr = 0x82CCE1C4;
	sub_8316F790(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cce21c
	if (cr6.eq) goto loc_82CCE21C;
	// lhz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(ctx.r29.u32, 65535, xer);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// bne cr6,0x82cce15c
	if (!cr6.eq) goto loc_82CCE15C;
loc_82CCE1E0:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cce1f8
	if (cr6.eq) goto loc_82CCE1F8;
	// stw r17,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825952b8
	ctx.lr = 0x82CCE1F8;
	sub_825952B8(ctx, base);
loc_82CCE1F8:
	// lwz r29,192(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82CCE1FC:
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
loc_82CCE208:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, xer);
	// blt cr6,0x82ccdd08
	if (cr6.lt) goto loc_82CCDD08;
	// b 0x82cce3a8
	goto loc_82CCE3A8;
loc_82CCE21C:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cce248
	if (cr6.eq) goto loc_82CCE248;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ccae80
	ctx.lr = 0x82CCE23C;
	sub_82CCAE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce1e0
	if (cr6.eq) goto loc_82CCE1E0;
loc_82CCE248:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ccaf50
	ctx.lr = 0x82CCE258;
	sub_82CCAF50(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// bl 0x8311c338
	ctx.lr = 0x82CCE268;
	sub_8311C338(ctx, base);
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cce294
	if (cr6.eq) goto loc_82CCE294;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ccae80
	ctx.lr = 0x82CCE288;
	sub_82CCAE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce1e0
	if (cr6.eq) goto loc_82CCE1E0;
loc_82CCE294:
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// sth r29,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r29.u16);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// lwz r30,88(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a683c0
	ctx.lr = 0x82CCE2B0;
	sub_82A683C0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82cce2f8
	if (cr6.eq) goto loc_82CCE2F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a68348
	ctx.lr = 0x82CCE2C4;
	sub_82A68348(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cce2f8
	if (!cr6.eq) goto loc_82CCE2F8;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cce2e8
	if (cr6.eq) goto loc_82CCE2E8;
	// stw r17,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r17.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x825952b8
	ctx.lr = 0x82CCE2E8;
	sub_825952B8(ctx, base);
loc_82CCE2E8:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// b 0x82cce15c
	goto loc_82CCE15C;
loc_82CCE2F8:
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831c9500
	ctx.lr = 0x82CCE304;
	sub_831C9500(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw. r9,r10,r21
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r21.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82cce334
	if (cr0.eq) goto loc_82CCE334;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce334
	if (cr6.eq) goto loc_82CCE334;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r22,148
	ctx.r3.s64 = ctx.r22.s64 + 148;
	// bl 0x831b7a28
	ctx.lr = 0x82CCE330;
	sub_831B7A28(ctx, base);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82CCE334:
	// lhz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// beq cr6,0x82cce350
	if (cr6.eq) goto loc_82CCE350;
	// stw r17,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r17.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x825952b8
	ctx.lr = 0x82CCE350;
	sub_825952B8(ctx, base);
loc_82CCE350:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// b 0x82cce15c
	goto loc_82CCE15C;
loc_82CCE360:
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cce378
	if (cr6.eq) goto loc_82CCE378;
	// stw r17,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r17.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x825952b8
	ctx.lr = 0x82CCE378;
	sub_825952B8(ctx, base);
loc_82CCE378:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// beq cr6,0x82cce39c
	if (cr6.eq) goto loc_82CCE39C;
	// stw r17,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r17.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x825952b8
	ctx.lr = 0x82CCE39C;
	sub_825952B8(ctx, base);
loc_82CCE39C:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
loc_82CCE3A8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cce3c0
	if (cr6.eq) goto loc_82CCE3C0;
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x825952b8
	ctx.lr = 0x82CCE3C0;
	sub_825952B8(ctx, base);
loc_82CCE3C0:
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CCE3C4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// lwz r9,8828(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8828);
loc_82CCE3D8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// blt cr6,0x82ccdc90
	if (cr6.lt) goto loc_82CCDC90;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82ccd928
	ctx.lr = 0x82CCE3F0;
	sub_82CCD928(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCE404;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CCE410:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCE41C;
	sub_831CC188(ctx, base);
loc_82CCE41C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCE428;
	sub_831CC188(ctx, base);
loc_82CCE428:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCE434;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CCE434"))) PPC_WEAK_FUNC(sub_82CCE434);
PPC_FUNC_IMPL(__imp__sub_82CCE434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCE438"))) PPC_WEAK_FUNC(sub_82CCE438);
PPC_FUNC_IMPL(__imp__sub_82CCE438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x831156e8
	ctx.lr = 0x82CCE454;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82CCE45C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x8311c3d8
	ctx.lr = 0x82CCE470;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r31,r8,28,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFF;
	// bl 0x825832d8
	ctx.lr = 0x82CCE488;
	sub_825832D8(ctx, base);
	// subf r7,r31,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r31.s64;
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r3,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
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

__attribute__((alias("__imp__sub_82CCE4AC"))) PPC_WEAK_FUNC(sub_82CCE4AC);
PPC_FUNC_IMPL(__imp__sub_82CCE4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCE4B0"))) PPC_WEAK_FUNC(sub_82CCE4B0);
PPC_FUNC_IMPL(__imp__sub_82CCE4B0) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce4fc
	if (cr6.eq) goto loc_82CCE4FC;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CCE4DC;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CCE4E8;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CCE4F0;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce56c
	if (cr6.eq) goto loc_82CCE56C;
loc_82CCE4FC:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CCE504;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CCE510;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CCE518;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cce55c
	if (!cr6.eq) goto loc_82CCE55C;
	// bl 0x82d19a68
	ctx.lr = 0x82CCE52C;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-10660
	ctx.r11.s64 = ctx.r11.s64 + -10660;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCE54C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x82CCE550;
	sub_82D26ED8(ctx, base);
	// li r4,116
	ctx.r4.s64 = 116;
	// bl 0x82d26b30
	ctx.lr = 0x82CCE558;
	sub_82D26B30(ctx, base);
	// b 0x82cce56c
	goto loc_82CCE56C;
loc_82CCE55C:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-10660
	ctx.r5.s64 = ctx.r11.s64 + -10660;
	// bl 0x82d20da8
	ctx.lr = 0x82CCE56C;
	sub_82D20DA8(ctx, base);
loc_82CCE56C:
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

__attribute__((alias("__imp__sub_82CCE584"))) PPC_WEAK_FUNC(sub_82CCE584);
PPC_FUNC_IMPL(__imp__sub_82CCE584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCE588"))) PPC_WEAK_FUNC(sub_82CCE588);
PPC_FUNC_IMPL(__imp__sub_82CCE588) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce5d4
	if (cr6.eq) goto loc_82CCE5D4;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CCE5B4;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CCE5C0;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CCE5C8;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cce644
	if (cr6.eq) goto loc_82CCE644;
loc_82CCE5D4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CCE5DC;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CCE5E8;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CCE5F0;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cce634
	if (!cr6.eq) goto loc_82CCE634;
	// bl 0x82d19a68
	ctx.lr = 0x82CCE604;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-10644
	ctx.r11.s64 = ctx.r11.s64 + -10644;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCE624;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d26ed8
	ctx.lr = 0x82CCE628;
	sub_82D26ED8(ctx, base);
	// li r4,117
	ctx.r4.s64 = 117;
	// bl 0x82d26b30
	ctx.lr = 0x82CCE630;
	sub_82D26B30(ctx, base);
	// b 0x82cce644
	goto loc_82CCE644;
loc_82CCE634:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-10644
	ctx.r5.s64 = ctx.r11.s64 + -10644;
	// bl 0x82d20da8
	ctx.lr = 0x82CCE644;
	sub_82D20DA8(ctx, base);
loc_82CCE644:
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

__attribute__((alias("__imp__sub_82CCE65C"))) PPC_WEAK_FUNC(sub_82CCE65C);
PPC_FUNC_IMPL(__imp__sub_82CCE65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCE660"))) PPC_WEAK_FUNC(sub_82CCE660);
PPC_FUNC_IMPL(__imp__sub_82CCE660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CCE668;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r26,r11,26,6,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82cce6d4
	if (cr6.eq) goto loc_82CCE6D4;
	// addi r25,r4,4
	ctx.r25.s64 = ctx.r4.s64 + 4;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82CCE68C:
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(ctx.r29.u32, 16, xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bge cr6,0x82cce69c
	if (!cr6.lt) goto loc_82CCE69C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82CCE69C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82CCE6A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CCE6AC;
	sub_8312DB38(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x82cce6e0
	if (cr6.eq) goto loc_82CCE6E0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82cce6a0
	if (cr6.lt) goto loc_82CCE6A0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x82cce68c
	if (cr6.lt) goto loc_82CCE68C;
loc_82CCE6D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CCE6E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCE6EC"))) PPC_WEAK_FUNC(sub_82CCE6EC);
PPC_FUNC_IMPL(__imp__sub_82CCE6EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCE6F0"))) PPC_WEAK_FUNC(sub_82CCE6F0);
PPC_FUNC_IMPL(__imp__sub_82CCE6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// subfic r5,r6,1
	xer.ca = ctx.r6.u32 <= 1;
	ctx.r5.s64 = 1 - ctx.r6.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 & ctx.r8.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82d19788
	ctx.lr = 0x82CCE738;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82d19788
	ctx.lr = 0x82CCE748;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19788
	ctx.lr = 0x82CCE758;
	sub_82D19788(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,108
	ctx.r5.s64 = 7077888;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,140
	ctx.r5.u64 = ctx.r5.u64 | 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,96(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 96);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCE778;
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

__attribute__((alias("__imp__sub_82CCE790"))) PPC_WEAK_FUNC(sub_82CCE790);
PPC_FUNC_IMPL(__imp__sub_82CCE790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CCE798;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,100(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r30,r4,100
	ctx.r30.s64 = ctx.r4.s64 + 100;
	// lbz r10,21(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 21);
	// addi r29,r8,-10928
	ctx.r29.s64 = ctx.r8.s64 + -10928;
	// lbz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CCE7D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE7DC;
	sub_82D294D0(ctx, base);
	// lbz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 24);
	// lbz r11,23(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCE800;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE808;
	sub_82D294D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCE810"))) PPC_WEAK_FUNC(sub_82CCE810);
PPC_FUNC_IMPL(__imp__sub_82CCE810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CCE818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r11,22(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 22);
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lbz r28,25(r5)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r5.u32 + 25);
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x82cce844
	if (!cr6.eq) goto loc_82CCE844;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82cce848
	goto loc_82CCE848;
loc_82CCE844:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82CCE848:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r31,r27,100
	ctx.r31.s64 = ctx.r27.s64 + 100;
	// addi r30,r10,-10892
	ctx.r30.s64 = ctx.r10.s64 + -10892;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCE86C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r29
	ctx.r4.s64 = ctx.r29.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE874;
	sub_82D294D0(ctx, base);
	// lwz r8,100(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCE88C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE894;
	sub_82D294D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCE89C"))) PPC_WEAK_FUNC(sub_82CCE89C);
PPC_FUNC_IMPL(__imp__sub_82CCE89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCE8A0"))) PPC_WEAK_FUNC(sub_82CCE8A0);
PPC_FUNC_IMPL(__imp__sub_82CCE8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CCE8A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r30,r4,100
	ctx.r30.s64 = ctx.r4.s64 + 100;
	// lbz r27,20(r5)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// addi r29,r10,-10824
	ctx.r29.s64 = ctx.r10.s64 + -10824;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCE8DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r27,r27
	ctx.r27.s64 = ctx.r27.s8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE8E8;
	sub_82D294D0(ctx, base);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCE900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE908;
	sub_82D294D0(ctx, base);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// lbz r28,23(r28)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23);
	// bctrl 
	ctx.lr = 0x82CCE924;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE930;
	sub_82D294D0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCE948;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE950;
	sub_82D294D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCE958"))) PPC_WEAK_FUNC(sub_82CCE958);
PPC_FUNC_IMPL(__imp__sub_82CCE958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CCE960;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,100(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lbz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 24);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lbz r11,23(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 23);
	// addi r30,r4,100
	ctx.r30.s64 = ctx.r4.s64 + 100;
	// addi r29,r7,-10716
	ctx.r29.s64 = ctx.r7.s64 + -10716;
	// lbz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CCE9A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE9B0;
	sub_82D294D0(ctx, base);
	// lbz r10,23(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23);
	// lbz r11,21(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// lbz r9,20(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r26,r11,r9
	ctx.r26.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCE9DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCE9E4;
	sub_82D294D0(ctx, base);
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lbz r26,20(r28)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// bctrl 
	ctx.lr = 0x82CCEA00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r26
	ctx.r4.s64 = ctx.r26.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCEA08;
	sub_82D294D0(ctx, base);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// lbz r28,23(r28)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r28.u32 + 23);
	// bctrl 
	ctx.lr = 0x82CCEA24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCEA2C;
	sub_82D294D0(ctx, base);
	// lbz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 24);
	// lbz r11,23(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 23);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCEA50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r28
	ctx.r4.s64 = ctx.r28.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCEA58;
	sub_82D294D0(ctx, base);
	// lwz r7,100(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lbz r10,21(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CCEA7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r4,r30
	ctx.r4.s64 = ctx.r30.s8;
	// bl 0x82d294d0
	ctx.lr = 0x82CCEA84;
	sub_82D294D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCEA8C"))) PPC_WEAK_FUNC(sub_82CCEA8C);
PPC_FUNC_IMPL(__imp__sub_82CCEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCEA90"))) PPC_WEAK_FUNC(sub_82CCEA90);
PPC_FUNC_IMPL(__imp__sub_82CCEA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82cceae4
	if (cr6.lt) goto loc_82CCEAE4;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r8,r6,r7
	ctx.r8.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x82cceae4
	if (!cr6.lt) goto loc_82CCEAE4;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ccead0
	if (cr6.gt) goto loc_82CCEAD0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82CCEAD0:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
loc_82CCEAE4:
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw. r9,r10,r7
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCEB04"))) PPC_WEAK_FUNC(sub_82CCEB04);
PPC_FUNC_IMPL(__imp__sub_82CCEB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCEB08"))) PPC_WEAK_FUNC(sub_82CCEB08);
PPC_FUNC_IMPL(__imp__sub_82CCEB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CCEB10;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82ccea90
	ctx.lr = 0x82CCEB1C;
	sub_82CCEA90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCEB24;
	sub_831156E8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r31,r27,8
	ctx.r31.s64 = ctx.r27.s64 + 8;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82cceb50
	if (cr6.gt) goto loc_82CCEB50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCEB50;
	sub_831CC188(ctx, base);
loc_82CCEB50:
	// rlwinm r28,r30,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCEB68;
	sub_8311C3D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// bl 0x8311c338
	ctx.lr = 0x82CCEB7C;
	sub_8311C338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831c64a0
	ctx.lr = 0x82CCEB88;
	sub_831C64A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r30
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82ccebac
	if (cr6.gt) goto loc_82CCEBAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCEBAC;
	sub_831CC188(ctx, base);
loc_82CCEBAC:
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccebc4
	if (cr6.lt) goto loc_82CCEBC4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CCEBC4:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCEBD8"))) PPC_WEAK_FUNC(sub_82CCEBD8);
PPC_FUNC_IMPL(__imp__sub_82CCEBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCEBE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCEBF4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8312db38
	ctx.lr = 0x82CCEC08;
	sub_8312DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCEC14;
	sub_8311C3D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// bl 0x83158540
	ctx.lr = 0x82CCEC20;
	sub_83158540(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x82cced28
	if (cr6.gt) goto loc_82CCED28;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ccec70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCEC70;
	// bdzf 4*cr6+eq,0x82cced28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCED28;
	// bdzf 4*cr6+eq,0x82ccecac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCECAC;
	// bdzf 4*cr6+eq,0x82cced28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CCED28;
	// bne cr6,0x82ccece8
	if (!cr6.eq) goto loc_82CCECE8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-11080
	ctx.r11.s64 = ctx.r9.s64 + -11080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCEC68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCEC70:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-11080
	ctx.r11.s64 = ctx.r9.s64 + -11080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCEC94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cce790
	ctx.lr = 0x82CCECA4;
	sub_82CCE790(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCECAC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-11080
	ctx.r11.s64 = ctx.r9.s64 + -11080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCECD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cce790
	ctx.lr = 0x82CCECE0;
	sub_82CCE790(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCECE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,-11080
	ctx.r4.s64 = ctx.r10.s64 + -11080;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCED08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cce790
	ctx.lr = 0x82CCED18;
	sub_82CCE790(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cce810
	ctx.lr = 0x82CCED28;
	sub_82CCE810(ctx, base);
loc_82CCED28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCED30"))) PPC_WEAK_FUNC(sub_82CCED30);
PPC_FUNC_IMPL(__imp__sub_82CCED30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CCED38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CCED4C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8312db38
	ctx.lr = 0x82CCED60;
	sub_8312DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCED6C;
	sub_8311C3D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CCED7C;
	sub_8312DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCED88;
	sub_8311C3D8(ctx, base);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x83158540
	ctx.lr = 0x82CCED98;
	sub_83158540(ctx, base);
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83158540
	ctx.lr = 0x82CCEDA8;
	sub_83158540(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x82cceddc
	if (!cr6.eq) goto loc_82CCEDDC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-10684
	ctx.r11.s64 = ctx.r9.s64 + -10684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-380
	ctx.r4.s64 = ctx.r11.s64 + -380;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCEDD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CCEDDC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ccee20
	if (!cr6.eq) goto loc_82CCEE20;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-10684
	ctx.r11.s64 = ctx.r9.s64 + -10684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-368
	ctx.r4.s64 = ctx.r11.s64 + -368;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCEE08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cce8a0
	ctx.lr = 0x82CCEE18;
	sub_82CCE8A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CCEE20:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ccee68
	if (!cr6.eq) goto loc_82CCEE68;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-10684
	ctx.r11.s64 = ctx.r9.s64 + -10684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-352
	ctx.r4.s64 = ctx.r11.s64 + -352;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCEE4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cce958
	ctx.lr = 0x82CCEE60;
	sub_82CCE958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CCEE68:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82cceef4
	if (!cr6.eq) goto loc_82CCEEF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r26,r11,-10684
	ctx.r26.s64 = ctx.r11.s64 + -10684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r26,-332
	ctx.r4.s64 = ctx.r26.s64 + -332;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCEE94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cce958
	ctx.lr = 0x82CCEEA8;
	sub_82CCE958(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83157f88
	ctx.lr = 0x82CCEEC4;
	sub_83157F88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// beq cr6,0x82cceed4
	if (cr6.eq) goto loc_82CCEED4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82CCEED4:
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
	ctx.lr = 0x82CCEEEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CCEEF4:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82ccef3c
	if (!cr6.eq) goto loc_82CCEF3C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,-10684
	ctx.r11.s64 = ctx.r9.s64 + -10684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-312
	ctx.r4.s64 = ctx.r11.s64 + -312;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCEF20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cce958
	ctx.lr = 0x82CCEF34;
	sub_82CCE958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CCEF3C:
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82ccefc8
	if (!cr6.eq) goto loc_82CCEFC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r26,r11,-10684
	ctx.r26.s64 = ctx.r11.s64 + -10684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r26,-296
	ctx.r4.s64 = ctx.r26.s64 + -296;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCEF68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cce958
	ctx.lr = 0x82CCEF7C;
	sub_82CCE958(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83157f88
	ctx.lr = 0x82CCEF98;
	sub_83157F88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// beq cr6,0x82ccefa8
	if (cr6.eq) goto loc_82CCEFA8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82CCEFA8:
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
	ctx.lr = 0x82CCEFC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CCEFC8:
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x82ccf05c
	if (!cr6.eq) goto loc_82CCF05C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r26,r11,-10684
	ctx.r26.s64 = ctx.r11.s64 + -10684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r26,-280
	ctx.r4.s64 = ctx.r26.s64 + -280;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCEFF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cce958
	ctx.lr = 0x82CCF008;
	sub_82CCE958(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x83157f88
	ctx.lr = 0x82CCF024;
	sub_83157F88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// beq cr6,0x82ccf034
	if (cr6.eq) goto loc_82CCF034;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82CCF034:
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
	ctx.lr = 0x82CCF04C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cce810
	ctx.lr = 0x82CCF05C;
	sub_82CCE810(ctx, base);
loc_82CCF05C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCF064"))) PPC_WEAK_FUNC(sub_82CCF064);
PPC_FUNC_IMPL(__imp__sub_82CCF064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCF068"))) PPC_WEAK_FUNC(sub_82CCF068);
PPC_FUNC_IMPL(__imp__sub_82CCF068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCF070;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8312dc08
	ctx.lr = 0x82CCF088;
	sub_8312DC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccf0ac
	if (cr6.eq) goto loc_82CCF0AC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ccebd8
	ctx.lr = 0x82CCF0A4;
	sub_82CCEBD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCF0AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dc40
	ctx.lr = 0x82CCF0B4;
	sub_8312DC40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccf0d0
	if (cr6.eq) goto loc_82CCF0D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cced30
	ctx.lr = 0x82CCF0D0;
	sub_82CCED30(ctx, base);
loc_82CCF0D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCF0D8"))) PPC_WEAK_FUNC(sub_82CCF0D8);
PPC_FUNC_IMPL(__imp__sub_82CCF0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82CCF0E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82d19a78
	ctx.lr = 0x82CCF0F0;
	sub_82D19A78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ccea90
	ctx.lr = 0x82CCF0F8;
	sub_82CCEA90(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ccf11c
	if (!cr0.eq) goto loc_82CCF11C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCF11C;
	sub_831CC188(ctx, base);
loc_82CCF11C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82CCF128;
	sub_831156E8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCF13C;
	sub_8311C3D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x82CCF14C;
	sub_8311C338(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,88(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CCF160;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r26,r11,-11344
	ctx.r26.s64 = ctx.r11.s64 + -11344;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCF180;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf1ac
	if (cr6.eq) goto loc_82CCF1AC;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82CCF198;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82CCF1AC;
	sub_82D32C58(ctx, base);
loc_82CCF1AC:
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lbz r5,124(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 124);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x83162d40
	ctx.lr = 0x82CCF1D4;
	sub_83162D40(ctx, base);
	// addi r6,r26,-398
	ctx.r6.s64 = ctx.r26.s64 + -398;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82CCF1E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ccf228
	if (cr6.eq) goto loc_82CCF228;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r5,124(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 124);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// li r31,3
	ctx.r31.s64 = 3;
	// bl 0x83162d40
	ctx.lr = 0x82CCF208;
	sub_83162D40(ctx, base);
	// addi r6,r26,-44
	ctx.r6.s64 = ctx.r26.s64 + -44;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82CCF21C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x82ccf22c
	if (!cr6.eq) goto loc_82CCF22C;
loc_82CCF228:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82CCF22C:
	// rlwinm r10,r31,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// li r22,2
	ctx.r22.s64 = 2;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ccf26c
	if (cr6.eq) goto loc_82CCF26C;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccf260
	if (cr6.lt) goto loc_82CCF260;
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82CCF260;
	sub_825952B8(ctx, base);
loc_82CCF260:
	// stw r24,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r24.u32);
	// stw r25,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r25.u32);
	// stb r25,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r25.u8);
loc_82CCF26C:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ccf2a0
	if (cr6.eq) goto loc_82CCF2A0;
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccf294
	if (cr6.lt) goto loc_82CCF294;
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CCF294;
	sub_825952B8(ctx, base);
loc_82CCF294:
	// stw r24,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r24.u32);
	// stw r25,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r25.u32);
	// stb r25,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r25.u8);
loc_82CCF2A0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccf330
	if (cr6.eq) goto loc_82CCF330;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCF2BC;
	sub_8311C3D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// li r5,588
	ctx.r5.s64 = 588;
	// bl 0x831ce980
	ctx.lr = 0x82CCF2CC;
	sub_831CE980(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r10,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x82ccf2f0
	if (!cr6.eq) goto loc_82CCF2F0;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,110
	ctx.r4.u64 = ctx.r4.u64 | 110;
	// bl 0x82d04220
	ctx.lr = 0x82CCF2EC;
	sub_82D04220(ctx, base);
	// b 0x82ccf400
	goto loc_82CCF400;
loc_82CCF2F0:
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(ctx.r11.u32, 57, xer);
	// bne cr6,0x82ccf308
	if (!cr6.eq) goto loc_82CCF308;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,335
	ctx.r4.u64 = ctx.r4.u64 | 335;
	// bl 0x82d04220
	ctx.lr = 0x82CCF304;
	sub_82D04220(ctx, base);
	// b 0x82ccf400
	goto loc_82CCF400;
loc_82CCF308:
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x82ccf320
	if (!cr6.eq) goto loc_82CCF320;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,267
	ctx.r4.u64 = ctx.r4.u64 | 267;
	// bl 0x82d04220
	ctx.lr = 0x82CCF31C;
	sub_82D04220(ctx, base);
	// b 0x82ccf400
	goto loc_82CCF400;
loc_82CCF320:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,559
	ctx.r4.u64 = ctx.r4.u64 | 559;
	// bl 0x82d04220
	ctx.lr = 0x82CCF32C;
	sub_82D04220(ctx, base);
	// b 0x82ccf400
	goto loc_82CCF400;
loc_82CCF330:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83195918
	ctx.lr = 0x82CCF33C;
	sub_83195918(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r31,-1
	ctx.r31.s64 = -1;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82ccf3b0
	if (cr6.eq) goto loc_82CCF3B0;
	// addi r4,r26,-397
	ctx.r4.s64 = ctx.r26.s64 + -397;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x837b0c10
	ctx.lr = 0x82CCF358;
	sub_837B0C10(ctx, base);
	// lhz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// bl 0x83195988
	ctx.lr = 0x82CCF360;
	sub_83195988(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d680
	ctx.lr = 0x82CCF370;
	sub_8314D680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ccf384
	if (cr6.eq) goto loc_82CCF384;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82d04220
	ctx.lr = 0x82CCF384;
	sub_82D04220(ctx, base);
loc_82CCF384:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82CCF398;
	sub_825A1DA8(ctx, base);
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1eb8
	ctx.lr = 0x82CCF3A8;
	sub_825A1EB8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCF3B0;
	sub_8387E8E0(ctx, base);
loc_82CCF3B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r5,124(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 124);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83162d40
	ctx.lr = 0x82CCF3C4;
	sub_83162D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82CCF3D8;
	sub_825A1DA8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccf3f4
	if (cr6.lt) goto loc_82CCF3F4;
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82CCF3F4;
	sub_825952B8(ctx, base);
loc_82CCF3F4:
	// stw r24,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r24.u32);
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// stb r25,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r25.u8);
loc_82CCF400:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCF408;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r26,-36
	ctx.r4.s64 = ctx.r26.s64 + -36;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCF420;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf514
	if (cr6.eq) goto loc_82CCF514;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ccf440
	if (!cr6.lt) goto loc_82CCF440;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CCF440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d30208
	ctx.lr = 0x82CCF448;
	sub_82D30208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2fe58
	ctx.lr = 0x82CCF450;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf464
	if (cr6.eq) goto loc_82CCF464;
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d7f8
	ctx.lr = 0x82CCF464;
	sub_82D3D7F8(ctx, base);
loc_82CCF464:
	// lwz r11,88(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// beq cr6,0x82ccf514
	if (cr6.eq) goto loc_82CCF514;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x82ccf514
	if (cr6.eq) goto loc_82CCF514;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x82ccf514
	if (cr6.eq) goto loc_82CCF514;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(ctx.r11.u32, 97, xer);
	// beq cr6,0x82ccf514
	if (cr6.eq) goto loc_82CCF514;
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ccf4bc
	if (!cr6.eq) goto loc_82CCF4BC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x82ccf4b8
	if (cr6.eq) goto loc_82CCF4B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r9.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82CCF4B8:
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
loc_82CCF4BC:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x83125548
	ctx.lr = 0x82CCF4D0;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccf4e4
	if (cr6.lt) goto loc_82CCF4E4;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ccf4e8
	goto loc_82CCF4E8;
loc_82CCF4E4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CCF4E8:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x837b0c10
	ctx.lr = 0x82CCF4F0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,88(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 88);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x82b3f950
	ctx.lr = 0x82CCF504;
	sub_82B3F950(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCF50C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCF514;
	sub_8387E8E0(ctx, base);
loc_82CCF514:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCF51C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCF534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf65c
	if (cr6.eq) goto loc_82CCF65C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ccf554
	if (!cr6.lt) goto loc_82CCF554;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CCF554:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82CCF55C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CCF570;
	sub_82D291E0(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccf58c
	if (cr6.lt) goto loc_82CCF58C;
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82CCF58C;
	sub_825952B8(ctx, base);
loc_82CCF58C:
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// addi r4,r26,-366
	ctx.r4.s64 = ctx.r26.s64 + -366;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r25.u8);
	// bl 0x837b0c10
	ctx.lr = 0x82CCF5A4;
	sub_837B0C10(ctx, base);
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r30,24
	ctx.r30.s64 = 24;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r31,r28,96
	ctx.r31.s64 = ctx.r28.s64 + 96;
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r6,r9,r30
	ctx.r6.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	// bl 0x82d042a8
	ctx.lr = 0x82CCF5D4;
	sub_82D042A8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CCF5DC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCF5F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf634
	if (cr6.eq) goto loc_82CCF634;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// ble cr6,0x82ccf628
	if (!cr6.gt) goto loc_82CCF628;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82d291e0
	ctx.lr = 0x82CCF624;
	sub_82D291E0(ctx, base);
	// b 0x82ccf634
	goto loc_82CCF634;
loc_82CCF628:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCF634;
	sub_82D2AEC8(ctx, base);
loc_82CCF634:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccf650
	if (cr6.lt) goto loc_82CCF650;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82CCF650;
	sub_825952B8(ctx, base);
loc_82CCF650:
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
loc_82CCF65C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCF664;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCF67C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf6d8
	if (cr6.eq) goto loc_82CCF6D8;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83125548
	ctx.lr = 0x82CCF69C;
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
	ctx.lr = 0x82CCF6B0;
	sub_82D291E0(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccf6cc
	if (cr6.lt) goto loc_82CCF6CC;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CCF6CC;
	sub_825952B8(ctx, base);
loc_82CCF6CC:
	// stw r24,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// stb r25,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r25.u8);
loc_82CCF6D8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccf6f4
	if (cr6.lt) goto loc_82CCF6F4;
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CCF6F4;
	sub_825952B8(ctx, base);
loc_82CCF6F4:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCF6FC"))) PPC_WEAK_FUNC(sub_82CCF6FC);
PPC_FUNC_IMPL(__imp__sub_82CCF6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCF700"))) PPC_WEAK_FUNC(sub_82CCF700);
PPC_FUNC_IMPL(__imp__sub_82CCF700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CCF708;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,8972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8972);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r26,r11,8876
	ctx.r26.s64 = ctx.r11.s64 + 8876;
	// bne cr6,0x82ccf888
	if (!cr6.eq) goto loc_82CCF888;
	// lwz r27,8876(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8876);
loc_82CCF738:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
loc_82CCF740:
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ccf768
	if (!cr6.eq) goto loc_82CCF768;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ccf76c
	if (cr6.eq) goto loc_82CCF76C;
loc_82CCF768:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CCF76C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// beq cr6,0x82ccf89c
	if (cr6.eq) goto loc_82CCF89C;
	// addi r31,r11,-11132
	ctx.r31.s64 = ctx.r11.s64 + -11132;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// beq cr6,0x82ccf790
	if (cr6.eq) goto loc_82CCF790;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
loc_82CCF790:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82CCF798;
	sub_837B0C10(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCF7B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82ccf7c8
	if (!cr6.lt) goto loc_82CCF7C8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CCF7C8:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCF7E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf7f4
	if (cr6.eq) goto loc_82CCF7F4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCF7F4;
	sub_82D2AEC8(ctx, base);
loc_82CCF7F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCF80C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf820
	if (cr6.eq) goto loc_82CCF820;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCF820;
	sub_82D2AEC8(ctx, base);
loc_82CCF820:
	// lbz r11,125(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 125);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccf860
	if (!cr6.eq) goto loc_82CCF860;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCF84C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccf860
	if (cr6.eq) goto loc_82CCF860;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCF860;
	sub_82D2AEC8(ctx, base);
loc_82CCF860:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccfa34
	if (cr6.lt) goto loc_82CCFA34;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CCF880;
	sub_825952B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CCF888:
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(ctx.r28.u32, 2, xer);
	// blt cr6,0x82ccf738
	if (cr6.lt) goto loc_82CCF738;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82ccf740
	goto loc_82CCF740;
loc_82CCF89C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82ccf8b0
	if (!cr6.eq) goto loc_82CCF8B0;
	// addi r11,r11,-11132
	ctx.r11.s64 = ctx.r11.s64 + -11132;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// b 0x82ccf8b4
	goto loc_82CCF8B4;
loc_82CCF8B0:
	// addi r4,r11,-11132
	ctx.r4.s64 = ctx.r11.s64 + -11132;
loc_82CCF8B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CCF8BC;
	sub_837B0C10(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ccf8d0
	if (!cr6.lt) goto loc_82CCF8D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CCF8D0:
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCF8E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfa2c
	if (cr6.eq) goto loc_82CCFA2C;
	// lbz r11,125(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 125);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ccf91c
	if (cr6.eq) goto loc_82CCF91C;
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x82ccf91c
	if (cr6.eq) goto loc_82CCF91C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCF918;
	sub_82D2AEC8(ctx, base);
	// b 0x82ccf95c
	goto loc_82CCF95C;
loc_82CCF91C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCF92C;
	sub_82D2AEC8(ctx, base);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ccf948
	if (cr6.eq) goto loc_82CCF948;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82CCF948:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82CCF95C;
	sub_82D329F8(ctx, base);
loc_82CCF95C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCF974;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfa2c
	if (cr6.eq) goto loc_82CCFA2C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCF98C;
	sub_82D2AEC8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82CCF990;
	sub_831156E8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82CCF99C;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82CCF9AC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CCF9C0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCF9C8;
	sub_8387E8E0(ctx, base);
	// lbz r11,125(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 125);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ccfa2c
	if (!cr6.eq) goto loc_82CCFA2C;
	// bl 0x831156e8
	ctx.lr = 0x82CCF9D8;
	sub_831156E8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82CCF9E4;
	sub_8311C148(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCFA08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfa2c
	if (cr6.eq) goto loc_82CCFA2C;
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
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
	ctx.lr = 0x82CCFA2C;
	sub_82D2AEC8(ctx, base);
loc_82CCFA2C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CCFA34;
	sub_8387E8E0(ctx, base);
loc_82CCFA34:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCFA3C"))) PPC_WEAK_FUNC(sub_82CCFA3C);
PPC_FUNC_IMPL(__imp__sub_82CCFA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCFA40"))) PPC_WEAK_FUNC(sub_82CCFA40);
PPC_FUNC_IMPL(__imp__sub_82CCFA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCFA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82CCFA60;
	sub_82D19A88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82CCFA68;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfb58
	if (cr6.eq) goto loc_82CCFB58;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccf700
	ctx.lr = 0x82CCFA88;
	sub_82CCF700(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccf700
	ctx.lr = 0x82CCFA9C;
	sub_82CCF700(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ccf068
	ctx.lr = 0x82CCFAAC;
	sub_82CCF068(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82CCFAB0;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c338
	ctx.lr = 0x82CCFAC0;
	sub_8311C338(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82ccfb58
	if (!cr6.eq) goto loc_82CCFB58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dc08
	ctx.lr = 0x82CCFAD4;
	sub_8312DC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x8312db38
	ctx.lr = 0x82CCFAF4;
	sub_8312DB38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCFB00;
	sub_8311C3D8(ctx, base);
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// bl 0x83158540
	ctx.lr = 0x82CCFB08;
	sub_83158540(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x82ccfb3c
	if (!cr6.eq) goto loc_82CCFB3C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r9,-11196
	ctx.r11.s64 = ctx.r9.s64 + -11196;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCFB34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CCFB3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-11196
	ctx.r4.s64 = ctx.r10.s64 + -11196;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CCFB58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CCFB58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCFB60"))) PPC_WEAK_FUNC(sub_82CCFB60);
PPC_FUNC_IMPL(__imp__sub_82CCFB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82CCFB68;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82ccea90
	ctx.lr = 0x82CCFB74;
	sub_82CCEA90(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r24,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r8.s32 >> 3;
	// addi r7,r24,-1
	ctx.r7.s64 = ctx.r24.s64 + -1;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// bge cr6,0x82ccfbc4
	if (!cr6.lt) goto loc_82CCFBC4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCFB9C;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,9020
	ctx.r11.s64 = ctx.r11.s64 + 9020;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r7,72(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82CCFBC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CCFBC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCFBCC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r25,r11,-11220
	ctx.r25.s64 = ctx.r11.s64 + -11220;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCFBEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfd8c
	if (cr6.eq) goto loc_82CCFD8C;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82CCFC04;
	sub_82D33C10(ctx, base);
	// li r28,15
	ctx.r28.s64 = 15;
	// li r23,2
	ctx.r23.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfce0
	if (cr6.eq) goto loc_82CCFCE0;
	// addi r26,r29,100
	ctx.r26.s64 = ctx.r29.s64 + 100;
loc_82CCFC18:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r4,r25,-8
	ctx.r4.s64 = ctx.r25.s64 + -8;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CCFC34;
	sub_8259CC28(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82CCFC44;
	sub_82B142A0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ccfc58
	if (!cr6.lt) goto loc_82CCFC58;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CCFC58:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCFC6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ccfc8c
	if (!cr6.eq) goto loc_82CCFC8C;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccfcc0
	if (cr6.lt) goto loc_82CCFCC0;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82ccfcb8
	goto loc_82CCFCB8;
loc_82CCFC8C:
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// blt cr6,0x82ccfca0
	if (cr6.lt) goto loc_82CCFCA0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82CCFCA0:
	// bl 0x82d2aec8
	ctx.lr = 0x82CCFCA4;
	sub_82D2AEC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccfcc0
	if (cr6.lt) goto loc_82CCFCC0;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82CCFCB8:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CCFCC0;
	sub_825952B8(ctx, base);
loc_82CCFCC0:
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// bl 0x82d33c10
	ctx.lr = 0x82CCFCD8;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ccfc18
	if (cr6.lt) goto loc_82CCFC18;
loc_82CCFCE0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r30,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r30.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82ccfd8c
	if (cr6.eq) goto loc_82CCFD8C;
loc_82CCFCF0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCFD08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82CCFD28;
	sub_8259CC28(ctx, base);
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x82b142a0
	ctx.lr = 0x82CCFD38;
	sub_82B142A0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82ccfd4c
	if (!cr6.lt) goto loc_82CCFD4C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82CCFD4C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ccfa40
	ctx.lr = 0x82CCFD58;
	sub_82CCFA40(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ccfd74
	if (cr6.lt) goto loc_82CCFD74;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CCFD74;
	sub_825952B8(ctx, base);
loc_82CCFD74:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x82ccfcf0
	if (cr6.lt) goto loc_82CCFCF0;
loc_82CCFD8C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCFD94"))) PPC_WEAK_FUNC(sub_82CCFD94);
PPC_FUNC_IMPL(__imp__sub_82CCFD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CCFD98"))) PPC_WEAK_FUNC(sub_82CCFD98);
PPC_FUNC_IMPL(__imp__sub_82CCFD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CCFDA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCFDB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c0fc30
	ctx.lr = 0x82CCFDC0;
	sub_82C0FC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCFDC8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r11,-11424
	ctx.r30.s64 = ctx.r11.s64 + -11424;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCFDE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfe44
	if (cr6.eq) goto loc_82CCFE44;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r29,24
	ctx.r29.s64 = 24;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x82ccfe1c
	if (!cr6.eq) goto loc_82CCFE1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82CCFE18;
	sub_82D30530(ctx, base);
	// b 0x82ccfed8
	goto loc_82CCFED8;
loc_82CCFE1C:
	// bl 0x82d2fe58
	ctx.lr = 0x82CCFE20;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfed8
	if (cr6.eq) goto loc_82CCFED8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r5,r9,r29
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82d3d968
	ctx.lr = 0x82CCFE40;
	sub_82D3D968(ctx, base);
	// b 0x82ccfed8
	goto loc_82CCFED8;
loc_82CCFE44:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x82ccfed8
	if (!cr6.eq) goto loc_82CCFED8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCFE68;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CCFE80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CCFE8C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCFEA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ccfed8
	if (cr6.eq) goto loc_82CCFED8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ccfed8
	if (cr6.eq) goto loc_82CCFED8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCFEC8;
	sub_82D2AEC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CCFED8;
	sub_82D2AEC8(ctx, base);
loc_82CCFED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccea90
	ctx.lr = 0x82CCFEE0;
	sub_82CCEA90(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ccff04
	if (!cr0.eq) goto loc_82CCFF04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CCFF04;
	sub_831CC188(ctx, base);
loc_82CCFF04:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x831156e8
	ctx.lr = 0x82CCFF0C;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c3d8
	ctx.lr = 0x82CCFF1C;
	sub_8311C3D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// bl 0x8311c338
	ctx.lr = 0x82CCFF2C;
	sub_8311C338(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,300(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// lwz r30,88(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CCFF48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccfb60
	ctx.lr = 0x82CCFF50;
	sub_82CCFB60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a689e8
	ctx.lr = 0x82CCFF58;
	sub_82A689E8(ctx, base);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x82ccff74
	if (cr6.lt) goto loc_82CCFF74;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bgt cr6,0x82ccff74
	if (cr6.gt) goto loc_82CCFF74;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82CCFF74;
	sub_82D198D0(ctx, base);
loc_82CCFF74:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,32492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32492);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82ccff8c
	if (cr6.eq) goto loc_82CCFF8C;
	// bl 0x82d26640
	ctx.lr = 0x82CCFF88;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82CCFF8C;
	sub_82D25AB8(ctx, base);
loc_82CCFF8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CCFF98"))) PPC_WEAK_FUNC(sub_82CCFF98);
PPC_FUNC_IMPL(__imp__sub_82CCFF98) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addic. r10,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r10.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bne 0x82ccffe0
	if (!cr0.eq) goto loc_82CCFFE0;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,24
	ctx.r10.s64 = 24;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// divw r11,r7,r10
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r6.u32);
	// b 0x82cd0000
	goto loc_82CD0000;
loc_82CCFFE0:
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r8,24
	ctx.r8.s64 = 24;
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divw r5,r6,r8
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// ble cr6,0x82cd0000
	if (!cr6.gt) goto loc_82CD0000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82CD0000:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x82cd0028
	if (cr6.eq) goto loc_82CD0028;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD0020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccfb60
	ctx.lr = 0x82CD0028;
	sub_82CCFB60(ctx, base);
loc_82CD0028:
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

__attribute__((alias("__imp__sub_82CD003C"))) PPC_WEAK_FUNC(sub_82CD003C);
PPC_FUNC_IMPL(__imp__sub_82CD003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0040"))) PPC_WEAK_FUNC(sub_82CD0040);
PPC_FUNC_IMPL(__imp__sub_82CD0040) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd008c
	if (cr6.eq) goto loc_82CD008C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CD006C;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD0078;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CD0080;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd00e4
	if (cr6.eq) goto loc_82CD00E4;
loc_82CD008C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CD0094;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD00A0;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CD00A8;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd00d8
	if (!cr6.eq) goto loc_82CD00D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD00BC;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-11416
	ctx.r4.s64 = ctx.r11.s64 + -11416;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD00D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CD00D8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccff98
	ctx.lr = 0x82CD00E4;
	sub_82CCFF98(ctx, base);
loc_82CD00E4:
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

__attribute__((alias("__imp__sub_82CD00FC"))) PPC_WEAK_FUNC(sub_82CD00FC);
PPC_FUNC_IMPL(__imp__sub_82CD00FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0100"))) PPC_WEAK_FUNC(sub_82CD0100);
PPC_FUNC_IMPL(__imp__sub_82CD0100) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd014c
	if (cr6.eq) goto loc_82CD014C;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CD012C;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD0138;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CD0140;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd01a4
	if (cr6.eq) goto loc_82CD01A4;
loc_82CD014C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82d46928
	ctx.lr = 0x82CD0154;
	sub_82D46928(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD0160;
	sub_82D19A68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2aef8
	ctx.lr = 0x82CD0168;
	sub_82D2AEF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd0198
	if (!cr6.eq) goto loc_82CD0198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD017C;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-11408
	ctx.r4.s64 = ctx.r11.s64 + -11408;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD0198;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CD0198:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ccff98
	ctx.lr = 0x82CD01A4;
	sub_82CCFF98(ctx, base);
loc_82CD01A4:
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

__attribute__((alias("__imp__sub_82CD01BC"))) PPC_WEAK_FUNC(sub_82CD01BC);
PPC_FUNC_IMPL(__imp__sub_82CD01BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD01C0"))) PPC_WEAK_FUNC(sub_82CD01C0);
PPC_FUNC_IMPL(__imp__sub_82CD01C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD01C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cd0214
	if (cr6.eq) goto loc_82CD0214;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82CD01E0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cd0204
	if (cr6.eq) goto loc_82CD0204;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// bl 0x834b8ed8
	ctx.lr = 0x82CD0204;
	sub_834B8ED8(ctx, base);
loc_82CD0204:
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82cd01e0
	if (!cr6.eq) goto loc_82CD01E0;
loc_82CD0214:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0220"))) PPC_WEAK_FUNC(sub_82CD0220);
PPC_FUNC_IMPL(__imp__sub_82CD0220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CD0228;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cd024c
	if (!cr6.gt) goto loc_82CD024C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CD024C;
	sub_831CC150(ctx, base);
loc_82CD024C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,24
	ctx.r27.s64 = 24;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82cd0304
	if (!cr6.lt) goto loc_82CD0304;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x82CD028C;
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
	// bl 0x82cd01c0
	ctx.lr = 0x82CD02B0;
	sub_82CD01C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r27,r10,r27
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	// beq cr6,0x82cd02e4
	if (cr6.eq) goto loc_82CD02E4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x831c2df8
	ctx.lr = 0x82CD02D4;
	sub_831C2DF8(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82CD02E4;
	sub_825952B8(ctx, base);
loc_82CD02E4:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82CD0304:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD030C"))) PPC_WEAK_FUNC(sub_82CD030C);
PPC_FUNC_IMPL(__imp__sub_82CD030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0310"))) PPC_WEAK_FUNC(sub_82CD0310);
PPC_FUNC_IMPL(__imp__sub_82CD0310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,24
	ctx.r9.s64 = 24;
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
	// bge cr6,0x82cd0344
	if (!cr6.lt) goto loc_82CD0344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82CD0344:
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
	// blt cr6,0x82cd0374
	if (cr6.lt) goto loc_82CD0374;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82CD0374:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82cd0380
	if (!cr6.lt) goto loc_82CD0380;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82CD0380:
	// b 0x82cd0220
	sub_82CD0220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0384"))) PPC_WEAK_FUNC(sub_82CD0384);
PPC_FUNC_IMPL(__imp__sub_82CD0384) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD0388"))) PPC_WEAK_FUNC(sub_82CD0388);
PPC_FUNC_IMPL(__imp__sub_82CD0388) {
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
	// addi r9,r11,-10552
	ctx.r9.s64 = ctx.r11.s64 + -10552;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd03ec
	if (cr6.eq) goto loc_82CD03EC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x831c2df8
	ctx.lr = 0x82CD03D8;
	sub_831C2DF8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD03EC;
	sub_825952B8(ctx, base);
loc_82CD03EC:
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
	// bl 0x82c0fc10
	ctx.lr = 0x82CD0404;
	sub_82C0FC10(ctx, base);
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

__attribute__((alias("__imp__sub_82CD041C"))) PPC_WEAK_FUNC(sub_82CD041C);
PPC_FUNC_IMPL(__imp__sub_82CD041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0420"))) PPC_WEAK_FUNC(sub_82CD0420);
PPC_FUNC_IMPL(__imp__sub_82CD0420) {
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
	// bge cr6,0x82cd0458
	if (!cr6.lt) goto loc_82CD0458;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82cd045c
	if (!cr6.gt) goto loc_82CD045C;
loc_82CD0458:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82CD045C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd04c8
	if (cr6.eq) goto loc_82CD04C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82cd0490
	if (!cr6.eq) goto loc_82CD0490;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0310
	ctx.lr = 0x82CD0490;
	sub_82CD0310(ctx, base);
loc_82CD0490:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x82cd0508
	if (cr6.eq) goto loc_82CD0508;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// b 0x82cd0500
	goto loc_82CD0500;
loc_82CD04C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cd04e0
	if (!cr6.eq) goto loc_82CD04E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0310
	ctx.lr = 0x82CD04E0;
	sub_82CD0310(ctx, base);
loc_82CD04E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd0508
	if (cr6.eq) goto loc_82CD0508;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
loc_82CD0500:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x834b8ed8
	ctx.lr = 0x82CD0508;
	sub_834B8ED8(ctx, base);
loc_82CD0508:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
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

__attribute__((alias("__imp__sub_82CD052C"))) PPC_WEAK_FUNC(sub_82CD052C);
PPC_FUNC_IMPL(__imp__sub_82CD052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0530"))) PPC_WEAK_FUNC(sub_82CD0530);
PPC_FUNC_IMPL(__imp__sub_82CD0530) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82c0fbb8
	ctx.lr = 0x82CD0550;
	sub_82C0FBB8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-10552
	ctx.r9.s64 = ctx.r11.s64 + -10552;
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
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
	// stb r11,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82CD05A8"))) PPC_WEAK_FUNC(sub_82CD05A8);
PPC_FUNC_IMPL(__imp__sub_82CD05A8) {
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
	// bl 0x82cd0388
	ctx.lr = 0x82CD05C8;
	sub_82CD0388(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd05e0
	if (cr6.eq) goto loc_82CD05E0;
	// bl 0x82416268
	ctx.lr = 0x82CD05DC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CD05E0:
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

__attribute__((alias("__imp__sub_82CD05F8"))) PPC_WEAK_FUNC(sub_82CD05F8);
PPC_FUNC_IMPL(__imp__sub_82CD05F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// b 0x82cd0420
	sub_82CD0420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0600"))) PPC_WEAK_FUNC(sub_82CD0600);
PPC_FUNC_IMPL(__imp__sub_82CD0600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CD0608;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CD0624;
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
	ctx.lr = 0x82CD063C;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r29,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r29.u8);
	// addi r9,r11,-7648
	ctx.r9.s64 = ctx.r11.s64 + -7648;
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r7.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82d195d8
	ctx.lr = 0x82CD0670;
	sub_82D195D8(ctx, base);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0680"))) PPC_WEAK_FUNC(sub_82CD0680);
PPC_FUNC_IMPL(__imp__sub_82CD0680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-7648
	ctx.r9.s64 = ctx.r11.s64 + -7648;
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

__attribute__((alias("__imp__sub_82CD069C"))) PPC_WEAK_FUNC(sub_82CD069C);
PPC_FUNC_IMPL(__imp__sub_82CD069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD06A0"))) PPC_WEAK_FUNC(sub_82CD06A0);
PPC_FUNC_IMPL(__imp__sub_82CD06A0) {
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
	// bl 0x83911640
	ctx.lr = 0x82CD06B8;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82cd06f0
	if (!cr6.gt) goto loc_82CD06F0;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bgt cr6,0x82cd06f0
	if (cr6.gt) goto loc_82CD06F0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
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
loc_82CD06F0:
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

__attribute__((alias("__imp__sub_82CD0708"))) PPC_WEAK_FUNC(sub_82CD0708);
PPC_FUNC_IMPL(__imp__sub_82CD0708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-8292
	ctx.r5.s64 = ctx.r11.s64 + -8292;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0718"))) PPC_WEAK_FUNC(sub_82CD0718);
PPC_FUNC_IMPL(__imp__sub_82CD0718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-8284
	ctx.r5.s64 = ctx.r11.s64 + -8284;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0728"))) PPC_WEAK_FUNC(sub_82CD0728);
PPC_FUNC_IMPL(__imp__sub_82CD0728) {
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
	// addi r9,r11,-7648
	ctx.r9.s64 = ctx.r11.s64 + -7648;
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
	ctx.lr = 0x82CD0760;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cd0778
	if (cr6.eq) goto loc_82CD0778;
	// bl 0x82416268
	ctx.lr = 0x82CD0774;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CD0778:
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

__attribute__((alias("__imp__sub_82CD0790"))) PPC_WEAK_FUNC(sub_82CD0790);
PPC_FUNC_IMPL(__imp__sub_82CD0790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r11,4456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4456);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82cd0824
	if (cr6.gt) goto loc_82CD0824;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cd0824
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD0824;
	// bdzf 4*cr6+eq,0x82cd07f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD07F4;
	// bdzf 4*cr6+eq,0x82cd0824
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD0824;
	// bdzf 4*cr6+eq,0x82cd07e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD07E4;
	// bdzf 4*cr6+eq,0x82cd07e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD07E4;
	// bdzf 4*cr6+eq,0x82cd0804
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD0804;
	// bdzf 4*cr6+eq,0x82cd0804
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD0804;
	// bne cr6,0x82cd0824
	if (!cr6.eq) goto loc_82CD0824;
	// lis r11,11
	ctx.r11.s64 = 720896;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82CD07E4:
	// lis r11,10
	ctx.r11.s64 = 655360;
	// ori r10,r11,269
	ctx.r10.u64 = ctx.r11.u64 | 269;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82CD07F4:
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// ori r10,r11,367
	ctx.r10.u64 = ctx.r11.u64 | 367;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82CD0804:
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// lbz r10,97(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 97);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd07f4
	if (cr6.eq) goto loc_82CD07F4;
	// lis r11,56
	ctx.r11.s64 = 3670016;
	// ori r10,r11,301
	ctx.r10.u64 = ctx.r11.u64 | 301;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82CD0824:
	// lis r11,56
	ctx.r11.s64 = 3670016;
	// ori r10,r11,302
	ctx.r10.u64 = ctx.r11.u64 | 302;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD0834"))) PPC_WEAK_FUNC(sub_82CD0834);
PPC_FUNC_IMPL(__imp__sub_82CD0834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0838"))) PPC_WEAK_FUNC(sub_82CD0838);
PPC_FUNC_IMPL(__imp__sub_82CD0838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CD0840;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x82cd0898
	if (!cr6.eq) goto loc_82CD0898;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd087c
	if (cr6.lt) goto loc_82CD087C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD087C;
	sub_825952B8(ctx, base);
loc_82CD087C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
	// stw r10,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r10.u32);
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CD0898:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD08A0;
	sub_82D19A68(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd08b8
	if (cr6.lt) goto loc_82CD08B8;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x82cd08bc
	goto loc_82CD08BC;
loc_82CD08B8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82CD08BC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD08CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd0a18
	if (cr6.eq) goto loc_82CD0A18;
	// bl 0x82d4bb00
	ctx.lr = 0x82CD08DC;
	sub_82D4BB00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd0a08
	if (cr6.eq) goto loc_82CD0A08;
	// bl 0x82d4bb60
	ctx.lr = 0x82CD08EC;
	sub_82D4BB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd0a08
	if (cr6.eq) goto loc_82CD0A08;
	// bl 0x82d4bb00
	ctx.lr = 0x82CD08FC;
	sub_82D4BB00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd0a08
	if (cr6.eq) goto loc_82CD0A08;
	// bl 0x82d4bb00
	ctx.lr = 0x82CD0908;
	sub_82D4BB00(ctx, base);
	// bl 0x82d4bb60
	ctx.lr = 0x82CD090C;
	sub_82D4BB60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd0a08
	if (cr6.eq) goto loc_82CD0A08;
	// bl 0x82d4bb00
	ctx.lr = 0x82CD091C;
	sub_82D4BB00(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d4bc28
	ctx.lr = 0x82CD0924;
	sub_82D4BC28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd0964
	if (cr6.eq) goto loc_82CD0964;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CD0934:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d4bb78
	ctx.lr = 0x82CD0940;
	sub_82D4BB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32830
	ctx.lr = 0x82CD0954;
	sub_82D32830(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD095C;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CD0964:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd09c0
	if (cr6.eq) goto loc_82CD09C0;
	// bl 0x83911640
	ctx.lr = 0x82CD0974;
	sub_83911640(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82cd0988
	if (!cr6.gt) goto loc_82CD0988;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82cd098c
	if (!cr6.gt) goto loc_82CD098C;
loc_82CD0988:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CD098C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd09c0
	if (cr6.eq) goto loc_82CD09C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd06a0
	ctx.lr = 0x82CD09A0;
	sub_82CD06A0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82cd09b0
	if (cr6.eq) goto loc_82CD09B0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x82cd09b8
	if (!cr6.eq) goto loc_82CD09B8;
loc_82CD09B0:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82cd0934
	goto loc_82CD0934;
loc_82CD09B8:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82cd0934
	goto loc_82CD0934;
loc_82CD09C0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d4c400
	ctx.lr = 0x82CD09D0;
	sub_82D4C400(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d4bb78
	ctx.lr = 0x82CD09E0;
	sub_82D4BB78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82d328c8
	ctx.lr = 0x82CD09F0;
	sub_82D328C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD09F8;
	sub_8387E8E0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD0A00;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82CD0A08:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD0A18;
	sub_82D2AEC8(ctx, base);
loc_82CD0A18:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD0A20;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0A28"))) PPC_WEAK_FUNC(sub_82CD0A28);
PPC_FUNC_IMPL(__imp__sub_82CD0A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD0A30;
	__savegprlr_29(ctx, base);
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
	// bl 0x82d4bb00
	ctx.lr = 0x82CD0A44;
	sub_82D4BB00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd0ad4
	if (cr6.eq) goto loc_82CD0AD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD0A54;
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
	ctx.lr = 0x82CD0A6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd0ad4
	if (cr6.eq) goto loc_82CD0AD4;
	// bl 0x82d4bb00
	ctx.lr = 0x82CD0A7C;
	sub_82D4BB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82d4c4e0
	ctx.lr = 0x82CD0A8C;
	sub_82D4C4E0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd0aa0
	if (cr6.lt) goto loc_82CD0AA0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd0aa4
	goto loc_82CD0AA4;
loc_82CD0AA0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD0AA4:
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
	ctx.lr = 0x82CD0ABC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD0AC4;
	sub_8387E8E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD0AD4;
	sub_82D2AEC8(ctx, base);
loc_82CD0AD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0ADC"))) PPC_WEAK_FUNC(sub_82CD0ADC);
PPC_FUNC_IMPL(__imp__sub_82CD0ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0AE0"))) PPC_WEAK_FUNC(sub_82CD0AE0);
PPC_FUNC_IMPL(__imp__sub_82CD0AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD0AE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x82cd0b3c
	if (!cr6.eq) goto loc_82CD0B3C;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd0b20
	if (cr6.lt) goto loc_82CD0B20;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD0B20;
	sub_825952B8(ctx, base);
loc_82CD0B20:
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
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CD0B3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd06a0
	ctx.lr = 0x82CD0B44;
	sub_82CD06A0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82cd0b68
	if (cr6.lt) goto loc_82CD0B68;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x82cd0b88
	if (!cr6.lt) goto loc_82CD0B88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8292a3f8
	ctx.lr = 0x82CD0B60;
	sub_8292A3F8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82cd0b78
	goto loc_82CD0B78;
loc_82CD0B68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8292a3f8
	ctx.lr = 0x82CD0B74;
	sub_8292A3F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
loc_82CD0B78:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd0838
	ctx.lr = 0x82CD0B88;
	sub_82CD0838(ctx, base);
loc_82CD0B88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD0B90;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0B98"))) PPC_WEAK_FUNC(sub_82CD0B98);
PPC_FUNC_IMPL(__imp__sub_82CD0B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-7320
	ctx.r4.s64 = ctx.r11.s64 + -7320;
	// b 0x8259cc28
	sub_8259CC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0BAC"))) PPC_WEAK_FUNC(sub_82CD0BAC);
PPC_FUNC_IMPL(__imp__sub_82CD0BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0BB0"))) PPC_WEAK_FUNC(sub_82CD0BB0);
PPC_FUNC_IMPL(__imp__sub_82CD0BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-7308
	ctx.r4.s64 = ctx.r11.s64 + -7308;
	// b 0x8259cc28
	sub_8259CC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0BC4"))) PPC_WEAK_FUNC(sub_82CD0BC4);
PPC_FUNC_IMPL(__imp__sub_82CD0BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD0BC8"))) PPC_WEAK_FUNC(sub_82CD0BC8);
PPC_FUNC_IMPL(__imp__sub_82CD0BC8) {
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CD0BE4;
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
	ctx.lr = 0x82CD0BF8;
	sub_83123A08(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD0C00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd0c00
	if (!cr6.eq) goto loc_82CD0C00;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD0C24;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82CD0C38"))) PPC_WEAK_FUNC(sub_82CD0C38);
PPC_FUNC_IMPL(__imp__sub_82CD0C38) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD0C5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,304(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CD0C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82cd0c8c
	if (!cr6.eq) goto loc_82CD0C8C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd0d00
	if (cr6.eq) goto loc_82CD0D00;
loc_82CD0C8C:
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lwz r4,9052(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9052);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD0CAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd0cac
	if (!cr6.eq) goto loc_82CD0CAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD0CD0;
	sub_8259CC28(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82CD0CD4;
	sub_8311E3D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x8311e538
	ctx.lr = 0x82CD0CE0;
	sub_8311E538(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cd0d00
	if (cr6.lt) goto loc_82CD0D00;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD0D00;
	sub_825952B8(ctx, base);
loc_82CD0D00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD0D18"))) PPC_WEAK_FUNC(sub_82CD0D18);
PPC_FUNC_IMPL(__imp__sub_82CD0D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD0D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82CD0D34;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82d19a68
	ctx.lr = 0x82CD0D44;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD0D5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd0de0
	if (cr6.eq) goto loc_82CD0DE0;
	// addis r3,r30,5
	ctx.r3.s64 = ctx.r30.s64 + 327680;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a08
	ctx.lr = 0x82CD0D78;
	sub_83123A08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82CD0D88;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD0D9C;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd0dbc
	if (cr6.lt) goto loc_82CD0DBC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD0DBC;
	sub_825952B8(ctx, base);
loc_82CD0DBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD0DE0;
	sub_82D2AEC8(ctx, base);
loc_82CD0DE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD0DE8"))) PPC_WEAK_FUNC(sub_82CD0DE8);
PPC_FUNC_IMPL(__imp__sub_82CD0DE8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD0E04;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,-7748
	ctx.r4.s64 = ctx.r11.s64 + -7748;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD0E20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd0e80
	if (cr6.eq) goto loc_82CD0E80;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd0e40
	if (cr6.lt) goto loc_82CD0E40;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82cd0e44
	goto loc_82CD0E44;
loc_82CD0E40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82CD0E44:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82CD0E4C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD0E60;
	sub_82D291E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd0e80
	if (cr6.lt) goto loc_82CD0E80;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD0E80;
	sub_825952B8(ctx, base);
loc_82CD0E80:
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

__attribute__((alias("__imp__sub_82CD0E98"))) PPC_WEAK_FUNC(sub_82CD0E98);
PPC_FUNC_IMPL(__imp__sub_82CD0E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CD0EA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83911640
	ctx.lr = 0x82CD0EAC;
	sub_83911640(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// addi r30,r11,-8300
	ctx.r30.s64 = ctx.r11.s64 + -8300;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-1890
	ctx.r4.s64 = ctx.r30.s64 + -1890;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CD0EDC;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD0EF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x82cd13a4
	if (cr6.gt) goto loc_82CD13A4;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82cd0fac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD0FAC;
	// bdzf 4*cr6+eq,0x82cd1054
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82CD1054;
	// bne cr6,0x82cd11d8
	if (!cr6.eq) goto loc_82CD11D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD0F14;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-596
	ctx.r4.s64 = ctx.r30.s64 + -596;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD0F2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD0F34;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-580
	ctx.r4.s64 = ctx.r30.s64 + -580;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CD0F4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd13a4
	if (cr6.eq) goto loc_82CD13A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD0F70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82cd0f84
	if (!cr6.lt) goto loc_82CD0F84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CD0F84:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82CD0F8C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD0FA0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD0FA8;
	sub_8387E8E0(ctx, base);
	// b 0x82cd13a4
	goto loc_82CD13A4;
loc_82CD0FAC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82cd1024
	if (cr6.eq) goto loc_82CD1024;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x82cd1024
	if (cr6.eq) goto loc_82CD1024;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// beq cr6,0x82cd0fe4
	if (cr6.eq) goto loc_82CD0FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD0FCC;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-560
	ctx.r4.s64 = ctx.r30.s64 + -560;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD0FE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CD0FE4:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x82cd1024
	if (cr6.eq) goto loc_82CD1024;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// beq cr6,0x82cd1024
	if (cr6.eq) goto loc_82CD1024;
	// addi r4,r30,-532
	ctx.r4.s64 = ctx.r30.s64 + -532;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x837b0c10
	ctx.lr = 0x82CD1008;
	sub_837B0C10(ctx, base);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD1020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cd13a4
	goto loc_82CD13A4;
loc_82CD1024:
	// addi r4,r30,-540
	ctx.r4.s64 = ctx.r30.s64 + -540;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lwz r28,100(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x837b0c10
	ctx.lr = 0x82CD1038;
	sub_837B0C10(ctx, base);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD1050;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cd13a4
	goto loc_82CD13A4;
loc_82CD1054:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82cd108c
	if (cr6.eq) goto loc_82CD108C;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x82cd108c
	if (cr6.eq) goto loc_82CD108C;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// beq cr6,0x82cd108c
	if (cr6.eq) goto loc_82CD108C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD1074;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-520
	ctx.r4.s64 = ctx.r30.s64 + -520;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD108C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CD108C:
	// addi r4,r30,-500
	ctx.r4.s64 = ctx.r30.s64 + -500;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82CD109C;
	sub_837B0C10(ctx, base);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD10B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-488
	ctx.r4.s64 = ctx.r30.s64 + -488;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x837b0c10
	ctx.lr = 0x82CD10C4;
	sub_837B0C10(ctx, base);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD10DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD10E4;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-472
	ctx.r4.s64 = ctx.r30.s64 + -472;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CD10FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd1110
	if (cr6.eq) goto loc_82CD1110;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD1110;
	sub_82D2AEC8(ctx, base);
loc_82CD1110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD1118;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-452
	ctx.r4.s64 = ctx.r30.s64 + -452;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD1130;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd1144
	if (cr6.eq) goto loc_82CD1144;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD1144;
	sub_82D2AEC8(ctx, base);
loc_82CD1144:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82cd11c0
	if (cr6.gt) goto loc_82CD11C0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cd11a8
	if (cr6.eq) goto loc_82CD11A8;
	// bdz 0x82cd116c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CD116C;
	// bdz 0x82cd11a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CD11A8;
	// bdz 0x82cd11c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CD11C0;
	// b 0x82cd1190
	goto loc_82CD1190;
loc_82CD116C:
	// addi r4,r30,-392
	ctx.r4.s64 = ctx.r30.s64 + -392;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82CD117C;
	sub_82CD0D18(ctx, base);
	// addi r4,r30,-372
	ctx.r4.s64 = ctx.r30.s64 + -372;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82CD118C;
	sub_82CD0D18(ctx, base);
	// b 0x82cd13a4
	goto loc_82CD13A4;
loc_82CD1190:
	// addi r4,r30,-352
	ctx.r4.s64 = ctx.r30.s64 + -352;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82CD11A0;
	sub_82CD0A28(ctx, base);
	// addi r4,r30,-328
	ctx.r4.s64 = ctx.r30.s64 + -328;
	// b 0x82cd1398
	goto loc_82CD1398;
loc_82CD11A8:
	// addi r4,r30,-304
	ctx.r4.s64 = ctx.r30.s64 + -304;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82CD11B8;
	sub_82CD0A28(ctx, base);
	// addi r4,r30,-284
	ctx.r4.s64 = ctx.r30.s64 + -284;
	// b 0x82cd1398
	goto loc_82CD1398;
loc_82CD11C0:
	// addi r4,r30,-432
	ctx.r4.s64 = ctx.r30.s64 + -432;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82CD11D0;
	sub_82CD0A28(ctx, base);
	// addi r4,r30,-412
	ctx.r4.s64 = ctx.r30.s64 + -412;
	// b 0x82cd1398
	goto loc_82CD1398;
loc_82CD11D8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq cr6,0x82cd1214
	if (cr6.eq) goto loc_82CD1214;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// beq cr6,0x82cd1214
	if (cr6.eq) goto loc_82CD1214;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(ctx.r28.s32, 6, xer);
	// beq cr6,0x82cd1214
	if (cr6.eq) goto loc_82CD1214;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD11F8;
	sub_82D19A68(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-256
	ctx.r4.s64 = ctx.r30.s64 + -256;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD1210;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cd1250
	goto loc_82CD1250;
loc_82CD1214:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0790
	ctx.lr = 0x82CD1220;
	sub_82CD0790(ctx, base);
	// bl 0x82d19a68
	ctx.lr = 0x82CD1224;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// bne cr6,0x82cd1234
	if (!cr6.eq) goto loc_82CD1234;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82CD1234:
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82CD1240;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82a69a28
	ctx.lr = 0x82CD1250;
	sub_82A69A28(ctx, base);
loc_82CD1250:
	// addi r4,r30,-236
	ctx.r4.s64 = ctx.r30.s64 + -236;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x837b0c10
	ctx.lr = 0x82CD1260;
	sub_837B0C10(ctx, base);
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82CD1278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-224
	ctx.r4.s64 = ctx.r30.s64 + -224;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x837b0c10
	ctx.lr = 0x82CD1288;
	sub_837B0C10(ctx, base);
	// lwz r10,324(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD12A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD12A8;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CD12C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd12d4
	if (cr6.eq) goto loc_82CD12D4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD12D4;
	sub_82D2AEC8(ctx, base);
loc_82CD12D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD12DC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-188
	ctx.r4.s64 = ctx.r30.s64 + -188;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD12F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd1308
	if (cr6.eq) goto loc_82CD1308;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD1308;
	sub_82D2AEC8(ctx, base);
loc_82CD1308:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82cd1384
	if (cr6.gt) goto loc_82CD1384;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cd136c
	if (cr6.eq) goto loc_82CD136C;
	// bdz 0x82cd1330
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CD1330;
	// bdz 0x82cd136c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CD136C;
	// bdz 0x82cd1384
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CD1384;
	// b 0x82cd1354
	goto loc_82CD1354;
loc_82CD1330:
	// addi r4,r30,-128
	ctx.r4.s64 = ctx.r30.s64 + -128;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82CD1340;
	sub_82CD0D18(ctx, base);
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0d18
	ctx.lr = 0x82CD1350;
	sub_82CD0D18(ctx, base);
	// b 0x82cd13a4
	goto loc_82CD13A4;
loc_82CD1354:
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82CD1364;
	sub_82CD0A28(ctx, base);
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// b 0x82cd1398
	goto loc_82CD1398;
loc_82CD136C:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82CD137C;
	sub_82CD0A28(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// b 0x82cd1398
	goto loc_82CD1398;
loc_82CD1384:
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82CD1394;
	sub_82CD0A28(ctx, base);
	// addi r4,r30,-148
	ctx.r4.s64 = ctx.r30.s64 + -148;
loc_82CD1398:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd0a28
	ctx.lr = 0x82CD13A4;
	sub_82CD0A28(ctx, base);
loc_82CD13A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD13AC;
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
	ctx.lr = 0x82CD13C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd1444
	if (cr6.eq) goto loc_82CD1444;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD13EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82cd1400
	if (!cr6.lt) goto loc_82CD1400;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CD1400:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82CD1408;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD141C;
	sub_82D291E0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd1438
	if (cr6.lt) goto loc_82CD1438;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82CD1438;
	sub_825952B8(ctx, base);
loc_82CD1438:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
loc_82CD1444:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd1460
	if (cr6.lt) goto loc_82CD1460;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CD1460;
	sub_825952B8(ctx, base);
loc_82CD1460:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD1468"))) PPC_WEAK_FUNC(sub_82CD1468);
PPC_FUNC_IMPL(__imp__sub_82CD1468) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82cd0e98
	ctx.lr = 0x82CD1480;
	sub_82CD0E98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD1494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d198d0
	ctx.lr = 0x82CD14A0;
	sub_82D198D0(ctx, base);
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

__attribute__((alias("__imp__sub_82CD14B8"))) PPC_WEAK_FUNC(sub_82CD14B8);
PPC_FUNC_IMPL(__imp__sub_82CD14B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,12
	cr6.compare<int32_t>(ctx.r3.s32, 12, xer);
	// bge cr6,0x82cd14e0
	if (!cr6.lt) goto loc_82CD14E0;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-6968
	ctx.r11.s64 = ctx.r10.s64 + -6968;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
loc_82CD14E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD14E8"))) PPC_WEAK_FUNC(sub_82CD14E8);
PPC_FUNC_IMPL(__imp__sub_82CD14E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD150C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cd1530
	if (!cr6.eq) goto loc_82CD1530;
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
loc_82CD1530:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD1544;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82CD155C"))) PPC_WEAK_FUNC(sub_82CD155C);
PPC_FUNC_IMPL(__imp__sub_82CD155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1560"))) PPC_WEAK_FUNC(sub_82CD1560);
PPC_FUNC_IMPL(__imp__sub_82CD1560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD156C"))) PPC_WEAK_FUNC(sub_82CD156C);
PPC_FUNC_IMPL(__imp__sub_82CD156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1570"))) PPC_WEAK_FUNC(sub_82CD1570);
PPC_FUNC_IMPL(__imp__sub_82CD1570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD157C"))) PPC_WEAK_FUNC(sub_82CD157C);
PPC_FUNC_IMPL(__imp__sub_82CD157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1580"))) PPC_WEAK_FUNC(sub_82CD1580);
PPC_FUNC_IMPL(__imp__sub_82CD1580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1590"))) PPC_WEAK_FUNC(sub_82CD1590);
PPC_FUNC_IMPL(__imp__sub_82CD1590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,8
	cr6.compare<int32_t>(ctx.r6.s32, 8, xer);
	// lfs f13,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// beq cr6,0x82cd15b8
	if (cr6.eq) goto loc_82CD15B8;
	// cmpwi cr6,r6,11
	cr6.compare<int32_t>(ctx.r6.s32, 11, xer);
	// bne cr6,0x82cd15c4
	if (!cr6.eq) goto loc_82CD15C4;
	// li r10,10
	ctx.r10.s64 = 10;
	// b 0x82cd15cc
	goto loc_82CD15CC;
loc_82CD15B8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,-29844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29844);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82cd15cc
	goto loc_82CD15CC;
loc_82CD15C4:
	// cmpwi cr6,r6,16
	cr6.compare<int32_t>(ctx.r6.s32, 16, xer);
	// bge cr6,0x82cd15e8
	if (!cr6.lt) goto loc_82CD15E8;
loc_82CD15CC:
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bge cr6,0x82cd15f8
	if (!cr6.lt) goto loc_82CD15F8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// b 0x82cd15fc
	goto loc_82CD15FC;
loc_82CD15E8:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// b 0x82cd15fc
	goto loc_82CD15FC;
loc_82CD15F8:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82CD15FC:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cd167c
	if (cr6.eq) goto loc_82CD167C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd1634
	if (!cr6.eq) goto loc_82CD1634;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82CD1634:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82CD167C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82cd16a8
	if (cr6.eq) goto loc_82CD16A8;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_82CD16A8:
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD16B4"))) PPC_WEAK_FUNC(sub_82CD16B4);
PPC_FUNC_IMPL(__imp__sub_82CD16B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD16B8"))) PPC_WEAK_FUNC(sub_82CD16B8);
PPC_FUNC_IMPL(__imp__sub_82CD16B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,8
	cr6.compare<int32_t>(ctx.r6.s32, 8, xer);
	// lfs f13,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// beq cr6,0x82cd16e0
	if (cr6.eq) goto loc_82CD16E0;
	// cmpwi cr6,r6,11
	cr6.compare<int32_t>(ctx.r6.s32, 11, xer);
	// bne cr6,0x82cd16ec
	if (!cr6.eq) goto loc_82CD16EC;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82cd16f4
	goto loc_82CD16F4;
loc_82CD16E0:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,-29844(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29844);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82cd16f4
	goto loc_82CD16F4;
loc_82CD16EC:
	// cmpwi cr6,r6,16
	cr6.compare<int32_t>(ctx.r6.s32, 16, xer);
	// bge cr6,0x82cd1710
	if (!cr6.lt) goto loc_82CD1710;
loc_82CD16F4:
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// bge cr6,0x82cd1720
	if (!cr6.lt) goto loc_82CD1720;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// b 0x82cd1724
	goto loc_82CD1724;
loc_82CD1710:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// b 0x82cd1724
	goto loc_82CD1724;
loc_82CD1720:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82CD1724:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cd178c
	if (cr6.eq) goto loc_82CD178C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd1750
	if (!cr6.eq) goto loc_82CD1750;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lfs f13,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_82CD1750:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_82CD178C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// beq cr6,0x82cd17b8
	if (cr6.eq) goto loc_82CD17B8;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
loc_82CD17B8:
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD17D4"))) PPC_WEAK_FUNC(sub_82CD17D4);
PPC_FUNC_IMPL(__imp__sub_82CD17D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD17D8"))) PPC_WEAK_FUNC(sub_82CD17D8);
PPC_FUNC_IMPL(__imp__sub_82CD17D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD17E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd1828
	if (!cr6.eq) goto loc_82CD1828;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82CD17FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82cd17d8
	ctx.lr = 0x82CD1808;
	sub_82CD17D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD181C;
	sub_825952B8(ctx, base);
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd17fc
	if (cr6.eq) goto loc_82CD17FC;
loc_82CD1828:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD1830"))) PPC_WEAK_FUNC(sub_82CD1830);
PPC_FUNC_IMPL(__imp__sub_82CD1830) {
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
	// bl 0x82cd17d8
	ctx.lr = 0x82CD1850;
	sub_82CD17D8(ctx, base);
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

__attribute__((alias("__imp__sub_82CD1884"))) PPC_WEAK_FUNC(sub_82CD1884);
PPC_FUNC_IMPL(__imp__sub_82CD1884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1888"))) PPC_WEAK_FUNC(sub_82CD1888);
PPC_FUNC_IMPL(__imp__sub_82CD1888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD1890;
	__savegprlr_29(ctx, base);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r8,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// beq 0x82cd18d8
	if (cr0.eq) goto loc_82CD18D8;
loc_82CD18AC:
	// divw r7,r6,r11
	ctx.r7.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf. r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// twlgei r4,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82cd18ac
	if (!cr0.eq) goto loc_82CD18AC;
loc_82CD18D8:
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82cd196c
	if (!cr6.lt) goto loc_82CD196C;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82cd196c
	if (!cr6.gt) goto loc_82CD196C;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82CD18F4:
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82cd1908
	if (!cr6.eq) goto loc_82CD1908;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CD1908:
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// std r31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r31.u64);
	// lwz r31,-48(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r29,-44(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// bge cr6,0x82cd194c
	if (!cr6.lt) goto loc_82CD194C;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// b 0x82cd1958
	goto loc_82CD1958;
loc_82CD194C:
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82CD1958:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82cd1908
	if (!cr6.eq) goto loc_82CD1908;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// bgt 0x82cd18f4
	if (cr0.gt) goto loc_82CD18F4;
loc_82CD196C:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD1970"))) PPC_WEAK_FUNC(sub_82CD1970);
PPC_FUNC_IMPL(__imp__sub_82CD1970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// srawi. r8,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// srawi r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// beq 0x82cd19c0
	if (cr0.eq) goto loc_82CD19C0;
loc_82CD1994:
	// divw r7,r6,r11
	ctx.r7.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf. r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// twlgei r4,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82cd1994
	if (!cr0.eq) goto loc_82CD1994;
loc_82CD19C0:
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bge cr6,0x82cd1a54
	if (!cr6.lt) goto loc_82CD1A54;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82cd1a54
	if (!cr6.gt) goto loc_82CD1A54;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82CD19DC:
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82cd19f0
	if (!cr6.eq) goto loc_82CD19F0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82CD19F0:
	// ld r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// std r31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r31.u64);
	// lfs f0,-28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,-32(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// bge cr6,0x82cd1a34
	if (!cr6.lt) goto loc_82CD1A34;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// b 0x82cd1a40
	goto loc_82CD1A40;
loc_82CD1A34:
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82CD1A40:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82cd19f0
	if (!cr6.eq) goto loc_82CD19F0;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// bgt 0x82cd19dc
	if (cr0.gt) goto loc_82CD19DC;
loc_82CD1A54:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD1A60"))) PPC_WEAK_FUNC(sub_82CD1A60);
PPC_FUNC_IMPL(__imp__sub_82CD1A60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,112
	ctx.r10.s64 = 112;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x82bc0bc0
	ctx.lr = 0x82CD1AA4;
	sub_82BC0BC0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cd1ac8
	if (cr6.eq) goto loc_82CD1AC8;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bc0c60
	ctx.lr = 0x82CD1AC4;
	sub_82BC0C60(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82CD1AC8:
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

__attribute__((alias("__imp__sub_82CD1AE4"))) PPC_WEAK_FUNC(sub_82CD1AE4);
PPC_FUNC_IMPL(__imp__sub_82CD1AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1AE8"))) PPC_WEAK_FUNC(sub_82CD1AE8);
PPC_FUNC_IMPL(__imp__sub_82CD1AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CD1AF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// srawi. r24,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq 0x82cd1d00
	if (cr0.eq) goto loc_82CD1D00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r6,r24
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, xer);
	// bge cr6,0x82cd1b40
	if (!cr6.lt) goto loc_82CD1B40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CD1B40;
	sub_831CC150(ctx, base);
loc_82CD1B40:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cd1c94
	if (!cr6.lt) goto loc_82CD1C94;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cd1b70
	if (!cr6.lt) goto loc_82CD1B70;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cd1b74
	goto loc_82CD1B74;
loc_82CD1B70:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CD1B74:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cd1b80
	if (!cr6.lt) goto loc_82CD1B80;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82CD1B80:
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CD1B9C;
	sub_82595718(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq cr6,0x82cd1bd8
	if (cr6.eq) goto loc_82CD1BD8;
loc_82CD1BB0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd1bc8
	if (cr6.eq) goto loc_82CD1BC8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82CD1BC8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x82cd1bb0
	if (!cr6.eq) goto loc_82CD1BB0;
loc_82CD1BD8:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82cd1c10
	if (cr6.eq) goto loc_82CD1C10;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82CD1BE4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd1c00
	if (cr6.eq) goto loc_82CD1C00;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82CD1C00:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cd1be4
	if (!cr6.eq) goto loc_82CD1BE4;
loc_82CD1C10:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cd1c4c
	if (cr6.eq) goto loc_82CD1C4C;
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
loc_82CD1C20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd1c3c
	if (cr6.eq) goto loc_82CD1C3C;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_82CD1C3C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cd1c20
	if (!cr6.eq) goto loc_82CD1C20;
loc_82CD1C4C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// beq cr6,0x82cd1c74
	if (cr6.eq) goto loc_82CD1C74;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82CD1C74;
	sub_825952B8(ctx, base);
loc_82CD1C74:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// add r10,r26,r29
	ctx.r10.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CD1C94:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82cd1cc8
	if (cr6.eq) goto loc_82CD1CC8;
loc_82CD1CA0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd1cb8
	if (cr6.eq) goto loc_82CD1CB8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82CD1CB8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cd1ca0
	if (!cr6.eq) goto loc_82CD1CA0;
loc_82CD1CC8:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r31,r24,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cd1cf4
	if (cr6.eq) goto loc_82CD1CF4;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82cd1cf4
	if (cr6.eq) goto loc_82CD1CF4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cd1888
	ctx.lr = 0x82CD1CF4;
	sub_82CD1888(ctx, base);
loc_82CD1CF4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82CD1D00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD1D08"))) PPC_WEAK_FUNC(sub_82CD1D08);
PPC_FUNC_IMPL(__imp__sub_82CD1D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CD1D10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// srawi. r24,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 3;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq 0x82cd1f20
	if (cr0.eq) goto loc_82CD1F20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r6,r24
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, xer);
	// bge cr6,0x82cd1d60
	if (!cr6.lt) goto loc_82CD1D60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CD1D60;
	sub_831CC150(ctx, base);
loc_82CD1D60:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cd1eb4
	if (!cr6.lt) goto loc_82CD1EB4;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cd1d90
	if (!cr6.lt) goto loc_82CD1D90;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cd1d94
	goto loc_82CD1D94;
loc_82CD1D90:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CD1D94:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cd1da0
	if (!cr6.lt) goto loc_82CD1DA0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82CD1DA0:
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CD1DBC;
	sub_82595718(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq cr6,0x82cd1df8
	if (cr6.eq) goto loc_82CD1DF8;
loc_82CD1DD0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd1de8
	if (cr6.eq) goto loc_82CD1DE8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82CD1DE8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x82cd1dd0
	if (!cr6.eq) goto loc_82CD1DD0;
loc_82CD1DF8:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82cd1e30
	if (cr6.eq) goto loc_82CD1E30;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82CD1E04:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd1e20
	if (cr6.eq) goto loc_82CD1E20;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_82CD1E20:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cd1e04
	if (!cr6.eq) goto loc_82CD1E04;
loc_82CD1E30:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cd1e6c
	if (cr6.eq) goto loc_82CD1E6C;
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
loc_82CD1E40:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd1e5c
	if (cr6.eq) goto loc_82CD1E5C;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
loc_82CD1E5C:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cd1e40
	if (!cr6.eq) goto loc_82CD1E40;
loc_82CD1E6C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// beq cr6,0x82cd1e94
	if (cr6.eq) goto loc_82CD1E94;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82CD1E94;
	sub_825952B8(ctx, base);
loc_82CD1E94:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// add r10,r26,r29
	ctx.r10.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CD1EB4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82cd1ee8
	if (cr6.eq) goto loc_82CD1EE8;
loc_82CD1EC0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd1ed8
	if (cr6.eq) goto loc_82CD1ED8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82CD1ED8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82cd1ec0
	if (!cr6.eq) goto loc_82CD1EC0;
loc_82CD1EE8:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r31,r24,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cd1f14
	if (cr6.eq) goto loc_82CD1F14;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82cd1f14
	if (cr6.eq) goto loc_82CD1F14;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82cd1970
	ctx.lr = 0x82CD1F14;
	sub_82CD1970(ctx, base);
loc_82CD1F14:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82CD1F20:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD1F28"))) PPC_WEAK_FUNC(sub_82CD1F28);
PPC_FUNC_IMPL(__imp__sub_82CD1F28) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw r4,r7,r10
	ctx.r4.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// bl 0x83476828
	ctx.lr = 0x82CD1F6C;
	sub_83476828(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cd1fc0
	if (cr6.eq) goto loc_82CD1FC0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cd1fbc
	if (cr6.eq) goto loc_82CD1FBC;
loc_82CD1F8C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd1fac
	if (cr6.eq) goto loc_82CD1FAC;
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
loc_82CD1FAC:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82cd1f8c
	if (!cr6.eq) goto loc_82CD1F8C;
loc_82CD1FBC:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82CD1FC0:
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

__attribute__((alias("__imp__sub_82CD1FDC"))) PPC_WEAK_FUNC(sub_82CD1FDC);
PPC_FUNC_IMPL(__imp__sub_82CD1FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD1FE0"))) PPC_WEAK_FUNC(sub_82CD1FE0);
PPC_FUNC_IMPL(__imp__sub_82CD1FE0) {
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
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6064
	ctx.r9.s64 = ctx.r11.s64 + -6064;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// beq cr6,0x82cd2024
	if (cr6.eq) goto loc_82CD2024;
	// bl 0x83131830
	ctx.lr = 0x82CD201C;
	sub_83131830(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82CD2024:
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r4,r31,100
	ctx.r4.s64 = ctx.r31.s64 + 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d0e798
	ctx.lr = 0x82CD2038;
	sub_82D0E798(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD204C;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82CD2054;
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

__attribute__((alias("__imp__sub_82CD2068"))) PPC_WEAK_FUNC(sub_82CD2068);
PPC_FUNC_IMPL(__imp__sub_82CD2068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CD2070;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x82cd2104
	if (cr0.eq) goto loc_82CD2104;
loc_82CD20B0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cd20d0
	if (cr6.eq) goto loc_82CD20D0;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cd20d0
	if (cr6.eq) goto loc_82CD20D0;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82CD20D0:
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x835977d8
	ctx.lr = 0x82CD20E4;
	sub_835977D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82cd20b0
	if (cr6.lt) goto loc_82CD20B0;
loc_82CD2104:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD2110"))) PPC_WEAK_FUNC(sub_82CD2110);
PPC_FUNC_IMPL(__imp__sub_82CD2110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CD2118;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// srawi. r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq 0x82cd21cc
	if (cr0.eq) goto loc_82CD21CC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82CD2164:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cd2198
	if (cr6.eq) goto loc_82CD2198;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82cd2184
	if (!cr6.eq) goto loc_82CD2184;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82CD2184:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd2198
	if (cr6.eq) goto loc_82CD2198;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82CD2198:
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x835977d8
	ctx.lr = 0x82CD21AC;
	sub_835977D8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x82cd2164
	if (cr6.lt) goto loc_82CD2164;
loc_82CD21CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD21DC"))) PPC_WEAK_FUNC(sub_82CD21DC);
PPC_FUNC_IMPL(__imp__sub_82CD21DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD21E0"))) PPC_WEAK_FUNC(sub_82CD21E0);
PPC_FUNC_IMPL(__imp__sub_82CD21E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD21E8;
	__savegprlr_29(ctx, base);
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
	// bl 0x8308e078
	ctx.lr = 0x82CD21FC;
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
	ctx.lr = 0x82CD2214;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-6064
	ctx.r9.s64 = ctx.r11.s64 + -6064;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8381b9d0
	ctx.lr = 0x82CD2244;
	sub_8381B9D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r29,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r29.u8);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// stb r30,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r30.u8);
	// bl 0x831317d8
	ctx.lr = 0x82CD2258;
	sub_831317D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// beq cr6,0x82cd2304
	if (cr6.eq) goto loc_82CD2304;
	// bl 0x831156e8
	ctx.lr = 0x82CD2268;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 131072;
	// addi r4,r4,-19992
	ctx.r4.s64 = ctx.r4.s64 + -19992;
	// bl 0x831314e0
	ctx.lr = 0x82CD2280;
	sub_831314E0(ctx, base);
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// addi r11,r11,13440
	ctx.r11.s64 = ctx.r11.s64 + 13440;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82cd22ac
	if (!cr6.eq) goto loc_82CD22AC;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x82cd22e4
	goto loc_82CD22E4;
loc_82CD22AC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lbz r3,97(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
loc_82CD22E4:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,9328
	ctx.r30.s64 = ctx.r11.s64 + 9328;
	// lwz r4,9328(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9328);
	// bl 0x82d20ae0
	ctx.lr = 0x82CD22F8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d20ae0
	ctx.lr = 0x82CD2304;
	sub_82D20AE0(ctx, base);
loc_82CD2304:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD2310"))) PPC_WEAK_FUNC(sub_82CD2310);
PPC_FUNC_IMPL(__imp__sub_82CD2310) {
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
	// bl 0x82cd1fe0
	ctx.lr = 0x82CD2330;
	sub_82CD1FE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd2348
	if (cr6.eq) goto loc_82CD2348;
	// bl 0x82416268
	ctx.lr = 0x82CD2344;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CD2348:
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

__attribute__((alias("__imp__sub_82CD2360"))) PPC_WEAK_FUNC(sub_82CD2360);
PPC_FUNC_IMPL(__imp__sub_82CD2360) {
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
	// bl 0x82cd1f28
	ctx.lr = 0x82CD2398;
	sub_82CD1F28(ctx, base);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x82CD23A8;
	sub_831CE980(ctx, base);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82cd1a60
	ctx.lr = 0x82CD23B4;
	sub_82CD1A60(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x831ce980
	ctx.lr = 0x82CD23C4;
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

__attribute__((alias("__imp__sub_82CD23E0"))) PPC_WEAK_FUNC(sub_82CD23E0);
PPC_FUNC_IMPL(__imp__sub_82CD23E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82CD23E8;
	__savegprlr_16(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r22,r4,2
	ctx.r22.s64 = ctx.r4.s64 + 131072;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r22,r22,12928
	ctx.r22.s64 = ctx.r22.s64 + 12928;
	// addis r26,r4,2
	ctx.r26.s64 = ctx.r4.s64 + 131072;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// lis r8,8191
	ctx.r8.s64 = 536805376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// addi r26,r26,8320
	ctx.r26.s64 = ctx.r26.s64 + 8320;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r18,r10,10368
	ctx.r18.u64 = ctx.r10.u64 | 10368;
	// ori r21,r9,65534
	ctx.r21.u64 = ctx.r9.u64 | 65534;
	// ori r19,r8,65535
	ctx.r19.u64 = ctx.r8.u64 | 65535;
	// addi r20,r11,-30688
	ctx.r20.s64 = ctx.r11.s64 + -30688;
loc_82CD244C:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CD245C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82cd245c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CD245C;
	// cmplwi cr6,r16,3
	cr6.compare<uint32_t>(ctx.r16.u32, 3, xer);
	// bgt cr6,0x82cd24c8
	if (cr6.gt) goto loc_82CD24C8;
	// mtctr r16
	ctr.u64 = ctx.r16.u64;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x82cd24c8
	if (cr6.eq) goto loc_82CD24C8;
	// bdz 0x82cd2488
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CD2488;
	// bdnz 0x82cd24a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CD24A8;
	// addi r5,r26,2560
	ctx.r5.s64 = ctx.r26.s64 + 2560;
	// b 0x82cd24cc
	goto loc_82CD24CC;
loc_82CD2488:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// addi r4,r27,-2560
	ctx.r4.s64 = ctx.r27.s64 + -2560;
	// blt cr6,0x82cd2498
	if (cr6.lt) goto loc_82CD2498;
	// add r4,r25,r18
	ctx.r4.u64 = ctx.r25.u64 + ctx.r18.u64;
loc_82CD2498:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831c6940
	ctx.lr = 0x82CD24A0;
	sub_831C6940(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82cd24d8
	goto loc_82CD24D8;
loc_82CD24A8:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// blt cr6,0x82cd24b8
	if (cr6.lt) goto loc_82CD24B8;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82CD24B8:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831c6940
	ctx.lr = 0x82CD24C0;
	sub_831C6940(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82cd24d8
	goto loc_82CD24D8;
loc_82CD24C8:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82CD24CC:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82cd24d8
	if (cr6.lt) goto loc_82CD24D8;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_82CD24D8:
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0080
	ctx.lr = 0x82CD24E8;
	sub_831D0080(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd25f0
	if (cr6.eq) goto loc_82CD25F0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd1590
	ctx.lr = 0x82CD250C;
	sub_82CD1590(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cd2540
	if (cr6.eq) goto loc_82CD2540;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CD2524:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82cd2540
	if (cr6.gt) goto loc_82CD2540;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82cd2524
	if (!cr6.eq) goto loc_82CD2524;
loc_82CD2540:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r30,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cd25a4
	if (!cr6.eq) goto loc_82CD25A4;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bgt cr6,0x82cd2674
	if (cr6.gt) goto loc_82CD2674;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// srawi r11,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cd25a4
	if (!cr6.gt) goto loc_82CD25A4;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subf r8,r10,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cd2590
	if (cr6.lt) goto loc_82CD2590;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CD2590:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cd259c
	if (!cr6.lt) goto loc_82CD259C;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82CD259C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830aed20
	ctx.lr = 0x82CD25A4;
	sub_830AED20(ctx, base);
loc_82CD25A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd25b8
	if (cr6.eq) goto loc_82CD25B8;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82CD25B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r5,-8
	ctx.r4.s64 = ctx.r5.s64 + -8;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cd25f0
	if (cr6.eq) goto loc_82CD25F0;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82cd25f0
	if (cr6.eq) goto loc_82CD25F0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82cd1888
	ctx.lr = 0x82CD25F0;
	sub_82CD1888(ctx, base);
loc_82CD25F0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82cd244c
	if (cr6.lt) goto loc_82CD244C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r17
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r17.u32, xer);
	// ble cr6,0x82cd2668
	if (!cr6.gt) goto loc_82CD2668;
	// rlwinm r9,r17,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cd2668
	if (cr6.eq) goto loc_82CD2668;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r10
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cd2664
	if (cr6.eq) goto loc_82CD2664;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82CD2640:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bne cr6,0x82cd2640
	if (!cr6.eq) goto loc_82CD2640;
loc_82CD2664:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82CD2668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82CD2674:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CD2680;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82CD2680"))) PPC_WEAK_FUNC(sub_82CD2680);
PPC_FUNC_IMPL(__imp__sub_82CD2680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82CD2688;
	__savegprlr_16(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r20,r4,2
	ctx.r20.s64 = ctx.r4.s64 + 131072;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r20,r20,12928
	ctx.r20.s64 = ctx.r20.s64 + 12928;
	// addis r26,r4,2
	ctx.r26.s64 = ctx.r4.s64 + 131072;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lis r9,8191
	ctx.r9.s64 = 536805376;
	// lis r8,8191
	ctx.r8.s64 = 536805376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// addi r26,r26,8320
	ctx.r26.s64 = ctx.r26.s64 + 8320;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r18,r10,10368
	ctx.r18.u64 = ctx.r10.u64 | 10368;
	// ori r22,r9,65534
	ctx.r22.u64 = ctx.r9.u64 | 65534;
	// ori r19,r8,65535
	ctx.r19.u64 = ctx.r8.u64 | 65535;
	// addi r21,r11,-30688
	ctx.r21.s64 = ctx.r11.s64 + -30688;
loc_82CD26EC:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82CD26FC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82cd26fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CD26FC;
	// cmplwi cr6,r16,3
	cr6.compare<uint32_t>(ctx.r16.u32, 3, xer);
	// bgt cr6,0x82cd2768
	if (cr6.gt) goto loc_82CD2768;
	// mtctr r16
	ctr.u64 = ctx.r16.u64;
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(ctx.r16.s32, 0, xer);
	// beq cr6,0x82cd2768
	if (cr6.eq) goto loc_82CD2768;
	// bdz 0x82cd2728
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82CD2728;
	// bdnz 0x82cd2748
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CD2748;
	// addi r5,r26,2560
	ctx.r5.s64 = ctx.r26.s64 + 2560;
	// b 0x82cd276c
	goto loc_82CD276C;
loc_82CD2728:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// addi r4,r27,-2560
	ctx.r4.s64 = ctx.r27.s64 + -2560;
	// blt cr6,0x82cd2738
	if (cr6.lt) goto loc_82CD2738;
	// add r4,r25,r18
	ctx.r4.u64 = ctx.r25.u64 + ctx.r18.u64;
loc_82CD2738:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831c6940
	ctx.lr = 0x82CD2740;
	sub_831C6940(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82cd2778
	goto loc_82CD2778;
loc_82CD2748:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// blt cr6,0x82cd2758
	if (cr6.lt) goto loc_82CD2758;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82CD2758:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831c6940
	ctx.lr = 0x82CD2760;
	sub_831C6940(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82cd2778
	goto loc_82CD2778;
loc_82CD2768:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82CD276C:
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82cd2778
	if (cr6.lt) goto loc_82CD2778;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_82CD2778:
	// li r6,64
	ctx.r6.s64 = 64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831d0080
	ctx.lr = 0x82CD2788;
	sub_831D0080(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd28a4
	if (cr6.eq) goto loc_82CD28A4;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd16b8
	ctx.lr = 0x82CD27AC;
	sub_82CD16B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82cd27f4
	if (cr6.eq) goto loc_82CD27F4;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_82CD27C4:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82cd27d8
	if (cr6.gt) goto loc_82CD27D8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82CD27D8:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cd27f4
	if (!cr6.eq) goto loc_82CD27F4;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cd27c4
	if (!cr6.eq) goto loc_82CD27C4;
loc_82CD27F4:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r31,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cd2858
	if (!cr6.eq) goto loc_82CD2858;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// bgt cr6,0x82cd2928
	if (cr6.gt) goto loc_82CD2928;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cd2858
	if (!cr6.gt) goto loc_82CD2858;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subf r8,r10,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82cd2844
	if (cr6.lt) goto loc_82CD2844;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82CD2844:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x82cd2850
	if (!cr6.lt) goto loc_82CD2850;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82CD2850:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aed20
	ctx.lr = 0x82CD2858;
	sub_830AED20(ctx, base);
loc_82CD2858:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd286c
	if (cr6.eq) goto loc_82CD286C;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82CD286C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r31,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r4,r5,-8
	ctx.r4.s64 = ctx.r5.s64 + -8;
	// stw r5,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cd28a4
	if (cr6.eq) goto loc_82CD28A4;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82cd28a4
	if (cr6.eq) goto loc_82CD28A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82cd1970
	ctx.lr = 0x82CD28A4;
	sub_82CD1970(ctx, base);
loc_82CD28A4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(ctx.r29.u32, 32, xer);
	// blt cr6,0x82cd26ec
	if (cr6.lt) goto loc_82CD26EC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r8,r17
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r17.u32, xer);
	// ble cr6,0x82cd291c
	if (!cr6.gt) goto loc_82CD291C;
	// rlwinm r9,r17,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cd291c
	if (cr6.eq) goto loc_82CD291C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r10
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r10.u32, xer);
	// beq cr6,0x82cd2918
	if (cr6.eq) goto loc_82CD2918;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82CD28F4:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bne cr6,0x82cd28f4
	if (!cr6.eq) goto loc_82CD28F4;
loc_82CD2918:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82CD291C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82CD2928:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82CD2934;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_82CD2934"))) PPC_WEAK_FUNC(sub_82CD2934);
PPC_FUNC_IMPL(__imp__sub_82CD2934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD2938"))) PPC_WEAK_FUNC(sub_82CD2938);
PPC_FUNC_IMPL(__imp__sub_82CD2938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CD2940;
	__savegprlr_14(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r5,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r5.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r6,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r6.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,12
	cr6.compare<int32_t>(ctx.r5.s32, 12, xer);
	// blt cr6,0x82cd2970
	if (cr6.lt) goto loc_82CD2970;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CD2970:
	// bl 0x831156e8
	ctx.lr = 0x82CD2974;
	sub_831156E8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,-7214
	ctx.r11.s64 = ctx.r11.s64 + -7214;
	// lwz r6,96(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r4,116(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r11,246
	ctx.r11.s64 = ctx.r11.s64 + 246;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cd23e0
	ctx.lr = 0x82CD29B8;
	sub_82CD23E0(ctx, base);
	// lwz r11,96(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// beq cr6,0x82cd29e8
	if (cr6.eq) goto loc_82CD29E8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bne cr6,0x82cd29ec
	if (!cr6.eq) goto loc_82CD29EC;
loc_82CD29E8:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CD29EC:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r27,r11,-30688
	ctx.r27.s64 = ctx.r11.s64 + -30688;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// beq cr6,0x82cd2ae8
	if (cr6.eq) goto loc_82CD2AE8;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
loc_82CD2A10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cd2a38
	if (cr6.eq) goto loc_82CD2A38;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82cd2a54
	if (!cr6.lt) goto loc_82CD2A54;
	// addi r10,r11,2218
	ctx.r10.s64 = ctx.r11.s64 + 2218;
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd2a58
	goto loc_82CD2A58;
loc_82CD2A38:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82cd2a54
	if (!cr6.lt) goto loc_82CD2A54;
	// addi r10,r11,2178
	ctx.r10.s64 = ctx.r11.s64 + 2178;
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd2a58
	goto loc_82CD2A58;
loc_82CD2A54:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82CD2A58:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x82cd2a94
	if (!cr6.lt) goto loc_82CD2A94;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82cd2a8c
	if (cr6.eq) goto loc_82CD2A8C;
loc_82CD2A70:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82cd2a70
	if (!cr6.eq) goto loc_82CD2A70;
loc_82CD2A8C:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// b 0x82cd2adc
	goto loc_82CD2ADC;
loc_82CD2A94:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82cd2ad8
	if (!cr6.lt) goto loc_82CD2AD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83546fd8
	ctx.lr = 0x82CD2AA8;
	sub_83546FD8(ctx, base);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82cd2ad0
	if (cr6.eq) goto loc_82CD2AD0;
loc_82CD2AB4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82cd2ab4
	if (!cr6.eq) goto loc_82CD2AB4;
loc_82CD2AD0:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// b 0x82cd2adc
	goto loc_82CD2ADC;
loc_82CD2AD8:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82CD2ADC:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bne cr6,0x82cd2a10
	if (!cr6.eq) goto loc_82CD2A10;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
loc_82CD2AE8:
	// lwz r20,160(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82cd1ae8
	ctx.lr = 0x82CD2B04;
	sub_82CD1AE8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82cd2068
	ctx.lr = 0x82CD2B10;
	sub_82CD2068(ctx, base);
	// lwz r11,104(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// addi r31,r16,100
	ctx.r31.s64 = ctx.r16.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x82CD2B24;
	sub_82CD17D8(ctx, base);
	// lwz r8,104(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r22,480(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r22,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r22.s64;
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r7,104(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// srawi. r27,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,104(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// stw r6,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r6.u32);
	// stw r24,108(r16)
	PPC_STORE_U32(ctx.r16.u32 + 108, ctx.r24.u32);
	// beq 0x82cd2bb4
	if (cr0.eq) goto loc_82CD2BB4;
	// subf r11,r23,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r23.s64;
	// addi r29,r22,-4
	ctx.r29.s64 = ctx.r22.s64 + -4;
	// srawi r26,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 3;
	// addi r28,r23,-8
	ctx.r28.s64 = ctx.r23.s64 + -8;
loc_82CD2B70:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bge cr6,0x82cd2bb4
	if (!cr6.lt) goto loc_82CD2BB4;
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwzu r10,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82bea3a0
	ctx.lr = 0x82CD2B94;
	sub_82BEA3A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x837ba1c0
	ctx.lr = 0x82CD2BA8;
	sub_837BA1C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x82cd2b70
	if (cr6.lt) goto loc_82CD2B70;
loc_82CD2BB4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82cd2c1c
	if (!cr6.eq) goto loc_82CD2C1C;
	// subf r11,r23,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r23.s64;
	// li r17,2
	ctx.r17.s64 = 2;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// srawi r31,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// beq cr6,0x82cd2be0
	if (cr6.eq) goto loc_82CD2BE0;
	// stw r17,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r17.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x825952b8
	ctx.lr = 0x82CD2BE0;
	sub_825952B8(ctx, base);
loc_82CD2BE0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82cd2bf8
	if (cr6.eq) goto loc_82CD2BF8;
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x825952b8
	ctx.lr = 0x82CD2BF8;
	sub_825952B8(ctx, base);
loc_82CD2BF8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82cd3450
	if (cr6.eq) goto loc_82CD3450;
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x82CD2C10;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CD2C1C:
	// addi r14,r25,100
	ctx.r14.s64 = ctx.r25.s64 + 100;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82dad028
	ctx.lr = 0x82CD2C28;
	sub_82DAD028(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r17,2
	ctx.r17.s64 = 2;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// mr r15,r24
	ctx.r15.u64 = ctx.r24.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd33f8
	if (cr6.eq) goto loc_82CD33F8;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r28,r11,9348
	ctx.r28.s64 = ctx.r11.s64 + 9348;
loc_82CD2C60:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82CD2C6C;
	sub_82D2D580(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd33f0
	if (cr6.eq) goto loc_82CD33F0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r20,r8
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r8.u32, xer);
	// bge cr6,0x82cd3144
	if (!cr6.lt) goto loc_82CD3144;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lwz r21,0(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r21,3
	cr6.compare<uint32_t>(ctx.r21.u32, 3, xer);
	// bgt cr6,0x82cd2cb0
	if (cr6.gt) goto loc_82CD2CB0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CD2CB0:
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// beq cr6,0x82cd2cc0
	if (cr6.eq) goto loc_82CD2CC0;
	// li r18,1
	ctx.r18.s64 = 1;
loc_82CD2CC0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// lwz r10,796(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// addi r9,r28,112
	ctx.r9.s64 = ctx.r28.s64 + 112;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplw cr6,r20,r10
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, xer);
	// rlwinm r7,r8,29,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x4;
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blt cr6,0x82cd3134
	if (cr6.lt) goto loc_82CD3134;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r24,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r24.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r24,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r24.u8);
loc_82CD2CF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd2cf4
	if (!cr6.eq) goto loc_82CD2CF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD2D18;
	sub_8259CC28(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// lwz r5,96(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82ab6970
	ctx.lr = 0x82CD2D28;
	sub_82AB6970(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CD2D2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd2d2c
	if (!cr6.eq) goto loc_82CD2D2C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CD2D50;
	sub_825A1EB8(ctx, base);
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r24,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r24.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r24,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r24.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8292a448
	ctx.lr = 0x82CD2D68;
	sub_8292A448(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cd2d7c
	if (!cr6.lt) goto loc_82CD2D7C;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_82CD2D7C:
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r29,r23,100
	ctx.r29.s64 = ctx.r23.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD2D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd2db4
	if (cr6.lt) goto loc_82CD2DB4;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82CD2DB4;
	sub_825952B8(ctx, base);
loc_82CD2DB4:
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r24,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r24.u8);
	// blt cr6,0x82cd2ddc
	if (cr6.lt) goto loc_82CD2DDC;
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,496(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x825952b8
	ctx.lr = 0x82CD2DDC;
	sub_825952B8(ctx, base);
loc_82CD2DDC:
	// stw r27,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r24,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r24.u32);
	// stb r24,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r24.u8);
	// beq cr6,0x82cd2f9c
	if (cr6.eq) goto loc_82CD2F9C;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd2e1c
	if (cr6.eq) goto loc_82CD2E1C;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82cd2e38
	if (!cr6.lt) goto loc_82CD2E38;
	// addi r10,r11,2218
	ctx.r10.s64 = ctx.r11.s64 + 2218;
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd2e3c
	goto loc_82CD2E3C;
loc_82CD2E1C:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82cd2e38
	if (!cr6.lt) goto loc_82CD2E38;
	// addi r10,r11,2178
	ctx.r10.s64 = ctx.r11.s64 + 2178;
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd2e3c
	goto loc_82CD2E3C;
loc_82CD2E38:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82CD2E3C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82cd2f18
	if (!cr6.lt) goto loc_82CD2F18;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x837b0c10
	ctx.lr = 0x82CD2E58;
	sub_837B0C10(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r10,-31
	ctx.r4.s64 = ctx.r10.s64 + -31;
	// bl 0x837b0c10
	ctx.lr = 0x82CD2E68;
	sub_837B0C10(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// ori r4,r4,659
	ctx.r4.u64 = ctx.r4.u64 | 659;
	// bl 0x82d04220
	ctx.lr = 0x82CD2E78;
	sub_82D04220(ctx, base);
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r6,384(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82cd2e8c
	if (!cr6.lt) goto loc_82CD2E8C;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
loc_82CD2E8C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// mulli r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 * 2800;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82d042a8
	ctx.lr = 0x82CD2EB0;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD2EC4;
	sub_82D291E0(ctx, base);
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd2ee0
	if (cr6.lt) goto loc_82CD2EE0;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x82CD2EE0;
	sub_825952B8(ctx, base);
loc_82CD2EE0:
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r24,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r24.u8);
	// blt cr6,0x82cd2f08
	if (cr6.lt) goto loc_82CD2F08;
	// stw r17,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x82CD2F08;
	sub_825952B8(ctx, base);
loc_82CD2F08:
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// stw r24,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r24.u32);
	// stb r24,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r24.u8);
	// b 0x82cd2f9c
	goto loc_82CD2F9C;
loc_82CD2F18:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x837b0c10
	ctx.lr = 0x82CD2F24;
	sub_837B0C10(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r9,2800
	ctx.r11.s64 = ctx.r9.s64 * 2800;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD2F3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd2f3c
	if (!cr6.eq) goto loc_82CD2F3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD2F60;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD2F74;
	sub_82D291E0(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cd2f90
	if (cr6.lt) goto loc_82CD2F90;
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82CD2F90;
	sub_825952B8(ctx, base);
loc_82CD2F90:
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// stw r24,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r24.u32);
	// stb r24,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r24.u8);
loc_82CD2F9C:
	// lwz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD2FA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd2fa4
	if (!cr6.eq) goto loc_82CD2FA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD2FC8;
	sub_8259CC28(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lwz r5,96(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82ab6970
	ctx.lr = 0x82CD2FD8;
	sub_82AB6970(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CD2FDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd2fdc
	if (!cr6.eq) goto loc_82CD2FDC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CD3000;
	sub_825A1EB8(ctx, base);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r24,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r24.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8292a448
	ctx.lr = 0x82CD3018;
	sub_8292A448(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cd302c
	if (!cr6.lt) goto loc_82CD302C;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_82CD302C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD3040;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd3060
	if (cr6.lt) goto loc_82CD3060;
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82CD3060;
	sub_825952B8(ctx, base);
loc_82CD3060:
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r24.u8);
	// blt cr6,0x82cd3088
	if (cr6.lt) goto loc_82CD3088;
	// stw r17,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r17.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x825952b8
	ctx.lr = 0x82CD3088;
	sub_825952B8(ctx, base);
loc_82CD3088:
	// stw r27,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r24,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r24.u32);
	// stb r24,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r24.u8);
	// beq cr6,0x82cd30a8
	if (cr6.eq) goto loc_82CD30A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82d294d0
	ctx.lr = 0x82CD30A8;
	sub_82D294D0(ctx, base);
loc_82CD30A8:
	// lwz r4,788(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,96(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// bl 0x831c6710
	ctx.lr = 0x82CD30BC;
	sub_831C6710(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82cd30e0
	if (cr6.eq) goto loc_82CD30E0;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// ble cr6,0x82cd30d8
	if (!cr6.gt) goto loc_82CD30D8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82cd30e0
	goto loc_82CD30E0;
loc_82CD30D8:
	// bge cr6,0x82cd30e0
	if (!cr6.lt) goto loc_82CD30E0;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82CD30E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD30F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd3108
	if (cr6.eq) goto loc_82CD3108;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d4dce8
	ctx.lr = 0x82CD3108;
	sub_82D4DCE8(ctx, base);
loc_82CD3108:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd3128
	if (cr6.lt) goto loc_82CD3128;
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CD3128;
	sub_825952B8(ctx, base);
loc_82CD3128:
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r24,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r24.u32);
	// stb r24,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r24.u8);
loc_82CD3134:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// b 0x82cd31a0
	goto loc_82CD31A0;
loc_82CD3144:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// add r21,r18,r21
	ctx.r21.u64 = ctx.r18.u64 + ctx.r21.u64;
	// beq cr6,0x82cd3158
	if (cr6.eq) goto loc_82CD3158;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x82cd3164
	goto loc_82CD3164;
loc_82CD3158:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
loc_82CD3164:
	// cmplwi cr6,r21,3
	cr6.compare<uint32_t>(ctx.r21.u32, 3, xer);
	// bgt cr6,0x82cd3170
	if (cr6.gt) goto loc_82CD3170;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CD3170:
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r3,r23,100
	ctx.r3.s64 = ctx.r23.s64 + 100;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD3188;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd3198
	if (cr6.eq) goto loc_82CD3198;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d4dce8
	ctx.lr = 0x82CD3198;
	sub_82D4DCE8(ctx, base);
loc_82CD3198:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_82CD31A0:
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r24,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r24.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r24,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r24.u8);
loc_82CD31B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd31b4
	if (!cr6.eq) goto loc_82CD31B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD31D8;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r30,r23,100
	ctx.r30.s64 = ctx.r23.s64 + 100;
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD31F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd32d4
	if (cr6.eq) goto loc_82CD32D4;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_82CD3214:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3214
	if (!cr6.eq) goto loc_82CD3214;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD3238;
	sub_8259CC28(ctx, base);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd3254
	if (cr6.eq) goto loc_82CD3254;
	// addi r11,r28,112
	ctx.r11.s64 = ctx.r28.s64 + 112;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82cd3258
	goto loc_82CD3258;
loc_82CD3254:
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
loc_82CD3258:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD325C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd325c
	if (!cr6.eq) goto loc_82CD325C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CD3280;
	sub_825A1EB8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cd3294
	if (!cr6.lt) goto loc_82CD3294;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82CD3294:
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
	ctx.lr = 0x82CD32AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd32c8
	if (cr6.lt) goto loc_82CD32C8;
	// stw r17,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r17.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CD32C8;
	sub_825952B8(ctx, base);
loc_82CD32C8:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_82CD32D4:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r5,96(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82ab6970
	ctx.lr = 0x82CD32E4;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd32f8
	if (cr6.lt) goto loc_82CD32F8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd32fc
	goto loc_82CD32FC;
loc_82CD32F8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD32FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD3310;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,548(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd3330
	if (cr6.lt) goto loc_82CD3330;
	// stw r17,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r17.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x82CD3330;
	sub_825952B8(ctx, base);
loc_82CD3330:
	// stw r27,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r24,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r24.u32);
	// stb r24,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r24.u8);
	// beq cr6,0x82cd3350
	if (cr6.eq) goto loc_82CD3350;
	// clrldi r4,r21,32
	ctx.r4.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CD3350;
	sub_82D294D0(ctx, base);
loc_82CD3350:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd3364
	if (cr6.eq) goto loc_82CD3364;
	// lwz r4,-12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// b 0x82cd3368
	goto loc_82CD3368;
loc_82CD3364:
	// lwz r4,-8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
loc_82CD3368:
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
	ctx.lr = 0x82CD3380;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r22,24
	ctx.r9.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cd3394
	if (cr6.eq) goto loc_82CD3394;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// b 0x82cd3398
	goto loc_82CD3398;
loc_82CD3394:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82CD3398:
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
	ctx.lr = 0x82CD33B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cd33c0
	if (cr6.eq) goto loc_82CD33C0;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_82CD33C0:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd33dc
	if (cr6.lt) goto loc_82CD33DC;
	// stw r17,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r17.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x82CD33DC;
	sub_825952B8(ctx, base);
loc_82CD33DC:
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r22,480(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r24,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r24.u32);
	// stb r24,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r24.u8);
loc_82CD33F0:
	// cmplw cr6,r15,r31
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r31.u32, xer);
	// blt cr6,0x82cd2c60
	if (cr6.lt) goto loc_82CD2C60;
loc_82CD33F8:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r31,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
	// beq cr6,0x82cd3420
	if (cr6.eq) goto loc_82CD3420;
	// stw r17,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r17.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x825952b8
	ctx.lr = 0x82CD3420;
	sub_825952B8(ctx, base);
loc_82CD3420:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cd3438
	if (cr6.eq) goto loc_82CD3438;
	// stw r17,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r17.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x825952b8
	ctx.lr = 0x82CD3438;
	sub_825952B8(ctx, base);
loc_82CD3438:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cd3450
	if (cr6.eq) goto loc_82CD3450;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825952b8
	ctx.lr = 0x82CD3450;
	sub_825952B8(ctx, base);
loc_82CD3450:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD345C"))) PPC_WEAK_FUNC(sub_82CD345C);
PPC_FUNC_IMPL(__imp__sub_82CD345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD3460"))) PPC_WEAK_FUNC(sub_82CD3460);
PPC_FUNC_IMPL(__imp__sub_82CD3460) {
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
	ctx.lr = 0x82CD3468;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r5,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r6,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r6.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,12
	cr6.compare<int32_t>(ctx.r5.s32, 12, xer);
	// blt cr6,0x82cd34a0
	if (cr6.lt) goto loc_82CD34A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CD34A0:
	// bl 0x831156e8
	ctx.lr = 0x82CD34A4;
	sub_831156E8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,-7182
	ctx.r11.s64 = ctx.r11.s64 + -7182;
	// lwz r6,96(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r4,116(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r11,214
	ctx.r11.s64 = ctx.r11.s64 + 214;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82cd2680
	ctx.lr = 0x82CD34EC;
	sub_82CD2680(ctx, base);
	// lwz r11,96(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r24.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// beq cr6,0x82cd351c
	if (cr6.eq) goto loc_82CD351C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bne cr6,0x82cd3520
	if (!cr6.eq) goto loc_82CD3520;
loc_82CD351C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82CD3520:
	// lis r11,-31750
	ctx.r11.s64 = -2080768000;
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r27,r11,-30688
	ctx.r27.s64 = ctx.r11.s64 + -30688;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// beq cr6,0x82cd361c
	if (cr6.eq) goto loc_82CD361C;
	// clrlwi r29,r9,24
	ctx.r29.u64 = ctx.r9.u32 & 0xFF;
loc_82CD3544:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82cd356c
	if (cr6.eq) goto loc_82CD356C;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82cd3588
	if (!cr6.lt) goto loc_82CD3588;
	// addi r10,r11,2218
	ctx.r10.s64 = ctx.r11.s64 + 2218;
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd358c
	goto loc_82CD358C;
loc_82CD356C:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82cd3588
	if (!cr6.lt) goto loc_82CD3588;
	// addi r10,r11,2178
	ctx.r10.s64 = ctx.r11.s64 + 2178;
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd358c
	goto loc_82CD358C;
loc_82CD3588:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82CD358C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x82cd35c8
	if (!cr6.lt) goto loc_82CD35C8;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82cd35c0
	if (cr6.eq) goto loc_82CD35C0;
loc_82CD35A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82cd35a4
	if (!cr6.eq) goto loc_82CD35A4;
loc_82CD35C0:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// b 0x82cd3610
	goto loc_82CD3610;
loc_82CD35C8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82cd360c
	if (!cr6.lt) goto loc_82CD360C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83546fd8
	ctx.lr = 0x82CD35DC;
	sub_83546FD8(ctx, base);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82cd3604
	if (cr6.eq) goto loc_82CD3604;
loc_82CD35E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82cd35e8
	if (!cr6.eq) goto loc_82CD35E8;
loc_82CD3604:
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// b 0x82cd3610
	goto loc_82CD3610;
loc_82CD360C:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82CD3610:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bne cr6,0x82cd3544
	if (!cr6.eq) goto loc_82CD3544;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
loc_82CD361C:
	// lwz r20,160(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82cd1d08
	ctx.lr = 0x82CD3638;
	sub_82CD1D08(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82cd2110
	ctx.lr = 0x82CD3644;
	sub_82CD2110(ctx, base);
	// lwz r11,104(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// addi r31,r16,100
	ctx.r31.s64 = ctx.r16.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82cd17d8
	ctx.lr = 0x82CD3658;
	sub_82CD17D8(ctx, base);
	// lwz r8,104(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lwz r22,512(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r10,516(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r22,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r22.s64;
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// lwz r7,104(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// srawi. r27,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r7,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r7.u32);
	// lwz r6,104(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 104);
	// stw r6,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r6.u32);
	// stw r24,108(r16)
	PPC_STORE_U32(ctx.r16.u32 + 108, ctx.r24.u32);
	// beq 0x82cd36e8
	if (cr0.eq) goto loc_82CD36E8;
	// subf r11,r23,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r23.s64;
	// addi r29,r22,-4
	ctx.r29.s64 = ctx.r22.s64 + -4;
	// srawi r26,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 3;
	// addi r28,r23,-8
	ctx.r28.s64 = ctx.r23.s64 + -8;
loc_82CD36A4:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bge cr6,0x82cd36e8
	if (!cr6.lt) goto loc_82CD36E8;
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwzu r10,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bl 0x82bea3a0
	ctx.lr = 0x82CD36C8;
	sub_82BEA3A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x837ba1c0
	ctx.lr = 0x82CD36DC;
	sub_837BA1C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x82cd36a4
	if (cr6.lt) goto loc_82CD36A4;
loc_82CD36E8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82cd3754
	if (!cr6.eq) goto loc_82CD3754;
	// subf r11,r23,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r23.s64;
	// li r17,2
	ctx.r17.s64 = 2;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// srawi r31,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 3;
	// beq cr6,0x82cd3714
	if (cr6.eq) goto loc_82CD3714;
	// stw r17,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r17.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825952b8
	ctx.lr = 0x82CD3714;
	sub_825952B8(ctx, base);
loc_82CD3714:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82cd372c
	if (cr6.eq) goto loc_82CD372C;
	// stw r17,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r17.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x825952b8
	ctx.lr = 0x82CD372C;
	sub_825952B8(ctx, base);
loc_82CD372C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82cd4030
	if (cr6.eq) goto loc_82CD4030;
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825952b8
	ctx.lr = 0x82CD3744;
	sub_825952B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82CD3754:
	// addi r14,r25,100
	ctx.r14.s64 = ctx.r25.s64 + 100;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82dad028
	ctx.lr = 0x82CD3760;
	sub_82DAD028(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r17,2
	ctx.r17.s64 = 2;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// mr r15,r24
	ctx.r15.u64 = ctx.r24.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd3fd8
	if (cr6.eq) goto loc_82CD3FD8;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r28,r11,9348
	ctx.r28.s64 = ctx.r11.s64 + 9348;
	// lfs f31,-23488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23488);
	ctx.f31.f64 = double(temp.f32);
loc_82CD37A0:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82CD37AC;
	sub_82D2D580(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd3fd0
	if (cr6.eq) goto loc_82CD3FD0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r20,r8
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r8.u32, xer);
	// bge cr6,0x82cd3d24
	if (!cr6.lt) goto loc_82CD3D24;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lwz r21,0(r19)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r21,3
	cr6.compare<uint32_t>(ctx.r21.u32, 3, xer);
	// bgt cr6,0x82cd37f0
	if (cr6.gt) goto loc_82CD37F0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CD37F0:
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// beq cr6,0x82cd3800
	if (cr6.eq) goto loc_82CD3800;
	// li r18,1
	ctx.r18.s64 = 1;
loc_82CD3800:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// lwz r10,844(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// addi r9,r28,112
	ctx.r9.s64 = ctx.r28.s64 + 112;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplw cr6,r20,r10
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r10.u32, xer);
	// rlwinm r7,r8,29,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x4;
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// blt cr6,0x82cd3d14
	if (cr6.lt) goto loc_82CD3D14;
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_82CD3834:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3834
	if (!cr6.eq) goto loc_82CD3834;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD3858;
	sub_8259CC28(ctx, base);
	// lwz r4,56(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD3860:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3860
	if (!cr6.eq) goto loc_82CD3860;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD3884;
	sub_8259CC28(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r5,96(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82ab6970
	ctx.lr = 0x82CD3894;
	sub_82AB6970(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CD3898:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3898
	if (!cr6.eq) goto loc_82CD3898;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CD38BC;
	sub_825A1EB8(ctx, base);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r24,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r24.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r24,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r24.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8292a448
	ctx.lr = 0x82CD38D4;
	sub_8292A448(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cd38e8
	if (!cr6.lt) goto loc_82CD38E8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_82CD38E8:
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r29,r23,100
	ctx.r29.s64 = ctx.r23.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD3900;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd3920
	if (cr6.lt) goto loc_82CD3920;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82CD3920;
	sub_825952B8(ctx, base);
loc_82CD3920:
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// stw r24,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r24.u8);
	// blt cr6,0x82cd3948
	if (cr6.lt) goto loc_82CD3948;
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r4,528(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x825952b8
	ctx.lr = 0x82CD3948;
	sub_825952B8(ctx, base);
loc_82CD3948:
	// stw r27,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r24,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r24.u32);
	// stb r24,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r24.u8);
	// beq cr6,0x82cd3b08
	if (cr6.eq) goto loc_82CD3B08;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd3988
	if (cr6.eq) goto loc_82CD3988;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82cd39a4
	if (!cr6.lt) goto loc_82CD39A4;
	// addi r10,r11,2218
	ctx.r10.s64 = ctx.r11.s64 + 2218;
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd39a8
	goto loc_82CD39A8;
loc_82CD3988:
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82cd39a4
	if (!cr6.lt) goto loc_82CD39A4;
	// addi r10,r11,2178
	ctx.r10.s64 = ctx.r11.s64 + 2178;
	// lwz r11,116(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 116);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82cd39a8
	goto loc_82CD39A8;
loc_82CD39A4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82CD39A8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82cd3a84
	if (!cr6.lt) goto loc_82CD3A84;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-31
	ctx.r4.s64 = ctx.r11.s64 + -31;
	// bl 0x837b0c10
	ctx.lr = 0x82CD39C4;
	sub_837B0C10(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x837b0c10
	ctx.lr = 0x82CD39D4;
	sub_837B0C10(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ori r4,r4,659
	ctx.r4.u64 = ctx.r4.u64 | 659;
	// bl 0x82d04220
	ctx.lr = 0x82CD39E4;
	sub_82D04220(ctx, base);
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r6,352(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82cd39f8
	if (!cr6.lt) goto loc_82CD39F8;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
loc_82CD39F8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// mulli r11,r11,2800
	ctx.r11.s64 = ctx.r11.s64 * 2800;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r4,r4,634
	ctx.r4.u64 = ctx.r4.u64 | 634;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x82d042a8
	ctx.lr = 0x82CD3A1C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD3A30;
	sub_82D291E0(ctx, base);
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd3a4c
	if (cr6.lt) goto loc_82CD3A4C;
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x82CD3A4C;
	sub_825952B8(ctx, base);
loc_82CD3A4C:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// stw r24,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r24.u8);
	// blt cr6,0x82cd3a74
	if (cr6.lt) goto loc_82CD3A74;
	// stw r17,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x825952b8
	ctx.lr = 0x82CD3A74;
	sub_825952B8(ctx, base);
loc_82CD3A74:
	// stw r27,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r27.u32);
	// stw r24,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r24.u32);
	// stb r24,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r24.u8);
	// b 0x82cd3b08
	goto loc_82CD3B08;
loc_82CD3A84:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x837b0c10
	ctx.lr = 0x82CD3A90;
	sub_837B0C10(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r11,r9,2800
	ctx.r11.s64 = ctx.r9.s64 * 2800;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD3AA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3aa8
	if (!cr6.eq) goto loc_82CD3AA8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD3ACC;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD3AE0;
	sub_82D291E0(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cd3afc
	if (cr6.lt) goto loc_82CD3AFC;
	// stw r17,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r17.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x82CD3AFC;
	sub_825952B8(ctx, base);
loc_82CD3AFC:
	// stw r27,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r27.u32);
	// stw r24,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r24.u32);
	// stb r24,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r24.u8);
loc_82CD3B08:
	// lwz r4,60(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD3B10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3b10
	if (!cr6.eq) goto loc_82CD3B10;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD3B34;
	sub_8259CC28(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r5,96(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82ab6970
	ctx.lr = 0x82CD3B44;
	sub_82AB6970(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CD3B48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3b48
	if (!cr6.eq) goto loc_82CD3B48;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CD3B6C;
	sub_825A1EB8(ctx, base);
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r24,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r24.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r24,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r24.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8292a448
	ctx.lr = 0x82CD3B84;
	sub_8292A448(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cd3b98
	if (!cr6.lt) goto loc_82CD3B98;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_82CD3B98:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD3BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd3bcc
	if (cr6.lt) goto loc_82CD3BCC;
	// stw r17,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r17.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82CD3BCC;
	sub_825952B8(ctx, base);
loc_82CD3BCC:
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// stw r27,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r27.u32);
	// stw r24,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r24.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r24,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r24.u8);
	// blt cr6,0x82cd3bf4
	if (cr6.lt) goto loc_82CD3BF4;
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,592(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x825952b8
	ctx.lr = 0x82CD3BF4;
	sub_825952B8(ctx, base);
loc_82CD3BF4:
	// stw r27,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r24,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r24.u32);
	// stb r24,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r24.u8);
	// beq cr6,0x82cd3c88
	if (cr6.eq) goto loc_82CD3C88;
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r24,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r24.u32);
	// ori r4,r4,198
	ctx.r4.u64 = ctx.r4.u64 | 198;
	// stb r24,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r24.u8);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f1,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x82cd3c3c
	if (cr6.eq) goto loc_82CD3C3C;
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// ori r4,r4,105
	ctx.r4.u64 = ctx.r4.u64 | 105;
loc_82CD3C3C:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82d042a8
	ctx.lr = 0x82CD3C4C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD3C60;
	sub_82D291E0(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd3c7c
	if (cr6.lt) goto loc_82CD3C7C;
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x82CD3C7C;
	sub_825952B8(ctx, base);
loc_82CD3C7C:
	// stw r27,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r27.u32);
	// stw r24,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r24.u32);
	// stb r24,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r24.u8);
loc_82CD3C88:
	// lwz r4,836(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r3,96(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// bl 0x831c6710
	ctx.lr = 0x82CD3C9C;
	sub_831C6710(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x82cd3cc0
	if (cr6.eq) goto loc_82CD3CC0;
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// ble cr6,0x82cd3cb8
	if (!cr6.gt) goto loc_82CD3CB8;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82cd3cc0
	goto loc_82CD3CC0;
loc_82CD3CB8:
	// bge cr6,0x82cd3cc0
	if (!cr6.lt) goto loc_82CD3CC0;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82CD3CC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD3CD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd3ce8
	if (cr6.eq) goto loc_82CD3CE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d4dce8
	ctx.lr = 0x82CD3CE8;
	sub_82D4DCE8(ctx, base);
loc_82CD3CE8:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd3d08
	if (cr6.lt) goto loc_82CD3D08;
	// stw r17,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r17.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82CD3D08;
	sub_825952B8(ctx, base);
loc_82CD3D08:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stb r24,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r24.u8);
loc_82CD3D14:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// b 0x82cd3d80
	goto loc_82CD3D80;
loc_82CD3D24:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// add r21,r18,r21
	ctx.r21.u64 = ctx.r18.u64 + ctx.r21.u64;
	// beq cr6,0x82cd3d38
	if (cr6.eq) goto loc_82CD3D38;
	// li r18,1
	ctx.r18.s64 = 1;
	// b 0x82cd3d44
	goto loc_82CD3D44;
loc_82CD3D38:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
loc_82CD3D44:
	// cmplwi cr6,r21,3
	cr6.compare<uint32_t>(ctx.r21.u32, 3, xer);
	// bgt cr6,0x82cd3d50
	if (cr6.gt) goto loc_82CD3D50;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82CD3D50:
	// lwz r11,100(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r3,r23,100
	ctx.r3.s64 = ctx.r23.s64 + 100;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD3D68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd3d78
	if (cr6.eq) goto loc_82CD3D78;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d4dce8
	ctx.lr = 0x82CD3D78;
	sub_82D4DCE8(ctx, base);
loc_82CD3D78:
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_82CD3D80:
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r24,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r24.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r24,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r24.u8);
loc_82CD3D94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3d94
	if (!cr6.eq) goto loc_82CD3D94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD3DB8;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 100);
	// addi r30,r23,100
	ctx.r30.s64 = ctx.r23.s64 + 100;
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD3DD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd3eb4
	if (cr6.eq) goto loc_82CD3EB4;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r24,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r24.u8);
loc_82CD3DF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3df4
	if (!cr6.eq) goto loc_82CD3DF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD3E18;
	sub_8259CC28(ctx, base);
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd3e34
	if (cr6.eq) goto loc_82CD3E34;
	// addi r11,r28,112
	ctx.r11.s64 = ctx.r28.s64 + 112;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82cd3e38
	goto loc_82CD3E38;
loc_82CD3E34:
	// lwz r4,108(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
loc_82CD3E38:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD3E3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd3e3c
	if (!cr6.eq) goto loc_82CD3E3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CD3E60;
	sub_825A1EB8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cd3e74
	if (!cr6.lt) goto loc_82CD3E74;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_82CD3E74:
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
	ctx.lr = 0x82CD3E8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd3ea8
	if (cr6.lt) goto loc_82CD3EA8;
	// stw r17,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r17.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82CD3EA8;
	sub_825952B8(ctx, base);
loc_82CD3EA8:
	// stw r27,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r27.u32);
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r24.u32);
	// stb r24,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r24.u8);
loc_82CD3EB4:
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lwz r5,96(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82ab6970
	ctx.lr = 0x82CD3EC4;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd3ed8
	if (cr6.lt) goto loc_82CD3ED8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd3edc
	goto loc_82CD3EDC;
loc_82CD3ED8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD3EDC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD3EF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,580(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd3f10
	if (cr6.lt) goto loc_82CD3F10;
	// stw r17,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r17.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,560(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x825952b8
	ctx.lr = 0x82CD3F10;
	sub_825952B8(ctx, base);
loc_82CD3F10:
	// stw r27,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r24,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r24.u32);
	// stb r24,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r24.u8);
	// beq cr6,0x82cd3f30
	if (cr6.eq) goto loc_82CD3F30;
	// clrldi r4,r21,32
	ctx.r4.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CD3F30;
	sub_82D294D0(ctx, base);
loc_82CD3F30:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd3f44
	if (cr6.eq) goto loc_82CD3F44;
	// lwz r4,-12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12);
	// b 0x82cd3f48
	goto loc_82CD3F48;
loc_82CD3F44:
	// lwz r4,-8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
loc_82CD3F48:
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
	ctx.lr = 0x82CD3F60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r22,24
	ctx.r9.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cd3f74
	if (cr6.eq) goto loc_82CD3F74;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// b 0x82cd3f78
	goto loc_82CD3F78;
loc_82CD3F74:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82CD3F78:
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
	ctx.lr = 0x82CD3F90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cd3fa0
	if (cr6.eq) goto loc_82CD3FA0;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
loc_82CD3FA0:
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd3fbc
	if (cr6.lt) goto loc_82CD3FBC;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x82CD3FBC;
	sub_825952B8(ctx, base);
loc_82CD3FBC:
	// lwz r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r22,512(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// stw r24,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r24.u32);
	// stb r24,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r24.u8);
loc_82CD3FD0:
	// cmplw cr6,r15,r31
	cr6.compare<uint32_t>(ctx.r15.u32, ctx.r31.u32, xer);
	// blt cr6,0x82cd37a0
	if (cr6.lt) goto loc_82CD37A0;
loc_82CD3FD8:
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r31,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
	// beq cr6,0x82cd4000
	if (cr6.eq) goto loc_82CD4000;
	// stw r17,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r17.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x825952b8
	ctx.lr = 0x82CD4000;
	sub_825952B8(ctx, base);
loc_82CD4000:
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cd4018
	if (cr6.eq) goto loc_82CD4018;
	// stw r17,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r17.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x825952b8
	ctx.lr = 0x82CD4018;
	sub_825952B8(ctx, base);
loc_82CD4018:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cd4030
	if (cr6.eq) goto loc_82CD4030;
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x82CD4030;
	sub_825952B8(ctx, base);
loc_82CD4030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD4040"))) PPC_WEAK_FUNC(sub_82CD4040);
PPC_FUNC_IMPL(__imp__sub_82CD4040) {
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
	ctx.lr = 0x82CD4048;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce774
	ctx.lr = 0x82CD4050;
	__savefpr_27(ctx, base);
	// stwu r1,-1584(r1)
	ea = -1584 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r3,1604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1604, ctx.r3.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cd4b98
	if (cr6.eq) goto loc_82CD4B98;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd4b98
	if (cr6.eq) goto loc_82CD4B98;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// li r15,15
	ctx.r15.s64 = 15;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r14,r11,9476
	ctx.r14.s64 = ctx.r11.s64 + 9476;
	// li r18,2
	ctx.r18.s64 = 2;
	// beq cr6,0x82cd41e4
	if (cr6.eq) goto loc_82CD41E4;
	// addi r29,r14,-16
	ctx.r29.s64 = ctx.r14.s64 + -16;
	// addi r27,r4,100
	ctx.r27.s64 = ctx.r4.s64 + 100;
	// addi r30,r3,124
	ctx.r30.s64 = ctx.r3.s64 + 124;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_82CD40A4:
	// lwz r4,-72(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + -72);
	// stw r15,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r15.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
loc_82CD40B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd40b8
	if (!cr6.eq) goto loc_82CD40B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD40DC;
	sub_8259CC28(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82ab6970
	ctx.lr = 0x82CD40EC;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cd4100
	if (cr6.lt) goto loc_82CD4100;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd4104
	goto loc_82CD4104;
loc_82CD4100:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD4104:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,564(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd4138
	if (cr6.lt) goto loc_82CD4138;
	// stw r18,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r18.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,544(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x825952b8
	ctx.lr = 0x82CD4138;
	sub_825952B8(ctx, base);
loc_82CD4138:
	// stw r15,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r15.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r23,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r23.u32);
	// stb r23,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r23.u8);
	// beq cr6,0x82cd41ac
	if (cr6.eq) goto loc_82CD41AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// beq cr6,0x82cd419c
	if (cr6.eq) goto loc_82CD419C;
	// bl 0x831156e8
	ctx.lr = 0x82CD415C;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// mulli r11,r9,2800
	ctx.r11.s64 = ctx.r9.s64 * 2800;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82CD417C;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD4190;
	sub_82D291E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD4198;
	sub_8387E8E0(ctx, base);
	// b 0x82cd41ac
	goto loc_82CD41AC;
loc_82CD419C:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d29598
	ctx.lr = 0x82CD41AC;
	sub_82D29598(ctx, base);
loc_82CD41AC:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd41c8
	if (cr6.lt) goto loc_82CD41C8;
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82CD41C8;
	sub_825952B8(ctx, base);
loc_82CD41C8:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r15,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r15.u32);
	// stw r23,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r23.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stb r23,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r23.u8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82cd40a4
	if (!cr0.eq) goto loc_82CD40A4;
loc_82CD41E4:
	// lwz r11,96(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 96);
	// lwz r3,116(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 116);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r5,128(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 128);
	// lwz r4,124(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd4218
	if (cr6.eq) goto loc_82CD4218;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8312e9a8
	ctx.lr = 0x82CD4208;
	sub_8312E9A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x831c6b90
	ctx.lr = 0x82CD4214;
	sub_831C6B90(ctx, base);
	// b 0x82cd422c
	goto loc_82CD422C;
loc_82CD4218:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// bl 0x8312e9a8
	ctx.lr = 0x82CD4220;
	sub_8312E9A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82cd2360
	ctx.lr = 0x82CD422C;
	sub_82CD2360(ctx, base);
loc_82CD422C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82cd2360
	ctx.lr = 0x82CD4238;
	sub_82CD2360(ctx, base);
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cd4250
	if (cr6.eq) goto loc_82CD4250;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82bc0d20
	ctx.lr = 0x82CD4250;
	sub_82BC0D20(ctx, base);
loc_82CD4250:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cd4264
	if (cr6.eq) goto loc_82CD4264;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82bc0d20
	ctx.lr = 0x82CD4264;
	sub_82BC0D20(ctx, base);
loc_82CD4264:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r4,124(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r22,r11,9664
	ctx.r22.s64 = ctx.r11.s64 + 9664;
	// lwz r31,9664(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9664);
	// bl 0x8312e948
	ctx.lr = 0x82CD427C;
	sub_8312E948(ctx, base);
	// li r21,-1
	ctx.r21.s64 = -1;
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// bge cr6,0x82cd42a4
	if (!cr6.lt) goto loc_82CD42A4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r11,r3
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// bne cr6,0x82cd42ac
	if (!cr6.eq) goto loc_82CD42AC;
	// lwz r4,-128(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + -128);
	// b 0x82cd42b0
	goto loc_82CD42B0;
loc_82CD42A4:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
loc_82CD42AC:
	// lwz r4,-132(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + -132);
loc_82CD42B0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD42C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r23.u8);
	// addi r24,r11,-7162
	ctx.r24.s64 = ctx.r11.s64 + -7162;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r24,-19
	ctx.r4.s64 = ctx.r24.s64 + -19;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82CD42F0;
	sub_8259CC28(ctx, base);
	// addi r26,r26,100
	ctx.r26.s64 = ctx.r26.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82CD4308;
	sub_82D2D580(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f29,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82cd4664
	if (cr6.eq) goto loc_82CD4664;
	// lwz r4,16(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD4324:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd4324
	if (!cr6.eq) goto loc_82CD4324;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD4348;
	sub_8259CC28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r5,-36(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + -36);
	// bl 0x82ab6970
	ctx.lr = 0x82CD4358;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cd436c
	if (cr6.lt) goto loc_82CD436C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd4370
	goto loc_82CD4370;
loc_82CD436C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD4370:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD4394;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cd43ac
	if (cr6.eq) goto loc_82CD43AC;
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,359
	ctx.r4.u64 = ctx.r4.u64 | 359;
	// bl 0x82d29598
	ctx.lr = 0x82CD43AC;
	sub_82D29598(ctx, base);
loc_82CD43AC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82cd4660
	if (cr6.eq) goto loc_82CD4660;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r31,64(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 64);
	// lwz r4,124(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	// bl 0x8312e948
	ctx.lr = 0x82CD43C4;
	sub_8312E948(ctx, base);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// bge cr6,0x82cd43d8
	if (!cr6.lt) goto loc_82CD43D8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r3
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82cd43dc
	goto loc_82CD43DC;
loc_82CD43D8:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_82CD43DC:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82CD43EC:
	// lwz r31,32(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bne cr6,0x82cd4428
	if (!cr6.eq) goto loc_82CD4428;
	// lwz r4,124(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 124);
	// bl 0x8312e948
	ctx.lr = 0x82CD4404;
	sub_8312E948(ctx, base);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// bge cr6,0x82cd441c
	if (!cr6.lt) goto loc_82CD441C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,128(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 128);
	// lwzx r30,r11,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82cd444c
	goto loc_82CD444C;
loc_82CD441C:
	// lwz r4,128(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 128);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// b 0x82cd444c
	goto loc_82CD444C;
loc_82CD4428:
	// lwz r4,128(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 128);
	// bl 0x8312e948
	ctx.lr = 0x82CD4430;
	sub_8312E948(ctx, base);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// bge cr6,0x82cd4444
	if (!cr6.lt) goto loc_82CD4444;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82cd4448
	goto loc_82CD4448;
loc_82CD4444:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_82CD4448:
	// lwz r4,124(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 124);
loc_82CD444C:
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r31,32(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// bl 0x8312e948
	ctx.lr = 0x82CD4458;
	sub_8312E948(ctx, base);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// bge cr6,0x82cd446c
	if (!cr6.lt) goto loc_82CD446C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82cd4470
	goto loc_82CD4470;
loc_82CD446C:
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82CD4470:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x82cd4484
	if (!cr0.eq) goto loc_82CD4484;
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82cd44b0
	goto loc_82CD44B0;
loc_82CD4484:
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
loc_82CD44B0:
	// stw r15,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r15.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// rlwinm r20,r29,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r23,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r23.u8);
	// addi r4,r24,-1
	ctx.r4.s64 = ctx.r24.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfsx f0,r20,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r11.u32, temp.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82CD44D8;
	sub_8259CC28(ctx, base);
	// lis r4,804
	ctx.r4.s64 = 52690944;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d042a8
	ctx.lr = 0x82CD44F4;
	sub_82D042A8(ctx, base);
	// addi r10,r14,-16
	ctx.r10.s64 = ctx.r14.s64 + -16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,-32(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + -32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwzx r31,r20,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r10.u32);
	// bl 0x82ab6970
	ctx.lr = 0x82CD450C;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8292a568
	ctx.lr = 0x82CD451C;
	sub_8292A568(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd4530
	if (cr6.lt) goto loc_82CD4530;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd4534
	goto loc_82CD4534;
loc_82CD4530:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD4534:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4548;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,468(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd4568
	if (cr6.lt) goto loc_82CD4568;
	// stw r18,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r18.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x82CD4568;
	sub_825952B8(ctx, base);
loc_82CD4568:
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// stw r15,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r15.u32);
	// stw r23,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r23.u8);
	// blt cr6,0x82cd4590
	if (cr6.lt) goto loc_82CD4590;
	// stw r18,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r18.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x825952b8
	ctx.lr = 0x82CD4590;
	sub_825952B8(ctx, base);
loc_82CD4590:
	// stw r15,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r15.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r23,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r23.u32);
	// stb r23,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r23.u8);
	// beq cr6,0x82cd45b8
	if (cr6.eq) goto loc_82CD45B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD45B8;
	sub_82D291E0(ctx, base);
loc_82CD45B8:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd45d4
	if (cr6.lt) goto loc_82CD45D4;
	// stw r18,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r18.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82CD45D4;
	sub_825952B8(ctx, base);
loc_82CD45D4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r15,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r15.u32);
	// stw r23,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r23.u32);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// stb r23,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r23.u8);
	// blt cr6,0x82cd43ec
	if (cr6.lt) goto loc_82CD43EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4604;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd4660
	if (cr6.eq) goto loc_82CD4660;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cd4620
	if (cr6.eq) goto loc_82CD4620;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_82CD4620:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cd4660
	if (cr6.eq) goto loc_82CD4660;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,0(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bl 0x83815d38
	ctx.lr = 0x82CD4634;
	sub_83815D38(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82CD4640;
	sub_83815B68(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82CD464C;
	sub_83815B68(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CD4658;
	sub_838153C8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83815cb8
	ctx.lr = 0x82CD4660;
	sub_83815CB8(ctx, base);
loc_82CD4660:
	// li r20,1
	ctx.r20.s64 = 1;
loc_82CD4664:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dad028
	ctx.lr = 0x82CD466C;
	sub_82DAD028(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r21,3
	ctx.r21.s64 = 3;
	// cmplw cr6,r20,r3
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r3.u32, xer);
	// bge cr6,0x82cd4b34
	if (!cr6.lt) goto loc_82CD4B34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lis r9,103
	ctx.r9.s64 = 6750208;
	// lis r8,103
	ctx.r8.s64 = 6750208;
	// addi r19,r22,100
	ctx.r19.s64 = ctx.r22.s64 + 100;
	// lfs f28,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f28.f64 = double(temp.f32);
	// ori r18,r9,108
	ctx.r18.u64 = ctx.r9.u64 | 108;
	// lfs f27,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f27.f64 = double(temp.f32);
	// ori r17,r8,105
	ctx.r17.u64 = ctx.r8.u64 | 105;
loc_82CD46A0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2d580
	ctx.lr = 0x82CD46AC;
	sub_82D2D580(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd4b24
	if (cr6.eq) goto loc_82CD4B24;
	// cmplwi cr6,r21,11
	cr6.compare<uint32_t>(ctx.r21.u32, 11, xer);
	// blt cr6,0x82cd46dc
	if (cr6.lt) goto loc_82CD46DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-128(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + -128);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD46D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82cd4b24
	goto loc_82CD4B24;
loc_82CD46DC:
	// lwz r4,16(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD46E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd46e4
	if (!cr6.eq) goto loc_82CD46E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD4708;
	sub_8259CC28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r5,-36(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + -36);
	// bl 0x82ab6970
	ctx.lr = 0x82CD4718;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cd472c
	if (cr6.lt) goto loc_82CD472C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd4730
	goto loc_82CD4730;
loc_82CD472C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD4730:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r24,r31,100
	ctx.r24.s64 = ctx.r31.s64 + 100;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4748;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,436(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd476c
	if (cr6.lt) goto loc_82CD476C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD476C;
	sub_825952B8(ctx, base);
loc_82CD476C:
	// stw r15,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r15.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r23,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r23.u32);
	// stb r23,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r23.u8);
	// beq cr6,0x82cd478c
	if (cr6.eq) goto loc_82CD478C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CD478C;
	sub_82D29598(ctx, base);
loc_82CD478C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82cd4b1c
	if (cr6.eq) goto loc_82CD4B1C;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// rlwinm r28,r21,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82CD47A8:
	// addi r11,r14,-16
	ctx.r11.s64 = ctx.r14.s64 + -16;
	// lwz r5,-32(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + -32);
	// rlwinm r25,r26,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwzx r31,r25,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x82ab6970
	ctx.lr = 0x82CD47C4;
	sub_82AB6970(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CD47C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd47c8
	if (!cr6.eq) goto loc_82CD47C8;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82CD47EC;
	sub_825A1EB8(ctx, base);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8292a448
	ctx.lr = 0x82CD4804;
	sub_8292A448(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82cd4818
	if (!cr6.lt) goto loc_82CD4818;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82CD4818:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD482C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82cd4850
	if (cr6.lt) goto loc_82CD4850;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD4850;
	sub_825952B8(ctx, base);
loc_82CD4850:
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// stw r15,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r15.u32);
	// stw r23,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r23.u8);
	// blt cr6,0x82cd487c
	if (cr6.lt) goto loc_82CD487C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD487C;
	sub_825952B8(ctx, base);
loc_82CD487C:
	// stw r15,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r15.u32);
	// addi r11,r26,31
	ctx.r11.s64 = ctx.r26.s64 + 31;
	// stw r23,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r23.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stb r23,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r23.u8);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1604(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// lwzx r31,r28,r22
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r22.u32);
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x8312e948
	ctx.lr = 0x82CD48A4;
	sub_8312E948(ctx, base);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// bge cr6,0x82cd48b8
	if (!cr6.lt) goto loc_82CD48B8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82cd48bc
	goto loc_82CD48BC;
loc_82CD48B8:
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82CD48BC:
	// addi r11,r22,16
	ctx.r11.s64 = ctx.r22.s64 + 16;
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd4a5c
	if (cr6.eq) goto loc_82CD4A5C;
	// addi r11,r22,20
	ctx.r11.s64 = ctx.r22.s64 + 20;
	// lwzx r31,r28,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// bne cr6,0x82cd48e4
	if (!cr6.eq) goto loc_82CD48E4;
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82cd4920
	goto loc_82CD4920;
loc_82CD48E4:
	// lwz r11,1604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1604);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8312e948
	ctx.lr = 0x82CD48F4;
	sub_8312E948(ctx, base);
	// cmpwi cr6,r31,14
	cr6.compare<int32_t>(ctx.r31.s32, 14, xer);
	// bge cr6,0x82cd4908
	if (!cr6.lt) goto loc_82CD4908;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82cd490c
	goto loc_82CD490C;
loc_82CD4908:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82CD490C:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
loc_82CD4920:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd493c
	if (!cr6.eq) goto loc_82CD493C;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x82cd4968
	goto loc_82CD4968;
loc_82CD493C:
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r29,32
	ctx.r10.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// std r9,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r9.u64);
	// lfd f0,400(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// std r10,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r10.u64);
	// lfd f12,384(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
loc_82CD4968:
	// addi r11,r22,12
	ctx.r11.s64 = ctx.r22.s64 + 12;
	// addi r10,r22,28
	ctx.r10.s64 = ctx.r22.s64 + 28;
	// lfsx f12,r28,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r28,r10
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82cd4994
	if (!cr6.gt) goto loc_82CD4994;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x82cd4994
	if (!cr6.eq) goto loc_82CD4994;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_82CD4994:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82cd4a50
	if (cr6.eq) goto loc_82CD4A50;
	// addi r11,r22,24
	ctx.r11.s64 = ctx.r22.s64 + 24;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd49bc
	if (cr6.eq) goto loc_82CD49BC;
	// fmuls f30,f31,f28
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_82CD49BC:
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82cd4a3c
	if (!cr6.gt) goto loc_82CD4A3C;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x837b0c10
	ctx.lr = 0x82CD49D8;
	sub_837B0C10(ctx, base);
	// stfd f30,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f30.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82d042a8
	ctx.lr = 0x82CD49F0;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82CD4A04;
	sub_82D291E0(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd4a24
	if (cr6.lt) goto loc_82CD4A24;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD4A24;
	sub_825952B8(ctx, base);
loc_82CD4A24:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r15,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r15.u32);
	// stw r23,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r23.u32);
	// stb r23,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r23.u8);
	// stfsx f31,r25,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// b 0x82cd4a8c
	goto loc_82CD4A8C;
loc_82CD4A3C:
	// fctidz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f30.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82d294d0
	ctx.lr = 0x82CD4A50;
	sub_82D294D0(ctx, base);
loc_82CD4A50:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfsx f31,r25,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// b 0x82cd4a8c
	goto loc_82CD4A8C;
loc_82CD4A5C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82cd4a70
	if (cr6.eq) goto loc_82CD4A70;
	// clrldi r4,r29,32
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82CD4A70;
	sub_82D294D0(ctx, base);
loc_82CD4A70:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r11.u64);
	// lfd f0,392(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r25,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r10.u32, temp.u32);
loc_82CD4A8C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(ctx.r26.u32, 2, xer);
	// blt cr6,0x82cd47a8
	if (cr6.lt) goto loc_82CD47A8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4AB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd4b14
	if (cr6.eq) goto loc_82CD4B14;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82cd4acc
	if (cr6.eq) goto loc_82CD4ACC;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
loc_82CD4ACC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cd4b14
	if (cr6.eq) goto loc_82CD4B14;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,0(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// bl 0x83815d38
	ctx.lr = 0x82CD4AE0;
	sub_83815D38(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x82cd4b00
	if (cr6.eq) goto loc_82CD4B00;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bl 0x83815b68
	ctx.lr = 0x82CD4B00;
	sub_83815B68(ctx, base);
loc_82CD4B00:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82CD4B0C;
	sub_838153C8(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83815cb8
	ctx.lr = 0x82CD4B14;
	sub_83815CB8(ctx, base);
loc_82CD4B14:
	// lwz r26,180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82CD4B1C:
	// addi r19,r19,32
	ctx.r19.s64 = ctx.r19.s64 + 32;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_82CD4B24:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r20,r16
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r16.u32, xer);
	// blt cr6,0x82cd46a0
	if (cr6.lt) goto loc_82CD46A0;
	// li r18,2
	ctx.r18.s64 = 2;
loc_82CD4B34:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd4b50
	if (cr6.lt) goto loc_82CD4B50;
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82CD4B50;
	sub_825952B8(ctx, base);
loc_82CD4B50:
	// lwz r4,712(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 712);
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r23.u8);
	// beq cr6,0x82cd4b74
	if (cr6.eq) goto loc_82CD4B74;
	// stw r18,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r18.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x825952b8
	ctx.lr = 0x82CD4B74;
	sub_825952B8(ctx, base);
loc_82CD4B74:
	// lwz r4,584(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// stw r23,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r23.u32);
	// stw r23,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r23.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r23,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r23.u32);
	// beq cr6,0x82cd4b98
	if (cr6.eq) goto loc_82CD4B98;
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825952b8
	ctx.lr = 0x82CD4B98;
	sub_825952B8(ctx, base);
loc_82CD4B98:
	// addi r1,r1,1584
	ctx.r1.s64 = ctx.r1.s64 + 1584;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c0
	ctx.lr = 0x82CD4BA4;
	__restfpr_27(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD4BA8"))) PPC_WEAK_FUNC(sub_82CD4BA8);
PPC_FUNC_IMPL(__imp__sub_82CD4BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CD4BB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,12
	cr6.compare<int32_t>(ctx.r5.s32, 12, xer);
	// blt cr6,0x82cd4bd0
	if (cr6.lt) goto loc_82CD4BD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CD4BD0:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r10,-6968
	ctx.r26.s64 = ctx.r10.s64 + -6968;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r25,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82cd4c04
	if (!cr6.gt) goto loc_82CD4C04;
	// bl 0x82cd3460
	ctx.lr = 0x82CD4C00;
	sub_82CD3460(ctx, base);
	// b 0x82cd4c08
	goto loc_82CD4C08;
loc_82CD4C04:
	// bl 0x82cd2938
	ctx.lr = 0x82CD4C08;
	sub_82CD2938(ctx, base);
loc_82CD4C08:
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// beq cr6,0x82cd4d40
	if (cr6.eq) goto loc_82CD4D40;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,9408
	ctx.r31.s64 = ctx.r11.s64 + 9408;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x837b0c10
	ctx.lr = 0x82CD4C34;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ab6970
	ctx.lr = 0x82CD4C44;
	sub_82AB6970(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd4c58
	if (cr6.lt) goto loc_82CD4C58;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd4c5c
	goto loc_82CD4C5C;
loc_82CD4C58:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD4C5C:
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r28,r27,100
	ctx.r28.s64 = ctx.r27.s64 + 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD4C80;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cd4c98
	if (cr6.eq) goto loc_82CD4C98;
	// lis r4,69
	ctx.r4.s64 = 4521984;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82d29598
	ctx.lr = 0x82CD4C98;
	sub_82D29598(ctx, base);
loc_82CD4C98:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82CD4CA0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd4ca0
	if (!cr6.eq) goto loc_82CD4CA0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82CD4CC4;
	sub_8259CC28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82ab6970
	ctx.lr = 0x82CD4CD4;
	sub_82AB6970(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82cd4ce8
	if (cr6.lt) goto loc_82CD4CE8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82cd4cec
	goto loc_82CD4CEC;
loc_82CD4CE8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82CD4CEC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD4D0C;
	sub_8387E8E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82cd4d24
	if (cr6.eq) goto loc_82CD4D24;
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r25,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x82d29598
	ctx.lr = 0x82CD4D24;
	sub_82D29598(ctx, base);
loc_82CD4D24:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CD4D38;
	sub_82D2B608(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82CD4D40;
	sub_8387E8E0(ctx, base);
loc_82CD4D40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD4D4C"))) PPC_WEAK_FUNC(sub_82CD4D4C);
PPC_FUNC_IMPL(__imp__sub_82CD4D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD4D50"))) PPC_WEAK_FUNC(sub_82CD4D50);
PPC_FUNC_IMPL(__imp__sub_82CD4D50) {
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
	// li r11,10
	ctx.r11.s64 = 10;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CD4D80;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd4db4
	if (cr6.eq) goto loc_82CD4DB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x839025e8
	ctx.lr = 0x82CD4D94;
	sub_839025E8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-4176
	ctx.r9.s64 = ctx.r11.s64 + -4176;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// b 0x82cd4db8
	goto loc_82CD4DB8;
loc_82CD4DB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CD4DB8:
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

__attribute__((alias("__imp__sub_82CD4DD0"))) PPC_WEAK_FUNC(sub_82CD4DD0);
PPC_FUNC_IMPL(__imp__sub_82CD4DD0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82d74e10
	sub_82D74E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD4DDC"))) PPC_WEAK_FUNC(sub_82CD4DDC);
PPC_FUNC_IMPL(__imp__sub_82CD4DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD4DE0"))) PPC_WEAK_FUNC(sub_82CD4DE0);
PPC_FUNC_IMPL(__imp__sub_82CD4DE0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,300(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 300);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4E04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cd4e28
	if (!cr6.eq) goto loc_82CD4E28;
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
loc_82CD4E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD4E30;
	sub_82D19A68(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82CD4E34;
	sub_82D2B0F8(ctx, base);
	// sth r3,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r3.u16);
	// bl 0x82d390c0
	ctx.lr = 0x82CD4E3C;
	sub_82D390C0(ctx, base);
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

__attribute__((alias("__imp__sub_82CD4E54"))) PPC_WEAK_FUNC(sub_82CD4E54);
PPC_FUNC_IMPL(__imp__sub_82CD4E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD4E58"))) PPC_WEAK_FUNC(sub_82CD4E58);
PPC_FUNC_IMPL(__imp__sub_82CD4E58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD4E7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cd4ea0
	if (!cr6.eq) goto loc_82CD4EA0;
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
loc_82CD4EA0:
	// lhz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd4eb0
	if (cr6.eq) goto loc_82CD4EB0;
	// bl 0x82d39100
	ctx.lr = 0x82CD4EB0;
	sub_82D39100(ctx, base);
loc_82CD4EB0:
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

__attribute__((alias("__imp__sub_82CD4EC8"))) PPC_WEAK_FUNC(sub_82CD4EC8);
PPC_FUNC_IMPL(__imp__sub_82CD4EC8) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// beq cr6,0x82cd4ef8
	if (cr6.eq) goto loc_82CD4EF8;
	// lwz r30,10176(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10176);
	// b 0x82cd4f00
	goto loc_82CD4F00;
loc_82CD4EF8:
	// addi r10,r11,10176
	ctx.r10.s64 = ctx.r11.s64 + 10176;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82CD4F00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD4F08;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd4f4c
	if (cr6.eq) goto loc_82CD4F4C;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82cd4f4c
	if (!cr6.eq) goto loc_82CD4F4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD4F24;
	sub_82D19A68(ctx, base);
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
	ctx.lr = 0x82CD4F3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x82cd4f50
	goto loc_82CD4F50;
loc_82CD4F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CD4F50:
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

__attribute__((alias("__imp__sub_82CD4F68"))) PPC_WEAK_FUNC(sub_82CD4F68);
PPC_FUNC_IMPL(__imp__sub_82CD4F68) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// beq cr6,0x82cd4f9c
	if (cr6.eq) goto loc_82CD4F9C;
	// addi r10,r11,10188
	ctx.r10.s64 = ctx.r11.s64 + 10188;
	// lwz r30,-8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// b 0x82cd4fa0
	goto loc_82CD4FA0;
loc_82CD4F9C:
	// lwz r30,10188(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10188);
loc_82CD4FA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD4FA8;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd4fec
	if (cr6.eq) goto loc_82CD4FEC;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82cd4fec
	if (!cr6.eq) goto loc_82CD4FEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD4FC4;
	sub_82D19A68(ctx, base);
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
	ctx.lr = 0x82CD4FDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// b 0x82cd4ff0
	goto loc_82CD4FF0;
loc_82CD4FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CD4FF0:
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

__attribute__((alias("__imp__sub_82CD5008"))) PPC_WEAK_FUNC(sub_82CD5008);
PPC_FUNC_IMPL(__imp__sub_82CD5008) {
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
	// addi r9,r11,-4992
	ctx.r9.s64 = ctx.r11.s64 + -4992;
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
	// beq cr6,0x82cd506c
	if (cr6.eq) goto loc_82CD506C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82CD5058;
	sub_82BD1DA0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD506C;
	sub_825952B8(ctx, base);
loc_82CD506C:
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
	ctx.lr = 0x82CD5084;
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

__attribute__((alias("__imp__sub_82CD509C"))) PPC_WEAK_FUNC(sub_82CD509C);
PPC_FUNC_IMPL(__imp__sub_82CD509C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD50A0"))) PPC_WEAK_FUNC(sub_82CD50A0);
PPC_FUNC_IMPL(__imp__sub_82CD50A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD50A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,100(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,104(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82cd50e8
	if (cr6.eq) goto loc_82CD50E8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82bd1cd8
	ctx.lr = 0x82CD50D0;
	sub_82BD1CD8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82bd1da0
	ctx.lr = 0x82CD50E4;
	sub_82BD1DA0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82CD50E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD50F8"))) PPC_WEAK_FUNC(sub_82CD50F8);
PPC_FUNC_IMPL(__imp__sub_82CD50F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD5100;
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
	ctx.lr = 0x82CD5114;
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
	ctx.lr = 0x82CD512C;
	sub_82D253F8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-4992
	ctx.r8.s64 = ctx.r10.s64 + -4992;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// sth r11,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
	// bl 0x82d191f8
	ctx.lr = 0x82CD5168;
	sub_82D191F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a9a8
	ctx.lr = 0x82CD5170;
	sub_82D1A9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD517C"))) PPC_WEAK_FUNC(sub_82CD517C);
PPC_FUNC_IMPL(__imp__sub_82CD517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5180"))) PPC_WEAK_FUNC(sub_82CD5180);
PPC_FUNC_IMPL(__imp__sub_82CD5180) {
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
	// bl 0x82cd5008
	ctx.lr = 0x82CD51A0;
	sub_82CD5008(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd51b8
	if (cr6.eq) goto loc_82CD51B8;
	// bl 0x82416268
	ctx.lr = 0x82CD51B4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CD51B8:
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

__attribute__((alias("__imp__sub_82CD51D0"))) PPC_WEAK_FUNC(sub_82CD51D0);
PPC_FUNC_IMPL(__imp__sub_82CD51D0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-8
	xer.ca = ctx.r11.u32 > 7;
	ctx.r11.s64 = ctx.r11.s64 + -8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82cd520c
	if (cr0.eq) goto loc_82CD520C;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// beq cr6,0x82cd520c
	if (cr6.eq) goto loc_82CD520C;
	// bl 0x83103068
	ctx.lr = 0x82CD51F8;
	sub_83103068(ctx, base);
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
loc_82CD520C:
	// bl 0x82d4fb88
	ctx.lr = 0x82CD5210;
	sub_82D4FB88(ctx, base);
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

__attribute__((alias("__imp__sub_82CD5224"))) PPC_WEAK_FUNC(sub_82CD5224);
PPC_FUNC_IMPL(__imp__sub_82CD5224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5228"))) PPC_WEAK_FUNC(sub_82CD5228);
PPC_FUNC_IMPL(__imp__sub_82CD5228) {
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
	// lbz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 336);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd5284
	if (cr6.eq) goto loc_82CD5284;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d19a30
	ctx.lr = 0x82CD5254;
	sub_82D19A30(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d196e0
	ctx.lr = 0x82CD5260;
	sub_82D196E0(ctx, base);
	// bl 0x82d51e00
	ctx.lr = 0x82CD5264;
	sub_82D51E00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5284
	if (cr6.eq) goto loc_82CD5284;
	// bl 0x8308e078
	ctx.lr = 0x82CD5274;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d51240
	ctx.lr = 0x82CD5284;
	sub_82D51240(ctx, base);
loc_82CD5284:
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82cd52a0
	if (!cr6.eq) goto loc_82CD52A0;
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,65
	ctx.r5.u64 = ctx.r5.u64 | 65;
	// b 0x82cd52e0
	goto loc_82CD52E0;
loc_82CD52A0:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82cd52b8
	if (!cr6.eq) goto loc_82CD52B8;
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,200
	ctx.r5.u64 = ctx.r5.u64 | 200;
	// b 0x82cd52e0
	goto loc_82CD52E0;
loc_82CD52B8:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x82cd52e8
	if (!cr6.eq) goto loc_82CD52E8;
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,200
	ctx.r5.u64 = ctx.r5.u64 | 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82CD52D4;
	sub_82D20EB8(ctx, base);
	// lis r5,33
	ctx.r5.s64 = 2162688;
	// li r4,15
	ctx.r4.s64 = 15;
	// ori r5,r5,93
	ctx.r5.u64 = ctx.r5.u64 | 93;
loc_82CD52E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20eb8
	ctx.lr = 0x82CD52E8;
	sub_82D20EB8(ctx, base);
loc_82CD52E8:
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

__attribute__((alias("__imp__sub_82CD5300"))) PPC_WEAK_FUNC(sub_82CD5300);
PPC_FUNC_IMPL(__imp__sub_82CD5300) {
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
	// bl 0x82d4f178
	ctx.lr = 0x82CD5318;
	sub_82D4F178(ctx, base);
	// lbz r11,336(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd5368
	if (cr6.eq) goto loc_82CD5368;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5368
	if (cr6.eq) goto loc_82CD5368;
	// bl 0x82d17e98
	ctx.lr = 0x82CD5334;
	sub_82D17E98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd5368
	if (cr6.eq) goto loc_82CD5368;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19a58
	ctx.lr = 0x82CD5348;
	sub_82D19A58(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bge cr6,0x82cd5368
	if (!cr6.lt) goto loc_82CD5368;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82d19a30
	ctx.lr = 0x82CD535C;
	sub_82D19A30(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r11,257
	ctx.r11.s64 = 257;
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
loc_82CD5368:
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

__attribute__((alias("__imp__sub_82CD5380"))) PPC_WEAK_FUNC(sub_82CD5380);
PPC_FUNC_IMPL(__imp__sub_82CD5380) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,4148
	ctx.r10.u64 = ctx.r10.u64 | 4148;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103068
	ctx.lr = 0x82CD53C0;
	sub_83103068(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82CD53CC;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82CD53E0"))) PPC_WEAK_FUNC(sub_82CD53E0);
PPC_FUNC_IMPL(__imp__sub_82CD53E0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r10,r10,4149
	ctx.r10.u64 = ctx.r10.u64 | 4149;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103068
	ctx.lr = 0x82CD5420;
	sub_83103068(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19858
	ctx.lr = 0x82CD542C;
	sub_82D19858(ctx, base);
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

__attribute__((alias("__imp__sub_82CD5440"))) PPC_WEAK_FUNC(sub_82CD5440);
PPC_FUNC_IMPL(__imp__sub_82CD5440) {
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
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82cd5488
	if (!cr6.eq) goto loc_82CD5488;
	// bl 0x82d19ba0
	ctx.lr = 0x82CD5464;
	sub_82D19BA0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82cd5484
	if (!cr6.eq) goto loc_82CD5484;
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
loc_82CD5484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CD5488:
	// bl 0x82d19bb0
	ctx.lr = 0x82CD548C;
	sub_82D19BB0(ctx, base);
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

__attribute__((alias("__imp__sub_82CD54A0"))) PPC_WEAK_FUNC(sub_82CD54A0);
PPC_FUNC_IMPL(__imp__sub_82CD54A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CD54A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,344
	ctx.r4.s64 = 344;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x82595718
	ctx.lr = 0x82CD54E0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5644
	if (cr6.eq) goto loc_82CD5644;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stb r24,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d4fd00
	ctx.lr = 0x82CD5510;
	sub_82D4FD00(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r27,336(r31)
	PPC_STORE_U8(ctx.r31.u32 + 336, ctx.r27.u8);
	// addi r9,r11,-4320
	ctx.r9.s64 = ctx.r11.s64 + -4320;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// stw r7,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r7.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd5664
	if (!cr6.eq) goto loc_82CD5664;
	// bl 0x83763ef8
	ctx.lr = 0x82CD5544;
	sub_83763EF8(ctx, base);
	// lwz r30,168(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x83763ef8
	ctx.lr = 0x82CD554C;
	sub_83763EF8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// rlwinm r10,r30,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x3FFF;
	// lwz r9,188(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lwz r11,10400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10400);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cd557c
	if (!cr6.eq) goto loc_82CD557C;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cd5580
	if (cr6.eq) goto loc_82CD5580;
loc_82CD557C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CD5580:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd5650
	if (!cr6.eq) goto loc_82CD5650;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,10372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10372);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cd55b4
	if (!cr6.eq) goto loc_82CD55B4;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cd55b8
	if (cr6.eq) goto loc_82CD55B8;
loc_82CD55B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CD55B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd5650
	if (!cr6.eq) goto loc_82CD5650;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,10364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10364);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cd55ec
	if (!cr6.eq) goto loc_82CD55EC;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cd55f0
	if (cr6.eq) goto loc_82CD55F0;
loc_82CD55EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CD55F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd5650
	if (!cr6.eq) goto loc_82CD5650;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,10368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10368);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82cd5624
	if (!cr6.eq) goto loc_82CD5624;
	// xor r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r30.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd5628
	if (cr6.eq) goto loc_82CD5628;
loc_82CD5624:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CD5628:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd5650
	if (!cr6.eq) goto loc_82CD5650;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CD5644:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CD5650:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r11,10348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10348);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x82cd5664
	if (cr6.eq) goto loc_82CD5664;
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
loc_82CD5664:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD5670"))) PPC_WEAK_FUNC(sub_82CD5670);
PPC_FUNC_IMPL(__imp__sub_82CD5670) {
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
	// addi r9,r11,-4320
	ctx.r9.s64 = ctx.r11.s64 + -4320;
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
	// bl 0x82d4f910
	ctx.lr = 0x82CD56A8;
	sub_82D4F910(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82cd56c0
	if (cr6.eq) goto loc_82CD56C0;
	// bl 0x82416268
	ctx.lr = 0x82CD56BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CD56C0:
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

__attribute__((alias("__imp__sub_82CD56D8"))) PPC_WEAK_FUNC(sub_82CD56D8);
PPC_FUNC_IMPL(__imp__sub_82CD56D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CD56E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD56EC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD56F4;
	sub_82D33DB0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5790
	if (cr6.eq) goto loc_82CD5790;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r30,100
	ctx.r29.s64 = ctx.r30.s64 + 100;
loc_82CD5708:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CD5714;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5790
	if (cr6.eq) goto loc_82CD5790;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82CD572C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5790
	if (cr6.eq) goto loc_82CD5790;
	// bl 0x83a970c8
	ctx.lr = 0x82CD5738;
	sub_83A970C8(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// stwu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r29.u32 = ea;
	// blt cr6,0x82cd5708
	if (cr6.lt) goto loc_82CD5708;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r10,264
	ctx.r10.s64 = 17301504;
	// addi r9,r11,21716
	ctx.r9.s64 = ctx.r11.s64 + 21716;
	// ori r8,r10,20
	ctx.r8.u64 = ctx.r10.u64 | 20;
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
	ctx.lr = 0x82CD5780;
	sub_83103068(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CD5790;
	sub_82D20DA8(ctx, base);
loc_82CD5790:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD5798"))) PPC_WEAK_FUNC(sub_82CD5798);
PPC_FUNC_IMPL(__imp__sub_82CD5798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CD57A0;
	__savegprlr_27(ctx, base);
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
	// bl 0x82d19a78
	ctx.lr = 0x82CD57B4;
	sub_82D19A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CD57BC;
	sub_82D33DB0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5898
	if (cr6.eq) goto loc_82CD5898;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CD57D0;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5898
	if (cr6.eq) goto loc_82CD5898;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82CD57E8;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5898
	if (cr6.eq) goto loc_82CD5898;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82cd582c
	if (!cr6.eq) goto loc_82CD582C;
	// bl 0x83a970c8
	ctx.lr = 0x82CD5804;
	sub_83A970C8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82cd5858
	if (!cr6.gt) goto loc_82CD5858;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82cd5854
	goto loc_82CD5854;
loc_82CD582C:
	// bl 0x83a970c8
	ctx.lr = 0x82CD5830;
	sub_83A970C8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cd5858
	if (!cr6.gt) goto loc_82CD5858;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82CD5854:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82CD5858:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd5898
	if (cr6.eq) goto loc_82CD5898;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CD5870;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5898
	if (cr6.eq) goto loc_82CD5898;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82CD5888;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5898
	if (cr6.eq) goto loc_82CD5898;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82CD5898;
	sub_82D3B298(ctx, base);
loc_82CD5898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD58A0"))) PPC_WEAK_FUNC(sub_82CD58A0);
PPC_FUNC_IMPL(__imp__sub_82CD58A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// blt cr6,0x82cd58b0
	if (cr6.lt) goto loc_82CD58B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CD58B0:
	// addi r11,r4,26
	ctx.r11.s64 = ctx.r4.s64 + 26;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD58C0"))) PPC_WEAK_FUNC(sub_82CD58C0);
PPC_FUNC_IMPL(__imp__sub_82CD58C0) {
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
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-3520
	ctx.r9.s64 = ctx.r11.s64 + -3520;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,120(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82cd5908
	if (cr6.eq) goto loc_82CD5908;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD5908;
	sub_825952B8(ctx, base);
loc_82CD5908:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82d25548
	ctx.lr = 0x82CD5920;
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

__attribute__((alias("__imp__sub_82CD5934"))) PPC_WEAK_FUNC(sub_82CD5934);
PPC_FUNC_IMPL(__imp__sub_82CD5934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5938"))) PPC_WEAK_FUNC(sub_82CD5938);
PPC_FUNC_IMPL(__imp__sub_82CD5938) {
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
	// bl 0x82cd58c0
	ctx.lr = 0x82CD5958;
	sub_82CD58C0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd5970
	if (cr6.eq) goto loc_82CD5970;
	// bl 0x82416268
	ctx.lr = 0x82CD596C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CD5970:
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

__attribute__((alias("__imp__sub_82CD5988"))) PPC_WEAK_FUNC(sub_82CD5988);
PPC_FUNC_IMPL(__imp__sub_82CD5988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82CD5990;
	__savegprlr_15(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD599C;
	sub_82D19A78(ctx, base);
	// bl 0x82d2b0f8
	ctx.lr = 0x82CD59A0;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82CD59A4;
	sub_82D390C0(ctx, base);
	// lis r11,108
	ctx.r11.s64 = 7077888;
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// ori r9,r11,183
	ctx.r9.u64 = ctx.r11.u64 | 183;
	// ori r8,r10,182
	ctx.r8.u64 = ctx.r10.u64 | 182;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82CD59C4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r23,r11,-3616
	ctx.r23.s64 = ctx.r11.s64 + -3616;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r23,-20
	ctx.r4.s64 = ctx.r23.s64 + -20;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82CD59E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5bf4
	if (cr6.eq) goto loc_82CD5BF4;
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82d29598
	ctx.lr = 0x82CD59F4;
	sub_82D29598(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD59FC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD5A04;
	sub_82D33DB0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// addi r18,r1,88
	ctx.r18.s64 = ctx.r1.s64 + 88;
	// addi r19,r28,104
	ctx.r19.s64 = ctx.r28.s64 + 104;
	// li r24,15
	ctx.r24.s64 = 15;
	// li r15,-1
	ctx.r15.s64 = -1;
	// li r16,2
	ctx.r16.s64 = 2;
loc_82CD5A24:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82CD5A30;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5be0
	if (cr6.eq) goto loc_82CD5BE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r23,-12
	ctx.r4.s64 = ctx.r23.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD5A54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d21408
	ctx.lr = 0x82CD5A68;
	sub_82D21408(ctx, base);
	// addi r21,r31,100
	ctx.r21.s64 = ctx.r31.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82CD5A7C;
	sub_82D2D510(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5bf4
	if (cr6.eq) goto loc_82CD5BF4;
	// lwz r31,112(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82cd5bac
	if (cr6.gt) goto loc_82CD5BAC;
	// addi r29,r28,120
	ctx.r29.s64 = ctx.r28.s64 + 120;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_82CD5AA8:
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r4,r23,-366
	ctx.r4.s64 = ctx.r23.s64 + -366;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82CD5AC4;
	sub_8259CC28(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82cd5af0
	if (cr0.eq) goto loc_82CD5AF0;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// ble cr6,0x82cd5c00
	if (!cr6.gt) goto loc_82CD5C00;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r26,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82CD5AEC;
	sub_82D042A8(ctx, base);
	// b 0x82cd5b40
	goto loc_82CD5B40;
loc_82CD5AF0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r31,32
	ctx.r4.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83161f10
	ctx.lr = 0x82CD5B04;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CD5B18;
	sub_8259CB28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd5b34
	if (cr6.lt) goto loc_82CD5B34;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82CD5B34;
	sub_825952B8(ctx, base);
loc_82CD5B34:
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
loc_82CD5B40:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82cd5b54
	if (!cr6.lt) goto loc_82CD5B54;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82CD5B54:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82CD5B5C;
	sub_82D3B548(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82cd5b6c
	if (!cr6.eq) goto loc_82CD5B6C;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
loc_82CD5B6C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd5b90
	if (cr6.lt) goto loc_82CD5B90;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82CD5B90;
	sub_825952B8(ctx, base);
loc_82CD5B90:
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// ble cr6,0x82cd5aa8
	if (!cr6.gt) goto loc_82CD5AA8;
loc_82CD5BAC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82CD5BB8;
	sub_82D3B298(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD5BD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5be0
	if (cr6.eq) goto loc_82CD5BE0;
	// lwz r4,0(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82CD5BE0;
	sub_82D29598(ctx, base);
loc_82CD5BE0:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(ctx.r20.s32, 2, xer);
	// blt cr6,0x82cd5a24
	if (cr6.lt) goto loc_82CD5A24;
loc_82CD5BF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_82CD5C00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82CD5C0C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82CD5C0C"))) PPC_WEAK_FUNC(sub_82CD5C0C);
PPC_FUNC_IMPL(__imp__sub_82CD5C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5C10"))) PPC_WEAK_FUNC(sub_82CD5C10);
PPC_FUNC_IMPL(__imp__sub_82CD5C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CD5C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8308e078
	ctx.lr = 0x82CD5C40;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82CD5C58;
	sub_82D253F8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lwz r30,220(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-3520
	ctx.r8.s64 = ctx.r10.s64 + -3520;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r28,r31,120
	ctx.r28.s64 = ctx.r31.s64 + 120;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// beq cr6,0x82cd5cb0
	if (cr6.eq) goto loc_82CD5CB0;
loc_82CD5C98:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x835977d8
	ctx.lr = 0x82CD5CA4;
	sub_835977D8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82cd5c98
	if (!cr0.eq) goto loc_82CD5C98;
loc_82CD5CB0:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// bl 0x82d191f8
	ctx.lr = 0x82CD5CE8;
	sub_82D191F8(ctx, base);
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,10456(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 10456);
	// bl 0x82d20ae0
	ctx.lr = 0x82CD5CF8;
	sub_82D20AE0(ctx, base);
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,-3660
	ctx.r4.s64 = ctx.r4.s64 + -3660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82CD5D0C;
	sub_82D23390(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d17e60
	ctx.lr = 0x82CD5D18;
	sub_82D17E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD5D24"))) PPC_WEAK_FUNC(sub_82CD5D24);
PPC_FUNC_IMPL(__imp__sub_82CD5D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5D28"))) PPC_WEAK_FUNC(sub_82CD5D28);
PPC_FUNC_IMPL(__imp__sub_82CD5D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CD5D30;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,136
	ctx.r4.s64 = 136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82595718
	ctx.lr = 0x82CD5D60;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5d98
	if (cr6.eq) goto loc_82CD5D98;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r7,r11,-3740
	ctx.r7.s64 = ctx.r11.s64 + -3740;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82cd5c10
	ctx.lr = 0x82CD5D90;
	sub_82CD5C10(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CD5D98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD5DA4"))) PPC_WEAK_FUNC(sub_82CD5DA4);
PPC_FUNC_IMPL(__imp__sub_82CD5DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5DA8"))) PPC_WEAK_FUNC(sub_82CD5DA8);
PPC_FUNC_IMPL(__imp__sub_82CD5DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82cd5e18
	if (cr6.eq) goto loc_82CD5E18;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82CD5DC0:
	// cmpwi cr6,r9,48
	cr6.compare<int32_t>(ctx.r9.s32, 48, xer);
	// blt cr6,0x82cd5dd0
	if (cr6.lt) goto loc_82CD5DD0;
	// cmpwi cr6,r9,57
	cr6.compare<int32_t>(ctx.r9.s32, 57, xer);
	// ble cr6,0x82cd5e00
	if (!cr6.gt) goto loc_82CD5E00;
loc_82CD5DD0:
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// blt cr6,0x82cd5de0
	if (cr6.lt) goto loc_82CD5DE0;
	// cmpwi cr6,r9,90
	cr6.compare<int32_t>(ctx.r9.s32, 90, xer);
	// ble cr6,0x82cd5e00
	if (!cr6.gt) goto loc_82CD5E00;
loc_82CD5DE0:
	// cmpwi cr6,r9,97
	cr6.compare<int32_t>(ctx.r9.s32, 97, xer);
	// blt cr6,0x82cd5df0
	if (cr6.lt) goto loc_82CD5DF0;
	// cmpwi cr6,r9,122
	cr6.compare<int32_t>(ctx.r9.s32, 122, xer);
	// ble cr6,0x82cd5e00
	if (!cr6.gt) goto loc_82CD5E00;
loc_82CD5DF0:
	// cmpwi cr6,r9,46
	cr6.compare<int32_t>(ctx.r9.s32, 46, xer);
	// beq cr6,0x82cd5e00
	if (cr6.eq) goto loc_82CD5E00;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// bne cr6,0x82cd5e28
	if (!cr6.eq) goto loc_82CD5E28;
loc_82CD5E00:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82cd5dc0
	if (!cr6.eq) goto loc_82CD5DC0;
loc_82CD5E18:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
loc_82CD5E28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD5E30"))) PPC_WEAK_FUNC(sub_82CD5E30);
PPC_FUNC_IMPL(__imp__sub_82CD5E30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-2548
	ctx.r31.s64 = ctx.r11.s64 + -2548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d12688
	ctx.lr = 0x82CD5E58;
	sub_82D12688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cd5e68
	if (!cr6.eq) goto loc_82CD5E68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d12668
	ctx.lr = 0x82CD5E68;
	sub_82D12668(ctx, base);
loc_82CD5E68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD5E70;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5e80
	if (cr6.eq) goto loc_82CD5E80;
	// bl 0x82d2b0f8
	ctx.lr = 0x82CD5E7C;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d39100
	ctx.lr = 0x82CD5E80;
	sub_82D39100(ctx, base);
loc_82CD5E80:
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

__attribute__((alias("__imp__sub_82CD5E9C"))) PPC_WEAK_FUNC(sub_82CD5E9C);
PPC_FUNC_IMPL(__imp__sub_82CD5E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5EA0"))) PPC_WEAK_FUNC(sub_82CD5EA0);
PPC_FUNC_IMPL(__imp__sub_82CD5EA0) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82d196e0
	sub_82D196E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD5EA8"))) PPC_WEAK_FUNC(sub_82CD5EA8);
PPC_FUNC_IMPL(__imp__sub_82CD5EA8) {
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
	// lbz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd5ee0
	if (cr6.eq) goto loc_82CD5EE0;
	// bl 0x82d19a78
	ctx.lr = 0x82CD5ECC;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD5ED8;
	sub_82D2AEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
loc_82CD5EE0:
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

__attribute__((alias("__imp__sub_82CD5EF4"))) PPC_WEAK_FUNC(sub_82CD5EF4);
PPC_FUNC_IMPL(__imp__sub_82CD5EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5EF8"))) PPC_WEAK_FUNC(sub_82CD5EF8);
PPC_FUNC_IMPL(__imp__sub_82CD5EF8) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82cd5f30
	if (!cr6.eq) goto loc_82CD5F30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d20da8
	ctx.lr = 0x82CD5F24;
	sub_82D20DA8(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,401(r10)
	PPC_STORE_U8(ctx.r10.u32 + 401, ctx.r11.u8);
loc_82CD5F30:
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

__attribute__((alias("__imp__sub_82CD5F44"))) PPC_WEAK_FUNC(sub_82CD5F44);
PPC_FUNC_IMPL(__imp__sub_82CD5F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5F48"))) PPC_WEAK_FUNC(sub_82CD5F48);
PPC_FUNC_IMPL(__imp__sub_82CD5F48) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82cd5f74
	if (!cr6.eq) goto loc_82CD5F74;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82cd5f74
	if (!cr6.eq) goto loc_82CD5F74;
	// bl 0x82d19a78
	ctx.lr = 0x82CD5F68;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD5F74;
	sub_82D2AEC8(ctx, base);
loc_82CD5F74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD5F84"))) PPC_WEAK_FUNC(sub_82CD5F84);
PPC_FUNC_IMPL(__imp__sub_82CD5F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD5F88"))) PPC_WEAK_FUNC(sub_82CD5F88);
PPC_FUNC_IMPL(__imp__sub_82CD5F88) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-2392
	ctx.r3.s64 = ctx.r11.s64 + -2392;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82CD5FB8;
	sub_82D2EE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd5ff0
	if (cr6.eq) goto loc_82CD5FF0;
	// lis r4,240
	ctx.r4.s64 = 15728640;
	// ori r4,r4,173
	ctx.r4.u64 = ctx.r4.u64 | 173;
	// bl 0x82d2ada8
	ctx.lr = 0x82CD5FD0;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83103100
	ctx.lr = 0x82CD5FDC;
	sub_83103100(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD5FE4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD5FF0;
	sub_82D2AEC8(ctx, base);
loc_82CD5FF0:
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

__attribute__((alias("__imp__sub_82CD6008"))) PPC_WEAK_FUNC(sub_82CD6008);
PPC_FUNC_IMPL(__imp__sub_82CD6008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CD6010;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,-2588
	ctx.r31.s64 = ctx.r11.s64 + -2588;
loc_82CD6024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82d12688
	ctx.lr = 0x82CD6030;
	sub_82D12688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82cd604c
	if (!cr6.eq) goto loc_82CD604C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12640
	ctx.lr = 0x82CD6044;
	sub_82D12640(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cd6078
	goto loc_82CD6078;
loc_82CD604C:
	// bl 0x82d126b0
	ctx.lr = 0x82CD6050;
	sub_82D126B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82cd6060
	if (!cr6.eq) goto loc_82CD6060;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82cd6078
	goto loc_82CD6078;
loc_82CD6060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d12cc0
	ctx.lr = 0x82CD6068;
	sub_82D12CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
loc_82CD6078:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd609c
	if (cr6.eq) goto loc_82CD609C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(ctx.r29.u32, 10, xer);
	// blt cr6,0x82cd6024
	if (cr6.lt) goto loc_82CD6024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CD609C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD60A8"))) PPC_WEAK_FUNC(sub_82CD60A8);
PPC_FUNC_IMPL(__imp__sub_82CD60A8) {
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
	// addi r9,r11,-2280
	ctx.r9.s64 = ctx.r11.s64 + -2280;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// addi r31,r3,96
	ctx.r31.s64 = ctx.r3.s64 + 96;
	// lwz r7,116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x82cd60fc
	if (cr6.lt) goto loc_82CD60FC;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD60FC;
	sub_825952B8(ctx, base);
loc_82CD60FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x82d25548
	ctx.lr = 0x82CD6118;
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

__attribute__((alias("__imp__sub_82CD6130"))) PPC_WEAK_FUNC(sub_82CD6130);
PPC_FUNC_IMPL(__imp__sub_82CD6130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CD6138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r5,112(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2424
	ctx.r30.s64 = ctx.r11.s64 + -2424;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r30,-758
	ctx.r6.s64 = ctx.r30.s64 + -758;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827a8810
	ctx.lr = 0x82CD6160;
	sub_827A8810(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82d19a78
	ctx.lr = 0x82CD6174;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD617C;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82CD6184;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82CD619C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd61dc
	if (cr6.eq) goto loc_82CD61DC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CD61B8;
	sub_82D2B608(ctx, base);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd61dc
	if (cr6.eq) goto loc_82CD61DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83a970c8
	ctx.lr = 0x82CD61CC;
	sub_83A970C8(ctx, base);
	// addi r11,r30,-204
	ctx.r11.s64 = ctx.r30.s64 + -204;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
loc_82CD61DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD61E4;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82CD61EC;
	sub_82D33DB0(ctx, base);
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x82d2f098
	ctx.lr = 0x82CD61F4;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd620c
	if (cr6.eq) goto loc_82CD620C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82CD620C;
	sub_82D2B608(ctx, base);
loc_82CD620C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD6214;
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
	ctx.lr = 0x82CD622C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd6250
	if (cr6.eq) goto loc_82CD6250;
	// bl 0x835d31b0
	ctx.lr = 0x82CD6238;
	sub_835D31B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD6250;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82CD6250:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD6258"))) PPC_WEAK_FUNC(sub_82CD6258);
PPC_FUNC_IMPL(__imp__sub_82CD6258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD6260;
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
	ctx.lr = 0x82CD6274;
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
	ctx.lr = 0x82CD628C;
	sub_82D253F8(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-2280
	ctx.r9.s64 = ctx.r11.s64 + -2280;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// lis r6,-31776
	ctx.r6.s64 = -2082471936;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// addi r30,r6,10588
	ctx.r30.s64 = ctx.r6.s64 + 10588;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// lwz r4,10588(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10588);
	// bl 0x82d20ae0
	ctx.lr = 0x82CD62DC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82CD62EC;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d191f8
	ctx.lr = 0x82CD62F4;
	sub_82D191F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD6300"))) PPC_WEAK_FUNC(sub_82CD6300);
PPC_FUNC_IMPL(__imp__sub_82CD6300) {
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
	// bl 0x82cd60a8
	ctx.lr = 0x82CD6320;
	sub_82CD60A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd6338
	if (cr6.eq) goto loc_82CD6338;
	// bl 0x82416268
	ctx.lr = 0x82CD6334;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82CD6338:
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

__attribute__((alias("__imp__sub_82CD6350"))) PPC_WEAK_FUNC(sub_82CD6350);
PPC_FUNC_IMPL(__imp__sub_82CD6350) {
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
	ctx.lr = 0x82CD636C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,-2452
	ctx.r4.s64 = ctx.r11.s64 + -2452;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD6388;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd63b4
	if (cr6.eq) goto loc_82CD63B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// bl 0x82d291e0
	ctx.lr = 0x82CD63A4;
	sub_82D291E0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD63B4;
	sub_82D2AEC8(ctx, base);
loc_82CD63B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd6130
	ctx.lr = 0x82CD63BC;
	sub_82CD6130(ctx, base);
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

__attribute__((alias("__imp__sub_82CD63D4"))) PPC_WEAK_FUNC(sub_82CD63D4);
PPC_FUNC_IMPL(__imp__sub_82CD63D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD63D8"))) PPC_WEAK_FUNC(sub_82CD63D8);
PPC_FUNC_IMPL(__imp__sub_82CD63D8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82cd643c
	if (!cr6.eq) goto loc_82CD643C;
	// bl 0x82d19a78
	ctx.lr = 0x82CD63F8;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD6400;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82CD6408;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,-2404
	ctx.r4.s64 = ctx.r11.s64 + -2404;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD6424;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd643c
	if (cr6.eq) goto loc_82CD643C;
	// bl 0x83a970c8
	ctx.lr = 0x82CD6430;
	sub_83A970C8(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd6350
	ctx.lr = 0x82CD643C;
	sub_82CD6350(ctx, base);
loc_82CD643C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD6444;
	sub_82D19A78(ctx, base);
	// bl 0x82d2aff8
	ctx.lr = 0x82CD6448;
	sub_82D2AFF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd6468
	if (!cr6.eq) goto loc_82CD6468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD645C;
	sub_82D19A78(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD6468;
	sub_82D2AEC8(ctx, base);
loc_82CD6468:
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

__attribute__((alias("__imp__sub_82CD647C"))) PPC_WEAK_FUNC(sub_82CD647C);
PPC_FUNC_IMPL(__imp__sub_82CD647C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD6480"))) PPC_WEAK_FUNC(sub_82CD6480);
PPC_FUNC_IMPL(__imp__sub_82CD6480) {
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
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82CD64A4;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd64c4
	if (cr6.lt) goto loc_82CD64C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD64C4;
	sub_825952B8(ctx, base);
loc_82CD64C4:
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

__attribute__((alias("__imp__sub_82CD64EC"))) PPC_WEAK_FUNC(sub_82CD64EC);
PPC_FUNC_IMPL(__imp__sub_82CD64EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD64F0"))) PPC_WEAK_FUNC(sub_82CD64F0);
PPC_FUNC_IMPL(__imp__sub_82CD64F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CD64F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD6504;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD650C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD6514;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r30,r11,-2456
	ctx.r30.s64 = ctx.r11.s64 + -2456;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD6534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,40
	ctx.r9.s64 = 2621440;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r28,r9,67
	ctx.r28.u64 = ctx.r9.u64 | 67;
	// beq cr6,0x82cd654c
	if (cr6.eq) goto loc_82CD654C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d29598
	ctx.lr = 0x82CD654C;
	sub_82D29598(ctx, base);
loc_82CD654C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD6554;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD655C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD6564;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD657C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82CD65B0;
	sub_8259CC28(ctx, base);
	// lis r9,-32051
	ctx.r9.s64 = -2100494336;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r7,r9,23976
	ctx.r7.s64 = ctx.r9.s64 + 23976;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8259cb28
	ctx.lr = 0x82CD65E4;
	sub_8259CB28(ctx, base);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stb r30,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r30.u8);
	// beq cr6,0x82cd6600
	if (cr6.eq) goto loc_82CD6600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d3a988
	ctx.lr = 0x82CD6600;
	sub_82D3A988(ctx, base);
loc_82CD6600:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd6350
	ctx.lr = 0x82CD6608;
	sub_82CD6350(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8378e240
	ctx.lr = 0x82CD6610;
	sub_8378E240(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD6618"))) PPC_WEAK_FUNC(sub_82CD6618);
PPC_FUNC_IMPL(__imp__sub_82CD6618) {
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r11,-264
	ctx.r11.s64 = ctx.r11.s64 + -17301504;
	// addic. r11,r11,-17
	xer.ca = ctx.r11.u32 > 16;
	ctx.r11.s64 = ctx.r11.s64 + -17;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82cd665c
	if (cr0.eq) goto loc_82CD665C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82cd66b8
	if (cr6.eq) goto loc_82CD66B8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82cd66cc
	if (!cr6.eq) goto loc_82CD66CC;
	// bl 0x82cd5f88
	ctx.lr = 0x82CD6650;
	sub_82CD5F88(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// b 0x82cd66cc
	goto loc_82CD66CC;
loc_82CD665C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD6664;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD666C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD6674;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r4,r11,-2416
	ctx.r4.s64 = ctx.r11.s64 + -2416;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82CD6690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd66b8
	if (cr6.eq) goto loc_82CD66B8;
	// bl 0x82d3a1c8
	ctx.lr = 0x82CD669C;
	sub_82D3A1C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CD66B0;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cd6350
	ctx.lr = 0x82CD66B8;
	sub_82CD6350(ctx, base);
loc_82CD66B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD66C0;
	sub_82D19A78(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD66CC;
	sub_82D2AEC8(ctx, base);
loc_82CD66CC:
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

__attribute__((alias("__imp__sub_82CD66E4"))) PPC_WEAK_FUNC(sub_82CD66E4);
PPC_FUNC_IMPL(__imp__sub_82CD66E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD66E8"))) PPC_WEAK_FUNC(sub_82CD66E8);
PPC_FUNC_IMPL(__imp__sub_82CD66E8) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82cd675c
	if (!cr6.eq) goto loc_82CD675C;
	// bl 0x82d19ba0
	ctx.lr = 0x82CD6710;
	sub_82D19BA0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82cd675c
	if (!cr6.eq) goto loc_82CD675C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82CD6728;
	sub_82D20DA8(ctx, base);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cd6754
	if (cr6.eq) goto loc_82CD6754;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r11.u32);
	// bl 0x8292a3f8
	ctx.lr = 0x82CD6748;
	sub_8292A3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd6480
	ctx.lr = 0x82CD6754;
	sub_82CD6480(ctx, base);
loc_82CD6754:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,401(r30)
	PPC_STORE_U8(ctx.r30.u32 + 401, ctx.r11.u8);
loc_82CD675C:
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

__attribute__((alias("__imp__sub_82CD6774"))) PPC_WEAK_FUNC(sub_82CD6774);
PPC_FUNC_IMPL(__imp__sub_82CD6774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD6778"))) PPC_WEAK_FUNC(sub_82CD6778);
PPC_FUNC_IMPL(__imp__sub_82CD6778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82CD6780;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// bl 0x82cd6008
	ctx.lr = 0x82CD679C;
	sub_82CD6008(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd67b4
	if (!cr6.eq) goto loc_82CD67B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82CD67B4:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,324
	ctx.r4.s64 = ctx.r11.s64 + 324;
	// bl 0x8259cb28
	ctx.lr = 0x82CD67E0;
	sub_8259CB28(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82CD67F4;
	sub_8259CB28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82cd6814
	if (cr6.lt) goto loc_82CD6814;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82CD6814;
	sub_825952B8(ctx, base);
loc_82CD6814:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD6834;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82CD6848;
	sub_82D1ED60(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cd687c
	if (cr6.eq) goto loc_82CD687C;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
loc_82CD685C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwzu r4,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d21408
	ctx.lr = 0x82CD6870;
	sub_82D21408(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// blt cr6,0x82cd685c
	if (cr6.lt) goto loc_82CD685C;
loc_82CD687C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82cd64f0
	ctx.lr = 0x82CD6884;
	sub_82CD64F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD688C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r27,r11,-2488
	ctx.r27.s64 = ctx.r11.s64 + -2488;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD68AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd68d4
	if (cr6.eq) goto loc_82CD68D4;
	// lis r4,40
	ctx.r4.s64 = 2621440;
	// ori r4,r4,182
	ctx.r4.u64 = ctx.r4.u64 | 182;
	// bl 0x82d29598
	ctx.lr = 0x82CD68C4;
	sub_82D29598(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82CD68D4;
	sub_82D2AEC8(ctx, base);
loc_82CD68D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82CD68DC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82CD68E4;
	sub_82D33DB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82CD68EC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd696c
	if (cr6.eq) goto loc_82CD696C;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82CD690C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd696c
	if (cr6.eq) goto loc_82CD696C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82CD691C:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// bl 0x837b6140
	ctx.lr = 0x82CD6948;
	sub_837B6140(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82CD6954;
	sub_82D3B548(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(ctx.r31.u32, 10, xer);
	// blt cr6,0x82cd691c
	if (cr6.lt) goto loc_82CD691C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82CD696C;
	sub_82D3B298(ctx, base);
loc_82CD696C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a30
	ctx.lr = 0x82CD6978;
	sub_82D19A30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD6980;
	sub_82D19A68(ctx, base);
	// li r4,30688
	ctx.r4.s64 = 30688;
	// bl 0x83545640
	ctx.lr = 0x82CD6988;
	sub_83545640(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82CD6990;
	sub_82D19A68(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd69a0
	if (cr6.eq) goto loc_82CD69A0;
	// bl 0x82d2b0f8
	ctx.lr = 0x82CD699C;
	sub_82D2B0F8(ctx, base);
	// bl 0x82d390c0
	ctx.lr = 0x82CD69A0;
	sub_82D390C0(ctx, base);
loc_82CD69A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD69AC"))) PPC_WEAK_FUNC(sub_82CD69AC);
PPC_FUNC_IMPL(__imp__sub_82CD69AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD69B0"))) PPC_WEAK_FUNC(sub_82CD69B0);
PPC_FUNC_IMPL(__imp__sub_82CD69B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd69c4
	if (!cr6.eq) goto loc_82CD69C4;
loc_82CD69BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CD69C4:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82cd69bc
	if (cr6.eq) goto loc_82CD69BC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD69E8"))) PPC_WEAK_FUNC(sub_82CD69E8);
PPC_FUNC_IMPL(__imp__sub_82CD69E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82CD69F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd6b9c
	if (cr6.eq) goto loc_82CD6B9C;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82cd6b9c
	if (cr6.eq) goto loc_82CD6B9C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82cd6b9c
	if (cr6.eq) goto loc_82CD6B9C;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bgt cr6,0x82cd6b9c
	if (cr6.gt) goto loc_82CD6B9C;
loc_82CD6A48:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpw cr6,r4,r29
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, xer);
	// bgt cr6,0x82cd6ab8
	if (cr6.gt) goto loc_82CD6AB8;
loc_82CD6A54:
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82cd6a80
	if (!cr6.eq) goto loc_82CD6A80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x835ed648
	ctx.lr = 0x82CD6A74;
	sub_835ED648(ctx, base);
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x82cd6a94
	goto loc_82CD6A94;
loc_82CD6A80:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x835ed648
	ctx.lr = 0x82CD6A88;
	sub_835ED648(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
loc_82CD6A94:
	// beq cr6,0x82cd6ab0
	if (cr6.eq) goto loc_82CD6AB0;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// cmpw cr6,r4,r29
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, xer);
	// ble cr6,0x82cd6a54
	if (!cr6.gt) goto loc_82CD6A54;
	// b 0x82cd6ab8
	goto loc_82CD6AB8;
loc_82CD6AB0:
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r31,1
	ctx.r31.s64 = 1;
loc_82CD6AB8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd6b9c
	if (cr6.eq) goto loc_82CD6B9C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x82cd6af4
	if (cr6.lt) goto loc_82CD6AF4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82CD6AF4:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// bgt cr6,0x82cd6b68
	if (cr6.gt) goto loc_82CD6B68;
loc_82CD6B10:
	// lbz r11,15(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 15);
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82cd6b3c
	if (!cr6.eq) goto loc_82CD6B3C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x835ed648
	ctx.lr = 0x82CD6B30;
	sub_835ED648(ctx, base);
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// b 0x82cd6b50
	goto loc_82CD6B50;
loc_82CD6B3C:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x835ed648
	ctx.lr = 0x82CD6B44;
	sub_835ED648(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
loc_82CD6B50:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bne cr6,0x82cd6b68
	if (!cr6.eq) goto loc_82CD6B68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// ble cr6,0x82cd6b10
	if (!cr6.gt) goto loc_82CD6B10;
loc_82CD6B68:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r4,r29
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r29.s32, xer);
	// ble cr6,0x82cd6a48
	if (!cr6.gt) goto loc_82CD6A48;
loc_82CD6B9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD6BA4"))) PPC_WEAK_FUNC(sub_82CD6BA4);
PPC_FUNC_IMPL(__imp__sub_82CD6BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD6BA8"))) PPC_WEAK_FUNC(sub_82CD6BA8);
PPC_FUNC_IMPL(__imp__sub_82CD6BA8) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// li r5,52
	ctx.r5.s64 = 52;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// bl 0x831ce980
	ctx.lr = 0x82CD6BE0;
	sub_831CE980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD6BF0"))) PPC_WEAK_FUNC(sub_82CD6BF0);
PPC_FUNC_IMPL(__imp__sub_82CD6BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cd6c28
	if (cr6.eq) goto loc_82CD6C28;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r8,36(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82cd6c28
	if (cr6.eq) goto loc_82CD6C28;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82cd6c30
	if (!cr6.eq) goto loc_82CD6C30;
loc_82CD6C28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82CD6C30:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD6C44"))) PPC_WEAK_FUNC(sub_82CD6C44);
PPC_FUNC_IMPL(__imp__sub_82CD6C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD6C48"))) PPC_WEAK_FUNC(sub_82CD6C48);
PPC_FUNC_IMPL(__imp__sub_82CD6C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,21588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21588);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f13,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f5,f0,f9
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsel f4,f8,f12,f0
	ctx.f4.f64 = ctx.f8.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsel f3,f7,f11,f0
	ctx.f3.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsel f2,f6,f10,f0
	ctx.f2.f64 = ctx.f6.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fsel f1,f5,f9,f0
	ctx.f1.f64 = ctx.f5.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// fsel f0,f4,f4,f13
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f4.f64 : ctx.f13.f64;
	// fsel f12,f3,f3,f13
	ctx.f12.f64 = ctx.f3.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// fsel f11,f2,f2,f13
	ctx.f11.f64 = ctx.f2.f64 >= 0.0 ? ctx.f2.f64 : ctx.f13.f64;
	// fsel f10,f1,f1,f13
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fctidz f9,f0
	ctx.f9.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lbz r9,-9(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// fctidz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lbz r8,-9(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// fctidz f7,f11
	ctx.f7.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r7,-9(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// fctidz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lbz r6,-9(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD6CE8"))) PPC_WEAK_FUNC(sub_82CD6CE8);
PPC_FUNC_IMPL(__imp__sub_82CD6CE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd6d18
	if (!cr6.eq) goto loc_82CD6D18;
loc_82CD6D08:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x82cd6d44
	goto loc_82CD6D44;
loc_82CD6D18:
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82cd6d08
	if (cr6.eq) goto loc_82CD6D08;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
loc_82CD6D44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82CD6D4C;
	sub_82572FA0(ctx, base);
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

__attribute__((alias("__imp__sub_82CD6D64"))) PPC_WEAK_FUNC(sub_82CD6D64);
PPC_FUNC_IMPL(__imp__sub_82CD6D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD6D68"))) PPC_WEAK_FUNC(sub_82CD6D68);
PPC_FUNC_IMPL(__imp__sub_82CD6D68) {
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
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd6d90
	if (!cr6.eq) goto loc_82CD6D90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cd6db8
	goto loc_82CD6DB8;
loc_82CD6D90:
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r9,36(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82cd6db0
	if (!cr6.eq) goto loc_82CD6DB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82cd6db8
	goto loc_82CD6DB8;
loc_82CD6DB0:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82CD6DB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lbz r10,95(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// fctidz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lbz r9,95(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lbz r8,95(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// fctidz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lbz r7,95(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// rotlwi r3,r7,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 | ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x82cd6e38
	if (cr6.eq) goto loc_82CD6E38;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x835ed648
	ctx.lr = 0x82CD6E2C;
	sub_835ED648(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82CD6E38:
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

__attribute__((alias("__imp__sub_82CD6E50"))) PPC_WEAK_FUNC(sub_82CD6E50);
PPC_FUNC_IMPL(__imp__sub_82CD6E50) {
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
	// beq cr6,0x82cd6eac
	if (cr6.eq) goto loc_82CD6EAC;
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82cd6e90
	if (cr6.gt) goto loc_82CD6E90;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82416260
	ctx.lr = 0x82CD6E88;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cd6eac
	if (!cr6.eq) goto loc_82CD6EAC;
loc_82CD6E90:
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
	ctx.lr = 0x82CD6EAC;
	sub_8246B850(ctx, base);
loc_82CD6EAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82CD6EBC"))) PPC_WEAK_FUNC(sub_82CD6EBC);
PPC_FUNC_IMPL(__imp__sub_82CD6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD6EC0"))) PPC_WEAK_FUNC(sub_82CD6EC0);
PPC_FUNC_IMPL(__imp__sub_82CD6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD6EC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82cd6ce8
	ctx.lr = 0x82CD6EE0;
	sub_82CD6CE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r29,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82572fa0
	ctx.lr = 0x82CD6EFC;
	sub_82572FA0(ctx, base);
	// clrlwi r8,r29,24
	ctx.r8.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82cd6f14
	if (cr6.eq) goto loc_82CD6F14;
loc_82CD6F08:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CD6F14:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82cd6f08
	if (cr6.lt) goto loc_82CD6F08;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD6F2C"))) PPC_WEAK_FUNC(sub_82CD6F2C);
PPC_FUNC_IMPL(__imp__sub_82CD6F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD6F30"))) PPC_WEAK_FUNC(sub_82CD6F30);
PPC_FUNC_IMPL(__imp__sub_82CD6F30) {
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
	ctx.lr = 0x82CD6F38;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r24,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r24.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82CD6F54;
	sub_82572FA0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd6f78
	if (!cr6.eq) goto loc_82CD6F78;
loc_82CD6F60:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82CD6F6C;
	sub_82572FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CD6F78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82cd6ce8
	ctx.lr = 0x82CD6F84;
	sub_82CD6CE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r30,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82572fa0
	ctx.lr = 0x82CD6FA0;
	sub_82572FA0(ctx, base);
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82cd6f60
	if (!cr6.eq) goto loc_82CD6F60;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825832e8
	ctx.lr = 0x82CD6FB4;
	sub_825832E8(ctx, base);
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825832f0
	ctx.lr = 0x82CD6FC0;
	sub_825832F0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// li r28,-1
	ctx.r28.s64 = -1;
	// clrlwi r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82cd6fe8
	if (!cr6.gt) goto loc_82CD6FE8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82CD6FE8:
	// li r27,27
	ctx.r27.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82CD6FFC;
	sub_82595718(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82cd7010
	if (!cr6.gt) goto loc_82CD7010;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82CD7010:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82CD7020;
	sub_82595718(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82cd7034
	if (!cr6.gt) goto loc_82CD7034;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82CD7034:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82CD7044;
	sub_82595718(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cd70d0
	if (cr6.eq) goto loc_82CD70D0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
loc_82CD705C:
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stwx r24,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r24.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stwx r28,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82cd705c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CD705C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82cd70d0
	if (cr6.eq) goto loc_82CD70D0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82CD708C:
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x82CD70A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd70b8
	if (cr6.eq) goto loc_82CD70B8;
	// clrlwi r5,r26,16
	ctx.r5.u64 = ctx.r26.u32 & 0xFFFF;
	// clrlwi r4,r25,16
	ctx.r4.u64 = ctx.r25.u32 & 0xFFFF;
	// bl 0x835ee550
	ctx.lr = 0x82CD70B4;
	sub_835EE550(ctx, base);
	// b 0x82cd70bc
	goto loc_82CD70BC;
loc_82CD70B8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82CD70BC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82cd708c
	if (!cr0.eq) goto loc_82CD708C;
loc_82CD70D0:
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x831ce980
	ctx.lr = 0x82CD70E0;
	sub_831CE980(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x835ee688
	ctx.lr = 0x82CD70F4;
	sub_835EE688(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r4,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r4.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x82cd712c
	if (cr6.lt) goto loc_82CD712C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82CD712C:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// rlwinm r11,r26,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1FFFE;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// clrlwi r30,r26,16
	ctx.r30.u64 = ctx.r26.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82595718
	ctx.lr = 0x82CD7150;
	sub_82595718(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82CD7168;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd7180
	if (cr6.eq) goto loc_82CD7180;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r4,r25,16
	ctx.r4.u64 = ctx.r25.u32 & 0xFFFF;
	// bl 0x835ee550
	ctx.lr = 0x82CD717C;
	sub_835EE550(ctx, base);
	// b 0x82cd7184
	goto loc_82CD7184;
loc_82CD7180:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82CD7184:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595718
	ctx.lr = 0x82CD719C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd71b4
	if (cr6.eq) goto loc_82CD71B4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r4,r25,16
	ctx.r4.u64 = ctx.r25.u32 & 0xFFFF;
	// bl 0x835ee550
	ctx.lr = 0x82CD71B0;
	sub_835EE550(ctx, base);
	// b 0x82cd71b8
	goto loc_82CD71B8;
loc_82CD71B4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82CD71B8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd7200
	if (cr6.eq) goto loc_82CD7200;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82cd7200
	if (cr6.eq) goto loc_82CD7200;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82cd7200
	if (cr6.eq) goto loc_82CD7200;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_82CD7200:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82CD720C;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD7218"))) PPC_WEAK_FUNC(sub_82CD7218);
PPC_FUNC_IMPL(__imp__sub_82CD7218) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd7250
	if (!cr6.eq) goto loc_82CD7250;
loc_82CD7238:
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
loc_82CD7250:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82cd7238
	if (cr6.eq) goto loc_82CD7238;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82CD7284;
	sub_82572FA0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825832d8
	ctx.lr = 0x82CD728C;
	sub_825832D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7298;
	sub_82572FA0(ctx, base);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r3,r5,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r4
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
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

__attribute__((alias("__imp__sub_82CD72C8"))) PPC_WEAK_FUNC(sub_82CD72C8);
PPC_FUNC_IMPL(__imp__sub_82CD72C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82CD72D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r25,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r25.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82CD72EC;
	sub_82572FA0(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825832e8
	ctx.lr = 0x82CD72F4;
	sub_825832E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x825832f0
	ctx.lr = 0x82CD7304;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r10,r30,r31
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82dab6d0
	ctx.lr = 0x82CD731C;
	sub_82DAB6D0(ctx, base);
	// li r9,27
	ctx.r9.s64 = 27;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82CD7338;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd7384
	if (cr6.eq) goto loc_82CD7384;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x835ebb28
	ctx.lr = 0x82CD736C;
	sub_835EBB28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7378;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82CD7384:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7390;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD739C"))) PPC_WEAK_FUNC(sub_82CD739C);
PPC_FUNC_IMPL(__imp__sub_82CD739C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD73A0"))) PPC_WEAK_FUNC(sub_82CD73A0);
PPC_FUNC_IMPL(__imp__sub_82CD73A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82CD73A8;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd73dc
	if (!cr6.eq) goto loc_82CD73DC;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x82cd7404
	goto loc_82CD7404;
loc_82CD73DC:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82cd73fc
	if (!cr6.eq) goto loc_82CD73FC;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x82cd7404
	goto loc_82CD7404;
loc_82CD73FC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82CD7404:
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82CD7414;
	sub_82572FA0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd7864
	if (cr6.eq) goto loc_82CD7864;
	// std r30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r30.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82CD7430;
	sub_82572FA0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825832e8
	ctx.lr = 0x82CD7438;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7448;
	sub_82572FA0(ctx, base);
	// std r30,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r30.u64);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82CD7458;
	sub_82572FA0(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x825832f0
	ctx.lr = 0x82CD7460;
	sub_825832F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7470;
	sub_82572FA0(ctx, base);
	// lhz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x82cd7484
	if (cr6.gt) goto loc_82CD7484;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82CD7484:
	// lhz r10,6(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 6);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82cd7498
	if (cr6.gt) goto loc_82CD7498;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82CD7498:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(ctx.r20.s32, 0, xer);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// bge cr6,0x82cd74a8
	if (!cr6.lt) goto loc_82CD74A8;
	// neg r21,r20
	ctx.r21.s64 = -ctx.r20.s64;
loc_82CD74A8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bge cr6,0x82cd74b8
	if (!cr6.lt) goto loc_82CD74B8;
	// neg r9,r28
	ctx.r9.s64 = -ctx.r28.s64;
loc_82CD74B8:
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + ctx.r20.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, xer);
	// ble cr6,0x82cd74cc
	if (!cr6.gt) goto loc_82CD74CC;
	// subf r24,r20,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r20.s64;
loc_82CD74CC:
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// ble cr6,0x82cd74e0
	if (!cr6.gt) goto loc_82CD74E0;
	// subf r22,r28,r29
	ctx.r22.s64 = ctx.r29.s64 - ctx.r28.s64;
loc_82CD74E0:
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r22
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, xer);
	// bge cr6,0x82cd7864
	if (!cr6.lt) goto loc_82CD7864;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// add r30,r9,r28
	ctx.r30.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfs f31,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,21700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	ctx.f30.f64 = double(temp.f32);
loc_82CD7500:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmpw cr6,r21,r24
	cr6.compare<int32_t>(ctx.r21.s32, ctx.r24.s32, xer);
	// bge cr6,0x82cd7854
	if (!cr6.lt) goto loc_82CD7854;
	// add r31,r21,r20
	ctx.r31.u64 = ctx.r21.u64 + ctx.r20.u64;
loc_82CD7510:
	// lhz r11,2(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 2);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x835ed648
	ctx.lr = 0x82CD7544;
	sub_835ED648(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd7844
	if (cr6.eq) goto loc_82CD7844;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bne cr6,0x82cd7570
	if (!cr6.eq) goto loc_82CD7570;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// b 0x82cd7834
	goto loc_82CD7834;
loc_82CD7570:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835ed648
	ctx.lr = 0x82CD7584;
	sub_835ED648(ctx, base);
	// lbz r11,99(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd7598
	if (!cr6.eq) goto loc_82CD7598;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// b 0x82cd782c
	goto loc_82CD782C;
loc_82CD7598:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x82cd76bc
	if (!cr6.eq) goto loc_82CD76BC;
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r4,98(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r8,97(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r11,83(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r3,81(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lbz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f12,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// std r4,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r4.u64);
	// lfd f10,176(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lfd f7,240(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfd f13,224(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// fcfid f6,f0
	ctx.f6.f64 = double(ctx.f0.s64);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// fcfid f3,f11
	ctx.f3.f64 = double(ctx.f11.s64);
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// frsp f12,f5
	ctx.f12.f64 = double(float(ctx.f5.f64));
	// lfd f2,192(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// frsp f13,f6
	ctx.f13.f64 = double(float(ctx.f6.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fcfid f9,f7
	ctx.f9.f64 = double(ctx.f7.s64);
	// frsp f11,f4
	ctx.f11.f64 = double(float(ctx.f4.f64));
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// fmuls f0,f8,f30
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f31,f0
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f2,f11,f7,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f1,f10,f7,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f0,f4,f7,f3
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fctidz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fctidz f12,f1
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lbz r7,103(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// fctidz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lbz r11,103(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// ori r10,r11,255
	ctx.r10.u64 = ctx.r11.u64 | 255;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// b 0x82cd7840
	goto loc_82CD7840;
loc_82CD76BC:
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fnmsubs f8,f9,f30,f31
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f30.f64 - ctx.f31.f64)));
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fctidz f7,f13
	ctx.f7.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x82cd770c
	if (!cr6.gt) goto loc_82CD770C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82CD770C:
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// fdivs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// mullw r4,r6,r9
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r3,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r3.u64);
	// lfd f11,184(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f12,168(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x82cd7768
	if (!cr6.gt) goto loc_82CD7768;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82CD7768:
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// lbz r3,97(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// mullw r11,r4,r9
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// std r3,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r3.u64);
	// lfd f10,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lfd f12,200(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f6,f7,f0,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x82cd77bc
	if (!cr6.gt) goto loc_82CD77BC;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82CD77BC:
	// lbz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lbz r3,98(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// mullw r11,r4,r9
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// std r3,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r3.u64);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// std r6,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r6.u64);
	// lfd f12,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f11,248(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fctidz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// ble cr6,0x82cd7814
	if (!cr6.gt) goto loc_82CD7814;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82CD7814:
	// rlwimi r10,r8,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwimi r11,r10,8,8,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFF00) | (ctx.r11.u64 & 0xFFFFFFFFFF0000FF);
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// rlwimi r7,r11,8,0,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r7.u64 & 0xFFFFFFFF000000FF);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
loc_82CD782C:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82CD7834:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82CD7840:
	// bl 0x835ed5a8
	ctx.lr = 0x82CD7844;
	sub_835ED5A8(ctx, base);
loc_82CD7844:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, xer);
	// blt cr6,0x82cd7510
	if (cr6.lt) goto loc_82CD7510;
loc_82CD7854:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r26,r22
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r22.s32, xer);
	// blt cr6,0x82cd7500
	if (cr6.lt) goto loc_82CD7500;
loc_82CD7864:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7870;
	sub_82572FA0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD7880"))) PPC_WEAK_FUNC(sub_82CD7880);
PPC_FUNC_IMPL(__imp__sub_82CD7880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82CD7888;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd78b0
	if (!cr6.eq) goto loc_82CD78B0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82cd78d8
	goto loc_82CD78D8;
loc_82CD78B0:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82cd78d0
	if (!cr6.eq) goto loc_82CD78D0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82cd78d8
	goto loc_82CD78D8;
loc_82CD78D0:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82CD78D8:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r30,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82CD78E8;
	sub_82572FA0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd7b18
	if (cr6.eq) goto loc_82CD7B18;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// bl 0x825832e8
	ctx.lr = 0x82CD78FC;
	sub_825832E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825832f0
	ctx.lr = 0x82CD7908;
	sub_825832F0(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82cd7920
	if (!cr6.gt) goto loc_82CD7920;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82CD7920:
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82cd7934
	if (!cr6.gt) goto loc_82CD7934;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_82CD7934:
	// lhz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82cd7954
	if (!cr6.gt) goto loc_82CD7954;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// ble cr6,0x82cd7954
	if (!cr6.gt) goto loc_82CD7954;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82CD7954:
	// lhz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82cd7974
	if (!cr6.gt) goto loc_82CD7974;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, xer);
	// ble cr6,0x82cd7974
	if (!cr6.gt) goto loc_82CD7974;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82CD7974:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82cd7a54
	if (!cr6.eq) goto loc_82CD7A54;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bge cr6,0x82cd7b18
	if (!cr6.lt) goto loc_82CD7B18;
loc_82CD7990:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmpw cr6,r24,r31
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r31.s32, xer);
	// bge cr6,0x82cd7a30
	if (!cr6.lt) goto loc_82CD7A30;
loc_82CD799C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x835ed648
	ctx.lr = 0x82CD79B0;
	sub_835ED648(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x835ed648
	ctx.lr = 0x82CD79D0;
	sub_835ED648(ctx, base);
	// lbz r8,99(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r11,91(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x82cd7a18
	if (!cr6.lt) goto loc_82CD7A18;
	// lbz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x835ed5a8
	ctx.lr = 0x82CD7A18;
	sub_835ED5A8(ctx, base);
loc_82CD7A18:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// blt cr6,0x82cd799c
	if (cr6.lt) goto loc_82CD799C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82CD7A30:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// blt cr6,0x82cd7990
	if (cr6.lt) goto loc_82CD7990;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7A4C;
	sub_82572FA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82CD7A54:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x82cd7b18
	if (!cr6.lt) goto loc_82CD7B18;
loc_82CD7A60:
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// cmpw cr6,r24,r31
	cr6.compare<int32_t>(ctx.r24.s32, ctx.r31.s32, xer);
	// bge cr6,0x82cd7b08
	if (!cr6.lt) goto loc_82CD7B08;
loc_82CD7A6C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x835ed648
	ctx.lr = 0x82CD7A80;
	sub_835ED648(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x835ed648
	ctx.lr = 0x82CD7AA0;
	sub_835ED648(ctx, base);
	// lbz r8,99(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r5,95(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// subfic r7,r8,255
	xer.ca = ctx.r8.u32 <= 255;
	ctx.r7.s64 = 255 - ctx.r8.s64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82cd7af0
	if (!cr6.lt) goto loc_82CD7AF0;
	// lbz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lbz r10,93(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lbz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r8,r7,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x835ed5a8
	ctx.lr = 0x82CD7AF0;
	sub_835ED5A8(ctx, base);
loc_82CD7AF0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// blt cr6,0x82cd7a6c
	if (cr6.lt) goto loc_82CD7A6C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CD7B08:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, xer);
	// blt cr6,0x82cd7a60
	if (cr6.lt) goto loc_82CD7A60;
loc_82CD7B18:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7B24;
	sub_82572FA0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD7B2C"))) PPC_WEAK_FUNC(sub_82CD7B2C);
PPC_FUNC_IMPL(__imp__sub_82CD7B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD7B30"))) PPC_WEAK_FUNC(sub_82CD7B30);
PPC_FUNC_IMPL(__imp__sub_82CD7B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82CD7B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd7b5c
	if (!cr6.eq) goto loc_82CD7B5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82CD7B5C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd7b74
	if (!cr6.eq) goto loc_82CD7B74;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82cd7b9c
	goto loc_82CD7B9C;
loc_82CD7B74:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82cd7b94
	if (!cr6.eq) goto loc_82CD7B94;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82cd7b9c
	goto loc_82CD7B9C;
loc_82CD7B94:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82CD7B9C:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82CD7BAC;
	sub_82572FA0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82cd72c8
	ctx.lr = 0x82CD7BBC;
	sub_82CD72C8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82cd7c2c
	if (!cr6.gt) goto loc_82CD7C2C;
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CD7BE0:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r10,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r10.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x82cd7c14
	if (cr6.lt) goto loc_82CD7C14;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82CD7C14:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x82cd7be0
	if (cr6.lt) goto loc_82CD7BE0;
loc_82CD7C2C:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cd7c80
	if (!cr6.eq) goto loc_82CD7C80;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// stwx r3,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x82cd7c7c
	if (cr6.lt) goto loc_82CD7C7C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CD7C7C:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82CD7C80:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82cd7cac
	if (cr6.eq) goto loc_82CD7CAC;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
loc_82CD7C94:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82cd7c94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CD7C94;
loc_82CD7CAC:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd7cc0
	if (!cr6.eq) goto loc_82CD7CC0;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// b 0x82cd7cc4
	goto loc_82CD7CC4;
loc_82CD7CC0:
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_82CD7CC4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd7d04
	if (cr6.eq) goto loc_82CD7D04;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
loc_82CD7CDC:
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// stw r3,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// bdnz 0x82cd7cdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82CD7CDC;
loc_82CD7D04:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt cr6,0x82cd7d38
	if (cr6.lt) goto loc_82CD7D38;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82CD7D38:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82cd7d50
	if (!cr6.eq) goto loc_82CD7D50;
loc_82CD7D48:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x82cd7d70
	goto loc_82CD7D70;
loc_82CD7D50:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82cd7d48
	if (cr6.eq) goto loc_82CD7D48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82CD7D70:
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82572fa0
	ctx.lr = 0x82CD7D80;
	sub_82572FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82CD7D8C;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7D98;
	sub_82572FA0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x82572fa0
	ctx.lr = 0x82CD7DB0;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7DBC;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD7DC8"))) PPC_WEAK_FUNC(sub_82CD7DC8);
PPC_FUNC_IMPL(__imp__sub_82CD7DC8) {
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
	// bl 0x82cd7218
	ctx.lr = 0x82CD7DE0;
	sub_82CD7218(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd7e14
	if (cr6.eq) goto loc_82CD7E14;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82cd7e14
	if (!cr6.gt) goto loc_82CD7E14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82cd7e18
	if (!cr6.eq) goto loc_82CD7E18;
loc_82CD7E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82CD7E18:
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

__attribute__((alias("__imp__sub_82CD7E2C"))) PPC_WEAK_FUNC(sub_82CD7E2C);
PPC_FUNC_IMPL(__imp__sub_82CD7E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD7E30"))) PPC_WEAK_FUNC(sub_82CD7E30);
PPC_FUNC_IMPL(__imp__sub_82CD7E30) {
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
	// bl 0x82cd7218
	ctx.lr = 0x82CD7E48;
	sub_82CD7218(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82cd7e64
	if (!cr6.eq) goto loc_82CD7E64;
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
loc_82CD7E64:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
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

__attribute__((alias("__imp__sub_82CD7E84"))) PPC_WEAK_FUNC(sub_82CD7E84);
PPC_FUNC_IMPL(__imp__sub_82CD7E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82CD7E88"))) PPC_WEAK_FUNC(sub_82CD7E88);
PPC_FUNC_IMPL(__imp__sub_82CD7E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82CD7E90;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7EB4;
	sub_82572FA0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825832e8
	ctx.lr = 0x82CD7EBC;
	sub_825832E8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825832f0
	ctx.lr = 0x82CD7EC4;
	sub_825832F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd7ee8
	if (!cr6.eq) goto loc_82CD7EE8;
loc_82CD7ED0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7EDC;
	sub_82572FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82CD7EE8:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bge cr6,0x82cd7ed0
	if (!cr6.lt) goto loc_82CD7ED0;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd7ed0
	if (cr6.eq) goto loc_82CD7ED0;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82cd7ed0
	if (cr6.eq) goto loc_82CD7ED0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82cd7ed0
	if (cr6.eq) goto loc_82CD7ED0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd7b30
	ctx.lr = 0x82CD7F2C;
	sub_82CD7B30(ctx, base);
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(ctx.r28.u32, 1, xer);
	// blt cr6,0x82cd7f90
	if (cr6.lt) goto loc_82CD7F90;
	// beq cr6,0x82cd7f68
	if (cr6.eq) goto loc_82CD7F68;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// bge cr6,0x82cd7ed0
	if (!cr6.lt) goto loc_82CD7ED0;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r31,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r31.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r31,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd7880
	ctx.lr = 0x82CD7F64;
	sub_82CD7880(ctx, base);
	// b 0x82cd7fb8
	goto loc_82CD7FB8;
loc_82CD7F68:
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r31,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r31.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r31,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd7880
	ctx.lr = 0x82CD7F8C;
	sub_82CD7880(ctx, base);
	// b 0x82cd7fb8
	goto loc_82CD7FB8;
loc_82CD7F90:
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r31,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r31.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r31,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r31.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r31,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r31.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82cd73a0
	ctx.lr = 0x82CD7FB8;
	sub_82CD73A0(ctx, base);
loc_82CD7FB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82572fa0
	ctx.lr = 0x82CD7FC4;
	sub_82572FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD7FD0"))) PPC_WEAK_FUNC(sub_82CD7FD0);
PPC_FUNC_IMPL(__imp__sub_82CD7FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82CD7FD8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce778
	ctx.lr = 0x82CD7FE0;
	__savefpr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82cd801c
	if (!cr6.eq) goto loc_82CD801C;
	// mr r20,r14
	ctx.r20.u64 = ctx.r14.u64;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// b 0x82cd804c
	goto loc_82CD804C;
loc_82CD801C:
	// lwz r10,44(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r9,36(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82cd803c
	if (!cr6.eq) goto loc_82CD803C;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// b 0x82cd8048
	goto loc_82CD8048;
loc_82CD803C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82CD8048:
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CD804C:
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r14,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r14.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82CD805C;
	sub_82572FA0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82cd8310
	if (cr6.eq) goto loc_82CD8310;
	// bl 0x825832e8
	ctx.lr = 0x82CD806C;
	sub_825832E8(ctx, base);
	// clrlwi r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825832f0
	ctx.lr = 0x82CD8078;
	sub_825832F0(ctx, base);
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82cd7b30
	ctx.lr = 0x82CD8084;
	sub_82CD7B30(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82cd80ac
	if (!cr6.eq) goto loc_82CD80AC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,10912
	ctx.r11.s64 = ctx.r10.s64 + 10912;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82cd80b8
	goto loc_82CD80B8;
loc_82CD80AC:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82CD80B8:
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// subf. r27,r7,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r22,r5,r29
	ctx.r22.s64 = ctx.r29.s64 - ctx.r5.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r10,r22
	ctx.r11.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bge 0x82cd8100
	if (!cr0.lt) goto loc_82CD8100;
	// neg r23,r27
	ctx.r23.s64 = -ctx.r27.s64;
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
loc_82CD8100:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bge cr6,0x82cd8110
	if (!cr6.lt) goto loc_82CD8110;
	// neg r8,r22
	ctx.r8.s64 = -ctx.r22.s64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
loc_82CD8110:
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82cd8120
	if (cr6.gt) goto loc_82CD8120;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_82CD8120:
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82cd8130
	if (cr6.gt) goto loc_82CD8130;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82CD8130:
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// subf r11,r27,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r27.s64;
	// addic. r19,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r19.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// addi r21,r11,1
	ctx.r21.s64 = ctx.r11.s64 + 1;
	// ble 0x82cd8294
	if (!cr0.gt) goto loc_82CD8294;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// subf r18,r22,r8
	ctx.r18.s64 = ctx.r8.s64 - ctx.r22.s64;
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// lfs f30,21588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21588);
	ctx.f30.f64 = double(temp.f32);
	// li r20,-256
	ctx.r20.s64 = -256;
	// lfs f28,21700(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21700);
	ctx.f28.f64 = double(temp.f32);
loc_82CD8164:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// ble cr6,0x82cd8284
	if (!cr6.gt) goto loc_82CD8284;
	// add r26,r18,r29
	ctx.r26.u64 = ctx.r18.u64 + ctx.r29.u64;
	// clrlwi r25,r15,24
	ctx.r25.u64 = ctx.r15.u32 & 0xFF;
loc_82CD8178:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r31,r30,r27
	ctx.r31.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mullw r11,r26,r11
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r11.s32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r4,20(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lbzx r8,r10,r23
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f28
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x835ed648
	ctx.lr = 0x82CD81C4;
	sub_835ED648(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82cd8200
	if (cr6.eq) goto loc_82CD8200;
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lbz r10,107(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fctidz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lbz r9,103(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// or r8,r9,r20
	ctx.r8.u64 = ctx.r9.u64 | ctx.r20.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lbz r6,87(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// subfc r5,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// b 0x82cd8250
	goto loc_82CD8250;
loc_82CD8200:
	// lbz r8,3(r16)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r16.u32 + 3);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// lbz r7,1(r16)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r16.u32 + 1);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,2(r16)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r16.u32 + 2);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_82CD8250:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82cd8278
	if (cr6.eq) goto loc_82CD8278;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,20(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// bl 0x835ed5a8
	ctx.lr = 0x82CD8278;
	sub_835ED5A8(ctx, base);
loc_82CD8278:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r21
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r21.s32, xer);
	// blt cr6,0x82cd8178
	if (cr6.lt) goto loc_82CD8178;
loc_82CD8284:
	// addic. r17,r17,-1
	xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	cr0.compare<int32_t>(ctx.r17.s32, 0, xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x82cd8164
	if (!cr0.eq) goto loc_82CD8164;
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82CD8294:
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// lwz r4,20(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// sth r27,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r27.u16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r22,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r22.u16);
	// sth r21,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r21.u16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// sth r19,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r19.u16);
	// beq cr6,0x82cd82c8
	if (cr6.eq) goto loc_82CD82C8;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82cd7880
	ctx.lr = 0x82CD82C4;
	sub_82CD7880(ctx, base);
	// b 0x82cd82d4
	goto loc_82CD82D4;
loc_82CD82C8:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82cd73a0
	ctx.lr = 0x82CD82D4;
	sub_82CD73A0(ctx, base);
loc_82CD82D4:
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// std r14,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r14.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82CD82E4;
	sub_82572FA0(ctx, base);
	// addi r4,r24,64
	ctx.r4.s64 = ctx.r24.s64 + 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x831ce980
	ctx.lr = 0x82CD82F4;
	sub_831CE980(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r3,24(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// bl 0x835ee688
	ctx.lr = 0x82CD8304;
	sub_835EE688(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82572fa0
	ctx.lr = 0x82CD8310;
	sub_82572FA0(ctx, base);
loc_82CD8310:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82572fa0
	ctx.lr = 0x82CD831C;
	sub_82572FA0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce7c4
	ctx.lr = 0x82CD8328;
	__restfpr_28(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82CD832C"))) PPC_WEAK_FUNC(sub_82CD832C);
PPC_FUNC_IMPL(__imp__sub_82CD832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

