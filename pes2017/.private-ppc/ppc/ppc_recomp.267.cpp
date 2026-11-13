#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830A073C"))) PPC_WEAK_FUNC(sub_830A073C);
PPC_FUNC_IMPL(__imp__sub_830A073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0740"))) PPC_WEAK_FUNC(sub_830A0740);
PPC_FUNC_IMPL(__imp__sub_830A0740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x830A0748;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// srawi. r11,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x830a0858
	if (cr0.eq) goto loc_830A0858;
	// addi r28,r3,456
	ctx.r28.s64 = ctx.r3.s64 + 456;
	// addi r24,r31,12
	ctx.r24.s64 = ctx.r31.s64 + 12;
	// addi r23,r28,12
	ctx.r23.s64 = ctx.r28.s64 + 12;
	// addi r29,r3,420
	ctx.r29.s64 = ctx.r3.s64 + 420;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_830A0790:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r24,-4
	ctx.r3.s64 = ctx.r24.s64 + -4;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r23,-4
	ctx.r27.s64 = ctx.r23.s64 + -4;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r4.u32);
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r9.u8);
loc_830A07F0:
	// lwzu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// stwu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// bdnz 0x830a07f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A07F0;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A0810;
	sub_830A2D48(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r7,r22,24
	ctx.r7.u64 = ctx.r22.u32 & 0xFF;
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lbz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// or r22,r8,r7
	ctx.r22.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stb r6,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r6.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_830A0840:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a0840
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A0840;
	// addic. r19,r19,-1
	xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bne 0x830a0790
	if (!cr0.eq) goto loc_830A0790;
loc_830A0858:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0864"))) PPC_WEAK_FUNC(sub_830A0864);
PPC_FUNC_IMPL(__imp__sub_830A0864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0868"))) PPC_WEAK_FUNC(sub_830A0868);
PPC_FUNC_IMPL(__imp__sub_830A0868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830A0870;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// srawi. r21,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r21.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq 0x830a091c
	if (cr0.eq) goto loc_830A091C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_830A08A8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A08FC;
	sub_830A2D48(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a091c
	if (cr6.eq) goto loc_830A091C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// blt cr6,0x830a08a8
	if (cr6.lt) goto loc_830A08A8;
loc_830A091C:
	// addic r11,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// subfe r3,r11,r22
	temp.u8 = (~ctx.r11.u32 + ctx.r22.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r22.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r22.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A092C"))) PPC_WEAK_FUNC(sub_830A092C);
PPC_FUNC_IMPL(__imp__sub_830A092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0930"))) PPC_WEAK_FUNC(sub_830A0930);
PPC_FUNC_IMPL(__imp__sub_830A0930) {
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
	ctx.lr = 0x830A0938;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// srawi. r18,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r18.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r18.s32, 0, xer);
	// beq 0x830a0a50
	if (cr0.eq) goto loc_830A0A50;
	// addi r27,r3,456
	ctx.r27.s64 = ctx.r3.s64 + 456;
	// addi r24,r31,12
	ctx.r24.s64 = ctx.r31.s64 + 12;
	// addi r23,r27,12
	ctx.r23.s64 = ctx.r27.s64 + 12;
	// addi r29,r3,420
	ctx.r29.s64 = ctx.r3.s64 + 420;
	// li r26,0
	ctx.r26.s64 = 0;
loc_830A0980:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r24,-4
	ctx.r3.s64 = ctx.r24.s64 + -4;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r23,-4
	ctx.r28.s64 = ctx.r23.s64 + -4;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r4,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r4.u32);
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r9.u8);
loc_830A09E0:
	// lwzu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// bdnz 0x830a09e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A09E0;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A0A00;
	sub_830A2D48(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lbz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r7,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r7.u8);
loc_830A0A24:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a0a24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A0A24;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a0a50
	if (cr6.eq) goto loc_830A0A50;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r20,r18
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r18.u32, xer);
	// blt cr6,0x830a0980
	if (cr6.lt) goto loc_830A0980;
loc_830A0A50:
	// addic r11,r19,-1
	xer.ca = ctx.r19.u32 > 0;
	ctx.r11.s64 = ctx.r19.s64 + -1;
	// subfe r3,r11,r19
	temp.u8 = (~ctx.r11.u32 + ctx.r19.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r19.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r19.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0A60"))) PPC_WEAK_FUNC(sub_830A0A60);
PPC_FUNC_IMPL(__imp__sub_830A0A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830A0A68;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r28,r4,8
	ctx.r28.s64 = ctx.r4.s64 + 8;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// srawi r4,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x830fe218
	ctx.lr = 0x830A0A98;
	sub_830FE218(ctx, base);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi. r30,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r6.s32 >> 4;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x830a0b38
	if (cr0.eq) goto loc_830A0B38;
loc_830A0AB4:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// divwu r7,r10,r30
	ctx.r7.u32 = PPCDivide(ctx.r10.u32, ctx.r30.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// subf r31,r6,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r6.s64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r30,0
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A0B20;
	sub_830A2D48(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a0b44
	if (!cr6.eq) goto loc_830A0B44;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r30
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r30.u32, xer);
	// blt cr6,0x830a0ab4
	if (cr6.lt) goto loc_830A0AB4;
loc_830A0B38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830A0B44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0B50"))) PPC_WEAK_FUNC(sub_830A0B50);
PPC_FUNC_IMPL(__imp__sub_830A0B50) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830a0b84
	if (cr6.eq) goto loc_830A0B84;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830a0b84
	if (cr6.eq) goto loc_830A0B84;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// bl 0x830abf40
	ctx.lr = 0x830A0B80;
	sub_830ABF40(ctx, base);
	// b 0x830a0bd0
	goto loc_830A0BD0;
loc_830A0B84:
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a0bd0
	if (cr6.eq) goto loc_830A0BD0;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830A0BA4;
	sub_82595150(ctx, base);
	// lwz r30,284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830a0bc0
	if (cr6.eq) goto loc_830A0BC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ac078
	ctx.lr = 0x830A0BB8;
	sub_830AC078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A0BC0;
	sub_82416268(ctx, base);
loc_830A0BC0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830A0BC8;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_830A0BD0:
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

__attribute__((alias("__imp__sub_830A0BE8"))) PPC_WEAK_FUNC(sub_830A0BE8);
PPC_FUNC_IMPL(__imp__sub_830A0BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A0BF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a0df0
	if (cr6.eq) goto loc_830A0DF0;
	// bl 0x830ac000
	ctx.lr = 0x830A0C08;
	sub_830AC000(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a0c20
	if (!cr6.eq) goto loc_830A0C20;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A0C20:
	// lbz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a0cb4
	if (cr6.eq) goto loc_830A0CB4;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac030
	ctx.lr = 0x830A0C34;
	sub_830AC030(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac030
	ctx.lr = 0x830A0C40;
	sub_830AC030(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac060
	ctx.lr = 0x830A0C50;
	sub_830AC060(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac048
	ctx.lr = 0x830A0C60;
	sub_830AC048(ctx, base);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x830a7680
	ctx.lr = 0x830A0C6C;
	sub_830A7680(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x830a7748
	ctx.lr = 0x830A0C7C;
	sub_830A7748(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac060
	ctx.lr = 0x830A0C88;
	sub_830AC060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac048
	ctx.lr = 0x830A0C98;
	sub_830AC048(ctx, base);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x830a7680
	ctx.lr = 0x830A0CA4;
	sub_830A7680(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x830a76a0
	ctx.lr = 0x830A0CB4;
	sub_830A76A0(ctx, base);
loc_830A0CB4:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x830ac030
	ctx.lr = 0x830A0CC0;
	sub_830AC030(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a0d9c
	if (cr6.eq) goto loc_830A0D9C;
loc_830A0CC8:
	// lbz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 280);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a0d34
	if (cr6.eq) goto loc_830A0D34;
	// bl 0x830ac060
	ctx.lr = 0x830A0CE0;
	sub_830AC060(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac048
	ctx.lr = 0x830A0CF0;
	sub_830AC048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x830a64d8
	ctx.lr = 0x830A0D00;
	sub_830A64D8(ctx, base);
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830ac060
	ctx.lr = 0x830A0D10;
	sub_830AC060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac048
	ctx.lr = 0x830A0D20;
	sub_830AC048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x830a5d70
	ctx.lr = 0x830A0D30;
	sub_830A5D70(ctx, base);
	// b 0x830a0d88
	goto loc_830A0D88;
loc_830A0D34:
	// bl 0x830ac060
	ctx.lr = 0x830A0D38;
	sub_830AC060(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac048
	ctx.lr = 0x830A0D48;
	sub_830AC048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x830a64a8
	ctx.lr = 0x830A0D58;
	sub_830A64A8(ctx, base);
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830ac060
	ctx.lr = 0x830A0D68;
	sub_830AC060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x830ac048
	ctx.lr = 0x830A0D78;
	sub_830AC048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x830a5d40
	ctx.lr = 0x830A0D88;
	sub_830A5D40(ctx, base);
loc_830A0D88:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// bl 0x830ac030
	ctx.lr = 0x830A0D94;
	sub_830AC030(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x830a0cc8
	if (cr6.lt) goto loc_830A0CC8;
loc_830A0D9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a4cf8
	ctx.lr = 0x830A0DA4;
	sub_830A4CF8(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a0df0
	if (cr6.eq) goto loc_830A0DF0;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830A0DC4;
	sub_82595150(ctx, base);
	// lwz r30,284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830a0de0
	if (cr6.eq) goto loc_830A0DE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ac078
	ctx.lr = 0x830A0DD8;
	sub_830AC078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A0DE0;
	sub_82416268(ctx, base);
loc_830A0DE0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830A0DE8;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
loc_830A0DF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0DFC"))) PPC_WEAK_FUNC(sub_830A0DFC);
PPC_FUNC_IMPL(__imp__sub_830A0DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0E00"))) PPC_WEAK_FUNC(sub_830A0E00);
PPC_FUNC_IMPL(__imp__sub_830A0E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x830a0e6c
	if (cr0.eq) goto loc_830A0E6C;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
loc_830A0E28:
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830A0E30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x830a0e54
	if (cr6.eq) goto loc_830A0E54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a0e30
	if (cr6.eq) goto loc_830A0E30;
loc_830A0E54:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// blt cr6,0x830a0e28
	if (cr6.lt) goto loc_830A0E28;
loc_830A0E6C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A0E74"))) PPC_WEAK_FUNC(sub_830A0E74);
PPC_FUNC_IMPL(__imp__sub_830A0E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0E78"))) PPC_WEAK_FUNC(sub_830A0E78);
PPC_FUNC_IMPL(__imp__sub_830A0E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x830a0e9c
	if (cr6.lt) goto loc_830A0E9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830A0E9C:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x830ac948
	sub_830AC948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A0EB0"))) PPC_WEAK_FUNC(sub_830A0EB0);
PPC_FUNC_IMPL(__imp__sub_830A0EB0) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x830a0ee8
	if (cr6.lt) goto loc_830A0EE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830a0f00
	goto loc_830A0F00;
loc_830A0EE8:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A0F00;
	sub_830AC948(ctx, base);
loc_830A0F00:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a0f24
	if (!cr6.eq) goto loc_830A0F24;
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
loc_830A0F24:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83767d18
	ctx.lr = 0x830A0F2C;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_830A0F50"))) PPC_WEAK_FUNC(sub_830A0F50);
PPC_FUNC_IMPL(__imp__sub_830A0F50) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830a02e0
	ctx.lr = 0x830A0F78;
	sub_830A02E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aca98
	ctx.lr = 0x830A0F80;
	sub_830ACA98(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// bl 0x830acb58
	ctx.lr = 0x830A0F88;
	sub_830ACB58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830A0F98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830acab8
	ctx.lr = 0x830A0FA4;
	sub_830ACAB8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830a0fc0
	if (cr6.eq) goto loc_830A0FC0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830a0fc4
	goto loc_830A0FC4;
loc_830A0FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830A0FC4:
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

__attribute__((alias("__imp__sub_830A0FDC"))) PPC_WEAK_FUNC(sub_830A0FDC);
PPC_FUNC_IMPL(__imp__sub_830A0FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A0FE0"))) PPC_WEAK_FUNC(sub_830A0FE0);
PPC_FUNC_IMPL(__imp__sub_830A0FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A0FE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A1020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a504f8
	ctx.lr = 0x830A1028;
	sub_82A504F8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x830A1040;
	sub_83102DB0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830aafd0
	ctx.lr = 0x830A1054;
	sub_830AAFD0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// bl 0x83102db0
	ctx.lr = 0x830A1068;
	sub_83102DB0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a1094
	if (cr6.lt) goto loc_830A1094;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830a1094
	if (!cr6.lt) goto loc_830A1094;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a1094
	if (cr6.lt) goto loc_830A1094;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a1098
	if (cr6.lt) goto loc_830A1098;
loc_830A1094:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A1098:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a10cc
	if (!cr6.eq) goto loc_830A10CC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a10cc
	if (cr6.eq) goto loc_830A10CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830acab8
	ctx.lr = 0x830A10B8;
	sub_830ACAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A10CC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x8309ff20
	ctx.lr = 0x830A10DC;
	sub_8309FF20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A10E8"))) PPC_WEAK_FUNC(sub_830A10E8);
PPC_FUNC_IMPL(__imp__sub_830A10E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A10F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x830a02e0
	ctx.lr = 0x830A1110;
	sub_830A02E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x830a0148
	ctx.lr = 0x830A115C;
	sub_830A0148(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830a1204
	if (cr6.eq) goto loc_830A1204;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x830a117c
	if (!cr6.eq) goto loc_830A117C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_830A117C:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a11a0
	if (cr6.eq) goto loc_830A11A0;
	// srawi r9,r31,31
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 31;
	// subfc r8,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// adde r11,r7,r9
	temp.u8 = (ctx.r7.u32 + ctx.r9.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830a11bc
	goto loc_830A11BC;
loc_830A11A0:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a1204
	if (cr6.eq) goto loc_830A1204;
	// srawi r9,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r31,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r7,r31,r11
	xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r31.s64;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_830A11BC:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830a11d8
	if (cr6.eq) goto loc_830A11D8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830A11D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830acab8
	ctx.lr = 0x830A11E0;
	sub_830ACAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a11f8
	if (cr6.eq) goto loc_830A11F8;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830A11F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830A1204:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A1210"))) PPC_WEAK_FUNC(sub_830A1210);
PPC_FUNC_IMPL(__imp__sub_830A1210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A1218;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a02e0
	ctx.lr = 0x830A1234;
	sub_830A02E0(ctx, base);
	// lwz r10,552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// lwz r9,548(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,0
	ctx.r29.s64 = 0;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1274
	if (!cr6.lt) goto loc_830A1274;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x830a1280
	if (!cr6.eq) goto loc_830A1280;
loc_830A1274:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830A1280:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x830a12d4
	if (cr0.eq) goto loc_830A12D4;
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A12A0:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x830a12bc
	if (cr6.eq) goto loc_830A12BC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x830a12d0
	if (cr6.eq) goto loc_830A12D0;
loc_830A12BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x830a12a0
	if (cr6.lt) goto loc_830A12A0;
	// b 0x830a12d4
	goto loc_830A12D4;
loc_830A12D0:
	// li r29,1
	ctx.r29.s64 = 1;
loc_830A12D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830acab8
	ctx.lr = 0x830A12DC;
	sub_830ACAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a12f4
	if (cr6.eq) goto loc_830A12F4;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_830A12F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A1300"))) PPC_WEAK_FUNC(sub_830A1300);
PPC_FUNC_IMPL(__imp__sub_830A1300) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// srawi r6,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x830a1344
	if (!cr6.lt) goto loc_830A1344;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A1344;
	sub_830AC948(ctx, base);
loc_830A1344:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830a8318
	ctx.lr = 0x830A134C;
	sub_830A8318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A135C"))) PPC_WEAK_FUNC(sub_830A135C);
PPC_FUNC_IMPL(__imp__sub_830A135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A1360"))) PPC_WEAK_FUNC(sub_830A1360);
PPC_FUNC_IMPL(__imp__sub_830A1360) {
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
	// bl 0x830a8268
	ctx.lr = 0x830A1380;
	sub_830A8268(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a1398
	if (cr6.eq) goto loc_830A1398;
	// bl 0x82416268
	ctx.lr = 0x830A1394;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830A1398:
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

__attribute__((alias("__imp__sub_830A13B0"))) PPC_WEAK_FUNC(sub_830A13B0);
PPC_FUNC_IMPL(__imp__sub_830A13B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830A13B8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r23,0
	ctx.r23.s64 = 0;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// addi r25,r3,24
	ctx.r25.s64 = ctx.r3.s64 + 24;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1418
	if (!cr6.lt) goto loc_830A1418;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A1418;
	sub_830AC948(ctx, base);
loc_830A1418:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830a8410
	ctx.lr = 0x830A1420;
	sub_830A8410(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r24,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r9.s32 >> 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x830fe218
	ctx.lr = 0x830A1440;
	sub_830FE218(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830a1520
	if (cr6.eq) goto loc_830A1520;
loc_830A144C:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// twllei r24,0
	// divwu r10,r11,r24
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r24.u32);
	// mullw r9,r10,r24
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x830a14dc
	if (cr6.eq) goto loc_830A14DC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A14C8;
	sub_830A2D48(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a14ec
	if (!cr6.eq) goto loc_830A14EC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830A14DC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, xer);
	// blt cr6,0x830a144c
	if (cr6.lt) goto loc_830A144C;
	// b 0x830a1520
	goto loc_830A1520;
loc_830A14EC:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1520
	if (!cr6.lt) goto loc_830A1520;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac9b8
	ctx.lr = 0x830A1520;
	sub_830AC9B8(ctx, base);
loc_830A1520:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a1598
	if (!cr6.eq) goto loc_830A1598;
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// ble cr6,0x830a1598
	if (!cr6.gt) goto loc_830A1598;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A1590;
	sub_830A2D48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830A1598:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A15A4"))) PPC_WEAK_FUNC(sub_830A15A4);
PPC_FUNC_IMPL(__imp__sub_830A15A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A15A8"))) PPC_WEAK_FUNC(sub_830A15A8);
PPC_FUNC_IMPL(__imp__sub_830A15A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830A15B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r23,0
	ctx.r23.s64 = 0;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// addi r25,r3,24
	ctx.r25.s64 = ctx.r3.s64 + 24;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1610
	if (!cr6.lt) goto loc_830A1610;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A1610;
	sub_830AC948(ctx, base);
loc_830A1610:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830a8410
	ctx.lr = 0x830A1618;
	sub_830A8410(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r24,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r24.s64 = ctx.r9.s32 >> 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x830fe218
	ctx.lr = 0x830A1638;
	sub_830FE218(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x830a177c
	if (cr6.eq) goto loc_830A177C;
loc_830A1644:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// twllei r24,0
	// divwu r10,r11,r24
	ctx.r10.u32 = PPCDivide(ctx.r11.u32, ctx.r24.u32);
	// mullw r9,r10,r24
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x830a1738
	if (cr6.eq) goto loc_830A1738;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r9,r3,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r31,456
	ctx.r9.s64 = ctx.r31.s64 + 456;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r29,r9,8
	ctx.r29.s64 = ctx.r9.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r4.u32);
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r7,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r7.u8);
loc_830A16D0:
	// lwzu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
	// bdnz 0x830a16d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A16D0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A16F0;
	sub_830A2D48(ctx, base);
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r31,420
	ctx.r11.s64 = ctx.r31.s64 + 420;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lbz r8,428(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 428);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stb r8,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r8.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830A171C:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a171c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A171C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a1748
	if (!cr6.eq) goto loc_830A1748;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830A1738:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, xer);
	// blt cr6,0x830a1644
	if (cr6.lt) goto loc_830A1644;
	// b 0x830a177c
	goto loc_830A177C;
loc_830A1748:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a177c
	if (!cr6.lt) goto loc_830A177C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac9b8
	ctx.lr = 0x830A177C;
	sub_830AC9B8(ctx, base);
loc_830A177C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a17f4
	if (!cr6.eq) goto loc_830A17F4;
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// ble cr6,0x830a17f4
	if (!cr6.gt) goto loc_830A17F4;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A17EC;
	sub_830A2D48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830A17F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A1800"))) PPC_WEAK_FUNC(sub_830A1800);
PPC_FUNC_IMPL(__imp__sub_830A1800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x830A1808;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r17,0
	ctx.r17.s64 = 0;
	// srawi r28,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r28.s64 = ctx.r9.s32 >> 4;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// bl 0x830fe218
	ctx.lr = 0x830A184C;
	sub_830FE218(ctx, base);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x830a1a38
	if (cr6.eq) goto loc_830A1A38;
	// addi r20,r31,24
	ctx.r20.s64 = ctx.r31.s64 + 24;
	// b 0x830a1864
	goto loc_830A1864;
loc_830A1860:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_830A1864:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// twllei r28,0
	// divwu r9,r10,r28
	ctx.r9.u32 = PPCDivide(ctx.r10.u32, ctx.r28.u32);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mullw r6,r9,r28
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x830a18ec
	if (cr6.eq) goto loc_830A18EC;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_830A18EC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1918
	if (!cr6.lt) goto loc_830A1918;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A1918;
	sub_830AC948(ctx, base);
loc_830A1918:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a47e40
	ctx.lr = 0x830A1920;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a19f0
	if (!cr6.eq) goto loc_830A19F0;
	// lwz r8,4(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,456
	ctx.r10.s64 = ctx.r31.s64 + 456;
	// addi r11,r24,8
	ctx.r11.s64 = ctx.r24.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r8,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lbz r7,8(r24)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8);
	// stb r7,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r7.u8);
loc_830A1950:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830a1950
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A1950;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A197C;
	sub_830A2D48(ctx, base);
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r31,420
	ctx.r11.s64 = ctx.r31.s64 + 420;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r9,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lbz r8,428(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 428);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stb r8,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r8.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830A19A8:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a19a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A19A8;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a19e4
	if (!cr6.lt) goto loc_830A19E4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac988
	ctx.lr = 0x830A19E4;
	sub_830AC988(ctx, base);
loc_830A19E4:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a1a08
	if (!cr6.eq) goto loc_830A1A08;
loc_830A19F0:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplw cr6,r18,r28
	cr6.compare<uint32_t>(ctx.r18.u32, ctx.r28.u32, xer);
	// blt cr6,0x830a1860
	if (cr6.lt) goto loc_830A1860;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
loc_830A1A08:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1a38
	if (!cr6.lt) goto loc_830A1A38;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac9b8
	ctx.lr = 0x830A1A38;
	sub_830AC9B8(ctx, base);
loc_830A1A38:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A1A44"))) PPC_WEAK_FUNC(sub_830A1A44);
PPC_FUNC_IMPL(__imp__sub_830A1A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A1A48"))) PPC_WEAK_FUNC(sub_830A1A48);
PPC_FUNC_IMPL(__imp__sub_830A1A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830A1A50;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r23,0
	ctx.r23.s64 = 0;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1aac
	if (!cr6.lt) goto loc_830A1AAC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A1AAC;
	sub_830AC948(ctx, base);
loc_830A1AAC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a47e40
	ctx.lr = 0x830A1AB4;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a1acc
	if (cr6.eq) goto loc_830A1ACC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_830A1ACC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1b04
	if (!cr6.lt) goto loc_830A1B04;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A1B04;
	sub_830AC948(ctx, base);
loc_830A1B04:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x830a8318
	ctx.lr = 0x830A1B0C;
	sub_830A8318(ctx, base);
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bgt cr6,0x830a1b30
	if (cr6.gt) goto loc_830A1B30;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a0a60
	ctx.lr = 0x830A1B2C;
	sub_830A0A60(ctx, base);
	// b 0x830a1b5c
	goto loc_830A1B5C;
loc_830A1B30:
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bgt cr6,0x830a1b58
	if (cr6.gt) goto loc_830A1B58;
	// bl 0x830a0498
	ctx.lr = 0x830A1B54;
	sub_830A0498(ctx, base);
	// b 0x830a1b5c
	goto loc_830A1B5C;
loc_830A1B58:
	// bl 0x830a0868
	ctx.lr = 0x830A1B5C;
	sub_830A0868(ctx, base);
loc_830A1B5C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a1bec
	if (cr6.eq) goto loc_830A1BEC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1ba0
	if (!cr6.lt) goto loc_830A1BA0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac988
	ctx.lr = 0x830A1BA0;
	sub_830AC988(ctx, base);
loc_830A1BA0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a1300
	ctx.lr = 0x830A1BB4;
	sub_830A1300(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ac2f8
	ctx.lr = 0x830A1BC8;
	sub_830AC2F8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4472(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x830ac350
	ctx.lr = 0x830A1BEC;
	sub_830AC350(ctx, base);
loc_830A1BEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A1BF8"))) PPC_WEAK_FUNC(sub_830A1BF8);
PPC_FUNC_IMPL(__imp__sub_830A1BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A1C00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// srawi. r26,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r26.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// beq 0x830a1cbc
	if (cr0.eq) goto loc_830A1CBC;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_830A1C34:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x830a1c68
	if (cr6.eq) goto loc_830A1C68;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_830A1C68:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1c98
	if (!cr6.lt) goto loc_830A1C98;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A1C98;
	sub_830AC948(ctx, base);
loc_830A1C98:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a47e40
	ctx.lr = 0x830A1CA0;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a1cc8
	if (cr6.eq) goto loc_830A1CC8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// blt cr6,0x830a1c34
	if (cr6.lt) goto loc_830A1C34;
loc_830A1CBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A1CC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A1CD4"))) PPC_WEAK_FUNC(sub_830A1CD4);
PPC_FUNC_IMPL(__imp__sub_830A1CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A1CD8"))) PPC_WEAK_FUNC(sub_830A1CD8);
PPC_FUNC_IMPL(__imp__sub_830A1CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A1CE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r6,8
	ctx.r31.s64 = ctx.r6.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830a1d90
	if (cr0.eq) goto loc_830A1D90;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830A1D10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x830a1d40
	if (cr6.eq) goto loc_830A1D40;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_830A1D40:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1d70
	if (!cr6.lt) goto loc_830A1D70;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x830ac988
	ctx.lr = 0x830A1D70;
	sub_830AC988(ctx, base);
loc_830A1D70:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x830a1d10
	if (cr6.lt) goto loc_830A1D10;
loc_830A1D90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A1D98"))) PPC_WEAK_FUNC(sub_830A1D98);
PPC_FUNC_IMPL(__imp__sub_830A1D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A1DA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a47e00
	ctx.lr = 0x830A1DC0;
	sub_82A47E00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x830a1eac
	if (cr6.gt) goto loc_830A1EAC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830a1e10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A1E10;
	// bdzf 4*cr6+eq,0x830a1e18
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A1E18;
	// bdzf 4*cr6+eq,0x830a1e28
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A1E28;
	// bdzf 4*cr6+eq,0x830a1e4c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A1E4C;
	// bdzf 4*cr6+eq,0x830a1e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A1E70;
	// bdzf 4*cr6+eq,0x830a1e70
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A1E70;
	// bne cr6,0x830a1e90
	if (!cr6.eq) goto loc_830A1E90;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a0f50
	ctx.lr = 0x830A1E04;
	sub_830A0F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A1E10:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x830a1e94
	goto loc_830A1E94;
loc_830A1E18:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A1E28:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a10e8
	ctx.lr = 0x830A1E40;
	sub_830A10E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A1E4C:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a10e8
	ctx.lr = 0x830A1E64;
	sub_830A10E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A1E70:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a1210
	ctx.lr = 0x830A1E84;
	sub_830A1210(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A1E90:
	// li r7,0
	ctx.r7.s64 = 0;
loc_830A1E94:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a0fe0
	ctx.lr = 0x830A1EA8;
	sub_830A0FE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830A1EAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A1EB8"))) PPC_WEAK_FUNC(sub_830A1EB8);
PPC_FUNC_IMPL(__imp__sub_830A1EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x830A1EC0;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
	// srawi r27,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r9.s32 >> 4;
	// bl 0x830a1bf8
	ctx.lr = 0x830A1F04;
	sub_830A1BF8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830a1fdc
	if (cr6.eq) goto loc_830A1FDC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a1cd8
	ctx.lr = 0x830A1F24;
	sub_830A1CD8(ctx, base);
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// ble cr6,0x830a1fdc
	if (!cr6.gt) goto loc_830A1FDC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1f64
	if (!cr6.lt) goto loc_830A1F64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A1F64;
	sub_830AC948(ctx, base);
loc_830A1F64:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x830a8410
	ctx.lr = 0x830A1F6C;
	sub_830A8410(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x830a1fdc
	if (!cr6.lt) goto loc_830A1FDC;
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x830a1fb0
	if (cr6.eq) goto loc_830A1FB0;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_830A1FB0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a1fdc
	if (!cr6.lt) goto loc_830A1FDC;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac988
	ctx.lr = 0x830A1FDC;
	sub_830AC988(ctx, base);
loc_830A1FDC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x830fe218
	ctx.lr = 0x830A1FE8;
	sub_830FE218(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// std r16,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r16.u64);
	// beq cr6,0x830a21f4
	if (cr6.eq) goto loc_830A21F4;
	// addi r24,r31,24
	ctx.r24.s64 = ctx.r31.s64 + 24;
loc_830A2008:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// twllei r27,0
	// divwu r9,r11,r27
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r27.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mullw r6,r9,r27
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// subf r9,r6,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x830a2090
	if (cr6.eq) goto loc_830A2090;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830A2090:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r7,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a20bc
	if (!cr6.lt) goto loc_830A20BC;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A20BC;
	sub_830AC948(ctx, base);
loc_830A20BC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82a47e40
	ctx.lr = 0x830A20C4;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a2300
	if (!cr6.eq) goto loc_830A2300;
	// lwz r8,4(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,456
	ctx.r10.s64 = ctx.r31.s64 + 456;
	// addi r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r8,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lbz r7,8(r22)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r22.u32 + 8);
	// stb r7,464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 464, ctx.r7.u8);
loc_830A20F4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830a20f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A20F4;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a2d48
	ctx.lr = 0x830A2120;
	sub_830A2D48(ctx, base);
	// lwz r9,424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// addi r11,r31,420
	ctx.r11.s64 = ctx.r31.s64 + 420;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r9,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r9.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lbz r8,428(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 428);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stb r8,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r8.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_830A214C:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a214c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A214C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a2188
	if (!cr6.lt) goto loc_830A2188;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac988
	ctx.lr = 0x830A2188;
	sub_830AC988(ctx, base);
loc_830A2188:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r3,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// addi r9,r3,-32
	ctx.r9.s64 = ctx.r3.s64 + -32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830a21a0
	if (cr6.eq) goto loc_830A21A0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_830A21A0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r7,r21,24
	ctx.r7.u64 = ctx.r21.u32 & 0xFF;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// beq cr6,0x830a2304
	if (cr6.eq) goto loc_830A2304;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a21f4
	if (!cr6.lt) goto loc_830A21F4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac9b8
	ctx.lr = 0x830A21F4;
	sub_830AC9B8(ctx, base);
loc_830A21F4:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a2314
	if (!cr6.eq) goto loc_830A2314;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// ble cr6,0x830a2314
	if (!cr6.gt) goto loc_830A2314;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// bl 0x830a1cd8
	ctx.lr = 0x830A2220;
	sub_830A1CD8(ctx, base);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830a2314
	if (cr6.eq) goto loc_830A2314;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
loc_830A2230:
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x830a2244
	if (cr6.eq) goto loc_830A2244;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_830A2244:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// slw r8,r19,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830a22c0
	if (cr6.eq) goto loc_830A22C0;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x830a2294
	if (cr6.eq) goto loc_830A2294;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_830A2294:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a22c0
	if (!cr6.lt) goto loc_830A22C0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac988
	ctx.lr = 0x830A22C0;
	sub_830AC988(ctx, base);
loc_830A22C0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x830a2230
	if (cr6.lt) goto loc_830A2230;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bge cr6,0x830a2314
	if (!cr6.lt) goto loc_830A2314;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a1800
	ctx.lr = 0x830A22F8;
	sub_830A1800(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_830A2300:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830A2304:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r27
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r27.u32, xer);
	// blt cr6,0x830a2008
	if (cr6.lt) goto loc_830A2008;
	// b 0x830a21f4
	goto loc_830A21F4;
loc_830A2314:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A2320"))) PPC_WEAK_FUNC(sub_830A2320);
PPC_FUNC_IMPL(__imp__sub_830A2320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A2328;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// srawi r6,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x830a2384
	if (!cr6.lt) goto loc_830A2384;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A2384;
	sub_830AC948(ctx, base);
loc_830A2384:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a47e40
	ctx.lr = 0x830A238C;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a23a4
	if (cr6.eq) goto loc_830A23A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A23A4:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a1eb8
	ctx.lr = 0x830A23C4;
	sub_830A1EB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2454
	if (cr6.eq) goto loc_830A2454;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a2408
	if (!cr6.lt) goto loc_830A2408;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac988
	ctx.lr = 0x830A2408;
	sub_830AC988(ctx, base);
loc_830A2408:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a1300
	ctx.lr = 0x830A241C;
	sub_830A1300(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r31,r29,40
	ctx.r31.s64 = ctx.r29.s64 + 40;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ac2f8
	ctx.lr = 0x830A2430;
	sub_830AC2F8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4472(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4472);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x830ac350
	ctx.lr = 0x830A2454;
	sub_830AC350(ctx, base);
loc_830A2454:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A2460"))) PPC_WEAK_FUNC(sub_830A2460);
PPC_FUNC_IMPL(__imp__sub_830A2460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830A2468;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A2490;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x830a24d0
	if (!cr6.eq) goto loc_830A24D0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A24B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830A24C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830a24d4
	if (cr6.eq) goto loc_830A24D4;
loc_830A24D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A24D4:
	// clrlwi r22,r11,24
	ctx.r22.u64 = ctx.r11.u32 & 0xFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x830a25b0
	if (cr6.eq) goto loc_830A25B0;
loc_830A24E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A24FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A2510;
	sub_831CE980(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830A2524;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a2578
	if (cr6.eq) goto loc_830A2578;
loc_830A2534:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A254C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x830a1d98
	ctx.lr = 0x830A2560;
	sub_830A1D98(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830a25bc
	if (cr6.eq) goto loc_830A25BC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x830a2534
	if (cr6.lt) goto loc_830A2534;
loc_830A2578:
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2594
	if (cr6.eq) goto loc_830A2594;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A2594;
	sub_831CE980(ctx, base);
loc_830A2594:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830A2598:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a25c4
	if (!cr6.eq) goto loc_830A25C4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, xer);
	// blt cr6,0x830a24e4
	if (cr6.lt) goto loc_830A24E4;
loc_830A25B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_830A25BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830a2598
	goto loc_830A2598;
loc_830A25C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A25D0"))) PPC_WEAK_FUNC(sub_830A25D0);
PPC_FUNC_IMPL(__imp__sub_830A25D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A25D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a2624
	if (!cr6.lt) goto loc_830A2624;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A2620;
	sub_830AC948(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830A2624:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a47e40
	ctx.lr = 0x830A262C;
	sub_82A47E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2664
	if (cr6.eq) goto loc_830A2664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a8318
	ctx.lr = 0x830A2640;
	sub_830A8318(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830a82e0
	ctx.lr = 0x830A264C;
	sub_830A82E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2664
	if (cr6.eq) goto loc_830A2664;
loc_830A2658:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A2664:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a8350
	ctx.lr = 0x830A266C;
	sub_830A8350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x830a2698
	if (!cr6.lt) goto loc_830A2698;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a8350
	ctx.lr = 0x830A2680;
	sub_830A8350(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x830fe280
	ctx.lr = 0x830A268C;
	sub_830FE280(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2658
	if (cr6.eq) goto loc_830A2658;
loc_830A2698:
	// lbz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a26bc
	if (cr6.eq) goto loc_830A26BC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0070
	ctx.lr = 0x830A26B0;
	sub_830A0070(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2658
	if (cr6.eq) goto loc_830A2658;
loc_830A26BC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a2460
	ctx.lr = 0x830A26D0;
	sub_830A2460(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A26E4"))) PPC_WEAK_FUNC(sub_830A26E4);
PPC_FUNC_IMPL(__imp__sub_830A26E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A26E8"))) PPC_WEAK_FUNC(sub_830A26E8);
PPC_FUNC_IMPL(__imp__sub_830A26E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A26F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x830a25d0
	ctx.lr = 0x830A2718;
	sub_830A25D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2894
	if (cr6.eq) goto loc_830A2894;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a2758
	if (!cr6.lt) goto loc_830A2758;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A2758;
	sub_830AC948(ctx, base);
loc_830A2758:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830a8318
	ctx.lr = 0x830A2760;
	sub_830A8318(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x830a285c
	if (cr6.gt) goto loc_830A285C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830a27b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A27B4;
	// bdzf 4*cr6+eq,0x830a27d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A27D8;
	// bdzf 4*cr6+eq,0x830a2804
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A2804;
	// bdzf 4*cr6+eq,0x830a2830
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A2830;
	// bne cr6,0x830a2894
	if (!cr6.eq) goto loc_830A2894;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0498
	ctx.lr = 0x830A27A8;
	sub_830A0498(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A27B4:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0a60
	ctx.lr = 0x830A27CC;
	sub_830A0A60(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A27D8:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0688
	ctx.lr = 0x830A27F8;
	sub_830A0688(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A2804:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0868
	ctx.lr = 0x830A2824;
	sub_830A0868(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A2830:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a13b0
	ctx.lr = 0x830A2850;
	sub_830A13B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A285C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830a82e0
	ctx.lr = 0x830A2864;
	sub_830A82E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2894
	if (cr6.eq) goto loc_830A2894;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a1a48
	ctx.lr = 0x830A2890;
	sub_830A1A48(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_830A2894:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A28A0"))) PPC_WEAK_FUNC(sub_830A28A0);
PPC_FUNC_IMPL(__imp__sub_830A28A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A28A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r3,420
	ctx.r10.s64 = ctx.r3.s64 + 420;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r8,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stb r7,428(r3)
	PPC_STORE_U8(ctx.r3.u32 + 428, ctx.r7.u8);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A28F0:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830a28f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A28F0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a25d0
	ctx.lr = 0x830A291C;
	sub_830A25D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2aa0
	if (cr6.eq) goto loc_830A2AA0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a295c
	if (!cr6.lt) goto loc_830A295C;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A295C;
	sub_830AC948(ctx, base);
loc_830A295C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830a8318
	ctx.lr = 0x830A2964;
	sub_830A8318(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x830a2a68
	if (cr6.gt) goto loc_830A2A68;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830a29b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A29B8;
	// bdzf 4*cr6+eq,0x830a29e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A29E4;
	// bdzf 4*cr6+eq,0x830a2a10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A2A10;
	// bdzf 4*cr6+eq,0x830a2a3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830A2A3C;
	// bne cr6,0x830a2aa0
	if (!cr6.eq) goto loc_830A2AA0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0560
	ctx.lr = 0x830A29AC;
	sub_830A0560(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A29B8:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a1eb8
	ctx.lr = 0x830A29D8;
	sub_830A1EB8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A29E4:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0740
	ctx.lr = 0x830A2A04;
	sub_830A0740(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A2A10:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a0930
	ctx.lr = 0x830A2A30;
	sub_830A0930(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A2A3C:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a15a8
	ctx.lr = 0x830A2A5C;
	sub_830A15A8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A2A68:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830a82e0
	ctx.lr = 0x830A2A70;
	sub_830A82E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2aa0
	if (cr6.eq) goto loc_830A2AA0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a2320
	ctx.lr = 0x830A2A9C;
	sub_830A2320(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_830A2AA0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A2AAC"))) PPC_WEAK_FUNC(sub_830A2AAC);
PPC_FUNC_IMPL(__imp__sub_830A2AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A2AB0"))) PPC_WEAK_FUNC(sub_830A2AB0);
PPC_FUNC_IMPL(__imp__sub_830A2AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A2AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r10,284(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,27372
	ctx.r9.s64 = ctx.r11.s64 + 27372;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830a2b18
	if (cr6.eq) goto loc_830A2B18;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830A2AF0;
	sub_82595150(ctx, base);
	// lwz r30,284(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830a2b0c
	if (cr6.eq) goto loc_830A2B0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ac078
	ctx.lr = 0x830A2B04;
	sub_830AC078(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A2B0C;
	sub_82416268(ctx, base);
loc_830A2B0C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830A2B14;
	sub_82595170(ctx, base);
	// stw r27,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
loc_830A2B18:
	// lbz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 280);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a2b70
	if (!cr6.eq) goto loc_830A2B70;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830a2b70
	if (cr0.eq) goto loc_830A2B70;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_830A2B44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x830ac898
	ctx.lr = 0x830A2B50;
	sub_830AC898(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x830a2b44
	if (cr6.lt) goto loc_830A2B44;
loc_830A2B70:
	// lwz r4,548(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830a2b8c
	if (cr6.eq) goto loc_830A2B8C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x830A2B8C;
	sub_825952B8(ctx, base);
loc_830A2B8C:
	// stw r27,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r27.u32);
	// stw r27,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r27.u32);
	// stw r27,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r27.u32);
	// lwz r4,532(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830a2bb0
	if (cr6.eq) goto loc_830A2BB0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x830A2BB0;
	sub_825952B8(ctx, base);
loc_830A2BB0:
	// stw r27,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r27.u32);
	// stw r27,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r27.u32);
	// stw r27,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r27.u32);
	// lwz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830a2bd4
	if (cr6.eq) goto loc_830A2BD4;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x830A2BD4;
	sub_825952B8(ctx, base);
loc_830A2BD4:
	// stw r27,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r27.u32);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// stw r27,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r27.u32);
	// stw r27,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r27.u32);
	// bl 0x830a8268
	ctx.lr = 0x830A2BE8;
	sub_830A8268(ctx, base);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x830a8268
	ctx.lr = 0x830A2BF0;
	sub_830A8268(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x83102db0
	ctx.lr = 0x830A2BF8;
	sub_83102DB0(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// bl 0x830fe208
	ctx.lr = 0x830A2C00;
	sub_830FE208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6040
	ctx.lr = 0x830A2C08;
	sub_830A6040(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A2C10"))) PPC_WEAK_FUNC(sub_830A2C10);
PPC_FUNC_IMPL(__imp__sub_830A2C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A2C18;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830a61f0
	ctx.lr = 0x830A2C28;
	sub_830A61F0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stb r29,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r29.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,27372
	ctx.r10.s64 = ctx.r11.s64 + 27372;
	// stb r30,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r30.u8);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stb r30,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r30.u8);
	// bl 0x830fe1b0
	ctx.lr = 0x830A2C4C;
	sub_830FE1B0(ctx, base);
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x830ab7c8
	ctx.lr = 0x830A2C54;
	sub_830AB7C8(ctx, base);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// bl 0x830a81e0
	ctx.lr = 0x830A2C5C;
	sub_830A81E0(ctx, base);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x830a81e0
	ctx.lr = 0x830A2C64;
	sub_830A81E0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,255
	ctx.r11.s64 = 255;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r10.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// li r8,25
	ctx.r8.s64 = 25;
	// sth r9,500(r31)
	PPC_STORE_U16(ctx.r31.u32 + 500, ctx.r9.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// addi r11,r31,492
	ctx.r11.s64 = ctx.r31.s64 + 492;
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// stw r30,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r30.u32);
	// stw r30,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// stw r30,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r30.u32);
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82595718
	ctx.lr = 0x830A2CC8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a2ce8
	if (cr6.eq) goto loc_830A2CE8;
	// bl 0x824eecc0
	ctx.lr = 0x830A2CD4;
	sub_824EECC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830A2CE8:
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A2CF8"))) PPC_WEAK_FUNC(sub_830A2CF8);
PPC_FUNC_IMPL(__imp__sub_830A2CF8) {
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
	// bl 0x830a2ab0
	ctx.lr = 0x830A2D18;
	sub_830A2AB0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2d30
	if (cr6.eq) goto loc_830A2D30;
	// bl 0x82416268
	ctx.lr = 0x830A2D2C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830A2D30:
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

__attribute__((alias("__imp__sub_830A2D48"))) PPC_WEAK_FUNC(sub_830A2D48);
PPC_FUNC_IMPL(__imp__sub_830A2D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A2D50;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a2da0
	if (!cr6.eq) goto loc_830A2DA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A2D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830a3088
	if (cr6.eq) goto loc_830A3088;
loc_830A2DA0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x831ce980
	ctx.lr = 0x830A2DB4;
	sub_831CE980(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// li r9,6
	ctx.r9.s64 = 6;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r6,r7,27348
	ctx.r6.s64 = ctx.r7.s64 + 27348;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stb r8,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r8.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
loc_830A2DE0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830a2de0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A2DE0;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x830a2e2c
	if (!cr6.lt) goto loc_830A2E2C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830ac948
	ctx.lr = 0x830A2E28;
	sub_830AC948(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830A2E2C:
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// beq cr6,0x830a3094
	if (cr6.eq) goto loc_830A3094;
	// bl 0x830a8458
	ctx.lr = 0x830A2E40;
	sub_830A8458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a3008
	if (!cr6.eq) goto loc_830A3008;
	// lbz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a2f08
	if (cr6.eq) goto loc_830A2F08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dce0
	ctx.lr = 0x830A2E60;
	sub_8312DCE0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2e84
	if (cr6.eq) goto loc_830A2E84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312dce0
	ctx.lr = 0x830A2E74;
	sub_8312DCE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83a0
	ctx.lr = 0x830A2E84;
	sub_830A83A0(ctx, base);
loc_830A2E84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83b0
	ctx.lr = 0x830A2E8C;
	sub_830A83B0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2eb0
	if (cr6.eq) goto loc_830A2EB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83b0
	ctx.lr = 0x830A2EA0;
	sub_830A83B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83a8
	ctx.lr = 0x830A2EB0;
	sub_830A83A8(ctx, base);
loc_830A2EB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129970
	ctx.lr = 0x830A2EB8;
	sub_83129970(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2edc
	if (cr6.eq) goto loc_830A2EDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129970
	ctx.lr = 0x830A2ECC;
	sub_83129970(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83b8
	ctx.lr = 0x830A2EDC;
	sub_830A83B8(ctx, base);
loc_830A2EDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83c0
	ctx.lr = 0x830A2EE4;
	sub_830A83C0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2f08
	if (cr6.eq) goto loc_830A2F08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83c0
	ctx.lr = 0x830A2EF8;
	sub_830A83C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8246be10
	ctx.lr = 0x830A2F08;
	sub_8246BE10(ctx, base);
loc_830A2F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835410c0
	ctx.lr = 0x830A2F10;
	sub_835410C0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2f34
	if (cr6.eq) goto loc_830A2F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835410c0
	ctx.lr = 0x830A2F24;
	sub_835410C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83c8
	ctx.lr = 0x830A2F34;
	sub_830A83C8(ctx, base);
loc_830A2F34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83d8
	ctx.lr = 0x830A2F3C;
	sub_830A83D8(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2f60
	if (cr6.eq) goto loc_830A2F60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83d8
	ctx.lr = 0x830A2F50;
	sub_830A83D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83d0
	ctx.lr = 0x830A2F60;
	sub_830A83D0(ctx, base);
loc_830A2F60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83542800
	ctx.lr = 0x830A2F68;
	sub_83542800(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2f8c
	if (cr6.eq) goto loc_830A2F8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83542800
	ctx.lr = 0x830A2F7C;
	sub_83542800(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83e0
	ctx.lr = 0x830A2F8C;
	sub_830A83E0(ctx, base);
loc_830A2F8C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83f0
	ctx.lr = 0x830A2F94;
	sub_830A83F0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2fb8
	if (cr6.eq) goto loc_830A2FB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a83f0
	ctx.lr = 0x830A2FA8;
	sub_830A83F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83e8
	ctx.lr = 0x830A2FB8;
	sub_830A83E8(ctx, base);
loc_830A2FB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83578d58
	ctx.lr = 0x830A2FC0;
	sub_83578D58(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a2fe4
	if (cr6.eq) goto loc_830A2FE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83578d58
	ctx.lr = 0x830A2FD4;
	sub_83578D58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x830a83f8
	ctx.lr = 0x830A2FE4;
	sub_830A83F8(ctx, base);
loc_830A2FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a8438
	ctx.lr = 0x830A2FEC;
	sub_830A8438(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830a3008
	if (cr6.eq) goto loc_830A3008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a8438
	ctx.lr = 0x830A2FFC;
	sub_830A8438(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a8428
	ctx.lr = 0x830A3008;
	sub_830A8428(ctx, base);
loc_830A3008:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830a3094
	if (!cr6.eq) goto loc_830A3094;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a8370
	ctx.lr = 0x830A301C;
	sub_830A8370(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x830a3034
	if (!cr6.eq) goto loc_830A3034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a8390
	ctx.lr = 0x830A302C;
	sub_830A8390(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830a3094
	if (cr6.eq) goto loc_830A3094;
loc_830A3034:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a8370
	ctx.lr = 0x830A303C;
	sub_830A8370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a8360
	ctx.lr = 0x830A3048;
	sub_830A8360(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a8390
	ctx.lr = 0x830A3050;
	sub_830A8390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a8380
	ctx.lr = 0x830A305C;
	sub_830A8380(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A3074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830a3094
	if (!cr6.eq) goto loc_830A3094;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a8268
	ctx.lr = 0x830A3088;
	sub_830A8268(ctx, base);
loc_830A3088:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A3094:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x830a311c
	if (cr6.eq) goto loc_830A311C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x830a311c
	if (cr6.eq) goto loc_830A311C;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x830a30d0
	if (!cr6.eq) goto loc_830A30D0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a28a0
	ctx.lr = 0x830A30CC;
	sub_830A28A0(ctx, base);
	// b 0x830a313c
	goto loc_830A313C;
loc_830A30D0:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x830a3140
	if (!cr6.eq) goto loc_830A3140;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r30,488
	ctx.r10.s64 = ctx.r30.s64 + 488;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830A30E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830a30e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A30E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A3118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830a313c
	goto loc_830A313C;
loc_830A311C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a26e8
	ctx.lr = 0x830A313C;
	sub_830A26E8(ctx, base);
loc_830A313C:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_830A3140:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a3170
	if (!cr6.eq) goto loc_830A3170;
	// lbz r11,289(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 289);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a3170
	if (cr6.eq) goto loc_830A3170;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// addi r3,r30,516
	ctx.r3.s64 = ctx.r30.s64 + 516;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83546fd8
	ctx.lr = 0x830A3170;
	sub_83546FD8(ctx, base);
loc_830A3170:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830a8268
	ctx.lr = 0x830A3178;
	sub_830A8268(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A3184"))) PPC_WEAK_FUNC(sub_830A3184);
PPC_FUNC_IMPL(__imp__sub_830A3184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A3188"))) PPC_WEAK_FUNC(sub_830A3188);
PPC_FUNC_IMPL(__imp__sub_830A3188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A3190;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r6,r7,r10
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x830a31d0
	if (cr6.lt) goto loc_830A31D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A31D0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8309fff8
	ctx.lr = 0x830A31D8;
	sub_8309FFF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830a2d48
	ctx.lr = 0x830A321C;
	sub_830A2D48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A3224"))) PPC_WEAK_FUNC(sub_830A3224);
PPC_FUNC_IMPL(__imp__sub_830A3224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A3228"))) PPC_WEAK_FUNC(sub_830A3228);
PPC_FUNC_IMPL(__imp__sub_830A3228) {
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
	// lbz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a325c
	if (cr6.eq) goto loc_830A325C;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bl 0x830ab9d8
	ctx.lr = 0x830A325C;
	sub_830AB9D8(ctx, base);
loc_830A325C:
	// lbz r11,289(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a32ac
	if (cr6.eq) goto loc_830A32AC;
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r8,r31,516
	ctx.r8.s64 = ctx.r31.s64 + 516;
	// lwz r9,520(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x830a32ac
	if (cr6.eq) goto loc_830A32AC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x830a32a8
	if (cr6.eq) goto loc_830A32A8;
loc_830A3288:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x830a3288
	if (!cr6.eq) goto loc_830A3288;
loc_830A32A8:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_830A32AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830a81e0
	ctx.lr = 0x830A32B4;
	sub_830A81E0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a3188
	ctx.lr = 0x830A32C8;
	sub_830A3188(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a32f0
	if (cr6.eq) goto loc_830A32F0;
	// lbz r11,289(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a32f0
	if (cr6.eq) goto loc_830A32F0;
	// addi r4,r31,516
	ctx.r4.s64 = ctx.r31.s64 + 516;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x82af1ca8
	ctx.lr = 0x830A32F0;
	sub_82AF1CA8(ctx, base);
loc_830A32F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830a8268
	ctx.lr = 0x830A32F8;
	sub_830A8268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_830A3314"))) PPC_WEAK_FUNC(sub_830A3314);
PPC_FUNC_IMPL(__imp__sub_830A3314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A3318"))) PPC_WEAK_FUNC(sub_830A3318);
PPC_FUNC_IMPL(__imp__sub_830A3318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A3320;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A3330;
	sub_838FBB40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a33dc
	if (cr6.eq) goto loc_830A33DC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r29,r11,28036
	ctx.r29.s64 = ctx.r11.s64 + 28036;
loc_830A3344:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A3350:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a3374
	if (cr6.eq) goto loc_830A3374;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a3350
	if (cr6.eq) goto loc_830A3350;
loc_830A3374:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a33e8
	if (!cr6.eq) goto loc_830A33E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A3388;
	sub_838FC840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a33e8
	if (cr6.eq) goto loc_830A33E8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824eecc0
	ctx.lr = 0x830A339C;
	sub_824EECC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ac748
	ctx.lr = 0x830A33A8;
	sub_830AC748(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A33C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A33C8;
	sub_838FBC58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83102db0
	ctx.lr = 0x830A33D4;
	sub_83102DB0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830a3344
	if (!cr6.eq) goto loc_830A3344;
loc_830A33DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A33E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A33F4"))) PPC_WEAK_FUNC(sub_830A33F4);
PPC_FUNC_IMPL(__imp__sub_830A33F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A33F8"))) PPC_WEAK_FUNC(sub_830A33F8);
PPC_FUNC_IMPL(__imp__sub_830A33F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830A3400;
	__savegprlr_20(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x830A3424;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x831cdcf0
	ctx.lr = 0x830A3434;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x831cdcf0
	ctx.lr = 0x830A3444;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x831cdcf0
	ctx.lr = 0x830A3454;
	sub_831CDCF0(ctx, base);
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x830a7680
	ctx.lr = 0x830A345C;
	sub_830A7680(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830a7aa8
	ctx.lr = 0x830A3464;
	sub_830A7AA8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwzx r24,r11,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwzx r23,r10,r31
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwzx r22,r9,r31
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x830A34C0;
	sub_831CDCF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x830A34D0;
	sub_831CE980(ctx, base);
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// bl 0x830a6568
	ctx.lr = 0x830A34E0;
	sub_830A6568(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x830A3504;
	sub_831CDCF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x830A3514;
	sub_831CE980(ctx, base);
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// bl 0x830a65d0
	ctx.lr = 0x830A3524;
	sub_830A65D0(ctx, base);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwzx r29,r8,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A354C;
	sub_831CE980(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// bl 0x831ce980
	ctx.lr = 0x830A3574;
	sub_831CE980(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// bl 0x831ce980
	ctx.lr = 0x830A359C;
	sub_831CE980(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// bl 0x831ce980
	ctx.lr = 0x830A35C0;
	sub_831CE980(ctx, base);
	// add r7,r30,r31
	ctx.r7.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x830a7690
	ctx.lr = 0x830A35D4;
	sub_830A7690(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8307e038
	ctx.lr = 0x830A35E0;
	sub_8307E038(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// extsb r4,r23
	ctx.r4.s64 = ctx.r23.s8;
	// bl 0x830a6638
	ctx.lr = 0x830A35EC;
	sub_830A6638(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r22,24
	ctx.r4.u64 = ctx.r22.u32 & 0xFF;
	// bl 0x830a6698
	ctx.lr = 0x830A35F8;
	sub_830A6698(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x830a6658
	ctx.lr = 0x830A3604;
	sub_830A6658(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x830a6678
	ctx.lr = 0x830A3610;
	sub_830A6678(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// bl 0x830a6848
	ctx.lr = 0x830A361C;
	sub_830A6848(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// bl 0x830a6870
	ctx.lr = 0x830A3628;
	sub_830A6870(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x830a69e0
	ctx.lr = 0x830A3634;
	sub_830A69E0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// bl 0x830a6a08
	ctx.lr = 0x830A3640;
	sub_830A6A08(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830aca28
	ctx.lr = 0x830A364C;
	sub_830ACA28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A3658"))) PPC_WEAK_FUNC(sub_830A3658);
PPC_FUNC_IMPL(__imp__sub_830A3658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830A3660;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwzx r25,r11,r5
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830a7680
	ctx.lr = 0x830A368C;
	sub_830A7680(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x830a7b78
	ctx.lr = 0x830A3698;
	sub_830A7B78(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A36B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830a3720
	if (cr6.eq) goto loc_830A3720;
loc_830A36BC:
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x830A36CC;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// add r4,r29,r26
	ctx.r4.u64 = ctx.r29.u64 + ctx.r26.u64;
	// lwzx r27,r11,r26
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A36EC;
	sub_831CE980(ctx, base);
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A370C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830ac748
	ctx.lr = 0x830A3714;
	sub_830AC748(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// blt cr6,0x830a36bc
	if (cr6.lt) goto loc_830A36BC;
loc_830A3720:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A372C"))) PPC_WEAK_FUNC(sub_830A372C);
PPC_FUNC_IMPL(__imp__sub_830A372C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A3730"))) PPC_WEAK_FUNC(sub_830A3730);
PPC_FUNC_IMPL(__imp__sub_830A3730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x830A3738;
	__savegprlr_16(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r16,20
	ctx.r16.s64 = 20;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r20,r3,8
	ctx.r20.s64 = ctx.r3.s64 + 8;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// divw. r8,r9,r16
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r16.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830a38a4
	if (cr0.eq) goto loc_830A38A4;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// li r19,24
	ctx.r19.s64 = 24;
	// li r23,25
	ctx.r23.s64 = 25;
loc_830A376C:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// add r21,r18,r11
	ctx.r21.u64 = ctx.r18.u64 + ctx.r11.u64;
	// addi r26,r21,4
	ctx.r26.s64 = ctx.r21.s64 + 4;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r19
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r19.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830a3864
	if (cr0.eq) goto loc_830A3864;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_830A3794:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// add r25,r24,r11
	ctx.r25.u64 = ctx.r24.u64 + ctx.r11.u64;
	// addi r30,r25,8
	ctx.r30.s64 = ctx.r25.s64 + 8;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830a3824
	if (cr0.eq) goto loc_830A3824;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_830A37BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a37e4
	if (cr6.eq) goto loc_830A37E4;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830A37E0;
	sub_825952B8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_830A37E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a3804
	if (cr6.eq) goto loc_830A3804;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x830A3800;
	sub_825952B8(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_830A3804:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x830a37bc
	if (cr6.lt) goto loc_830A37BC;
loc_830A3824:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a3844
	if (cr6.eq) goto loc_830A3844;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x830A3840;
	sub_825952B8(ctx, base);
	// stw r27,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r27.u32);
loc_830A3844:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r24,r24,24
	ctx.r24.s64 = ctx.r24.s64 + 24;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r19
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r19.s32);
	// cmplw cr6,r22,r8
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r8.u32, xer);
	// blt cr6,0x830a3794
	if (cr6.lt) goto loc_830A3794;
loc_830A3864:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a3884
	if (cr6.eq) goto loc_830A3884;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830A3880;
	sub_825952B8(ctx, base);
	// stw r27,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r27.u32);
loc_830A3884:
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r18,r18,20
	ctx.r18.s64 = ctx.r18.s64 + 20;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r16
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r16.s32);
	// cmplw cr6,r17,r8
	cr6.compare<uint32_t>(ctx.r17.u32, ctx.r8.u32, xer);
	// blt cr6,0x830a376c
	if (cr6.lt) goto loc_830A376C;
loc_830A38A4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A38AC"))) PPC_WEAK_FUNC(sub_830A38AC);
PPC_FUNC_IMPL(__imp__sub_830A38AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A38B0"))) PPC_WEAK_FUNC(sub_830A38B0);
PPC_FUNC_IMPL(__imp__sub_830A38B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830A38B8;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,25
	ctx.r25.s64 = 25;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830A38DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a38f4
	if (cr6.eq) goto loc_830A38F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830accf8
	ctx.lr = 0x830A38EC;
	sub_830ACCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x830a38f8
	goto loc_830A38F8;
loc_830A38F4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830A38F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A3900;
	sub_838FBB40(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,27936
	ctx.r30.s64 = ctx.r11.s64 + 27936;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// bl 0x838fc840
	ctx.lr = 0x830A3914;
	sub_838FC840(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// bl 0x838fc840
	ctx.lr = 0x830A3924;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A3928;
	sub_831D88A0(ctx, base);
	// extsb r27,r3
	ctx.r27.s64 = ctx.r3.s8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A3934;
	sub_838FBC58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a3984
	if (!cr6.eq) goto loc_830A3984;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830a3978
	if (cr6.eq) goto loc_830A3978;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x830A3958;
	sub_82595150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A3970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x830A3978;
	sub_82595170(ctx, base);
loc_830A3978:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830A3984:
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A3990;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A3994;
	sub_831D88A0(ctx, base);
	// clrlwi r25,r3,24
	ctx.r25.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A39A4;
	sub_838FC840(ctx, base);
	// bl 0x830a6568
	ctx.lr = 0x830A39A8;
	sub_830A6568(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A39B8;
	sub_838FC840(ctx, base);
	// bl 0x830a65d0
	ctx.lr = 0x830A39BC;
	sub_830A65D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A39CC;
	sub_838FC840(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A39DC;
	sub_838FC840(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r4,r30,-12
	ctx.r4.s64 = ctx.r30.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A39EC;
	sub_838FC840(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A39FC;
	sub_838FC840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830acd98
	ctx.lr = 0x830A3A0C;
	sub_830ACD98(ctx, base);
	// extsb r4,r27
	ctx.r4.s64 = ctx.r27.s8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6638
	ctx.lr = 0x830A3A18;
	sub_830A6638(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6698
	ctx.lr = 0x830A3A24;
	sub_830A6698(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6658
	ctx.lr = 0x830A3A30;
	sub_830A6658(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6678
	ctx.lr = 0x830A3A3C;
	sub_830A6678(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6848
	ctx.lr = 0x830A3A48;
	sub_830A6848(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6870
	ctx.lr = 0x830A3A54;
	sub_830A6870(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a69e0
	ctx.lr = 0x830A3A60;
	sub_830A69E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a6a08
	ctx.lr = 0x830A3A6C;
	sub_830A6A08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830aca28
	ctx.lr = 0x830A3A78;
	sub_830ACA28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A3A84"))) PPC_WEAK_FUNC(sub_830A3A84);
PPC_FUNC_IMPL(__imp__sub_830A3A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A3A88"))) PPC_WEAK_FUNC(sub_830A3A88);
PPC_FUNC_IMPL(__imp__sub_830A3A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A3A90;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A3AA4;
	sub_838FBB40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a3bbc
	if (cr6.eq) goto loc_830A3BBC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r28,r11,28020
	ctx.r28.s64 = ctx.r11.s64 + 28020;
loc_830A3AB8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ad100
	ctx.lr = 0x830A3AC0;
	sub_830AD100(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r28,-20
	ctx.r11.s64 = ctx.r28.s64 + -20;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A3ACC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a3af0
	if (cr6.eq) goto loc_830A3AF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a3acc
	if (cr6.eq) goto loc_830A3ACC;
loc_830A3AF0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a3bc8
	if (!cr6.eq) goto loc_830A3BC8;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A3B04;
	sub_838FC840(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a3bc8
	if (cr6.eq) goto loc_830A3BC8;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A3B1C;
	sub_838FC840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a3bc8
	if (cr6.eq) goto loc_830A3BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A3B30;
	sub_838FBB40(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A3B40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a3b64
	if (cr6.eq) goto loc_830A3B64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a3b40
	if (cr6.eq) goto loc_830A3B40;
loc_830A3B64:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a3bc8
	if (!cr6.eq) goto loc_830A3BC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830a3318
	ctx.lr = 0x830A3B78;
	sub_830A3318(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ac808
	ctx.lr = 0x830A3B88;
	sub_830AC808(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A3BA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A3BA8;
	sub_838FBC58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830acf98
	ctx.lr = 0x830A3BB4;
	sub_830ACF98(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x830a3ab8
	if (!cr6.eq) goto loc_830A3AB8;
loc_830A3BBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A3BC8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830acf98
	ctx.lr = 0x830A3BD0;
	sub_830ACF98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A3BDC"))) PPC_WEAK_FUNC(sub_830A3BDC);
PPC_FUNC_IMPL(__imp__sub_830A3BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A3BE0"))) PPC_WEAK_FUNC(sub_830A3BE0);
PPC_FUNC_IMPL(__imp__sub_830A3BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830A3BE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwzx r25,r11,r5
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830a7680
	ctx.lr = 0x830A3C18;
	sub_830A7680(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x830a7b48
	ctx.lr = 0x830A3C24;
	sub_830A7B48(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A3C3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x830a3d04
	if (cr6.eq) goto loc_830A3D04;
loc_830A3C48:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A3C60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x831cdcf0
	ctx.lr = 0x830A3C74;
	sub_831CDCF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x830A3C84;
	sub_831CDCF0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwzx r26,r9,r30
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A3CA8;
	sub_831CE980(ctx, base);
	// add r11,r28,r26
	ctx.r11.u64 = ctx.r28.u64 + ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lwzx r26,r11,r30
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x831ce980
	ctx.lr = 0x830A3CCC;
	sub_831CE980(ctx, base);
	// add r8,r28,r26
	ctx.r8.u64 = ctx.r28.u64 + ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x830a3658
	ctx.lr = 0x830A3CE8;
	sub_830A3658(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830ac808
	ctx.lr = 0x830A3CF8;
	sub_830AC808(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// blt cr6,0x830a3c48
	if (cr6.lt) goto loc_830A3C48;
loc_830A3D04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A3D10"))) PPC_WEAK_FUNC(sub_830A3D10);
PPC_FUNC_IMPL(__imp__sub_830A3D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A3D18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// divw. r27,r8,r10
	ctx.r27.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x830a3d90
	if (cr0.eq) goto loc_830A3D90;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830A3D44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c348
	ctx.lr = 0x830A3D4C;
	sub_8241C348(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
loc_830A3D54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x830a3d78
	if (cr6.eq) goto loc_830A3D78;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a3d54
	if (cr6.eq) goto loc_830A3D54;
loc_830A3D78:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a3d9c
	if (cr6.eq) goto loc_830A3D9C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x830a3d44
	if (cr6.lt) goto loc_830A3D44;
loc_830A3D90:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A3D9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A3DA8"))) PPC_WEAK_FUNC(sub_830A3DA8);
PPC_FUNC_IMPL(__imp__sub_830A3DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A3DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x830a3e44
	if (cr6.eq) goto loc_830A3E44;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divw. r28,r5,r9
	ctx.r28.s32 = PPCDivide(ctx.r5.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x830a3e44
	if (cr0.eq) goto loc_830A3E44;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830A3DF4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241c348
	ctx.lr = 0x830A3DFC;
	sub_8241C348(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_830A3E08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x830a3e2c
	if (cr6.eq) goto loc_830A3E2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a3e08
	if (cr6.eq) goto loc_830A3E08;
loc_830A3E2C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a3e50
	if (cr6.eq) goto loc_830A3E50;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// blt cr6,0x830a3df4
	if (cr6.lt) goto loc_830A3DF4;
loc_830A3E44:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A3E50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A3E5C"))) PPC_WEAK_FUNC(sub_830A3E5C);
PPC_FUNC_IMPL(__imp__sub_830A3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A3E60"))) PPC_WEAK_FUNC(sub_830A3E60);
PPC_FUNC_IMPL(__imp__sub_830A3E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A3E68;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A3E7C;
	sub_838FBB40(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a40a8
	if (cr6.eq) goto loc_830A40A8;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r31,r11,27992
	ctx.r31.s64 = ctx.r11.s64 + 27992;
loc_830A3E90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ad298
	ctx.lr = 0x830A3E98;
	sub_830AD298(ctx, base);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// addi r11,r31,-44
	ctx.r11.s64 = ctx.r31.s64 + -44;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A3EA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a3ec8
	if (cr6.eq) goto loc_830A3EC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a3ea4
	if (cr6.eq) goto loc_830A3EA4;
loc_830A3EC8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a40bc
	if (!cr6.eq) goto loc_830A40BC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A3ED8;
	sub_838FBB40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a4074
	if (cr6.eq) goto loc_830A4074;
loc_830A3EE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830ad7b8
	ctx.lr = 0x830A3EEC;
	sub_830AD7B8(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r31,-36
	ctx.r11.s64 = ctx.r31.s64 + -36;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A3EF8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a3f1c
	if (cr6.eq) goto loc_830A3F1C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a3ef8
	if (cr6.eq) goto loc_830A3EF8;
loc_830A3F1C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a40b4
	if (!cr6.eq) goto loc_830A40B4;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A3F30;
	sub_838FC840(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a40b4
	if (cr6.eq) goto loc_830A40B4;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A3F48;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a40b4
	if (cr6.eq) goto loc_830A40B4;
	// bl 0x831d88a0
	ctx.lr = 0x830A3F54;
	sub_831D88A0(ctx, base);
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A3F64;
	sub_838FC840(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a40b4
	if (cr6.eq) goto loc_830A40B4;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830A3F78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a3f9c
	if (cr6.eq) goto loc_830A3F9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a3f78
	if (cr6.eq) goto loc_830A3F78;
loc_830A3F9C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a3fa8
	if (!cr6.eq) goto loc_830A3FA8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_830A3FA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A3FB0;
	sub_838FBB40(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A3FC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a3fe4
	if (cr6.eq) goto loc_830A3FE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a3fc0
	if (cr6.eq) goto loc_830A3FC0;
loc_830A3FE4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a40b4
	if (!cr6.eq) goto loc_830A40B4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830a3a88
	ctx.lr = 0x830A3FF8;
	sub_830A3A88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830acb20
	ctx.lr = 0x830A4004;
	sub_830ACB20(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830aca98
	ctx.lr = 0x830A400C;
	sub_830ACA98(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a402c
	if (cr6.eq) goto loc_830A402C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a19da0
	ctx.lr = 0x830A4024;
	sub_82A19DA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x830a4044
	goto loc_830A4044;
loc_830A402C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830aca90
	ctx.lr = 0x830A4034;
	sub_830ACA90(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a19da0
	ctx.lr = 0x830A4040;
	sub_82A19DA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_830A4044:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830acaa0
	ctx.lr = 0x830A404C;
	sub_830ACAA0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ad6a8
	ctx.lr = 0x830A4058;
	sub_830AD6A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A4060;
	sub_838FBC58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830ad730
	ctx.lr = 0x830A406C;
	sub_830AD730(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830a3ee4
	if (!cr6.eq) goto loc_830A3EE4;
loc_830A4074:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A408C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A4094;
	sub_838FBC58(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ad210
	ctx.lr = 0x830A40A0;
	sub_830AD210(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x830a3e90
	if (!cr6.eq) goto loc_830A3E90;
loc_830A40A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A40B4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830ad730
	ctx.lr = 0x830A40BC;
	sub_830AD730(ctx, base);
loc_830A40BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830ad210
	ctx.lr = 0x830A40C4;
	sub_830AD210(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A40D0"))) PPC_WEAK_FUNC(sub_830A40D0);
PPC_FUNC_IMPL(__imp__sub_830A40D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x830A40D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwzx r19,r11,r5
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x830a7680
	ctx.lr = 0x830A4108;
	sub_830A7680(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x830a7ae0
	ctx.lr = 0x830A4114;
	sub_830A7AE0(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A412C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x830a42a4
	if (cr6.eq) goto loc_830A42A4;
loc_830A4138:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A4150;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r23,r11,r30
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,4(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// bl 0x830a7680
	ctx.lr = 0x830A4170;
	sub_830A7680(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x830a7b18
	ctx.lr = 0x830A417C;
	sub_830A7B18(ctx, base);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830A4194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x830a4298
	if (cr6.eq) goto loc_830A4298;
loc_830A41A0:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A41B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x830A41CC;
	sub_831CDCF0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwzx r28,r9,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A41F4;
	sub_831CE980(ctx, base);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi r29,r7,24
	ctx.r29.u64 = ctx.r7.u32 & 0xFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// bne cr6,0x830a4224
	if (!cr6.eq) goto loc_830A4224;
	// li r24,1
	ctx.r24.s64 = 1;
loc_830A4224:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x830a3be0
	ctx.lr = 0x830A4238;
	sub_830A3BE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830acb20
	ctx.lr = 0x830A4244;
	sub_830ACB20(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830aca98
	ctx.lr = 0x830A424C;
	sub_830ACA98(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x830a426c
	if (cr6.eq) goto loc_830A426C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a19da0
	ctx.lr = 0x830A4264;
	sub_82A19DA0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x830a4284
	goto loc_830A4284;
loc_830A426C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830aca90
	ctx.lr = 0x830A4274;
	sub_830ACA90(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a19da0
	ctx.lr = 0x830A4280;
	sub_82A19DA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_830A4284:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830acaa0
	ctx.lr = 0x830A428C;
	sub_830ACAA0(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r23
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, xer);
	// blt cr6,0x830a41a0
	if (cr6.lt) goto loc_830A41A0;
loc_830A4298:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r20,r19
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r19.u32, xer);
	// blt cr6,0x830a4138
	if (cr6.lt) goto loc_830A4138;
loc_830A42A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A42B0"))) PPC_WEAK_FUNC(sub_830A42B0);
PPC_FUNC_IMPL(__imp__sub_830A42B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x830A42B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,25
	ctx.r28.s64 = 25;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830A42E4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a42f8
	if (cr6.eq) goto loc_830A42F8;
	// bl 0x830adc20
	ctx.lr = 0x830A42F0;
	sub_830ADC20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x830a42fc
	goto loc_830A42FC;
loc_830A42F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830A42FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A4304;
	sub_838FBB40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a3e60
	ctx.lr = 0x830A4318;
	sub_830A3E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A4320;
	sub_838FBC58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a4370
	if (!cr6.eq) goto loc_830A4370;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830a4364
	if (cr6.eq) goto loc_830A4364;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x830A4344;
	sub_82595150(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830A435C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x830A4364;
	sub_82595170(ctx, base);
loc_830A4364:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_830A4370:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,27844
	ctx.r31.s64 = ctx.r11.s64 + 27844;
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// bl 0x838fc840
	ctx.lr = 0x830A4384;
	sub_838FC840(ctx, base);
	// bl 0x830a8278
	ctx.lr = 0x830A4388;
	sub_830A8278(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r31,-244
	ctx.r4.s64 = ctx.r31.s64 + -244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A4398;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A439C;
	sub_831D88A0(ctx, base);
	// clrlwi r23,r3,24
	ctx.r23.u64 = ctx.r3.u32 & 0xFF;
	// addi r4,r31,-232
	ctx.r4.s64 = ctx.r31.s64 + -232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A43AC;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A43B0;
	sub_831D88A0(ctx, base);
	// clrlwi r22,r3,16
	ctx.r22.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A43C0;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A43C4;
	sub_831D88A0(ctx, base);
	// clrlwi r21,r3,16
	ctx.r21.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-196
	ctx.r4.s64 = ctx.r31.s64 + -196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A43D4;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A43D8;
	sub_831D88A0(ctx, base);
	// clrlwi r20,r3,16
	ctx.r20.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A43E8;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A43EC;
	sub_831D88A0(ctx, base);
	// clrlwi r19,r3,16
	ctx.r19.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A43FC;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A4400;
	sub_831D88A0(ctx, base);
	// clrlwi r18,r3,16
	ctx.r18.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-152
	ctx.r4.s64 = ctx.r31.s64 + -152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A4410;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A4414;
	sub_831D88A0(ctx, base);
	// clrlwi r17,r3,16
	ctx.r17.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A4424;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A4428;
	sub_831D88A0(ctx, base);
	// clrlwi r16,r3,16
	ctx.r16.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A4438;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A443C;
	sub_831D88A0(ctx, base);
	// clrlwi r15,r3,16
	ctx.r15.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A444C;
	sub_838FC840(ctx, base);
	// bl 0x831d88a0
	ctx.lr = 0x830A4450;
	sub_831D88A0(ctx, base);
	// clrlwi r14,r3,16
	ctx.r14.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A4460;
	sub_838FC840(ctx, base);
	// lis r27,-31773
	ctx.r27.s64 = -2082275328;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,17184(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17184);
loc_830A4470:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a4494
	if (cr6.eq) goto loc_830A4494;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a4470
	if (cr6.eq) goto loc_830A4470;
loc_830A4494:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a44a4
	if (!cr6.eq) goto loc_830A44A4;
	// li r25,2
	ctx.r25.s64 = 2;
	// b 0x830a4518
	goto loc_830A4518;
loc_830A44A4:
	// addi r10,r31,-76
	ctx.r10.s64 = ctx.r31.s64 + -76;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A44AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a44d0
	if (cr6.eq) goto loc_830A44D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a44ac
	if (cr6.eq) goto loc_830A44AC;
loc_830A44D0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a44e0
	if (!cr6.eq) goto loc_830A44E0;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x830a4518
	goto loc_830A4518;
loc_830A44E0:
	// addi r10,r31,-72
	ctx.r10.s64 = ctx.r31.s64 + -72;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A44E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a450c
	if (cr6.eq) goto loc_830A450C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a44e8
	if (cr6.eq) goto loc_830A44E8;
loc_830A450C:
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r25,r9,r8
	ctx.r25.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_830A4518:
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A4524;
	sub_838FC840(ctx, base);
	// lwz r10,17184(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17184);
	// li r26,3
	ctx.r26.s64 = 3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A4530:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a4554
	if (cr6.eq) goto loc_830A4554;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a4530
	if (cr6.eq) goto loc_830A4530;
loc_830A4554:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a4564
	if (!cr6.eq) goto loc_830A4564;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x830a45d8
	goto loc_830A45D8;
loc_830A4564:
	// addi r10,r31,-52
	ctx.r10.s64 = ctx.r31.s64 + -52;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A456C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a4590
	if (cr6.eq) goto loc_830A4590;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a456c
	if (cr6.eq) goto loc_830A456C;
loc_830A4590:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a45a0
	if (!cr6.eq) goto loc_830A45A0;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x830a45d8
	goto loc_830A45D8;
loc_830A45A0:
	// addi r10,r31,-48
	ctx.r10.s64 = ctx.r31.s64 + -48;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A45A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a45cc
	if (cr6.eq) goto loc_830A45CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a45a8
	if (cr6.eq) goto loc_830A45A8;
loc_830A45CC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a45d8
	if (!cr6.eq) goto loc_830A45D8;
	// li r26,1
	ctx.r26.s64 = 1;
loc_830A45D8:
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A45E4;
	sub_838FC840(ctx, base);
	// lwz r10,17184(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17184);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A45F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a4614
	if (cr6.eq) goto loc_830A4614;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a45f0
	if (cr6.eq) goto loc_830A45F0;
loc_830A4614:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a4624
	if (!cr6.eq) goto loc_830A4624;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x830a4698
	goto loc_830A4698;
loc_830A4624:
	// addi r10,r31,-28
	ctx.r10.s64 = ctx.r31.s64 + -28;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A462C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a4650
	if (cr6.eq) goto loc_830A4650;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a462c
	if (cr6.eq) goto loc_830A462C;
loc_830A4650:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a4660
	if (!cr6.eq) goto loc_830A4660;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x830a4698
	goto loc_830A4698;
loc_830A4660:
	// addi r10,r31,-24
	ctx.r10.s64 = ctx.r31.s64 + -24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A4668:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a468c
	if (cr6.eq) goto loc_830A468C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a4668
	if (cr6.eq) goto loc_830A4668;
loc_830A468C:
	// subfic r11,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r9.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_830A4698:
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A46A4;
	sub_838FC840(ctx, base);
	// lwz r10,17184(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17184);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A46B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a46d4
	if (cr6.eq) goto loc_830A46D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a46b0
	if (cr6.eq) goto loc_830A46B0;
loc_830A46D4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a46e4
	if (!cr6.eq) goto loc_830A46E4;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x830a4754
	goto loc_830A4754;
loc_830A46E4:
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A46EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a4710
	if (cr6.eq) goto loc_830A4710;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a46ec
	if (cr6.eq) goto loc_830A46EC;
loc_830A4710:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a4720
	if (!cr6.eq) goto loc_830A4720;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x830a4754
	goto loc_830A4754;
loc_830A4720:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A4724:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x830a4748
	if (cr6.eq) goto loc_830A4748;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a4724
	if (cr6.eq) goto loc_830A4724;
loc_830A4748:
	// subfic r11,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_830A4754:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a8308
	ctx.lr = 0x830A4760;
	sub_830A8308(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a8328
	ctx.lr = 0x830A476C;
	sub_830A8328(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a83c8
	ctx.lr = 0x830A4778;
	sub_830A83C8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a83d0
	ctx.lr = 0x830A4784;
	sub_830A83D0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a83e0
	ctx.lr = 0x830A4790;
	sub_830A83E0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a83e8
	ctx.lr = 0x830A479C;
	sub_830A83E8(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a83f8
	ctx.lr = 0x830A47A8;
	sub_830A83F8(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a83a0
	ctx.lr = 0x830A47B4;
	sub_830A83A0(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a83a8
	ctx.lr = 0x830A47C0;
	sub_830A83A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a83b8
	ctx.lr = 0x830A47CC;
	sub_830A83B8(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8246be10
	ctx.lr = 0x830A47D8;
	sub_8246BE10(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a8418
	ctx.lr = 0x830A47E4;
	sub_830A8418(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a8428
	ctx.lr = 0x830A47F0;
	sub_830A8428(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a8360
	ctx.lr = 0x830A47FC;
	sub_830A8360(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a8380
	ctx.lr = 0x830A4808;
	sub_830A8380(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x830aca28
	ctx.lr = 0x830A4814;
	sub_830ACA28(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x830ac1f0
	ctx.lr = 0x830A4824;
	sub_830AC1F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A4830"))) PPC_WEAK_FUNC(sub_830A4830);
PPC_FUNC_IMPL(__imp__sub_830A4830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x830A4838;
	__savegprlr_14(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x830a7680
	ctx.lr = 0x830A4854;
	sub_830A7680(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830a7a78
	ctx.lr = 0x830A485C;
	sub_830A7A78(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x830a40d0
	ctx.lr = 0x830A4888;
	sub_830A40D0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r28,r11,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x830A48A8;
	sub_831CDCF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x830A48B8;
	sub_831CE980(ctx, base);
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// bl 0x830a8278
	ctx.lr = 0x830A48C8;
	sub_830A8278(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwzx r30,r9,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwzx r28,r11,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwzx r24,r10,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lwzx r23,r9,r31
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwzx r22,r11,r31
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwzx r21,r10,r31
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lwzx r20,r9,r31
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwzx r19,r11,r31
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwzx r18,r10,r31
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lwzx r17,r9,r31
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwzx r16,r11,r31
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// lwzx r15,r10,r31
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwzx r14,r9,r31
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
	// bl 0x830a8308
	ctx.lr = 0x830A4980;
	sub_830A8308(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830a8328
	ctx.lr = 0x830A498C;
	sub_830A8328(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r21,16
	ctx.r4.u64 = ctx.r21.u32 & 0xFFFF;
	// bl 0x830a83c8
	ctx.lr = 0x830A4998;
	sub_830A83C8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r20,16
	ctx.r4.u64 = ctx.r20.u32 & 0xFFFF;
	// bl 0x830a83d0
	ctx.lr = 0x830A49A4;
	sub_830A83D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r19,16
	ctx.r4.u64 = ctx.r19.u32 & 0xFFFF;
	// bl 0x830a83e0
	ctx.lr = 0x830A49B0;
	sub_830A83E0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r18,16
	ctx.r4.u64 = ctx.r18.u32 & 0xFFFF;
	// bl 0x830a83e8
	ctx.lr = 0x830A49BC;
	sub_830A83E8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r17,16
	ctx.r4.u64 = ctx.r17.u32 & 0xFFFF;
	// bl 0x830a83f8
	ctx.lr = 0x830A49C8;
	sub_830A83F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x830a83a0
	ctx.lr = 0x830A49D4;
	sub_830A83A0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r24,16
	ctx.r4.u64 = ctx.r24.u32 & 0xFFFF;
	// bl 0x830a83a8
	ctx.lr = 0x830A49E0;
	sub_830A83A8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r23,16
	ctx.r4.u64 = ctx.r23.u32 & 0xFFFF;
	// bl 0x830a83b8
	ctx.lr = 0x830A49EC;
	sub_830A83B8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r4,r22,16
	ctx.r4.u64 = ctx.r22.u32 & 0xFFFF;
	// bl 0x8246be10
	ctx.lr = 0x830A49F8;
	sub_8246BE10(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x830a8418
	ctx.lr = 0x830A4A04;
	sub_830A8418(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x830a8360
	ctx.lr = 0x830A4A10;
	sub_830A8360(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x830a8380
	ctx.lr = 0x830A4A1C;
	sub_830A8380(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830a8428
	ctx.lr = 0x830A4A28;
	sub_830A8428(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830aca28
	ctx.lr = 0x830A4A34;
	sub_830ACA28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x830ac1f0
	ctx.lr = 0x830A4A40;
	sub_830AC1F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A4A4C"))) PPC_WEAK_FUNC(sub_830A4A4C);
PPC_FUNC_IMPL(__imp__sub_830A4A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A4A50"))) PPC_WEAK_FUNC(sub_830A4A50);
PPC_FUNC_IMPL(__imp__sub_830A4A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A4A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A4A6C;
	sub_838FBB40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a4b14
	if (cr6.eq) goto loc_830A4B14;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r30,r11,27572
	ctx.r30.s64 = ctx.r11.s64 + 27572;
loc_830A4A80:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A4A8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a4ab0
	if (cr6.eq) goto loc_830A4AB0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a4a8c
	if (cr6.eq) goto loc_830A4A8C;
loc_830A4AB0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a4b20
	if (!cr6.eq) goto loc_830A4B20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A4AC4;
	sub_838FC840(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a4b20
	if (cr6.eq) goto loc_830A4B20;
	// bl 0x830a6ba8
	ctx.lr = 0x830A4AD0;
	sub_830A6BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x830a4af0
	if (cr6.lt) goto loc_830A4AF0;
	// bne cr6,0x830a4b20
	if (!cr6.eq) goto loc_830A4B20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a38b0
	ctx.lr = 0x830A4AEC;
	sub_830A38B0(ctx, base);
	// b 0x830a4b00
	goto loc_830A4B00;
loc_830A4AF0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a42b0
	ctx.lr = 0x830A4B00;
	sub_830A42B0(ctx, base);
loc_830A4B00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A4B08;
	sub_838FBC58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a4a80
	if (!cr6.eq) goto loc_830A4A80;
loc_830A4B14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A4B20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A4B2C"))) PPC_WEAK_FUNC(sub_830A4B2C);
PPC_FUNC_IMPL(__imp__sub_830A4B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A4B30"))) PPC_WEAK_FUNC(sub_830A4B30);
PPC_FUNC_IMPL(__imp__sub_830A4B30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A4B38;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x830A4B5C;
	sub_831CDCF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwzx r28,r11,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x830a4b80
	if (!cr6.eq) goto loc_830A4B80;
loc_830A4B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A4B80:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x830A4B90;
	sub_831CE980(ctx, base);
	// add r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x830a6ba8
	ctx.lr = 0x830A4BA0;
	sub_830A6BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x830a4bcc
	if (cr6.lt) goto loc_830A4BCC;
	// bne cr6,0x830a4b74
	if (!cr6.eq) goto loc_830A4B74;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830a33f8
	ctx.lr = 0x830A4BC0;
	sub_830A33F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A4BCC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830a4830
	ctx.lr = 0x830A4BE0;
	sub_830A4830(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A4BEC"))) PPC_WEAK_FUNC(sub_830A4BEC);
PPC_FUNC_IMPL(__imp__sub_830A4BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A4BF0"))) PPC_WEAK_FUNC(sub_830A4BF0);
PPC_FUNC_IMPL(__imp__sub_830A4BF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x830a4c28
	if (cr6.eq) goto loc_830A4C28;
loc_830A4C14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f73d60
	ctx.lr = 0x830A4C1C;
	sub_82F73D60(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x830a4c14
	if (!cr6.eq) goto loc_830A4C14;
loc_830A4C28:
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

__attribute__((alias("__imp__sub_830A4C40"))) PPC_WEAK_FUNC(sub_830A4C40);
PPC_FUNC_IMPL(__imp__sub_830A4C40) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 4;
	// bl 0x8380edc8
	ctx.lr = 0x830A4C80;
	sub_8380EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830a4cdc
	if (cr6.eq) goto loc_830A4CDC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x830a4cd8
	if (cr6.eq) goto loc_830A4CD8;
loc_830A4CA0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830a4cc8
	if (cr6.eq) goto loc_830A4CC8;
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
loc_830A4CC8:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x830a4ca0
	if (!cr6.eq) goto loc_830A4CA0;
loc_830A4CD8:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_830A4CDC:
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

__attribute__((alias("__imp__sub_830A4CF8"))) PPC_WEAK_FUNC(sub_830A4CF8);
PPC_FUNC_IMPL(__imp__sub_830A4CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x830A4D00;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r14,20
	ctx.r14.s64 = 20;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r19,r3,8
	ctx.r19.s64 = ctx.r3.s64 + 8;
	// mr r16,r29
	ctx.r16.u64 = ctx.r29.u64;
	// divw. r8,r9,r14
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r14.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830a4f14
	if (cr0.eq) goto loc_830A4F14;
	// mr r17,r29
	ctx.r17.u64 = ctx.r29.u64;
	// li r18,24
	ctx.r18.s64 = 24;
	// li r25,15
	ctx.r25.s64 = 15;
	// li r15,2
	ctx.r15.s64 = 2;
loc_830A4D3C:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// add r24,r17,r11
	ctx.r24.u64 = ctx.r17.u64 + ctx.r11.u64;
	// addi r22,r24,4
	ctx.r22.s64 = ctx.r24.s64 + 4;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r18
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r18.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830a4ef4
	if (cr0.eq) goto loc_830A4EF4;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
loc_830A4D64:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x830a4ed4
	if (cr0.eq) goto loc_830A4ED4;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_830A4D8C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r30,r27,r11
	ctx.r30.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830A4DA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a4dc4
	if (cr6.eq) goto loc_830A4DC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a4da0
	if (cr6.eq) goto loc_830A4DA0;
loc_830A4DC4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a4e3c
	if (cr6.eq) goto loc_830A4E3C;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
loc_830A4DDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a4ddc
	if (!cr6.eq) goto loc_830A4DDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830A4E00;
	sub_8259CC28(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x830a3d10
	ctx.lr = 0x830A4E0C;
	sub_830A3D10(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830a4e2c
	if (cr6.lt) goto loc_830A4E2C;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r15.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x830A4E2C;
	sub_825952B8(ctx, base);
loc_830A4E2C:
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_830A4E3C:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
loc_830A4E50:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a4e50
	if (!cr6.eq) goto loc_830A4E50;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x830A4E74;
	sub_8259CC28(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x830a3da8
	ctx.lr = 0x830A4E84;
	sub_830A3DA8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x830a4ea4
	if (cr6.lt) goto loc_830A4EA4;
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x830A4EA4;
	sub_825952B8(ctx, base);
loc_830A4EA4:
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// blt cr6,0x830a4d8c
	if (cr6.lt) goto loc_830A4D8C;
loc_830A4ED4:
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r21,r21,24
	ctx.r21.s64 = ctx.r21.s64 + 24;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r18
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r18.s32);
	// cmplw cr6,r20,r8
	cr6.compare<uint32_t>(ctx.r20.u32, ctx.r8.u32, xer);
	// blt cr6,0x830a4d64
	if (cr6.lt) goto loc_830A4D64;
loc_830A4EF4:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r17,r17,20
	ctx.r17.s64 = ctx.r17.s64 + 20;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r14
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r14.s32);
	// cmplw cr6,r16,r8
	cr6.compare<uint32_t>(ctx.r16.u32, ctx.r8.u32, xer);
	// blt cr6,0x830a4d3c
	if (cr6.lt) goto loc_830A4D3C;
loc_830A4F14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A4F20"))) PPC_WEAK_FUNC(sub_830A4F20);
PPC_FUNC_IMPL(__imp__sub_830A4F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830A4F28;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A4F40;
	sub_838FBB40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a50ec
	if (cr6.eq) goto loc_830A50EC;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r24,-1
	ctx.r24.s64 = -1;
	// li r28,25
	ctx.r28.s64 = 25;
	// li r23,20
	ctx.r23.s64 = 20;
	// addi r26,r11,27536
	ctx.r26.s64 = ctx.r11.s64 + 27536;
loc_830A4F64:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r26,-20
	ctx.r11.s64 = ctx.r26.s64 + -20;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A4F70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a4f94
	if (cr6.eq) goto loc_830A4F94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a4f70
	if (cr6.eq) goto loc_830A4F70;
loc_830A4F94:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a50f8
	if (!cr6.eq) goto loc_830A50F8;
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// bl 0x838fc840
	ctx.lr = 0x830A4FB4;
	sub_838FC840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a500c
	if (cr6.eq) goto loc_830A500C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A4FC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a4fc4
	if (!cr6.eq) goto loc_830A4FC4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82595718
	ctx.lr = 0x830A4FF8;
	sub_82595718(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x830A5008;
	sub_831CE7D8(ctx, base);
	// b 0x830a506c
	goto loc_830A506C;
loc_830A500C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830A5014:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830a5014
	if (!cr6.eq) goto loc_830A5014;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82595718
	ctx.lr = 0x830A5048;
	sub_82595718(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x830A5058;
	sub_831CE7D8(ctx, base);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r23
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r23.s32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
loc_830A506C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A5078;
	sub_838FC840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a50f8
	if (cr6.eq) goto loc_830A50F8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A5088:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a5088
	if (!cr6.eq) goto loc_830A5088;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82595718
	ctx.lr = 0x830A50BC;
	sub_82595718(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x830A50CC;
	sub_831CE7D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r22,8
	ctx.r3.s64 = ctx.r22.s64 + 8;
	// bl 0x831b0e08
	ctx.lr = 0x830A50D8;
	sub_831B0E08(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A50E0;
	sub_838FBC58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a4f64
	if (!cr6.eq) goto loc_830A4F64;
loc_830A50EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830A50F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5104"))) PPC_WEAK_FUNC(sub_830A5104);
PPC_FUNC_IMPL(__imp__sub_830A5104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A5108"))) PPC_WEAK_FUNC(sub_830A5108);
PPC_FUNC_IMPL(__imp__sub_830A5108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x830A5110;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lwzx r22,r11,r6
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x830a5284
	if (cr6.eq) goto loc_830A5284;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r27,25
	ctx.r27.s64 = 25;
	// li r19,20
	ctx.r19.s64 = 20;
loc_830A5154:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x830a51dc
	if (!cr6.eq) goto loc_830A51DC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_830A5180:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830a5180
	if (!cr6.eq) goto loc_830A5180;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82595718
	ctx.lr = 0x830A51B4;
	sub_82595718(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x830A51C4;
	sub_831CE7D8(ctx, base);
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r7,r8,r19
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r19.s32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// b 0x830a5218
	goto loc_830A5218;
loc_830A51DC:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830A51F0;
	sub_82595718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A5208;
	sub_831CE980(ctx, base);
	// stbx r26,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r26.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830A5218:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830a5290
	if (cr6.eq) goto loc_830A5290;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x830A5244;
	sub_82595718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A525C;
	sub_831CE980(ctx, base);
	// stbx r26,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r26.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r20,8
	ctx.r3.s64 = ctx.r20.s64 + 8;
	// bl 0x831b0e08
	ctx.lr = 0x830A5278;
	sub_831B0E08(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r22
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r22.u32, xer);
	// blt cr6,0x830a5154
	if (cr6.lt) goto loc_830A5154;
loc_830A5284:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_830A5290:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A529C"))) PPC_WEAK_FUNC(sub_830A529C);
PPC_FUNC_IMPL(__imp__sub_830A529C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A52A0"))) PPC_WEAK_FUNC(sub_830A52A0);
PPC_FUNC_IMPL(__imp__sub_830A52A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A52A8;
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
	// beq cr6,0x830a52f4
	if (cr6.eq) goto loc_830A52F4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830A52C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830a52e4
	if (cr6.eq) goto loc_830A52E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x830a4c40
	ctx.lr = 0x830A52E4;
	sub_830A4C40(ctx, base);
loc_830A52E4:
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x830a52c0
	if (!cr6.eq) goto loc_830A52C0;
loc_830A52F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5300"))) PPC_WEAK_FUNC(sub_830A5300);
PPC_FUNC_IMPL(__imp__sub_830A5300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A5308;
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
	// ble cr6,0x830a532c
	if (!cr6.gt) goto loc_830A532C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x830A532C;
	sub_831CC150(ctx, base);
loc_830A532C:
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
	// bge cr6,0x830a53e4
	if (!cr6.lt) goto loc_830A53E4;
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
	ctx.lr = 0x830A536C;
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
	// bl 0x830a52a0
	ctx.lr = 0x830A5390;
	sub_830A52A0(ctx, base);
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
	// beq cr6,0x830a53c4
	if (cr6.eq) goto loc_830A53C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x831c2df8
	ctx.lr = 0x830A53B4;
	sub_831C2DF8(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830A53C4;
	sub_825952B8(ctx, base);
loc_830A53C4:
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
loc_830A53E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A53EC"))) PPC_WEAK_FUNC(sub_830A53EC);
PPC_FUNC_IMPL(__imp__sub_830A53EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A53F0"))) PPC_WEAK_FUNC(sub_830A53F0);
PPC_FUNC_IMPL(__imp__sub_830A53F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830A53F8;
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
	// ble cr6,0x830a541c
	if (!cr6.gt) goto loc_830A541C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x830A541C;
	sub_831CC150(ctx, base);
loc_830A541C:
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
	// bge cr6,0x830a54d4
	if (!cr6.lt) goto loc_830A54D4;
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r26,r4,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830A5450;
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
	// beq cr6,0x830a548c
	if (cr6.eq) goto loc_830A548C;
loc_830A5468:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830a547c
	if (cr6.eq) goto loc_830A547C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a8e3a8
	ctx.lr = 0x830A547C;
	sub_82A8E3A8(ctx, base);
loc_830A547C:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x830a5468
	if (!cr6.eq) goto loc_830A5468;
loc_830A548C:
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
	// beq cr6,0x830a54bc
	if (cr6.eq) goto loc_830A54BC;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x830a4bf0
	ctx.lr = 0x830A54AC;
	sub_830A4BF0(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830A54BC;
	sub_825952B8(ctx, base);
loc_830A54BC:
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
loc_830A54D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A54DC"))) PPC_WEAK_FUNC(sub_830A54DC);
PPC_FUNC_IMPL(__imp__sub_830A54DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A54E0"))) PPC_WEAK_FUNC(sub_830A54E0);
PPC_FUNC_IMPL(__imp__sub_830A54E0) {
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
	// li r10,24
	ctx.r10.s64 = 24;
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
	// bl 0x827abb60
	ctx.lr = 0x830A5524;
	sub_827ABB60(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x830a554c
	if (cr6.eq) goto loc_830A554C;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830a52a0
	ctx.lr = 0x830A5548;
	sub_830A52A0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_830A554C:
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

__attribute__((alias("__imp__sub_830A5568"))) PPC_WEAK_FUNC(sub_830A5568);
PPC_FUNC_IMPL(__imp__sub_830A5568) {
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
	// bge cr6,0x830a559c
	if (!cr6.lt) goto loc_830A559C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_830A559C:
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
	// blt cr6,0x830a55cc
	if (cr6.lt) goto loc_830A55CC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_830A55CC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x830a55d8
	if (!cr6.lt) goto loc_830A55D8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_830A55D8:
	// b 0x830a5300
	sub_830A5300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A55DC"))) PPC_WEAK_FUNC(sub_830A55DC);
PPC_FUNC_IMPL(__imp__sub_830A55DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A55E0"))) PPC_WEAK_FUNC(sub_830A55E0);
PPC_FUNC_IMPL(__imp__sub_830A55E0) {
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
	// bge cr6,0x830a5610
	if (!cr6.lt) goto loc_830A5610;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_830A5610:
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
	// blt cr6,0x830a5640
	if (cr6.lt) goto loc_830A5640;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_830A5640:
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x830a564c
	if (!cr6.lt) goto loc_830A564C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_830A564C:
	// b 0x830a53f0
	sub_830A53F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5650"))) PPC_WEAK_FUNC(sub_830A5650);
PPC_FUNC_IMPL(__imp__sub_830A5650) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A5654"))) PPC_WEAK_FUNC(sub_830A5654);
PPC_FUNC_IMPL(__imp__sub_830A5654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A5658"))) PPC_WEAK_FUNC(sub_830A5658);
PPC_FUNC_IMPL(__imp__sub_830A5658) {
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
	// bge cr6,0x830a5690
	if (!cr6.lt) goto loc_830A5690;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x830a5694
	if (!cr6.gt) goto loc_830A5694;
loc_830A5690:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830A5694:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830a5700
	if (cr6.eq) goto loc_830A5700;
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
	// bne cr6,0x830a56c8
	if (!cr6.eq) goto loc_830A56C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a5568
	ctx.lr = 0x830A56C8;
	sub_830A5568(ctx, base);
loc_830A56C8:
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
	// beq cr6,0x830a5740
	if (cr6.eq) goto loc_830A5740;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// b 0x830a5738
	goto loc_830A5738;
loc_830A5700:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830a5718
	if (!cr6.eq) goto loc_830A5718;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a5568
	ctx.lr = 0x830A5718;
	sub_830A5568(ctx, base);
loc_830A5718:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a5740
	if (cr6.eq) goto loc_830A5740;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_830A5738:
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x830a4c40
	ctx.lr = 0x830A5740;
	sub_830A4C40(ctx, base);
loc_830A5740:
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

__attribute__((alias("__imp__sub_830A5764"))) PPC_WEAK_FUNC(sub_830A5764);
PPC_FUNC_IMPL(__imp__sub_830A5764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A5768"))) PPC_WEAK_FUNC(sub_830A5768);
PPC_FUNC_IMPL(__imp__sub_830A5768) {
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
	// bge cr6,0x830a57a0
	if (!cr6.lt) goto loc_830A57A0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x830a57a4
	if (!cr6.gt) goto loc_830A57A4;
loc_830A57A0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830A57A4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830a57f0
	if (cr6.eq) goto loc_830A57F0;
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
	// bne cr6,0x830a57d4
	if (!cr6.eq) goto loc_830A57D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a55e0
	ctx.lr = 0x830A57D4;
	sub_830A55E0(ctx, base);
loc_830A57D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a581c
	if (cr6.eq) goto loc_830A581C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x830a5818
	goto loc_830A5818;
loc_830A57F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830a5808
	if (!cr6.eq) goto loc_830A5808;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a55e0
	ctx.lr = 0x830A5808;
	sub_830A55E0(ctx, base);
loc_830A5808:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a581c
	if (cr6.eq) goto loc_830A581C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_830A5818:
	// bl 0x82a8e3a8
	ctx.lr = 0x830A581C;
	sub_82A8E3A8(ctx, base);
loc_830A581C:
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

__attribute__((alias("__imp__sub_830A5840"))) PPC_WEAK_FUNC(sub_830A5840);
PPC_FUNC_IMPL(__imp__sub_830A5840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830A5848;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830A585C;
	sub_838FBB40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a5a08
	if (cr6.eq) goto loc_830A5A08;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// li r24,4
	ctx.r24.s64 = 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,25
	ctx.r25.s64 = 25;
	// li r22,2
	ctx.r22.s64 = 2;
	// addi r28,r11,27504
	ctx.r28.s64 = ctx.r11.s64 + 27504;
	// addi r26,r10,17188
	ctx.r26.s64 = ctx.r10.s64 + 17188;
loc_830A5888:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r28,-44
	ctx.r11.s64 = ctx.r28.s64 + -44;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_830A5894:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a58b8
	if (cr6.eq) goto loc_830A58B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a5894
	if (cr6.eq) goto loc_830A5894;
loc_830A58B8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a5a14
	if (!cr6.eq) goto loc_830A5A14;
	// addi r4,r28,-36
	ctx.r4.s64 = ctx.r28.s64 + -36;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// bl 0x838fc840
	ctx.lr = 0x830A58E0;
	sub_838FC840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a5a14
	if (cr6.eq) goto loc_830A5A14;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A58F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a58f0
	if (!cr6.eq) goto loc_830A58F0;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82595718
	ctx.lr = 0x830A5924;
	sub_82595718(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x830A5934;
	sub_831CE7D8(ctx, base);
	// addi r4,r28,-12
	ctx.r4.s64 = ctx.r28.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc840
	ctx.lr = 0x830A5940;
	sub_838FC840(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_830A5948:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_830A5950:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x830a5974
	if (cr6.eq) goto loc_830A5974;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a5950
	if (cr6.eq) goto loc_830A5950;
loc_830A5974:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a5990
	if (cr6.eq) goto loc_830A5990;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// blt cr6,0x830a5948
	if (cr6.lt) goto loc_830A5948;
	// b 0x830a5994
	goto loc_830A5994;
loc_830A5990:
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
loc_830A5994:
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// beq cr6,0x830a5a14
	if (cr6.eq) goto loc_830A5A14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fbbc8
	ctx.lr = 0x830A59A8;
	sub_838FBBC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a59c4
	if (cr6.eq) goto loc_830A59C4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x830a4f20
	ctx.lr = 0x830A59C4;
	sub_830A4F20(ctx, base);
loc_830A59C4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// bl 0x830a5658
	ctx.lr = 0x830A59D0;
	sub_830A5658(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830A59D8;
	sub_838FBC58(ctx, base);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830a59f4
	if (cr6.eq) goto loc_830A59F4;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x830A59F4;
	sub_825952B8(ctx, base);
loc_830A59F4:
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// bne cr6,0x830a5888
	if (!cr6.eq) goto loc_830A5888;
loc_830A5A08:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830A5A14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5A20"))) PPC_WEAK_FUNC(sub_830A5A20);
PPC_FUNC_IMPL(__imp__sub_830A5A20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x830A5A28;
	__savegprlr_19(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r20,r11,r5
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x830a5bc8
	if (cr6.eq) goto loc_830A5BC8;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r22,4
	ctx.r22.s64 = 4;
	// li r24,25
	ctx.r24.s64 = 25;
	// li r19,2
	ctx.r19.s64 = 2;
	// addi r23,r11,17204
	ctx.r23.s64 = ctx.r11.s64 + 17204;
loc_830A5A70:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lwzx r29,r10,r28
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// beq cr6,0x830a5bd4
	if (cr6.eq) goto loc_830A5BD4;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831cdcf0
	ctx.lr = 0x830A5AB0;
	sub_831CDCF0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831ce980
	ctx.lr = 0x830A5AC0;
	sub_831CE980(ctx, base);
	// add r6,r31,r29
	ctx.r6.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_830A5AD0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_830A5AD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x830a5afc
	if (cr6.eq) goto loc_830A5AFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a5ad8
	if (cr6.eq) goto loc_830A5AD8;
loc_830A5AFC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a5b18
	if (cr6.eq) goto loc_830A5B18;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// blt cr6,0x830a5ad0
	if (cr6.lt) goto loc_830A5AD0;
	// b 0x830a5b1c
	goto loc_830A5B1C;
loc_830A5B18:
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_830A5B1C:
	// cmplwi cr6,r7,4
	cr6.compare<uint32_t>(ctx.r7.u32, 4, xer);
	// beq cr6,0x830a5bd4
	if (cr6.eq) goto loc_830A5BD4;
	// lwzx r31,r6,r28
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x830a5bd4
	if (cr6.eq) goto loc_830A5BD4;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595718
	ctx.lr = 0x830A5B4C;
	sub_82595718(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A5B64;
	sub_831CE980(ctx, base);
	// stbx r27,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r27.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830a5108
	ctx.lr = 0x830A5B8C;
	sub_830A5108(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x830a5658
	ctx.lr = 0x830A5B98;
	sub_830A5658(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830a5bb0
	if (cr6.eq) goto loc_830A5BB0;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x830A5BB0;
	sub_825952B8(ctx, base);
loc_830A5BB0:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, xer);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// blt cr6,0x830a5a70
	if (cr6.lt) goto loc_830A5A70;
loc_830A5BC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_830A5BD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5BE0"))) PPC_WEAK_FUNC(sub_830A5BE0);
PPC_FUNC_IMPL(__imp__sub_830A5BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A5BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82da8ab0
	ctx.lr = 0x830A5C00;
	sub_82DA8AB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830fe430
	ctx.lr = 0x830A5C08;
	sub_830FE430(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x838fceb8
	ctx.lr = 0x830A5C1C;
	sub_838FCEB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a5c44
	if (!cr6.eq) goto loc_830A5C44;
loc_830A5C28:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830fe470
	ctx.lr = 0x830A5C30;
	sub_830FE470(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x830A5C38;
	sub_82F73D60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830A5C44:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,27556
	ctx.r5.s64 = ctx.r10.s64 + 27556;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x838fd690
	ctx.lr = 0x830A5C60;
	sub_838FD690(ctx, base);
	// bl 0x827ab930
	ctx.lr = 0x830A5C64;
	sub_827AB930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a5c28
	if (cr6.eq) goto loc_830A5C28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a4a50
	ctx.lr = 0x830A5C7C;
	sub_830A4A50(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x830a5768
	ctx.lr = 0x830A5C88;
	sub_830A5768(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830fe470
	ctx.lr = 0x830A5C90;
	sub_830FE470(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x830A5C98;
	sub_82F73D60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5CA4"))) PPC_WEAK_FUNC(sub_830A5CA4);
PPC_FUNC_IMPL(__imp__sub_830A5CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A5CA8"))) PPC_WEAK_FUNC(sub_830A5CA8);
PPC_FUNC_IMPL(__imp__sub_830A5CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A5CB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82da8ab0
	ctx.lr = 0x830A5CC4;
	sub_82DA8AB0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830a5d08
	if (cr6.eq) goto loc_830A5D08;
loc_830A5CDC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830a4b30
	ctx.lr = 0x830A5CF0;
	sub_830A4B30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a5d28
	if (cr6.eq) goto loc_830A5D28;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x830a5cdc
	if (cr6.lt) goto loc_830A5CDC;
loc_830A5D08:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x830a5768
	ctx.lr = 0x830A5D14;
	sub_830A5768(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x830A5D1C;
	sub_82F73D60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A5D28:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x830A5D30;
	sub_82F73D60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5D3C"))) PPC_WEAK_FUNC(sub_830A5D3C);
PPC_FUNC_IMPL(__imp__sub_830A5D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A5D40"))) PPC_WEAK_FUNC(sub_830A5D40);
PPC_FUNC_IMPL(__imp__sub_830A5D40) {
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
	// bl 0x830a5be0
	ctx.lr = 0x830A5D50;
	sub_830A5BE0(ctx, base);
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

__attribute__((alias("__imp__sub_830A5D6C"))) PPC_WEAK_FUNC(sub_830A5D6C);
PPC_FUNC_IMPL(__imp__sub_830A5D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A5D70"))) PPC_WEAK_FUNC(sub_830A5D70);
PPC_FUNC_IMPL(__imp__sub_830A5D70) {
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
	// bl 0x830a5ca8
	ctx.lr = 0x830A5D80;
	sub_830A5CA8(ctx, base);
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

__attribute__((alias("__imp__sub_830A5D9C"))) PPC_WEAK_FUNC(sub_830A5D9C);
PPC_FUNC_IMPL(__imp__sub_830A5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A5DA0"))) PPC_WEAK_FUNC(sub_830A5DA0);
PPC_FUNC_IMPL(__imp__sub_830A5DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A5DA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x830a5e18
	if (cr6.eq) goto loc_830A5E18;
	// lbz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830A5DC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a5df8
	if (cr6.eq) goto loc_830A5DF8;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x831c2df8
	ctx.lr = 0x830A5DE8;
	sub_831C2DF8(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830A5DF8;
	sub_825952B8(ctx, base);
loc_830A5DF8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bne cr6,0x830a5dc8
	if (!cr6.eq) goto loc_830A5DC8;
loc_830A5E18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5E20"))) PPC_WEAK_FUNC(sub_830A5E20);
PPC_FUNC_IMPL(__imp__sub_830A5E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830A5E28;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x830a5ecc
	if (cr6.eq) goto loc_830A5ECC;
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r30,r5,8
	ctx.r30.s64 = ctx.r5.s64 + 8;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,24
	ctx.r25.s64 = 24;
loc_830A5E50:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830a5eb4
	if (cr6.eq) goto loc_830A5EB4;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r26,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r26.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r4,r8,r25
	ctx.r4.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// bl 0x827abb60
	ctx.lr = 0x830A5E8C;
	sub_827ABB60(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830a5eb4
	if (cr6.eq) goto loc_830A5EB4;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x830a52a0
	ctx.lr = 0x830A5EB0;
	sub_830A52A0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_830A5EB4:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, xer);
	// bne cr6,0x830a5e50
	if (!cr6.eq) goto loc_830A5E50;
loc_830A5ECC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5ED8"))) PPC_WEAK_FUNC(sub_830A5ED8);
PPC_FUNC_IMPL(__imp__sub_830A5ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A5EE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,52428
	ctx.r10.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x830a5f04
	if (!cr6.gt) goto loc_830A5F04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x830A5F04;
	sub_831CC150(ctx, base);
loc_830A5F04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,20
	ctx.r27.s64 = 20;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x830a5fbc
	if (!cr6.lt) goto loc_830A5FBC;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x830A5F44;
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
	// bl 0x830a5e20
	ctx.lr = 0x830A5F68;
	sub_830A5E20(ctx, base);
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
	// beq cr6,0x830a5f9c
	if (cr6.eq) goto loc_830A5F9C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x830a5da0
	ctx.lr = 0x830A5F8C;
	sub_830A5DA0(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830A5F9C;
	sub_825952B8(ctx, base);
loc_830A5F9C:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_830A5FBC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A5FC4"))) PPC_WEAK_FUNC(sub_830A5FC4);
PPC_FUNC_IMPL(__imp__sub_830A5FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A5FC8"))) PPC_WEAK_FUNC(sub_830A5FC8);
PPC_FUNC_IMPL(__imp__sub_830A5FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,3276
	ctx.r10.s64 = 214695936;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,20
	ctx.r9.s64 = 20;
	// ori r8,r10,52428
	ctx.r8.u64 = ctx.r10.u64 | 52428;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x830a5ffc
	if (!cr6.lt) goto loc_830A5FFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_830A5FFC:
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
	// blt cr6,0x830a602c
	if (cr6.lt) goto loc_830A602C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_830A602C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x830a6038
	if (!cr6.lt) goto loc_830A6038;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_830A6038:
	// b 0x830a5ed8
	sub_830A5ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A603C"))) PPC_WEAK_FUNC(sub_830A603C);
PPC_FUNC_IMPL(__imp__sub_830A603C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6040"))) PPC_WEAK_FUNC(sub_830A6040);
PPC_FUNC_IMPL(__imp__sub_830A6040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A6048;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,28128
	ctx.r10.s64 = ctx.r11.s64 + 28128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830a3730
	ctx.lr = 0x830A6060;
	sub_830A3730(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x830ac178
	ctx.lr = 0x830A6068;
	sub_830AC178(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a6098
	if (cr6.eq) goto loc_830A6098;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830a4bf0
	ctx.lr = 0x830A6088;
	sub_830A4BF0(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830A6098;
	sub_825952B8(ctx, base);
loc_830A6098:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a60d8
	if (cr6.eq) goto loc_830A60D8;
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x830a5da0
	ctx.lr = 0x830A60C8;
	sub_830A5DA0(ctx, base);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x830A60D8;
	sub_825952B8(ctx, base);
loc_830A60D8:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A60EC"))) PPC_WEAK_FUNC(sub_830A60EC);
PPC_FUNC_IMPL(__imp__sub_830A60EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A60F0"))) PPC_WEAK_FUNC(sub_830A60F0);
PPC_FUNC_IMPL(__imp__sub_830A60F0) {
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
	// bge cr6,0x830a6128
	if (!cr6.lt) goto loc_830A6128;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x830a612c
	if (!cr6.gt) goto loc_830A612C;
loc_830A6128:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830A612C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830a6190
	if (cr6.eq) goto loc_830A6190;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x830a6160
	if (!cr6.eq) goto loc_830A6160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a5fc8
	ctx.lr = 0x830A6160;
	sub_830A5FC8(ctx, base);
loc_830A6160:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x830a61c8
	if (cr6.eq) goto loc_830A61C8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x830a61c0
	goto loc_830A61C0;
loc_830A6190:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830a61a8
	if (!cr6.eq) goto loc_830A61A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830a5fc8
	ctx.lr = 0x830A61A8;
	sub_830A5FC8(ctx, base);
loc_830A61A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a61c8
	if (cr6.eq) goto loc_830A61C8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_830A61C0:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x830a54e0
	ctx.lr = 0x830A61C8;
	sub_830A54E0(ctx, base);
loc_830A61C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
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

__attribute__((alias("__imp__sub_830A61EC"))) PPC_WEAK_FUNC(sub_830A61EC);
PPC_FUNC_IMPL(__imp__sub_830A61EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A61F0"))) PPC_WEAK_FUNC(sub_830A61F0);
PPC_FUNC_IMPL(__imp__sub_830A61F0) {
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
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28128
	ctx.r9.s64 = ctx.r10.s64 + 28128;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x830ac0f0
	ctx.lr = 0x830A6238;
	sub_830AC0F0(ctx, base);
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

__attribute__((alias("__imp__sub_830A6250"))) PPC_WEAK_FUNC(sub_830A6250);
PPC_FUNC_IMPL(__imp__sub_830A6250) {
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
	// bl 0x830a6040
	ctx.lr = 0x830A6270;
	sub_830A6040(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a6288
	if (cr6.eq) goto loc_830A6288;
	// bl 0x82416268
	ctx.lr = 0x830A6284;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830A6288:
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

__attribute__((alias("__imp__sub_830A62A0"))) PPC_WEAK_FUNC(sub_830A62A0);
PPC_FUNC_IMPL(__imp__sub_830A62A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A62A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x830fe430
	ctx.lr = 0x830A62D4;
	sub_830FE430(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x838fceb8
	ctx.lr = 0x830A62E8;
	sub_838FCEB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a6310
	if (!cr6.eq) goto loc_830A6310;
loc_830A62F4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830fe470
	ctx.lr = 0x830A62FC;
	sub_830FE470(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ad160
	ctx.lr = 0x830A6304;
	sub_827AD160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A6310:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,27452
	ctx.r29.s64 = ctx.r11.s64 + 27452;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r29,-12
	ctx.r5.s64 = ctx.r29.s64 + -12;
	// bl 0x838fd690
	ctx.lr = 0x830A6330;
	sub_838FD690(ctx, base);
	// bl 0x827ab930
	ctx.lr = 0x830A6334;
	sub_827AB930(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a62f4
	if (cr6.eq) goto loc_830A62F4;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// bl 0x838fc840
	ctx.lr = 0x830A6348;
	sub_838FC840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a62f4
	if (cr6.eq) goto loc_830A62F4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830A6358:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a6358
	if (!cr6.eq) goto loc_830A6358;
	// li r10,25
	ctx.r10.s64 = 25;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82595718
	ctx.lr = 0x830A6390;
	sub_82595718(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x830A63A0;
	sub_831CE7D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fbbc8
	ctx.lr = 0x830A63AC;
	sub_838FBBC8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a62f4
	if (cr6.eq) goto loc_830A62F4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830a5840
	ctx.lr = 0x830A63C4;
	sub_830A5840(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x830a60f0
	ctx.lr = 0x830A63D0;
	sub_830A60F0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830fe470
	ctx.lr = 0x830A63D8;
	sub_830FE470(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ad160
	ctx.lr = 0x830A63E0;
	sub_827AD160(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A63EC"))) PPC_WEAK_FUNC(sub_830A63EC);
PPC_FUNC_IMPL(__imp__sub_830A63EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A63F0"))) PPC_WEAK_FUNC(sub_830A63F0);
PPC_FUNC_IMPL(__imp__sub_830A63F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A63F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// bne cr6,0x830a6438
	if (!cr6.eq) goto loc_830A6438;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ad160
	ctx.lr = 0x830A642C;
	sub_827AD160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A6438:
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830A6450;
	sub_82595718(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A6464;
	sub_831CE980(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stbx r30,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r30.u8);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830a5a20
	ctx.lr = 0x830A6484;
	sub_830A5A20(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,8
	ctx.r3.s64 = ctx.r27.s64 + 8;
	// bl 0x830a60f0
	ctx.lr = 0x830A6490;
	sub_830A60F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ad160
	ctx.lr = 0x830A6498;
	sub_827AD160(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A64A4"))) PPC_WEAK_FUNC(sub_830A64A4);
PPC_FUNC_IMPL(__imp__sub_830A64A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A64A8"))) PPC_WEAK_FUNC(sub_830A64A8);
PPC_FUNC_IMPL(__imp__sub_830A64A8) {
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
	// bl 0x830a62a0
	ctx.lr = 0x830A64B8;
	sub_830A62A0(ctx, base);
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

__attribute__((alias("__imp__sub_830A64D4"))) PPC_WEAK_FUNC(sub_830A64D4);
PPC_FUNC_IMPL(__imp__sub_830A64D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A64D8"))) PPC_WEAK_FUNC(sub_830A64D8);
PPC_FUNC_IMPL(__imp__sub_830A64D8) {
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
	// bl 0x830a63f0
	ctx.lr = 0x830A64E8;
	sub_830A63F0(ctx, base);
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

__attribute__((alias("__imp__sub_830A6504"))) PPC_WEAK_FUNC(sub_830A6504);
PPC_FUNC_IMPL(__imp__sub_830A6504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6508"))) PPC_WEAK_FUNC(sub_830A6508);
PPC_FUNC_IMPL(__imp__sub_830A6508) {
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
	// bl 0x830a6b78
	ctx.lr = 0x830A6520;
	sub_830A6B78(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// li r11,142
	ctx.r11.s64 = 142;
	// addi r9,r10,30928
	ctx.r9.s64 = ctx.r10.s64 + 30928;
	// lis r8,30976
	ctx.r8.s64 = 2030043136;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stb r11,17(r31)
	PPC_STORE_U8(ctx.r31.u32 + 17, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830A6558"))) PPC_WEAK_FUNC(sub_830A6558);
PPC_FUNC_IMPL(__imp__sub_830A6558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,30928
	ctx.r10.s64 = ctx.r11.s64 + 30928;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830a6b98
	sub_830A6B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A6568"))) PPC_WEAK_FUNC(sub_830A6568);
PPC_FUNC_IMPL(__imp__sub_830A6568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r8,r10,17324
	ctx.r8.s64 = ctx.r10.s64 + 17324;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830A6584:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_830A658C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x830a65b0
	if (cr6.eq) goto loc_830A65B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a658c
	if (cr6.eq) goto loc_830A658C;
loc_830A65B0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a65bc
	if (!cr6.eq) goto loc_830A65BC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_830A65BC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x830a6584
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A6584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A65CC"))) PPC_WEAK_FUNC(sub_830A65CC);
PPC_FUNC_IMPL(__imp__sub_830A65CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A65D0"))) PPC_WEAK_FUNC(sub_830A65D0);
PPC_FUNC_IMPL(__imp__sub_830A65D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r8,r10,17336
	ctx.r8.s64 = ctx.r10.s64 + 17336;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_830A65EC:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_830A65F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x830a6618
	if (cr6.eq) goto loc_830A6618;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a65f4
	if (cr6.eq) goto loc_830A65F4;
loc_830A6618:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a6624
	if (!cr6.eq) goto loc_830A6624;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_830A6624:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x830a65ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A65EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6634"))) PPC_WEAK_FUNC(sub_830A6634);
PPC_FUNC_IMPL(__imp__sub_830A6634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6638"))) PPC_WEAK_FUNC(sub_830A6638);
PPC_FUNC_IMPL(__imp__sub_830A6638) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6648"))) PPC_WEAK_FUNC(sub_830A6648);
PPC_FUNC_IMPL(__imp__sub_830A6648) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6654"))) PPC_WEAK_FUNC(sub_830A6654);
PPC_FUNC_IMPL(__imp__sub_830A6654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6658"))) PPC_WEAK_FUNC(sub_830A6658);
PPC_FUNC_IMPL(__imp__sub_830A6658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r4,29,1,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0x60000000) | (ctx.r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6668"))) PPC_WEAK_FUNC(sub_830A6668);
PPC_FUNC_IMPL(__imp__sub_830A6668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,3,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6674"))) PPC_WEAK_FUNC(sub_830A6674);
PPC_FUNC_IMPL(__imp__sub_830A6674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6678"))) PPC_WEAK_FUNC(sub_830A6678);
PPC_FUNC_IMPL(__imp__sub_830A6678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r4,20,10,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x300000) | (ctx.r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6688"))) PPC_WEAK_FUNC(sub_830A6688);
PPC_FUNC_IMPL(__imp__sub_830A6688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,12,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6694"))) PPC_WEAK_FUNC(sub_830A6694);
PPC_FUNC_IMPL(__imp__sub_830A6694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6698"))) PPC_WEAK_FUNC(sub_830A6698);
PPC_FUNC_IMPL(__imp__sub_830A6698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x830a66a8
	if (!cr6.gt) goto loc_830A66A8;
	// li r4,100
	ctx.r4.s64 = 100;
loc_830A66A8:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r11,r10,22,3,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 22) & 0x1FC00000) | (ctx.r11.u64 & 0xFFFFFFFFE03FFFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A66BC"))) PPC_WEAK_FUNC(sub_830A66BC);
PPC_FUNC_IMPL(__imp__sub_830A66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A66C0"))) PPC_WEAK_FUNC(sub_830A66C0);
PPC_FUNC_IMPL(__imp__sub_830A66C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,10,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A66CC"))) PPC_WEAK_FUNC(sub_830A66CC);
PPC_FUNC_IMPL(__imp__sub_830A66CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A66D0"))) PPC_WEAK_FUNC(sub_830A66D0);
PPC_FUNC_IMPL(__imp__sub_830A66D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,17,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A66DC"))) PPC_WEAK_FUNC(sub_830A66DC);
PPC_FUNC_IMPL(__imp__sub_830A66DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A66E0"))) PPC_WEAK_FUNC(sub_830A66E0);
PPC_FUNC_IMPL(__imp__sub_830A66E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,27,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A66EC"))) PPC_WEAK_FUNC(sub_830A66EC);
PPC_FUNC_IMPL(__imp__sub_830A66EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A66F0"))) PPC_WEAK_FUNC(sub_830A66F0);
PPC_FUNC_IMPL(__imp__sub_830A66F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,17
	ctx.r3.s64 = ctx.r3.s64 + 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A66F8"))) PPC_WEAK_FUNC(sub_830A66F8);
PPC_FUNC_IMPL(__imp__sub_830A66F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,22,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6704"))) PPC_WEAK_FUNC(sub_830A6704);
PPC_FUNC_IMPL(__imp__sub_830A6704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6708"))) PPC_WEAK_FUNC(sub_830A6708);
PPC_FUNC_IMPL(__imp__sub_830A6708) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6714"))) PPC_WEAK_FUNC(sub_830A6714);
PPC_FUNC_IMPL(__imp__sub_830A6714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6718"))) PPC_WEAK_FUNC(sub_830A6718);
PPC_FUNC_IMPL(__imp__sub_830A6718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(ctx.r11.u32, 81, xer);
	// blt cr6,0x830a6730
	if (cr6.lt) goto loc_830A6730;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(ctx.r11.u32, 87, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_830A6730:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6738"))) PPC_WEAK_FUNC(sub_830A6738);
PPC_FUNC_IMPL(__imp__sub_830A6738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,17352
	ctx.r8.s64 = ctx.r11.s64 + 17352;
loc_830A6744:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830A674C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a6770
	if (cr6.eq) goto loc_830A6770;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a674c
	if (cr6.eq) goto loc_830A674C;
loc_830A6770:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,142
	cr6.compare<uint32_t>(ctx.r3.u32, 142, xer);
	// blt cr6,0x830a6744
	if (cr6.lt) goto loc_830A6744;
	// li r3,142
	ctx.r3.s64 = 142;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6790"))) PPC_WEAK_FUNC(sub_830A6790);
PPC_FUNC_IMPL(__imp__sub_830A6790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,17920
	ctx.r8.s64 = ctx.r11.s64 + 17920;
loc_830A679C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830A67A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x830a67c8
	if (cr6.eq) goto loc_830A67C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a67a4
	if (cr6.eq) goto loc_830A67A4;
loc_830A67C8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// blt cr6,0x830a679c
	if (cr6.lt) goto loc_830A679C;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A67E8"))) PPC_WEAK_FUNC(sub_830A67E8);
PPC_FUNC_IMPL(__imp__sub_830A67E8) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,30928
	ctx.r10.s64 = ctx.r11.s64 + 30928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830a6b98
	ctx.lr = 0x830A6814;
	sub_830A6B98(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830a682c
	if (cr6.eq) goto loc_830A682C;
	// bl 0x82416268
	ctx.lr = 0x830A6828;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830A682C:
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

__attribute__((alias("__imp__sub_830A6844"))) PPC_WEAK_FUNC(sub_830A6844);
PPC_FUNC_IMPL(__imp__sub_830A6844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6848"))) PPC_WEAK_FUNC(sub_830A6848);
PPC_FUNC_IMPL(__imp__sub_830A6848) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x830a6738
	ctx.lr = 0x830A685C;
	sub_830A6738(ctx, base);
	// stb r3,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6870"))) PPC_WEAK_FUNC(sub_830A6870);
PPC_FUNC_IMPL(__imp__sub_830A6870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A6878;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ce7d8
	ctx.lr = 0x830A6890;
	sub_831CE7D8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,30832
	ctx.r30.s64 = ctx.r11.s64 + 30832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-2608
	ctx.r4.s64 = ctx.r30.s64 + -2608;
	// bl 0x831d9200
	ctx.lr = 0x830A68B0;
	sub_831D9200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a69d4
	if (cr6.eq) goto loc_830A69D4;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// li r27,100
	ctx.r27.s64 = 100;
loc_830A68C4:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_830A68D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a68f8
	if (cr6.eq) goto loc_830A68F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a68d4
	if (cr6.eq) goto loc_830A68D4;
loc_830A68F8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a6908
	if (!cr6.eq) goto loc_830A6908;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830a693c
	goto loc_830A693C;
loc_830A6908:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_830A6910:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a6934
	if (cr6.eq) goto loc_830A6934;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a6910
	if (cr6.eq) goto loc_830A6910;
loc_830A6934:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_830A693C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a69a0
	if (cr6.eq) goto loc_830A69A0;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x830A6950;
	sub_831D88A0(ctx, base);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
loc_830A6964:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a6988
	if (cr6.eq) goto loc_830A6988;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a6964
	if (cr6.eq) goto loc_830A6964;
loc_830A6988:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a6994
	if (!cr6.eq) goto loc_830A6994;
	// divwu r3,r3,r27
	ctx.r3.u32 = PPCDivide(ctx.r3.u32, ctx.r27.u32);
loc_830A6994:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r3,5,22,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0x3E0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC1F);
	// b 0x830a69b4
	goto loc_830A69B4;
loc_830A69A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a6790
	ctx.lr = 0x830A69AC;
	sub_830A6790(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r3,15,12,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 15) & 0xF8000) | (ctx.r11.u64 & 0xFFFFFFFFFFF07FFF);
loc_830A69B4:
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r4,r30,-2604
	ctx.r4.s64 = ctx.r30.s64 + -2604;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9200
	ctx.lr = 0x830A69C8;
	sub_831D9200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a68c4
	if (!cr6.eq) goto loc_830A68C4;
loc_830A69D4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A69DC"))) PPC_WEAK_FUNC(sub_830A69DC);
PPC_FUNC_IMPL(__imp__sub_830A69DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A69E0"))) PPC_WEAK_FUNC(sub_830A69E0);
PPC_FUNC_IMPL(__imp__sub_830A69E0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x830a6738
	ctx.lr = 0x830A69F4;
	sub_830A6738(ctx, base);
	// stb r3,17(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6A08"))) PPC_WEAK_FUNC(sub_830A6A08);
PPC_FUNC_IMPL(__imp__sub_830A6A08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A6A10;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831ce7d8
	ctx.lr = 0x830A6A28;
	sub_831CE7D8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,30832
	ctx.r30.s64 = ctx.r11.s64 + 30832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,-2600
	ctx.r4.s64 = ctx.r30.s64 + -2600;
	// bl 0x831d9200
	ctx.lr = 0x830A6A48;
	sub_831D9200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a6b6c
	if (cr6.eq) goto loc_830A6B6C;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// li r27,100
	ctx.r27.s64 = 100;
loc_830A6A5C:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_830A6A6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a6a90
	if (cr6.eq) goto loc_830A6A90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a6a6c
	if (cr6.eq) goto loc_830A6A6C;
loc_830A6A90:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a6aa0
	if (!cr6.eq) goto loc_830A6AA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830a6ad4
	goto loc_830A6AD4;
loc_830A6AA0:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_830A6AA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a6acc
	if (cr6.eq) goto loc_830A6ACC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a6aa8
	if (cr6.eq) goto loc_830A6AA8;
loc_830A6ACC:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_830A6AD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a6b38
	if (cr6.eq) goto loc_830A6B38;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x830A6AE8;
	sub_831D88A0(ctx, base);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// addi r10,r1,82
	ctx.r10.s64 = ctx.r1.s64 + 82;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
loc_830A6AFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a6b20
	if (cr6.eq) goto loc_830A6B20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a6afc
	if (cr6.eq) goto loc_830A6AFC;
loc_830A6B20:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830a6b2c
	if (!cr6.eq) goto loc_830A6B2C;
	// divwu r3,r3,r27
	ctx.r3.u32 = PPCDivide(ctx.r3.u32, ctx.r27.u32);
loc_830A6B2C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r3,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x830a6b4c
	goto loc_830A6B4C;
loc_830A6B38:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830a6790
	ctx.lr = 0x830A6B44;
	sub_830A6790(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwimi r11,r3,10,17,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 10) & 0x7C00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF83FF);
loc_830A6B4C:
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r4,r30,-2596
	ctx.r4.s64 = ctx.r30.s64 + -2596;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831d9200
	ctx.lr = 0x830A6B60;
	sub_831D9200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a6a5c
	if (!cr6.eq) goto loc_830A6A5C;
loc_830A6B6C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A6B74"))) PPC_WEAK_FUNC(sub_830A6B74);
PPC_FUNC_IMPL(__imp__sub_830A6B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6B78"))) PPC_WEAK_FUNC(sub_830A6B78);
PPC_FUNC_IMPL(__imp__sub_830A6B78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,27344
	ctx.r9.s64 = ctx.r11.s64 + 27344;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6B94"))) PPC_WEAK_FUNC(sub_830A6B94);
PPC_FUNC_IMPL(__imp__sub_830A6B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6B98"))) PPC_WEAK_FUNC(sub_830A6B98);
PPC_FUNC_IMPL(__imp__sub_830A6B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,27344
	ctx.r10.s64 = ctx.r11.s64 + 27344;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6BA8"))) PPC_WEAK_FUNC(sub_830A6BA8);
PPC_FUNC_IMPL(__imp__sub_830A6BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31773
	ctx.r10.s64 = -2082275328;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,18152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18152);
loc_830A6BB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830a6bd8
	if (cr6.eq) goto loc_830A6BD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a6bb4
	if (cr6.eq) goto loc_830A6BB4;
loc_830A6BD8:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6BE4"))) PPC_WEAK_FUNC(sub_830A6BE4);
PPC_FUNC_IMPL(__imp__sub_830A6BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6BE8"))) PPC_WEAK_FUNC(sub_830A6BE8);
PPC_FUNC_IMPL(__imp__sub_830A6BE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6BF8"))) PPC_WEAK_FUNC(sub_830A6BF8);
PPC_FUNC_IMPL(__imp__sub_830A6BF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,23236(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23236);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6C04"))) PPC_WEAK_FUNC(sub_830A6C04);
PPC_FUNC_IMPL(__imp__sub_830A6C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6C08"))) PPC_WEAK_FUNC(sub_830A6C08);
PPC_FUNC_IMPL(__imp__sub_830A6C08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6C10"))) PPC_WEAK_FUNC(sub_830A6C10);
PPC_FUNC_IMPL(__imp__sub_830A6C10) {
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
	// bl 0x82596fa8
	ctx.lr = 0x830A6C28;
	sub_82596FA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x830a6e20
	ctx.lr = 0x830A6C34;
	sub_830A6E20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x830ab040
	ctx.lr = 0x830A6C40;
	sub_830AB040(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x830a6be8
	ctx.lr = 0x830A6C4C;
	sub_830A6BE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x830ab6f0
	ctx.lr = 0x830A6C58;
	sub_830AB6F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x830a7568
	ctx.lr = 0x830A6C64;
	sub_830A7568(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x838b2d20
	ctx.lr = 0x830A6C70;
	sub_838B2D20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830ae500
	ctx.lr = 0x830A6C7C;
	sub_830AE500(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830a71e8
	ctx.lr = 0x830A6C88;
	sub_830A71E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x830ae400
	ctx.lr = 0x830A6C94;
	sub_830AE400(ctx, base);
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

__attribute__((alias("__imp__sub_830A6CAC"))) PPC_WEAK_FUNC(sub_830A6CAC);
PPC_FUNC_IMPL(__imp__sub_830A6CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6CB0"))) PPC_WEAK_FUNC(sub_830A6CB0);
PPC_FUNC_IMPL(__imp__sub_830A6CB0) {
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
	// addi r3,r3,176
	ctx.r3.s64 = ctx.r3.s64 + 176;
	// bl 0x83102db0
	ctx.lr = 0x830A6CCC;
	sub_83102DB0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830a7238
	ctx.lr = 0x830A6CD4;
	sub_830A7238(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x830ae578
	ctx.lr = 0x830A6CDC;
	sub_830AE578(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x83102db0
	ctx.lr = 0x830A6CE4;
	sub_83102DB0(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x83102db0
	ctx.lr = 0x830A6CEC;
	sub_83102DB0(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x83102db0
	ctx.lr = 0x830A6CF4;
	sub_83102DB0(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x83102db0
	ctx.lr = 0x830A6CFC;
	sub_83102DB0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x83102db0
	ctx.lr = 0x830A6D04;
	sub_83102DB0(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x83102db0
	ctx.lr = 0x830A6D0C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596f90
	ctx.lr = 0x830A6D14;
	sub_82596F90(ctx, base);
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

__attribute__((alias("__imp__sub_830A6D28"))) PPC_WEAK_FUNC(sub_830A6D28);
PPC_FUNC_IMPL(__imp__sub_830A6D28) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r11,23236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a6d8c
	if (!cr6.eq) goto loc_830A6D8C;
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,276
	ctx.r4.s64 = 276;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830A6D60;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a6d84
	if (cr6.eq) goto loc_830A6D84;
	// bl 0x830a6c10
	ctx.lr = 0x830A6D6C;
	sub_830A6C10(ctx, base);
	// stw r3,23236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23236, ctx.r3.u32);
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
loc_830A6D84:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23236, ctx.r11.u32);
loc_830A6D8C:
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

__attribute__((alias("__imp__sub_830A6DA0"))) PPC_WEAK_FUNC(sub_830A6DA0);
PPC_FUNC_IMPL(__imp__sub_830A6DA0) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r11,23236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a6e04
	if (cr6.eq) goto loc_830A6E04;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830A6DD8;
	sub_82595150(ctx, base);
	// lwz r30,23236(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23236);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830a6df4
	if (cr6.eq) goto loc_830A6DF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a6cb0
	ctx.lr = 0x830A6DEC;
	sub_830A6CB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A6DF4;
	sub_82416268(ctx, base);
loc_830A6DF4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830A6DFC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23236, ctx.r11.u32);
loc_830A6E04:
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

__attribute__((alias("__imp__sub_830A6E1C"))) PPC_WEAK_FUNC(sub_830A6E1C);
PPC_FUNC_IMPL(__imp__sub_830A6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6E20"))) PPC_WEAK_FUNC(sub_830A6E20);
PPC_FUNC_IMPL(__imp__sub_830A6E20) {
	PPC_FUNC_PROLOGUE();
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A6E40"))) PPC_WEAK_FUNC(sub_830A6E40);
PPC_FUNC_IMPL(__imp__sub_830A6E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A6E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A6E60;
	sub_82596FE8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x830A6E6C;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A6E74"))) PPC_WEAK_FUNC(sub_830A6E74);
PPC_FUNC_IMPL(__imp__sub_830A6E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6E78"))) PPC_WEAK_FUNC(sub_830A6E78);
PPC_FUNC_IMPL(__imp__sub_830A6E78) {
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
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A6E9C;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82597088
	ctx.lr = 0x830A6EA8;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_830A6EC4"))) PPC_WEAK_FUNC(sub_830A6EC4);
PPC_FUNC_IMPL(__imp__sub_830A6EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6EC8"))) PPC_WEAK_FUNC(sub_830A6EC8);
PPC_FUNC_IMPL(__imp__sub_830A6EC8) {
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
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A6EEC;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82597088
	ctx.lr = 0x830A6EF8;
	sub_82597088(ctx, base);
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

__attribute__((alias("__imp__sub_830A6F14"))) PPC_WEAK_FUNC(sub_830A6F14);
PPC_FUNC_IMPL(__imp__sub_830A6F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6F18"))) PPC_WEAK_FUNC(sub_830A6F18);
PPC_FUNC_IMPL(__imp__sub_830A6F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A6F20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A6F38;
	sub_82596FE8(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x830A6F44;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A6F4C"))) PPC_WEAK_FUNC(sub_830A6F4C);
PPC_FUNC_IMPL(__imp__sub_830A6F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6F50"))) PPC_WEAK_FUNC(sub_830A6F50);
PPC_FUNC_IMPL(__imp__sub_830A6F50) {
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
	// bl 0x82596fa8
	ctx.lr = 0x830A6F68;
	sub_82596FA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x830ae950
	ctx.lr = 0x830A6F84;
	sub_830AE950(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x830ae7f0
	ctx.lr = 0x830A6F8C;
	sub_830AE7F0(ctx, base);
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

__attribute__((alias("__imp__sub_830A6FA4"))) PPC_WEAK_FUNC(sub_830A6FA4);
PPC_FUNC_IMPL(__imp__sub_830A6FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A6FA8"))) PPC_WEAK_FUNC(sub_830A6FA8);
PPC_FUNC_IMPL(__imp__sub_830A6FA8) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r11,23256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a7010
	if (!cr6.eq) goto loc_830A7010;
	// li r11,25
	ctx.r11.s64 = 25;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,29452
	ctx.r4.u64 = ctx.r4.u64 | 29452;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830A6FE4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a7008
	if (cr6.eq) goto loc_830A7008;
	// bl 0x830a6f50
	ctx.lr = 0x830A6FF0;
	sub_830A6F50(ctx, base);
	// stw r3,23256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23256, ctx.r3.u32);
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
loc_830A7008:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23256, ctx.r11.u32);
loc_830A7010:
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

__attribute__((alias("__imp__sub_830A7024"))) PPC_WEAK_FUNC(sub_830A7024);
PPC_FUNC_IMPL(__imp__sub_830A7024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7028"))) PPC_WEAK_FUNC(sub_830A7028);
PPC_FUNC_IMPL(__imp__sub_830A7028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,23256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23256);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7034"))) PPC_WEAK_FUNC(sub_830A7034);
PPC_FUNC_IMPL(__imp__sub_830A7034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7038"))) PPC_WEAK_FUNC(sub_830A7038);
PPC_FUNC_IMPL(__imp__sub_830A7038) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r11.u8);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x830aeb18
	sub_830AEB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A704C"))) PPC_WEAK_FUNC(sub_830A704C);
PPC_FUNC_IMPL(__imp__sub_830A704C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7050"))) PPC_WEAK_FUNC(sub_830A7050);
PPC_FUNC_IMPL(__imp__sub_830A7050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A7058;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a7114
	if (!cr6.eq) goto loc_830A7114;
	// lbz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7114
	if (cr6.eq) goto loc_830A7114;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae9b0
	ctx.lr = 0x830A708C;
	sub_830AE9B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7108
	if (cr6.eq) goto loc_830A7108;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a70c4
	if (cr6.eq) goto loc_830A70C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae9d0
	ctx.lr = 0x830A70B4;
	sub_830AE9D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ae9e8
	ctx.lr = 0x830A70C0;
	sub_830AE9E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_830A70C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830af3f8
	ctx.lr = 0x830A70D0;
	sub_830AF3F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x825832f8
	ctx.lr = 0x830A70DC;
	sub_825832F8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af468
	ctx.lr = 0x830A70F0;
	sub_830AF468(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,33(r31)
	PPC_STORE_U8(ctx.r31.u32 + 33, ctx.r11.u8);
	// bl 0x83102db0
	ctx.lr = 0x830A7100;
	sub_83102DB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830af140
	ctx.lr = 0x830A7108;
	sub_830AF140(ctx, base);
loc_830A7108:
	// lbz r3,33(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 33);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A7114:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7120"))) PPC_WEAK_FUNC(sub_830A7120);
PPC_FUNC_IMPL(__imp__sub_830A7120) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r4,44
	ctx.r4.s64 = ctx.r4.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a18a78
	ctx.lr = 0x830A7140;
	sub_82A18A78(ctx, base);
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

__attribute__((alias("__imp__sub_830A7158"))) PPC_WEAK_FUNC(sub_830A7158);
PPC_FUNC_IMPL(__imp__sub_830A7158) {
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
	// lis r30,-31754
	ctx.r30.s64 = -2081030144;
	// lwz r11,23256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a71cc
	if (cr6.eq) goto loc_830A71CC;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830A7190;
	sub_82595150(ctx, base);
	// lwz r31,23256(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23256);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830a71bc
	if (cr6.eq) goto loc_830A71BC;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x830ae868
	ctx.lr = 0x830A71A4;
	sub_830AE868(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x830aea00
	ctx.lr = 0x830A71AC;
	sub_830AEA00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596f90
	ctx.lr = 0x830A71B4;
	sub_82596F90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x830A71BC;
	sub_82416268(ctx, base);
loc_830A71BC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830A71C4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23256, ctx.r11.u32);
loc_830A71CC:
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

__attribute__((alias("__imp__sub_830A71E4"))) PPC_WEAK_FUNC(sub_830A71E4);
PPC_FUNC_IMPL(__imp__sub_830A71E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A71E8"))) PPC_WEAK_FUNC(sub_830A71E8);
PPC_FUNC_IMPL(__imp__sub_830A71E8) {
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
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8ab0
	ctx.lr = 0x830A7210;
	sub_82DA8AB0(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ea848
	ctx.lr = 0x830A721C;
	sub_830EA848(ctx, base);
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

__attribute__((alias("__imp__sub_830A7238"))) PPC_WEAK_FUNC(sub_830A7238);
PPC_FUNC_IMPL(__imp__sub_830A7238) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x830ea7f8
	sub_830EA7F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7240"))) PPC_WEAK_FUNC(sub_830A7240);
PPC_FUNC_IMPL(__imp__sub_830A7240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A7248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A7264;
	sub_82596FE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x830ea708
	ctx.lr = 0x830A7274;
	sub_830EA708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x830A7280;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A728C"))) PPC_WEAK_FUNC(sub_830A728C);
PPC_FUNC_IMPL(__imp__sub_830A728C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7290"))) PPC_WEAK_FUNC(sub_830A7290);
PPC_FUNC_IMPL(__imp__sub_830A7290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A7298;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A72B0;
	sub_82596FE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x830ea738
	ctx.lr = 0x830A72BC;
	sub_830EA738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x830A72C8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A72D4"))) PPC_WEAK_FUNC(sub_830A72D4);
PPC_FUNC_IMPL(__imp__sub_830A72D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A72D8"))) PPC_WEAK_FUNC(sub_830A72D8);
PPC_FUNC_IMPL(__imp__sub_830A72D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A72E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A72FC;
	sub_82596FE8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x830ea768
	ctx.lr = 0x830A730C;
	sub_830EA768(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x830A7318;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7324"))) PPC_WEAK_FUNC(sub_830A7324);
PPC_FUNC_IMPL(__imp__sub_830A7324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7328"))) PPC_WEAK_FUNC(sub_830A7328);
PPC_FUNC_IMPL(__imp__sub_830A7328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830A7330;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A7344;
	sub_82596FE8(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r28,6132(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x830a7374
	if (!cr6.lt) goto loc_830A7374;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x830a737c
	if (cr6.eq) goto loc_830A737C;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x830a7374
	if (!cr6.lt) goto loc_830A7374;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830a737c
	if (cr6.eq) goto loc_830A737C;
loc_830A7374:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830a7380
	goto loc_830A7380;
loc_830A737C:
	// li r31,1
	ctx.r31.s64 = 1;
loc_830A7380:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a26898
	ctx.lr = 0x830A738C;
	sub_82A26898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a73a4
	if (!cr6.eq) goto loc_830A73A4;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7554
	if (cr6.eq) goto loc_830A7554;
loc_830A73A4:
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a26898
	ctx.lr = 0x830A73BC;
	sub_82A26898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7480
	if (cr6.eq) goto loc_830A7480;
	// lbz r11,569(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 569);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7480
	if (cr6.eq) goto loc_830A7480;
	// lis r10,0
	ctx.r10.s64 = 0;
	// twllei r11,0
	// ori r9,r10,48708
	ctx.r9.u64 = ctx.r10.u64 | 48708;
	// lbzx r8,r28,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r9.u32);
	// divwu. r11,r8,r11
	ctx.r11.u32 = PPCDivide(ctx.r8.u32, ctx.r11.u32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x830a73f8
	if (!cr0.eq) goto loc_830A73F8;
	// li r30,50
	ctx.r30.s64 = 50;
	// b 0x830a7424
	goto loc_830A7424;
loc_830A73F8:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x830a7408
	if (!cr6.eq) goto loc_830A7408;
	// li r30,51
	ctx.r30.s64 = 51;
	// b 0x830a7424
	goto loc_830A7424;
loc_830A7408:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x830a7418
	if (!cr6.eq) goto loc_830A7418;
	// li r30,52
	ctx.r30.s64 = 52;
	// b 0x830a7424
	goto loc_830A7424;
loc_830A7418:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x830a7424
	if (!cr6.eq) goto loc_830A7424;
	// li r30,53
	ctx.r30.s64 = 53;
loc_830A7424:
	// lwz r24,0(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A7430;
	sub_82596FE8(ctx, base);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ea7c0
	ctx.lr = 0x830A7440;
	sub_830EA7C0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82597088
	ctx.lr = 0x830A744C;
	sub_82597088(ctx, base);
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a7480
	if (!cr6.eq) goto loc_830A7480;
	// lwz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A7464;
	sub_82596FE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ea768
	ctx.lr = 0x830A7474;
	sub_830EA768(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x830A747C;
	sub_82597088(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_830A7480:
	// lbz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r31,r11,55
	ctx.r31.s64 = ctx.r11.s64 + 55;
	// bl 0x82596fe8
	ctx.lr = 0x830A74A0;
	sub_82596FE8(ctx, base);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ea7c0
	ctx.lr = 0x830A74B0;
	sub_830EA7C0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x830A74BC;
	sub_82597088(ctx, base);
	// clrlwi r8,r24,24
	ctx.r8.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830a74f0
	if (!cr6.eq) goto loc_830A74F0;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A74D4;
	sub_82596FE8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ea768
	ctx.lr = 0x830A74E4;
	sub_830EA768(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x830A74EC;
	sub_82597088(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_830A74F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_830A74F4:
	// cmplwi cr6,r31,15
	cr6.compare<uint32_t>(ctx.r31.u32, 15, xer);
	// ble cr6,0x830a7544
	if (!cr6.gt) goto loc_830A7544;
	// cmplwi cr6,r31,31
	cr6.compare<uint32_t>(ctx.r31.u32, 31, xer);
	// bgt cr6,0x830a750c
	if (cr6.gt) goto loc_830A750C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// b 0x830a7518
	goto loc_830A7518;
loc_830A750C:
	// cmplwi cr6,r31,47
	cr6.compare<uint32_t>(ctx.r31.u32, 47, xer);
	// bgt cr6,0x830a7544
	if (cr6.gt) goto loc_830A7544;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
loc_830A7518:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7544
	if (cr6.eq) goto loc_830A7544;
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A752C;
	sub_82596FE8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ea768
	ctx.lr = 0x830A753C;
	sub_830EA768(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x830A7544;
	sub_82597088(ctx, base);
loc_830A7544:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,48
	cr6.compare<uint32_t>(ctx.r31.u32, 48, xer);
	// blt cr6,0x830a74f4
	if (cr6.lt) goto loc_830A74F4;
loc_830A7554:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82597088
	ctx.lr = 0x830A755C;
	sub_82597088(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7564"))) PPC_WEAK_FUNC(sub_830A7564);
PPC_FUNC_IMPL(__imp__sub_830A7564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7568"))) PPC_WEAK_FUNC(sub_830A7568);
PPC_FUNC_IMPL(__imp__sub_830A7568) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A757C"))) PPC_WEAK_FUNC(sub_830A757C);
PPC_FUNC_IMPL(__imp__sub_830A757C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7580"))) PPC_WEAK_FUNC(sub_830A7580);
PPC_FUNC_IMPL(__imp__sub_830A7580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_830A7594:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stwu r10,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a7594
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A7594;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_830A75F4:
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830a75f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_830A75F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7604"))) PPC_WEAK_FUNC(sub_830A7604);
PPC_FUNC_IMPL(__imp__sub_830A7604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7608"))) PPC_WEAK_FUNC(sub_830A7608);
PPC_FUNC_IMPL(__imp__sub_830A7608) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r11,23288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a766c
	if (!cr6.eq) goto loc_830A766C;
	// li r11,25
	ctx.r11.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,528
	ctx.r4.s64 = 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830A7640;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a7664
	if (cr6.eq) goto loc_830A7664;
	// bl 0x830a7580
	ctx.lr = 0x830A764C;
	sub_830A7580(ctx, base);
	// stw r3,23288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23288, ctx.r3.u32);
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
loc_830A7664:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23288, ctx.r11.u32);
loc_830A766C:
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

__attribute__((alias("__imp__sub_830A7680"))) PPC_WEAK_FUNC(sub_830A7680);
PPC_FUNC_IMPL(__imp__sub_830A7680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// lwz r3,23288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A768C"))) PPC_WEAK_FUNC(sub_830A768C);
PPC_FUNC_IMPL(__imp__sub_830A768C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7690"))) PPC_WEAK_FUNC(sub_830A7690);
PPC_FUNC_IMPL(__imp__sub_830A7690) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,28,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xF0000000;
	// or r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 | ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A769C"))) PPC_WEAK_FUNC(sub_830A769C);
PPC_FUNC_IMPL(__imp__sub_830A769C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A76A0"))) PPC_WEAK_FUNC(sub_830A76A0);
PPC_FUNC_IMPL(__imp__sub_830A76A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A76A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bge cr6,0x830a76fc
	if (!cr6.lt) goto loc_830A76FC;
	// addi r11,r4,6
	ctx.r11.s64 = ctx.r4.s64 + 6;
	// li r10,25
	ctx.r10.s64 = 25;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r6,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r6.u32);
	// bl 0x82595718
	ctx.lr = 0x830A76E8;
	sub_82595718(ctx, base);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stwx r3,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + ctx.r29.u32, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x830A76FC;
	sub_831CE980(ctx, base);
loc_830A76FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7704"))) PPC_WEAK_FUNC(sub_830A7704);
PPC_FUNC_IMPL(__imp__sub_830A7704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7708"))) PPC_WEAK_FUNC(sub_830A7708);
PPC_FUNC_IMPL(__imp__sub_830A7708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xF;
	// clrlwi r10,r4,4
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFFFFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bge cr6,0x830a773c
	if (!cr6.lt) goto loc_830A773C;
	// addi r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 6;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x830a773c
	if (!cr6.gt) goto loc_830A773C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_830A773C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,31982
	ctx.r3.s64 = ctx.r11.s64 + 31982;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7748"))) PPC_WEAK_FUNC(sub_830A7748);
PPC_FUNC_IMPL(__imp__sub_830A7748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x830A7750;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r27,48
	ctx.r31.s64 = ctx.r27.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x830A7780;
	sub_831CE980(ctx, base);
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,52(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lwz r28,56(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lwz r26,60(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	// lwz r25,64(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// lwz r23,68(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// lwz r21,72(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// beq cr6,0x830a77a8
	if (cr6.eq) goto loc_830A77A8;
	// li r11,2
	ctx.r11.s64 = 2;
loc_830A77A8:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// li r20,-1
	ctx.r20.s64 = -1;
	// ori r10,r11,29789
	ctx.r10.u64 = ctx.r11.u64 | 29789;
	// li r24,-5
	ctx.r24.s64 = -5;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830a77d4
	if (cr6.gt) goto loc_830A77D4;
	// mulli r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 * 44;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x830a77d8
	if (!cr6.gt) goto loc_830A77D8;
loc_830A77D4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_830A77D8:
	// li r22,25
	ctx.r22.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830A77EC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a7820
	if (cr6.eq) goto loc_830A7820;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addic. r31,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r31.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x830a7824
	if (cr0.lt) goto loc_830A7824;
loc_830A7808:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af708
	ctx.lr = 0x830A7810;
	sub_830AF708(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bge 0x830a7808
	if (!cr0.lt) goto loc_830A7808;
	// b 0x830a7824
	goto loc_830A7824;
loc_830A7820:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830A7824:
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// stw r29,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r29.u32);
	// ori r10,r11,43690
	ctx.r10.u64 = ctx.r11.u64 | 43690;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830a7850
	if (cr6.gt) goto loc_830A7850;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x830a7854
	if (!cr6.gt) goto loc_830A7854;
loc_830A7850:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_830A7854:
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830A7864;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a7898
	if (cr6.eq) goto loc_830A7898;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addic. r31,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r31.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x830a789c
	if (cr0.lt) goto loc_830A789C;
loc_830A7880:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830acbe8
	ctx.lr = 0x830A7888;
	sub_830ACBE8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bge 0x830a7880
	if (!cr0.lt) goto loc_830A7880;
	// b 0x830a789c
	goto loc_830A789C;
loc_830A7898:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830A789C:
	// lis r11,5461
	ctx.r11.s64 = 357892096;
	// stw r29,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r29.u32);
	// ori r10,r11,21845
	ctx.r10.u64 = ctx.r11.u64 | 21845;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830a78c8
	if (cr6.gt) goto loc_830A78C8;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x830a78cc
	if (!cr6.gt) goto loc_830A78CC;
loc_830A78C8:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_830A78CC:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x830A78DC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a7914
	if (cr6.eq) goto loc_830A7914;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// addic. r31,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r31.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x830a790c
	if (cr0.lt) goto loc_830A790C;
loc_830A78F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af660
	ctx.lr = 0x830A7900;
	sub_830AF660(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bge 0x830a78f8
	if (!cr0.lt) goto loc_830A78F8;
loc_830A790C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x830a7918
	goto loc_830A7918;
loc_830A7914:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A7918:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// stw r11,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r11.u32);
	// ori r28,r10,65535
	ctx.r28.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r25,r28
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r28.u32, xer);
	// bgt cr6,0x830a793c
	if (cr6.gt) goto loc_830A793C;
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x830a7940
	if (!cr6.gt) goto loc_830A7940;
loc_830A793C:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_830A7940:
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82595718
	ctx.lr = 0x830A7950;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a7988
	if (cr6.eq) goto loc_830A7988;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// addic. r31,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r31.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x830a7980
	if (cr0.lt) goto loc_830A7980;
loc_830A796C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af5c8
	ctx.lr = 0x830A7974;
	sub_830AF5C8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x830a796c
	if (!cr0.lt) goto loc_830A796C;
loc_830A7980:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x830a798c
	goto loc_830A798C;
loc_830A7988:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A798C:
	// stw r11,116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 116, ctx.r11.u32);
	// cmplw cr6,r23,r28
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r28.u32, xer);
	// bgt cr6,0x830a79a8
	if (cr6.gt) goto loc_830A79A8;
	// rlwinm r11,r23,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x830a79ac
	if (!cr6.gt) goto loc_830A79AC;
loc_830A79A8:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_830A79AC:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x830A79BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a79f0
	if (cr6.eq) goto loc_830A79F0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// addic. r31,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r31.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x830a79f4
	if (cr0.lt) goto loc_830A79F4;
loc_830A79D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af520
	ctx.lr = 0x830A79E0;
	sub_830AF520(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bge 0x830a79d8
	if (!cr0.lt) goto loc_830A79D8;
	// b 0x830a79f4
	goto loc_830A79F4;
loc_830A79F0:
	// li r29,0
	ctx.r29.s64 = 0;
loc_830A79F4:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r29,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r29.u32);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r21,r10
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830a7a18
	if (cr6.gt) goto loc_830A7A18;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x830a7a1c
	if (!cr6.gt) goto loc_830A7A1C;
loc_830A7A18:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_830A7A1C:
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x830A7A2C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a7a68
	if (cr6.eq) goto loc_830A7A68;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r21.u32);
	// addic. r31,r21,-1
	xer.ca = ctx.r21.u32 > 0;
	ctx.r31.s64 = ctx.r21.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// blt 0x830a7a5c
	if (cr0.lt) goto loc_830A7A5C;
loc_830A7A48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824eecc0
	ctx.lr = 0x830A7A50;
	sub_824EECC0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bge 0x830a7a48
	if (!cr0.lt) goto loc_830A7A48;
loc_830A7A5C:
	// stw r29,124(r27)
	PPC_STORE_U32(ctx.r27.u32 + 124, ctx.r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_830A7A68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,124(r27)
	PPC_STORE_U32(ctx.r27.u32 + 124, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7A78"))) PPC_WEAK_FUNC(sub_830A7A78);
PPC_FUNC_IMPL(__imp__sub_830A7A78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7AA4"))) PPC_WEAK_FUNC(sub_830A7AA4);
PPC_FUNC_IMPL(__imp__sub_830A7AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7AA8"))) PPC_WEAK_FUNC(sub_830A7AA8);
PPC_FUNC_IMPL(__imp__sub_830A7AA8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7ADC"))) PPC_WEAK_FUNC(sub_830A7ADC);
PPC_FUNC_IMPL(__imp__sub_830A7ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7AE0"))) PPC_WEAK_FUNC(sub_830A7AE0);
PPC_FUNC_IMPL(__imp__sub_830A7AE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r7.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7B14"))) PPC_WEAK_FUNC(sub_830A7B14);
PPC_FUNC_IMPL(__imp__sub_830A7B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7B18"))) PPC_WEAK_FUNC(sub_830A7B18);
PPC_FUNC_IMPL(__imp__sub_830A7B18) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r8.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7B44"))) PPC_WEAK_FUNC(sub_830A7B44);
PPC_FUNC_IMPL(__imp__sub_830A7B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7B48"))) PPC_WEAK_FUNC(sub_830A7B48);
PPC_FUNC_IMPL(__imp__sub_830A7B48) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r9,120(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r8,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r8.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7B74"))) PPC_WEAK_FUNC(sub_830A7B74);
PPC_FUNC_IMPL(__imp__sub_830A7B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7B78"))) PPC_WEAK_FUNC(sub_830A7B78);
PPC_FUNC_IMPL(__imp__sub_830A7B78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r9,124(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r8.u32);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A7BA4"))) PPC_WEAK_FUNC(sub_830A7BA4);
PPC_FUNC_IMPL(__imp__sub_830A7BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7BA8"))) PPC_WEAK_FUNC(sub_830A7BA8);
PPC_FUNC_IMPL(__imp__sub_830A7BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A7BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7c14
	if (cr6.eq) goto loc_830A7C14;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 * 44;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x830a7bf4
	if (cr0.lt) goto loc_830A7BF4;
loc_830A7BE0:
	// addi r30,r30,-44
	ctx.r30.s64 = ctx.r30.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af750
	ctx.lr = 0x830A7BEC;
	sub_830AF750(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x830a7be0
	if (!cr0.lt) goto loc_830A7BE0;
loc_830A7BF4:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7c08
	if (cr6.eq) goto loc_830A7C08;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7C08;
	sub_82416268(ctx, base);
loc_830A7C08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A7C14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af750
	ctx.lr = 0x830A7C1C;
	sub_830AF750(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7c30
	if (cr6.eq) goto loc_830A7C30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7C30;
	sub_82416268(ctx, base);
loc_830A7C30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7C3C"))) PPC_WEAK_FUNC(sub_830A7C3C);
PPC_FUNC_IMPL(__imp__sub_830A7C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7C40"))) PPC_WEAK_FUNC(sub_830A7C40);
PPC_FUNC_IMPL(__imp__sub_830A7C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A7C48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7cb4
	if (cr6.eq) goto loc_830A7CB4;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x830a7c94
	if (cr0.lt) goto loc_830A7C94;
loc_830A7C80:
	// addi r30,r30,-24
	ctx.r30.s64 = ctx.r30.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830acc30
	ctx.lr = 0x830A7C8C;
	sub_830ACC30(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x830a7c80
	if (!cr0.lt) goto loc_830A7C80;
loc_830A7C94:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7ca8
	if (cr6.eq) goto loc_830A7CA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7CA8;
	sub_82416268(ctx, base);
loc_830A7CA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A7CB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830acc30
	ctx.lr = 0x830A7CBC;
	sub_830ACC30(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7cd0
	if (cr6.eq) goto loc_830A7CD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7CD0;
	sub_82416268(ctx, base);
loc_830A7CD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7CDC"))) PPC_WEAK_FUNC(sub_830A7CDC);
PPC_FUNC_IMPL(__imp__sub_830A7CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7CE0"))) PPC_WEAK_FUNC(sub_830A7CE0);
PPC_FUNC_IMPL(__imp__sub_830A7CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A7CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7d54
	if (cr6.eq) goto loc_830A7D54;
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r31,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x830a7d34
	if (cr0.lt) goto loc_830A7D34;
loc_830A7D20:
	// addi r30,r30,-12
	ctx.r30.s64 = ctx.r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af6a8
	ctx.lr = 0x830A7D2C;
	sub_830AF6A8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x830a7d20
	if (!cr0.lt) goto loc_830A7D20;
loc_830A7D34:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7d48
	if (cr6.eq) goto loc_830A7D48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7D48;
	sub_82416268(ctx, base);
loc_830A7D48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A7D54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af6a8
	ctx.lr = 0x830A7D5C;
	sub_830AF6A8(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7d70
	if (cr6.eq) goto loc_830A7D70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7D70;
	sub_82416268(ctx, base);
loc_830A7D70:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7D7C"))) PPC_WEAK_FUNC(sub_830A7D7C);
PPC_FUNC_IMPL(__imp__sub_830A7D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7D80"))) PPC_WEAK_FUNC(sub_830A7D80);
PPC_FUNC_IMPL(__imp__sub_830A7D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A7D88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7dec
	if (cr6.eq) goto loc_830A7DEC;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x830a7dcc
	if (cr0.lt) goto loc_830A7DCC;
loc_830A7DB8:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af610
	ctx.lr = 0x830A7DC4;
	sub_830AF610(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x830a7db8
	if (!cr0.lt) goto loc_830A7DB8;
loc_830A7DCC:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7de0
	if (cr6.eq) goto loc_830A7DE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7DE0;
	sub_82416268(ctx, base);
loc_830A7DE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A7DEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af610
	ctx.lr = 0x830A7DF4;
	sub_830AF610(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7e08
	if (cr6.eq) goto loc_830A7E08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7E08;
	sub_82416268(ctx, base);
loc_830A7E08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7E14"))) PPC_WEAK_FUNC(sub_830A7E14);
PPC_FUNC_IMPL(__imp__sub_830A7E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7E18"))) PPC_WEAK_FUNC(sub_830A7E18);
PPC_FUNC_IMPL(__imp__sub_830A7E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A7E20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7e84
	if (cr6.eq) goto loc_830A7E84;
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addic. r31,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt 0x830a7e64
	if (cr0.lt) goto loc_830A7E64;
loc_830A7E50:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af568
	ctx.lr = 0x830A7E5C;
	sub_830AF568(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x830a7e50
	if (!cr0.lt) goto loc_830A7E50;
loc_830A7E64:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7e78
	if (cr6.eq) goto loc_830A7E78;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7E78;
	sub_82416268(ctx, base);
loc_830A7E78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A7E84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af568
	ctx.lr = 0x830A7E8C;
	sub_830AF568(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7ea0
	if (cr6.eq) goto loc_830A7EA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A7EA0;
	sub_82416268(ctx, base);
loc_830A7EA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A7EAC"))) PPC_WEAK_FUNC(sub_830A7EAC);
PPC_FUNC_IMPL(__imp__sub_830A7EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A7EB0"))) PPC_WEAK_FUNC(sub_830A7EB0);
PPC_FUNC_IMPL(__imp__sub_830A7EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A7EB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r28,r3,108
	ctx.r28.s64 = ctx.r3.s64 + 108;
	// li r24,6
	ctx.r24.s64 = 6;
	// li r27,25
	ctx.r27.s64 = 25;
	// li r26,0
	ctx.r26.s64 = 0;
loc_830A7ED0:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830a7eec
	if (cr6.eq) goto loc_830A7EEC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x830A7EE8;
	sub_825952B8(ctx, base);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
loc_830A7EEC:
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7f50
	if (cr6.eq) goto loc_830A7F50;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x830A7F08;
	sub_82595150(ctx, base);
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7f44
	if (cr6.eq) goto loc_830A7F44;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a7f40
	if (cr6.eq) goto loc_830A7F40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A7F3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830a7f44
	goto loc_830A7F44;
loc_830A7F40:
	// bl 0x82416268
	ctx.lr = 0x830A7F44;
	sub_82416268(ctx, base);
loc_830A7F44:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x830A7F4C;
	sub_82595170(ctx, base);
	// stw r26,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r26.u32);
loc_830A7F50:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7fb4
	if (cr6.eq) goto loc_830A7FB4;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595150
	ctx.lr = 0x830A7F6C;
	sub_82595150(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a7fa8
	if (cr6.eq) goto loc_830A7FA8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a7fa4
	if (cr6.eq) goto loc_830A7FA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A7FA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830a7fa8
	goto loc_830A7FA8;
loc_830A7FA4:
	// bl 0x82416268
	ctx.lr = 0x830A7FA8;
	sub_82416268(ctx, base);
loc_830A7FA8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595170
	ctx.lr = 0x830A7FB0;
	sub_82595170(ctx, base);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
loc_830A7FB4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a8018
	if (cr6.eq) goto loc_830A8018;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595150
	ctx.lr = 0x830A7FD0;
	sub_82595150(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a800c
	if (cr6.eq) goto loc_830A800C;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a8008
	if (cr6.eq) goto loc_830A8008;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A8004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830a800c
	goto loc_830A800C;
loc_830A8008:
	// bl 0x82416268
	ctx.lr = 0x830A800C;
	sub_82416268(ctx, base);
loc_830A800C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595170
	ctx.lr = 0x830A8014;
	sub_82595170(ctx, base);
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
loc_830A8018:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a807c
	if (cr6.eq) goto loc_830A807C;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595150
	ctx.lr = 0x830A8034;
	sub_82595150(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a8070
	if (cr6.eq) goto loc_830A8070;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a806c
	if (cr6.eq) goto loc_830A806C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A8068;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830a8070
	goto loc_830A8070;
loc_830A806C:
	// bl 0x82416268
	ctx.lr = 0x830A8070;
	sub_82416268(ctx, base);
loc_830A8070:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82595170
	ctx.lr = 0x830A8078;
	sub_82595170(ctx, base);
	// stw r26,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r26.u32);
loc_830A807C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a80e0
	if (cr6.eq) goto loc_830A80E0;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595150
	ctx.lr = 0x830A8098;
	sub_82595150(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a80d4
	if (cr6.eq) goto loc_830A80D4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x830a80d0
	if (cr6.eq) goto loc_830A80D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830A80CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830a80d4
	goto loc_830A80D4;
loc_830A80D0:
	// bl 0x82416268
	ctx.lr = 0x830A80D4;
	sub_82416268(ctx, base);
loc_830A80D4:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82595170
	ctx.lr = 0x830A80DC;
	sub_82595170(ctx, base);
	// stw r26,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r26.u32);
loc_830A80E0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a8148
	if (cr6.eq) goto loc_830A8148;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82595150
	ctx.lr = 0x830A80FC;
	sub_82595150(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a813c
	if (cr6.eq) goto loc_830A813C;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r31,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r31.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt 0x830a8134
	if (cr0.lt) goto loc_830A8134;
loc_830A8120:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x830A812C;
	sub_83102DB0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge 0x830a8120
	if (!cr0.lt) goto loc_830A8120;
loc_830A8134:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x830A813C;
	sub_82416268(ctx, base);
loc_830A813C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82595170
	ctx.lr = 0x830A8144;
	sub_82595170(ctx, base);
	// stw r26,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r26.u32);
loc_830A8148:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r28,r28,80
	ctx.r28.s64 = ctx.r28.s64 + 80;
	// bne 0x830a7ed0
	if (!cr0.eq) goto loc_830A7ED0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8160"))) PPC_WEAK_FUNC(sub_830A8160);
PPC_FUNC_IMPL(__imp__sub_830A8160) {
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
	// lis r31,-31754
	ctx.r31.s64 = -2081030144;
	// lwz r11,23288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a81c4
	if (cr6.eq) goto loc_830A81C4;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830A8198;
	sub_82595150(ctx, base);
	// lwz r30,23288(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23288);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830a81b4
	if (cr6.eq) goto loc_830A81B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a7eb0
	ctx.lr = 0x830A81AC;
	sub_830A7EB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830A81B4;
	sub_82416268(ctx, base);
loc_830A81B4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830A81BC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23288, ctx.r11.u32);
loc_830A81C4:
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

__attribute__((alias("__imp__sub_830A81DC"))) PPC_WEAK_FUNC(sub_830A81DC);
PPC_FUNC_IMPL(__imp__sub_830A81DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A81E0"))) PPC_WEAK_FUNC(sub_830A81E0);
PPC_FUNC_IMPL(__imp__sub_830A81E0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830a6b78
	ctx.lr = 0x830A81FC;
	sub_830A6B78(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,24
	ctx.r10.s64 = 1572864;
	// addi r9,r11,27348
	ctx.r9.s64 = ctx.r11.s64 + 27348;
	// ori r8,r10,51707
	ctx.r8.u64 = ctx.r10.u64 | 51707;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwimi r6,r8,11,0,20
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0xFFFFF800) | (ctx.r6.u64 & 0xFFFFFFFF000007FF);
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// sth r11,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r11.u16);
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
	// sth r11,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r11.u16);
	// sth r11,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// sth r11,30(r31)
	PPC_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// sth r7,34(r31)
	PPC_STORE_U16(ctx.r31.u32 + 34, ctx.r7.u16);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_830A8264"))) PPC_WEAK_FUNC(sub_830A8264);
PPC_FUNC_IMPL(__imp__sub_830A8264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8268"))) PPC_WEAK_FUNC(sub_830A8268);
PPC_FUNC_IMPL(__imp__sub_830A8268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r10,r11,27348
	ctx.r10.s64 = ctx.r11.s64 + 27348;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830a6b98
	sub_830A6B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8278"))) PPC_WEAK_FUNC(sub_830A8278);
PPC_FUNC_IMPL(__imp__sub_830A8278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r8,r11,19024
	ctx.r8.s64 = ctx.r11.s64 + 19024;
	// li r6,0
	ctx.r6.s64 = 0;
loc_830A828C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_830A8294:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x830a82b8
	if (cr6.eq) goto loc_830A82B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a8294
	if (cr6.eq) goto loc_830A8294;
loc_830A82B8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830a82d4
	if (cr6.eq) goto loc_830A82D4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// blt cr6,0x830a828c
	if (cr6.lt) goto loc_830A828C;
	// blr 
	return;
loc_830A82D4:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A82DC"))) PPC_WEAK_FUNC(sub_830A82DC);
PPC_FUNC_IMPL(__imp__sub_830A82DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A82E0"))) PPC_WEAK_FUNC(sub_830A82E0);
PPC_FUNC_IMPL(__imp__sub_830A82E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x830a82f8
	if (cr6.lt) goto loc_830A82F8;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(ctx.r11.s32, 23, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x830a82fc
	if (!cr6.gt) goto loc_830A82FC;
loc_830A82F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A82FC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8304"))) PPC_WEAK_FUNC(sub_830A8304);
PPC_FUNC_IMPL(__imp__sub_830A8304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8308"))) PPC_WEAK_FUNC(sub_830A8308);
PPC_FUNC_IMPL(__imp__sub_830A8308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r4,27,0,4
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 27) & 0xF8000000) | (ctx.r11.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8318"))) PPC_WEAK_FUNC(sub_830A8318);
PPC_FUNC_IMPL(__imp__sub_830A8318) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,5,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// blr 
	return;
}

