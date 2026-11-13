#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83299990"))) PPC_WEAK_FUNC(sub_83299990);
PPC_FUNC_IMPL(__imp__sub_83299990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83299998;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83299a30
	if (cr6.eq) goto loc_83299A30;
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwz r29,4(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// beq cr6,0x83299a14
	if (cr6.eq) goto loc_83299A14;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// bge cr6,0x832999cc
	if (!cr6.lt) goto loc_832999CC;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x832999d4
	goto loc_832999D4;
loc_832999CC:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_832999D4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8329df98
	ctx.lr = 0x832999DC;
	sub_8329DF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83299a00
	if (!cr6.eq) goto loc_83299A00;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,8323
	ctx.r4.u64 = ctx.r4.u64 | 8323;
	// bl 0x8329a350
	ctx.lr = 0x832999F8;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83299A00:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83299A10;
	sub_83293EC8(ctx, base);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_83299A14:
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83299A30:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r4,24(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299A74"))) PPC_WEAK_FUNC(sub_83299A74);
PPC_FUNC_IMPL(__imp__sub_83299A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299A78"))) PPC_WEAK_FUNC(sub_83299A78);
PPC_FUNC_IMPL(__imp__sub_83299A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83299A80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x83299A98;
	sub_8329E9C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83299aac
	if (!cr6.lt) goto loc_83299AAC;
loc_83299AA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83299AAC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,128
	cr6.compare<uint32_t>(ctx.r3.u32, 128, xer);
	// bge cr6,0x83299adc
	if (!cr6.lt) goto loc_83299ADC;
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// bge cr6,0x83299ad0
	if (!cr6.lt) goto loc_83299AD0;
loc_83299AC0:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8645
	ctx.r3.u64 = ctx.r3.u64 | 8645;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83299AD0:
	// addi r30,r3,-63
	ctx.r30.s64 = ctx.r3.s64 + -63;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x83299b04
	goto loc_83299B04;
loc_83299ADC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x83299AE4;
	sub_8329E9C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299aa0
	if (cr6.lt) goto loc_83299AA0;
	// rlwinm r11,r31,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// addi r30,r11,-32703
	ctx.r30.s64 = ctx.r11.s64 + -32703;
	// cmplwi cr6,r30,4096
	cr6.compare<uint32_t>(ctx.r30.u32, 4096, xer);
	// bgt cr6,0x83299ac0
	if (cr6.gt) goto loc_83299AC0;
	// li r28,2
	ctx.r28.s64 = 2;
loc_83299B04:
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(ctx.r30.s32, 8, xer);
	// bge cr6,0x83299b14
	if (!cr6.lt) goto loc_83299B14;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x83299b1c
	goto loc_83299B1C;
loc_83299B14:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_83299B1C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8329df98
	ctx.lr = 0x83299B24;
	sub_8329DF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83299b40
	if (!cr6.eq) goto loc_83299B40;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8323
	ctx.r3.u64 = ctx.r3.u64 | 8323;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83299B40:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329e900
	ctx.lr = 0x83299B50;
	sub_8329E900(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83299b74
	if (!cr6.lt) goto loc_83299B74;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8329e1d0
	ctx.lr = 0x83299B68;
	sub_8329E1D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83299B74:
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// stb r11,27(r27)
	PPC_STORE_U8(ctx.r27.u32 + 27, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299B90"))) PPC_WEAK_FUNC(sub_83299B90);
PPC_FUNC_IMPL(__imp__sub_83299B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83299B98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83299bc0
	if (cr0.eq) goto loc_83299BC0;
	// bl 0x83299a78
	ctx.lr = 0x83299BB8;
	sub_83299A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83299BC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x83299BC8;
	sub_8329E9C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299c2c
	if (cr6.lt) goto loc_83299C2C;
	// cmpwi cr6,r3,36
	cr6.compare<int32_t>(ctx.r3.s32, 36, xer);
	// ble cr6,0x83299be8
	if (!cr6.gt) goto loc_83299BE8;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8645
	ctx.r3.u64 = ctx.r3.u64 | 8645;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83299BE8:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r30,r9,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r8,r30,7
	ctx.r8.s64 = ctx.r30.s64 + 7;
	// srawi r5,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// rlwinm r6,r7,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r10.u32);
	// bl 0x8329e900
	ctx.lr = 0x83299C18;
	sub_8329E900(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299c2c
	if (cr6.lt) goto loc_83299C2C;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r11,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
loc_83299C2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299C34"))) PPC_WEAK_FUNC(sub_83299C34);
PPC_FUNC_IMPL(__imp__sub_83299C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83299C38"))) PPC_WEAK_FUNC(sub_83299C38);
PPC_FUNC_IMPL(__imp__sub_83299C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83299C40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83299cf4
	if (cr0.eq) goto loc_83299CF4;
	// lwz r29,4(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r29,64
	cr6.compare<uint32_t>(ctx.r29.u32, 64, xer);
	// bgt cr6,0x83299c80
	if (cr6.gt) goto loc_83299C80;
	// addi r11,r29,63
	ctx.r11.s64 = ctx.r29.s64 + 63;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x83299C78;
	sub_8329CED8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83299cbc
	goto loc_83299CBC;
loc_83299C80:
	// addi r11,r29,32703
	ctx.r11.s64 = ctx.r29.s64 + 32703;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r4,r30,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x83299C90;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83299ca0
	if (!cr6.lt) goto loc_83299CA0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83299cbc
	goto loc_83299CBC;
loc_83299CA0:
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ced8
	ctx.lr = 0x83299CAC;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// blt cr6,0x83299cbc
	if (cr6.lt) goto loc_83299CBC;
	// li r30,2
	ctx.r30.s64 = 2;
loc_83299CBC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x83299cd0
	if (!cr6.lt) goto loc_83299CD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83299CD0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ce00
	ctx.lr = 0x83299CE0;
	sub_8329CE00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299d38
	if (cr6.lt) goto loc_83299D38;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83299CF4:
	// lbz r11,27(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 27);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mulli r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 * 21;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x83299D10;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299d38
	if (cr6.lt) goto loc_83299D38;
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ce00
	ctx.lr = 0x83299D2C;
	sub_8329CE00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83299d38
	if (cr6.lt) goto loc_83299D38;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_83299D38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299D40"))) PPC_WEAK_FUNC(sub_83299D40);
PPC_FUNC_IMPL(__imp__sub_83299D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83299D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83299dd0
	if (cr0.eq) goto loc_83299DD0;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(ctx.r30.u32, 64, xer);
	// bgt cr6,0x83299da0
	if (cr6.gt) goto loc_83299DA0;
	// addi r11,r30,63
	ctx.r11.s64 = ctx.r30.s64 + 63;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// bl 0x832aa6e0
	ctx.lr = 0x83299D88;
	sub_832AA6E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832aa6e0
	ctx.lr = 0x83299D98;
	sub_832AA6E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83299DA0:
	// addi r11,r30,32703
	ctx.r11.s64 = ctx.r30.s64 + 32703;
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// bl 0x832aa6e0
	ctx.lr = 0x83299DB8;
	sub_832AA6E0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x832aa6e0
	ctx.lr = 0x83299DC8;
	sub_832AA6E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83299DD0:
	// lbz r11,27(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 27);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mulli r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 * 21;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x832aa6e0
	ctx.lr = 0x83299DF4;
	sub_832AA6E0(ctx, base);
	// addi r8,r30,7
	ctx.r8.s64 = ctx.r30.s64 + 7;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r5,r8,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x83299E08;
	sub_832AA6E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83299E10"))) PPC_WEAK_FUNC(sub_83299E10);
PPC_FUNC_IMPL(__imp__sub_83299E10) {
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
	// lbz r11,27(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83299edc
	if (cr6.eq) goto loc_83299EDC;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r4,21
	ctx.r10.s64 = ctx.r4.s64 * 21;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// srawi r11,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 7;
	// addi r8,r4,6
	ctx.r8.s64 = ctx.r4.s64 + 6;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// bge cr6,0x83299e70
	if (!cr6.lt) goto loc_83299E70;
loc_83299E64:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8196
	ctx.r3.u64 = ctx.r3.u64 | 8196;
	// b 0x83299f08
	goto loc_83299F08;
loc_83299E70:
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r6,14384(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14384);
loc_83299E80:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// blt cr6,0x83299ea0
	if (cr6.lt) goto loc_83299EA0;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r9,26
	ctx.r8.u64 = ctx.r9.u32 & 0x3F;
	// lbzx r5,r8,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// b 0x83299ec4
	goto loc_83299EC4;
loc_83299EA0:
	// subfic r9,r11,6
	xer.ca = ctx.r11.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r11.s64;
	// addi r11,r11,26
	ctx.r11.s64 = ctx.r11.s64 + 26;
	// slw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwzu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r5,r8,26
	ctx.r5.u64 = ctx.r8.u32 & 0x3F;
	// lbzx r9,r5,r6
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r6.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_83299EC4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addic. r4,r4,-6
	xer.ca = ctx.r4.u32 > 5;
	ctx.r4.s64 = ctx.r4.s64 + -6;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bgt 0x83299e80
	if (cr0.gt) goto loc_83299E80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x83299f08
	goto loc_83299F08;
loc_83299EDC:
	// lwz r30,4(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// blt cr6,0x83299e64
	if (cr6.lt) goto loc_83299E64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83299EFC;
	sub_83293EC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
loc_83299F08:
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

__attribute__((alias("__imp__sub_83299F20"))) PPC_WEAK_FUNC(sub_83299F20);
PPC_FUNC_IMPL(__imp__sub_83299F20) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x83299f58
	if (cr6.eq) goto loc_83299F58;
loc_83299F44:
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
loc_83299F58:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bgt cr6,0x8329a030
	if (cr6.gt) goto loc_8329A030;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8329a01c
	if (cr6.eq) goto loc_8329A01C;
	// bdz 0x8329a00c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329A00C;
	// bdz 0x83299ffc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83299FFC;
	// bdz 0x83299fec
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83299FEC;
	// bdz 0x83299fdc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83299FDC;
	// bdz 0x83299fcc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83299FCC;
	// bdz 0x83299fc4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_83299FC4;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x83299f44
	if (!cr6.eq) goto loc_83299F44;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83293fb0
	ctx.lr = 0x83299FAC;
	sub_83293FB0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83299FC4:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x83299f44
	if (!cr6.eq) goto loc_83299F44;
loc_83299FCC:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83299f44
	if (!cr6.eq) goto loc_83299F44;
loc_83299FDC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83299f44
	if (!cr6.eq) goto loc_83299F44;
loc_83299FEC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83299f44
	if (!cr6.eq) goto loc_83299F44;
loc_83299FFC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83299f44
	if (!cr6.eq) goto loc_83299F44;
loc_8329A00C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83299f44
	if (!cr6.eq) goto loc_83299F44;
loc_8329A01C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8329a034
	if (!cr6.eq) goto loc_8329A034;
loc_8329A030:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8329A034:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A044"))) PPC_WEAK_FUNC(sub_8329A044);
PPC_FUNC_IMPL(__imp__sub_8329A044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A048"))) PPC_WEAK_FUNC(sub_8329A048);
PPC_FUNC_IMPL(__imp__sub_8329A048) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,27(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r8,27(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf. r3,r8,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8329a07c
	if (cr0.lt) goto loc_8329A07C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8329A07C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x8329a1b0
	if (cr6.gt) goto loc_8329A1B0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8329a180
	if (cr6.eq) goto loc_8329A180;
	// bdz 0x8329a164
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329A164;
	// bdz 0x8329a148
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329A148;
	// bdz 0x8329a12c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329A12C;
	// bdz 0x8329a110
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329A110;
	// bdz 0x8329a0f8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329A0F8;
	// bdz 0x8329a0e4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329A0E4;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// blt cr6,0x8329a0c8
	if (cr6.lt) goto loc_8329A0C8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8329A0C8:
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x83293fb0
	ctx.lr = 0x8329A0D4;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329a1b0
	if (!cr6.eq) goto loc_8329A1B0;
	// subf r3,r30,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r30.s64;
	// b 0x8329a1b0
	goto loc_8329A1B0;
loc_8329A0E4:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rldicl r8,r11,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicl r7,r9,56,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
loc_8329A0F8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x8329a1a4
	if (!cr6.eq) goto loc_8329A1A4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8329A110:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x8329a1a4
	if (!cr6.eq) goto loc_8329A1A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8329A12C:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x8329a1a4
	if (!cr6.eq) goto loc_8329A1A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8329A148:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x8329a1a4
	if (!cr6.eq) goto loc_8329A1A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8329A164:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x8329a1a4
	if (!cr6.eq) goto loc_8329A1A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8329A180:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// bne cr6,0x8329a1a4
	if (!cr6.eq) goto loc_8329A1A4;
	// cmpdi cr6,r7,0
	cr6.compare<int64_t>(ctx.r7.s64, 0, xer);
	// beq cr6,0x8329a1b0
	if (cr6.eq) goto loc_8329A1B0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_8329A1A4:
	// sradi r11,r11,63
	xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 63;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// ori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 | 1;
loc_8329A1B0:
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

__attribute__((alias("__imp__sub_8329A1C8"))) PPC_WEAK_FUNC(sub_8329A1C8);
PPC_FUNC_IMPL(__imp__sub_8329A1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,72
	ctx.r8.s64 = 72;
	// addi r7,r11,14392
	ctx.r7.s64 = ctx.r11.s64 + 14392;
loc_8329A1D8:
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r4,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// ble cr6,0x8329a204
	if (!cr6.gt) goto loc_8329A204;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x8329a208
	goto loc_8329A208;
loc_8329A204:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_8329A208:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x8329a1d8
	if (!cr6.eq) goto loc_8329A1D8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A224"))) PPC_WEAK_FUNC(sub_8329A224);
PPC_FUNC_IMPL(__imp__sub_8329A224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A228"))) PPC_WEAK_FUNC(sub_8329A228);
PPC_FUNC_IMPL(__imp__sub_8329A228) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329a338
	if (cr6.eq) goto loc_8329A338;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8329a25c
	if (!cr6.gt) goto loc_8329A25C;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// oris r4,r10,32777
	ctx.r4.u64 = ctx.r10.u64 | 2148073472;
loc_8329A25C:
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8329a338
	if (cr6.eq) goto loc_8329A338;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// bl 0x8329a1c8
	ctx.lr = 0x8329A274;
	sub_8329A1C8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8329a338
	if (cr6.gt) goto loc_8329A338;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8329a2b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A2B8;
	// bdzf 4*cr6+eq,0x8329a2b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A2B8;
	// bdzf 4*cr6+eq,0x8329a2a4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A2A4;
	// bdzf 4*cr6+eq,0x8329a2b8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A2B8;
	// bdzf 4*cr6+eq,0x8329a2e0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A2E0;
	// bne cr6,0x8329a2fc
	if (!cr6.eq) goto loc_8329A2FC;
loc_8329A2A4:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8329a338
	goto loc_8329A338;
loc_8329A2B8:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// b 0x8329a338
	goto loc_8329A338;
loc_8329A2E0:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// li r5,40
	ctx.r5.s64 = 40;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x83299e10
	ctx.lr = 0x8329A2F8;
	sub_83299E10(ctx, base);
	// b 0x8329a338
	goto loc_8329A338;
loc_8329A2FC:
	// addi r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r30,40
	cr6.compare<uint32_t>(ctx.r30.u32, 40, xer);
	// blt cr6,0x8329a324
	if (cr6.lt) goto loc_8329A324;
	// li r30,39
	ctx.r30.s64 = 39;
loc_8329A324:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329A330;
	sub_83293EC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u8);
loc_8329A338:
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

__attribute__((alias("__imp__sub_8329A350"))) PPC_WEAK_FUNC(sub_8329A350);
PPC_FUNC_IMPL(__imp__sub_8329A350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8329a228
	ctx.lr = 0x8329A394;
	sub_8329A228(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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

__attribute__((alias("__imp__sub_8329A3AC"))) PPC_WEAK_FUNC(sub_8329A3AC);
PPC_FUNC_IMPL(__imp__sub_8329A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A3B0"))) PPC_WEAK_FUNC(sub_8329A3B0);
PPC_FUNC_IMPL(__imp__sub_8329A3B0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x8329a4c8
	if (!cr6.lt) goto loc_8329A4C8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8329a4c8
	if (!cr6.eq) goto loc_8329A4C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r31.u32);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8329a4cc
	if (!cr6.eq) goto loc_8329A4CC;
	// bl 0x8329a1c8
	ctx.lr = 0x8329A400;
	sub_8329A1C8(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x8329a480
	if (cr6.gt) goto loc_8329A480;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8329a450
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A450;
	// bdzf 4*cr6+eq,0x8329a450
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A450;
	// bdzf 4*cr6+eq,0x8329a438
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A438;
	// bdzf 4*cr6+eq,0x8329a450
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A450;
	// bdzf 4*cr6+eq,0x8329a46c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329A46C;
	// bne cr6,0x8329a46c
	if (!cr6.eq) goto loc_8329A46C;
loc_8329A438:
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83297a40
	ctx.lr = 0x8329A44C;
	sub_83297A40(ctx, base);
	// b 0x8329a490
	goto loc_8329A490;
loc_8329A450:
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x83297a40
	ctx.lr = 0x8329A468;
	sub_83297A40(ctx, base);
	// b 0x8329a490
	goto loc_8329A490;
loc_8329A46C:
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x8329A47C;
	sub_83297A40(ctx, base);
	// b 0x8329a490
	goto loc_8329A490;
loc_8329A480:
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x8329A490;
	sub_83297A40(ctx, base);
loc_8329A490:
	// cmpwi cr6,r3,256
	cr6.compare<int32_t>(ctx.r3.s32, 256, xer);
	// blt cr6,0x8329a4a4
	if (cr6.lt) goto loc_8329A4A4;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r7,r11,10496
	ctx.r7.s64 = ctx.r11.s64 + 10496;
	// b 0x8329a4ac
	goto loc_8329A4AC;
loc_8329A4A4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r7,r11,-22544
	ctx.r7.s64 = ctx.r11.s64 + -22544;
loc_8329A4AC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r11,29416
	ctx.r4.s64 = ctx.r11.s64 + 29416;
	// addi r3,r10,12080
	ctx.r3.s64 = ctx.r10.s64 + 12080;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x83298338
	ctx.lr = 0x8329A4C8;
	sub_83298338(ctx, base);
loc_8329A4C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8329A4CC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329A4E4"))) PPC_WEAK_FUNC(sub_8329A4E4);
PPC_FUNC_IMPL(__imp__sub_8329A4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A4E8"))) PPC_WEAK_FUNC(sub_8329A4E8);
PPC_FUNC_IMPL(__imp__sub_8329A4E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x832a0170
	ctx.lr = 0x8329A518;
	sub_832A0170(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329a538
	if (!cr6.eq) goto loc_8329A538;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8259
	ctx.r4.u64 = ctx.r4.u64 | 8259;
	// bl 0x8329a350
	ctx.lr = 0x8329A538;
	sub_8329A350(ctx, base);
loc_8329A538:
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

__attribute__((alias("__imp__sub_8329A554"))) PPC_WEAK_FUNC(sub_8329A554);
PPC_FUNC_IMPL(__imp__sub_8329A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A558"))) PPC_WEAK_FUNC(sub_8329A558);
PPC_FUNC_IMPL(__imp__sub_8329A558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329A560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x832a03a8
	ctx.lr = 0x8329A584;
	sub_832A03A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329a5a4
	if (!cr6.eq) goto loc_8329A5A4;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,8259
	ctx.r4.u64 = ctx.r4.u64 | 8259;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329A5A4;
	sub_8329A350(ctx, base);
loc_8329A5A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A5B0"))) PPC_WEAK_FUNC(sub_8329A5B0);
PPC_FUNC_IMPL(__imp__sub_8329A5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329A5B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r8,r11,-23208
	ctx.r8.s64 = ctx.r11.s64 + -23208;
	// addi r7,r10,-23320
	ctx.r7.s64 = ctx.r10.s64 + -23320;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x832aa920
	ctx.lr = 0x8329A5E0;
	sub_832AA920(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329a670
	if (cr6.eq) goto loc_8329A670;
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8329a670
	if (!cr6.eq) goto loc_8329A670;
	// lhz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// rotlwi r6,r9,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// and r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 & ctx.r31.u64;
	// and r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 & ctx.r31.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329a670
	if (!cr6.eq) goto loc_8329A670;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8259
	ctx.r4.u64 = ctx.r4.u64 | 8259;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329A66C;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8329A670:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A678"))) PPC_WEAK_FUNC(sub_8329A678);
PPC_FUNC_IMPL(__imp__sub_8329A678) {
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
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8329ec70
	ctx.lr = 0x8329A6A4;
	sub_8329EC70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329a6c4
	if (!cr6.lt) goto loc_8329A6C4;
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
loc_8329A6C4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8329A6E4"))) PPC_WEAK_FUNC(sub_8329A6E4);
PPC_FUNC_IMPL(__imp__sub_8329A6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329A6E8"))) PPC_WEAK_FUNC(sub_8329A6E8);
PPC_FUNC_IMPL(__imp__sub_8329A6E8) {
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
	// lwz r11,600(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 600);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r4,544
	ctx.r3.s64 = ctx.r4.s64 + 544;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329a720
	if (cr6.eq) goto loc_8329A720;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8329a734
	goto loc_8329A734;
loc_8329A720:
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83299e10
	ctx.lr = 0x8329A72C;
	sub_83299E10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8329A734:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329A740;
	sub_8329A350(ctx, base);
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

__attribute__((alias("__imp__sub_8329A758"))) PPC_WEAK_FUNC(sub_8329A758);
PPC_FUNC_IMPL(__imp__sub_8329A758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8329A760;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,600(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 600);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r23,572(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 572);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// addi r31,r4,544
	ctx.r31.s64 = ctx.r4.s64 + 544;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8329a7fc
	if (!cr6.eq) goto loc_8329A7FC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329a7bc
	if (cr6.eq) goto loc_8329A7BC;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83299890
	ctx.lr = 0x8329A7A4;
	sub_83299890(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329a8e4
	if (!cr6.lt) goto loc_8329A8E4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8329a8e4
	if (cr6.eq) goto loc_8329A8E4;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// b 0x8329a7d4
	goto loc_8329A7D4;
loc_8329A7BC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832997c0
	ctx.lr = 0x8329A7CC;
	sub_832997C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329a8e4
	if (!cr6.lt) goto loc_8329A8E4;
loc_8329A7D4:
	// lis r11,-32759
	ctx.r11.s64 = -2146893824;
	// ori r10,r11,8256
	ctx.r10.u64 = ctx.r11.u64 | 8256;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bne cr6,0x8329a8d0
	if (!cr6.eq) goto loc_8329A8D0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329A7F8;
	sub_8329A350(ctx, base);
	// b 0x8329a8d0
	goto loc_8329A8D0;
loc_8329A7FC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329a81c
	if (!cr6.eq) goto loc_8329A81C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329A818;
	sub_8329A350(ctx, base);
	// b 0x8329a8d0
	goto loc_8329A8D0;
loc_8329A81C:
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r27,r26,r30
	ctx.r27.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(ctx.r27.s32, 8, xer);
	// bge cr6,0x8329a838
	if (!cr6.lt) goto loc_8329A838;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8329a840
	goto loc_8329A840;
loc_8329A838:
	// addi r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 3;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_8329A840:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8329e200
	ctx.lr = 0x8329A850;
	sub_8329E200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329a870
	if (!cr6.eq) goto loc_8329A870;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,8323
	ctx.r4.u64 = ctx.r4.u64 | 8323;
	// bl 0x8329a350
	ctx.lr = 0x8329A86C;
	sub_8329A350(ctx, base);
	// b 0x8329a8bc
	goto loc_8329A8BC;
loc_8329A870:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r29,r26
	ctx.r3.u64 = ctx.r29.u64 + ctx.r26.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329A880;
	sub_83293EC8(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r11.u8);
	// bl 0x83299768
	ctx.lr = 0x8329A89C;
	sub_83299768(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8329a8e4
	if (!cr6.eq) goto loc_8329A8E4;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329A8BC;
	sub_8329A350(ctx, base);
loc_8329A8BC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8329a8d0
	if (cr6.eq) goto loc_8329A8D0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8329e1d0
	ctx.lr = 0x8329A8D0;
	sub_8329E1D0(ctx, base);
loc_8329A8D0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x8329a8e4
	if (cr6.eq) goto loc_8329A8E4;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8329A8E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A8F0"))) PPC_WEAK_FUNC(sub_8329A8F0);
PPC_FUNC_IMPL(__imp__sub_8329A8F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r8,-32759
	ctx.r8.s64 = -2146893824;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r8,r8,8714
	ctx.r8.u64 = ctx.r8.u64 | 8714;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8329a758
	sub_8329A758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329A910"))) PPC_WEAK_FUNC(sub_8329A910);
PPC_FUNC_IMPL(__imp__sub_8329A910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8329A918;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,572(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 572);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,600(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 600);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r27,r6,544
	ctx.r27.s64 = ctx.r6.s64 + 544;
	// bl 0x8329f818
	ctx.lr = 0x8329A938;
	sub_8329F818(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329a9c0
	if (cr6.eq) goto loc_8329A9C0;
	// lwz r11,576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329a970
	if (!cr6.eq) goto loc_8329A970;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83299990
	ctx.lr = 0x8329A968;
	sub_83299990(ctx, base);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// b 0x8329aa14
	goto loc_8329AA14;
loc_8329A970:
	// lbz r11,606(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 606);
	// lwz r26,584(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329a9e4
	if (!cr6.eq) goto loc_8329A9E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832a0170
	ctx.lr = 0x8329A998;
	sub_832A0170(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329a9e4
	if (cr6.eq) goto loc_8329A9E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329db80
	ctx.lr = 0x8329A9AC;
	sub_8329DB80(ctx, base);
	// lis r5,-32759
	ctx.r5.s64 = -2146893824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,8717
	ctx.r5.u64 = ctx.r5.u64 | 8717;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a6e8
	ctx.lr = 0x8329A9C0;
	sub_8329A6E8(ctx, base);
loc_8329A9C0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8329aa34
	if (cr6.eq) goto loc_8329AA34;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8329aa34
	if (cr6.eq) goto loc_8329AA34;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329e1d0
	ctx.lr = 0x8329A9DC;
	sub_8329E1D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329A9E4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83299990
	ctx.lr = 0x8329A9FC;
	sub_83299990(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,580(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329fce8
	ctx.lr = 0x8329AA14;
	sub_8329FCE8(ctx, base);
loc_8329AA14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r11.u32);
	// stw r11,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stw r10,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r10.u32);
	// stw r10,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r10.u32);
	// stb r11,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r11.u8);
loc_8329AA34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329AA3C"))) PPC_WEAK_FUNC(sub_8329AA3C);
PPC_FUNC_IMPL(__imp__sub_8329AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329AA40"))) PPC_WEAK_FUNC(sub_8329AA40);
PPC_FUNC_IMPL(__imp__sub_8329AA40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r9,596(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 596);
	// lwz r8,592(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 592);
	// lbz r7,604(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 604);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r6,584(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 584);
	// lwz r5,572(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	// b 0x832ad018
	sub_832AD018(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329AA60"))) PPC_WEAK_FUNC(sub_8329AA60);
PPC_FUNC_IMPL(__imp__sub_8329AA60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r8,-32759
	ctx.r8.s64 = -2146893824;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r8,r8,8715
	ctx.r8.u64 = ctx.r8.u64 | 8715;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8329a758
	sub_8329A758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329AA80"))) PPC_WEAK_FUNC(sub_8329AA80);
PPC_FUNC_IMPL(__imp__sub_8329AA80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329AA88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,600(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 600);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r31,r6,544
	ctx.r31.s64 = ctx.r6.s64 + 544;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8329aadc
	if (cr6.eq) goto loc_8329AADC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x8329aad4
	if (cr6.lt) goto loc_8329AAD4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,29428
	ctx.r4.s64 = ctx.r11.s64 + 29428;
	// bl 0x83293fb0
	ctx.lr = 0x8329AAC4;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329aad4
	if (!cr6.eq) goto loc_8329AAD4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8329aaf4
	goto loc_8329AAF4;
loc_8329AAD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8329aaf4
	goto loc_8329AAF4;
loc_8329AADC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
loc_8329AAF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329ab0c
	if (!cr6.eq) goto loc_8329AB0C;
	// stb r11,605(r30)
	PPC_STORE_U8(ctx.r30.u32 + 605, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329AB0C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8329ab4c
	if (cr6.eq) goto loc_8329AB4C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x8329ab44
	if (!cr6.eq) goto loc_8329AB44;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,29432
	ctx.r4.s64 = ctx.r11.s64 + 29432;
	// bl 0x83293fb0
	ctx.lr = 0x8329AB34;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329ab44
	if (!cr6.eq) goto loc_8329AB44;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8329ab7c
	goto loc_8329AB7C;
loc_8329AB44:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8329ab7c
	goto loc_8329AB7C;
loc_8329AB4C:
	// lbz r11,27(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-37
	ctx.r9.s64 = ctx.r11.s64 + -37;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r10,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// addis r7,r8,27042
	ctx.r7.s64 = ctx.r8.s64 + 1772224512;
	// addi r6,r11,-10
	ctx.r6.s64 = ctx.r11.s64 + -10;
	// addi r7,r7,-32470
	ctx.r7.s64 = ctx.r7.s64 + -32470;
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_8329AB7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329ab94
	if (cr6.eq) goto loc_8329AB94;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,605(r30)
	PPC_STORE_U8(ctx.r30.u32 + 605, ctx.r11.u8);
	// b 0x8329acb8
	goto loc_8329ACB8;
loc_8329AB94:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8329abd4
	if (cr6.eq) goto loc_8329ABD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x8329abcc
	if (!cr6.eq) goto loc_8329ABCC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,29440
	ctx.r4.s64 = ctx.r11.s64 + 29440;
	// bl 0x83293fb0
	ctx.lr = 0x8329ABBC;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329abcc
	if (!cr6.eq) goto loc_8329ABCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8329ac04
	goto loc_8329AC04;
loc_8329ABCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8329ac04
	goto loc_8329AC04;
loc_8329ABD4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,27(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,4,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// addi r8,r11,-37
	ctx.r8.s64 = ctx.r11.s64 + -37;
	// addi r7,r10,-10
	ctx.r7.s64 = ctx.r10.s64 + -10;
	// addis r6,r9,27042
	ctx.r6.s64 = ctx.r9.s64 + 1772224512;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r6,r6,-12030
	ctx.r6.s64 = ctx.r6.s64 + -12030;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_8329AC04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329ac1c
	if (cr6.eq) goto loc_8329AC1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,605(r30)
	PPC_STORE_U8(ctx.r30.u32 + 605, ctx.r11.u8);
	// b 0x8329acb8
	goto loc_8329ACB8;
loc_8329AC1C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8329ac5c
	if (cr6.eq) goto loc_8329AC5C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x8329ac54
	if (!cr6.eq) goto loc_8329AC54;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,29448
	ctx.r4.s64 = ctx.r11.s64 + 29448;
	// bl 0x83293fb0
	ctx.lr = 0x8329AC44;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329ac54
	if (!cr6.eq) goto loc_8329AC54;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8329ac8c
	goto loc_8329AC8C;
loc_8329AC54:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8329ac8c
	goto loc_8329AC8C;
loc_8329AC5C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,27(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// addi r8,r11,-43
	ctx.r8.s64 = ctx.r11.s64 + -43;
	// addi r7,r10,-249
	ctx.r7.s64 = ctx.r10.s64 + -249;
	// addis r6,r9,27046
	ctx.r6.s64 = ctx.r9.s64 + 1772486656;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// addi r6,r6,-13547
	ctx.r6.s64 = ctx.r6.s64 + -13547;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r3,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
loc_8329AC8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329aca4
	if (cr6.eq) goto loc_8329ACA4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,605(r30)
	PPC_STORE_U8(ctx.r30.u32 + 605, ctx.r11.u8);
	// b 0x8329acb8
	goto loc_8329ACB8;
loc_8329ACA4:
	// lis r5,-32759
	ctx.r5.s64 = -2146893824;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,8716
	ctx.r5.u64 = ctx.r5.u64 | 8716;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329a6e8
	ctx.lr = 0x8329ACB8;
	sub_8329A6E8(ctx, base);
loc_8329ACB8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8329acd4
	if (cr6.eq) goto loc_8329ACD4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8329acd4
	if (cr6.eq) goto loc_8329ACD4;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// bl 0x8329e1d0
	ctx.lr = 0x8329ACD4;
	sub_8329E1D0(ctx, base);
loc_8329ACD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329ACDC"))) PPC_WEAK_FUNC(sub_8329ACDC);
PPC_FUNC_IMPL(__imp__sub_8329ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329ACE0"))) PPC_WEAK_FUNC(sub_8329ACE0);
PPC_FUNC_IMPL(__imp__sub_8329ACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x8329ACE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,605(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 605);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r24,600(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 600);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r25,572(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 572);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// addi r22,r8,544
	ctx.r22.s64 = ctx.r8.s64 + 544;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8329af20
	if (cr6.gt) goto loc_8329AF20;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8329ae44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329AE44;
	// bdzf 4*cr6+eq,0x8329ae7c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8329AE7C;
	// bne cr6,0x8329aeb0
	if (!cr6.eq) goto loc_8329AEB0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8329adcc
	if (!cr6.eq) goto loc_8329ADCC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329f818
	ctx.lr = 0x8329AD40;
	sub_8329F818(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329aefc
	if (cr6.eq) goto loc_8329AEFC;
	// lwz r28,584(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832a03a8
	ctx.lr = 0x8329AD68;
	sub_832A03A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8329ad94
	if (cr6.eq) goto loc_8329AD94;
	// lis r5,-32759
	ctx.r5.s64 = -2146893824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,8717
	ctx.r5.u64 = ctx.r5.u64 | 8717;
	// bl 0x8329a6e8
	ctx.lr = 0x8329AD84;
	sub_8329A6E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329db80
	ctx.lr = 0x8329AD90;
	sub_8329DB80(ctx, base);
	// b 0x8329aefc
	goto loc_8329AEFC;
loc_8329AD94:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83299990
	ctx.lr = 0x8329ADA8;
	sub_83299990(ctx, base);
	// li r11,46
	ctx.r11.s64 = 46;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,47(r30)
	PPC_STORE_U8(ctx.r30.u32 + 47, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8329fe18
	ctx.lr = 0x8329ADC8;
	sub_8329FE18(ctx, base);
	// b 0x8329add0
	goto loc_8329ADD0;
loc_8329ADCC:
	// lwz r30,588(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
loc_8329ADD0:
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329fce0
	ctx.lr = 0x8329ADE8;
	sub_8329FCE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329aee4
	if (cr6.lt) goto loc_8329AEE4;
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
	// beq cr6,0x8329ae2c
	if (cr6.eq) goto loc_8329AE2C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8329ae18
	if (cr6.gt) goto loc_8329AE18;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// b 0x8329ae2c
	goto loc_8329AE2C;
loc_8329AE18:
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
loc_8329AE2C:
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329AE3C;
	sub_83293EC8(ctx, base);
loc_8329AE3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8329AE44:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8329ae64
	if (!cr6.eq) goto loc_8329AE64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83299750
	ctx.lr = 0x8329AE54;
	sub_83299750(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,604(r31)
	PPC_STORE_U8(ctx.r31.u32 + 604, ctx.r11.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329ae3c
	if (!cr6.eq) goto loc_8329AE3C;
loc_8329AE64:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// ori r4,r4,8710
	ctx.r4.u64 = ctx.r4.u64 | 8710;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329AE78;
	sub_8329A350(ctx, base);
	// b 0x8329aefc
	goto loc_8329AEFC;
loc_8329AE7C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8329ae98
	if (!cr6.eq) goto loc_8329AE98;
	// addi r4,r31,592
	ctx.r4.s64 = ctx.r31.s64 + 592;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8329a678
	ctx.lr = 0x8329AE90;
	sub_8329A678(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329ae3c
	if (!cr6.lt) goto loc_8329AE3C;
loc_8329AE98:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// ori r4,r4,8711
	ctx.r4.u64 = ctx.r4.u64 | 8711;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329AEAC;
	sub_8329A350(ctx, base);
	// b 0x8329aefc
	goto loc_8329AEFC;
loc_8329AEB0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8329aecc
	if (!cr6.eq) goto loc_8329AECC;
	// addi r4,r31,596
	ctx.r4.s64 = ctx.r31.s64 + 596;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8329a678
	ctx.lr = 0x8329AEC4;
	sub_8329A678(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329ae3c
	if (!cr6.lt) goto loc_8329AE3C;
loc_8329AECC:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// ori r4,r4,8712
	ctx.r4.u64 = ctx.r4.u64 | 8712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329AEE0;
	sub_8329A350(ctx, base);
	// b 0x8329aefc
	goto loc_8329AEFC;
loc_8329AEE4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8329aefc
	if (cr6.eq) goto loc_8329AEFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8329f8b8
	ctx.lr = 0x8329AEFC;
	sub_8329F8B8(ctx, base);
loc_8329AEFC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8329ae3c
	if (cr6.eq) goto loc_8329AE3C;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8329ae3c
	if (cr6.eq) goto loc_8329AE3C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329e1d0
	ctx.lr = 0x8329AF18;
	sub_8329E1D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_8329AF20:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,29476
	ctx.r5.s64 = ctx.r11.s64 + 29476;
	// addi r3,r10,29456
	ctx.r3.s64 = ctx.r10.s64 + 29456;
	// li r4,355
	ctx.r4.s64 = 355;
	// bl 0x83298458
	ctx.lr = 0x8329AF38;
	sub_83298458(ctx, base);
}

__attribute__((alias("__imp__sub_8329AF38"))) PPC_WEAK_FUNC(sub_8329AF38);
PPC_FUNC_IMPL(__imp__sub_8329AF38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329AF40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 600);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,584(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 584);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329afb0
	if (cr6.eq) goto loc_8329AFB0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299768
	ctx.lr = 0x8329AF70;
	sub_83299768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329afd4
	if (cr6.eq) goto loc_8329AFD4;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r9,r31,r29
	ctx.r9.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgt cr6,0x8329b00c
	if (cr6.gt) goto loc_8329B00C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83293fb0
	ctx.lr = 0x8329AFA0;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329b00c
	if (!cr6.eq) goto loc_8329B00C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329AFB0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bgt cr6,0x8329afd4
	if (cr6.gt) goto loc_8329AFD4;
	// addi r29,r8,544
	ctx.r29.s64 = ctx.r8.s64 + 544;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832997c0
	ctx.lr = 0x8329AFCC;
	sub_832997C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329aff4
	if (!cr6.lt) goto loc_8329AFF4;
loc_8329AFD4:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,8714
	ctx.r4.u64 = ctx.r4.u64 | 8714;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329AFEC;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329AFF4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83299f20
	ctx.lr = 0x8329B000;
	sub_83299F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b01c
	if (!cr6.eq) goto loc_8329B01C;
loc_8329B00C:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,8707
	ctx.r4.u64 = ctx.r4.u64 | 8707;
	// bl 0x8329a350
	ctx.lr = 0x8329B01C;
	sub_8329A350(ctx, base);
loc_8329B01C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B024"))) PPC_WEAK_FUNC(sub_8329B024);
PPC_FUNC_IMPL(__imp__sub_8329B024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B028"))) PPC_WEAK_FUNC(sub_8329B028);
PPC_FUNC_IMPL(__imp__sub_8329B028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,584(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 584);
	// lwz r9,600(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 600);
	// stw r11,580(r6)
	PPC_STORE_U32(ctx.r6.u32 + 580, ctx.r11.u32);
	// lhz r5,18(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// lhz r7,38(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// lhz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// rotlwi r3,r8,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rotlwi r4,r5,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// and r5,r3,r9
	ctx.r5.u64 = ctx.r3.u64 & ctx.r9.u64;
	// and r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ctx.r9.u64;
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// subf r9,r7,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r7.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,584(r6)
	PPC_STORE_U32(ctx.r6.u32 + 584, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329B078"))) PPC_WEAK_FUNC(sub_8329B078);
PPC_FUNC_IMPL(__imp__sub_8329B078) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x832ace60
	sub_832ACE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B088"))) PPC_WEAK_FUNC(sub_8329B088);
PPC_FUNC_IMPL(__imp__sub_8329B088) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x832acf00
	sub_832ACF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B090"))) PPC_WEAK_FUNC(sub_8329B090);
PPC_FUNC_IMPL(__imp__sub_8329B090) {
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
	// bl 0x8329e690
	ctx.lr = 0x8329B0AC;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,239
	cr6.compare<int32_t>(ctx.r3.s32, 239, xer);
	// bne cr6,0x8329b100
	if (!cr6.eq) goto loc_8329B100;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e690
	ctx.lr = 0x8329B0C0;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,187
	cr6.compare<int32_t>(ctx.r3.s32, 187, xer);
	// beq cr6,0x8329b0e0
	if (cr6.eq) goto loc_8329B0E0;
loc_8329B0C8:
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
loc_8329B0E0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e690
	ctx.lr = 0x8329B0EC;
	sub_8329E690(ctx, base);
	// cmpwi cr6,r3,191
	cr6.compare<int32_t>(ctx.r3.s32, 191, xer);
	// bne cr6,0x8329b0c8
	if (!cr6.eq) goto loc_8329B0C8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e690
	ctx.lr = 0x8329B100;
	sub_8329E690(ctx, base);
loc_8329B100:
	// addi r11,r3,-60
	ctx.r11.s64 = ctx.r3.s64 + -60;
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

__attribute__((alias("__imp__sub_8329B120"))) PPC_WEAK_FUNC(sub_8329B120);
PPC_FUNC_IMPL(__imp__sub_8329B120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8329B128;
	__savegprlr_24(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// rlwinm r30,r11,20,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// bl 0x832abb30
	ctx.lr = 0x8329B14C;
	sub_832ABB30(ctx, base);
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// addi r6,r6,-22256
	ctx.r6.s64 = ctx.r6.s64 + -22256;
	// lis r3,-31958
	ctx.r3.s64 = -2094399488;
	// subfic r10,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r30.s64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r8,r8,-22288
	ctx.r8.s64 = ctx.r8.s64 + -22288;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lis r4,-31958
	ctx.r4.s64 = -2094399488;
	// addi r6,r3,-21888
	ctx.r6.s64 = ctx.r3.s64 + -21888;
	// addi r3,r11,-21280
	ctx.r3.s64 = ctx.r11.s64 + -21280;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r5,r5,-21952
	ctx.r5.s64 = ctx.r5.s64 + -21952;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r4,r4,-21920
	ctx.r4.s64 = ctx.r4.s64 + -21920;
	// addi r11,r10,11696
	ctx.r11.s64 = ctx.r10.s64 + 11696;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// lis r27,-31958
	ctx.r27.s64 = -2094399488;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lis r26,-31958
	ctx.r26.s64 = -2094399488;
	// lwz r8,560(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lis r25,-31958
	ctx.r25.s64 = -2094399488;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r10,r9,-20360
	ctx.r10.s64 = ctx.r9.s64 + -20360;
	// rlwinm r3,r8,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x1;
	// addi r9,r27,-20344
	ctx.r9.s64 = ctx.r27.s64 + -20344;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r6,r26,-20680
	ctx.r6.s64 = ctx.r26.s64 + -20680;
	// stb r3,750(r1)
	PPC_STORE_U8(ctx.r1.u32 + 750, ctx.r3.u8);
	// addi r5,r25,-20440
	ctx.r5.s64 = ctx.r25.s64 + -20440;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// and r11,r7,r24
	ctx.r11.u64 = ctx.r7.u64 & ctx.r24.u64;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r30,r31,536
	ctx.r30.s64 = ctx.r31.s64 + 536;
	// stw r4,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r4.u32);
	// stw r11,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r30,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832ade90
	ctx.lr = 0x8329B210;
	sub_832ADE90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329b23c
	if (!cr6.lt) goto loc_8329B23C;
	// lwz r5,720(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8329b230
	if (cr6.eq) goto loc_8329B230;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,744(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// bl 0x8329f8b8
	ctx.lr = 0x8329B230;
	sub_8329F8B8(ctx, base);
loc_8329B230:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8329B23C:
	// lwz r11,568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b260
	if (!cr6.eq) goto loc_8329B260;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// rlwinm r9,r9,0,27,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r8.u32);
loc_8329B260:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,720(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B274"))) PPC_WEAK_FUNC(sub_8329B274);
PPC_FUNC_IMPL(__imp__sub_8329B274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B278"))) PPC_WEAK_FUNC(sub_8329B278);
PPC_FUNC_IMPL(__imp__sub_8329B278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329B280;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x8329B290;
	sub_8329E9C0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329b2ac
	if (!cr6.lt) goto loc_8329B2AC;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B2AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x8329B2B4;
	sub_8329E9C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329b2d0
	if (!cr6.lt) goto loc_8329B2D0;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B2D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x8329B2D8;
	sub_8329E9C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329b2f4
	if (!cr6.lt) goto loc_8329B2F4;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B2F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x8329B2FC;
	sub_8329E9C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329b314
	if (!cr6.lt) goto loc_8329B314;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B314:
	// rlwinm r11,r27,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// li r10,0
	ctx.r10.s64 = 0;
	// or r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 | ctx.r29.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B33C"))) PPC_WEAK_FUNC(sub_8329B33C);
PPC_FUNC_IMPL(__imp__sub_8329B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329B340"))) PPC_WEAK_FUNC(sub_8329B340);
PPC_FUNC_IMPL(__imp__sub_8329B340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329B348;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x8329b370
	if (cr6.lt) goto loc_8329B370;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8329b278
	ctx.lr = 0x8329B368;
	sub_8329B278(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B370:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x8329b3a4
	if (!cr6.gt) goto loc_8329B3A4;
loc_8329B380:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x8329B388;
	sub_8329E9C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329b3c0
	if (cr6.lt) goto loc_8329B3C0;
	// rlwinm r11,r30,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 | ctx.r3.u64;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x8329b380
	if (cr6.lt) goto loc_8329B380;
loc_8329B3A4:
	// subfic r11,r29,4
	xer.ca = ctx.r29.u32 <= 4;
	ctx.r11.s64 = 4 - ctx.r29.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// slw r3,r30,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B3C0:
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B3D0"))) PPC_WEAK_FUNC(sub_8329B3D0);
PPC_FUNC_IMPL(__imp__sub_8329B3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x8329B3D8;
	__savegprlr_15(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r15,r8
	ctx.r15.u64 = ctx.r8.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// bl 0x8329b278
	ctx.lr = 0x8329B410;
	sub_8329B278(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x8329b434
	if (!cr6.lt) goto loc_8329B434;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329B428;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_8329B434:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// rlwinm r18,r11,28,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8329e9c0
	ctx.lr = 0x8329B450;
	sub_8329E9C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329b720
	if (cr6.lt) goto loc_8329B720;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r19,-27056
	ctx.r19.s64 = -1773142016;
	// addi r20,r11,29428
	ctx.r20.s64 = ctx.r11.s64 + 29428;
loc_8329B468:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r28,254
	cr6.compare<int32_t>(ctx.r28.s32, 254, xer);
	// bne cr6,0x8329b4d0
	if (!cr6.eq) goto loc_8329B4D0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8329b794
	if (cr6.eq) goto loc_8329B794;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r21
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, xer);
	// bne cr6,0x8329b490
	if (!cr6.eq) goto loc_8329B490;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8329b70c
	goto loc_8329B70C;
loc_8329B490:
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,38(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// and r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 & ctx.r27.u64;
	// and r5,r7,r27
	ctx.r5.u64 = ctx.r7.u64 & ctx.r27.u64;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r10,r8,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8329b70c
	goto loc_8329B70C;
loc_8329B4D0:
	// cmpwi cr6,r28,255
	cr6.compare<int32_t>(ctx.r28.s32, 255, xer);
	// beq cr6,0x8329b730
	if (cr6.eq) goto loc_8329B730;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8329b4e8
	if (!cr6.eq) goto loc_8329B4E8;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x8329b794
	if (!cr6.eq) goto loc_8329B794;
loc_8329B4E8:
	// rlwinm r11,r28,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329b4fc
	if (cr6.eq) goto loc_8329B4FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8329b514
	goto loc_8329B514;
loc_8329B4FC:
	// clrlwi r11,r28,26
	ctx.r11.u64 = ctx.r28.u32 & 0x3F;
	// subfic r10,r11,56
	xer.ca = ctx.r11.u32 <= 56;
	ctx.r10.s64 = 56 - ctx.r11.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
loc_8329B514:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329b784
	if (cr6.eq) goto loc_8329B784;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8329f818
	ctx.lr = 0x8329B52C;
	sub_8329F818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329b7bc
	if (cr6.eq) goto loc_8329B7BC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83299b90
	ctx.lr = 0x8329B544;
	sub_83299B90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329b764
	if (cr6.lt) goto loc_8329B764;
	// clrlwi r11,r28,25
	ctx.r11.u64 = ctx.r28.u32 & 0x7F;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
	// cmpwi cr6,r28,46
	cr6.compare<int32_t>(ctx.r28.s32, 46, xer);
	// bne cr6,0x8329b604
	if (!cr6.eq) goto loc_8329B604;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8329b794
	if (cr6.eq) goto loc_8329B794;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8329b5a8
	if (cr6.eq) goto loc_8329B5A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x8329b5a0
	if (cr6.lt) goto loc_8329B5A0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x83293fb0
	ctx.lr = 0x8329B590;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329b5a0
	if (!cr6.eq) goto loc_8329B5A0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8329b5bc
	goto loc_8329B5BC;
loc_8329B5A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8329b5bc
	goto loc_8329B5BC;
loc_8329B5A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// subf r9,r10,r19
	ctx.r9.s64 = ctx.r19.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8329B5BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b794
	if (!cr6.eq) goto loc_8329B794;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832a03a8
	ctx.lr = 0x8329B5E0;
	sub_832A03A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne cr6,0x8329b7ac
	if (!cr6.eq) goto loc_8329B7AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8329fe18
	ctx.lr = 0x8329B600;
	sub_8329FE18(ctx, base);
	// b 0x8329b664
	goto loc_8329B664;
loc_8329B604:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// bne cr6,0x8329b618
	if (!cr6.eq) goto loc_8329B618;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// b 0x8329b664
	goto loc_8329B664;
loc_8329B618:
	// clrlwi r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b644
	if (!cr6.eq) goto loc_8329B644;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832a0170
	ctx.lr = 0x8329B63C;
	sub_832A0170(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329b7a8
	if (!cr6.eq) goto loc_8329B7A8;
loc_8329B644:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329fce8
	ctx.lr = 0x8329B65C;
	sub_8329FCE8(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8329B664:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329b70c
	if (cr6.eq) goto loc_8329B70C;
	// rlwinm r11,r28,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b690
	if (!cr6.eq) goto loc_8329B690;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832996e8
	ctx.lr = 0x8329B684;
	sub_832996E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329b69c
	if (!cr6.lt) goto loc_8329B69C;
loc_8329B690:
	// addi r11,r28,-10
	ctx.r11.s64 = ctx.r28.s64 + -10;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8329B69C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8329fcd8
	ctx.lr = 0x8329B6B0;
	sub_8329FCD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329b7bc
	if (cr6.lt) goto loc_8329B7BC;
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
	// bne cr6,0x8329b6d8
	if (!cr6.eq) goto loc_8329B6D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8329b6fc
	goto loc_8329B6FC;
loc_8329B6D8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8329b6e8
	if (cr6.gt) goto loc_8329B6E8;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// b 0x8329b6fc
	goto loc_8329B6FC;
loc_8329B6E8:
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
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_8329B6FC:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x83294018
	ctx.lr = 0x8329B70C;
	sub_83294018(ctx, base);
loc_8329B70C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329e9c0
	ctx.lr = 0x8329B714;
	sub_8329E9C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329b468
	if (!cr6.lt) goto loc_8329B468;
loc_8329B720:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329B72C;
	sub_8329A350(ctx, base);
	// b 0x8329b7bc
	goto loc_8329B7BC;
loc_8329B730:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8329b794
	if (!cr6.eq) goto loc_8329B794;
	// neg r11,r24
	ctx.r11.s64 = -ctx.r24.s64;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// add r31,r4,r24
	ctx.r31.u64 = ctx.r4.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r16
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, xer);
	// bne cr6,0x8329b794
	if (!cr6.eq) goto loc_8329B794;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329b340
	ctx.lr = 0x8329B758;
	sub_8329B340(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x8329b770
	if (!cr6.lt) goto loc_8329B770;
loc_8329B764:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329B76C;
	sub_8329A350(ctx, base);
	// b 0x8329b7bc
	goto loc_8329B7BC;
loc_8329B770:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_8329B784:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,8643
	ctx.r4.u64 = ctx.r4.u64 | 8643;
	// b 0x8329b7b8
	goto loc_8329B7B8;
loc_8329B794:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ori r4,r4,8641
	ctx.r4.u64 = ctx.r4.u64 | 8641;
	// bl 0x8329a350
	ctx.lr = 0x8329B7A4;
	sub_8329A350(ctx, base);
	// b 0x8329b7bc
	goto loc_8329B7BC;
loc_8329B7A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8329B7AC:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ori r4,r4,8647
	ctx.r4.u64 = ctx.r4.u64 | 8647;
loc_8329B7B8:
	// bl 0x8329a350
	ctx.lr = 0x8329B7BC;
	sub_8329A350(ctx, base);
loc_8329B7BC:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x8329b7d4
	if (cr6.eq) goto loc_8329B7D4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329f8b8
	ctx.lr = 0x8329B7D4;
	sub_8329F8B8(ctx, base);
loc_8329B7D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329B7E0"))) PPC_WEAK_FUNC(sub_8329B7E0);
PPC_FUNC_IMPL(__imp__sub_8329B7E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329B7E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r29,47(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 47);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r11,r29,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b9e0
	if (!cr6.eq) goto loc_8329B9E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832996e8
	ctx.lr = 0x8329B814;
	sub_832996E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8329b8f8
	if (cr6.eq) goto loc_8329B8F8;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8329b9e0
	if (!cr6.eq) goto loc_8329B9E0;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329fcd8
	ctx.lr = 0x8329B838;
	sub_8329FCD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329ba0c
	if (cr6.lt) goto loc_8329BA0C;
	// lhz r11,26(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b878
	if (!cr6.eq) goto loc_8329B878;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8329b278
	ctx.lr = 0x8329B858;
	sub_8329B278(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8329b93c
	if (cr6.lt) goto loc_8329B93C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8329B878:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srw r9,r10,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r28.u8 & 0x3F));
	// clrlwi r29,r9,16
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x83299720
	ctx.lr = 0x8329B890;
	sub_83299720(ctx, base);
	// lbz r8,46(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// lhz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// rotlwi r6,r8,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b8b8
	if (!cr6.eq) goto loc_8329B8B8;
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// sth r28,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r28.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B8B8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8329b8d4
	if (cr6.gt) goto loc_8329B8D4;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// sth r28,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r28.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B8D4:
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
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// sth r28,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r28.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B8F8:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329fcd8
	ctx.lr = 0x8329B90C;
	sub_8329FCD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329ba0c
	if (cr6.lt) goto loc_8329BA0C;
	// lhz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b95c
	if (!cr6.eq) goto loc_8329B95C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8329b278
	ctx.lr = 0x8329B92C;
	sub_8329B278(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x8329b94c
	if (!cr6.lt) goto loc_8329B94C;
loc_8329B93C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329B944;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B94C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8329B95C:
	// lbz r9,46(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// lhz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// rotlwi r7,r9,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329b990
	if (!cr6.eq) goto loc_8329B990;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// sth r10,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B990:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8329b9b4
	if (cr6.gt) goto loc_8329B9B4;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// sth r10,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B9B4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r7,r11,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// sth r10,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329B9E0:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832adf78
	ctx.lr = 0x8329B9F8;
	sub_832ADF78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329ba0c
	if (cr6.lt) goto loc_8329BA0C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8329BA0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329BA14"))) PPC_WEAK_FUNC(sub_8329BA14);
PPC_FUNC_IMPL(__imp__sub_8329BA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BA18"))) PPC_WEAK_FUNC(sub_8329BA18);
PPC_FUNC_IMPL(__imp__sub_8329BA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8329BA20;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8329b278
	ctx.lr = 0x8329BA40;
	sub_8329B278(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8329baf8
	if (cr6.lt) goto loc_8329BAF8;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r26,4
	ctx.r26.s64 = 4;
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,-18464
	ctx.r7.s64 = ctx.r7.s64 + -18464;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r6,-18464
	ctx.r6.s64 = ctx.r6.s64 + -18464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,28(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// sth r11,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r11.u16);
	// bl 0x832ae4b8
	ctx.lr = 0x8329BACC;
	sub_832AE4B8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329bb38
	if (cr6.lt) goto loc_8329BB38;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8329bb04
	if (cr6.eq) goto loc_8329BB04;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,8642
	ctx.r4.u64 = ctx.r4.u64 | 8642;
loc_8329BAF8:
	// bl 0x8329a350
	ctx.lr = 0x8329BAFC;
	sub_8329A350(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8329BB04:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329b340
	ctx.lr = 0x8329BB18;
	sub_8329B340(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x8329bb34
	if (!cr6.lt) goto loc_8329BB34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329BB2C;
	sub_8329A350(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8329BB34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8329BB38:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329BB40"))) PPC_WEAK_FUNC(sub_8329BB40);
PPC_FUNC_IMPL(__imp__sub_8329BB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329BB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8329bb88
	if (cr6.eq) goto loc_8329BB88;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8329e798
	ctx.lr = 0x8329BB7C;
	sub_8329E798(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8329bb94
	goto loc_8329BB94;
loc_8329BB88:
	// bl 0x8329b278
	ctx.lr = 0x8329BB8C;
	sub_8329B278(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8329BB94:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8329bc20
	if (cr6.lt) goto loc_8329BC20;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x8329bbe4
	if (cr6.lt) goto loc_8329BBE4;
	// beq cr6,0x8329bbd0
	if (cr6.eq) goto loc_8329BBD0;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x8329bbc8
	if (cr6.lt) goto loc_8329BBC8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,29520
	ctx.r5.s64 = ctx.r11.s64 + 29520;
	// addi r3,r10,29496
	ctx.r3.s64 = ctx.r10.s64 + 29496;
	// li r4,311
	ctx.r4.s64 = 311;
	// bl 0x83298458
	ctx.lr = 0x8329BBC8;
	sub_83298458(ctx, base);
loc_8329BBC8:
	// addis r11,r10,24508
	ctx.r11.s64 = ctx.r10.s64 + 1606156288;
	// b 0x8329bbf8
	goto loc_8329BBF8;
loc_8329BBD0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lis r11,-24506
	ctx.r11.s64 = -1606025216;
	// bne cr6,0x8329bbf4
	if (!cr6.eq) goto loc_8329BBF4;
	// lis r11,-24509
	ctx.r11.s64 = -1606221824;
	// b 0x8329bbf4
	goto loc_8329BBF4;
loc_8329BBE4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lis r11,-24507
	ctx.r11.s64 = -1606090752;
	// bne cr6,0x8329bbf4
	if (!cr6.eq) goto loc_8329BBF4;
	// lis r11,-24510
	ctx.r11.s64 = -1606287360;
loc_8329BBF4:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8329BBF8:
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8329bc18
	if (!cr6.eq) goto loc_8329BC18;
	// rlwinm r3,r11,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// xor r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x8329bc28
	if (cr6.eq) goto loc_8329BC28;
loc_8329BC18:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8640
	ctx.r4.u64 = ctx.r4.u64 | 8640;
loc_8329BC20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329BC28;
	sub_8329A350(ctx, base);
loc_8329BC28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329BC30"))) PPC_WEAK_FUNC(sub_8329BC30);
PPC_FUNC_IMPL(__imp__sub_8329BC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,29548
	ctx.r9.s64 = ctx.r11.s64 + 29548;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8329bb40
	ctx.lr = 0x8329BC64;
	sub_8329BB40(ctx, base);
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329BC7C"))) PPC_WEAK_FUNC(sub_8329BC7C);
PPC_FUNC_IMPL(__imp__sub_8329BC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BC80"))) PPC_WEAK_FUNC(sub_8329BC80);
PPC_FUNC_IMPL(__imp__sub_8329BC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8329BC88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x8329bb40
	ctx.lr = 0x8329BCB8;
	sub_8329BB40(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329bcd0
	if (!cr6.lt) goto loc_8329BCD0;
loc_8329BCC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8329BCD0:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// addi r25,r28,560
	ctx.r25.s64 = ctx.r28.s64 + 560;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r28,536
	ctx.r4.s64 = ctx.r28.s64 + 536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329b3d0
	ctx.lr = 0x8329BCFC;
	sub_8329B3D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329bcc4
	if (cr6.eq) goto loc_8329BCC4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x8329bd3c
	if (!cr6.eq) goto loc_8329BD3C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ba18
	ctx.lr = 0x8329BD24;
	sub_8329BA18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329bcc4
	if (cr6.lt) goto loc_8329BCC4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_8329BD3C:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329bd60
	if (!cr6.eq) goto loc_8329BD60;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// rlwinm r10,r10,0,27,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF1F;
	// or r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 | ctx.r24.u64;
	// oris r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 2147483648;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
loc_8329BD60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329BD6C"))) PPC_WEAK_FUNC(sub_8329BD6C);
PPC_FUNC_IMPL(__imp__sub_8329BD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329BD70"))) PPC_WEAK_FUNC(sub_8329BD70);
PPC_FUNC_IMPL(__imp__sub_8329BD70) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic. r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8329bda4
	if (cr0.eq) goto loc_8329BDA4;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8329bdbc
	goto loc_8329BDBC;
loc_8329BDA4:
	// li r5,37
	ctx.r5.s64 = 37;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83299e10
	ctx.lr = 0x8329BDB4;
	sub_83299E10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8329BDBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ce00
	ctx.lr = 0x8329BDC4;
	sub_8329CE00(ctx, base);
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

__attribute__((alias("__imp__sub_8329BDD8"))) PPC_WEAK_FUNC(sub_8329BDD8);
PPC_FUNC_IMPL(__imp__sub_8329BDD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8329BDE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r30,4(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329BE08;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329bf7c
	if (cr6.lt) goto loc_8329BF7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8329bd70
	ctx.lr = 0x8329BE24;
	sub_8329BD70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329bf7c
	if (cr6.lt) goto loc_8329BF7C;
	// lbz r27,47(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// beq cr6,0x8329bf04
	if (cr6.eq) goto loc_8329BF04;
	// lbz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329bf04
	if (!cr6.eq) goto loc_8329BF04;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83299738
	ctx.lr = 0x8329BE54;
	sub_83299738(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,29600
	ctx.r4.s64 = ctx.r11.s64 + 29600;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329d0d0
	ctx.lr = 0x8329BE68;
	sub_8329D0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329bf7c
	if (cr6.lt) goto loc_8329BF7C;
	// lbz r10,46(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lhz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// cmplwi cr6,r27,10
	cr6.compare<uint32_t>(ctx.r27.u32, 10, xer);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 | ctx.r9.u64;
	// bne cr6,0x8329beb4
	if (!cr6.eq) goto loc_8329BEB4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,29584
	ctx.r4.s64 = ctx.r11.s64 + 29584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329d0d0
	ctx.lr = 0x8329BEA4;
	sub_8329D0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329bf7c
	if (cr6.lt) goto loc_8329BF7C;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_8329BEB4:
	// rlwinm r11,r27,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329bf04
	if (cr6.eq) goto loc_8329BF04;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r27,26
	ctx.r3.u64 = ctx.r27.u32 & 0x3F;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329bed8
	if (cr6.eq) goto loc_8329BED8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8329bedc
	goto loc_8329BEDC;
loc_8329BED8:
	// bl 0x832996e8
	ctx.lr = 0x8329BEDC;
	sub_832996E8(ctx, base);
loc_8329BEDC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// divwu r5,r28,r3
	ctx.r5.u32 = PPCDivide(ctx.r28.u32, ctx.r3.u32);
	// twllei r3,0
	// addi r4,r11,29568
	ctx.r4.s64 = ctx.r11.s64 + 29568;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329d0d0
	ctx.lr = 0x8329BEF4;
	sub_8329D0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329bf7c
	if (cr6.lt) goto loc_8329BF7C;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_8329BF04:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,22(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,42(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 42);
	// and r10,r8,r26
	ctx.r10.u64 = ctx.r8.u64 & ctx.r26.u64;
	// and r8,r7,r26
	ctx.r8.u64 = ctx.r7.u64 & ctx.r26.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 & ctx.r3.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8329bfb4
	if (!cr6.eq) goto loc_8329BFB4;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329BF70;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329bf90
	if (!cr6.lt) goto loc_8329BF90;
loc_8329BF7C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329BF88;
	sub_8329A350(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8329BF90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x832aea80
	ctx.lr = 0x8329BFA8;
	sub_832AEA80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329bfb8
	if (cr6.lt) goto loc_8329BFB8;
	// add r30,r3,r31
	ctx.r30.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_8329BFB4:
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
loc_8329BFB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329BFC0"))) PPC_WEAK_FUNC(sub_8329BFC0);
PPC_FUNC_IMPL(__imp__sub_8329BFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8329BFC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r28,4(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329BFF0;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c0f4
	if (cr6.lt) goto loc_8329C0F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8329bd70
	ctx.lr = 0x8329C00C;
	sub_8329BD70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c0f4
	if (cr6.lt) goto loc_8329C0F4;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,29616
	ctx.r4.s64 = ctx.r10.s64 + 29616;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8329d0d0
	ctx.lr = 0x8329C02C;
	sub_8329D0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c0f4
	if (cr6.lt) goto loc_8329C0F4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,46
	ctx.r5.s64 = 46;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x832aea80
	ctx.lr = 0x8329C050;
	sub_832AEA80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c168
	if (cr6.lt) goto loc_8329C168;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C06C;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c0f4
	if (cr6.lt) goto loc_8329C0F4;
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r10,r6,r30
	ctx.r10.u64 = ctx.r6.u64 & ctx.r30.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8329c164
	if (!cr6.eq) goto loc_8329C164;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C0E8;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329c108
	if (!cr6.lt) goto loc_8329C108;
loc_8329C0F4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329C100;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8329C108:
	// lhz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r7,38(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// and r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r9,r5,r30
	ctx.r9.u64 = ctx.r5.u64 & ctx.r30.u64;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r5,47(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 47);
	// bl 0x832aea80
	ctx.lr = 0x8329C158;
	sub_832AEA80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c168
	if (cr6.lt) goto loc_8329C168;
	// add r28,r3,r30
	ctx.r28.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_8329C164:
	// stw r28,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
loc_8329C168:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C170"))) PPC_WEAK_FUNC(sub_8329C170);
PPC_FUNC_IMPL(__imp__sub_8329C170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329C178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,4(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29620
	ctx.r4.s64 = ctx.r11.s64 + 29620;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8329d0d0
	ctx.lr = 0x8329C1A0;
	sub_8329D0D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c1e4
	if (cr6.lt) goto loc_8329C1E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x8329bd70
	ctx.lr = 0x8329C1BC;
	sub_8329BD70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c1e4
	if (cr6.lt) goto loc_8329C1E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C1D8;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329c1f8
	if (!cr6.lt) goto loc_8329C1F8;
loc_8329C1E4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329C1F0;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329C1F8:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C208"))) PPC_WEAK_FUNC(sub_8329C208);
PPC_FUNC_IMPL(__imp__sub_8329C208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8329C210;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// rlwinm r8,r9,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8329c2b4
	if (cr6.eq) goto loc_8329C2B4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,29644
	ctx.r4.s64 = ctx.r11.s64 + 29644;
	// bl 0x8329d0d0
	ctx.lr = 0x8329C250;
	sub_8329D0D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c314
	if (cr6.lt) goto loc_8329C314;
	// lbz r3,19(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 19);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// bl 0x8329f000
	ctx.lr = 0x8329C268;
	sub_8329F000(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329c294
	if (cr6.eq) goto loc_8329C294;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,29628
	ctx.r4.s64 = ctx.r11.s64 + 29628;
	// bl 0x8329d0d0
	ctx.lr = 0x8329C284;
	sub_8329D0D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c314
	if (cr6.lt) goto loc_8329C314;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8329C294:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,29624
	ctx.r4.s64 = ctx.r11.s64 + 29624;
	// bl 0x8329d0d0
	ctx.lr = 0x8329C2A4;
	sub_8329D0D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c314
	if (cr6.lt) goto loc_8329C314;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8329C2B4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// rlwinm r6,r10,23,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stb r6,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r6.u8);
	// addi r6,r5,-16936
	ctx.r6.s64 = ctx.r5.s64 + -16936;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r8,-16016
	ctx.r8.s64 = ctx.r8.s64 + -16016;
	// addi r7,r7,-16448
	ctx.r7.s64 = ctx.r7.s64 + -16448;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832ae4b8
	ctx.lr = 0x8329C2F4;
	sub_832AE4B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c320
	if (cr6.lt) goto loc_8329C320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329cd90
	ctx.lr = 0x8329C308;
	sub_8329CD90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329c32c
	if (!cr6.lt) goto loc_8329C32C;
loc_8329C314:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329C320;
	sub_8329A350(ctx, base);
loc_8329C320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329C32C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C338"))) PPC_WEAK_FUNC(sub_8329C338);
PPC_FUNC_IMPL(__imp__sub_8329C338) {
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
	// rlwinm r11,r3,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329c364
	if (!cr6.eq) goto loc_8329C364;
	// bl 0x832996e8
	ctx.lr = 0x8329C354;
	sub_832996E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8329c38c
	if (cr6.eq) goto loc_8329C38C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8329c378
	if (cr6.eq) goto loc_8329C378;
loc_8329C364:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8329C378:
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
loc_8329C38C:
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

__attribute__((alias("__imp__sub_8329C3A0"))) PPC_WEAK_FUNC(sub_8329C3A0);
PPC_FUNC_IMPL(__imp__sub_8329C3A0) {
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
	// rlwinm r4,r4,8,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C3C4;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c40c
	if (cr6.lt) goto loc_8329C40C;
	// rlwinm r4,r30,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C3D8;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c40c
	if (cr6.lt) goto loc_8329C40C;
	// rlwinm r4,r30,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C3EC;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c40c
	if (cr6.lt) goto loc_8329C40C;
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C400;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c40c
	if (cr6.lt) goto loc_8329C40C;
	// li r3,4
	ctx.r3.s64 = 4;
loc_8329C40C:
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

__attribute__((alias("__imp__sub_8329C424"))) PPC_WEAK_FUNC(sub_8329C424);
PPC_FUNC_IMPL(__imp__sub_8329C424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C428"))) PPC_WEAK_FUNC(sub_8329C428);
PPC_FUNC_IMPL(__imp__sub_8329C428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329C430;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8329c460
	if (cr0.eq) goto loc_8329C460;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// ble cr6,0x8329c46c
	if (!cr6.gt) goto loc_8329C46C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x8329c470
	goto loc_8329C470;
loc_8329C460:
	// lbz r11,27(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_8329C46C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8329C470:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lbz r28,47(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// beq cr6,0x8329c5bc
	if (cr6.eq) goto loc_8329C5BC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329c338
	ctx.lr = 0x8329C498;
	sub_8329C338(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8329c578
	if (cr6.eq) goto loc_8329C578;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8329c520
	if (cr6.eq) goto loc_8329C520;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8329c4c8
	if (cr6.eq) goto loc_8329C4C8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,29700
	ctx.r5.s64 = ctx.r11.s64 + 29700;
	// addi r3,r10,29664
	ctx.r3.s64 = ctx.r10.s64 + 29664;
	// li r4,140
	ctx.r4.s64 = 140;
	// bl 0x83298458
	ctx.lr = 0x8329C4C8;
	sub_83298458(ctx, base);
loc_8329C4C8:
	// lhz r29,26(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8329c4fc
	if (!cr6.eq) goto loc_8329C4FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,30(r30)
	PPC_STORE_U16(ctx.r30.u32 + 30, ctx.r11.u16);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// sth r10,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r10.u16);
	// b 0x8329c5bc
	goto loc_8329C5BC;
loc_8329C4FC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r27,28(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// bl 0x83299720
	ctx.lr = 0x8329C508;
	sub_83299720(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sth r27,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r27.u16);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// sth r10,26(r31)
	PPC_STORE_U16(ctx.r31.u32 + 26, ctx.r10.u16);
	// b 0x8329c5bc
	goto loc_8329C5BC;
loc_8329C520:
	// lhz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8329c558
	if (!cr6.eq) goto loc_8329C558;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r11,0,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// sth r10,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r10.u16);
	// b 0x8329c5bc
	goto loc_8329C5BC;
loc_8329C558:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// stb r9,28(r8)
	PPC_STORE_U8(ctx.r8.u32 + 28, ctx.r9.u8);
	// sth r10,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r10.u16);
	// b 0x8329c5bc
	goto loc_8329C5BC;
loc_8329C578:
	// lbz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// rlwinm r10,r28,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0x1;
	// lhz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// rlwinm r29,r7,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// bne cr6,0x8329c5ac
	if (!cr6.eq) goto loc_8329C5AC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832996e8
	ctx.lr = 0x8329C5A4;
	sub_832996E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329c5b0
	if (!cr6.lt) goto loc_8329C5B0;
loc_8329C5AC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8329C5B0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8329C5BC:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8329c5e8
	if (cr6.eq) goto loc_8329C5E8;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x8329C5DC;
	sub_832AA6E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299d40
	ctx.lr = 0x8329C5E8;
	sub_83299D40(ctx, base);
loc_8329C5E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C5F0"))) PPC_WEAK_FUNC(sub_8329C5F0);
PPC_FUNC_IMPL(__imp__sub_8329C5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,15268
	ctx.r4.s64 = ctx.r11.s64 + 15268;
	// b 0x832aa6e0
	sub_832AA6E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C618"))) PPC_WEAK_FUNC(sub_8329C618);
PPC_FUNC_IMPL(__imp__sub_8329C618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329C61C"))) PPC_WEAK_FUNC(sub_8329C61C);
PPC_FUNC_IMPL(__imp__sub_8329C61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C620"))) PPC_WEAK_FUNC(sub_8329C620);
PPC_FUNC_IMPL(__imp__sub_8329C620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329C628;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// sth r11,24(r6)
	PPC_STORE_U16(ctx.r6.u32 + 24, ctx.r11.u16);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// sth r11,26(r6)
	PPC_STORE_U16(ctx.r6.u32 + 26, ctx.r11.u16);
	// beq cr6,0x8329c67c
	if (cr6.eq) goto loc_8329C67C;
	// addi r10,r7,-3
	ctx.r10.s64 = ctx.r7.s64 + -3;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 & ctx.r30.u64;
loc_8329C67C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8329c6b4
	if (cr6.eq) goto loc_8329C6B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832aa638
	ctx.lr = 0x8329C690;
	sub_832AA638(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// bne cr6,0x8329c6b8
	if (!cr6.eq) goto loc_8329C6B8;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,8322
	ctx.r4.u64 = ctx.r4.u64 | 8322;
	// bl 0x8329a350
	ctx.lr = 0x8329C6AC;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329C6B4:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8329C6B8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r8,r11,-14864
	ctx.r8.s64 = ctx.r11.s64 + -14864;
	// addi r7,r10,-15320
	ctx.r7.s64 = ctx.r10.s64 + -15320;
	// addi r6,r6,-15320
	ctx.r6.s64 = ctx.r6.s64 + -15320;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832ae4b8
	ctx.lr = 0x8329C6E4;
	sub_832AE4B8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8329c71c
	if (cr6.eq) goto loc_8329C71C;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15269
	ctx.r4.s64 = ctx.r11.s64 + 15269;
	// bl 0x832aa6e0
	ctx.lr = 0x8329C704;
	sub_832AA6E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832aa810
	ctx.lr = 0x8329C714;
	sub_832AA810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa8b8
	ctx.lr = 0x8329C71C;
	sub_832AA8B8(ctx, base);
loc_8329C71C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C724"))) PPC_WEAK_FUNC(sub_8329C724);
PPC_FUNC_IMPL(__imp__sub_8329C724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C728"))) PPC_WEAK_FUNC(sub_8329C728);
PPC_FUNC_IMPL(__imp__sub_8329C728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329C730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r4,47(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 47);
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C74C;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c774
	if (cr6.lt) goto loc_8329C774;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x83299c38
	ctx.lr = 0x8329C768;
	sub_83299C38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329c788
	if (!cr6.lt) goto loc_8329C788;
loc_8329C774:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329C780;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329C788:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C7A0"))) PPC_WEAK_FUNC(sub_8329C7A0);
PPC_FUNC_IMPL(__imp__sub_8329C7A0) {
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
	// li r4,254
	ctx.r4.s64 = 254;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C7C8;
	sub_8329CED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329c7e0
	if (!cr6.lt) goto loc_8329C7E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329C7DC;
	sub_8329A350(ctx, base);
	// b 0x8329c7ec
	goto loc_8329C7EC;
loc_8329C7E0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8329C7EC:
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

__attribute__((alias("__imp__sub_8329C804"))) PPC_WEAK_FUNC(sub_8329C804);
PPC_FUNC_IMPL(__imp__sub_8329C804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C808"))) PPC_WEAK_FUNC(sub_8329C808);
PPC_FUNC_IMPL(__imp__sub_8329C808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8329C810;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r11,r6,3
	ctx.r11.s64 = ctx.r6.s64 + 3;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x8329c3a0
	ctx.lr = 0x8329C844;
	sub_8329C3A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c96c
	if (cr6.lt) goto loc_8329C96C;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,-14432
	ctx.r8.s64 = ctx.r10.s64 + -14432;
	// addi r7,r7,-14552
	ctx.r7.s64 = ctx.r7.s64 + -14552;
	// addi r6,r6,-14552
	ctx.r6.s64 = ctx.r6.s64 + -14552;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x832ae4b8
	ctx.lr = 0x8329C880;
	sub_832AE4B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c96c
	if (cr6.lt) goto loc_8329C96C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C8A0;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c96c
	if (cr6.lt) goto loc_8329C96C;
	// neg r10,r28
	ctx.r10.s64 = -ctx.r28.s64;
	// add r28,r3,r30
	ctx.r28.u64 = ctx.r3.u64 + ctx.r30.u64;
	// clrlwi r29,r10,30
	ctx.r29.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// ble cr6,0x8329c8c4
	if (!cr6.gt) goto loc_8329C8C4;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8329C8C4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// li r30,24
	ctx.r30.s64 = 24;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8329c960
	if (cr6.gt) goto loc_8329C960;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8329c944
	if (cr6.eq) goto loc_8329C944;
	// bdz 0x8329c924
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329C924;
	// bdz 0x8329c904
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8329C904;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329C8F4;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c96c
	if (cr6.lt) goto loc_8329C96C;
	// li r30,16
	ctx.r30.s64 = 16;
loc_8329C904:
	// srw r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r30.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x8329C914;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c96c
	if (cr6.lt) goto loc_8329C96C;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
loc_8329C924:
	// srw r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r30.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x8329C934;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c96c
	if (cr6.lt) goto loc_8329C96C;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
loc_8329C944:
	// srw r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r30.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8329ced8
	ctx.lr = 0x8329C954;
	sub_8329CED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329c96c
	if (cr6.lt) goto loc_8329C96C;
loc_8329C960:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge cr6,0x8329c980
	if (!cr6.lt) goto loc_8329C980;
loc_8329C96C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329C978;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8329C980:
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329C98C"))) PPC_WEAK_FUNC(sub_8329C98C);
PPC_FUNC_IMPL(__imp__sub_8329C98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329C990"))) PPC_WEAK_FUNC(sub_8329C990);
PPC_FUNC_IMPL(__imp__sub_8329C990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329C998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,47(r5)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + 47);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r11,r30,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329ca70
	if (!cr6.eq) goto loc_8329CA70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832996e8
	ctx.lr = 0x8329C9C0;
	sub_832996E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8329ca18
	if (cr6.eq) goto loc_8329CA18;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8329ca70
	if (!cr6.eq) goto loc_8329CA70;
	// lhz r30,10(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8329ca04
	if (!cr6.eq) goto loc_8329CA04;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// bl 0x8329ce00
	ctx.lr = 0x8329C9EC;
	sub_8329CE00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329ca40
	if (cr6.lt) goto loc_8329CA40;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8329CA04:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// sth r10,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329CA18:
	// lhz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8329ca5c
	if (!cr6.eq) goto loc_8329CA5C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// bl 0x8329ce00
	ctx.lr = 0x8329CA34;
	sub_8329CE00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329ca50
	if (!cr6.lt) goto loc_8329CA50;
loc_8329CA40:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329CA48;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329CA50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8329CA5C:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329CA70:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832ae1f8
	ctx.lr = 0x8329CA84;
	sub_832AE1F8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329CA98"))) PPC_WEAK_FUNC(sub_8329CA98);
PPC_FUNC_IMPL(__imp__sub_8329CA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8329CAA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x8329c620
	ctx.lr = 0x8329CACC;
	sub_8329C620(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x8329cb24
	if (cr6.lt) goto loc_8329CB24;
	// beq cr6,0x8329cb00
	if (cr6.eq) goto loc_8329CB00;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x8329caf8
	if (cr6.lt) goto loc_8329CAF8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,29688
	ctx.r5.s64 = ctx.r11.s64 + 29688;
	// addi r3,r10,29664
	ctx.r3.s64 = ctx.r10.s64 + 29664;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x83298458
	ctx.lr = 0x8329CAF8;
	sub_83298458(ctx, base);
loc_8329CAF8:
	// lis r11,-24508
	ctx.r11.s64 = -1606156288;
	// b 0x8329cb40
	goto loc_8329CB40;
loc_8329CB00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8329cb1c
	if (!cr6.eq) goto loc_8329CB1C;
	// lis r11,-24506
	ctx.r11.s64 = -1606025216;
	// b 0x8329cb40
	goto loc_8329CB40;
loc_8329CB1C:
	// lis r11,-24509
	ctx.r11.s64 = -1606221824;
	// b 0x8329cb40
	goto loc_8329CB40;
loc_8329CB24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// lis r11,-24507
	ctx.r11.s64 = -1606090752;
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8329cb40
	if (cr6.eq) goto loc_8329CB40;
	// lis r11,-24510
	ctx.r11.s64 = -1606287360;
loc_8329CB40:
	// lbz r10,19(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 19);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// xori r9,r10,255
	ctx.r9.u64 = ctx.r10.u64 ^ 255;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 | ctx.r11.u64;
	// bl 0x8329c3a0
	ctx.lr = 0x8329CB5C;
	sub_8329C3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329cb78
	if (!cr6.lt) goto loc_8329CB78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329CB70;
	sub_8329A350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8329cb7c
	goto loc_8329CB7C;
loc_8329CB78:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8329CB7C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8329cc98
	if (cr6.lt) goto loc_8329CC98;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x8329cbb4
	if (!cr6.eq) goto loc_8329CBB4;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329ce00
	ctx.lr = 0x8329CBA0;
	sub_8329CE00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329cc8c
	if (cr6.lt) goto loc_8329CC8C;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// b 0x8329cbe4
	goto loc_8329CBE4;
loc_8329CBB4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329c808
	ctx.lr = 0x8329CBCC;
	sub_8329C808(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329cc98
	if (cr6.lt) goto loc_8329CC98;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// beq cr6,0x8329cc78
	if (cr6.eq) goto loc_8329CC78;
loc_8329CBE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// rlwinm r4,r9,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x8329c3a0
	ctx.lr = 0x8329CC0C;
	sub_8329C3A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329cc50
	if (cr6.lt) goto loc_8329CC50;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-13936
	ctx.r7.s64 = ctx.r10.s64 + -13936;
	// addi r6,r6,-13936
	ctx.r6.s64 = ctx.r6.s64 + -13936;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x832ae4b8
	ctx.lr = 0x8329CC44;
	sub_832AE4B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329cc64
	if (!cr6.lt) goto loc_8329CC64;
loc_8329CC50:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329CC5C;
	sub_8329A350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8329cc6c
	goto loc_8329CC6C;
loc_8329CC64:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_8329CC6C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x8329cc98
	if (cr6.lt) goto loc_8329CC98;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
loc_8329CC78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cd90
	ctx.lr = 0x8329CC80;
	sub_8329CD90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329cca4
	if (!cr6.lt) goto loc_8329CCA4;
loc_8329CC8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329CC98;
	sub_8329A350(ctx, base);
loc_8329CC98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329CCA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329CCB0"))) PPC_WEAK_FUNC(sub_8329CCB0);
PPC_FUNC_IMPL(__imp__sub_8329CCB0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,16
	cr6.compare<int32_t>(ctx.r7.s32, 16, xer);
	// bge cr6,0x8329ccec
	if (!cr6.lt) goto loc_8329CCEC;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// ori r4,r4,8196
	ctx.r4.u64 = ctx.r4.u64 | 8196;
	// bl 0x8329a350
	ctx.lr = 0x8329CCE8;
	sub_8329A350(ctx, base);
	// b 0x8329cd38
	goto loc_8329CD38;
loc_8329CCEC:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x8329c620
	ctx.lr = 0x8329CCFC;
	sub_8329C620(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8329cd10
	if (cr6.eq) goto loc_8329CD10;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329cd38
	if (cr6.lt) goto loc_8329CD38;
loc_8329CD10:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83293fb0
	ctx.lr = 0x8329CD20;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8329cd38
	if (cr6.eq) goto loc_8329CD38;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,8832
	ctx.r4.u64 = ctx.r4.u64 | 8832;
	// bl 0x8329a350
	ctx.lr = 0x8329CD38;
	sub_8329A350(ctx, base);
loc_8329CD38:
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

__attribute__((alias("__imp__sub_8329CD50"))) PPC_WEAK_FUNC(sub_8329CD50);
PPC_FUNC_IMPL(__imp__sub_8329CD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329CD58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,536
	ctx.r5.s64 = 536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x83294018
	ctx.lr = 0x8329CD78;
	sub_83294018(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stb r30,19(r31)
	PPC_STORE_U8(ctx.r31.u32 + 19, ctx.r30.u8);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329CD8C"))) PPC_WEAK_FUNC(sub_8329CD8C);
PPC_FUNC_IMPL(__imp__sub_8329CD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CD90"))) PPC_WEAK_FUNC(sub_8329CD90);
PPC_FUNC_IMPL(__imp__sub_8329CD90) {
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
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// lhz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329CDC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x8329cdd8
	if (cr6.eq) goto loc_8329CDD8;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// b 0x8329cde4
	goto loc_8329CDE4;
loc_8329CDD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
loc_8329CDE4:
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

__attribute__((alias("__imp__sub_8329CDFC"))) PPC_WEAK_FUNC(sub_8329CDFC);
PPC_FUNC_IMPL(__imp__sub_8329CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CE00"))) PPC_WEAK_FUNC(sub_8329CE00);
PPC_FUNC_IMPL(__imp__sub_8329CE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8329CE08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r27,16(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subfic r29,r27,512
	xer.ca = ctx.r27.u32 <= 512;
	ctx.r29.s64 = 512 - ctx.r27.s64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r26,r3,20
	ctx.r26.s64 = ctx.r3.s64 + 20;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, xer);
	// ble cr6,0x8329ce78
	if (!cr6.gt) goto loc_8329CE78;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r27,r26
	ctx.r3.u64 = ctx.r27.u64 + ctx.r26.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329CE3C;
	sub_83293EC8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329CE54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,512
	cr6.compare<uint32_t>(ctx.r3.u32, 512, xer);
	// beq cr6,0x8329ce6c
	if (cr6.eq) goto loc_8329CE6C;
loc_8329CE5C:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329CE6C:
	// li r27,0
	ctx.r27.s64 = 0;
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// subf r31,r29,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r29.s64;
loc_8329CE78:
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(ctx.r31.s32, 512, xer);
	// blt cr6,0x8329ceb0
	if (cr6.lt) goto loc_8329CEB0;
loc_8329CE80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329CE98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,512
	cr6.compare<uint32_t>(ctx.r3.u32, 512, xer);
	// bne cr6,0x8329ce5c
	if (!cr6.eq) goto loc_8329CE5C;
	// addi r31,r31,-512
	ctx.r31.s64 = ctx.r31.s64 + -512;
	// addi r28,r28,512
	ctx.r28.s64 = ctx.r28.s64 + 512;
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(ctx.r31.s32, 512, xer);
	// bge cr6,0x8329ce80
	if (!cr6.lt) goto loc_8329CE80;
loc_8329CEB0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r27,r26
	ctx.r3.u64 = ctx.r27.u64 + ctx.r26.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329CEC0;
	sub_83293EC8(ctx, base);
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r11,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329CED4"))) PPC_WEAK_FUNC(sub_8329CED4);
PPC_FUNC_IMPL(__imp__sub_8329CED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329CED8"))) PPC_WEAK_FUNC(sub_8329CED8);
PPC_FUNC_IMPL(__imp__sub_8329CED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329CEE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// blt cr6,0x8329cf30
	if (cr6.lt) goto loc_8329CF30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329CF14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,512
	cr6.compare<uint32_t>(ctx.r3.u32, 512, xer);
	// beq cr6,0x8329cf2c
	if (cr6.eq) goto loc_8329CF2C;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329CF2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8329CF30:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r29,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329CF48"))) PPC_WEAK_FUNC(sub_8329CF48);
PPC_FUNC_IMPL(__imp__sub_8329CF48) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r4,29,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1C;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw. r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge 0x8329d0b8
	if (!cr0.lt) goto loc_8329D0B8;
	// li r10,38
	ctx.r10.s64 = 38;
	// li r9,35
	ctx.r9.s64 = 35;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// blt cr6,0x8329d01c
	if (cr6.lt) goto loc_8329D01C;
	// li r10,10
	ctx.r10.s64 = 10;
	// lis r9,26214
	ctx.r9.s64 = 1717960704;
	// divw r6,r11,r10
	ctx.r6.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// ori r10,r9,26215
	ctx.r10.u64 = ctx.r9.u64 | 26215;
	// li r5,100
	ctx.r5.s64 = 100;
	// mulhw r4,r6,r10
	ctx.r4.s64 = (int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32)) >> 32;
	// mulhw r9,r11,r10
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r10,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r9,r11,r5
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r5.s32);
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r7,r9,48
	ctx.r7.s64 = ctx.r9.s64 + 48;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r6,r10,48
	ctx.r6.s64 = ctx.r10.s64 + 48;
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// li r9,59
	ctx.r9.s64 = 59;
	// stb r5,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r5.u8);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r9,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8329ce00
	ctx.lr = 0x8329D00C;
	sub_8329CE00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8329D01C:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x8329d088
	if (cr6.lt) goto loc_8329D088;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// li r9,10
	ctx.r9.s64 = 10;
	// ori r7,r10,26215
	ctx.r7.u64 = ctx.r10.u64 | 26215;
	// divw r8,r11,r9
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r9.s32);
	// mulhw r6,r11,r7
	ctx.r6.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32)) >> 32;
	// srawi r10,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 2;
	// addi r5,r8,48
	ctx.r5.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// li r8,59
	ctx.r8.s64 = 59;
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x8329ce00
	ctx.lr = 0x8329D078;
	sub_8329CE00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8329D088:
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// li r10,59
	ctx.r10.s64 = 59;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8329ce00
	ctx.lr = 0x8329D0A8;
	sub_8329CE00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8329D0B8:
	// bl 0x8329ced8
	ctx.lr = 0x8329D0BC;
	sub_8329CED8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D0CC"))) PPC_WEAK_FUNC(sub_8329D0CC);
PPC_FUNC_IMPL(__imp__sub_8329D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D0D0"))) PPC_WEAK_FUNC(sub_8329D0D0);
PPC_FUNC_IMPL(__imp__sub_8329D0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,-12584
	ctx.r3.s64 = ctx.r10.s64 + -12584;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832974a8
	ctx.lr = 0x8329D11C;
	sub_832974A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D12C"))) PPC_WEAK_FUNC(sub_8329D12C);
PPC_FUNC_IMPL(__imp__sub_8329D12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329D130"))) PPC_WEAK_FUNC(sub_8329D130);
PPC_FUNC_IMPL(__imp__sub_8329D130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329D138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// blt cr6,0x8329d178
	if (cr6.lt) goto loc_8329D178;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329D16C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,512
	cr6.compare<uint32_t>(ctx.r3.u32, 512, xer);
	// bne cr6,0x8329d1a8
	if (!cr6.eq) goto loc_8329D1A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8329D178:
	// rlwinm r9,r29,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r9,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u8);
	// clrlwi r4,r29,24
	ctx.r4.u64 = ctx.r29.u32 & 0xFF;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329D194;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d1a0
	if (cr6.lt) goto loc_8329D1A0;
	// li r3,2
	ctx.r3.s64 = 2;
loc_8329D1A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329D1A8:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329D1B8"))) PPC_WEAK_FUNC(sub_8329D1B8);
PPC_FUNC_IMPL(__imp__sub_8329D1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8329D1C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329d1e4
	if (cr6.eq) goto loc_8329D1E4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,15304
	ctx.r10.s64 = ctx.r11.s64 + 15304;
	// b 0x8329d1ec
	goto loc_8329D1EC;
loc_8329D1E4:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,15272
	ctx.r10.s64 = ctx.r11.s64 + 15272;
loc_8329D1EC:
	// lbz r11,19(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 19);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r11,96
	cr6.compare<int32_t>(ctx.r11.s32, 96, xer);
	// bgt cr6,0x8329d534
	if (cr6.gt) goto loc_8329D534;
	// beq cr6,0x8329d260
	if (cr6.eq) goto loc_8329D260;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8329d21c
	if (cr6.eq) goto loc_8329D21C;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// beq cr6,0x8329d21c
	if (cr6.eq) goto loc_8329D21C;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// bne cr6,0x8329d544
	if (!cr6.eq) goto loc_8329D544;
loc_8329D21C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x8329d86c
	if (!cr6.gt) goto loc_8329D86C;
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
loc_8329D228:
	// lbzu r4,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8329d86c
	if (cr6.eq) goto loc_8329D86C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D240;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bgt cr6,0x8329d228
	if (cr6.gt) goto loc_8329D228;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329D260:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x8329d4cc
	if (!cr6.gt) goto loc_8329D4CC;
	// addi r26,r4,-1
	ctx.r26.s64 = ctx.r4.s64 + -1;
loc_8329D278:
	// lbzu r29,1(r26)
	ea = 1 + ctx.r26.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r26.u32 = ea;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8329d4cc
	if (cr6.eq) goto loc_8329D4CC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x8329d480
	if (cr6.lt) goto loc_8329D480;
	// beq cr6,0x8329d358
	if (cr6.eq) goto loc_8329D358;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x8329d504
	if (!cr6.lt) goto loc_8329D504;
	// cmplwi cr6,r29,161
	cr6.compare<uint32_t>(ctx.r29.u32, 161, xer);
	// blt cr6,0x8329d2f8
	if (cr6.lt) goto loc_8329D2F8;
	// cmplwi cr6,r29,254
	cr6.compare<uint32_t>(ctx.r29.u32, 254, xer);
	// bgt cr6,0x8329d2f8
	if (cr6.gt) goto loc_8329D2F8;
	// rlwimi r28,r30,8,16,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFF00) | (ctx.r28.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x8329d130
	ctx.lr = 0x8329D2C0;
	sub_8329D130(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d528
	if (cr6.lt) goto loc_8329D528;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329D2D8;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8329d4c4
	goto loc_8329D4C4;
loc_8329D2F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D304;
	sub_8329CF48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d51c
	if (cr6.lt) goto loc_8329D51C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D31C;
	sub_8329CF48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d528
	if (cr6.lt) goto loc_8329D528;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D334;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8329d4c4
	goto loc_8329D4C4;
loc_8329D358:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmpwi cr6,r10,142
	cr6.compare<int32_t>(ctx.r10.s32, 142, xer);
	// beq cr6,0x8329d404
	if (cr6.eq) goto loc_8329D404;
	// cmpwi cr6,r10,143
	cr6.compare<int32_t>(ctx.r10.s32, 143, xer);
	// beq cr6,0x8329d3a8
	if (cr6.eq) goto loc_8329D3A8;
	// cmplwi cr6,r11,161
	cr6.compare<uint32_t>(ctx.r11.u32, 161, xer);
	// blt cr6,0x8329d440
	if (cr6.lt) goto loc_8329D440;
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(ctx.r11.u32, 254, xer);
	// bgt cr6,0x8329d440
	if (cr6.gt) goto loc_8329D440;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8329d130
	ctx.lr = 0x8329D390;
	sub_8329D130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8329d4c4
	goto loc_8329D4C4;
loc_8329D3A8:
	// cmplwi cr6,r11,161
	cr6.compare<uint32_t>(ctx.r11.u32, 161, xer);
	// blt cr6,0x8329d3c4
	if (cr6.lt) goto loc_8329D3C4;
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(ctx.r11.u32, 254, xer);
	// bgt cr6,0x8329d3c4
	if (cr6.gt) goto loc_8329D3C4;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8329d4c4
	goto loc_8329D4C4;
loc_8329D3C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D3D0;
	sub_8329CF48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d528
	if (cr6.lt) goto loc_8329D528;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D3E8;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8329d4c4
	goto loc_8329D4C4;
loc_8329D404:
	// cmplwi cr6,r11,161
	cr6.compare<uint32_t>(ctx.r11.u32, 161, xer);
	// blt cr6,0x8329d440
	if (cr6.lt) goto loc_8329D440;
	// cmplwi cr6,r11,223
	cr6.compare<uint32_t>(ctx.r11.u32, 223, xer);
	// bgt cr6,0x8329d440
	if (cr6.gt) goto loc_8329D440;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8329d130
	ctx.lr = 0x8329D428;
	sub_8329D130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8329d4c4
	goto loc_8329D4C4;
loc_8329D440:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D44C;
	sub_8329CF48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d528
	if (cr6.lt) goto loc_8329D528;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D464;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8329d4c4
	goto loc_8329D4C4;
loc_8329D480:
	// cmplwi cr6,r11,143
	cr6.compare<uint32_t>(ctx.r11.u32, 143, xer);
	// beq cr6,0x8329d4bc
	if (cr6.eq) goto loc_8329D4BC;
	// cmplwi cr6,r11,142
	cr6.compare<uint32_t>(ctx.r11.u32, 142, xer);
	// beq cr6,0x8329d4bc
	if (cr6.eq) goto loc_8329D4BC;
	// cmplwi cr6,r11,161
	cr6.compare<uint32_t>(ctx.r11.u32, 161, xer);
	// blt cr6,0x8329d4a0
	if (cr6.lt) goto loc_8329D4A0;
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(ctx.r11.u32, 254, xer);
	// ble cr6,0x8329d4bc
	if (!cr6.gt) goto loc_8329D4BC;
loc_8329D4A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D4AC;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// b 0x8329d4c4
	goto loc_8329D4C4;
loc_8329D4BC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8329D4C4:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bgt cr6,0x8329d278
	if (cr6.gt) goto loc_8329D278;
loc_8329D4CC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329d86c
	if (cr6.eq) goto loc_8329D86C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D4E4;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329d86c
	if (cr6.eq) goto loc_8329D86C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8329d858
	goto loc_8329D858;
loc_8329D504:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,29736
	ctx.r5.s64 = ctx.r11.s64 + 29736;
	// addi r3,r10,29716
	ctx.r3.s64 = ctx.r10.s64 + 29716;
	// li r4,316
	ctx.r4.s64 = 316;
	// bl 0x83298458
	ctx.lr = 0x8329D51C;
	sub_83298458(ctx, base);
loc_8329D51C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329D528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329D534:
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// beq cr6,0x8329d720
	if (cr6.eq) goto loc_8329D720;
	// cmpwi cr6,r11,160
	cr6.compare<int32_t>(ctx.r11.s32, 160, xer);
	// beq cr6,0x8329d55c
	if (cr6.eq) goto loc_8329D55C;
loc_8329D544:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,29736
	ctx.r5.s64 = ctx.r11.s64 + 29736;
	// addi r3,r10,29716
	ctx.r3.s64 = ctx.r10.s64 + 29716;
	// li r4,516
	ctx.r4.s64 = 516;
	// bl 0x83298458
	ctx.lr = 0x8329D55C;
	sub_83298458(ctx, base);
loc_8329D55C:
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x8329d6e0
	if (!cr6.gt) goto loc_8329D6E0;
	// lis r11,-32759
	ctx.r11.s64 = -2146893824;
	// addi r26,r4,-1
	ctx.r26.s64 = ctx.r4.s64 + -1;
	// ori r25,r11,8576
	ctx.r25.u64 = ctx.r11.u64 | 8576;
loc_8329D578:
	// lbzu r4,1(r26)
	ea = 1 + ctx.r26.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r26.u32 = ea;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8329d6e0
	if (cr6.eq) goto loc_8329D6E0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8329d604
	if (!cr6.eq) goto loc_8329D604;
	// cmplwi cr6,r4,240
	cr6.compare<uint32_t>(ctx.r4.u32, 240, xer);
	// blt cr6,0x8329d5ac
	if (cr6.lt) goto loc_8329D5AC;
	// li r31,3
	ctx.r31.s64 = 3;
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// addi r28,r1,81
	ctx.r28.s64 = ctx.r1.s64 + 81;
	// b 0x8329d6d8
	goto loc_8329D6D8;
loc_8329D5AC:
	// cmplwi cr6,r11,224
	cr6.compare<uint32_t>(ctx.r11.u32, 224, xer);
	// blt cr6,0x8329d5cc
	if (cr6.lt) goto loc_8329D5CC;
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(ctx.r11.u32, 239, xer);
	// bgt cr6,0x8329d5cc
	if (cr6.gt) goto loc_8329D5CC;
	// li r31,2
	ctx.r31.s64 = 2;
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// addi r28,r1,81
	ctx.r28.s64 = ctx.r1.s64 + 81;
	// b 0x8329d6d8
	goto loc_8329D6D8;
loc_8329D5CC:
	// cmplwi cr6,r11,192
	cr6.compare<uint32_t>(ctx.r11.u32, 192, xer);
	// blt cr6,0x8329d5ec
	if (cr6.lt) goto loc_8329D5EC;
	// cmplwi cr6,r11,223
	cr6.compare<uint32_t>(ctx.r11.u32, 223, xer);
	// bgt cr6,0x8329d5ec
	if (cr6.gt) goto loc_8329D5EC;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// addi r28,r1,81
	ctx.r28.s64 = ctx.r1.s64 + 81;
	// b 0x8329d6d8
	goto loc_8329D6D8;
loc_8329D5EC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D5F4;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// b 0x8329d6d8
	goto loc_8329D6D8;
loc_8329D604:
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// stb r4,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r4.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(ctx.r11.u32, 128, xer);
	// bne cr6,0x8329d69c
	if (!cr6.eq) goto loc_8329D69C;
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8329d6d8
	if (!cr0.eq) goto loc_8329D6D8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x8329d6d0
	if (cr6.eq) goto loc_8329D6D0;
	// addi r29,r27,20
	ctx.r29.s64 = ctx.r27.s64 + 20;
loc_8329D634:
	// lhz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 16);
	// lbz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// blt cr6,0x8329d670
	if (cr6.lt) goto loc_8329D670;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329D65C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,512
	cr6.compare<uint32_t>(ctx.r3.u32, 512, xer);
	// beq cr6,0x8329d66c
	if (cr6.eq) goto loc_8329D66C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8329d680
	goto loc_8329D680;
loc_8329D66C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8329D670:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stbx r31,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r31.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,16(r27)
	PPC_STORE_U16(ctx.r27.u32 + 16, ctx.r10.u16);
loc_8329D680:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x8329d634
	if (!cr6.eq) goto loc_8329D634;
	// b 0x8329d6d0
	goto loc_8329D6D0;
loc_8329D69C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x8329d6d0
	if (cr6.eq) goto loc_8329D6D0;
loc_8329D6AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x8329cf48
	ctx.lr = 0x8329D6B8;
	sub_8329CF48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x8329d6ac
	if (!cr6.eq) goto loc_8329D6AC;
loc_8329D6D0:
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8329D6D8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bgt cr6,0x8329d578
	if (cr6.gt) goto loc_8329D578;
loc_8329D6E0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x8329d86c
	if (cr6.eq) goto loc_8329D86C;
loc_8329D6F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x8329cf48
	ctx.lr = 0x8329D6FC;
	sub_8329CF48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x8329d6f0
	if (!cr6.eq) goto loc_8329D6F0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329D720:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// ble cr6,0x8329d848
	if (!cr6.gt) goto loc_8329D848;
	// addi r28,r4,-1
	ctx.r28.s64 = ctx.r4.s64 + -1;
loc_8329D734:
	// lbzu r31,1(r28)
	ea = 1 + ctx.r28.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8329d848
	if (cr6.eq) goto loc_8329D848;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8329d7c8
	if (!cr6.eq) goto loc_8329D7C8;
	// cmplwi cr6,r31,161
	cr6.compare<uint32_t>(ctx.r31.u32, 161, xer);
	// blt cr6,0x8329d780
	if (cr6.lt) goto loc_8329D780;
	// cmplwi cr6,r31,223
	cr6.compare<uint32_t>(ctx.r31.u32, 223, xer);
	// bgt cr6,0x8329d780
	if (cr6.gt) goto loc_8329D780;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329ced8
	ctx.lr = 0x8329D770;
	sub_8329CED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// b 0x8329d840
	goto loc_8329D840;
loc_8329D780:
	// cmplwi cr6,r11,129
	cr6.compare<uint32_t>(ctx.r11.u32, 129, xer);
	// blt cr6,0x8329d790
	if (cr6.lt) goto loc_8329D790;
	// cmplwi cr6,r11,159
	cr6.compare<uint32_t>(ctx.r11.u32, 159, xer);
	// ble cr6,0x8329d7a0
	if (!cr6.gt) goto loc_8329D7A0;
loc_8329D790:
	// cmplwi cr6,r11,224
	cr6.compare<uint32_t>(ctx.r11.u32, 224, xer);
	// blt cr6,0x8329d7ac
	if (cr6.lt) goto loc_8329D7AC;
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(ctx.r11.u32, 239, xer);
	// bgt cr6,0x8329d7ac
	if (cr6.gt) goto loc_8329D7AC;
loc_8329D7A0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8329d840
	goto loc_8329D840;
loc_8329D7AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D7B8;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// b 0x8329d840
	goto loc_8329D840;
loc_8329D7C8:
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(ctx.r11.u32, 63, xer);
	// ble cr6,0x8329d804
	if (!cr6.gt) goto loc_8329D804;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(ctx.r11.u32, 127, xer);
	// beq cr6,0x8329d804
	if (cr6.eq) goto loc_8329D804;
	// cmplwi cr6,r11,253
	cr6.compare<uint32_t>(ctx.r11.u32, 253, xer);
	// bge cr6,0x8329d804
	if (!cr6.lt) goto loc_8329D804;
	// rlwinm r10,r30,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFF00;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x8329d130
	ctx.lr = 0x8329D7F4;
	sub_8329D130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// b 0x8329d838
	goto loc_8329D838;
loc_8329D804:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D810;
	sub_8329CF48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d51c
	if (cr6.lt) goto loc_8329D51C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D828;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_8329D838:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8329D840:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bgt cr6,0x8329d734
	if (cr6.gt) goto loc_8329D734;
loc_8329D848:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329d86c
	if (cr6.eq) goto loc_8329D86C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8329D858:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329cf48
	ctx.lr = 0x8329D860;
	sub_8329CF48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329d870
	if (cr6.lt) goto loc_8329D870;
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
loc_8329D86C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8329D870:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329D878"))) PPC_WEAK_FUNC(sub_8329D878);
PPC_FUNC_IMPL(__imp__sub_8329D878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r8,-31748
	ctx.r8.s64 = -2080636928;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r6,r8,27716
	ctx.r6.s64 = ctx.r8.s64 + 27716;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lhz r9,32(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 32);
	// lhz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 12);
	// rotlwi r3,r10,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// and r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ctx.r4.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r10,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329D8D8"))) PPC_WEAK_FUNC(sub_8329D8D8);
PPC_FUNC_IMPL(__imp__sub_8329D8D8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329d918
	if (cr6.eq) goto loc_8329D918;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8329d91c
	goto loc_8329D91C;
loc_8329D918:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8329D91C:
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// bne cr6,0x8329d9d4
	if (!cr6.eq) goto loc_8329D9D4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8329d96c
	if (!cr6.lt) goto loc_8329D96C;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8320
	ctx.r4.u64 = ctx.r4.u64 | 8320;
	// bl 0x8329a350
	ctx.lr = 0x8329D958;
	sub_8329A350(ctx, base);
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
loc_8329D96C:
	// li r8,48
	ctx.r8.s64 = 48;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// divw r10,r10,r8
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r8.s32);
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// addis r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -65536;
	// stb r6,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r6.u8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x8329d9b4
	if (cr6.lt) goto loc_8329D9B4;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8515
	ctx.r4.u64 = ctx.r4.u64 | 8515;
	// bl 0x8329a350
	ctx.lr = 0x8329D9A0;
	sub_8329A350(ctx, base);
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
loc_8329D9B4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sth r10,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// beq cr6,0x8329d9c8
	if (cr6.eq) goto loc_8329D9C8;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
loc_8329D9C8:
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// b 0x8329da84
	goto loc_8329DA84;
loc_8329D9D4:
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addic. r10,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8329da58
	if (!cr0.eq) goto loc_8329DA58;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r7,r7,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r6,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// beq cr6,0x8329da38
	if (cr6.eq) goto loc_8329DA38;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329da3c
	if (cr6.eq) goto loc_8329DA3C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8329da40
	goto loc_8329DA40;
loc_8329DA38:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_8329DA3C:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_8329DA40:
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329da78
	if (cr6.eq) goto loc_8329DA78;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// b 0x8329da78
	goto loc_8329DA78;
loc_8329DA58:
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,16,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stb r7,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r7.u8);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// sth r4,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r4.u16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8329DA78:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// stb r8,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r8.u8);
loc_8329DA84:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// stb r5,46(r11)
	PPC_STORE_U8(ctx.r11.u32 + 46, ctx.r5.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// sth r5,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r5.u16);
	// addi r10,r10,27716
	ctx.r10.s64 = ctx.r10.s64 + 27716;
	// stb r8,47(r11)
	PPC_STORE_U8(ctx.r11.u32 + 47, ctx.r8.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// rotlwi r6,r8,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// and r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r8,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r8.u16);
	// beq cr6,0x8329dac4
	if (cr6.eq) goto loc_8329DAC4;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// sth r8,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r8.u16);
loc_8329DAC4:
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r8,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r8.u16);
	// beq cr6,0x8329daec
	if (cr6.eq) goto loc_8329DAEC;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// sth r8,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
loc_8329DAEC:
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r8,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r8.u16);
	// beq cr6,0x8329db14
	if (cr6.eq) goto loc_8329DB14;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// sth r8,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r8.u16);
loc_8329DB14:
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lhz r7,32(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r8,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
	// beq cr6,0x8329db3c
	if (cr6.eq) goto loc_8329DB3C;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// sth r8,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r8.u16);
loc_8329DB3C:
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lhz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// rotlwi r7,r8,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// and r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 & ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r10,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r10.u16);
	// beq cr6,0x8329db68
	if (cr6.eq) goto loc_8329DB68;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
loc_8329DB68:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DB7C"))) PPC_WEAK_FUNC(sub_8329DB7C);
PPC_FUNC_IMPL(__imp__sub_8329DB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DB80"))) PPC_WEAK_FUNC(sub_8329DB80);
PPC_FUNC_IMPL(__imp__sub_8329DB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,95(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 95);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x8329dc34
	if (!cr6.eq) goto loc_8329DC34;
loc_8329DB9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x8329dbe8
	if (cr6.eq) goto loc_8329DBE8;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329dbec
	if (cr6.eq) goto loc_8329DBEC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8329dbf0
	goto loc_8329DBF0;
loc_8329DBE8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8329DBEC:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8329DBF0:
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329dc04
	if (cr6.eq) goto loc_8329DC04;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_8329DC04:
	// lbz r10,46(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 46);
	// lhz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,47(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 47);
	// cmplwi cr6,r5,255
	cr6.compare<uint32_t>(ctx.r5.u32, 255, xer);
	// beq cr6,0x8329db9c
	if (cr6.eq) goto loc_8329DB9C;
loc_8329DC34:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x8329dc60
	if (!cr6.eq) goto loc_8329DC60;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r3,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r3.s64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
loc_8329DC60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,255
	ctx.r10.s64 = 255;
	// rlwinm r8,r6,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stb r10,47(r4)
	PPC_STORE_U8(ctx.r4.u32 + 47, ctx.r10.u8);
	// lhz r9,32(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// lhz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// rotlwi r3,r5,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r8,46(r4)
	PPC_STORE_U8(ctx.r4.u32 + 46, ctx.r8.u8);
	// sth r7,44(r4)
	PPC_STORE_U16(ctx.r4.u32 + 44, ctx.r7.u16);
	// and r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329dccc
	if (cr6.eq) goto loc_8329DCCC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8329dcd0
	goto loc_8329DCD0;
loc_8329DCCC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8329DCD0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// beq cr6,0x8329dce8
	if (cr6.eq) goto loc_8329DCE8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8329dcec
	goto loc_8329DCEC;
loc_8329DCE8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8329DCEC:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DD0C"))) PPC_WEAK_FUNC(sub_8329DD0C);
PPC_FUNC_IMPL(__imp__sub_8329DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DD10"))) PPC_WEAK_FUNC(sub_8329DD10);
PPC_FUNC_IMPL(__imp__sub_8329DD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfic r6,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// subfe r10,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// and r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ctx.r7.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329dd4c
	if (cr6.eq) goto loc_8329DD4C;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_8329DD4C:
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329dd60
	if (cr6.eq) goto loc_8329DD60;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8329DD60:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DD90"))) PPC_WEAK_FUNC(sub_8329DD90);
PPC_FUNC_IMPL(__imp__sub_8329DD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r4,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r8.s64;
	// and r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 & ctx.r6.u64;
	// subfe r8,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8329dde0
	if (cr6.eq) goto loc_8329DDE0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329ddd8
	if (cr6.eq) goto loc_8329DDD8;
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
loc_8329DDD8:
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x8329ddf0
	goto loc_8329DDF0;
loc_8329DDE0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329ddec
	if (cr6.eq) goto loc_8329DDEC;
	// subf r11,r3,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r3.s64;
loc_8329DDEC:
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8329DDF0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8329de10
	if (cr6.eq) goto loc_8329DE10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8329de08
	if (cr6.eq) goto loc_8329DE08;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_8329DE08:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_8329DE10:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8329de1c
	if (cr6.eq) goto loc_8329DE1C;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_8329DE1C:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329DE24"))) PPC_WEAK_FUNC(sub_8329DE24);
PPC_FUNC_IMPL(__imp__sub_8329DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329DE28"))) PPC_WEAK_FUNC(sub_8329DE28);
PPC_FUNC_IMPL(__imp__sub_8329DE28) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8329df34
	if (cr6.eq) goto loc_8329DF34;
loc_8329DE6C:
	// cmplw cr6,r6,r4
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, xer);
	// bge cr6,0x8329df34
	if (!cr6.lt) goto loc_8329DF34;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subfe r10,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// and r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8329ded0
	if (cr6.eq) goto loc_8329DED0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329dec8
	if (cr6.eq) goto loc_8329DEC8;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_8329DEC8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x8329dee0
	goto loc_8329DEE0;
loc_8329DED0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329dedc
	if (cr6.eq) goto loc_8329DEDC;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_8329DEDC:
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
loc_8329DEE0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329df00
	if (cr6.eq) goto loc_8329DF00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x8329def8
	if (cr6.eq) goto loc_8329DEF8;
	// subf r10,r3,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_8329DEF8:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8329df14
	goto loc_8329DF14;
loc_8329DF00:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8329df10
	if (cr6.eq) goto loc_8329DF10;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_8329DF10:
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_8329DF14:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8329de6c
	if (!cr6.eq) goto loc_8329DE6C;
loc_8329DF34:
	// addi r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 3;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bge cr6,0x8329df64
	if (!cr6.lt) goto loc_8329DF64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x8329df80
	goto loc_8329DF80;
loc_8329DF64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8329dd90
	ctx.lr = 0x8329DF6C;
	sub_8329DD90(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// subf r3,r3,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_8329DF80:
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

__attribute__((alias("__imp__sub_8329DF98"))) PPC_WEAK_FUNC(sub_8329DF98);
PPC_FUNC_IMPL(__imp__sub_8329DF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329DFA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r28,r10,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfic r8,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r6,r9
	ctx.r30.u64 = ctx.r6.u64 & ctx.r9.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8329e040
	if (cr6.eq) goto loc_8329E040;
loc_8329DFD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329de28
	ctx.lr = 0x8329DFDC;
	sub_8329DE28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bge cr6,0x8329e02c
	if (!cr6.lt) goto loc_8329E02C;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addic. r10,r11,4
	xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r10.s64 = ctx.r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x8329e034
	if (cr0.gt) goto loc_8329E034;
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// subf r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// b 0x8329e1ac
	goto loc_8329E1AC;
loc_8329E02C:
	// subf. r29,r28,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r28.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8329e074
	if (!cr0.lt) goto loc_8329E074;
loc_8329E034:
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8329dfd0
	if (!cr6.eq) goto loc_8329DFD0;
loc_8329E040:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r28,3
	ctx.r9.s64 = ctx.r28.s64 + 3;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// ble cr6,0x8329e194
	if (!cr6.gt) goto loc_8329E194;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329E074:
	// cmpwi cr6,r29,12
	cr6.compare<int32_t>(ctx.r29.s32, 12, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x8329e08c
	if (!cr6.lt) goto loc_8329E08C;
	// bl 0x8329dd90
	ctx.lr = 0x8329E088;
	sub_8329DD90(ctx, base);
	// b 0x8329e1b4
	goto loc_8329E1B4;
loc_8329E08C:
	// bl 0x8329dd90
	ctx.lr = 0x8329E090;
	sub_8329DD90(ctx, base);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8329e150
	if (cr6.eq) goto loc_8329E150;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8329e150
	if (cr6.eq) goto loc_8329E150;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subfic r5,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r10.s64;
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// beq cr6,0x8329e0fc
	if (cr6.eq) goto loc_8329E0FC;
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
loc_8329E0FC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329e118
	if (cr6.eq) goto loc_8329E118;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// beq cr6,0x8329e114
	if (cr6.eq) goto loc_8329E114;
	// subf r11,r31,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r31.s64;
loc_8329E114:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8329E118:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8329e134
	if (cr6.eq) goto loc_8329E134;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// beq cr6,0x8329e130
	if (cr6.eq) goto loc_8329E130;
	// subf r11,r31,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r31.s64;
loc_8329E130:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_8329E134:
	// subf r11,r31,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r31.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// beq cr6,0x8329e14c
	if (cr6.eq) goto loc_8329E14C;
	// subf r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
loc_8329E14C:
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8329E150:
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r5,r8,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// or r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bl 0x8329dd10
	ctx.lr = 0x8329E190;
	sub_8329DD10(ctx, base);
	// b 0x8329e1b4
	goto loc_8329E1B4;
loc_8329E194:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
loc_8329E1AC:
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
loc_8329E1B4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E1CC"))) PPC_WEAK_FUNC(sub_8329E1CC);
PPC_FUNC_IMPL(__imp__sub_8329E1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E1D0"))) PPC_WEAK_FUNC(sub_8329E1D0);
PPC_FUNC_IMPL(__imp__sub_8329E1D0) {
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
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8329dd10
	ctx.lr = 0x8329E1E8;
	sub_8329DD10(ctx, base);
	// bl 0x8329de28
	ctx.lr = 0x8329E1EC;
	sub_8329DE28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E1FC"))) PPC_WEAK_FUNC(sub_8329E1FC);
PPC_FUNC_IMPL(__imp__sub_8329E1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E200"))) PPC_WEAK_FUNC(sub_8329E200);
PPC_FUNC_IMPL(__imp__sub_8329E200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8329E208;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// lwz r11,-4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r30,r4,-4
	ctx.r30.s64 = ctx.r4.s64 + -4;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r10,4
	ctx.r27.s64 = ctx.r10.s64 + 4;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// rlwinm r28,r11,0,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// bne cr6,0x8329e28c
	if (!cr6.eq) goto loc_8329E28C;
	// addi r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 3;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x8329e394
	if (cr6.gt) goto loc_8329E394;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// subf r7,r3,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r3.s64;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329E28C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329e310
	if (cr6.eq) goto loc_8329E310;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329de28
	ctx.lr = 0x8329E2A8;
	sub_8329DE28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8329e2d0
	if (!cr6.gt) goto loc_8329E2D0;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8329e394
	if (cr6.gt) goto loc_8329E394;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329dd90
	ctx.lr = 0x8329E2CC;
	sub_8329DD90(ctx, base);
	// b 0x8329e318
	goto loc_8329E318;
loc_8329E2D0:
	// subf r28,r3,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r3.s64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8329e394
	if (cr6.gt) goto loc_8329E394;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// subf r11,r31,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r31.s64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329E310:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8329e394
	if (cr6.gt) goto loc_8329E394;
loc_8329E318:
	// subf r11,r29,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r29.s64;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x8329e348
	if (!cr6.lt) goto loc_8329E348;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329E348:
	// addi r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 3;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r5,r8,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// or r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bl 0x8329dd10
	ctx.lr = 0x8329E388;
	sub_8329DD10(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329E394:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329df98
	ctx.lr = 0x8329E3A0;
	sub_8329DF98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329e3b4
	if (!cr6.eq) goto loc_8329E3B4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329E3B4:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329e3dc
	if (cr6.eq) goto loc_8329E3DC;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// bge cr6,0x8329e3cc
	if (!cr6.lt) goto loc_8329E3CC;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8329E3CC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83293f28
	ctx.lr = 0x8329E3DC;
	sub_83293F28(ctx, base);
loc_8329E3DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329dd10
	ctx.lr = 0x8329E3E8;
	sub_8329DD10(ctx, base);
	// bl 0x8329de28
	ctx.lr = 0x8329E3EC;
	sub_8329DE28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E3F8"))) PPC_WEAK_FUNC(sub_8329E3F8);
PPC_FUNC_IMPL(__imp__sub_8329E3F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329E400;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bge cr6,0x8329e434
	if (!cr6.lt) goto loc_8329E434;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329E434:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r10,-48
	ctx.r11.s64 = ctx.r10.s64 + -48;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x8329E45C;
	sub_83294018(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subf r7,r31,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r31.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r7,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r7.u32);
	// lis r4,-31748
	ctx.r4.s64 = -2080636928;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// addi r8,r4,27716
	ctx.r8.s64 = ctx.r4.s64 + 27716;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// xori r7,r3,1
	ctx.r7.u64 = ctx.r3.u64 ^ 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r7,27(r30)
	PPC_STORE_U8(ctx.r30.u32 + 27, ctx.r7.u8);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lhz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 32);
	// lhz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// rotlwi r3,r10,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// and r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 & ctx.r5.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r10,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// beq cr6,0x8329e4e0
	if (cr6.eq) goto loc_8329E4E0;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
loc_8329E4E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E4EC"))) PPC_WEAK_FUNC(sub_8329E4EC);
PPC_FUNC_IMPL(__imp__sub_8329E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E4F0"))) PPC_WEAK_FUNC(sub_8329E4F0);
PPC_FUNC_IMPL(__imp__sub_8329E4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329E4F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r27,20(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r31,18(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// subfic r29,r27,512
	xer.ca = ctx.r27.u32 <= 512;
	ctx.r29.s64 = 512 - ctx.r27.s64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// blt cr6,0x8329e56c
	if (cr6.lt) goto loc_8329E56C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subfic r5,r31,512
	xer.ca = ctx.r31.u32 <= 512;
	ctx.r5.s64 = 512 - ctx.r31.s64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329E538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329e550
	if (!cr6.lt) goto loc_8329E550;
loc_8329E540:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329E550:
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r28,r3,r27
	ctx.r28.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmplwi cr6,r31,512
	cr6.compare<uint32_t>(ctx.r31.u32, 512, xer);
	// blt cr6,0x8329e598
	if (cr6.lt) goto loc_8329E598;
	// subf. r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x8329e598
	if (cr0.eq) goto loc_8329E598;
loc_8329E56C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329E588;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329e540
	if (cr6.lt) goto loc_8329E540;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_8329E598:
	// sth r31,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r31.u16);
	// subf r3,r27,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r27.s64;
	// sth r28,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r28.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E5AC"))) PPC_WEAK_FUNC(sub_8329E5AC);
PPC_FUNC_IMPL(__imp__sub_8329E5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E5B0"))) PPC_WEAK_FUNC(sub_8329E5B0);
PPC_FUNC_IMPL(__imp__sub_8329E5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// ble cr6,0x8329e5c4
	if (!cr6.gt) goto loc_8329E5C4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8329E5C4:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x8329e5d4
	if (!cr6.eq) goto loc_8329E5D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8329E5D4:
	// lhz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r7,512
	cr6.compare<uint32_t>(ctx.r7.u32, 512, xer);
	// ble cr6,0x8329e640
	if (!cr6.gt) goto loc_8329E640;
	// subfic r9,r10,512
	xer.ca = ctx.r10.u32 <= 512;
	ctx.r9.s64 = 512 - ctx.r10.s64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8329e610
	if (cr6.eq) goto loc_8329E610;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
loc_8329E600:
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r6,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8329e600
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8329E600;
loc_8329E610:
	// addic. r10,r7,-512
	xer.ca = ctx.r7.u32 > 511;
	ctx.r10.s64 = ctx.r7.s64 + -512;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8329e664
	if (cr0.eq) goto loc_8329E664;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
loc_8329E628:
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8329e628
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8329E628;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
loc_8329E640:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8329e664
	if (cr6.eq) goto loc_8329E664;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
loc_8329E654:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8329e654
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8329E654;
loc_8329E664:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E66C"))) PPC_WEAK_FUNC(sub_8329E66C);
PPC_FUNC_IMPL(__imp__sub_8329E66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E670"))) PPC_WEAK_FUNC(sub_8329E670);
PPC_FUNC_IMPL(__imp__sub_8329E670) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// sth r11,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329E68C"))) PPC_WEAK_FUNC(sub_8329E68C);
PPC_FUNC_IMPL(__imp__sub_8329E68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E690"))) PPC_WEAK_FUNC(sub_8329E690);
PPC_FUNC_IMPL(__imp__sub_8329E690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8329E698;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// blt cr6,0x8329e754
	if (cr6.lt) goto loc_8329E754;
loc_8329E6B0:
	// lhz r27,20(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// lhz r31,18(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// subfic r29,r27,512
	xer.ca = ctx.r27.u32 <= 512;
	ctx.r29.s64 = 512 - ctx.r27.s64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// blt cr6,0x8329e70c
	if (cr6.lt) goto loc_8329E70C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subfic r5,r31,512
	xer.ca = ctx.r31.u32 <= 512;
	ctx.r5.s64 = 512 - ctx.r31.s64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329E6E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329e788
	if (cr6.lt) goto loc_8329E788;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r28,r3,r27
	ctx.r28.u64 = ctx.r3.u64 + ctx.r27.u64;
	// cmplwi cr6,r31,512
	cr6.compare<uint32_t>(ctx.r31.u32, 512, xer);
	// blt cr6,0x8329e738
	if (cr6.lt) goto loc_8329E738;
	// subf. r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x8329e738
	if (cr0.eq) goto loc_8329E738;
loc_8329E70C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8329E728;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329e788
	if (cr6.lt) goto loc_8329E788;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_8329E738:
	// subf. r11,r27,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r27.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r31,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r31.u16);
	// sth r28,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r28.u16);
	// ble 0x8329e770
	if (!cr0.gt) goto loc_8329E770;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bge cr6,0x8329e6b0
	if (!cr6.lt) goto loc_8329E6B0;
loc_8329E754:
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8329E770:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8329e788
	if (!cr6.eq) goto loc_8329E788;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8577
	ctx.r3.u64 = ctx.r3.u64 | 8577;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8329E788:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E798"))) PPC_WEAK_FUNC(sub_8329E798);
PPC_FUNC_IMPL(__imp__sub_8329E798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329E7A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// ble cr6,0x8329e7bc
	if (!cr6.gt) goto loc_8329E7BC;
	// li r30,512
	ctx.r30.s64 = 512;
loc_8329E7BC:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// bge cr6,0x8329e7e4
	if (!cr6.lt) goto loc_8329E7E4;
loc_8329E7C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e4f0
	ctx.lr = 0x8329E7D0;
	sub_8329E4F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8329e7fc
	if (!cr6.gt) goto loc_8329E7FC;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x8329e7c8
	if (cr6.lt) goto loc_8329E7C8;
loc_8329E7E4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329e5b0
	ctx.lr = 0x8329E7F4;
	sub_8329E5B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329E7FC:
	// bge cr6,0x8329e810
	if (!cr6.lt) goto loc_8329E810;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329E810:
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329e7e4
	if (!cr6.eq) goto loc_8329E7E4;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8577
	ctx.r3.u64 = ctx.r3.u64 | 8577;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E82C"))) PPC_WEAK_FUNC(sub_8329E82C);
PPC_FUNC_IMPL(__imp__sub_8329E82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329E830"))) PPC_WEAK_FUNC(sub_8329E830);
PPC_FUNC_IMPL(__imp__sub_8329E830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329E838;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8329e854
	if (!cr6.gt) goto loc_8329E854;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8329E854:
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r10,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r10.u16);
	// bne 0x8329e870
	if (!cr0.eq) goto loc_8329E870;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r10.u16);
	// sth r10,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r10.u16);
	// b 0x8329e880
	goto loc_8329E880;
loc_8329E870:
	// lhz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r9,r10,23
	ctx.r9.u64 = ctx.r10.u32 & 0x1FF;
	// sth r9,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r9.u16);
loc_8329E880:
	// subf. r31,r11,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// beq 0x8329e8c8
	if (cr0.eq) goto loc_8329E8C8;
	// addi r28,r30,24
	ctx.r28.s64 = ctx.r30.s64 + 24;
loc_8329E890:
	// cmplwi cr6,r31,512
	cr6.compare<uint32_t>(ctx.r31.u32, 512, xer);
	// li r5,512
	ctx.r5.s64 = 512;
	// bgt cr6,0x8329e8a0
	if (cr6.gt) goto loc_8329E8A0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8329E8A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329E8B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8329e8d4
	if (!cr6.gt) goto loc_8329E8D4;
	// subf. r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bne 0x8329e890
	if (!cr0.eq) goto loc_8329E890;
loc_8329E8C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329E8D4:
	// bge cr6,0x8329e8e8
	if (!cr6.lt) goto loc_8329E8E8;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329E8E8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x8329e8c8
	if (!cr6.eq) goto loc_8329E8C8;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8577
	ctx.r3.u64 = ctx.r3.u64 | 8577;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E900"))) PPC_WEAK_FUNC(sub_8329E900);
PPC_FUNC_IMPL(__imp__sub_8329E900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329E908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8329e5b0
	ctx.lr = 0x8329E91C;
	sub_8329E5B0(ctx, base);
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x8329e934
	if (!cr6.gt) goto loc_8329E934;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8329E934:
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// bne 0x8329e950
	if (!cr0.eq) goto loc_8329E950;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// b 0x8329e960
	goto loc_8329E960;
loc_8329E950:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
loc_8329E960:
	// subf. r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x8329e994
	if (!cr0.gt) goto loc_8329E994;
loc_8329E968:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8329E980;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8329e9a0
	if (!cr6.gt) goto loc_8329E9A0;
	// subf. r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bgt 0x8329e968
	if (cr0.gt) goto loc_8329E968;
loc_8329E994:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329E9A0:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// bne cr6,0x8329e9b4
	if (!cr6.eq) goto loc_8329E9B4;
	// ori r3,r3,8577
	ctx.r3.u64 = ctx.r3.u64 | 8577;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329E9B4:
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329E9C0"))) PPC_WEAK_FUNC(sub_8329E9C0);
PPC_FUNC_IMPL(__imp__sub_8329E9C0) {
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
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329ea24
	if (!cr6.eq) goto loc_8329EA24;
	// bl 0x8329e4f0
	ctx.lr = 0x8329E9E4;
	sub_8329E4F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x8329ea24
	if (cr6.gt) goto loc_8329EA24;
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// bne cr6,0x8329ea0c
	if (!cr6.eq) goto loc_8329EA0C;
	// ori r3,r3,8577
	ctx.r3.u64 = ctx.r3.u64 | 8577;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8329EA0C:
	// ori r3,r3,8576
	ctx.r3.u64 = ctx.r3.u64 | 8576;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8329EA24:
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// lbz r3,24(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 24);
	// bge cr6,0x8329ea44
	if (!cr6.lt) goto loc_8329EA44;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8329EA44:
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// bne 0x8329ea70
	if (!cr0.eq) goto loc_8329EA70;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// sth r11,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8329EA70:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r11,23
	ctx.r10.u64 = ctx.r11.u32 & 0x1FF;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8329EA90"))) PPC_WEAK_FUNC(sub_8329EA90);
PPC_FUNC_IMPL(__imp__sub_8329EA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8329EA98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addic. r30,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r30.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x8329eae8
	if (cr0.eq) goto loc_8329EAE8;
loc_8329EAB4:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r31,r11,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x83296d78
	ctx.lr = 0x8329EACC;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8329eadc
	if (!cr6.gt) goto loc_8329EADC;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// b 0x8329eae0
	goto loc_8329EAE0;
loc_8329EADC:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8329EAE0:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x8329eab4
	if (!cr6.eq) goto loc_8329EAB4;
loc_8329EAE8:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x83296d78
	ctx.lr = 0x8329EAFC;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329eb10
	if (!cr6.eq) goto loc_8329EB10;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8329EB10:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329EB1C"))) PPC_WEAK_FUNC(sub_8329EB1C);
PPC_FUNC_IMPL(__imp__sub_8329EB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EB20"))) PPC_WEAK_FUNC(sub_8329EB20);
PPC_FUNC_IMPL(__imp__sub_8329EB20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8329eb84
	if (cr6.eq) goto loc_8329EB84;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_8329EB40:
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x8329eb5c
	if (cr6.lt) goto loc_8329EB5C;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x8329eb5c
	if (cr6.gt) goto loc_8329EB5C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// b 0x8329eb60
	goto loc_8329EB60;
loc_8329EB5C:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8329EB60:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8329eb40
	if (!cr6.eq) goto loc_8329EB40;
loc_8329EB84:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329EB8C"))) PPC_WEAK_FUNC(sub_8329EB8C);
PPC_FUNC_IMPL(__imp__sub_8329EB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EB90"))) PPC_WEAK_FUNC(sub_8329EB90);
PPC_FUNC_IMPL(__imp__sub_8329EB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329EB98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x8329ec3c
	if (cr0.eq) goto loc_8329EC3C;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
loc_8329EBB4:
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8329ec20
	if (cr6.eq) goto loc_8329EC20;
loc_8329EBDC:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x8329ebf8
	if (cr6.lt) goto loc_8329EBF8;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// bgt cr6,0x8329ebf8
	if (cr6.gt) goto loc_8329EBF8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// b 0x8329ebfc
	goto loc_8329EBFC;
loc_8329EBF8:
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_8329EBFC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8329ec24
	if (!cr6.eq) goto loc_8329EC24;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbzx r29,r9,r5
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8329ebdc
	if (!cr6.eq) goto loc_8329EBDC;
loc_8329EC20:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
loc_8329EC24:
	// ble cr6,0x8329ec30
	if (!cr6.gt) goto loc_8329EC30;
	// addi r31,r7,1
	ctx.r31.s64 = ctx.r7.s64 + 1;
	// b 0x8329ec34
	goto loc_8329EC34;
loc_8329EC30:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_8329EC34:
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// bne cr6,0x8329ebb4
	if (!cr6.eq) goto loc_8329EBB4;
loc_8329EC3C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8329eb20
	ctx.lr = 0x8329EC50;
	sub_8329EB20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8329ec64
	if (!cr6.eq) goto loc_8329EC64;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329EC64:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329EC70"))) PPC_WEAK_FUNC(sub_8329EC70);
PPC_FUNC_IMPL(__imp__sub_8329EC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8329EC78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// extsb r30,r29
	ctx.r30.s64 = ctx.r29.s8;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x8329ecc8
	if (cr6.eq) goto loc_8329ECC8;
loc_8329ECA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296b90
	ctx.lr = 0x8329ECA8;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329ecd4
	if (cr6.eq) goto loc_8329ECD4;
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r30,r29
	ctx.r30.s64 = ctx.r29.s8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x8329eca0
	if (!cr6.eq) goto loc_8329ECA0;
loc_8329ECC8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8329ECD4:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r30,45
	cr6.compare<int32_t>(ctx.r30.s32, 45, xer);
	// bne cr6,0x8329ecf8
	if (!cr6.eq) goto loc_8329ECF8;
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r30,r29
	ctx.r30.s64 = ctx.r29.s8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x8329ecc8
	if (cr6.eq) goto loc_8329ECC8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8329ECF8:
	// lis r11,-26215
	ctx.r11.s64 = -1718026240;
	// lis r10,6553
	ctx.r10.s64 = 429457408;
	// ori r7,r11,39322
	ctx.r7.u64 = ctx.r11.u64 | 39322;
	// ori r8,r10,39321
	ctx.r8.u64 = ctx.r10.u64 | 39321;
	// li r9,10
	ctx.r9.s64 = 10;
	// rldimi r7,r8,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpwi cr6,r30,48
	cr6.compare<int32_t>(ctx.r30.s32, 48, xer);
	// bne cr6,0x8329ed78
	if (!cr6.eq) goto loc_8329ED78;
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8329ed3c
	if (!cr6.eq) goto loc_8329ED3C;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8329ED3C:
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x8329ed5c
	if (cr6.eq) goto loc_8329ED5C;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(ctx.r11.s32, 88, xer);
	// beq cr6,0x8329ed5c
	if (cr6.eq) goto loc_8329ED5C;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// rldicr r7,r7,61,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// b 0x8329ed78
	goto loc_8329ED78;
loc_8329ED5C:
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8329ecc8
	if (cr6.eq) goto loc_8329ECC8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,16
	ctx.r9.s64 = 16;
	// rldicr r7,r7,60,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 60) & 0xFFFFFFFFFFFFFFFF;
loc_8329ED78:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
loc_8329ED80:
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x8329ed9c
	if (cr6.lt) goto loc_8329ED9C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x8329ed9c
	if (cr6.gt) goto loc_8329ED9C;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x8329edc8
	goto loc_8329EDC8;
loc_8329ED9C:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x8329edb4
	if (cr6.lt) goto loc_8329EDB4;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x8329edb4
	if (cr6.gt) goto loc_8329EDB4;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x8329edc8
	goto loc_8329EDC8;
loc_8329EDB4:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x8329edf8
	if (cr6.lt) goto loc_8329EDF8;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x8329edf8
	if (cr6.gt) goto loc_8329EDF8;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_8329EDC8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, xer);
	// bgt cr6,0x8329ecc8
	if (cr6.gt) goto loc_8329ECC8;
	// cmpld cr6,r30,r7
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r7.u64, xer);
	// bge cr6,0x8329ecc8
	if (!cr6.lt) goto loc_8329ECC8;
	// mulld r10,r30,r9
	ctx.r10.s64 = ctx.r30.s64 * ctx.r9.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpld cr6,r30,r6
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r6.u64, xer);
	// blt cr6,0x8329ecc8
	if (cr6.lt) goto loc_8329ECC8;
	// lbzu r29,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// b 0x8329ed80
	goto loc_8329ED80;
loc_8329EDF8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8329ee18
	if (cr6.eq) goto loc_8329EE18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296b90
	ctx.lr = 0x8329EE08;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8329ee1c
	if (cr6.eq) goto loc_8329EE1C;
loc_8329EE18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8329EE1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329ecc8
	if (cr6.eq) goto loc_8329ECC8;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// beq cr6,0x8329ee7c
	if (cr6.eq) goto loc_8329EE7C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329ee58
	if (cr6.eq) goto loc_8329EE58;
	// neg r30,r30
	ctx.r30.s64 = -ctx.r30.s64;
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// ble cr6,0x8329ee60
	if (!cr6.gt) goto loc_8329EE60;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8329EE58:
	// cmpdi cr6,r30,0
	cr6.compare<int64_t>(ctx.r30.s64, 0, xer);
	// blt cr6,0x8329ecc8
	if (cr6.lt) goto loc_8329ECC8;
loc_8329EE60:
	// cmpd cr6,r30,r26
	cr6.compare<int64_t>(ctx.r30.s64, ctx.r26.s64, xer);
	// blt cr6,0x8329ecc8
	if (cr6.lt) goto loc_8329ECC8;
	// cmpd cr6,r25,r30
	cr6.compare<int64_t>(ctx.r25.s64, ctx.r30.s64, xer);
	// bge cr6,0x8329eea8
	if (!cr6.lt) goto loc_8329EEA8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8329EE7C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329ee98
	if (cr6.eq) goto loc_8329EE98;
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(ctx.r30.u64, 0, xer);
	// beq cr6,0x8329eea8
	if (cr6.eq) goto loc_8329EEA8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8329EE98:
	// cmpld cr6,r30,r26
	cr6.compare<uint64_t>(ctx.r30.u64, ctx.r26.u64, xer);
	// blt cr6,0x8329ecc8
	if (cr6.lt) goto loc_8329ECC8;
	// cmpld cr6,r25,r30
	cr6.compare<uint64_t>(ctx.r25.u64, ctx.r30.u64, xer);
	// blt cr6,0x8329ecc8
	if (cr6.lt) goto loc_8329ECC8;
loc_8329EEA8:
	// std r30,0(r24)
	PPC_STORE_U64(ctx.r24.u32 + 0, ctx.r30.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329EEB8"))) PPC_WEAK_FUNC(sub_8329EEB8);
PPC_FUNC_IMPL(__imp__sub_8329EEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8329EEC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r3,-1
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// ori r29,r11,65488
	ctx.r29.u64 = ctx.r11.u64 | 65488;
loc_8329EED8:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x8329efb0
	if (cr6.lt) goto loc_8329EFB0;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x8329efb0
	if (cr6.gt) goto loc_8329EFB0;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x8329ef78
	if (cr6.lt) goto loc_8329EF78;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x8329ef78
	if (cr6.gt) goto loc_8329EF78;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// lbz r3,1(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// rlwinm r10,r31,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
	// blt cr6,0x8329ef78
	if (cr6.lt) goto loc_8329EF78;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x8329ef78
	if (cr6.gt) goto loc_8329EF78;
	// rlwinm r9,r31,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r9,r29
	ctx.r8.u64 = ctx.r9.u64 + ctx.r29.u64;
	// clrlwi r31,r8,16
	ctx.r31.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r31,255
	cr6.compare<uint32_t>(ctx.r31.u32, 255, xer);
	// bgt cr6,0x8329efb0
	if (cr6.gt) goto loc_8329EFB0;
	// lbzu r3,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
loc_8329EF78:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(ctx.r28.s32, 3, xer);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// bne cr6,0x8329efbc
	if (!cr6.eq) goto loc_8329EFBC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8329efa0
	if (cr6.eq) goto loc_8329EFA0;
	// bl 0x83296b90
	ctx.lr = 0x8329EF90;
	sub_83296B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8329efa4
	if (cr6.eq) goto loc_8329EFA4;
loc_8329EFA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8329EFA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329efc4
	if (!cr6.eq) goto loc_8329EFC4;
loc_8329EFB0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8329EFBC:
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// bne cr6,0x8329efb0
	if (!cr6.eq) goto loc_8329EFB0;
loc_8329EFC4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stbx r11,r28,r27
	PPC_STORE_U8(ctx.r28.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(ctx.r28.s32, 4, xer);
	// blt cr6,0x8329eed8
	if (cr6.lt) goto loc_8329EED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329EFE4"))) PPC_WEAK_FUNC(sub_8329EFE4);
PPC_FUNC_IMPL(__imp__sub_8329EFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329EFE8"))) PPC_WEAK_FUNC(sub_8329EFE8);
PPC_FUNC_IMPL(__imp__sub_8329EFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,15336
	ctx.r3.s64 = ctx.r11.s64 + 15336;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x8329eb90
	sub_8329EB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329F000"))) PPC_WEAK_FUNC(sub_8329F000);
PPC_FUNC_IMPL(__imp__sub_8329F000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r3,29,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1C;
	// addi r9,r11,15424
	ctx.r9.s64 = ctx.r11.s64 + 15424;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F014"))) PPC_WEAK_FUNC(sub_8329F014);
PPC_FUNC_IMPL(__imp__sub_8329F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F018"))) PPC_WEAK_FUNC(sub_8329F018);
PPC_FUNC_IMPL(__imp__sub_8329F018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8329F020;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329f054
	if (cr6.eq) goto loc_8329F054;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329f058
	if (cr6.eq) goto loc_8329F058;
loc_8329F054:
	// li r24,0
	ctx.r24.s64 = 0;
loc_8329F058:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r27,260(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x832a0170
	ctx.lr = 0x8329F080;
	sub_832A0170(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329f114
	if (cr6.eq) goto loc_8329F114;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329f390
	if (cr6.eq) goto loc_8329F390;
	// lbz r11,21(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329f1a0
	if (cr6.eq) goto loc_8329F1A0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne cr6,0x8329f1a0
	if (!cr6.eq) goto loc_8329F1A0;
loc_8329F0AC:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r8,r6,r30
	ctx.r8.u64 = ctx.r6.u64 & ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r5,r10
	ctx.r31.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8329f0ac
	if (!cr6.eq) goto loc_8329F0AC;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8329F114:
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// and r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 & ctx.r30.u64;
	// or r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8329f200
	if (!cr6.eq) goto loc_8329F200;
	// lhz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 20);
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lhz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// rotlwi r6,r9,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// and r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 & ctx.r30.u64;
	// and r9,r6,r30
	ctx.r9.u64 = ctx.r6.u64 & ctx.r30.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8329f200
	if (cr6.eq) goto loc_8329F200;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,8512
	ctx.r4.u64 = ctx.r4.u64 | 8512;
	// bl 0x8329a350
	ctx.lr = 0x8329F194;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329F1A0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8329f1d4
	if (cr6.eq) goto loc_8329F1D4;
loc_8329F1BC:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8450
	ctx.r4.u64 = ctx.r4.u64 | 8450;
	// bl 0x8329a350
	ctx.lr = 0x8329F1C8;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329F1D4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r8,16(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lbz r6,20(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// bl 0x8329fbb0
	ctx.lr = 0x8329F1EC;
	sub_8329FBB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329f2f4
	if (cr6.lt) goto loc_8329F2F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329F200:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8329f234
	if (cr6.eq) goto loc_8329F234;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8448
	ctx.r4.u64 = ctx.r4.u64 | 8448;
	// bl 0x8329a350
	ctx.lr = 0x8329F228;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329F234:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8329f1bc
	if (!cr6.eq) goto loc_8329F1BC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8329f818
	ctx.lr = 0x8329F24C;
	sub_8329F818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329f2f4
	if (cr6.eq) goto loc_8329F2F4;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329f2bc
	if (cr6.eq) goto loc_8329F2BC;
	// lbz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// bne cr6,0x8329f294
	if (!cr6.eq) goto loc_8329F294;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// addi r6,r11,10488
	ctx.r6.s64 = ctx.r11.s64 + 10488;
	// addi r5,r10,25548
	ctx.r5.s64 = ctx.r10.s64 + 25548;
	// ori r4,r4,8384
	ctx.r4.u64 = ctx.r4.u64 | 8384;
	// bl 0x8329a350
	ctx.lr = 0x8329F290;
	sub_8329A350(ctx, base);
	// b 0x8329f2e4
	goto loc_8329F2E4;
loc_8329F294:
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r7,16(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8329fab8
	ctx.lr = 0x8329F2B0;
	sub_8329FAB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329f2e4
	if (cr6.lt) goto loc_8329F2E4;
	// b 0x8329f2c4
	goto loc_8329F2C4;
loc_8329F2BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r11.u8);
loc_8329F2C4:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83299990
	ctx.lr = 0x8329F2DC;
	sub_83299990(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329f300
	if (!cr6.lt) goto loc_8329F300;
loc_8329F2E4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329f8b8
	ctx.lr = 0x8329F2F4;
	sub_8329F8B8(ctx, base);
loc_8329F2F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8329F300:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// blt cr6,0x8329f318
	if (cr6.lt) goto loc_8329F318;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8329f374
	goto loc_8329F374;
loc_8329F318:
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 20);
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// rotlwi r4,r10,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 40);
	// and r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 & ctx.r30.u64;
	// and r10,r4,r30
	ctx.r10.u64 = ctx.r4.u64 & ctx.r30.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfic r11,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
loc_8329F374:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329fce8
	ctx.lr = 0x8329F380;
	sub_8329FCE8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329f390
	if (!cr6.eq) goto loc_8329F390;
	// stw r31,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r31.u32);
loc_8329F390:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329F39C"))) PPC_WEAK_FUNC(sub_8329F39C);
PPC_FUNC_IMPL(__imp__sub_8329F39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F3A0"))) PPC_WEAK_FUNC(sub_8329F3A0);
PPC_FUNC_IMPL(__imp__sub_8329F3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8329F3A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bl 0x832a03a8
	ctx.lr = 0x8329F3E8;
	sub_832A03A8(ctx, base);
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x8329f428
	if (cr6.eq) goto loc_8329F428;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83299738
	ctx.lr = 0x8329F400;
	sub_83299738(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r11,25548
	ctx.r6.s64 = ctx.r11.s64 + 25548;
	// ori r4,r4,8384
	ctx.r4.u64 = ctx.r4.u64 | 8384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329F41C;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329F428:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8329f474
	if (cr6.eq) goto loc_8329F474;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8329f4b0
	if (!cr6.eq) goto loc_8329F4B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8329fab8
	ctx.lr = 0x8329F460;
	sub_8329FAB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329f534
	if (cr6.lt) goto loc_8329F534;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329F474:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8329f4a0
	if (cr6.eq) goto loc_8329F4A0;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8448
	ctx.r4.u64 = ctx.r4.u64 | 8448;
	// bl 0x8329a350
	ctx.lr = 0x8329F494;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329F4A0:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8329f4c8
	if (cr6.eq) goto loc_8329F4C8;
loc_8329F4B0:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r4,r4,8450
	ctx.r4.u64 = ctx.r4.u64 | 8450;
	// bl 0x8329a350
	ctx.lr = 0x8329F4BC;
	sub_8329A350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329F4C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8329f818
	ctx.lr = 0x8329F4D0;
	sub_8329F818(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329f534
	if (cr6.eq) goto loc_8329F534;
	// li r11,46
	ctx.r11.s64 = 46;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stb r11,47(r3)
	PPC_STORE_U8(ctx.r3.u32 + 47, ctx.r11.u8);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83299990
	ctx.lr = 0x8329F4FC;
	sub_83299990(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329f524
	if (cr6.lt) goto loc_8329F524;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329fab8
	ctx.lr = 0x8329F51C;
	sub_8329FAB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329f540
	if (!cr6.lt) goto loc_8329F540;
loc_8329F524:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329f8b8
	ctx.lr = 0x8329F534;
	sub_8329F8B8(ctx, base);
loc_8329F534:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329F540:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8329fe18
	ctx.lr = 0x8329F558;
	sub_8329FE18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329F564"))) PPC_WEAK_FUNC(sub_8329F564);
PPC_FUNC_IMPL(__imp__sub_8329F564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F568"))) PPC_WEAK_FUNC(sub_8329F568);
PPC_FUNC_IMPL(__imp__sub_8329F568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8329F570;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lhz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lhz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 32);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r25,r8,28,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lis r4,-31958
	ctx.r4.s64 = -2094399488;
	// addi r8,r7,-3168
	ctx.r8.s64 = ctx.r7.s64 + -3168;
	// addi r7,r4,-4072
	ctx.r7.s64 = ctx.r4.s64 + -4072;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r27,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r27.u8);
	// stb r25,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r25.u8);
	// bl 0x832aa920
	ctx.lr = 0x8329F5F8;
	sub_832AA920(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329f628
	if (!cr6.eq) goto loc_8329F628;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8329f628
	if (cr6.eq) goto loc_8329F628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329ff48
	ctx.lr = 0x8329F618;
	sub_8329FF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8329f8b8
	ctx.lr = 0x8329F628;
	sub_8329F8B8(ctx, base);
loc_8329F628:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329F634"))) PPC_WEAK_FUNC(sub_8329F634);
PPC_FUNC_IMPL(__imp__sub_8329F634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F638"))) PPC_WEAK_FUNC(sub_8329F638);
PPC_FUNC_IMPL(__imp__sub_8329F638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8329F640;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// blt cr6,0x8329f684
	if (cr6.lt) goto loc_8329F684;
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,8195
	ctx.r4.u64 = ctx.r4.u64 | 8195;
	// bl 0x8329a350
	ctx.lr = 0x8329F67C;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329F684:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// lhz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// bgt cr6,0x8329f758
	if (cr6.gt) goto loc_8329F758;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// ble cr6,0x8329f7fc
	if (!cr6.gt) goto loc_8329F7FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329df98
	ctx.lr = 0x8329F6B0;
	sub_8329DF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8329f6d4
	if (!cr6.eq) goto loc_8329F6D4;
loc_8329F6BC:
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,8321
	ctx.r4.u64 = ctx.r4.u64 | 8321;
	// bl 0x8329a350
	ctx.lr = 0x8329F6CC;
	sub_8329A350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8329F6D4:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329f750
	if (cr6.eq) goto loc_8329F750;
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
	// bne cr6,0x8329f710
	if (!cr6.eq) goto loc_8329F710;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329F708;
	sub_83293EC8(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// b 0x8329f7f8
	goto loc_8329F7F8;
loc_8329F710:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8329f730
	if (cr6.gt) goto loc_8329F730;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329F728;
	sub_83293EC8(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// b 0x8329f7f8
	goto loc_8329F7F8;
loc_8329F730:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 & ctx.r8.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329F750;
	sub_83293EC8(ctx, base);
loc_8329F750:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// b 0x8329f7f8
	goto loc_8329F7F8;
loc_8329F758:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x8329f768
	if (!cr6.eq) goto loc_8329F768;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8329f78c
	goto loc_8329F78C;
loc_8329F768:
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(ctx.r26.u32, 4, xer);
	// bgt cr6,0x8329f778
	if (cr6.gt) goto loc_8329F778;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// b 0x8329f78c
	goto loc_8329F78C;
loc_8329F778:
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
	// and r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_8329F78C:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bgt cr6,0x8329f7c0
	if (cr6.gt) goto loc_8329F7C0;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329f7b0
	if (cr6.eq) goto loc_8329F7B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x83293ec8
	ctx.lr = 0x8329F7B0;
	sub_83293EC8(ctx, base);
loc_8329F7B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329e1d0
	ctx.lr = 0x8329F7BC;
	sub_8329E1D0(ctx, base);
	// b 0x8329f7fc
	goto loc_8329F7FC;
loc_8329F7C0:
	// addi r11,r26,3
	ctx.r11.s64 = ctx.r26.s64 + 3;
	// addi r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 3;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8329f7fc
	if (cr6.eq) goto loc_8329F7FC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329e200
	ctx.lr = 0x8329F7EC;
	sub_8329E200(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8329f6bc
	if (cr6.eq) goto loc_8329F6BC;
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_8329F7F8:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8329F7FC:
	// rlwinm r11,r29,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// sth r29,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r29.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329F814"))) PPC_WEAK_FUNC(sub_8329F814);
PPC_FUNC_IMPL(__imp__sub_8329F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F818"))) PPC_WEAK_FUNC(sub_8329F818);
PPC_FUNC_IMPL(__imp__sub_8329F818) {
	PPC_FUNC_PROLOGUE();
	// b 0x8329d8d8
	sub_8329D8D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329F81C"))) PPC_WEAK_FUNC(sub_8329F81C);
PPC_FUNC_IMPL(__imp__sub_8329F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F820"))) PPC_WEAK_FUNC(sub_8329F820);
PPC_FUNC_IMPL(__imp__sub_8329F820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329F828;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,46(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 46);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 44);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x8329f880
	if (!cr6.gt) goto loc_8329F880;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329f864
	if (!cr6.eq) goto loc_8329F864;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8329f878
	goto loc_8329F878;
loc_8329F864:
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
	// and r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 & ctx.r8.u64;
loc_8329F878:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329e1d0
	ctx.lr = 0x8329F880;
	sub_8329E1D0(ctx, base);
loc_8329F880:
	// stb r28,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r28.u8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// sth r28,44(r31)
	PPC_STORE_U16(ctx.r31.u32 + 44, ctx.r28.u16);
	// beq cr6,0x8329f8a4
	if (cr6.eq) goto loc_8329F8A4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8329f8a4
	if (cr6.eq) goto loc_8329F8A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329e1d0
	ctx.lr = 0x8329F8A4;
	sub_8329E1D0(ctx, base);
loc_8329F8A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8329db80
	ctx.lr = 0x8329F8B0;
	sub_8329DB80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329F8B8"))) PPC_WEAK_FUNC(sub_8329F8B8);
PPC_FUNC_IMPL(__imp__sub_8329F8B8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8329f900
	if (cr6.eq) goto loc_8329F900;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,29880
	ctx.r8.s64 = ctx.r11.s64 + 29880;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r8,r7,-2016
	ctx.r8.s64 = ctx.r7.s64 + -2016;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832ae4b8
	ctx.lr = 0x8329F900;
	sub_832AE4B8(ctx, base);
loc_8329F900:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329F910"))) PPC_WEAK_FUNC(sub_8329F910);
PPC_FUNC_IMPL(__imp__sub_8329F910) {
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
	// lbz r10,46(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 46);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lhz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 44);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// ble cr6,0x8329f964
	if (!cr6.gt) goto loc_8329F964;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r4,r4,8196
	ctx.r4.u64 = ctx.r4.u64 | 8196;
	// bl 0x8329a350
	ctx.lr = 0x8329F950;
	sub_8329A350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8329F964:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8329f984
	if (!cr6.eq) goto loc_8329F984;
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
loc_8329F984:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bgt cr6,0x8329f994
	if (cr6.gt) goto loc_8329F994;
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// b 0x8329f9a8
	goto loc_8329F9A8;
loc_8329F994:
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subf r7,r10,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ctx.r7.u64;
loc_8329F9A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329F9B4;
	sub_83293EC8(ctx, base);
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

__attribute__((alias("__imp__sub_8329F9CC"))) PPC_WEAK_FUNC(sub_8329F9CC);
PPC_FUNC_IMPL(__imp__sub_8329F9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329F9D0"))) PPC_WEAK_FUNC(sub_8329F9D0);
PPC_FUNC_IMPL(__imp__sub_8329F9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329F9D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329f9f8
	if (cr6.eq) goto loc_8329F9F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8329fa10
	goto loc_8329FA10;
loc_8329F9F8:
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// subfic r9,r11,56
	xer.ca = ctx.r11.u32 <= 56;
	ctx.r9.s64 = 56 - ctx.r11.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r3,r6,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
loc_8329FA10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329fa34
	if (!cr6.eq) goto loc_8329FA34;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// bl 0x8329a350
	ctx.lr = 0x8329FA2C;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329FA34:
	// lbz r31,47(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 47);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x8329fa58
	if (!cr6.eq) goto loc_8329FA58;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8385
	ctx.r4.u64 = ctx.r4.u64 | 8385;
	// bl 0x8329a350
	ctx.lr = 0x8329FA50;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329FA58:
	// xor r11,r31,r5
	ctx.r11.u64 = ctx.r31.u64 ^ ctx.r5.u64;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8329fa9c
	if (cr6.eq) goto loc_8329FA9C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x83299738
	ctx.lr = 0x8329FA70;
	sub_83299738(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299738
	ctx.lr = 0x8329FA7C;
	sub_83299738(ctx, base);
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,8384
	ctx.r4.u64 = ctx.r4.u64 | 8384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329FA94;
	sub_8329A350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8329FA9C:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8329f910
	ctx.lr = 0x8329FAAC;
	sub_8329F910(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FAB4"))) PPC_WEAK_FUNC(sub_8329FAB4);
PPC_FUNC_IMPL(__imp__sub_8329FAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FAB8"))) PPC_WEAK_FUNC(sub_8329FAB8);
PPC_FUNC_IMPL(__imp__sub_8329FAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329FAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8329f638
	ctx.lr = 0x8329FAE0;
	sub_8329F638(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x8329faf4
	if (!cr6.lt) goto loc_8329FAF4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329FAF4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8329fb08
	if (!cr6.eq) goto loc_8329FB08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329FB08:
	// lbz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 46);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329fb2c
	if (!cr6.eq) goto loc_8329FB2C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x8329fb50
	goto loc_8329FB50;
loc_8329FB2C:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8329fb3c
	if (cr6.gt) goto loc_8329FB3C;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// b 0x8329fb50
	goto loc_8329FB50;
loc_8329FB3C:
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
loc_8329FB50:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x8329FB60;
	sub_83293EC8(ctx, base);
	// clrlwi r10,r29,30
	ctx.r10.u64 = ctx.r29.u32 & 0x3;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8329fb8c
	if (cr6.eq) goto loc_8329FB8C;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x8329fb94
	if (cr6.eq) goto loc_8329FB94;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x8329fb9c
	if (cr6.eq) goto loc_8329FB9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329FB8C:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8329FB94:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8329FB9C:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FBAC"))) PPC_WEAK_FUNC(sub_8329FBAC);
PPC_FUNC_IMPL(__imp__sub_8329FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8329FBB0"))) PPC_WEAK_FUNC(sub_8329FBB0);
PPC_FUNC_IMPL(__imp__sub_8329FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8329FBB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r31,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFF80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329fbe0
	if (cr6.eq) goto loc_8329FBE0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8329fbf8
	goto loc_8329FBF8;
loc_8329FBE0:
	// clrlwi r11,r31,26
	ctx.r11.u64 = ctx.r31.u32 & 0x3F;
	// subfic r10,r11,56
	xer.ca = ctx.r11.u32 <= 56;
	ctx.r10.s64 = 56 - ctx.r11.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
loc_8329FBF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329fc20
	if (!cr6.eq) goto loc_8329FC20;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329FC18;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329FC20:
	// lbz r29,47(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x8329fcb0
	if (cr6.eq) goto loc_8329FCB0;
	// rlwinm r11,r29,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r11,r31,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x1;
	// beq cr6,0x8329fc5c
	if (cr6.eq) goto loc_8329FC5C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8329fc7c
	if (!cr6.eq) goto loc_8329FC7C;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,8386
	ctx.r4.u64 = ctx.r4.u64 | 8386;
	// bl 0x8329a350
	ctx.lr = 0x8329FC54;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329FC5C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8329fc7c
	if (cr6.eq) goto loc_8329FC7C;
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,8387
	ctx.r4.u64 = ctx.r4.u64 | 8387;
	// bl 0x8329a350
	ctx.lr = 0x8329FC74;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329FC7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299738
	ctx.lr = 0x8329FC84;
	sub_83299738(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83299738
	ctx.lr = 0x8329FC90;
	sub_83299738(ctx, base);
	// lis r4,-32759
	ctx.r4.s64 = -2146893824;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,8384
	ctx.r4.u64 = ctx.r4.u64 | 8384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8329a350
	ctx.lr = 0x8329FCA8;
	sub_8329A350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8329FCB0:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8329fab8
	ctx.lr = 0x8329FCC0;
	sub_8329FAB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8329fcd0
	if (cr6.lt) goto loc_8329FCD0;
	// clrlwi r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	// stb r11,47(r30)
	PPC_STORE_U8(ctx.r30.u32 + 47, ctx.r11.u8);
loc_8329FCD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FCD8"))) PPC_WEAK_FUNC(sub_8329FCD8);
PPC_FUNC_IMPL(__imp__sub_8329FCD8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8329f638
	sub_8329F638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FCE0"))) PPC_WEAK_FUNC(sub_8329FCE0);
PPC_FUNC_IMPL(__imp__sub_8329FCE0) {
	PPC_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x8329f638
	sub_8329F638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8329FCE8"))) PPC_WEAK_FUNC(sub_8329FCE8);
PPC_FUNC_IMPL(__imp__sub_8329FCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,27716
	ctx.r10.s64 = ctx.r10.s64 + 27716;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// beq cr6,0x8329fd08
	if (cr6.eq) goto loc_8329FD08;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8329FD08:
	// lhz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// rotlwi r9,r5,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r9.u16);
	// beq cr6,0x8329fd30
	if (cr6.eq) goto loc_8329FD30;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sth r9,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r9.u16);
loc_8329FD30:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// beq cr6,0x8329fd40
	if (cr6.eq) goto loc_8329FD40;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8329FD40:
	// lhz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// rotlwi r9,r5,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r9.u16);
	// beq cr6,0x8329fd68
	if (cr6.eq) goto loc_8329FD68;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sth r9,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
loc_8329FD68:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8329fd74
	if (cr6.eq) goto loc_8329FD74;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8329FD74:
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// rotlwi r5,r8,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r10,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r10.u16);
	// beq cr6,0x8329fd9c
	if (cr6.eq) goto loc_8329FD9C;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
loc_8329FD9C:
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// and r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x8329fdd0
	if (!cr6.eq) goto loc_8329FDD0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r10,40(r4)
	PPC_STORE_U16(ctx.r4.u32 + 40, ctx.r10.u16);
	// beq cr6,0x8329fde4
	if (cr6.eq) goto loc_8329FDE4;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,20(r4)
	PPC_STORE_U16(ctx.r4.u32 + 20, ctx.r10.u16);
	// b 0x8329fde4
	goto loc_8329FDE4;
loc_8329FDD0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r10,36(r6)
	PPC_STORE_U16(ctx.r6.u32 + 36, ctx.r10.u16);
	// beq cr6,0x8329fde4
	if (cr6.eq) goto loc_8329FDE4;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,16(r6)
	PPC_STORE_U16(ctx.r6.u32 + 16, ctx.r10.u16);
loc_8329FDE4:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,34(r7)
	PPC_STORE_U16(ctx.r7.u32 + 34, ctx.r11.u16);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// sth r11,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FE18"))) PPC_WEAK_FUNC(sub_8329FE18);
PPC_FUNC_IMPL(__imp__sub_8329FE18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,27716
	ctx.r10.s64 = ctx.r10.s64 + 27716;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// beq cr6,0x8329fe38
	if (cr6.eq) goto loc_8329FE38;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8329FE38:
	// lhz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// rotlwi r9,r5,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r9.u16);
	// beq cr6,0x8329fe60
	if (cr6.eq) goto loc_8329FE60;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sth r9,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r9.u16);
loc_8329FE60:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// beq cr6,0x8329fe70
	if (cr6.eq) goto loc_8329FE70;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_8329FE70:
	// lhz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// rotlwi r9,r5,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r9.u16);
	// beq cr6,0x8329fe98
	if (cr6.eq) goto loc_8329FE98;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sth r9,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r9.u16);
loc_8329FE98:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8329fea4
	if (cr6.eq) goto loc_8329FEA4;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8329FEA4:
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// rotlwi r5,r8,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// and r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 & ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r10,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r10.u16);
	// beq cr6,0x8329fecc
	if (cr6.eq) goto loc_8329FECC;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
loc_8329FECC:
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// and r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x8329ff00
	if (!cr6.eq) goto loc_8329FF00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r10,42(r4)
	PPC_STORE_U16(ctx.r4.u32 + 42, ctx.r10.u16);
	// beq cr6,0x8329ff14
	if (cr6.eq) goto loc_8329FF14;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,22(r4)
	PPC_STORE_U16(ctx.r4.u32 + 22, ctx.r10.u16);
	// b 0x8329ff14
	goto loc_8329FF14;
loc_8329FF00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r10,36(r6)
	PPC_STORE_U16(ctx.r6.u32 + 36, ctx.r10.u16);
	// beq cr6,0x8329ff14
	if (cr6.eq) goto loc_8329FF14;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,16(r6)
	PPC_STORE_U16(ctx.r6.u32 + 16, ctx.r10.u16);
loc_8329FF14:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,34(r7)
	PPC_STORE_U16(ctx.r7.u32 + 34, ctx.r11.u16);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// sth r11,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8329FF48"))) PPC_WEAK_FUNC(sub_8329FF48);
PPC_FUNC_IMPL(__imp__sub_8329FF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8329FF50;
	__savegprlr_29(ctx, base);
	// lhz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r9,14(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rotlwi r5,r9,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lhz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lhz r9,34(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// and r8,r5,r11
	ctx.r8.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lhz r5,36(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r31,18(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// rotlwi r3,r3,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// lhz r30,38(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 38);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ctx.r11.u64;
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r3,r31,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r31.u32, 16);
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// and r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ctx.r11.u64;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r31,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r30,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r30.s64;
	// subf r8,r5,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r5.s64;
	// subf r31,r3,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subf r3,r31,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r31.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r10,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r7,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r3.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// and r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 & ctx.r5.u64;
	// subfe r8,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// and r5,r8,r31
	ctx.r5.u64 = ctx.r8.u64 & ctx.r31.u64;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832a00f0
	if (!cr6.eq) goto loc_832A00F0;
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// rotlwi r8,r10,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// lhz r7,40(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// and r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rotlwi r8,r31,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 16);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// addi r10,r10,27716
	ctx.r10.s64 = ctx.r10.s64 + 27716;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bne cr6,0x832a00b8
	if (!cr6.eq) goto loc_832A00B8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832a008c
	if (cr6.eq) goto loc_832A008C;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_832A008C:
	// lhz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// rotlwi r4,r7,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// and r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 & ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r9.u16);
	// beq cr6,0x832a0130
	if (cr6.eq) goto loc_832A0130;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sth r9,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r9.u16);
	// b 0x832a0130
	goto loc_832A0130;
loc_832A00B8:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832a00c4
	if (cr6.eq) goto loc_832A00C4;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_832A00C4:
	// lhz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// rotlwi r4,r7,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// and r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 & ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r9.u16);
	// beq cr6,0x832a0130
	if (cr6.eq) goto loc_832A0130;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sth r9,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r9.u16);
	// b 0x832a0130
	goto loc_832A0130;
loc_832A00F0:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r10,r10,27716
	ctx.r10.s64 = ctx.r10.s64 + 27716;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// beq cr6,0x832a0108
	if (cr6.eq) goto loc_832A0108;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_832A0108:
	// lhz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// rotlwi r4,r7,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// and r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 & ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sth r9,36(r6)
	PPC_STORE_U16(ctx.r6.u32 + 36, ctx.r9.u16);
	// beq cr6,0x832a0130
	if (cr6.eq) goto loc_832A0130;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// sth r9,16(r6)
	PPC_STORE_U16(ctx.r6.u32 + 16, ctx.r9.u16);
loc_832A0130:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832a016c
	if (cr6.eq) goto loc_832A016C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832a0144
	if (cr6.eq) goto loc_832A0144;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_832A0144:
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// rotlwi r8,r9,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r11,34(r5)
	PPC_STORE_U16(ctx.r5.u32 + 34, ctx.r11.u16);
	// beq cr6,0x832a016c
	if (cr6.eq) goto loc_832A016C;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// sth r11,14(r5)
	PPC_STORE_U16(ctx.r5.u32 + 14, ctx.r11.u16);
loc_832A016C:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0170"))) PPC_WEAK_FUNC(sub_832A0170);
PPC_FUNC_IMPL(__imp__sub_832A0170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A0178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// blt cr6,0x832a0280
	if (cr6.lt) goto loc_832A0280;
	// lhz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// lhz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 40);
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
	// and r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r10
	ctx.r31.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a038c
	if (cr6.eq) goto loc_832A038C;
loc_832A01F8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299f20
	ctx.lr = 0x832A0204;
	sub_83299F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a0218
	if (cr6.eq) goto loc_832A0218;
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble 0x832a038c
	if (!cr0.gt) goto loc_832A038C;
loc_832A0218:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// and r10,r8,r30
	ctx.r10.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 & ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832a01f8
	if (!cr6.eq) goto loc_832A01F8;
	// b 0x832a038c
	goto loc_832A038C;
loc_832A0280:
	// lhz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// and r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 & ctx.r30.u64;
	// lhz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 40);
	// rotlwi r5,r6,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 & ctx.r30.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// beq 0x832a02e4
	if (cr0.eq) goto loc_832A02E4;
loc_832A02B8:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lhz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// lhz r8,36(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 36);
	// rotlwi r5,r6,16
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// and r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 & ctx.r30.u64;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832a02b8
	if (!cr0.eq) goto loc_832A02B8;
loc_832A02E4:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subfic r6,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r4,r8
	ctx.r31.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a038c
	if (cr6.eq) goto loc_832A038C;
loc_832A030C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83299f20
	ctx.lr = 0x832A0318;
	sub_83299F20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a032c
	if (cr6.eq) goto loc_832A032C;
	// addic. r28,r28,1
	xer.ca = ctx.r28.u32 > 4294967294;
	ctx.r28.s64 = ctx.r28.s64 + 1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge 0x832a038c
	if (!cr0.lt) goto loc_832A038C;
loc_832A032C:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,34(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// and r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 & ctx.r30.u64;
	// and r10,r6,r30
	ctx.r10.u64 = ctx.r6.u64 & ctx.r30.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r10
	ctx.r31.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832a030c
	if (!cr6.eq) goto loc_832A030C;
loc_832A038C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x832a039c
	if (cr6.eq) goto loc_832A039C;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_832A039C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A03A4"))) PPC_WEAK_FUNC(sub_832A03A4);
PPC_FUNC_IMPL(__imp__sub_832A03A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A03A8"))) PPC_WEAK_FUNC(sub_832A03A8);
PPC_FUNC_IMPL(__imp__sub_832A03A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A03B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lhz r10,22(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,42(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 42);
	// and r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 & ctx.r3.u64;
	// and r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r10
	ctx.r31.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a04a4
	if (cr6.eq) goto loc_832A04A4;
loc_832A0428:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8329a048
	ctx.lr = 0x832A0434;
	sub_8329A048(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832a04cc
	if (cr6.eq) goto loc_832A04CC;
	// bgt cr6,0x832a0548
	if (cr6.gt) goto loc_832A0548;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rotlwi r8,r11,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// and r10,r7,r30
	ctx.r10.u64 = ctx.r7.u64 & ctx.r30.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 & ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832a0428
	if (!cr6.eq) goto loc_832A0428;
loc_832A04A4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832a04b4
	if (cr6.eq) goto loc_832A04B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_832A04B4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832a04c0
	if (cr6.eq) goto loc_832A04C0;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_832A04C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A04CC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832a04d8
	if (cr6.eq) goto loc_832A04D8;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
loc_832A04D8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832a053c
	if (cr6.eq) goto loc_832A053C;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rotlwi r7,r11,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// and r11,r7,r30
	ctx.r11.u64 = ctx.r7.u64 & ctx.r30.u64;
	// and r10,r6,r30
	ctx.r10.u64 = ctx.r6.u64 & ctx.r30.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
loc_832A053C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A0548:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832a04b4
	if (cr6.eq) goto loc_832A04B4;
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// b 0x832a04b4
	goto loc_832A04B4;
}

__attribute__((alias("__imp__sub_832A0558"))) PPC_WEAK_FUNC(sub_832A0558);
PPC_FUNC_IMPL(__imp__sub_832A0558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832A0560;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a0584
	if (cr6.eq) goto loc_832A0584;
	// lwz r26,4(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x832a0598
	goto loc_832A0598;
loc_832A0584:
	// lbz r11,27(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 27);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r10,r11,21
	ctx.r10.s64 = ctx.r11.s64 * 21;
	// rlwinm r11,r10,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_832A0598:
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832a0680
	if (!cr6.eq) goto loc_832A0680;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// li r27,0
	ctx.r27.s64 = 0;
loc_832A05AC:
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rotlwi r9,r10,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lhz r8,34(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// and r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 & ctx.r28.u64;
	// rotlwi r6,r7,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r11,r6,r28
	ctx.r11.u64 = ctx.r6.u64 & ctx.r28.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq 0x832a0638
	if (cr0.eq) goto loc_832A0638;
loc_832A05E8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// subf r8,r9,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r9.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r5,r9
	ctx.r30.u64 = ctx.r5.u64 & ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83299f20
	ctx.lr = 0x832A0614;
	sub_83299F20(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832a0660
	if (!cr6.eq) goto loc_832A0660;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// and r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 & ctx.r28.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832a05e8
	if (!cr0.eq) goto loc_832A05E8;
loc_832A0638:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832a0674
	if (cr6.eq) goto loc_832A0674;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,29892
	ctx.r5.s64 = ctx.r11.s64 + 29892;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x832A0658;
	sub_83297A40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832a0688
	goto loc_832A0688;
loc_832A0660:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832a0638
	if (cr6.eq) goto loc_832A0638;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x832a05ac
	goto loc_832A05AC;
loc_832A0674:
	// li r11,47
	ctx.r11.s64 = 47;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x832a0684
	goto loc_832A0684;
loc_832A0680:
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
loc_832A0684:
	// li r30,1
	ctx.r30.s64 = 1;
loc_832A0688:
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// subf r10,r23,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r23.s64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x832a06a4
	if (!cr6.lt) goto loc_832A06A4;
loc_832A0698:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832A06A4:
	// subf r31,r11,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r11.s64;
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83299e10
	ctx.lr = 0x832A06B8;
	sub_83299E10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a0698
	if (cr6.lt) goto loc_832A0698;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r26,r31
	ctx.r3.u64 = ctx.r26.u64 + ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832A06D0;
	sub_83293EC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A06DC"))) PPC_WEAK_FUNC(sub_832A06DC);
PPC_FUNC_IMPL(__imp__sub_832A06DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A06E0"))) PPC_WEAK_FUNC(sub_832A06E0);
PPC_FUNC_IMPL(__imp__sub_832A06E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832A06E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bgt cr6,0x832a0714
	if (cr6.gt) goto loc_832A0714;
loc_832A0704:
	// lis r3,-32759
	ctx.r3.s64 = -2146893824;
	// ori r3,r3,8196
	ctx.r3.u64 = ctx.r3.u64 | 8196;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832A0714:
	// lbz r11,47(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 47);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x832a0768
	if (!cr6.eq) goto loc_832A0768;
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// rotlwi r6,r10,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// and r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 & ctx.r30.u64;
	// and r4,r6,r30
	ctx.r4.u64 = ctx.r6.u64 & ctx.r30.u64;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r11,r8,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r8.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_832A0768:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r27,47
	ctx.r27.s64 = 47;
	// and r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r6,r29,r25
	ctx.r6.u64 = ctx.r29.u64 + ctx.r25.u64;
	// and r28,r5,r27
	ctx.r28.u64 = ctx.r5.u64 & ctx.r27.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a080c
	if (cr6.eq) goto loc_832A080C;
loc_832A0798:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a0558
	ctx.lr = 0x832A07AC;
	sub_832A0558(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a0704
	if (cr6.eq) goto loc_832A0704;
	// lhz r11,18(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// lhz r8,38(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// rotlwi r7,r10,16
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// and r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 & ctx.r30.u64;
	// and r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 & ctx.r30.u64;
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r11,r8,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r8.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// and r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 & ctx.r30.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832a0798
	if (!cr6.eq) goto loc_832A0798;
loc_832A080C:
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, xer);
	// beq cr6,0x832a0704
	if (cr6.eq) goto loc_832A0704;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stbu r27,-1(r6)
	ea = -1 + ctx.r6.u32;
	PPC_STORE_U8(ea, ctx.r27.u8);
	ctx.r6.u32 = ea;
	// beq cr6,0x832a0840
	if (cr6.eq) goto loc_832A0840;
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a0558
	ctx.lr = 0x832A0834;
	sub_832A0558(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a0704
	if (cr6.eq) goto loc_832A0704;
loc_832A0840:
	// subf r11,r6,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r6.s64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83293f28
	ctx.lr = 0x832A085C;
	sub_83293F28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0870"))) PPC_WEAK_FUNC(sub_832A0870);
PPC_FUNC_IMPL(__imp__sub_832A0870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A0878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x832a08a8
	if (cr0.eq) goto loc_832A08A8;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(ctx.r11.u32, 64, xer);
	// ble cr6,0x832a08b4
	if (!cr6.gt) goto loc_832A08B4;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x832a08b8
	goto loc_832A08B8;
loc_832A08A8:
	// lbz r11,27(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 27);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_832A08B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832A08B8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bne cr6,0x832a08dc
	if (!cr6.eq) goto loc_832A08DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x832a08f4
	goto loc_832A08F4;
loc_832A08DC:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x832a08ec
	if (!cr6.lt) goto loc_832A08EC;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x832a08f4
	goto loc_832A08F4;
loc_832A08EC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
loc_832A08F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r28,47(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// rlwinm r29,r28,26,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832a0928
	if (!cr6.eq) goto loc_832A0928;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832996e8
	ctx.lr = 0x832A0918;
	sub_832996E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x832a0938
	if (cr6.eq) goto loc_832A0938;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x832a0930
	if (cr6.eq) goto loc_832A0930;
loc_832A0928:
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x832a093c
	goto loc_832A093C;
loc_832A0930:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832a093c
	goto loc_832A093C;
loc_832A0938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832A093C:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x832a09c0
	if (cr6.lt) goto loc_832A09C0;
	// beq cr6,0x832a09ac
	if (cr6.eq) goto loc_832A09AC;
	// lbz r11,46(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lhz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 44);
	// rotlwi r9,r11,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 16);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// rlwinm r30,r8,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// bne cr6,0x832a0978
	if (!cr6.eq) goto loc_832A0978;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832996e8
	ctx.lr = 0x832A0970;
	sub_832996E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a0980
	if (!cr6.lt) goto loc_832A0980;
loc_832A0978:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// b 0x832a0984
	goto loc_832A0984;
loc_832A0980:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_832A0984:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// ble cr6,0x832a09cc
	if (!cr6.gt) goto loc_832A09CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A09AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A09C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832A09CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A09D4"))) PPC_WEAK_FUNC(sub_832A09D4);
PPC_FUNC_IMPL(__imp__sub_832A09D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A09D8"))) PPC_WEAK_FUNC(sub_832A09D8);
PPC_FUNC_IMPL(__imp__sub_832A09D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A09E8"))) PPC_WEAK_FUNC(sub_832A09E8);
PPC_FUNC_IMPL(__imp__sub_832A09E8) {
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
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,26016
	ctx.r9.s64 = ctx.r10.s64 + 26016;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r3,-31958
	ctx.r3.s64 = -2094399488;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r7,2520
	ctx.r8.s64 = ctx.r7.s64 + 2520;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r7,r6,2160
	ctx.r7.s64 = ctx.r6.s64 + 2160;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r3,2160
	ctx.r6.s64 = ctx.r3.s64 + 2160;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832ae4b8
	ctx.lr = 0x832A0A60;
	sub_832AE4B8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r5,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r6,3
	ctx.r4.s64 = ctx.r6.s64 + 3;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r4,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// beq cr6,0x832a0adc
	if (cr6.eq) goto loc_832A0ADC;
	// addi r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 3;
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,638
	ctx.r9.s64 = ctx.r11.s64 + 638;
	// rlwinm r3,r9,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// b 0x832a0af0
	goto loc_832A0AF0;
loc_832A0ADC:
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,638
	ctx.r10.s64 = ctx.r11.s64 + 638;
	// rlwinm r3,r10,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
loc_832A0AF0:
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

__attribute__((alias("__imp__sub_832A0B08"))) PPC_WEAK_FUNC(sub_832A0B08);
PPC_FUNC_IMPL(__imp__sub_832A0B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x832a0b3c
	if (cr6.gt) goto loc_832A0B3C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x832a0b64
	goto loc_832A0B64;
loc_832A0B3C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// srw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// subfic r11,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// slw r10,r8,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// slw r4,r7,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
loc_832A0B64:
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a0b78
	if (!cr6.eq) goto loc_832A0B78;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832A0B78:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31748
	ctx.r9.s64 = -2080636928;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,27768(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27768);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0B98"))) PPC_WEAK_FUNC(sub_832A0B98);
PPC_FUNC_IMPL(__imp__sub_832A0B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832a0ba8
	if (!cr6.eq) goto loc_832A0BA8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x832a0bb4
	goto loc_832A0BB4;
loc_832A0BA8:
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r11,r11,15
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_832A0BB4:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r11,18
	ctx.r8.s64 = ctx.r11.s64 + 18;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bgt cr6,0x832a0c00
	if (cr6.gt) goto loc_832A0C00;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// slw r6,r9,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// ori r5,r8,65535
	ctx.r5.u64 = ctx.r8.u64 | 65535;
	// slw r4,r5,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// andc r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_832A0C00:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// slw r4,r9,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// ori r3,r6,65535
	ctx.r3.u64 = ctx.r6.u64 | 65535;
	// subfic r11,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r6,r3,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r6.s64 = ctx.r3.s32 >> temp.u32;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// andc r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A0C44"))) PPC_WEAK_FUNC(sub_832A0C44);
PPC_FUNC_IMPL(__imp__sub_832A0C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0C48"))) PPC_WEAK_FUNC(sub_832A0C48);
PPC_FUNC_IMPL(__imp__sub_832A0C48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A0C50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,27768
	ctx.r10.s64 = ctx.r10.s64 + 27768;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r30,r9,15,26,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x3F;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a0b08
	ctx.lr = 0x832A0C8C;
	sub_832A0B08(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// beq cr6,0x832a0ca4
	if (cr6.eq) goto loc_832A0CA4;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
loc_832A0CA4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a0b98
	ctx.lr = 0x832A0CB4;
	sub_832A0B98(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0CBC"))) PPC_WEAK_FUNC(sub_832A0CBC);
PPC_FUNC_IMPL(__imp__sub_832A0CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0CC0"))) PPC_WEAK_FUNC(sub_832A0CC0);
PPC_FUNC_IMPL(__imp__sub_832A0CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A0CC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,27768
	ctx.r31.s64 = ctx.r11.s64 + 27768;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// bl 0x832a5a38
	ctx.lr = 0x832A0CE8;
	sub_832A5A38(ctx, base);
	// lwz r10,600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// clrlwi r11,r30,15
	ctx.r11.u64 = ctx.r30.u32 & 0x1FFFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x832a0d5c
	if (!cr6.lt) goto loc_832A0D5C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a0d5c
	if (cr6.eq) goto loc_832A0D5C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832a0d40
	if (!cr6.eq) goto loc_832A0D40;
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// addi r10,r10,10584
	ctx.r10.s64 = ctx.r10.s64 + 10584;
loc_832A0D40:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// bl 0x832a5ae8
	ctx.lr = 0x832A0D50;
	sub_832A5AE8(ctx, base);
	// clrlwi r3,r27,24
	ctx.r3.u64 = ctx.r27.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A0D5C:
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x832a5ae8
	ctx.lr = 0x832A0D68;
	sub_832A5AE8(ctx, base);
	// clrlwi r3,r27,24
	ctx.r3.u64 = ctx.r27.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0D74"))) PPC_WEAK_FUNC(sub_832A0D74);
PPC_FUNC_IMPL(__imp__sub_832A0D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A0D78"))) PPC_WEAK_FUNC(sub_832A0D78);
PPC_FUNC_IMPL(__imp__sub_832A0D78) {
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
	ctx.lr = 0x832A0D80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r29,r11,27768
	ctx.r29.s64 = ctx.r11.s64 + 27768;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,608
	ctx.r5.s64 = 608;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x832A0DA4;
	sub_83294018(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// addi r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 4;
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r25,600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 600, ctx.r25.u32);
	// addi r10,r29,584
	ctx.r10.s64 = ctx.r29.s64 + 584;
	// stw r30,584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 584, ctx.r30.u32);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// stw r30,588(r29)
	PPC_STORE_U32(ctx.r29.u32 + 588, ctx.r30.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,22
	ctx.r11.s64 = 22;
loc_832A0DD0:
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r29,584
	ctx.r9.s64 = ctx.r29.s64 + 584;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stwx r6,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u32);
	// bdnz 0x832a0dd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A0DD0;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
loc_832A0DF8:
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83294018
	ctx.lr = 0x832A0E08;
	sub_83294018(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r28,r28,144
	ctx.r28.s64 = ctx.r28.s64 + 144;
	// bne 0x832a0df8
	if (!cr0.eq) goto loc_832A0DF8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 596, ctx.r30.u32);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r31,r24,16
	ctx.r31.s64 = ctx.r24.s64 + 16;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r27,r11,15456
	ctx.r27.s64 = ctx.r11.s64 + 15456;
loc_832A0E30:
	// lbzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r27.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// rlwimi r10,r11,17,9,14
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x7E0000) | (ctx.r10.u64 & 0xFFFFFFFFFF81FFFF);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r30.u8);
	// clrlwi r8,r10,9
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFFF;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwinm r4,r7,15,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x3F;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r5,27
	ctx.r11.u64 = ctx.r5.u32 & 0x1F;
	// rlwinm r10,r5,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r3,r11,18
	ctx.r3.s64 = ctx.r11.s64 + 18;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bgt cr6,0x832a0e94
	if (cr6.gt) goto loc_832A0E94;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x832a0eb8
	goto loc_832A0EB8;
loc_832A0E94:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// subfic r11,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// slw r10,r26,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// slw r5,r8,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// or r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 | ctx.r5.u64;
loc_832A0EB8:
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// and r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 & ctx.r3.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a0ef8
	if (cr6.eq) goto loc_832A0EF8;
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_832A0EF8:
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x832a0b98
	ctx.lr = 0x832A0F04;
	sub_832A0B98(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x832a0e30
	if (cr6.lt) goto loc_832A0E30;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,104(r24)
	PPC_STORE_U32(ctx.r24.u32 + 104, ctx.r30.u32);
	// addi r10,r24,96
	ctx.r10.s64 = ctx.r24.s64 + 96;
	// stw r30,108(r24)
	PPC_STORE_U32(ctx.r24.u32 + 108, ctx.r30.u32);
	// stw r11,112(r24)
	PPC_STORE_U32(ctx.r24.u32 + 112, ctx.r11.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// cmplwi cr6,r25,5
	cr6.compare<uint32_t>(ctx.r25.u32, 5, xer);
	// stb r30,117(r24)
	PPC_STORE_U8(ctx.r24.u32 + 117, ctx.r30.u8);
	// ble cr6,0x832a0f6c
	if (!cr6.gt) goto loc_832A0F6C;
	// addi r8,r25,-5
	ctx.r8.s64 = ctx.r25.s64 + -5;
	// addi r11,r24,128
	ctx.r11.s64 = ctx.r24.s64 + 128;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_832A0F44:
	// clrlwi r8,r9,15
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r7.u32);
	// stb r30,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r30.u8);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x832a0f44
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A0F44;
loc_832A0F6C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a0f90
	if (cr6.eq) goto loc_832A0F90;
	// rlwinm r9,r25,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r9,r25,r9
	ctx.r9.u64 = ctx.r25.u64 + ctx.r9.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r24
	ctx.r8.u64 = ctx.r9.u64 + ctx.r24.u64;
	// stw r11,-12(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
loc_832A0F90:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,29900
	ctx.r4.s64 = ctx.r11.s64 + 29900;
	// addi r3,r10,25828
	ctx.r3.s64 = ctx.r10.s64 + 25828;
	// addi r5,r25,-4
	ctx.r5.s64 = ctx.r25.s64 + -4;
	// bl 0x83298398
	ctx.lr = 0x832A0FA8;
	sub_83298398(ctx, base);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A0FC0"))) PPC_WEAK_FUNC(sub_832A0FC0);
PPC_FUNC_IMPL(__imp__sub_832A0FC0) {
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
	// bl 0x832a5950
	ctx.lr = 0x832A0FD0;
	sub_832A5950(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r10,r11,27768
	ctx.r10.s64 = ctx.r11.s64 + 27768;
	// stw r3,592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 592, ctx.r3.u32);
	// bgt cr6,0x832a0ff8
	if (cr6.gt) goto loc_832A0FF8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,29920
	ctx.r4.s64 = ctx.r11.s64 + 29920;
	// addi r3,r10,25828
	ctx.r3.s64 = ctx.r10.s64 + 25828;
	// bl 0x832982e8
	ctx.lr = 0x832A0FF8;
	sub_832982E8(ctx, base);
loc_832A0FF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1008"))) PPC_WEAK_FUNC(sub_832A1008);
PPC_FUNC_IMPL(__imp__sub_832A1008) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,27768
	ctx.r31.s64 = ctx.r11.s64 + 27768;
	// lwz r10,592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// lwz r9,600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// clrlwi r11,r10,15
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x832a1064
	if (!cr6.lt) goto loc_832A1064;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a107c
	if (!cr6.eq) goto loc_832A107C;
loc_832A1064:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r5,r11,29960
	ctx.r5.s64 = ctx.r11.s64 + 29960;
	// addi r3,r10,29948
	ctx.r3.s64 = ctx.r10.s64 + 29948;
	// li r4,660
	ctx.r4.s64 = 660;
	// bl 0x83298458
	ctx.lr = 0x832A107C;
	sub_83298458(ctx, base);
loc_832A107C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A108C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832A10A8"))) PPC_WEAK_FUNC(sub_832A10A8);
PPC_FUNC_IMPL(__imp__sub_832A10A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A10B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x832a10d8
	if (cr6.lt) goto loc_832A10D8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,29980
	ctx.r4.s64 = ctx.r11.s64 + 29980;
	// addi r3,r10,25828
	ctx.r3.s64 = ctx.r10.s64 + 25828;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832982e8
	ctx.lr = 0x832A10D8;
	sub_832982E8(ctx, base);
loc_832A10D8:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r29,r11,27768
	ctx.r29.s64 = ctx.r11.s64 + 27768;
	// lwz r3,592(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 592);
	// bl 0x832a5a38
	ctx.lr = 0x832A10E8;
	sub_832A5A38(ctx, base);
	// lwz r3,592(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 592);
	// lwz r31,596(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// stw r30,596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 596, ctx.r30.u32);
	// bl 0x832a5ae8
	ctx.lr = 0x832A10F8;
	sub_832A5AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1104"))) PPC_WEAK_FUNC(sub_832A1104);
PPC_FUNC_IMPL(__imp__sub_832A1104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1108"))) PPC_WEAK_FUNC(sub_832A1108);
PPC_FUNC_IMPL(__imp__sub_832A1108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832A1110;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// blt cr6,0x832a1138
	if (cr6.lt) goto loc_832A1138;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,29996
	ctx.r4.s64 = ctx.r11.s64 + 29996;
	// addi r3,r10,25828
	ctx.r3.s64 = ctx.r10.s64 + 25828;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x832982e8
	ctx.lr = 0x832A1138;
	sub_832982E8(ctx, base);
loc_832A1138:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,27768
	ctx.r26.s64 = ctx.r11.s64 + 27768;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// lwz r3,592(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 592);
	// bl 0x832a5a38
	ctx.lr = 0x832A1154;
	sub_832A5A38(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r26,8
	ctx.r10.s64 = ctx.r26.s64 + 8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r28,63
	ctx.r28.s64 = 63;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r30,1116
	ctx.r30.s64 = 1116;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
loc_832A117C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832a0b08
	ctx.lr = 0x832A1188;
	sub_832A0B08(ctx, base);
	// clrlwi r11,r30,27
	ctx.r11.u64 = ctx.r30.u32 & 0x1F;
	// rlwinm r10,r30,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bgt cr6,0x832a11b8
	if (cr6.gt) goto loc_832A11B8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r8,r31,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// slw r6,r29,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// b 0x832a11ec
	goto loc_832A11EC;
loc_832A11B8:
	// slw r9,r25,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r7,r29,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subfic r11,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// sraw r4,r31,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r4.s64 = ctx.r31.s32 >> temp.u32;
	// and r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 & ctx.r8.u64;
	// andc r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r4.u64;
	// srw r6,r29,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// or r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_832A11EC:
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x832a11fc
	if (!cr6.eq) goto loc_832A11FC;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_832A11FC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x832a1208
	if (cr6.eq) goto loc_832A1208;
	// stw r3,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r3.u32);
loc_832A1208:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832a1224
	if (cr6.eq) goto loc_832A1224;
loc_832A1210:
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stb r25,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r25.u8);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832a1210
	if (!cr6.eq) goto loc_832A1210;
loc_832A1224:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,-18
	ctx.r30.s64 = ctx.r30.s64 + -18;
	// bne 0x832a117c
	if (!cr0.eq) goto loc_832A117C;
	// lwz r3,592(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 592);
	// bl 0x832a5ae8
	ctx.lr = 0x832A1238;
	sub_832A5AE8(ctx, base);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x832a1260
	if (cr6.eq) goto loc_832A1260;
loc_832A1244:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A1254;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832a1244
	if (!cr6.eq) goto loc_832A1244;
loc_832A1260:
	// lwz r3,592(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 592);
	// bl 0x832a5a38
	ctx.lr = 0x832A1268;
	sub_832A5A38(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x832a127c
	if (cr6.eq) goto loc_832A127C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,12(r24)
	PPC_STORE_U32(ctx.r24.u32 + 12, ctx.r11.u32);
	// stw r23,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r23.u32);
loc_832A127C:
	// lwz r3,592(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 592);
	// bl 0x832a5ae8
	ctx.lr = 0x832A1284;
	sub_832A5AE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A128C"))) PPC_WEAK_FUNC(sub_832A128C);
PPC_FUNC_IMPL(__imp__sub_832A128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1290"))) PPC_WEAK_FUNC(sub_832A1290);
PPC_FUNC_IMPL(__imp__sub_832A1290) {
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
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,27768
	ctx.r11.s64 = ctx.r11.s64 + 27768;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a1334
	if (cr6.eq) goto loc_832A1334;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stb r9,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r9.u8);
	// lwz r10,604(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832a12dc
	if (!cr6.eq) goto loc_832A12DC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_832A12DC:
	// rlwimi r3,r10,6,18,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3FC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFC03F);
	// stw r10,604(r11)
	PPC_STORE_U32(ctx.r11.u32 + 604, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// clrlwi r8,r3,18
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// rlwimi r9,r8,17,0,14
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 17) & 0xFFFE0000) | (ctx.r9.u64 & 0xFFFFFFFF0001FFFF);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bne cr6,0x832a1308
	if (!cr6.eq) goto loc_832A1308;
	// lis r10,-31913
	ctx.r10.s64 = -2091450368;
	// addi r10,r10,10584
	ctx.r10.s64 = ctx.r10.s64 + 10584;
loc_832A1308:
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r4,596(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// bl 0x832a0c48
	ctx.lr = 0x832A131C;
	sub_832A0C48(ctx, base);
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
loc_832A1334:
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

__attribute__((alias("__imp__sub_832A134C"))) PPC_WEAK_FUNC(sub_832A134C);
PPC_FUNC_IMPL(__imp__sub_832A134C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1350"))) PPC_WEAK_FUNC(sub_832A1350);
PPC_FUNC_IMPL(__imp__sub_832A1350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A1358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,27768
	ctx.r31.s64 = ctx.r11.s64 + 27768;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a13a4
	if (!cr6.gt) goto loc_832A13A4;
	// bl 0x832a5a38
	ctx.lr = 0x832A1380;
	sub_832A5A38(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a1290
	ctx.lr = 0x832A1390;
	sub_832A1290(ctx, base);
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832a5ae8
	ctx.lr = 0x832A13A0;
	sub_832A5AE8(ctx, base);
	// b 0x832a13b8
	goto loc_832A13B8;
loc_832A13A4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a1290
	ctx.lr = 0x832A13B4;
	sub_832A1290(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832A13B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832a13cc
	if (cr6.eq) goto loc_832A13CC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A13CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A13D8"))) PPC_WEAK_FUNC(sub_832A13D8);
PPC_FUNC_IMPL(__imp__sub_832A13D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A13E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,27768
	ctx.r30.s64 = ctx.r11.s64 + 27768;
	// lwz r3,592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// bl 0x832a5a38
	ctx.lr = 0x832A13F8;
	sub_832A5A38(ctx, base);
	// lwz r10,600(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 600);
	// clrlwi r11,r29,15
	ctx.r11.u64 = ctx.r29.u32 & 0x1FFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x832a1438
	if (!cr6.lt) goto loc_832A1438;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r6,r11
	ctx.r31.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832a1464
	if (!cr6.eq) goto loc_832A1464;
loc_832A1438:
	// lwz r3,592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// bl 0x832a5ae8
	ctx.lr = 0x832A1440;
	sub_832A5AE8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r4,r11,30016
	ctx.r4.s64 = ctx.r11.s64 + 30016;
	// addi r3,r10,25828
	ctx.r3.s64 = ctx.r10.s64 + 25828;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83298338
	ctx.lr = 0x832A1458;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A1464:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a1484
	if (cr6.eq) goto loc_832A1484;
	// lwz r3,592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// bl 0x832a5ae8
	ctx.lr = 0x832A1478;
	sub_832A5AE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A1484:
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,4(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x832a14a4
	if (cr6.eq) goto loc_832A14A4;
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
	// b 0x832a14cc
	goto loc_832A14CC;
loc_832A14A4:
	// lbz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// rlwinm r4,r8,15,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x3F;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832a0b98
	ctx.lr = 0x832A14CC;
	sub_832A0B98(ctx, base);
loc_832A14CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832a14d8
	if (cr6.eq) goto loc_832A14D8;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_832A14D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r10,r11,15
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFF;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 592);
	// bl 0x832a5ae8
	ctx.lr = 0x832A14F8;
	sub_832A5AE8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x832A1504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A150C"))) PPC_WEAK_FUNC(sub_832A150C);
PPC_FUNC_IMPL(__imp__sub_832A150C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1510"))) PPC_WEAK_FUNC(sub_832A1510);
PPC_FUNC_IMPL(__imp__sub_832A1510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// clrlwi r11,r3,15
	ctx.r11.u64 = ctx.r3.u32 & 0x1FFFF;
	// addi r10,r10,27768
	ctx.r10.s64 = ctx.r10.s64 + 27768;
	// lwz r9,600(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 600);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x832a1558
	if (!cr6.lt) goto loc_832A1558;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832a1560
	if (!cr6.eq) goto loc_832A1560;
loc_832A1558:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832A1560:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a1570
	if (cr6.eq) goto loc_832A1570;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_832A1570:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1578"))) PPC_WEAK_FUNC(sub_832A1578);
PPC_FUNC_IMPL(__imp__sub_832A1578) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x832a15c0
	if (cr6.eq) goto loc_832A15C0;
loc_832A159C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a15b4
	if (cr6.eq) goto loc_832A15B4;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A15B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832A15B4:
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x832a159c
	if (!cr6.eq) goto loc_832A159C;
loc_832A15C0:
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

__attribute__((alias("__imp__sub_832A15D8"))) PPC_WEAK_FUNC(sub_832A15D8);
PPC_FUNC_IMPL(__imp__sub_832A15D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a1620
	if (cr6.eq) goto loc_832A1620;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x832a1610
	if (!cr6.lt) goto loc_832A1610;
loc_832A15FC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x832a15fc
	if (cr6.lt) goto loc_832A15FC;
loc_832A1610:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a1620
	if (cr6.eq) goto loc_832A1620;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_832A1620:
	// addi r7,r3,24
	ctx.r7.s64 = ctx.r3.s64 + 24;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832a1664
	if (cr6.eq) goto loc_832A1664;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x832a1654
	if (!cr6.lt) goto loc_832A1654;
loc_832A1640:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x832a1640
	if (cr6.lt) goto loc_832A1640;
loc_832A1654:
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a1664
	if (cr6.eq) goto loc_832A1664;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
loc_832A1664:
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x832a1698
	if (!cr6.lt) goto loc_832A1698;
loc_832A1684:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x832a1684
	if (cr6.lt) goto loc_832A1684;
loc_832A1698:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A16AC"))) PPC_WEAK_FUNC(sub_832A16AC);
PPC_FUNC_IMPL(__imp__sub_832A16AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A16B0"))) PPC_WEAK_FUNC(sub_832A16B0);
PPC_FUNC_IMPL(__imp__sub_832A16B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832a16f8
	if (cr6.eq) goto loc_832A16F8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x832a16e8
	if (!cr6.lt) goto loc_832A16E8;
loc_832A16D4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x832a16d4
	if (cr6.lt) goto loc_832A16D4;
loc_832A16E8:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a16f8
	if (cr6.eq) goto loc_832A16F8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_832A16F8:
	// addi r7,r3,20
	ctx.r7.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832a173c
	if (cr6.eq) goto loc_832A173C;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x832a172c
	if (!cr6.lt) goto loc_832A172C;
loc_832A1718:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x832a1718
	if (cr6.lt) goto loc_832A1718;
loc_832A172C:
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a173c
	if (cr6.eq) goto loc_832A173C;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
loc_832A173C:
	// addi r8,r3,40
	ctx.r8.s64 = ctx.r3.s64 + 40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x832a1770
	if (!cr6.lt) goto loc_832A1770;
loc_832A175C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x832a175c
	if (cr6.lt) goto loc_832A175C;
loc_832A1770:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1784"))) PPC_WEAK_FUNC(sub_832A1784);
PPC_FUNC_IMPL(__imp__sub_832A1784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1788"))) PPC_WEAK_FUNC(sub_832A1788);
PPC_FUNC_IMPL(__imp__sub_832A1788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A1790;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,168
	ctx.r30.s64 = ctx.r3.s64 + 168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x832af750
	ctx.lr = 0x832A17A8;
	sub_832AF750(ctx, base);
	// lbz r11,9(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 9);
	// lbz r7,10(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// addi r9,r31,280
	ctx.r9.s64 = ctx.r31.s64 + 280;
	// addi r10,r31,264
	ctx.r10.s64 = ctx.r31.s64 + 264;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a1804
	if (cr6.eq) goto loc_832A1804;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a1804
	if (cr6.eq) goto loc_832A1804;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x832a17f4
	if (!cr6.lt) goto loc_832A17F4;
loc_832A17E0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x832a17e0
	if (cr6.lt) goto loc_832A17E0;
loc_832A17F4:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a1804
	if (cr6.eq) goto loc_832A1804;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r30.u32);
loc_832A1804:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a1854
	if (cr6.eq) goto loc_832A1854;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a1854
	if (cr6.eq) goto loc_832A1854;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x832a1844
	if (!cr6.lt) goto loc_832A1844;
loc_832A1830:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x832a1830
	if (cr6.lt) goto loc_832A1830;
loc_832A1844:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a1854
	if (cr6.eq) goto loc_832A1854;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_832A1854:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A185C"))) PPC_WEAK_FUNC(sub_832A185C);
PPC_FUNC_IMPL(__imp__sub_832A185C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1860"))) PPC_WEAK_FUNC(sub_832A1860);
PPC_FUNC_IMPL(__imp__sub_832A1860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832A1868;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r28,r11,0,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r5,r28,312
	ctx.r5.s64 = ctx.r28.s64 + 312;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x832a1898
	if (!cr6.gt) goto loc_832A1898;
loc_832A188C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832A1898:
	// lis r9,-31984
	ctx.r9.s64 = -2096103424;
	// lis r8,-31984
	ctx.r8.s64 = -2096103424;
	// addi r9,r9,11696
	ctx.r9.s64 = ctx.r9.s64 + 11696;
	// addi r8,r8,11696
	ctx.r8.s64 = ctx.r8.s64 + 11696;
	// lis r3,-31984
	ctx.r3.s64 = -2096103424;
	// stw r9,268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 268, ctx.r9.u32);
	// lis r27,-31984
	ctx.r27.s64 = -2096103424;
	// stw r8,272(r28)
	PPC_STORE_U32(ctx.r28.u32 + 272, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r28,264
	ctx.r30.s64 = ctx.r28.s64 + 264;
	// sth r10,276(r28)
	PPC_STORE_U16(ctx.r28.u32 + 276, ctx.r10.u16);
	// addi r8,r3,11696
	ctx.r8.s64 = ctx.r3.s64 + 11696;
	// stb r11,278(r28)
	PPC_STORE_U8(ctx.r28.u32 + 278, ctx.r11.u8);
	// addi r9,r27,11696
	ctx.r9.s64 = ctx.r27.s64 + 11696;
	// stw r30,264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 264, ctx.r30.u32);
	// lis r6,-31984
	ctx.r6.s64 = -2096103424;
	// stw r8,288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 288, ctx.r8.u32);
	// lis r7,-31984
	ctx.r7.s64 = -2096103424;
	// stw r9,284(r28)
	PPC_STORE_U32(ctx.r28.u32 + 284, ctx.r9.u32);
	// addi r29,r28,280
	ctx.r29.s64 = ctx.r28.s64 + 280;
	// sth r10,292(r28)
	PPC_STORE_U16(ctx.r28.u32 + 292, ctx.r10.u16);
	// addi r9,r6,11696
	ctx.r9.s64 = ctx.r6.s64 + 11696;
	// stb r11,294(r28)
	PPC_STORE_U8(ctx.r28.u32 + 294, ctx.r11.u8);
	// addi r8,r7,11696
	ctx.r8.s64 = ctx.r7.s64 + 11696;
	// stw r29,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r29.u32);
	// addi r31,r28,296
	ctx.r31.s64 = ctx.r28.s64 + 296;
	// stw r9,300(r28)
	PPC_STORE_U32(ctx.r28.u32 + 300, ctx.r9.u32);
	// stw r8,304(r28)
	PPC_STORE_U32(ctx.r28.u32 + 304, ctx.r8.u32);
	// subf r9,r28,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r28.s64;
	// stw r31,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// sth r10,308(r28)
	PPC_STORE_U16(ctx.r28.u32 + 308, ctx.r10.u16);
	// add r6,r9,r26
	ctx.r6.u64 = ctx.r9.u64 + ctx.r26.u64;
	// stb r11,310(r28)
	PPC_STORE_U8(ctx.r28.u32 + 310, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832aef58
	ctx.lr = 0x832A192C;
	sub_832AEF58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832a188c
	if (cr6.lt) goto loc_832A188C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832a15d8
	ctx.lr = 0x832A1948;
	sub_832A15D8(ctx, base);
	// addi r27,r28,84
	ctx.r27.s64 = ctx.r28.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832af550
	ctx.lr = 0x832A1954;
	sub_832AF550(ctx, base);
	// lbz r11,11(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 11);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a1974
	if (cr6.eq) goto loc_832A1974;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832a16b0
	ctx.lr = 0x832A1974;
	sub_832A16B0(ctx, base);
loc_832A1974:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832a1788
	ctx.lr = 0x832A1980;
	sub_832A1788(ctx, base);
	// addi r31,r28,200
	ctx.r31.s64 = ctx.r28.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832af8f8
	ctx.lr = 0x832A198C;
	sub_832AF8F8(ctx, base);
	// lbz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a1a24
	if (cr6.eq) goto loc_832A1A24;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832a19dc
	if (cr6.eq) goto loc_832A19DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x832a19cc
	if (!cr6.lt) goto loc_832A19CC;
loc_832A19B8:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x832a19b8
	if (cr6.lt) goto loc_832A19B8;
loc_832A19CC:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a19dc
	if (cr6.eq) goto loc_832A19DC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
loc_832A19DC:
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832a1a24
	if (cr6.eq) goto loc_832A1A24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lhz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x832a1a14
	if (!cr6.lt) goto loc_832A1A14;
loc_832A1A00:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x832a1a00
	if (cr6.lt) goto loc_832A1A00;
loc_832A1A14:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a1a24
	if (cr6.eq) goto loc_832A1A24;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_832A1A24:
	// addi r31,r28,232
	ctx.r31.s64 = ctx.r28.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832afaf8
	ctx.lr = 0x832A1A30;
	sub_832AFAF8(ctx, base);
	// lbz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a1ac0
	if (cr6.eq) goto loc_832A1AC0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832a1a7c
	if (cr6.eq) goto loc_832A1A7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x832a1a6c
	if (!cr6.lt) goto loc_832A1A6C;
loc_832A1A58:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x832a1a58
	if (cr6.lt) goto loc_832A1A58;
loc_832A1A6C:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a1a7c
	if (cr6.eq) goto loc_832A1A7C;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_832A1A7C:
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832a1ac0
	if (cr6.eq) goto loc_832A1AC0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 12);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x832a1ab0
	if (!cr6.lt) goto loc_832A1AB0;
loc_832A1A9C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x832a1a9c
	if (cr6.lt) goto loc_832A1A9C;
loc_832A1AB0:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x832a1ac0
	if (cr6.eq) goto loc_832A1AC0;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_832A1AC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1ACC"))) PPC_WEAK_FUNC(sub_832A1ACC);
PPC_FUNC_IMPL(__imp__sub_832A1ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1AD0"))) PPC_WEAK_FUNC(sub_832A1AD0);
PPC_FUNC_IMPL(__imp__sub_832A1AD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bgt cr6,0x832a1be0
	if (cr6.gt) goto loc_832A1BE0;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832a1be0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A1BE0;
	// bdzf 4*cr6+eq,0x832a1b48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A1B48;
	// bdzf 4*cr6+eq,0x832a1b58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A1B58;
	// bdzf 4*cr6+eq,0x832a1b74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A1B74;
	// bdzf 4*cr6+eq,0x832a1b90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A1B90;
	// bdzf 4*cr6+eq,0x832a1bb0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832A1BB0;
	// bne cr6,0x832a1bd0
	if (!cr6.eq) goto loc_832A1BD0;
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// li r5,28
	ctx.r5.s64 = 28;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x832A1B40;
	sub_83294018(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// b 0x832a1be0
	goto loc_832A1BE0;
loc_832A1B48:
	// stb r11,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r11.u8);
	// stb r11,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r11.u8);
	// stb r11,138(r31)
	PPC_STORE_U8(ctx.r31.u32 + 138, ctx.r11.u8);
	// b 0x832a1be0
	goto loc_832A1BE0;
loc_832A1B58:
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r7,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r7.u8);
	// b 0x832a1be0
	goto loc_832A1BE0;
loc_832A1B74:
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r7,198(r31)
	PPC_STORE_U8(ctx.r31.u32 + 198, ctx.r7.u8);
	// b 0x832a1be0
	goto loc_832A1BE0;
loc_832A1B90:
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,214(r31)
	PPC_STORE_U8(ctx.r31.u32 + 214, ctx.r11.u8);
	// stb r11,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r11.u8);
	// b 0x832a1be0
	goto loc_832A1BE0;
loc_832A1BB0:
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lbz r8,7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,246(r31)
	PPC_STORE_U8(ctx.r31.u32 + 246, ctx.r11.u8);
	// stb r11,262(r31)
	PPC_STORE_U8(ctx.r31.u32 + 262, ctx.r11.u8);
	// b 0x832a1be0
	goto loc_832A1BE0;
loc_832A1BD0:
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_832A1BE0:
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
loc_832A1BE4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a1be4
	if (cr6.eq) goto loc_832A1BE4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A1C08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
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

__attribute__((alias("__imp__sub_832A1C24"))) PPC_WEAK_FUNC(sub_832A1C24);
PPC_FUNC_IMPL(__imp__sub_832A1C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1C28"))) PPC_WEAK_FUNC(sub_832A1C28);
PPC_FUNC_IMPL(__imp__sub_832A1C28) {
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
	// bl 0x832a1860
	ctx.lr = 0x832A1C38;
	sub_832A1860(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r8,-32757
	ctx.r8.s64 = -2146762752;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r6,r8,9345
	ctx.r6.u64 = ctx.r8.u64 | 9345;
	// stw r3,28376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28376, ctx.r3.u32);
	// and r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 & ctx.r6.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1C64"))) PPC_WEAK_FUNC(sub_832A1C64);
PPC_FUNC_IMPL(__imp__sub_832A1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1C68"))) PPC_WEAK_FUNC(sub_832A1C68);
PPC_FUNC_IMPL(__imp__sub_832A1C68) {
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
	// lwz r31,28376(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28376);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x832a1578
	ctx.lr = 0x832A1C88;
	sub_832A1578(ctx, base);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// bl 0x832a1578
	ctx.lr = 0x832A1C90;
	sub_832A1578(ctx, base);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x832a1578
	ctx.lr = 0x832A1C98;
	sub_832A1578(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832A1CAC"))) PPC_WEAK_FUNC(sub_832A1CAC);
PPC_FUNC_IMPL(__imp__sub_832A1CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1CB0"))) PPC_WEAK_FUNC(sub_832A1CB0);
PPC_FUNC_IMPL(__imp__sub_832A1CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,28376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28376);
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
loc_832A1CDC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a1cdc
	if (cr6.eq) goto loc_832A1CDC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A1D00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1D14"))) PPC_WEAK_FUNC(sub_832A1D14);
PPC_FUNC_IMPL(__imp__sub_832A1D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1D18"))) PPC_WEAK_FUNC(sub_832A1D18);
PPC_FUNC_IMPL(__imp__sub_832A1D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,28376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28376);
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
loc_832A1D3C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a1d3c
	if (cr6.eq) goto loc_832A1D3C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832A1D60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1D74"))) PPC_WEAK_FUNC(sub_832A1D74);
PPC_FUNC_IMPL(__imp__sub_832A1D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1D78"))) PPC_WEAK_FUNC(sub_832A1D78);
PPC_FUNC_IMPL(__imp__sub_832A1D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bne cr6,0x832a1dc4
	if (!cr6.eq) goto loc_832A1DC4;
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
loc_832A1DC4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r3,28376(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28376);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x832a1ad0
	ctx.lr = 0x832A1DE0;
	sub_832A1AD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A1DF0"))) PPC_WEAK_FUNC(sub_832A1DF0);
PPC_FUNC_IMPL(__imp__sub_832A1DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A1DF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwimi r11,r10,5,25,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x60) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF9F);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r26,r7,24
	ctx.r26.u64 = ctx.r7.u32 & 0xFF;
loc_832A1E24:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x832a1e48
	if (cr6.eq) goto loc_832A1E48;
	// bl 0x832a5230
	ctx.lr = 0x832A1E44;
	sub_832A5230(ctx, base);
	// b 0x832a1e4c
	goto loc_832A1E4C;
loc_832A1E48:
	// bl 0x832a5210
	ctx.lr = 0x832A1E4C;
	sub_832A5210(ctx, base);
loc_832A1E4C:
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x832a1e8c
	if (cr0.eq) goto loc_832A1E8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A1E6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a1e80
	if (!cr6.gt) goto loc_832A1E80;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A1E80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x832a1e24
	goto loc_832A1E24;
loc_832A1E8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1E98"))) PPC_WEAK_FUNC(sub_832A1E98);
PPC_FUNC_IMPL(__imp__sub_832A1E98) {
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
	ctx.lr = 0x832A1EA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// bl 0x832a4440
	ctx.lr = 0x832A1EC4;
	sub_832A4440(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// beq 0x832a1f20
	if (cr0.eq) goto loc_832A1F20;
loc_832A1ED0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A1EE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a1ef8
	if (!cr6.gt) goto loc_832A1EF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A1EF8:
	// lfsu f0,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a4440
	ctx.lr = 0x832A1F10;
	sub_832A4440(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// bne 0x832a1ed0
	if (!cr0.eq) goto loc_832A1ED0;
loc_832A1F20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F2C"))) PPC_WEAK_FUNC(sub_832A1F2C);
PPC_FUNC_IMPL(__imp__sub_832A1F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1F30"))) PPC_WEAK_FUNC(sub_832A1F30);
PPC_FUNC_IMPL(__imp__sub_832A1F30) {
	PPC_FUNC_PROLOGUE();
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x832a1e98
	sub_832A1E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F38"))) PPC_WEAK_FUNC(sub_832A1F38);
PPC_FUNC_IMPL(__imp__sub_832A1F38) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x832a1df0
	sub_832A1DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F44"))) PPC_WEAK_FUNC(sub_832A1F44);
PPC_FUNC_IMPL(__imp__sub_832A1F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1F48"))) PPC_WEAK_FUNC(sub_832A1F48);
PPC_FUNC_IMPL(__imp__sub_832A1F48) {
	PPC_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x832a1df0
	sub_832A1DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F54"))) PPC_WEAK_FUNC(sub_832A1F54);
PPC_FUNC_IMPL(__imp__sub_832A1F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1F58"))) PPC_WEAK_FUNC(sub_832A1F58);
PPC_FUNC_IMPL(__imp__sub_832A1F58) {
	PPC_FUNC_PROLOGUE();
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x832a1e98
	sub_832A1E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F60"))) PPC_WEAK_FUNC(sub_832A1F60);
PPC_FUNC_IMPL(__imp__sub_832A1F60) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x832a1df0
	sub_832A1DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F6C"))) PPC_WEAK_FUNC(sub_832A1F6C);
PPC_FUNC_IMPL(__imp__sub_832A1F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1F70"))) PPC_WEAK_FUNC(sub_832A1F70);
PPC_FUNC_IMPL(__imp__sub_832A1F70) {
	PPC_FUNC_PROLOGUE();
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x832a1df0
	sub_832A1DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1F7C"))) PPC_WEAK_FUNC(sub_832A1F7C);
PPC_FUNC_IMPL(__imp__sub_832A1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A1F80"))) PPC_WEAK_FUNC(sub_832A1F80);
PPC_FUNC_IMPL(__imp__sub_832A1F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832A1F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x832a1fdc
	if (cr6.eq) goto loc_832A1FDC;
loc_832A1FA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A1FB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a1fcc
	if (!cr6.gt) goto loc_832A1FCC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A1FCC:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x832a1fa8
	if (!cr6.eq) goto loc_832A1FA8;
loc_832A1FDC:
	// subf r3,r29,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r29.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A1FE8"))) PPC_WEAK_FUNC(sub_832A1FE8);
PPC_FUNC_IMPL(__imp__sub_832A1FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832A1FF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,4096
	cr6.compare<uint32_t>(ctx.r5.u32, 4096, xer);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// blt cr6,0x832a2038
	if (cr6.lt) goto loc_832A2038;
loc_832A201C:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a2044
	if (cr6.eq) goto loc_832A2044;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(ctx.r11.u32, 4096, xer);
	// bge cr6,0x832a201c
	if (!cr6.lt) goto loc_832A201C;
loc_832A2038:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A2044:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r29,r26,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r26.s64;
	// rlwinm r9,r11,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x700;
	// subfic r7,r29,-1
	xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r7.s64 = -1 - ctx.r29.s64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfic r5,r8,-1
	xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r5.s64 = -1 - ctx.r8.s64;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge cr6,0x832a21c0
	if (!cr6.lt) goto loc_832A21C0;
	// cmplw cr6,r26,r8
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, xer);
	// ble cr6,0x832a207c
	if (!cr6.gt) goto loc_832A207C;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
loc_832A207C:
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a211c
	if (cr6.eq) goto loc_832A211C;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x832a20cc
	if (!cr6.gt) goto loc_832A20CC;
loc_832A2094:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A20AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a20c0
	if (!cr6.gt) goto loc_832A20C0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A20C0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x832a2094
	if (cr6.lt) goto loc_832A2094;
loc_832A20CC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832a2714
	if (!cr6.gt) goto loc_832A2714;
loc_832A20D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A20EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2100
	if (!cr6.gt) goto loc_832A2100;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2100:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bgt cr6,0x832a20d4
	if (cr6.gt) goto loc_832A20D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A211C:
	// li r10,32
	ctx.r10.s64 = 32;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// rlwimi r10,r11,3,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// ble cr6,0x832a2168
	if (!cr6.gt) goto loc_832A2168;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
loc_832A2134:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A214C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2160
	if (!cr6.gt) goto loc_832A2160;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2160:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bgt cr6,0x832a2134
	if (cr6.gt) goto loc_832A2134;
loc_832A2168:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x832a2714
	if (!cr6.gt) goto loc_832A2714;
loc_832A2174:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A218C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a21a0
	if (!cr6.gt) goto loc_832A21A0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A21A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x832a2174
	if (cr6.lt) goto loc_832A2174;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A21C0:
	// rlwinm r9,r11,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// addi r29,r10,-3
	ctx.r29.s64 = ctx.r10.s64 + -3;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832a2570
	if (cr6.eq) goto loc_832A2570;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x832a21dc
	if (!cr6.lt) goto loc_832A21DC;
	// li r29,2
	ctx.r29.s64 = 2;
loc_832A21DC:
	// srawi r28,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 1;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// subf r29,r28,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r28.s64;
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// subf r8,r28,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r28.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// or r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 | ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x832a245c
	if (!cr6.eq) goto loc_832A245C;
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832a2318
	if (cr6.eq) goto loc_832A2318;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832a2254
	if (!cr6.gt) goto loc_832A2254;
loc_832A221C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A2234;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2248
	if (!cr6.gt) goto loc_832A2248;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2248:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x832a221c
	if (cr6.lt) goto loc_832A221C;
loc_832A2254:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A2268;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a227c
	if (!cr6.gt) goto loc_832A227C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A227C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A2290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a22a4
	if (!cr6.gt) goto loc_832A22A4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A22A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A22B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a22cc
	if (!cr6.gt) goto loc_832A22CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A22CC:
	// subf r30,r28,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r28.s64;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// bge cr6,0x832a2310
	if (!cr6.lt) goto loc_832A2310;
loc_832A22D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A22F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2304
	if (!cr6.gt) goto loc_832A2304;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2304:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x832a22d8
	if (cr6.lt) goto loc_832A22D8;
loc_832A2310:
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x832a26f0
	goto loc_832A26F0;
loc_832A2318:
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r11,3,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 3) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832A2334;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2348
	if (!cr6.gt) goto loc_832A2348;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2348:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832a238c
	if (!cr6.gt) goto loc_832A238C;
loc_832A2354:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A236C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2380
	if (!cr6.gt) goto loc_832A2380;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2380:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x832a2354
	if (cr6.lt) goto loc_832A2354;
loc_832A238C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A23A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a23b4
	if (!cr6.gt) goto loc_832A23B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A23B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A23C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a23dc
	if (!cr6.gt) goto loc_832A23DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A23DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A23F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2404
	if (!cr6.gt) goto loc_832A2404;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2404:
	// subf r30,r28,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r28.s64;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// bge cr6,0x832a2714
	if (!cr6.lt) goto loc_832A2714;
loc_832A2410:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A2428;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a243c
	if (!cr6.gt) goto loc_832A243C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A243C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x832a2410
	if (cr6.lt) goto loc_832A2410;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A245C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832a24a0
	if (!cr6.gt) goto loc_832A24A0;
loc_832A2468:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A2480;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2494
	if (!cr6.gt) goto loc_832A2494;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2494:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, xer);
	// blt cr6,0x832a2468
	if (cr6.lt) goto loc_832A2468;
loc_832A24A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A24B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a24c8
	if (!cr6.gt) goto loc_832A24C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A24C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A24DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a24f0
	if (!cr6.gt) goto loc_832A24F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A24F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A2504;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2518
	if (!cr6.gt) goto loc_832A2518;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2518:
	// subf r30,r29,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r29.s64;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// bge cr6,0x832a2714
	if (!cr6.lt) goto loc_832A2714;
loc_832A2524:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A253C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2550
	if (!cr6.gt) goto loc_832A2550;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2550:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x832a2524
	if (cr6.lt) goto loc_832A2524;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A2570:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bge cr6,0x832a257c
	if (!cr6.lt) goto loc_832A257C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_832A257C:
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832a2658
	if (cr6.eq) goto loc_832A2658;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A259C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a25b0
	if (!cr6.gt) goto loc_832A25B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A25B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A25C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a25d8
	if (!cr6.gt) goto loc_832A25D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A25D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A25EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2600
	if (!cr6.gt) goto loc_832A2600;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2600:
	// subf r30,r29,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r29.s64;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// bge cr6,0x832a2714
	if (!cr6.lt) goto loc_832A2714;
loc_832A260C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A2624;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2638
	if (!cr6.gt) goto loc_832A2638;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2638:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// blt cr6,0x832a260c
	if (cr6.lt) goto loc_832A260C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832A2658:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832a269c
	if (!cr6.gt) goto loc_832A269C;
loc_832A2664:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r27.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A267C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2690
	if (!cr6.gt) goto loc_832A2690;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2690:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x832a2664
	if (cr6.lt) goto loc_832A2664;
loc_832A269C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A26B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a26c4
	if (!cr6.gt) goto loc_832A26C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A26C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A26D8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a26ec
	if (!cr6.gt) goto loc_832A26EC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A26EC:
	// li r4,46
	ctx.r4.s64 = 46;
loc_832A26F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832A2700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832a2714
	if (!cr6.gt) goto loc_832A2714;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832A2714:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2728"))) PPC_WEAK_FUNC(sub_832A2728);
PPC_FUNC_IMPL(__imp__sub_832A2728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832A2730;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832a1fe8
	ctx.lr = 0x832A274C;
	sub_832A1FE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832a27ac
	if (!cr6.lt) goto loc_832A27AC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x832a2774
	if (!cr6.eq) goto loc_832A2774;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,30048
	ctx.r4.s64 = ctx.r11.s64 + 30048;
	// bl 0x832a1f80
	ctx.lr = 0x832A276C;
	sub_832A1F80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832A2774:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r11,30040
	ctx.r4.s64 = ctx.r11.s64 + 30040;
	// bl 0x832a1f80
	ctx.lr = 0x832A2780;
	sub_832A1F80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a5270
	ctx.lr = 0x832A2794;
	sub_832A5270(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// add r30,r3,r28
	ctx.r30.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r4,r10,-20732
	ctx.r4.s64 = ctx.r10.s64 + -20732;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1f80
	ctx.lr = 0x832A27A8;
	sub_832A1F80(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_832A27AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27B4"))) PPC_WEAK_FUNC(sub_832A27B4);
PPC_FUNC_IMPL(__imp__sub_832A27B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A27B8"))) PPC_WEAK_FUNC(sub_832A27B8);
PPC_FUNC_IMPL(__imp__sub_832A27B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x832a2728
	sub_832A2728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27C8"))) PPC_WEAK_FUNC(sub_832A27C8);
PPC_FUNC_IMPL(__imp__sub_832A27C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r11,1024
	ctx.r10.u64 = ctx.r11.u64 | 1024;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x832a2728
	sub_832A2728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27D8"))) PPC_WEAK_FUNC(sub_832A27D8);
PPC_FUNC_IMPL(__imp__sub_832A27D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x832a2728
	sub_832A2728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27E8"))) PPC_WEAK_FUNC(sub_832A27E8);
PPC_FUNC_IMPL(__imp__sub_832A27E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r10,r11,2560
	ctx.r10.u64 = ctx.r11.u64 | 2560;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x832a2728
	sub_832A2728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A27F8"))) PPC_WEAK_FUNC(sub_832A27F8);
PPC_FUNC_IMPL(__imp__sub_832A27F8) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x832a1fe8
	ctx.lr = 0x832A281C;
	sub_832A1FE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A282C"))) PPC_WEAK_FUNC(sub_832A282C);
PPC_FUNC_IMPL(__imp__sub_832A282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2830"))) PPC_WEAK_FUNC(sub_832A2830);
PPC_FUNC_IMPL(__imp__sub_832A2830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(ctx.r11.u32, 4096, xer);
	// blt cr6,0x832a2844
	if (cr6.lt) goto loc_832A2844;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_832A2844:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A284C"))) PPC_WEAK_FUNC(sub_832A284C);
PPC_FUNC_IMPL(__imp__sub_832A284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2850"))) PPC_WEAK_FUNC(sub_832A2850);
PPC_FUNC_IMPL(__imp__sub_832A2850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// blt cr6,0x832a2878
	if (cr6.lt) goto loc_832A2878;
	// li r9,100
	ctx.r9.s64 = 100;
	// li r11,1
	ctx.r11.s64 = 1;
	// divw r9,r10,r9
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r9.s32);
	// addi r8,r9,48
	ctx.r8.s64 = ctx.r9.s64 + 48;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
loc_832A2878:
	// lis r9,26214
	ctx.r9.s64 = 1717960704;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// ori r9,r9,26215
	ctx.r9.u64 = ctx.r9.u64 | 26215;
	// blt cr6,0x832a28bc
	if (cr6.lt) goto loc_832A28BC;
	// li r8,10
	ctx.r8.s64 = 10;
	// divw r5,r10,r8
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r8.s32);
	// mulhw r4,r5,r9
	ctx.r4.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r8,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r6,r8,48
	ctx.r6.s64 = ctx.r8.s64 + 48;
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832A28BC:
	// mulhw r9,r10,r9
	ctx.r9.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r9,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// stbx r5,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832A28EC"))) PPC_WEAK_FUNC(sub_832A28EC);
PPC_FUNC_IMPL(__imp__sub_832A28EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A28F0"))) PPC_WEAK_FUNC(sub_832A28F0);
PPC_FUNC_IMPL(__imp__sub_832A28F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x832A28F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// addi r27,r6,5
	ctx.r27.s64 = ctx.r6.s64 + 5;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subfc r10,r11,r27
	xer.ca = ctx.r27.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r7,r11,r6
	xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r6.s64 - ctx.r11.s64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832a2964
	if (cr6.eq) goto loc_832A2964;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a2728
	ctx.lr = 0x832A294C;
	sub_832A2728(ctx, base);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832a2964
	if (!cr6.lt) goto loc_832A2964;
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_832A2964:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r11,58
	ctx.r11.s64 = 58;
	// lbz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r4,r10,28
	ctx.r4.u64 = ctx.r10.u32 & 0xF;
	// lbz r9,1(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rlwinm r6,r10,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lbz r5,3(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// rlwinm r10,r9,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// lbz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// rlwinm r27,r7,28,4,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r26,r5,28,4,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// lbzx r25,r4,r31
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r4,r3,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r3,r3,28
	ctx.r3.u64 = ctx.r3.u32 & 0xF;
	// lbzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// lbzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// lbzx r27,r27,r31
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// lbzx r26,r26,r31
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r31.u32);
	// rlwinm r24,r30,28,4,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// lbzx r22,r4,r31
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r31.u32);
	// clrlwi r30,r30,28
	ctx.r30.u64 = ctx.r30.u32 & 0xF;
	// stb r11,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r28,r3,r31
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r23,r5,r31
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r31.u32);
	// lbzx r29,r24,r31
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r31.u32);
	// lbzx r31,r30,r31
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// stb r6,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// stb r25,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r25.u8);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// stb r9,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r9.u8);
	// stb r27,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r27.u8);
	// stb r7,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// stb r26,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r26.u8);
	// stb r23,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r23.u8);
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// stb r22,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r22.u8);
	// stb r11,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r11.u8);
	// stb r28,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r28.u8);
	// stb r11,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r29,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r29.u8);
	// stb r8,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r8.u8);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x832a1fe8
	ctx.lr = 0x832A2A3C;
	sub_832A1FE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2A44"))) PPC_WEAK_FUNC(sub_832A2A44);
PPC_FUNC_IMPL(__imp__sub_832A2A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2A48"))) PPC_WEAK_FUNC(sub_832A2A48);
PPC_FUNC_IMPL(__imp__sub_832A2A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A2A50;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfc r6,r10,r6
	xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// or r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 | ctx.r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832a2ac4
	if (cr6.eq) goto loc_832A2AC4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832a2728
	ctx.lr = 0x832A2AAC;
	sub_832A2728(ctx, base);
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832a2ac4
	if (!cr6.lt) goto loc_832A2AC4;
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832A2AC4:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// beq cr6,0x832a2b0c
	if (cr6.eq) goto loc_832A2B0C;
	// addi r11,r1,95
	ctx.r11.s64 = ctx.r1.s64 + 95;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
loc_832A2AE4:
	// lbzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r4,r6,28
	ctx.r4.u64 = ctx.r6.u32 & 0xF;
	// lbzx r3,r5,r30
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r30.u32);
	// lbzx r6,r4,r30
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r30.u32);
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// stbu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// stbx r7,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u8);
	// bdnz 0x832a2ae4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832A2AE4;
loc_832A2B0C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r10,r11,2560
	ctx.r10.u64 = ctx.r11.u64 | 2560;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x832a1fe8
	ctx.lr = 0x832A2B28;
	sub_832A1FE8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2B30"))) PPC_WEAK_FUNC(sub_832A2B30);
PPC_FUNC_IMPL(__imp__sub_832A2B30) {
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
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832afb78
	ctx.lr = 0x832A2B60;
	sub_832AFB78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1fe8
	ctx.lr = 0x832A2B70;
	sub_832A1FE8(ctx, base);
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

__attribute__((alias("__imp__sub_832A2B88"))) PPC_WEAK_FUNC(sub_832A2B88);
PPC_FUNC_IMPL(__imp__sub_832A2B88) {
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
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832afb78
	ctx.lr = 0x832A2BB8;
	sub_832AFB78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1fe8
	ctx.lr = 0x832A2BC8;
	sub_832A1FE8(ctx, base);
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

__attribute__((alias("__imp__sub_832A2BE0"))) PPC_WEAK_FUNC(sub_832A2BE0);
PPC_FUNC_IMPL(__imp__sub_832A2BE0) {
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
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832afc70
	ctx.lr = 0x832A2C0C;
	sub_832AFC70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1fe8
	ctx.lr = 0x832A2C1C;
	sub_832A1FE8(ctx, base);
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

__attribute__((alias("__imp__sub_832A2C34"))) PPC_WEAK_FUNC(sub_832A2C34);
PPC_FUNC_IMPL(__imp__sub_832A2C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2C38"))) PPC_WEAK_FUNC(sub_832A2C38);
PPC_FUNC_IMPL(__imp__sub_832A2C38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832afcf8
	ctx.lr = 0x832A2C64;
	sub_832AFCF8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1fe8
	ctx.lr = 0x832A2C74;
	sub_832A1FE8(ctx, base);
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

__attribute__((alias("__imp__sub_832A2C8C"))) PPC_WEAK_FUNC(sub_832A2C8C);
PPC_FUNC_IMPL(__imp__sub_832A2C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2C90"))) PPC_WEAK_FUNC(sub_832A2C90);
PPC_FUNC_IMPL(__imp__sub_832A2C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832A2C98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lbz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x832a2850
	ctx.lr = 0x832A2CB4;
	sub_832A2850(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r4,1(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// li r30,46
	ctx.r30.s64 = 46;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stbx r30,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u8);
	// bl 0x832a2850
	ctx.lr = 0x832A2CD8;
	sub_832A2850(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r4,2(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 2);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stbx r30,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u8);
	// bl 0x832a2850
	ctx.lr = 0x832A2CF8;
	sub_832A2850(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r4,3(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// stbx r30,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r30.u8);
	// bl 0x832a2850
	ctx.lr = 0x832A2D18;
	sub_832A2850(ctx, base);
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r10,r6,r11
	PPC_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x832a1fe8
	ctx.lr = 0x832A2D38;
	sub_832A1FE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2D40"))) PPC_WEAK_FUNC(sub_832A2D40);
PPC_FUNC_IMPL(__imp__sub_832A2D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r11,-9524
	ctx.r5.s64 = ctx.r11.s64 + -9524;
	// b 0x832a28f0
	sub_832A28F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2D50"))) PPC_WEAK_FUNC(sub_832A2D50);
PPC_FUNC_IMPL(__imp__sub_832A2D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r11,-9456
	ctx.r5.s64 = ctx.r11.s64 + -9456;
	// b 0x832a28f0
	sub_832A28F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2D60"))) PPC_WEAK_FUNC(sub_832A2D60);
PPC_FUNC_IMPL(__imp__sub_832A2D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r11,-9524
	ctx.r5.s64 = ctx.r11.s64 + -9524;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2D74"))) PPC_WEAK_FUNC(sub_832A2D74);
PPC_FUNC_IMPL(__imp__sub_832A2D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2D78"))) PPC_WEAK_FUNC(sub_832A2D78);
PPC_FUNC_IMPL(__imp__sub_832A2D78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r5,r11,-9456
	ctx.r5.s64 = ctx.r11.s64 + -9456;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2D8C"))) PPC_WEAK_FUNC(sub_832A2D8C);
PPC_FUNC_IMPL(__imp__sub_832A2D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2D90"))) PPC_WEAK_FUNC(sub_832A2D90);
PPC_FUNC_IMPL(__imp__sub_832A2D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r5,r11,-9524
	ctx.r5.s64 = ctx.r11.s64 + -9524;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DA4"))) PPC_WEAK_FUNC(sub_832A2DA4);
PPC_FUNC_IMPL(__imp__sub_832A2DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DA8"))) PPC_WEAK_FUNC(sub_832A2DA8);
PPC_FUNC_IMPL(__imp__sub_832A2DA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r5,r11,-9456
	ctx.r5.s64 = ctx.r11.s64 + -9456;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DBC"))) PPC_WEAK_FUNC(sub_832A2DBC);
PPC_FUNC_IMPL(__imp__sub_832A2DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DC0"))) PPC_WEAK_FUNC(sub_832A2DC0);
PPC_FUNC_IMPL(__imp__sub_832A2DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r5,r11,-9524
	ctx.r5.s64 = ctx.r11.s64 + -9524;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DD4"))) PPC_WEAK_FUNC(sub_832A2DD4);
PPC_FUNC_IMPL(__imp__sub_832A2DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DD8"))) PPC_WEAK_FUNC(sub_832A2DD8);
PPC_FUNC_IMPL(__imp__sub_832A2DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r5,r11,-9456
	ctx.r5.s64 = ctx.r11.s64 + -9456;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2DEC"))) PPC_WEAK_FUNC(sub_832A2DEC);
PPC_FUNC_IMPL(__imp__sub_832A2DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2DF0"))) PPC_WEAK_FUNC(sub_832A2DF0);
PPC_FUNC_IMPL(__imp__sub_832A2DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r5,r11,-9524
	ctx.r5.s64 = ctx.r11.s64 + -9524;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832A2E04"))) PPC_WEAK_FUNC(sub_832A2E04);
PPC_FUNC_IMPL(__imp__sub_832A2E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832A2E08"))) PPC_WEAK_FUNC(sub_832A2E08);
PPC_FUNC_IMPL(__imp__sub_832A2E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r5,r11,-9456
	ctx.r5.s64 = ctx.r11.s64 + -9456;
	// b 0x832a2a48
	sub_832A2A48(ctx, base);
	return;
}

