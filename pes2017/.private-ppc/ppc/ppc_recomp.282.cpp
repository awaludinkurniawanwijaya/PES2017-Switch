#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83117F88"))) PPC_WEAK_FUNC(sub_83117F88);
PPC_FUNC_IMPL(__imp__sub_83117F88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,100
	cr6.compare<uint32_t>(ctx.r4.u32, 100, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addis r11,r4,118
	ctx.r11.s64 = ctx.r4.s64 + 7733248;
	// addi r11,r11,22854
	ctx.r11.s64 = ctx.r11.s64 + 22854;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r5,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117FA4"))) PPC_WEAK_FUNC(sub_83117FA4);
PPC_FUNC_IMPL(__imp__sub_83117FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83117FA8"))) PPC_WEAK_FUNC(sub_83117FA8);
PPC_FUNC_IMPL(__imp__sub_83117FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// ori r10,r11,10776
	ctx.r10.u64 = ctx.r11.u64 | 10776;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// subfc r8,r9,r4
	xer.ca = ctx.r4.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r4
	ctx.r5.u64 = ctx.r6.u64 & ctx.r4.u64;
	// mulli r11,r5,76
	ctx.r11.s64 = ctx.r5.s64 * 76;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r4,237
	ctx.r3.s64 = ctx.r4.s64 + 15532032;
	// addi r3,r3,-19624
	ctx.r3.s64 = ctx.r3.s64 + -19624;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83117FD4"))) PPC_WEAK_FUNC(sub_83117FD4);
PPC_FUNC_IMPL(__imp__sub_83117FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83117FD8"))) PPC_WEAK_FUNC(sub_83117FD8);
PPC_FUNC_IMPL(__imp__sub_83117FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83117FE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// bl 0x8311c6c0
	ctx.lr = 0x83117FFC;
	sub_8311C6C0(ctx, base);
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x8311c6c0
	ctx.lr = 0x83118008;
	sub_8311C6C0(ctx, base);
	// addis r27,r31,237
	ctx.r27.s64 = ctx.r31.s64 + 15532032;
	// clrlwi r26,r3,16
	ctx.r26.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r27,r27,13180
	ctx.r27.s64 = ctx.r27.s64 + 13180;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x831180b0
	if (!cr6.gt) goto loc_831180B0;
	// addis r31,r31,237
	ctx.r31.s64 = ctx.r31.s64 + 15532032;
	// clrlwi r29,r30,16
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r31,r31,10780
	ctx.r31.s64 = ctx.r31.s64 + 10780;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_83118038:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83146708
	ctx.lr = 0x83118050;
	sub_83146708(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83146708
	ctx.lr = 0x83118060;
	sub_83146708(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x8311807c
	if (!cr6.eq) goto loc_8311807C;
	// clrlwi r9,r26,16
	ctx.r9.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x83118090
	if (cr6.eq) goto loc_83118090;
loc_8311807C:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x83118094
	if (!cr6.eq) goto loc_83118094;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83118094
	if (!cr6.eq) goto loc_83118094;
loc_83118090:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_83118094:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x83118038
	if (cr6.lt) goto loc_83118038;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x831180bc
	if (!cr6.eq) goto loc_831180BC;
loc_831180B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_831180BC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83146708
	ctx.lr = 0x831180CC;
	sub_83146708(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83146708
	ctx.lr = 0x831180DC;
	sub_83146708(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831180E8"))) PPC_WEAK_FUNC(sub_831180E8);
PPC_FUNC_IMPL(__imp__sub_831180E8) {
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
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,404
	ctx.r11.s64 = ctx.r3.s64 + 404;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83118110:
	// lwz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5);
	// oris r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 4294901760;
	// stw r8,5(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5, ctx.r8.u32);
	// stb r10,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r10.u8);
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// lwz r7,13(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13);
	// oris r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 4294901760;
	// stw r6,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r6.u32);
	// stb r10,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r10.u8);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lwz r5,21(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21);
	// oris r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 4294901760;
	// stw r4,21(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21, ctx.r4.u32);
	// stb r10,23(r11)
	PPC_STORE_U8(ctx.r11.u32 + 23, ctx.r10.u8);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// lwz r3,29(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29);
	// oris r9,r3,65535
	ctx.r9.u64 = ctx.r3.u64 | 4294901760;
	// stw r9,29(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29, ctx.r9.u32);
	// stb r10,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r10.u8);
	// stbu r10,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83118110
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f209e0
	ctx.lr = 0x8311816C;
	sub_82F209E0(ctx, base);
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

__attribute__((alias("__imp__sub_83118184"))) PPC_WEAK_FUNC(sub_83118184);
PPC_FUNC_IMPL(__imp__sub_83118184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83118188"))) PPC_WEAK_FUNC(sub_83118188);
PPC_FUNC_IMPL(__imp__sub_83118188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83118190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,39
	ctx.r30.s64 = 39;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r28,r11,65535
	ctx.r28.u64 = ctx.r11.u64 | 65535;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_831181B0:
	// sth r28,-8(r31)
	PPC_STORE_U16(ctx.r31.u32 + -8, ctx.r28.u16);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x83133110
	ctx.lr = 0x831181C4;
	sub_83133110(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bge 0x831181b0
	if (!cr0.lt) goto loc_831181B0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f20b88
	ctx.lr = 0x831181D8;
	sub_82F20B88(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r31,40
	ctx.r31.s64 = 40;
loc_831181E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83133110
	ctx.lr = 0x831181E8;
	sub_83133110(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x831181e0
	if (!cr0.eq) goto loc_831181E0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118200"))) PPC_WEAK_FUNC(sub_83118200);
PPC_FUNC_IMPL(__imp__sub_83118200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83118208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,130
	ctx.r10.s64 = 130;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83118228:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r4,-9540(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwimi r7,r4,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r7,-9540(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwz r4,-9540(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// lwz r4,-9540(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// stb r10,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// sth r10,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r30,r6,0,0,13
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r30.u64 & 0xFFFFFFFF0003FFFF);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r30,r6,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// sth r10,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// sth r10,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r10.u16);
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// sth r10,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r10.u16);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r29,r6,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// stw r29,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r29,r6,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// sth r10,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r10.u16);
	// sth r10,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r10.u16);
	// stb r10,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r10.u8);
	// stw r29,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// sth r10,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r10.u16);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r7,-9540(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r7,r3,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// sth r10,76(r11)
	PPC_STORE_U16(ctx.r11.u32 + 76, ctx.r10.u16);
	// sth r10,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// sthu r10,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83118228
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f20ca0
	ctx.lr = 0x8311834C;
	sub_82F20CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118358"))) PPC_WEAK_FUNC(sub_83118358);
PPC_FUNC_IMPL(__imp__sub_83118358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83118360;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83118380:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r4,-9540(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// rlwimi r7,r4,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lwz r7,-9540(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stb r10,18(r11)
	PPC_STORE_U8(ctx.r11.u32 + 18, ctx.r10.u8);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// lwz r4,-9540(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r3,r4,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r4,-9540(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r3,r4,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// stb r10,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r10.u8);
	// sth r10,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r30,r6,0,0,13
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r30.u64 & 0xFFFFFFFF0003FFFF);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r30,r6,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// sth r10,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r10.u16);
	// sth r10,46(r11)
	PPC_STORE_U16(ctx.r11.u32 + 46, ctx.r10.u16);
	// stb r10,50(r11)
	PPC_STORE_U8(ctx.r11.u32 + 50, ctx.r10.u8);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// sth r10,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r10.u16);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r29,r6,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// stw r29,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r29,r6,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stb r10,66(r11)
	PPC_STORE_U8(ctx.r11.u32 + 66, ctx.r10.u8);
	// sth r10,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r10.u16);
	// sth r10,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r10.u16);
	// stw r29,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// sth r10,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r10.u16);
	// lwz r6,-9540(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r7,-9540(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// sth r10,76(r11)
	PPC_STORE_U16(ctx.r11.u32 + 76, ctx.r10.u16);
	// sth r10,80(r11)
	PPC_STORE_U16(ctx.r11.u32 + 80, ctx.r10.u16);
	// stw r6,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// sth r10,78(r11)
	PPC_STORE_U16(ctx.r11.u32 + 78, ctx.r10.u16);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// lwz r7,-9540(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r3,r7,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r3,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r3.u32);
	// lwz r7,-9540(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// sth r10,92(r11)
	PPC_STORE_U16(ctx.r11.u32 + 92, ctx.r10.u16);
	// sth r10,94(r11)
	PPC_STORE_U16(ctx.r11.u32 + 94, ctx.r10.u16);
	// stb r10,98(r11)
	PPC_STORE_U8(ctx.r11.u32 + 98, ctx.r10.u8);
	// stw r5,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
	// sthu r10,96(r11)
	ea = 96 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83118380
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f20dc0
	ctx.lr = 0x831184E0;
	sub_82F20DC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831184EC"))) PPC_WEAK_FUNC(sub_831184EC);
PPC_FUNC_IMPL(__imp__sub_831184EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831184F0"))) PPC_WEAK_FUNC(sub_831184F0);
PPC_FUNC_IMPL(__imp__sub_831184F0) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// sth r10,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r10.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r10.u16);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// sth r10,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r10.u16);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// sth r10,48(r3)
	PPC_STORE_U16(ctx.r3.u32 + 48, ctx.r10.u16);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// sth r10,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r10.u16);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// sth r10,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r10.u16);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// sth r10,96(r3)
	PPC_STORE_U16(ctx.r3.u32 + 96, ctx.r10.u16);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// sth r10,108(r3)
	PPC_STORE_U16(ctx.r3.u32 + 108, ctx.r10.u16);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// stw r9,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// sth r10,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r10.u16);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// stw r9,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r9.u32);
	// sth r10,132(r3)
	PPC_STORE_U16(ctx.r3.u32 + 132, ctx.r10.u16);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// stw r9,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// sth r10,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r10.u16);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// stw r9,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r9.u32);
	// sth r10,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, ctx.r10.u16);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r11.u32);
	// stw r9,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r9.u32);
	// sth r10,168(r3)
	PPC_STORE_U16(ctx.r3.u32 + 168, ctx.r10.u16);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// stw r9,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r9.u32);
	// sth r10,180(r3)
	PPC_STORE_U16(ctx.r3.u32 + 180, ctx.r10.u16);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r9,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r9.u32);
	// sth r10,192(r3)
	PPC_STORE_U16(ctx.r3.u32 + 192, ctx.r10.u16);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r11.u32);
	// stw r9,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r9.u32);
	// sth r10,204(r3)
	PPC_STORE_U16(ctx.r3.u32 + 204, ctx.r10.u16);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
	// stw r9,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r9.u32);
	// sth r10,216(r3)
	PPC_STORE_U16(ctx.r3.u32 + 216, ctx.r10.u16);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// stw r9,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r9.u32);
	// sth r10,228(r3)
	PPC_STORE_U16(ctx.r3.u32 + 228, ctx.r10.u16);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// stw r9,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r9.u32);
	// sth r10,240(r3)
	PPC_STORE_U16(ctx.r3.u32 + 240, ctx.r10.u16);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
	// stw r9,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r9.u32);
	// sth r10,252(r3)
	PPC_STORE_U16(ctx.r3.u32 + 252, ctx.r10.u16);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// stw r9,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r9.u32);
	// sth r10,264(r3)
	PPC_STORE_U16(ctx.r3.u32 + 264, ctx.r10.u16);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r11.u32);
	// stw r9,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r9.u32);
	// sth r10,276(r3)
	PPC_STORE_U16(ctx.r3.u32 + 276, ctx.r10.u16);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r11.u32);
	// stw r9,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r9.u32);
	// sth r10,288(r3)
	PPC_STORE_U16(ctx.r3.u32 + 288, ctx.r10.u16);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
	// stw r9,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r9.u32);
	// sth r10,300(r3)
	PPC_STORE_U16(ctx.r3.u32 + 300, ctx.r10.u16);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stw r9,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r9.u32);
	// bl 0x82f20f10
	ctx.lr = 0x83118650;
	sub_82F20F10(ctx, base);
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

__attribute__((alias("__imp__sub_83118668"))) PPC_WEAK_FUNC(sub_83118668);
PPC_FUNC_IMPL(__imp__sub_83118668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lwz r8,-9540(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_83118690:
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83118690
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118690;
	// stb r10,264(r3)
	PPC_STORE_U8(ctx.r3.u32 + 264, ctx.r10.u8);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r10,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r10.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stb r10,272(r3)
	PPC_STORE_U8(ctx.r3.u32 + 272, ctx.r10.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r10,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r10.u32);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// li r6,99
	ctx.r6.s64 = 99;
loc_831186C0:
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r5,18,7,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 18) & 0x1FC0000) | (ctx.r8.u64 & 0xFFFFFFFFFE03FFFF);
	// rlwinm r4,r8,0,0,13
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// ld r8,-9588(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r6,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r6.u16);
	// std r8,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r8.u64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x831186c0
	if (!cr0.eq) goto loc_831186C0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83118708"))) PPC_WEAK_FUNC(sub_83118708);
PPC_FUNC_IMPL(__imp__sub_83118708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83118710;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
loc_83118720:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831174c0
	ctx.lr = 0x83118728;
	sub_831174C0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,484
	ctx.r30.s64 = ctx.r30.s64 + 484;
	// bge 0x83118720
	if (!cr0.lt) goto loc_83118720;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r29,1452
	ctx.r10.s64 = ctx.r29.s64 + 1452;
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// addi r7,r10,-112
	ctx.r7.s64 = ctx.r10.s64 + -112;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_83118758:
	// sthu r8,112(r7)
	ea = 112 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// stb r10,26(r11)
	PPC_STORE_U8(ctx.r11.u32 + 26, ctx.r10.u8);
	// stb r10,27(r11)
	PPC_STORE_U8(ctx.r11.u32 + 27, ctx.r10.u8);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// sth r8,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r8.u16);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 4294901760;
	// stw r3,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// stb r10,54(r11)
	PPC_STORE_U8(ctx.r11.u32 + 54, ctx.r10.u8);
	// stb r10,55(r11)
	PPC_STORE_U8(ctx.r11.u32 + 55, ctx.r10.u8);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// sth r8,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r8.u16);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// stb r10,82(r11)
	PPC_STORE_U8(ctx.r11.u32 + 82, ctx.r10.u8);
	// stb r10,83(r11)
	PPC_STORE_U8(ctx.r11.u32 + 83, ctx.r10.u8);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// sth r8,92(r11)
	PPC_STORE_U16(ctx.r11.u32 + 92, ctx.r8.u16);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// lwz r4,108(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// oris r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 4294901760;
	// stw r3,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r3.u32);
	// stb r10,110(r11)
	PPC_STORE_U8(ctx.r11.u32 + 110, ctx.r10.u8);
	// stb r10,111(r11)
	PPC_STORE_U8(ctx.r11.u32 + 111, ctx.r10.u8);
	// stwu r9,112(r11)
	ea = 112 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83118758
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118758;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831187E8"))) PPC_WEAK_FUNC(sub_831187E8);
PPC_FUNC_IMPL(__imp__sub_831187E8) {
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
	// li r10,100
	ctx.r10.s64 = 100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// li r5,98
	ctx.r5.s64 = 98;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r6,18
	ctx.r6.s64 = 18;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83118820:
	// sth r8,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r8.u16);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ld r9,-9588(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// std r9,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r9.u64);
	// stwu r10,28(r11)
	ea = 28 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83118820
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118820;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b141a8
	ctx.lr = 0x83118850;
	sub_82B141A8(ctx, base);
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

__attribute__((alias("__imp__sub_83118868"))) PPC_WEAK_FUNC(sub_83118868);
PPC_FUNC_IMPL(__imp__sub_83118868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83118870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,32
	ctx.r11.s64 = 32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r3,1152
	ctx.r10.s64 = ctx.r3.s64 + 1152;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_83118888:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83118888
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118888;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r31,1300
	ctx.r11.s64 = ctx.r31.s64 + 1300;
	// li r30,31
	ctx.r30.s64 = 31;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r10,-9592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9592);
	// stw r9,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r9.u32);
	// stw r10,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r10.u32);
loc_831188B4:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,25168
	ctx.r6.s64 = ctx.r11.s64 + 25168;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823fca98
	ctx.lr = 0x831188CC;
	sub_823FCA98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,196
	ctx.r29.s64 = ctx.r29.s64 + 196;
	// bge 0x831188b4
	if (!cr0.lt) goto loc_831188B4;
	// lwz r11,7708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7708);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,7732
	ctx.r3.s64 = ctx.r31.s64 + 7732;
	// oris r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 4294901760;
	// stw r10,7708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7708, ctx.r10.u32);
	// stb r30,7710(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7710, ctx.r30.u8);
	// stb r30,7711(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7711, ctx.r30.u8);
	// lwz r9,7716(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7716);
	// oris r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 4294901760;
	// stw r8,7716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7716, ctx.r8.u32);
	// stb r30,7718(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7718, ctx.r30.u8);
	// stb r30,7719(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7719, ctx.r30.u8);
	// bl 0x83124908
	ctx.lr = 0x8311890C;
	sub_83124908(ctx, base);
	// li r10,6400
	ctx.r10.s64 = 6400;
	// addi r11,r31,28140
	ctx.r11.s64 = ctx.r31.s64 + 28140;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_83118920:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// sthu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83118920
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f21060
	ctx.lr = 0x83118934;
	sub_82F21060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118940"))) PPC_WEAK_FUNC(sub_83118940);
PPC_FUNC_IMPL(__imp__sub_83118940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83118948;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,69
	ctx.r30.s64 = 69;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_83118960:
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83118970;
	sub_831CDCF0(ctx, base);
	// sth r29,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r29.u16);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,404
	ctx.r31.s64 = ctx.r31.s64 + 404;
	// bge 0x83118960
	if (!cr0.lt) goto loc_83118960;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f21438
	ctx.lr = 0x83118988;
	sub_82F21438(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118994"))) PPC_WEAK_FUNC(sub_83118994);
PPC_FUNC_IMPL(__imp__sub_83118994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83118998"))) PPC_WEAK_FUNC(sub_83118998);
PPC_FUNC_IMPL(__imp__sub_83118998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831189A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,60
	ctx.r29.s64 = ctx.r3.s64 + 60;
	// li r30,9
	ctx.r30.s64 = 9;
loc_831189B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83133458
	ctx.lr = 0x831189B8;
	sub_83133458(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bge 0x831189b0
	if (!cr0.lt) goto loc_831189B0;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r8,r31,300
	ctx.r8.s64 = ctx.r31.s64 + 300;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// li r11,0
	ctx.r11.s64 = 0;
loc_831189E0:
	// sth r10,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r10.u16);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// ld r7,-9588(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// std r7,4(r8)
	PPC_STORE_U64(ctx.r8.u32 + 4, ctx.r7.u64);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r11,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// stwu r11,40(r8)
	ea = 40 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x831189e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831189E0;
	// sth r10,1596(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1596, ctx.r10.u16);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// ld r8,-9588(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// sth r10,1636(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1636, ctx.r10.u16);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// std r8,1596(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1596, ctx.r8.u64);
	// addi r8,r31,1596
	ctx.r8.s64 = ctx.r31.s64 + 1596;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// ld r8,-9588(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// std r8,1636(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1636, ctx.r8.u64);
	// sth r10,1676(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1676, ctx.r10.u16);
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// stw r11,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r11.u32);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// stw r11,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r11.u32);
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// stw r11,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r11.u32);
	// ld r8,-9588(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// std r8,1676(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1676, ctx.r8.u64);
	// sth r10,1716(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1716, ctx.r10.u16);
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// stw r11,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r11.u32);
	// stw r11,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r11.u32);
	// stw r11,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r11.u32);
	// stw r11,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r11.u32);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// stw r11,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r11.u32);
	// stw r11,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r11.u32);
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// ld r8,-9588(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// std r8,1716(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1716, ctx.r8.u64);
	// sth r10,1756(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1756, ctx.r10.u16);
	// stw r11,1760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1760, ctx.r11.u32);
	// stw r11,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r11.u32);
	// stw r11,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r11.u32);
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
	// stw r11,1736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1736, ctx.r11.u32);
	// stw r11,1740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1740, ctx.r11.u32);
	// stw r11,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r11.u32);
	// stw r11,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r11.u32);
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// ld r8,-9588(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// std r8,1756(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1756, ctx.r8.u64);
	// sth r10,1796(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1796, ctx.r10.u16);
	// stw r11,1800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1800, ctx.r11.u32);
	// stw r11,1788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1788, ctx.r11.u32);
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
	// stw r11,1764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1764, ctx.r11.u32);
	// stw r11,1768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1768, ctx.r11.u32);
	// stw r11,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r11.u32);
	// stw r11,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r11.u32);
	// stw r11,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r11.u32);
	// stw r11,1784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1784, ctx.r11.u32);
	// ld r8,-9588(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// std r8,1796(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1796, ctx.r8.u64);
	// sth r10,1836(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1836, ctx.r10.u16);
	// stw r11,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r11.u32);
	// stw r11,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r11.u32);
	// stw r11,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r11.u32);
	// stw r11,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r11.u32);
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
	// stw r11,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r11.u32);
	// stw r11,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r11.u32);
	// stw r11,1804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1804, ctx.r11.u32);
	// stw r11,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r11.u32);
	// ld r8,-9588(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// stw r11,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r11.u32);
	// stw r11,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r11.u32);
	// std r8,1836(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1836, ctx.r8.u64);
	// sth r10,1876(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1876, ctx.r10.u16);
	// stw r11,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r11.u32);
	// stw r11,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r11.u32);
	// stw r11,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r11.u32);
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// stw r11,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r11.u32);
	// stw r11,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r11.u32);
	// stw r11,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r11.u32);
	// ld r8,-9588(r9)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// std r8,1876(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1876, ctx.r8.u64);
	// li r8,100
	ctx.r8.s64 = 100;
	// stw r11,1900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1900, ctx.r11.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r11,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r11.u32);
	// addi r8,r31,2008
	ctx.r8.s64 = ctx.r31.s64 + 2008;
	// stw r11,1908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1908, ctx.r11.u32);
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// stw r11,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r11.u32);
	// sth r10,1916(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1916, ctx.r10.u16);
	// stw r11,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r11.u32);
	// stw r11,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r11.u32);
	// stw r11,1892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1892, ctx.r11.u32);
	// stw r11,1896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1896, ctx.r11.u32);
	// ld r7,-9588(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// sth r10,1956(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1956, ctx.r10.u16);
	// stw r11,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r11.u32);
	// std r7,1916(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1916, ctx.r7.u64);
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// stw r11,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r11.u32);
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// stw r11,1952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1952, ctx.r11.u32);
	// stw r11,1924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1924, ctx.r11.u32);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// stw r11,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r11.u32);
	// stw r11,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r11.u32);
	// ld r7,-9588(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
	// stw r11,1968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1968, ctx.r11.u32);
	// stw r11,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r11.u32);
	// stw r11,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r11.u32);
	// std r7,1956(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1956, ctx.r7.u64);
	// stw r11,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r11.u32);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// stw r11,1988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1988, ctx.r11.u32);
	// stw r11,1992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1992, ctx.r11.u32);
loc_83118C04:
	// sth r10,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r10.u16);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// ld r7,-9588(r9)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r9.u32 + -9588);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// std r7,4(r8)
	PPC_STORE_U64(ctx.r8.u32 + 4, ctx.r7.u64);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r11,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r11.u32);
	// stw r11,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// stwu r11,40(r8)
	ea = 40 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x83118c04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118C04;
	// lwz r10,6012(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6012);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 4294901760;
	// stw r9,6012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6012, ctx.r9.u32);
	// stb r11,6014(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6014, ctx.r11.u8);
	// stb r11,6015(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6015, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118C58"))) PPC_WEAK_FUNC(sub_83118C58);
PPC_FUNC_IMPL(__imp__sub_83118C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83118C60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// oris r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 4294901760;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r8,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r8.u8);
	// stb r8,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r8.u8);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83118C94:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r31,-9540(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwimi r7,r31,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r3,r7,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwimi r28,r7,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r31,r7,0,0,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r31.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r31,r7,0,14,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r29,r7,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r29,r7,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r27,r7,0,0,13
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r27.u64 & 0xFFFFFFFF0003FFFF);
	// stw r27,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r27.u32);
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r27,r7,0,14,31
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r27.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// stw r27,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r27.u32);
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r6,r7,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// lwz r7,-9540(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9540);
	// rlwimi r5,r7,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r8,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r8.u32);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bdnz 0x83118c94
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118C94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f21a18
	ctx.lr = 0x83118DAC;
	sub_82F21A18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83118DB8"))) PPC_WEAK_FUNC(sub_83118DB8);
PPC_FUNC_IMPL(__imp__sub_83118DB8) {
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
	// li r10,320
	ctx.r10.s64 = 320;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83118DD8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83118dd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118DD8;
	// li r5,1284
	ctx.r5.s64 = 1284;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83118DF8;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_83118E10"))) PPC_WEAK_FUNC(sub_83118E10);
PPC_FUNC_IMPL(__imp__sub_83118E10) {
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
	// li r10,232
	ctx.r10.s64 = 232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83118E34:
	// sth r10,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r7,0,22,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF03FF;
	// rlwinm r4,r5,0,22,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFF03FF;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// rlwinm r9,r9,0,22,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF03FF;
	// rlwinm r8,r8,0,22,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF03FF;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// rlwinm r7,r6,0,22,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF03FF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stwu r7,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83118e34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118E34;
	// li r5,4644
	ctx.r5.s64 = 4644;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83118E98;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_83118EB0"))) PPC_WEAK_FUNC(sub_83118EB0);
PPC_FUNC_IMPL(__imp__sub_83118EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83118EB8;
	__savegprlr_29(ctx, base);
	// li r10,92
	ctx.r10.s64 = 92;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r7,14
	ctx.r7.s64 = 14;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83118EE0:
	// stw r7,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r7.u32);
	// ld r6,-9588(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9588);
	// stdx r6,r11,r5
	PPC_STORE_U64(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u64);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// sth r9,18(r11)
	PPC_STORE_U16(ctx.r11.u32 + 18, ctx.r9.u16);
	// stw r6,14(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14, ctx.r6.u32);
	// sthu r9,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83118ee0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118EE0;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r30,r11,-9524
	ctx.r30.s64 = ctx.r11.s64 + -9524;
	// addi r31,r3,1844
	ctx.r31.s64 = ctx.r3.s64 + 1844;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r4,1844(r3)
	PPC_STORE_U64(ctx.r3.u32 + 1844, ctx.r4.u64);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// stw r6,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r6.u32);
loc_83118F2C:
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// ld r6,-9588(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9588);
	// std r6,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r6.u64);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r4,r6,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// rlwimi r4,r6,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// sth r9,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r9.u16);
	// sth r9,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r9.u16);
	// ld r6,-9588(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9588);
	// std r6,28(r11)
	PPC_STORE_U64(ctx.r11.u32 + 28, ctx.r6.u64);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r4,r6,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// rlwimi r29,r6,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// sth r9,42(r11)
	PPC_STORE_U16(ctx.r11.u32 + 42, ctx.r9.u16);
	// sth r9,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r9.u16);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// ld r6,-9588(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9588);
	// std r6,48(r11)
	PPC_STORE_U64(ctx.r11.u32 + 48, ctx.r6.u64);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwimi r4,r6,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// rlwimi r29,r6,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// sth r9,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r9.u16);
	// sth r9,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r9.u16);
	// stw r7,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// ld r6,-9588(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9588);
	// std r6,68(r11)
	PPC_STORE_U64(ctx.r11.u32 + 68, ctx.r6.u64);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwimi r4,r6,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r4.u32);
	// lwz r6,-9540(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// rlwimi r29,r6,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r29,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r29.u32);
	// sth r9,82(r11)
	PPC_STORE_U16(ctx.r11.u32 + 82, ctx.r9.u16);
	// sthu r9,80(r11)
	ea = 80 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x83118f2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83118F2C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,-9540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r9,r11,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r11,-9540(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119030"))) PPC_WEAK_FUNC(sub_83119030);
PPC_FUNC_IMPL(__imp__sub_83119030) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83119038;
	__savegprlr_21(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// stw r3,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r3.u32);
	// addi r8,r3,104
	ctx.r8.s64 = ctx.r3.s64 + 104;
	// stb r9,-112(r1)
	PPC_STORE_U8(ctx.r1.u32 + -112, ctx.r9.u8);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// stb r9,-112(r1)
	PPC_STORE_U8(ctx.r1.u32 + -112, ctx.r9.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// ld r8,-9588(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r10,-9540(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9540);
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,-9540(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9540);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stb r5,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r5.u8);
	// stw r3,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r3.u32);
	// ld r10,-9588(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// lwz r3,-104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	// std r10,40(r11)
	PPC_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,-9540(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9540);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stb r31,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r31.u8);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// lwz r11,-9540(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9540);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// lwz r11,-9540(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9540);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stb r10,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r10.u8);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r11.u64);
	// lwz r11,-9540(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -9540);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stb r10,100(r3)
	PPC_STORE_U8(ctx.r3.u32 + 100, ctx.r10.u8);
	// sth r21,104(r3)
	PPC_STORE_U16(ctx.r3.u32 + 104, ctx.r21.u16);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// sth r21,116(r3)
	PPC_STORE_U16(ctx.r3.u32 + 116, ctx.r21.u16);
	// stw r10,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r10.u32);
	// std r11,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// stw r27,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r27.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// sth r21,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, ctx.r21.u16);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// std r11,116(r3)
	PPC_STORE_U64(ctx.r3.u32 + 116, ctx.r11.u64);
	// stw r27,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r27.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r11.u64);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r5,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, ctx.r5.u32);
	// sth r21,140(r3)
	PPC_STORE_U16(ctx.r3.u32 + 140, ctx.r21.u16);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// stw r27,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r27.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// ld r9,-9588(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// std r9,140(r3)
	PPC_STORE_U64(ctx.r3.u32 + 140, ctx.r9.u64);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// sth r21,152(r3)
	PPC_STORE_U16(ctx.r3.u32 + 152, ctx.r21.u16);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r10,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r27,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r27.u32);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// ld r9,-9588(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// std r9,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r9.u64);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// sth r21,164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 164, ctx.r21.u16);
	// stw r10,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r10.u32);
	// addi r11,r3,152
	ctx.r11.s64 = ctx.r3.s64 + 152;
	// stw r27,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r27.u32);
	// addi r9,r3,164
	ctx.r9.s64 = ctx.r3.s64 + 164;
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// addi r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 + 176;
	// sth r21,176(r3)
	PPC_STORE_U16(ctx.r3.u32 + 176, ctx.r21.u16);
	// addi r9,r3,188
	ctx.r9.s64 = ctx.r3.s64 + 188;
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// std r11,164(r3)
	PPC_STORE_U64(ctx.r3.u32 + 164, ctx.r11.u64);
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// stw r27,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r27.u32);
	// addi r8,r3,140
	ctx.r8.s64 = ctx.r3.s64 + 140;
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// sth r9,188(r3)
	PPC_STORE_U16(ctx.r3.u32 + 188, ctx.r9.u16);
	// stw r10,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r10.u32);
	// stw r23,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r23.u32);
	// std r11,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// stw r23,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r23.u32);
	// std r11,188(r3)
	PPC_STORE_U64(ctx.r3.u32 + 188, ctx.r11.u64);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// stw r23,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r23.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,116(r3)
	PPC_STORE_U64(ctx.r3.u32 + 116, ctx.r11.u64);
	// stw r23,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r23.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 128, ctx.r11.u64);
	// stw r23,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r23.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,140(r3)
	PPC_STORE_U64(ctx.r3.u32 + 140, ctx.r11.u64);
	// stw r23,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r23.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r11.u64);
	// stw r23,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r23.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,164(r3)
	PPC_STORE_U64(ctx.r3.u32 + 164, ctx.r11.u64);
	// stw r23,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r23.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r11.u64);
	// stw r23,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r23.u32);
	// ld r11,-9588(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r11,188(r3)
	PPC_STORE_U64(ctx.r3.u32 + 188, ctx.r11.u64);
	// stw r23,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, ctx.r23.u32);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119288"))) PPC_WEAK_FUNC(sub_83119288);
PPC_FUNC_IMPL(__imp__sub_83119288) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83119290;
	__savegprlr_26(ctx, base);
	// lis r6,-31772
	ctx.r6.s64 = -2082209792;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r4,65535
	ctx.r10.u64 = ctx.r4.u64 | 65535;
	// ld r8,-9524(r6)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -9524);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r28,r6,-9524
	ctx.r28.s64 = ctx.r6.s64 + -9524;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// li r9,255
	ctx.r9.s64 = 255;
	// lwz r7,-9540(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r8,r3,60
	ctx.r8.s64 = ctx.r3.s64 + 60;
	// lwz r7,-9540(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// addi r8,r3,84
	ctx.r8.s64 = ctx.r3.s64 + 84;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// ld r10,-9524(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + -9524);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// std r10,20(r3)
	PPC_STORE_U64(ctx.r3.u32 + 20, ctx.r10.u64);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// sth r29,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r29.u16);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lhz r10,-9524(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + -9524);
	// sth r10,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r10.u16);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwimi r4,r10,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r26,r10,0,14,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFC0000);
	// stw r26,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r26.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// lwz r4,48(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwimi r4,r10,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r26,r10,0,14,31
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r26.u64 & 0xFFFFFFFFFFFC0000);
	// stw r26,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r26.u32);
	// stb r9,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r9.u8);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// sth r29,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r29.u16);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lhz r10,-9524(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + -9524);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// stb r9,80(r3)
	PPC_STORE_U8(ctx.r3.u32 + 80, ctx.r9.u8);
	// sth r29,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r29.u16);
	// stw r27,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r27.u32);
	// stw r27,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r27.u32);
	// stw r27,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r27.u32);
	// stw r27,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r27.u32);
	// lhz r11,-9524(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + -9524);
	// sth r11,84(r3)
	PPC_STORE_U16(ctx.r3.u32 + 84, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// lwz r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r11,r7,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// stb r9,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r9.u8);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119448"))) PPC_WEAK_FUNC(sub_83119448);
PPC_FUNC_IMPL(__imp__sub_83119448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83119450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// oris r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 4294901760;
	// addi r10,r3,6
	ctx.r10.s64 = ctx.r3.s64 + 6;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r9,14
	ctx.r9.s64 = 14;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
loc_83119480:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// sth r11,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r11.u16);
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x83119480
	if (!cr0.lt) goto loc_83119480;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwz r7,-9540(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r10,r7,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r10,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// lwz r7,-9540(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r9.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r6,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r6.u32);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lwz r7,-9540(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r4,r7,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r6,-9540(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r4,r6,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r9.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// stw r4,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r4.u32);
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r8,-9540(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r30,r8,0,0,13
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r30.u64 & 0xFFFFFFFF0003FFFF);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r8,-9540(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r30,r8,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r29,r10,0,0,13
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r29.u64 & 0xFFFFFFFF0003FFFF);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r29,r10,0,14,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r29.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r28,r10,0,0,13
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r28.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r28.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// stw r4,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r4.u32);
	// bl 0x82f62f78
	ctx.lr = 0x83119578;
	sub_82F62F78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119584"))) PPC_WEAK_FUNC(sub_83119584);
PPC_FUNC_IMPL(__imp__sub_83119584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83119588"))) PPC_WEAK_FUNC(sub_83119588);
PPC_FUNC_IMPL(__imp__sub_83119588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83119590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,79
	ctx.r30.s64 = 79;
loc_831195A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83118eb0
	ctx.lr = 0x831195A8;
	sub_83118EB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,1856
	ctx.r29.s64 = ctx.r29.s64 + 1856;
	// bge 0x831195a0
	if (!cr0.lt) goto loc_831195A0;
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r29,r29,17408
	ctx.r29.s64 = ctx.r29.s64 + 17408;
loc_831195C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83119030
	ctx.lr = 0x831195C8;
	sub_83119030(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,200
	ctx.r29.s64 = ctx.r29.s64 + 200;
	// bge 0x831195c0
	if (!cr0.lt) goto loc_831195C0;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r3,r3,18608
	ctx.r3.s64 = ctx.r3.s64 + 18608;
	// bl 0x83119288
	ctx.lr = 0x831195E0;
	sub_83119288(ctx, base);
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// li r30,79
	ctx.r30.s64 = 79;
	// addi r29,r29,18716
	ctx.r29.s64 = ctx.r29.s64 + 18716;
loc_831195EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83118eb0
	ctx.lr = 0x831195F4;
	sub_83118EB0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,1856
	ctx.r29.s64 = ctx.r29.s64 + 1856;
	// bge 0x831195ec
	if (!cr0.lt) goto loc_831195EC;
	// addis r29,r31,5
	ctx.r29.s64 = ctx.r31.s64 + 327680;
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r29,r29,-29412
	ctx.r29.s64 = ctx.r29.s64 + -29412;
loc_8311960C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83119030
	ctx.lr = 0x83119614;
	sub_83119030(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,200
	ctx.r29.s64 = ctx.r29.s64 + 200;
	// bge 0x8311960c
	if (!cr0.lt) goto loc_8311960C;
	// addis r3,r31,5
	ctx.r3.s64 = ctx.r31.s64 + 327680;
	// addi r3,r3,-28212
	ctx.r3.s64 = ctx.r3.s64 + -28212;
	// bl 0x83119288
	ctx.lr = 0x8311962C;
	sub_83119288(ctx, base);
	// addis r30,r31,5
	ctx.r30.s64 = ctx.r31.s64 + 327680;
	// addi r30,r30,-28104
	ctx.r30.s64 = ctx.r30.s64 + -28104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83118eb0
	ctx.lr = 0x8311963C;
	sub_83118EB0(ctx, base);
	// lwz r10,1856(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1856);
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 4294901760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,1856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1856, ctx.r9.u32);
	// stb r11,1858(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1858, ctx.r11.u8);
	// stb r11,1859(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1859, ctx.r11.u8);
	// bl 0x82f21c90
	ctx.lr = 0x8311965C;
	sub_82F21C90(ctx, base);
	// lis r8,-31751
	ctx.r8.s64 = -2080833536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,30272(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 30272);
	// stw r11,1856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1856, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119674"))) PPC_WEAK_FUNC(sub_83119674);
PPC_FUNC_IMPL(__imp__sub_83119674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83119678"))) PPC_WEAK_FUNC(sub_83119678);
PPC_FUNC_IMPL(__imp__sub_83119678) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// b 0x83117fd8
	sub_83117FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119684"))) PPC_WEAK_FUNC(sub_83119684);
PPC_FUNC_IMPL(__imp__sub_83119684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83119688"))) PPC_WEAK_FUNC(sub_83119688);
PPC_FUNC_IMPL(__imp__sub_83119688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83119690;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,850
	ctx.r31.s64 = 850;
loc_831196A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83118668
	ctx.lr = 0x831196A8;
	sub_83118668(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,280
	ctx.r30.s64 = ctx.r30.s64 + 280;
	// bge 0x831196a0
	if (!cr0.lt) goto loc_831196A0;
	// li r10,100
	ctx.r10.s64 = 100;
	// addis r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 262144;
	// lis r28,-31772
	ctx.r28.s64 = -2082209792;
	// addi r11,r11,-23868
	ctx.r11.s64 = ctx.r11.s64 + -23868;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
loc_831196D4:
	// sth r27,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r27.u16);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lwz r10,-9540(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9540);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,-9540(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9540);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stwu r31,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x831196d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831196D4;
	// addis r29,r26,4
	ctx.r29.s64 = ctx.r26.s64 + 262144;
	// li r30,69
	ctx.r30.s64 = 69;
	// addi r29,r29,-21460
	ctx.r29.s64 = ctx.r29.s64 + -21460;
loc_83119704:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f05218
	ctx.lr = 0x8311970C;
	sub_82F05218(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,476
	ctx.r29.s64 = ctx.r29.s64 + 476;
	// bge 0x83119704
	if (!cr0.lt) goto loc_83119704;
	// addis r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 262144;
	// li r8,14
	ctx.r8.s64 = 14;
	// addi r10,r10,11860
	ctx.r10.s64 = ctx.r10.s64 + 11860;
	// addi r11,r10,-5
	ctx.r11.s64 = ctx.r10.s64 + -5;
	// addi r9,r10,-100
	ctx.r9.s64 = ctx.r10.s64 + -100;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_83119734:
	// stwu r10,100(r9)
	ea = 100 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lwz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17);
	// oris r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 4294901760;
	// stw r7,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r7.u32);
	// stb r31,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r31.u8);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// stw r10,25(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25, ctx.r10.u32);
	// lwz r6,37(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 37);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,37(r11)
	PPC_STORE_U32(ctx.r11.u32 + 37, ctx.r5.u32);
	// stb r31,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r31.u8);
	// stb r31,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r31.u8);
	// stw r10,45(r11)
	PPC_STORE_U32(ctx.r11.u32 + 45, ctx.r10.u32);
	// lwz r4,57(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 57);
	// oris r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 4294901760;
	// stw r3,57(r11)
	PPC_STORE_U32(ctx.r11.u32 + 57, ctx.r3.u32);
	// stb r31,59(r11)
	PPC_STORE_U8(ctx.r11.u32 + 59, ctx.r31.u8);
	// stb r31,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r31.u8);
	// stw r10,65(r11)
	PPC_STORE_U32(ctx.r11.u32 + 65, ctx.r10.u32);
	// lwz r8,77(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 77);
	// oris r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 4294901760;
	// stw r7,77(r11)
	PPC_STORE_U32(ctx.r11.u32 + 77, ctx.r7.u32);
	// stb r31,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r31.u8);
	// stb r31,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r31.u8);
	// stw r10,85(r11)
	PPC_STORE_U32(ctx.r11.u32 + 85, ctx.r10.u32);
	// lwz r6,97(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 97);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,97(r11)
	PPC_STORE_U32(ctx.r11.u32 + 97, ctx.r5.u32);
	// stb r31,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r31.u8);
	// stbu r31,100(r11)
	ea = 100 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83119734
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83119734;
	// addis r9,r26,4
	ctx.r9.s64 = ctx.r26.s64 + 262144;
	// li r8,14
	ctx.r8.s64 = 14;
	// addi r9,r9,13260
	ctx.r9.s64 = ctx.r9.s64 + 13260;
	// addi r11,r9,-5
	ctx.r11.s64 = ctx.r9.s64 + -5;
	// addi r9,r9,-100
	ctx.r9.s64 = ctx.r9.s64 + -100;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_831197C8:
	// stwu r10,100(r9)
	ea = 100 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lwz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17);
	// oris r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 4294901760;
	// stw r7,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r7.u32);
	// stb r31,19(r11)
	PPC_STORE_U8(ctx.r11.u32 + 19, ctx.r31.u8);
	// stb r31,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r31.u8);
	// stw r10,25(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25, ctx.r10.u32);
	// lwz r6,37(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 37);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,37(r11)
	PPC_STORE_U32(ctx.r11.u32 + 37, ctx.r5.u32);
	// stb r31,39(r11)
	PPC_STORE_U8(ctx.r11.u32 + 39, ctx.r31.u8);
	// stb r31,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r31.u8);
	// stw r10,45(r11)
	PPC_STORE_U32(ctx.r11.u32 + 45, ctx.r10.u32);
	// lwz r4,57(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 57);
	// oris r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 4294901760;
	// stw r3,57(r11)
	PPC_STORE_U32(ctx.r11.u32 + 57, ctx.r3.u32);
	// stb r31,59(r11)
	PPC_STORE_U8(ctx.r11.u32 + 59, ctx.r31.u8);
	// stb r31,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r31.u8);
	// stw r10,65(r11)
	PPC_STORE_U32(ctx.r11.u32 + 65, ctx.r10.u32);
	// lwz r8,77(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 77);
	// oris r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 4294901760;
	// stw r7,77(r11)
	PPC_STORE_U32(ctx.r11.u32 + 77, ctx.r7.u32);
	// stb r31,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r31.u8);
	// stb r31,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r31.u8);
	// stw r10,85(r11)
	PPC_STORE_U32(ctx.r11.u32 + 85, ctx.r10.u32);
	// lwz r6,97(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 97);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,97(r11)
	PPC_STORE_U32(ctx.r11.u32 + 97, ctx.r5.u32);
	// stb r31,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r31.u8);
	// stbu r31,100(r11)
	ea = 100 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x831197c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831197C8;
	// addis r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 262144;
	// addi r3,r3,14664
	ctx.r3.s64 = ctx.r3.s64 + 14664;
	// bl 0x83118708
	ctx.lr = 0x83119850;
	sub_83118708(ctx, base);
	// li r10,70
	ctx.r10.s64 = 70;
	// addis r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 262144;
	// addi r11,r11,17016
	ctx.r11.s64 = ctx.r11.s64 + 17016;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83119860:
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// sth r27,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r27.u16);
	// lwz r10,-9540(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9540);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,-9540(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9540);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stwu r31,24(r11)
	ea = 24 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83119860
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83119860;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83073130
	ctx.lr = 0x8311988C;
	sub_83073130(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119898"))) PPC_WEAK_FUNC(sub_83119898);
PPC_FUNC_IMPL(__imp__sub_83119898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x831198A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// oris r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 4294901760;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r27,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r27.u8);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stb r27,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r27.u8);
loc_831198CC:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lis r11,-32004
	ctx.r11.s64 = -2097414144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r11,840
	ctx.r6.s64 = ctx.r11.s64 + 840;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x823fca98
	ctx.lr = 0x831198E8;
	sub_823FCA98(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,772
	ctx.r31.s64 = ctx.r31.s64 + 772;
	// bge 0x831198cc
	if (!cr0.lt) goto loc_831198CC;
	// li r10,198
	ctx.r10.s64 = 198;
	// addi r11,r30,1556
	ctx.r11.s64 = ctx.r30.s64 + 1556;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_8311990C:
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// sth r10,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r10.u16);
	// stwu r27,36(r11)
	ea = 36 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8311990c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311990C;
	// sth r10,8684(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8684, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,8688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8688, ctx.r27.u32);
	// bl 0x82f21358
	ctx.lr = 0x83119930;
	sub_82F21358(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311993C"))) PPC_WEAK_FUNC(sub_8311993C);
PPC_FUNC_IMPL(__imp__sub_8311993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83119940"))) PPC_WEAK_FUNC(sub_83119940);
PPC_FUNC_IMPL(__imp__sub_83119940) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82b00d00
	ctx.lr = 0x8311995C;
	sub_82B00D00(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r9,60
	ctx.r9.s64 = 60;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// addi r10,r31,260
	ctx.r10.s64 = ctx.r31.s64 + 260;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r10,r31,788
	ctx.r10.s64 = ctx.r31.s64 + 788;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
loc_83119990:
	// stwu r11,48(r10)
	ea = 48 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83119990
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83119990;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r11,3716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3716, ctx.r11.u32);
	// addi r10,r31,3768
	ctx.r10.s64 = ctx.r31.s64 + 3768;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831199A8:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x831199a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831199A8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3856
	ctx.r3.s64 = ctx.r31.s64 + 3856;
	// bl 0x831cdcf0
	ctx.lr = 0x831199C0;
	sub_831CDCF0(ctx, base);
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

__attribute__((alias("__imp__sub_831199D8"))) PPC_WEAK_FUNC(sub_831199D8);
PPC_FUNC_IMPL(__imp__sub_831199D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x831199E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,25001
	ctx.r10.s64 = 25001;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// lis r8,8738
	ctx.r8.s64 = 572653568;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-31068
	ctx.r11.s64 = ctx.r11.s64 + -31068;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,8738
	ctx.r10.s64 = 572653568;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r9,r10,8704
	ctx.r9.u64 = ctx.r10.u64 | 8704;
	// ori r10,r8,8738
	ctx.r10.u64 = ctx.r8.u64 | 8738;
loc_83119A0C:
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stb r31,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r31.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x83119a0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83119A0C;
	// li r9,50
	ctx.r9.s64 = 50;
	// addis r10,r29,5
	ctx.r10.s64 = ctx.r29.s64 + 327680;
	// addi r10,r10,-27668
	ctx.r10.s64 = ctx.r10.s64 + -27668;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-495
	ctx.r11.s64 = ctx.r10.s64 + -495;
	// addi r10,r10,-516
	ctx.r10.s64 = ctx.r10.s64 + -516;
	// ori r30,r9,65535
	ctx.r30.u64 = ctx.r9.u64 | 65535;
loc_83119A48:
	// sthu r30,516(r10)
	ea = 516 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r30.u16);
	ctx.r10.u32 = ea;
	// stw r31,499(r11)
	PPC_STORE_U32(ctx.r11.u32 + 499, ctx.r31.u32);
	// stb r31,503(r11)
	PPC_STORE_U8(ctx.r11.u32 + 503, ctx.r31.u8);
	// stb r31,504(r11)
	PPC_STORE_U8(ctx.r11.u32 + 504, ctx.r31.u8);
	// stb r31,505(r11)
	PPC_STORE_U8(ctx.r11.u32 + 505, ctx.r31.u8);
	// stb r31,506(r11)
	PPC_STORE_U8(ctx.r11.u32 + 506, ctx.r31.u8);
	// stb r31,507(r11)
	PPC_STORE_U8(ctx.r11.u32 + 507, ctx.r31.u8);
	// stb r31,508(r11)
	PPC_STORE_U8(ctx.r11.u32 + 508, ctx.r31.u8);
	// stb r31,509(r11)
	PPC_STORE_U8(ctx.r11.u32 + 509, ctx.r31.u8);
	// stb r31,510(r11)
	PPC_STORE_U8(ctx.r11.u32 + 510, ctx.r31.u8);
	// stb r31,511(r11)
	PPC_STORE_U8(ctx.r11.u32 + 511, ctx.r31.u8);
	// stb r31,512(r11)
	PPC_STORE_U8(ctx.r11.u32 + 512, ctx.r31.u8);
	// stb r31,513(r11)
	PPC_STORE_U8(ctx.r11.u32 + 513, ctx.r31.u8);
	// stb r31,514(r11)
	PPC_STORE_U8(ctx.r11.u32 + 514, ctx.r31.u8);
	// stb r31,515(r11)
	PPC_STORE_U8(ctx.r11.u32 + 515, ctx.r31.u8);
	// stbu r31,516(r11)
	ea = 516 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83119a48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83119A48;
	// addis r3,r29,5
	ctx.r3.s64 = ctx.r29.s64 + 327680;
	// addi r3,r3,-1868
	ctx.r3.s64 = ctx.r3.s64 + -1868;
	// bl 0x831187e8
	ctx.lr = 0x83119A98;
	sub_831187E8(ctx, base);
	// addis r11,r29,5
	ctx.r11.s64 = ctx.r29.s64 + 327680;
	// li r4,49
	ctx.r4.s64 = 49;
	// addi r11,r11,940
	ctx.r11.s64 = ctx.r11.s64 + 940;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
loc_83119AA8:
	// li r9,90
	ctx.r9.s64 = 90;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// ld r8,-9588(r5)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r5.u32 + -9588);
	// addi r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 9;
	// stb r31,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r31.u8);
	// addi r6,r11,99
	ctx.r6.s64 = ctx.r11.s64 + 99;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83119AD0:
	// stbx r31,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r31.u8);
	// stbx r31,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x83119ad0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83119AD0;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// bge 0x83119aa8
	if (!cr0.lt) goto loc_83119AA8;
	// addis r11,r29,5
	ctx.r11.s64 = ctx.r29.s64 + 327680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,10544
	ctx.r11.s64 = ctx.r11.s64 + 10544;
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83119B08"))) PPC_WEAK_FUNC(sub_83119B08);
PPC_FUNC_IMPL(__imp__sub_83119B08) {
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
	// addis r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 15728640;
	// addi r3,r3,10296
	ctx.r3.s64 = ctx.r3.s64 + 10296;
	// bl 0x83102db0
	ctx.lr = 0x83119B28;
	sub_83102DB0(ctx, base);
	// addis r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 15728640;
	// addi r3,r3,-3492
	ctx.r3.s64 = ctx.r3.s64 + -3492;
	// bl 0x83102db0
	ctx.lr = 0x83119B34;
	sub_83102DB0(ctx, base);
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x83102db0
	ctx.lr = 0x83119B40;
	sub_83102DB0(ctx, base);
	// addis r3,r31,221
	ctx.r3.s64 = ctx.r31.s64 + 14483456;
	// addi r3,r3,-18780
	ctx.r3.s64 = ctx.r3.s64 + -18780;
	// bl 0x83102db0
	ctx.lr = 0x83119B4C;
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

__attribute__((alias("__imp__sub_83119B60"))) PPC_WEAK_FUNC(sub_83119B60);
PPC_FUNC_IMPL(__imp__sub_83119B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83119B68;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r9,95
	ctx.r9.s64 = 6225920;
	// lis r8,95
	ctx.r8.s64 = 6225920;
	// lis r7,237
	ctx.r7.s64 = 15532032;
	// lis r6,204
	ctx.r6.s64 = 13369344;
	// ori r5,r11,60636
	ctx.r5.u64 = ctx.r11.u64 | 60636;
	// ori r4,r10,60640
	ctx.r4.u64 = ctx.r10.u64 | 60640;
	// ori r11,r9,60644
	ctx.r11.u64 = ctx.r9.u64 | 60644;
	// ori r10,r8,60648
	ctx.r10.u64 = ctx.r8.u64 | 60648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r7,19680
	ctx.r9.u64 = ctx.r7.u64 | 19680;
	// ori r8,r6,33992
	ctx.r8.u64 = ctx.r6.u64 | 33992;
	// li r27,0
	ctx.r27.s64 = 0;
	// addis r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 6291456;
	// stwx r27,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r27.u32);
	// stwx r27,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r27.u32);
	// addi r3,r3,-7392
	ctx.r3.s64 = ctx.r3.s64 + -7392;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// stwx r27,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u32);
	// stwx r27,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r27.u32);
	// stwx r27,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u32);
	// bl 0x82e59148
	ctx.lr = 0x83119BC8;
	sub_82E59148(ctx, base);
	// addis r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 6291456;
	// li r5,548
	ctx.r5.s64 = 548;
	// addi r30,r30,-6080
	ctx.r30.s64 = ctx.r30.s64 + -6080;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83119BE0;
	sub_831CDCF0(ctx, base);
	// li r11,58
	ctx.r11.s64 = 58;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 + 96;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_83119BF8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83119bf8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83119BF8;
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,540(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// addis r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 6291456;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// rlwinm r8,r11,0,9,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// oris r7,r9,65535
	ctx.r7.u64 = ctx.r9.u64 | 4294901760;
	// sth r29,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// sth r29,78(r30)
	PPC_STORE_U16(ctx.r30.u32 + 78, ctx.r29.u16);
	// addi r3,r3,-5532
	ctx.r3.s64 = ctx.r3.s64 + -5532;
	// sth r29,80(r30)
	PPC_STORE_U16(ctx.r30.u32 + 80, ctx.r29.u16);
	// sth r29,82(r30)
	PPC_STORE_U16(ctx.r30.u32 + 82, ctx.r29.u16);
	// sth r29,84(r30)
	PPC_STORE_U16(ctx.r30.u32 + 84, ctx.r29.u16);
	// sth r29,86(r30)
	PPC_STORE_U16(ctx.r30.u32 + 86, ctx.r29.u16);
	// stw r8,536(r30)
	PPC_STORE_U32(ctx.r30.u32 + 536, ctx.r8.u32);
	// stw r7,540(r30)
	PPC_STORE_U32(ctx.r30.u32 + 540, ctx.r7.u32);
	// bl 0x82d8cb50
	ctx.lr = 0x83119C44;
	sub_82D8CB50(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// li r30,21097
	ctx.r30.s64 = 21097;
loc_83119C4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b00b98
	ctx.lr = 0x83119C54;
	sub_82B00B98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,224
	ctx.r28.s64 = ctx.r28.s64 + 224;
	// bne 0x83119c4c
	if (!cr0.eq) goto loc_83119C4C;
	// addis r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 4718592;
	// li r30,653
	ctx.r30.s64 = 653;
	// addi r28,r28,7136
	ctx.r28.s64 = ctx.r28.s64 + 7136;
loc_83119C6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e59148
	ctx.lr = 0x83119C74;
	sub_82E59148(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,1312
	ctx.r28.s64 = ctx.r28.s64 + 1312;
	// bne 0x83119c6c
	if (!cr0.eq) goto loc_83119C6C;
	// addis r28,r31,88
	ctx.r28.s64 = ctx.r31.s64 + 5767168;
	// li r30,850
	ctx.r30.s64 = 850;
	// addi r28,r28,-20304
	ctx.r28.s64 = ctx.r28.s64 + -20304;
loc_83119C8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d8cb50
	ctx.lr = 0x83119C94;
	sub_82D8CB50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,632
	ctx.r28.s64 = ctx.r28.s64 + 632;
	// bne 0x83119c8c
	if (!cr0.eq) goto loc_83119C8C;
	// addis r30,r31,85
	ctx.r30.s64 = ctx.r31.s64 + 5570560;
	// li r26,300
	ctx.r26.s64 = 300;
	// addi r30,r30,11982
	ctx.r30.s64 = ctx.r30.s64 + 11982;
loc_83119CAC:
	// addi r28,r30,-78
	ctx.r28.s64 = ctx.r30.s64 + -78;
	// li r5,548
	ctx.r5.s64 = 548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83119CC0;
	sub_831CDCF0(ctx, base);
	// li r10,58
	ctx.r10.s64 = 58;
	// addi r11,r30,14
	ctx.r11.s64 = ctx.r30.s64 + 14;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83119CD0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83119cd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83119CD0;
	// lwz r11,458(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 458);
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// lwz r10,462(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 462);
	// rlwinm r9,r11,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// sth r29,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// oris r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 4294901760;
	// sth r29,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// sth r29,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r29.u16);
	// sth r29,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r29.u16);
	// sth r29,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r29.u16);
	// stw r9,458(r30)
	PPC_STORE_U32(ctx.r30.u32 + 458, ctx.r9.u32);
	// stw r8,462(r30)
	PPC_STORE_U32(ctx.r30.u32 + 462, ctx.r8.u32);
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// sth r29,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r29.u16);
	// bne 0x83119cac
	if (!cr0.eq) goto loc_83119CAC;
	// addis r29,r31,99
	ctx.r29.s64 = ctx.r31.s64 + 6488064;
	// li r30,1500
	ctx.r30.s64 = 1500;
	// addi r29,r29,11884
	ctx.r29.s64 = ctx.r29.s64 + 11884;
loc_83119D20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f20778
	ctx.lr = 0x83119D28;
	sub_82F20778(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,520
	ctx.r29.s64 = ctx.r29.s64 + 520;
	// bne 0x83119d20
	if (!cr0.eq) goto loc_83119D20;
	// addis r29,r31,111
	ctx.r29.s64 = ctx.r31.s64 + 7274496;
	// li r30,9000
	ctx.r30.s64 = 9000;
	// addi r29,r29,5452
	ctx.r29.s64 = ctx.r29.s64 + 5452;
loc_83119D40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f208e8
	ctx.lr = 0x83119D48;
	sub_82F208E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,588
	ctx.r29.s64 = ctx.r29.s64 + 588;
	// bne 0x83119d40
	if (!cr0.eq) goto loc_83119D40;
	// addis r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x82f20a80
	ctx.lr = 0x83119D60;
	sub_82F20A80(ctx, base);
	// addis r29,r31,195
	ctx.r29.s64 = ctx.r31.s64 + 12779520;
	// li r30,300
	ctx.r30.s64 = 300;
	// addi r29,r29,-13384
	ctx.r29.s64 = ctx.r29.s64 + -13384;
loc_83119D6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f20be0
	ctx.lr = 0x83119D74;
	sub_82F20BE0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,2124
	ctx.r29.s64 = ctx.r29.s64 + 2124;
	// bne 0x83119d6c
	if (!cr0.eq) goto loc_83119D6C;
	// addis r3,r31,221
	ctx.r3.s64 = ctx.r31.s64 + 14483456;
	// addi r3,r3,-26512
	ctx.r3.s64 = ctx.r3.s64 + -26512;
	// bl 0x82f21060
	ctx.lr = 0x83119D8C;
	sub_82F21060(ctx, base);
	// addis r3,r31,222
	ctx.r3.s64 = ctx.r31.s64 + 14548992;
	// addi r3,r3,-12208
	ctx.r3.s64 = ctx.r3.s64 + -12208;
	// bl 0x83132aa8
	ctx.lr = 0x83119D98;
	sub_83132AA8(ctx, base);
	// addis r3,r31,222
	ctx.r3.s64 = ctx.r31.s64 + 14548992;
	// addi r3,r3,-8464
	ctx.r3.s64 = ctx.r3.s64 + -8464;
	// bl 0x82f233f0
	ctx.lr = 0x83119DA4;
	sub_82F233F0(ctx, base);
	// addis r3,r31,229
	ctx.r3.s64 = ctx.r31.s64 + 15007744;
	// addi r3,r3,-6536
	ctx.r3.s64 = ctx.r3.s64 + -6536;
	// bl 0x82f21b40
	ctx.lr = 0x83119DB0;
	sub_82F21B40(ctx, base);
	// addis r3,r31,231
	ctx.r3.s64 = ctx.r31.s64 + 15138816;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x82f22c90
	ctx.lr = 0x83119DBC;
	sub_82F22C90(ctx, base);
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x831286d8
	ctx.lr = 0x83119DC8;
	sub_831286D8(ctx, base);
	// addis r3,r31,205
	ctx.r3.s64 = ctx.r31.s64 + 13434880;
	// addi r3,r3,-18420
	ctx.r3.s64 = ctx.r3.s64 + -18420;
	// bl 0x83073130
	ctx.lr = 0x83119DD4;
	sub_83073130(ctx, base);
	// addis r3,r31,209
	ctx.r3.s64 = ctx.r31.s64 + 13697024;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bl 0x830732d8
	ctx.lr = 0x83119DE0;
	sub_830732D8(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r9,95
	ctx.r9.s64 = 6225920;
	// ori r8,r11,60652
	ctx.r8.u64 = ctx.r11.u64 | 60652;
	// ori r7,r10,60656
	ctx.r7.u64 = ctx.r10.u64 | 60656;
	// ori r6,r9,60660
	ctx.r6.u64 = ctx.r9.u64 | 60660;
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// li r5,5440
	ctx.r5.s64 = 5440;
	// addi r3,r3,5132
	ctx.r3.s64 = ctx.r3.s64 + 5132;
	// stwx r27,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r27,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u32);
	// stwx r27,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119E18;
	sub_831CDCF0(ctx, base);
	// lis r4,236
	ctx.r4.s64 = 15466496;
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// ori r11,r4,10572
	ctx.r11.u64 = ctx.r4.u64 | 10572;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,10576
	ctx.r3.s64 = ctx.r3.s64 + 10576;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119E38;
	sub_831CDCF0(ctx, base);
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// ori r9,r10,10656
	ctx.r9.u64 = ctx.r10.u64 | 10656;
	// li r5,1284
	ctx.r5.s64 = 1284;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,10660
	ctx.r3.s64 = ctx.r3.s64 + 10660;
	// stwx r27,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119E58;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// li r5,7200
	ctx.r5.s64 = 7200;
	// addi r3,r3,11944
	ctx.r3.s64 = ctx.r3.s64 + 11944;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83119E6C;
	sub_831CDCF0(ctx, base);
	// lis r8,236
	ctx.r8.s64 = 15466496;
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// ori r7,r8,19144
	ctx.r7.u64 = ctx.r8.u64 | 19144;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19148
	ctx.r3.s64 = ctx.r3.s64 + 19148;
	// stwx r27,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119E8C;
	sub_831CDCF0(ctx, base);
	// lis r6,236
	ctx.r6.s64 = 15466496;
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// ori r11,r6,19248
	ctx.r11.u64 = ctx.r6.u64 | 19248;
	// li r5,4644
	ctx.r5.s64 = 4644;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19252
	ctx.r3.s64 = ctx.r3.s64 + 19252;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119EAC;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// li r5,10800
	ctx.r5.s64 = 10800;
	// addi r3,r3,23896
	ctx.r3.s64 = ctx.r3.s64 + 23896;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83119EC0;
	sub_831CDCF0(ctx, base);
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// ori r9,r10,34696
	ctx.r9.u64 = ctx.r10.u64 | 34696;
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-30836
	ctx.r3.s64 = ctx.r3.s64 + -30836;
	// stwx r27,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119EE0;
	sub_831CDCF0(ctx, base);
	// lis r8,236
	ctx.r8.s64 = 15466496;
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// ori r7,r8,34900
	ctx.r7.u64 = ctx.r8.u64 | 34900;
	// addi r3,r3,-30632
	ctx.r3.s64 = ctx.r3.s64 + -30632;
	// li r5,10800
	ctx.r5.s64 = 10800;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r27,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119F00;
	sub_831CDCF0(ctx, base);
	// lis r6,236
	ctx.r6.s64 = 15466496;
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// ori r11,r6,45704
	ctx.r11.u64 = ctx.r6.u64 | 45704;
	// li r5,200
	ctx.r5.s64 = 200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-19828
	ctx.r3.s64 = ctx.r3.s64 + -19828;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119F20;
	sub_831CDCF0(ctx, base);
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// addis r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 6291456;
	// ori r9,r10,45908
	ctx.r9.u64 = ctx.r10.u64 | 45908;
	// addi r3,r3,-4872
	ctx.r3.s64 = ctx.r3.s64 + -4872;
	// stwx r27,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r27.u32);
	// bl 0x83132c68
	ctx.lr = 0x83119F38;
	sub_83132C68(ctx, base);
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// li r5,30400
	ctx.r5.s64 = 30400;
	// addi r3,r3,-19624
	ctx.r3.s64 = ctx.r3.s64 + -19624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83119F4C;
	sub_831CDCF0(ctx, base);
	// lis r8,237
	ctx.r8.s64 = 15532032;
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// ori r7,r8,10776
	ctx.r7.u64 = ctx.r8.u64 | 10776;
	// addi r3,r3,10780
	ctx.r3.s64 = ctx.r3.s64 + 10780;
	// li r5,2400
	ctx.r5.s64 = 2400;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r27,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119F6C;
	sub_831CDCF0(ctx, base);
	// lis r6,237
	ctx.r6.s64 = 15532032;
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// ori r11,r6,13180
	ctx.r11.u64 = ctx.r6.u64 | 13180;
	// addi r3,r3,14080
	ctx.r3.s64 = ctx.r3.s64 + 14080;
	// li r5,5600
	ctx.r5.s64 = 5600;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x83119F8C;
	sub_831CDCF0(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,40068
	ctx.r5.u64 = ctx.r5.u64 | 40068;
	// addi r3,r3,19684
	ctx.r3.s64 = ctx.r3.s64 + 19684;
	// bl 0x831cdcf0
	ctx.lr = 0x83119FA4;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-5784
	ctx.r3.s64 = ctx.r3.s64 + -5784;
	// bl 0x831cdcf0
	ctx.lr = 0x83119FB8;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// addi r3,r3,-3772
	ctx.r3.s64 = ctx.r3.s64 + -3772;
	// bl 0x82e59148
	ctx.lr = 0x83119FC4;
	sub_82E59148(ctx, base);
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// addi r3,r3,-2460
	ctx.r3.s64 = ctx.r3.s64 + -2460;
	// bl 0x82d8cb50
	ctx.lr = 0x83119FD0;
	sub_82D8CB50(ctx, base);
	// addis r29,r31,238
	ctx.r29.s64 = ctx.r31.s64 + 15597568;
	// li r30,32
	ctx.r30.s64 = 32;
	// addi r29,r29,-1828
	ctx.r29.s64 = ctx.r29.s64 + -1828;
loc_83119FDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b00b98
	ctx.lr = 0x83119FE4;
	sub_82B00B98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// bne 0x83119fdc
	if (!cr0.eq) goto loc_83119FDC;
	// addis r30,r31,214
	ctx.r30.s64 = ctx.r31.s64 + 14024704;
	// li r24,72
	ctx.r24.s64 = 72;
	// addi r30,r30,10904
	ctx.r30.s64 = ctx.r30.s64 + 10904;
	// lis r23,-31751
	ctx.r23.s64 = -2080833536;
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
	// lis r25,-31772
	ctx.r25.s64 = -2082209792;
loc_8311A008:
	// addi r27,r30,-8
	ctx.r27.s64 = ctx.r30.s64 + -8;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311A01C;
	sub_831CDCF0(ctx, base);
	// ld r11,-9588(r25)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r25.u32 + -9588);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// li r29,31
	ctx.r29.s64 = 31;
	// std r11,-8(r30)
	PPC_STORE_U64(ctx.r30.u32 + -8, ctx.r11.u64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,-9540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9540);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,-9540(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -9540);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_8311A04C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f62f78
	ctx.lr = 0x8311A054;
	sub_82F62F78(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,188
	ctx.r28.s64 = ctx.r28.s64 + 188;
	// bne 0x8311a04c
	if (!cr0.eq) goto loc_8311A04C;
	// lwz r11,30272(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 30272);
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// addi r30,r30,5852
	ctx.r30.s64 = ctx.r30.s64 + 5852;
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// bne 0x8311a008
	if (!cr0.eq) goto loc_8311A008;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b65698
	ctx.lr = 0x8311A07C;
	sub_82B65698(ctx, base);
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// addi r3,r3,12260
	ctx.r3.s64 = ctx.r3.s64 + 12260;
	// bl 0x83132130
	ctx.lr = 0x8311A088;
	sub_83132130(ctx, base);
	// addis r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 15728640;
	// addi r3,r3,-3492
	ctx.r3.s64 = ctx.r3.s64 + -3492;
	// bl 0x83129f98
	ctx.lr = 0x8311A094;
	sub_83129F98(ctx, base);
	// addis r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 15728640;
	// addi r3,r3,10296
	ctx.r3.s64 = ctx.r3.s64 + 10296;
	// bl 0x8312dea8
	ctx.lr = 0x8311A0A0;
	sub_8312DEA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A0A8"))) PPC_WEAK_FUNC(sub_8311A0A8);
PPC_FUNC_IMPL(__imp__sub_8311A0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8311A0B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,21097
	ctx.r31.s64 = 21097;
loc_8311A0C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b00b98
	ctx.lr = 0x8311A0CC;
	sub_82B00B98(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// bne 0x8311a0c4
	if (!cr0.eq) goto loc_8311A0C4;
	// addis r30,r23,72
	ctx.r30.s64 = ctx.r23.s64 + 4718592;
	// li r31,653
	ctx.r31.s64 = 653;
	// addi r30,r30,7136
	ctx.r30.s64 = ctx.r30.s64 + 7136;
loc_8311A0E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e59148
	ctx.lr = 0x8311A0EC;
	sub_82E59148(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// bne 0x8311a0e4
	if (!cr0.eq) goto loc_8311A0E4;
	// addis r30,r23,88
	ctx.r30.s64 = ctx.r23.s64 + 5767168;
	// li r31,850
	ctx.r31.s64 = 850;
	// addi r30,r30,-20304
	ctx.r30.s64 = ctx.r30.s64 + -20304;
loc_8311A104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8cb50
	ctx.lr = 0x8311A10C;
	sub_82D8CB50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// bne 0x8311a104
	if (!cr0.eq) goto loc_8311A104;
	// addis r31,r23,85
	ctx.r31.s64 = ctx.r23.s64 + 5570560;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,300
	ctx.r28.s64 = 300;
	// addi r31,r31,11982
	ctx.r31.s64 = ctx.r31.s64 + 11982;
	// li r27,-1
	ctx.r27.s64 = -1;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_8311A130:
	// addi r29,r31,-78
	ctx.r29.s64 = ctx.r31.s64 + -78;
	// li r5,548
	ctx.r5.s64 = 548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311A144;
	sub_831CDCF0(ctx, base);
	// li r10,58
	ctx.r10.s64 = 58;
	// addi r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 + 14;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311A154:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8311a154
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311A154;
	// lwz r11,458(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 458);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lwz r10,462(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 462);
	// rlwinm r9,r11,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// oris r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 4294901760;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// stw r9,458(r31)
	PPC_STORE_U32(ctx.r31.u32 + 458, ctx.r9.u32);
	// stw r8,462(r31)
	PPC_STORE_U32(ctx.r31.u32 + 462, ctx.r8.u32);
	// addi r31,r31,548
	ctx.r31.s64 = ctx.r31.s64 + 548;
	// sth r30,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r30.u16);
	// bne 0x8311a130
	if (!cr0.eq) goto loc_8311A130;
	// addis r30,r23,99
	ctx.r30.s64 = ctx.r23.s64 + 6488064;
	// li r31,1500
	ctx.r31.s64 = 1500;
	// addi r30,r30,11884
	ctx.r30.s64 = ctx.r30.s64 + 11884;
loc_8311A1A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20778
	ctx.lr = 0x8311A1AC;
	sub_82F20778(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// bne 0x8311a1a4
	if (!cr0.eq) goto loc_8311A1A4;
	// addis r30,r23,111
	ctx.r30.s64 = ctx.r23.s64 + 7274496;
	// li r31,9000
	ctx.r31.s64 = 9000;
	// addi r30,r30,5452
	ctx.r30.s64 = ctx.r30.s64 + 5452;
loc_8311A1C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f208e8
	ctx.lr = 0x8311A1CC;
	sub_82F208E8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// bne 0x8311a1c4
	if (!cr0.eq) goto loc_8311A1C4;
	// addis r3,r23,192
	ctx.r3.s64 = ctx.r23.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x82f20a80
	ctx.lr = 0x8311A1E4;
	sub_82F20A80(ctx, base);
	// addis r30,r23,195
	ctx.r30.s64 = ctx.r23.s64 + 12779520;
	// li r31,300
	ctx.r31.s64 = 300;
	// addi r30,r30,-13384
	ctx.r30.s64 = ctx.r30.s64 + -13384;
loc_8311A1F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20be0
	ctx.lr = 0x8311A1F8;
	sub_82F20BE0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// bne 0x8311a1f0
	if (!cr0.eq) goto loc_8311A1F0;
	// lis r11,204
	ctx.r11.s64 = 13369344;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r10,r11,33992
	ctx.r10.u64 = ctx.r11.u64 | 33992;
	// addis r31,r23,214
	ctx.r31.s64 = ctx.r23.s64 + 14024704;
	// li r25,72
	ctx.r25.s64 = 72;
	// addi r31,r31,10904
	ctx.r31.s64 = ctx.r31.s64 + 10904;
	// lis r24,-31751
	ctx.r24.s64 = -2080833536;
	// stwx r22,r23,r10
	PPC_STORE_U32(ctx.r23.u32 + ctx.r10.u32, ctx.r22.u32);
	// lis r27,-31772
	ctx.r27.s64 = -2082209792;
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
loc_8311A22C:
	// addi r28,r31,-8
	ctx.r28.s64 = ctx.r31.s64 + -8;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311A240;
	sub_831CDCF0(ctx, base);
	// ld r11,-9588(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + -9588);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// li r30,31
	ctx.r30.s64 = 31;
	// std r11,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r11.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-9540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9540);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,-9540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9540);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_8311A270:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f62f78
	ctx.lr = 0x8311A278;
	sub_82F62F78(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// bne 0x8311a270
	if (!cr0.eq) goto loc_8311A270;
	// lwz r11,30272(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30272);
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r31,r31,5852
	ctx.r31.s64 = ctx.r31.s64 + 5852;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// bne 0x8311a22c
	if (!cr0.eq) goto loc_8311A22C;
	// lbz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311a2bc
	if (!cr6.eq) goto loc_8311A2BC;
	// addis r3,r23,221
	ctx.r3.s64 = ctx.r23.s64 + 14483456;
	// addi r3,r3,-26512
	ctx.r3.s64 = ctx.r3.s64 + -26512;
	// bl 0x82f21060
	ctx.lr = 0x8311A2B0;
	sub_82F21060(ctx, base);
	// addis r3,r23,222
	ctx.r3.s64 = ctx.r23.s64 + 14548992;
	// addi r3,r3,-8464
	ctx.r3.s64 = ctx.r3.s64 + -8464;
	// bl 0x82f233f0
	ctx.lr = 0x8311A2BC;
	sub_82F233F0(ctx, base);
loc_8311A2BC:
	// addis r3,r23,229
	ctx.r3.s64 = ctx.r23.s64 + 15007744;
	// addi r3,r3,-6536
	ctx.r3.s64 = ctx.r3.s64 + -6536;
	// bl 0x82f21b40
	ctx.lr = 0x8311A2C8;
	sub_82F21B40(ctx, base);
	// addis r3,r23,222
	ctx.r3.s64 = ctx.r23.s64 + 14548992;
	// addi r3,r3,-12208
	ctx.r3.s64 = ctx.r3.s64 + -12208;
	// bl 0x83132aa8
	ctx.lr = 0x8311A2D4;
	sub_83132AA8(ctx, base);
	// addis r3,r23,231
	ctx.r3.s64 = ctx.r23.s64 + 15138816;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x82f22c90
	ctx.lr = 0x8311A2E0;
	sub_82F22C90(ctx, base);
	// addis r3,r23,236
	ctx.r3.s64 = ctx.r23.s64 + 15466496;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x831286d8
	ctx.lr = 0x8311A2EC;
	sub_831286D8(ctx, base);
	// addis r3,r23,209
	ctx.r3.s64 = ctx.r23.s64 + 13697024;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bl 0x830732d8
	ctx.lr = 0x8311A2F8;
	sub_830732D8(ctx, base);
	// addis r3,r23,205
	ctx.r3.s64 = ctx.r23.s64 + 13434880;
	// addi r3,r3,-18420
	ctx.r3.s64 = ctx.r3.s64 + -18420;
	// bl 0x83073130
	ctx.lr = 0x8311A304;
	sub_83073130(ctx, base);
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r9,95
	ctx.r9.s64 = 6225920;
	// ori r8,r11,60652
	ctx.r8.u64 = ctx.r11.u64 | 60652;
	// ori r7,r10,60656
	ctx.r7.u64 = ctx.r10.u64 | 60656;
	// ori r6,r9,60660
	ctx.r6.u64 = ctx.r9.u64 | 60660;
	// addis r3,r23,238
	ctx.r3.s64 = ctx.r23.s64 + 15597568;
	// stwx r22,r23,r8
	PPC_STORE_U32(ctx.r23.u32 + ctx.r8.u32, ctx.r22.u32);
	// addi r3,r3,12260
	ctx.r3.s64 = ctx.r3.s64 + 12260;
	// stwx r22,r23,r7
	PPC_STORE_U32(ctx.r23.u32 + ctx.r7.u32, ctx.r22.u32);
	// stwx r22,r23,r6
	PPC_STORE_U32(ctx.r23.u32 + ctx.r6.u32, ctx.r22.u32);
	// bl 0x83132130
	ctx.lr = 0x8311A334;
	sub_83132130(ctx, base);
	// addis r3,r23,240
	ctx.r3.s64 = ctx.r23.s64 + 15728640;
	// addi r3,r3,-3492
	ctx.r3.s64 = ctx.r3.s64 + -3492;
	// bl 0x83129f98
	ctx.lr = 0x8311A340;
	sub_83129F98(ctx, base);
	// addis r3,r23,240
	ctx.r3.s64 = ctx.r23.s64 + 15728640;
	// addi r3,r3,10296
	ctx.r3.s64 = ctx.r3.s64 + 10296;
	// bl 0x8312dea8
	ctx.lr = 0x8311A34C;
	sub_8312DEA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A354"))) PPC_WEAK_FUNC(sub_8311A354);
PPC_FUNC_IMPL(__imp__sub_8311A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311A358"))) PPC_WEAK_FUNC(sub_8311A358);
PPC_FUNC_IMPL(__imp__sub_8311A358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8311A360;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,111
	ctx.r30.s64 = ctx.r3.s64 + 7274496;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r31,9000
	ctx.r31.s64 = 9000;
	// addi r30,r30,5452
	ctx.r30.s64 = ctx.r30.s64 + 5452;
loc_8311A374:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f208e8
	ctx.lr = 0x8311A37C;
	sub_82F208E8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,588
	ctx.r30.s64 = ctx.r30.s64 + 588;
	// bne 0x8311a374
	if (!cr0.eq) goto loc_8311A374;
	// addis r3,r23,192
	ctx.r3.s64 = ctx.r23.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x82f20a80
	ctx.lr = 0x8311A394;
	sub_82F20A80(ctx, base);
	// addis r30,r23,195
	ctx.r30.s64 = ctx.r23.s64 + 12779520;
	// li r31,300
	ctx.r31.s64 = 300;
	// addi r30,r30,-13384
	ctx.r30.s64 = ctx.r30.s64 + -13384;
loc_8311A3A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20be0
	ctx.lr = 0x8311A3A8;
	sub_82F20BE0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// bne 0x8311a3a0
	if (!cr0.eq) goto loc_8311A3A0;
	// addis r31,r23,214
	ctx.r31.s64 = ctx.r23.s64 + 14024704;
	// li r25,72
	ctx.r25.s64 = 72;
	// addi r31,r31,10904
	ctx.r31.s64 = ctx.r31.s64 + 10904;
	// lis r24,-31751
	ctx.r24.s64 = -2080833536;
	// lis r27,-31772
	ctx.r27.s64 = -2082209792;
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
loc_8311A3CC:
	// addi r28,r31,-8
	ctx.r28.s64 = ctx.r31.s64 + -8;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311A3E0;
	sub_831CDCF0(ctx, base);
	// ld r11,-9588(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + -9588);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// li r30,31
	ctx.r30.s64 = 31;
	// std r11,-8(r31)
	PPC_STORE_U64(ctx.r31.u32 + -8, ctx.r11.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,-9540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9540);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,-9540(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9540);
	// rlwimi r9,r11,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_8311A410:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f62f78
	ctx.lr = 0x8311A418;
	sub_82F62F78(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// bne 0x8311a410
	if (!cr0.eq) goto loc_8311A410;
	// lwz r11,30272(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 30272);
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r31,r31,5852
	ctx.r31.s64 = ctx.r31.s64 + 5852;
	// stw r11,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// bne 0x8311a3cc
	if (!cr0.eq) goto loc_8311A3CC;
	// lis r11,204
	ctx.r11.s64 = 13369344;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,33992
	ctx.r9.u64 = ctx.r11.u64 | 33992;
	// addis r3,r23,221
	ctx.r3.s64 = ctx.r23.s64 + 14483456;
	// addi r3,r3,-26512
	ctx.r3.s64 = ctx.r3.s64 + -26512;
	// stwx r10,r23,r9
	PPC_STORE_U32(ctx.r23.u32 + ctx.r9.u32, ctx.r10.u32);
	// bl 0x82f21060
	ctx.lr = 0x8311A454;
	sub_82F21060(ctx, base);
	// addis r3,r23,222
	ctx.r3.s64 = ctx.r23.s64 + 14548992;
	// addi r3,r3,-8464
	ctx.r3.s64 = ctx.r3.s64 + -8464;
	// bl 0x82f233f0
	ctx.lr = 0x8311A460;
	sub_82F233F0(ctx, base);
	// addis r3,r23,229
	ctx.r3.s64 = ctx.r23.s64 + 15007744;
	// addi r3,r3,-6536
	ctx.r3.s64 = ctx.r3.s64 + -6536;
	// bl 0x82f21b40
	ctx.lr = 0x8311A46C;
	sub_82F21B40(ctx, base);
	// addis r3,r23,231
	ctx.r3.s64 = ctx.r23.s64 + 15138816;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x82f22c90
	ctx.lr = 0x8311A478;
	sub_82F22C90(ctx, base);
	// addis r3,r23,236
	ctx.r3.s64 = ctx.r23.s64 + 15466496;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x831286d8
	ctx.lr = 0x8311A484;
	sub_831286D8(ctx, base);
	// addis r3,r23,209
	ctx.r3.s64 = ctx.r23.s64 + 13697024;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bl 0x830732d8
	ctx.lr = 0x8311A490;
	sub_830732D8(ctx, base);
	// addis r3,r23,205
	ctx.r3.s64 = ctx.r23.s64 + 13434880;
	// addi r3,r3,-18420
	ctx.r3.s64 = ctx.r3.s64 + -18420;
	// bl 0x83073130
	ctx.lr = 0x8311A49C;
	sub_83073130(ctx, base);
	// addis r3,r23,238
	ctx.r3.s64 = ctx.r23.s64 + 15597568;
	// addi r3,r3,12260
	ctx.r3.s64 = ctx.r3.s64 + 12260;
	// bl 0x83132130
	ctx.lr = 0x8311A4A8;
	sub_83132130(ctx, base);
	// addis r3,r23,240
	ctx.r3.s64 = ctx.r23.s64 + 15728640;
	// addi r3,r3,-3492
	ctx.r3.s64 = ctx.r3.s64 + -3492;
	// bl 0x83129f98
	ctx.lr = 0x8311A4B4;
	sub_83129F98(ctx, base);
	// addis r3,r23,240
	ctx.r3.s64 = ctx.r23.s64 + 15728640;
	// addi r3,r3,10296
	ctx.r3.s64 = ctx.r3.s64 + 10296;
	// bl 0x8312dea8
	ctx.lr = 0x8311A4C0;
	sub_8312DEA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A4C8"))) PPC_WEAK_FUNC(sub_8311A4C8);
PPC_FUNC_IMPL(__imp__sub_8311A4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8311A4D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,21097
	ctx.r31.s64 = 21097;
loc_8311A4E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b00b98
	ctx.lr = 0x8311A4E8;
	sub_82B00B98(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,224
	ctx.r30.s64 = ctx.r30.s64 + 224;
	// bne 0x8311a4e0
	if (!cr0.eq) goto loc_8311A4E0;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,60636
	ctx.r10.u64 = ctx.r11.u64 | 60636;
	// addis r3,r28,237
	ctx.r3.s64 = ctx.r28.s64 + 15532032;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r5,r5,40068
	ctx.r5.u64 = ctx.r5.u64 | 40068;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19684
	ctx.r3.s64 = ctx.r3.s64 + 19684;
	// stwx r25,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r25.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311A51C;
	sub_831CDCF0(ctx, base);
	// addis r30,r28,72
	ctx.r30.s64 = ctx.r28.s64 + 4718592;
	// li r31,653
	ctx.r31.s64 = 653;
	// addi r30,r30,7136
	ctx.r30.s64 = ctx.r30.s64 + 7136;
loc_8311A528:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e59148
	ctx.lr = 0x8311A530;
	sub_82E59148(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,1312
	ctx.r30.s64 = ctx.r30.s64 + 1312;
	// bne 0x8311a528
	if (!cr0.eq) goto loc_8311A528;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addis r30,r28,88
	ctx.r30.s64 = ctx.r28.s64 + 5767168;
	// ori r10,r11,60640
	ctx.r10.u64 = ctx.r11.u64 | 60640;
	// li r31,850
	ctx.r31.s64 = 850;
	// addi r30,r30,-20304
	ctx.r30.s64 = ctx.r30.s64 + -20304;
	// stwx r25,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r25.u32);
loc_8311A554:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d8cb50
	ctx.lr = 0x8311A55C;
	sub_82D8CB50(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// bne 0x8311a554
	if (!cr0.eq) goto loc_8311A554;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// addis r3,r28,238
	ctx.r3.s64 = ctx.r28.s64 + 15597568;
	// ori r10,r11,60644
	ctx.r10.u64 = ctx.r11.u64 | 60644;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-5784
	ctx.r3.s64 = ctx.r3.s64 + -5784;
	// stwx r25,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r25.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311A588;
	sub_831CDCF0(ctx, base);
	// addis r31,r28,85
	ctx.r31.s64 = ctx.r28.s64 + 5570560;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,300
	ctx.r27.s64 = 300;
	// addi r31,r31,11982
	ctx.r31.s64 = ctx.r31.s64 + 11982;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
loc_8311A5A0:
	// addi r29,r31,-78
	ctx.r29.s64 = ctx.r31.s64 + -78;
	// li r5,548
	ctx.r5.s64 = 548;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311A5B4;
	sub_831CDCF0(ctx, base);
	// li r10,58
	ctx.r10.s64 = 58;
	// addi r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 + 14;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311A5C4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8311a5c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311A5C4;
	// lwz r11,458(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 458);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// lwz r10,462(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 462);
	// rlwinm r9,r11,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// sth r30,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r30.u16);
	// oris r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 4294901760;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// sth r30,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r30.u16);
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// stw r9,458(r31)
	PPC_STORE_U32(ctx.r31.u32 + 458, ctx.r9.u32);
	// stw r8,462(r31)
	PPC_STORE_U32(ctx.r31.u32 + 462, ctx.r8.u32);
	// addi r31,r31,548
	ctx.r31.s64 = ctx.r31.s64 + 548;
	// sth r30,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r30.u16);
	// bne 0x8311a5a0
	if (!cr0.eq) goto loc_8311A5A0;
	// addis r30,r28,99
	ctx.r30.s64 = ctx.r28.s64 + 6488064;
	// li r31,1500
	ctx.r31.s64 = 1500;
	// addi r30,r30,11884
	ctx.r30.s64 = ctx.r30.s64 + 11884;
loc_8311A614:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20778
	ctx.lr = 0x8311A61C;
	sub_82F20778(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// bne 0x8311a614
	if (!cr0.eq) goto loc_8311A614;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,237
	ctx.r10.s64 = 15532032;
	// ori r9,r11,60648
	ctx.r9.u64 = ctx.r11.u64 | 60648;
	// ori r8,r10,19680
	ctx.r8.u64 = ctx.r10.u64 | 19680;
	// addis r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 15466496;
	// li r5,5440
	ctx.r5.s64 = 5440;
	// addi r3,r3,5132
	ctx.r3.s64 = ctx.r3.s64 + 5132;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r25,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r25.u32);
	// stwx r25,r28,r8
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r25.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311A654;
	sub_831CDCF0(ctx, base);
	// lis r7,236
	ctx.r7.s64 = 15466496;
	// addis r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 15466496;
	// ori r6,r7,10572
	ctx.r6.u64 = ctx.r7.u64 | 10572;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,10576
	ctx.r3.s64 = ctx.r3.s64 + 10576;
	// stwx r25,r28,r6
	PPC_STORE_U32(ctx.r28.u32 + ctx.r6.u32, ctx.r25.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311A674;
	sub_831CDCF0(ctx, base);
	// lis r4,236
	ctx.r4.s64 = 15466496;
	// addis r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 15466496;
	// ori r11,r4,10656
	ctx.r11.u64 = ctx.r4.u64 | 10656;
	// li r5,1284
	ctx.r5.s64 = 1284;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,10660
	ctx.r3.s64 = ctx.r3.s64 + 10660;
	// stwx r25,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r25.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311A694;
	sub_831CDCF0(ctx, base);
	// addis r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 15466496;
	// li r5,7200
	ctx.r5.s64 = 7200;
	// addi r3,r3,11944
	ctx.r3.s64 = ctx.r3.s64 + 11944;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8311A6A8;
	sub_831CDCF0(ctx, base);
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// addis r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 15466496;
	// ori r9,r10,19144
	ctx.r9.u64 = ctx.r10.u64 | 19144;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19148
	ctx.r3.s64 = ctx.r3.s64 + 19148;
	// stwx r25,r28,r9
	PPC_STORE_U32(ctx.r28.u32 + ctx.r9.u32, ctx.r25.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311A6C8;
	sub_831CDCF0(ctx, base);
	// lis r8,236
	ctx.r8.s64 = 15466496;
	// addis r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 15466496;
	// ori r7,r8,19248
	ctx.r7.u64 = ctx.r8.u64 | 19248;
	// li r5,4644
	ctx.r5.s64 = 4644;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19252
	ctx.r3.s64 = ctx.r3.s64 + 19252;
	// stwx r25,r28,r7
	PPC_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r25.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311A6E8;
	sub_831CDCF0(ctx, base);
	// addis r3,r28,237
	ctx.r3.s64 = ctx.r28.s64 + 15532032;
	// li r5,30400
	ctx.r5.s64 = 30400;
	// addi r3,r3,-19624
	ctx.r3.s64 = ctx.r3.s64 + -19624;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8311A6FC;
	sub_831CDCF0(ctx, base);
	// lis r6,237
	ctx.r6.s64 = 15532032;
	// addis r3,r28,236
	ctx.r3.s64 = ctx.r28.s64 + 15466496;
	// ori r5,r6,10776
	ctx.r5.u64 = ctx.r6.u64 | 10776;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// stwx r25,r28,r5
	PPC_STORE_U32(ctx.r28.u32 + ctx.r5.u32, ctx.r25.u32);
	// bl 0x831286d8
	ctx.lr = 0x8311A714;
	sub_831286D8(ctx, base);
	// addis r3,r28,96
	ctx.r3.s64 = ctx.r28.s64 + 6291456;
	// addi r3,r3,-4872
	ctx.r3.s64 = ctx.r3.s64 + -4872;
	// bl 0x83132c68
	ctx.lr = 0x8311A720;
	sub_83132C68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A728"))) PPC_WEAK_FUNC(sub_8311A728);
PPC_FUNC_IMPL(__imp__sub_8311A728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,224
	ctx.r10.s64 = 224;
	// divw. r10,r11,r10
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_8311A748:
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// mulli r11,r9,224
	ctx.r11.s64 = ctx.r9.s64 * 224;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r5,44(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 44);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x8311a77c
	if (cr6.eq) goto loc_8311A77C;
	// subfc r11,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// b 0x8311a78c
	goto loc_8311A78C;
loc_8311A77C:
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subfc r5,r6,r11
	xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_8311A78C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311a7a8
	if (cr6.eq) goto loc_8311A7A8;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r3,r8,224
	ctx.r3.s64 = ctx.r8.s64 + 224;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x8311a7ac
	goto loc_8311A7AC;
loc_8311A7A8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8311A7AC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x8311a748
	if (cr6.gt) goto loc_8311A748;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A7B8"))) PPC_WEAK_FUNC(sub_8311A7B8);
PPC_FUNC_IMPL(__imp__sub_8311A7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,1312
	ctx.r10.s64 = 1312;
	// divw. r8,r11,r10
	ctx.r8.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r6,r5,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0x3FFF;
loc_8311A7D0:
	// srawi r11,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// mulli r11,r9,1312
	ctx.r11.s64 = ctx.r9.s64 * 1312;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x8311a800
	if (cr6.eq) goto loc_8311A800;
	// subfc r11,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subfe r4,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// b 0x8311a814
	goto loc_8311A814;
loc_8311A800:
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// clrlwi r10,r5,14
	ctx.r10.u64 = ctx.r5.u32 & 0x3FFFF;
	// subfc r4,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
loc_8311A814:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311a830
	if (cr6.eq) goto loc_8311A830;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r3,r7,1312
	ctx.r3.s64 = ctx.r7.s64 + 1312;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// b 0x8311a834
	goto loc_8311A834;
loc_8311A830:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8311A834:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x8311a7d0
	if (cr6.gt) goto loc_8311A7D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A840"))) PPC_WEAK_FUNC(sub_8311A840);
PPC_FUNC_IMPL(__imp__sub_8311A840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,632
	ctx.r10.s64 = 632;
	// divw. r10,r11,r10
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// ld r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lhz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lwz r6,-12(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_8311A860:
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// mulli r11,r9,632
	ctx.r11.s64 = ctx.r9.s64 * 632;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r5,44(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 44);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x8311a894
	if (cr6.eq) goto loc_8311A894;
	// subfc r11,r7,r11
	xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// b 0x8311a8a4
	goto loc_8311A8A4;
loc_8311A894:
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subfc r5,r6,r11
	xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_8311A8A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311a8c0
	if (cr6.eq) goto loc_8311A8C0;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r3,r8,632
	ctx.r3.s64 = ctx.r8.s64 + 632;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// b 0x8311a8c4
	goto loc_8311A8C4;
loc_8311A8C0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8311A8C4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x8311a860
	if (cr6.gt) goto loc_8311A860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311A8D0"))) PPC_WEAK_FUNC(sub_8311A8D0);
PPC_FUNC_IMPL(__imp__sub_8311A8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311A8D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,136
	ctx.r10.s64 = 136;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// divw. r31,r11,r10
	ctx.r31.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble 0x8311a944
	if (!cr0.gt) goto loc_8311A944;
loc_8311A8F4:
	// srawi r11,r31,1
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// lhz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r30,136
	ctx.r11.s64 = ctx.r30.s64 * 136;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83124aa8
	ctx.lr = 0x8311A918;
	sub_83124AA8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, xer);
	// bge cr6,0x8311a938
	if (!cr6.lt) goto loc_8311A938;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r28,r29,136
	ctx.r28.s64 = ctx.r29.s64 + 136;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// b 0x8311a93c
	goto loc_8311A93C;
loc_8311A938:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8311A93C:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x8311a8f4
	if (cr6.gt) goto loc_8311A8F4;
loc_8311A944:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A950"))) PPC_WEAK_FUNC(sub_8311A950);
PPC_FUNC_IMPL(__imp__sub_8311A950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311A958;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,144
	ctx.r10.s64 = 144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// divw. r30,r11,r10
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble 0x8311a9cc
	if (!cr0.gt) goto loc_8311A9CC;
loc_8311A974:
	// srawi r11,r30,1
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 1;
	// lhz r26,0(r27)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r31.s64 = temp.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831251c0
	ctx.lr = 0x8311A9A0;
	sub_831251C0(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// bge cr6,0x8311a9c0
	if (!cr6.lt) goto loc_8311A9C0;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r28,r29,144
	ctx.r28.s64 = ctx.r29.s64 + 144;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x8311a9c4
	goto loc_8311A9C4;
loc_8311A9C0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8311A9C4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x8311a974
	if (cr6.gt) goto loc_8311A974;
loc_8311A9CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311A9D8"))) PPC_WEAK_FUNC(sub_8311A9D8);
PPC_FUNC_IMPL(__imp__sub_8311A9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8311A9E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r11.u16);
	// addi r28,r10,104
	ctx.r28.s64 = ctx.r10.s64 + 104;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// li r29,2
	ctx.r29.s64 = 2;
loc_8311AA14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x8311AA1C;
	sub_82AC0AF0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,160
	ctx.r28.s64 = ctx.r28.s64 + 160;
	// bge 0x8311aa14
	if (!cr0.lt) goto loc_8311AA14;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,640
	ctx.r3.s64 = ctx.r30.s64 + 640;
	// bl 0x831cdcf0
	ctx.lr = 0x8311AA38;
	sub_831CDCF0(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r30,720
	ctx.r11.s64 = ctx.r30.s64 + 720;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
loc_8311AA4C:
	// lwz r9,-9540(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9540);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,30272(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30272);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,30272(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30272);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stwu r31,20(r11)
	ea = 20 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8311aa4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311AA4C;
	// addi r29,r30,1144
	ctx.r29.s64 = ctx.r30.s64 + 1144;
	// li r31,199
	ctx.r31.s64 = 199;
loc_8311AA78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f4a360
	ctx.lr = 0x8311AA80;
	sub_82F4A360(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,2020
	ctx.r29.s64 = ctx.r29.s64 + 2020;
	// bge 0x8311aa78
	if (!cr0.lt) goto loc_8311AA78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f230a0
	ctx.lr = 0x8311AA94;
	sub_82F230A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311AAA0"))) PPC_WEAK_FUNC(sub_8311AAA0);
PPC_FUNC_IMPL(__imp__sub_8311AAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8311AAA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
loc_8311AAE4:
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// stwu r31,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8311aae4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311AAE4;
	// addi r3,r28,212
	ctx.r3.s64 = ctx.r28.s64 + 212;
	// bl 0x83118998
	ctx.lr = 0x8311AAF8;
	sub_83118998(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r28,6236
	ctx.r11.s64 = ctx.r28.s64 + 6236;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311AB04:
	// sth r30,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r30.u16);
	// stwu r29,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8311ab04
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311AB04;
	// addi r3,r28,6496
	ctx.r3.s64 = ctx.r28.s64 + 6496;
	// bl 0x83118940
	ctx.lr = 0x8311AB18;
	sub_83118940(ctx, base);
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// addis r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 65536;
	// addi r11,r11,-30756
	ctx.r11.s64 = ctx.r11.s64 + -30756;
	// addi r10,r10,-30752
	ctx.r10.s64 = ctx.r10.s64 + -30752;
	// addis r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 65536;
	// addis r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 65536;
	// addi r9,r9,-30748
	ctx.r9.s64 = ctx.r9.s64 + -30748;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,-30744
	ctx.r8.s64 = ctx.r8.s64 + -30744;
	// addis r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 65536;
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// addi r7,r7,-30740
	ctx.r7.s64 = ctx.r7.s64 + -30740;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// stb r31,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r31.u8);
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// addi r3,r3,-30732
	ctx.r3.s64 = ctx.r3.s64 + -30732;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// oris r11,r4,65535
	ctx.r11.u64 = ctx.r4.u64 | 4294901760;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stb r31,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r31.u8);
	// stb r31,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r31.u8);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// oris r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 4294901760;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// stb r31,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r31.u8);
	// stb r31,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r31.u8);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// oris r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 4294901760;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stb r31,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r31.u8);
	// stb r31,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r31.u8);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// oris r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 4294901760;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stb r31,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r31.u8);
	// stb r31,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r31.u8);
	// bl 0x83119940
	ctx.lr = 0x8311ABB0;
	sub_83119940(ctx, base);
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// addi r3,r3,-26724
	ctx.r3.s64 = ctx.r3.s64 + -26724;
	// bl 0x8311a9d8
	ctx.lr = 0x8311ABBC;
	sub_8311A9D8(ctx, base);
	// addis r9,r28,7
	ctx.r9.s64 = ctx.r28.s64 + 458752;
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r9,r9,-14792
	ctx.r9.s64 = ctx.r9.s64 + -14792;
	// addis r11,r28,7
	ctx.r11.s64 = ctx.r28.s64 + 458752;
	// addi r11,r11,-14784
	ctx.r11.s64 = ctx.r11.s64 + -14784;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// sth r30,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r30.u16);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
loc_8311ABE0:
	// sth r30,9(r11)
	PPC_STORE_U16(ctx.r11.u32 + 9, ctx.r30.u16);
	// stw r31,13(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13, ctx.r31.u32);
	// stw r29,17(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17, ctx.r29.u32);
	// sth r30,21(r11)
	PPC_STORE_U16(ctx.r11.u32 + 21, ctx.r30.u16);
	// stw r29,25(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25, ctx.r29.u32);
	// lwz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 33);
	// oris r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 4294901760;
	// stw r9,33(r11)
	PPC_STORE_U32(ctx.r11.u32 + 33, ctx.r9.u32);
	// stb r31,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r31.u8);
	// stb r31,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r31.u8);
	// sth r30,45(r11)
	PPC_STORE_U16(ctx.r11.u32 + 45, ctx.r30.u16);
	// stw r31,49(r11)
	PPC_STORE_U32(ctx.r11.u32 + 49, ctx.r31.u32);
	// stw r29,53(r11)
	PPC_STORE_U32(ctx.r11.u32 + 53, ctx.r29.u32);
	// sth r30,57(r11)
	PPC_STORE_U16(ctx.r11.u32 + 57, ctx.r30.u16);
	// stw r29,61(r11)
	PPC_STORE_U32(ctx.r11.u32 + 61, ctx.r29.u32);
	// lwz r8,69(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 69);
	// oris r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 4294901760;
	// stw r7,69(r11)
	PPC_STORE_U32(ctx.r11.u32 + 69, ctx.r7.u32);
	// stb r31,71(r11)
	PPC_STORE_U8(ctx.r11.u32 + 71, ctx.r31.u8);
	// stb r31,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r31.u8);
	// sth r30,81(r11)
	PPC_STORE_U16(ctx.r11.u32 + 81, ctx.r30.u16);
	// stw r31,85(r11)
	PPC_STORE_U32(ctx.r11.u32 + 85, ctx.r31.u32);
	// stw r29,89(r11)
	PPC_STORE_U32(ctx.r11.u32 + 89, ctx.r29.u32);
	// sth r30,93(r11)
	PPC_STORE_U16(ctx.r11.u32 + 93, ctx.r30.u16);
	// stw r29,97(r11)
	PPC_STORE_U32(ctx.r11.u32 + 97, ctx.r29.u32);
	// lwz r6,105(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 105);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,105(r11)
	PPC_STORE_U32(ctx.r11.u32 + 105, ctx.r5.u32);
	// stb r31,107(r11)
	PPC_STORE_U8(ctx.r11.u32 + 107, ctx.r31.u8);
	// stb r31,108(r11)
	PPC_STORE_U8(ctx.r11.u32 + 108, ctx.r31.u8);
	// sth r30,117(r11)
	PPC_STORE_U16(ctx.r11.u32 + 117, ctx.r30.u16);
	// stw r31,121(r11)
	PPC_STORE_U32(ctx.r11.u32 + 121, ctx.r31.u32);
	// stw r29,125(r11)
	PPC_STORE_U32(ctx.r11.u32 + 125, ctx.r29.u32);
	// sth r30,129(r11)
	PPC_STORE_U16(ctx.r11.u32 + 129, ctx.r30.u16);
	// stw r29,133(r11)
	PPC_STORE_U32(ctx.r11.u32 + 133, ctx.r29.u32);
	// lwz r4,141(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 141);
	// oris r3,r4,65535
	ctx.r3.u64 = ctx.r4.u64 | 4294901760;
	// stw r3,141(r11)
	PPC_STORE_U32(ctx.r11.u32 + 141, ctx.r3.u32);
	// stb r31,143(r11)
	PPC_STORE_U8(ctx.r11.u32 + 143, ctx.r31.u8);
	// stb r31,144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 144, ctx.r31.u8);
	// sth r30,153(r11)
	PPC_STORE_U16(ctx.r11.u32 + 153, ctx.r30.u16);
	// stw r31,157(r11)
	PPC_STORE_U32(ctx.r11.u32 + 157, ctx.r31.u32);
	// stw r29,161(r11)
	PPC_STORE_U32(ctx.r11.u32 + 161, ctx.r29.u32);
	// sth r30,165(r11)
	PPC_STORE_U16(ctx.r11.u32 + 165, ctx.r30.u16);
	// stw r29,169(r11)
	PPC_STORE_U32(ctx.r11.u32 + 169, ctx.r29.u32);
	// lwz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 177);
	// oris r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 4294901760;
	// stw r9,177(r11)
	PPC_STORE_U32(ctx.r11.u32 + 177, ctx.r9.u32);
	// stb r31,179(r11)
	PPC_STORE_U8(ctx.r11.u32 + 179, ctx.r31.u8);
	// stbu r31,180(r11)
	ea = 180 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8311abe0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311ABE0;
	// addis r6,r28,7
	ctx.r6.s64 = ctx.r28.s64 + 458752;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r6,r6,-7576
	ctx.r6.s64 = ctx.r6.s64 + -7576;
	// li r9,55
	ctx.r9.s64 = 55;
	// lis r5,-31772
	ctx.r5.s64 = -2082209792;
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r29,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r29.u32);
	// stb r31,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r31.u8);
	// sth r30,8(r6)
	PPC_STORE_U16(ctx.r6.u32 + 8, ctx.r30.u16);
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r31.u8);
	// stw r9,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r31,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// lwz r4,20(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r11,r4,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r3,r11,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r3.u32);
	// stw r29,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r29.u32);
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stb r31,24(r6)
	PPC_STORE_U8(ctx.r6.u32 + 24, ctx.r31.u8);
	// stb r31,25(r6)
	PPC_STORE_U8(ctx.r6.u32 + 25, ctx.r31.u8);
	// stw r31,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r31.u32);
	// sth r30,32(r6)
	PPC_STORE_U16(ctx.r6.u32 + 32, ctx.r30.u16);
	// stw r10,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r10.u32);
	// lwz r7,44(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r11,r7,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r4,r11,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r4.u32);
	// stw r29,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r29.u32);
	// stw r9,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r9.u32);
	// stb r31,48(r6)
	PPC_STORE_U8(ctx.r6.u32 + 48, ctx.r31.u8);
	// stb r31,49(r6)
	PPC_STORE_U8(ctx.r6.u32 + 49, ctx.r31.u8);
	// stw r31,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r31.u32);
	// sth r30,56(r6)
	PPC_STORE_U16(ctx.r6.u32 + 56, ctx.r30.u16);
	// stw r10,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r10.u32);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// lwz r3,68(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 68);
	// rlwimi r3,r11,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r3.u32);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r7.u32);
	// stw r29,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r29.u32);
	// stw r9,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r9.u32);
	// stb r31,72(r6)
	PPC_STORE_U8(ctx.r6.u32 + 72, ctx.r31.u8);
	// stb r31,73(r6)
	PPC_STORE_U8(ctx.r6.u32 + 73, ctx.r31.u8);
	// stw r31,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r31.u32);
	// sth r30,80(r6)
	PPC_STORE_U16(ctx.r6.u32 + 80, ctx.r30.u16);
	// stw r10,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r10.u32);
	// lwz r11,-9540(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// lwz r4,92(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r4.u32);
	// addis r11,r28,7
	ctx.r11.s64 = ctx.r28.s64 + 458752;
	// lwz r7,-9540(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r4,r7,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r4.u32);
	// addi r11,r11,-7440
	ctx.r11.s64 = ctx.r11.s64 + -7440;
	// stw r29,116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 116, ctx.r29.u32);
	// stw r9,108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 108, ctx.r9.u32);
	// stb r31,96(r6)
	PPC_STORE_U8(ctx.r6.u32 + 96, ctx.r31.u8);
	// stb r31,97(r6)
	PPC_STORE_U8(ctx.r6.u32 + 97, ctx.r31.u8);
	// stw r31,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r31.u32);
	// sth r30,104(r6)
	PPC_STORE_U16(ctx.r6.u32 + 104, ctx.r30.u16);
	// stw r10,112(r6)
	PPC_STORE_U32(ctx.r6.u32 + 112, ctx.r10.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// lwz r3,116(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 116);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r3,116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 116, ctx.r3.u32);
	// lwz r10,-9540(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9540);
	// rlwimi r9,r10,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,116(r6)
	PPC_STORE_U32(ctx.r6.u32 + 116, ctx.r9.u32);
	// lis r9,-31751
	ctx.r9.s64 = -2080833536;
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
loc_8311ADFC:
	// sth r30,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r6,r10,65535
	ctx.r6.u64 = ctx.r10.u64 | 4294901760;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stb r31,14(r11)
	PPC_STORE_U8(ctx.r11.u32 + 14, ctx.r31.u8);
	// stb r31,15(r11)
	PPC_STORE_U8(ctx.r11.u32 + 15, ctx.r31.u8);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// ld r10,-9588(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + -9588);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r10,30272(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30272);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// bge 0x8311adfc
	if (!cr0.lt) goto loc_8311ADFC;
	// addis r3,r28,7
	ctx.r3.s64 = ctx.r28.s64 + 458752;
	// addi r3,r3,-6800
	ctx.r3.s64 = ctx.r3.s64 + -6800;
	// bl 0x83119898
	ctx.lr = 0x8311AE54;
	sub_83119898(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f233f0
	ctx.lr = 0x8311AE5C;
	sub_82F233F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311AE68"))) PPC_WEAK_FUNC(sub_8311AE68);
PPC_FUNC_IMPL(__imp__sub_8311AE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8311AE70;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// li r30,23
	ctx.r30.s64 = 23;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8311AE94:
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831cdcf0
	ctx.lr = 0x8311AEAC;
	sub_831CDCF0(ctx, base);
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// stb r26,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r26.u8);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stb r29,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r29.u8);
	// stb r27,78(r31)
	PPC_STORE_U8(ctx.r31.u32 + 78, ctx.r27.u8);
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bge 0x8311ae94
	if (!cr0.lt) goto loc_8311AE94;
	// addi r3,r24,1952
	ctx.r3.s64 = ctx.r24.s64 + 1952;
	// bl 0x82d8d5b8
	ctx.lr = 0x8311AED0;
	sub_82D8D5B8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311AEDC"))) PPC_WEAK_FUNC(sub_8311AEDC);
PPC_FUNC_IMPL(__imp__sub_8311AEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311AEE0"))) PPC_WEAK_FUNC(sub_8311AEE0);
PPC_FUNC_IMPL(__imp__sub_8311AEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,76
	ctx.r10.s64 = 76;
	// divw. r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8311AEF4:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mulli r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 * 76;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r7,72(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// rlwinm r6,r7,9,23,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0x1FF;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bge cr6,0x8311af24
	if (!cr6.lt) goto loc_8311AF24;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r9,76
	ctx.r3.s64 = ctx.r9.s64 + 76;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8311af28
	goto loc_8311AF28;
loc_8311AF24:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8311AF28:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8311aef4
	if (cr6.gt) goto loc_8311AEF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311AF34"))) PPC_WEAK_FUNC(sub_8311AF34);
PPC_FUNC_IMPL(__imp__sub_8311AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311AF38"))) PPC_WEAK_FUNC(sub_8311AF38);
PPC_FUNC_IMPL(__imp__sub_8311AF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8311AF40;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,21096
	ctx.r30.s64 = 21096;
loc_8311AF50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b00d00
	ctx.lr = 0x8311AF58;
	sub_82B00D00(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// bge 0x8311af50
	if (!cr0.lt) goto loc_8311AF50;
	// addis r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 4718592;
	// li r30,652
	ctx.r30.s64 = 652;
	// addi r29,r29,7136
	ctx.r29.s64 = ctx.r29.s64 + 7136;
loc_8311AF70:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ae4800
	ctx.lr = 0x8311AF78;
	sub_82AE4800(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,1312
	ctx.r29.s64 = ctx.r29.s64 + 1312;
	// bge 0x8311af70
	if (!cr0.lt) goto loc_8311AF70;
	// addis r11,r31,85
	ctx.r11.s64 = ctx.r31.s64 + 5570560;
	// li r29,299
	ctx.r29.s64 = 299;
	// addi r11,r11,11904
	ctx.r11.s64 = ctx.r11.s64 + 11904;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r30,r11,328
	ctx.r30.s64 = ctx.r11.s64 + 328;
loc_8311AF98:
	// stw r26,-240(r30)
	PPC_STORE_U32(ctx.r30.u32 + -240, ctx.r26.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,25168
	ctx.r6.s64 = ctx.r11.s64 + 25168;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x8311AFB4;
	sub_823FCA98(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,548
	ctx.r30.s64 = ctx.r30.s64 + 548;
	// bge 0x8311af98
	if (!cr0.lt) goto loc_8311AF98;
	// addis r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 5767168;
	// li r29,849
	ctx.r29.s64 = 849;
	// addi r11,r11,-20304
	ctx.r11.s64 = ctx.r11.s64 + -20304;
	// addi r30,r11,44
	ctx.r30.s64 = ctx.r11.s64 + 44;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_8311AFD8:
	// sth r25,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r25.u16);
	// lis r11,-32084
	ctx.r11.s64 = -2102657024;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r6,r11,2800
	ctx.r6.s64 = ctx.r11.s64 + 2800;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x823fca98
	ctx.lr = 0x8311AFF8;
	sub_823FCA98(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,632
	ctx.r30.s64 = ctx.r30.s64 + 632;
	// bge 0x8311afd8
	if (!cr0.lt) goto loc_8311AFD8;
	// addis r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 6291456;
	// addi r3,r3,-7392
	ctx.r3.s64 = ctx.r3.s64 + -7392;
	// bl 0x82ae4800
	ctx.lr = 0x8311B010;
	sub_82AE4800(ctx, base);
	// addis r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 6291456;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r11,-6080
	ctx.r11.s64 = ctx.r11.s64 + -6080;
	// addi r10,r11,324
	ctx.r10.s64 = ctx.r11.s64 + 324;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stw r26,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r26.u32);
loc_8311B028:
	// stwu r26,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8311b028
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311B028;
	// addis r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 6291456;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-5532
	ctx.r11.s64 = ctx.r11.s64 + -5532;
	// addi r29,r11,104
	ctx.r29.s64 = ctx.r11.s64 + 104;
	// sth r25,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r25.u16);
	// stw r26,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
loc_8311B048:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x8311B050;
	sub_82AC0AF0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x8311b048
	if (!cr0.lt) goto loc_8311B048;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,95
	ctx.r10.s64 = 6225920;
	// lis r9,95
	ctx.r9.s64 = 6225920;
	// ori r4,r11,60636
	ctx.r4.u64 = ctx.r11.u64 | 60636;
	// lis r8,95
	ctx.r8.s64 = 6225920;
	// ori r11,r10,60640
	ctx.r11.u64 = ctx.r10.u64 | 60640;
	// lis r7,95
	ctx.r7.s64 = 6225920;
	// ori r10,r9,60644
	ctx.r10.u64 = ctx.r9.u64 | 60644;
	// lis r6,95
	ctx.r6.s64 = 6225920;
	// ori r9,r8,60648
	ctx.r9.u64 = ctx.r8.u64 | 60648;
	// lis r5,95
	ctx.r5.s64 = 6225920;
	// ori r8,r7,60652
	ctx.r8.u64 = ctx.r7.u64 | 60652;
	// ori r7,r6,60656
	ctx.r7.u64 = ctx.r6.u64 | 60656;
	// ori r6,r5,60660
	ctx.r6.u64 = ctx.r5.u64 | 60660;
	// li r29,0
	ctx.r29.s64 = 0;
	// addis r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 6291456;
	// stwx r29,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r29.u32);
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// addi r3,r3,-4872
	ctx.r3.s64 = ctx.r3.s64 + -4872;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// stwx r29,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
	// stwx r29,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r29.u32);
	// stwx r29,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u32);
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// bl 0x83132c10
	ctx.lr = 0x8311B0C0;
	sub_83132C10(ctx, base);
	// addis r28,r31,99
	ctx.r28.s64 = ctx.r31.s64 + 6488064;
	// li r30,1499
	ctx.r30.s64 = 1499;
	// addi r28,r28,11884
	ctx.r28.s64 = ctx.r28.s64 + 11884;
loc_8311B0CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c168a8
	ctx.lr = 0x8311B0D4;
	sub_82C168A8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,520
	ctx.r28.s64 = ctx.r28.s64 + 520;
	// bge 0x8311b0cc
	if (!cr0.lt) goto loc_8311B0CC;
	// addis r28,r31,111
	ctx.r28.s64 = ctx.r31.s64 + 7274496;
	// li r30,8999
	ctx.r30.s64 = 8999;
	// addi r28,r28,5452
	ctx.r28.s64 = ctx.r28.s64 + 5452;
loc_8311B0EC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82bb08f0
	ctx.lr = 0x8311B0F4;
	sub_82BB08F0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,588
	ctx.r28.s64 = ctx.r28.s64 + 588;
	// bge 0x8311b0ec
	if (!cr0.lt) goto loc_8311B0EC;
	// addis r28,r31,192
	ctx.r28.s64 = ctx.r31.s64 + 12582912;
	// li r30,364
	ctx.r30.s64 = 364;
	// addi r28,r28,-10964
	ctx.r28.s64 = ctx.r28.s64 + -10964;
loc_8311B10C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831180e8
	ctx.lr = 0x8311B114;
	sub_831180E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,532
	ctx.r28.s64 = ctx.r28.s64 + 532;
	// bge 0x8311b10c
	if (!cr0.lt) goto loc_8311B10C;
	// addis r11,r31,195
	ctx.r11.s64 = ctx.r31.s64 + 12779520;
	// li r28,299
	ctx.r28.s64 = 299;
	// addi r11,r11,-13384
	ctx.r11.s64 = ctx.r11.s64 + -13384;
	// addi r30,r11,436
	ctx.r30.s64 = ctx.r11.s64 + 436;
loc_8311B130:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r11,4080
	ctx.r6.s64 = ctx.r11.s64 + 4080;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r30,-384
	ctx.r3.s64 = ctx.r30.s64 + -384;
	// bl 0x823fca98
	ctx.lr = 0x8311B148;
	sub_823FCA98(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r10,4080
	ctx.r6.s64 = ctx.r10.s64 + 4080;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fca98
	ctx.lr = 0x8311B160;
	sub_823FCA98(ctx, base);
	// addi r3,r30,384
	ctx.r3.s64 = ctx.r30.s64 + 384;
	// bl 0x83118188
	ctx.lr = 0x8311B168;
	sub_83118188(ctx, base);
	// addi r3,r30,1032
	ctx.r3.s64 = ctx.r30.s64 + 1032;
	// bl 0x83118188
	ctx.lr = 0x8311B170;
	sub_83118188(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,2124
	ctx.r30.s64 = ctx.r30.s64 + 2124;
	// bge 0x8311b130
	if (!cr0.lt) goto loc_8311B130;
	// lis r11,204
	ctx.r11.s64 = 13369344;
	// addis r3,r31,205
	ctx.r3.s64 = ctx.r31.s64 + 13434880;
	// ori r10,r11,33992
	ctx.r10.u64 = ctx.r11.u64 | 33992;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// bl 0x83118200
	ctx.lr = 0x8311B194;
	sub_83118200(ctx, base);
	// addis r3,r31,205
	ctx.r3.s64 = ctx.r31.s64 + 13434880;
	// addi r3,r3,-21136
	ctx.r3.s64 = ctx.r3.s64 + -21136;
	// bl 0x83118358
	ctx.lr = 0x8311B1A0;
	sub_83118358(ctx, base);
	// addis r3,r31,205
	ctx.r3.s64 = ctx.r31.s64 + 13434880;
	// addi r3,r3,-18732
	ctx.r3.s64 = ctx.r3.s64 + -18732;
	// bl 0x831184f0
	ctx.lr = 0x8311B1AC;
	sub_831184F0(ctx, base);
	// addis r3,r31,205
	ctx.r3.s64 = ctx.r31.s64 + 13434880;
	// addi r3,r3,-18420
	ctx.r3.s64 = ctx.r3.s64 + -18420;
	// bl 0x83119688
	ctx.lr = 0x8311B1B8;
	sub_83119688(ctx, base);
	// addis r3,r31,209
	ctx.r3.s64 = ctx.r31.s64 + 13697024;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bl 0x831199d8
	ctx.lr = 0x8311B1C4;
	sub_831199D8(ctx, base);
	// addis r11,r31,214
	ctx.r11.s64 = ctx.r31.s64 + 14024704;
	// li r28,71
	ctx.r28.s64 = 71;
	// addi r11,r11,10896
	ctx.r11.s64 = ctx.r11.s64 + 10896;
	// addi r30,r11,23
	ctx.r30.s64 = ctx.r11.s64 + 23;
	// addi r27,r11,-5852
	ctx.r27.s64 = ctx.r11.s64 + -5852;
loc_8311B1D8:
	// sthu r25,5852(r27)
	ea = 5852 + ctx.r27.u32;
	PPC_STORE_U16(ea, ctx.r25.u16);
	ctx.r27.u32 = ea;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r29,-19(r30)
	PPC_STORE_U32(ctx.r30.u32 + -19, ctx.r29.u32);
	// li r5,31
	ctx.r5.s64 = 31;
	// stw r26,-15(r30)
	PPC_STORE_U32(ctx.r30.u32 + -15, ctx.r26.u32);
	// addi r6,r11,-27576
	ctx.r6.s64 = ctx.r11.s64 + -27576;
	// lwz r10,-3(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3);
	// oris r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 4294901760;
	// stw r9,-3(r30)
	PPC_STORE_U32(ctx.r30.u32 + -3, ctx.r9.u32);
	// li r4,188
	ctx.r4.s64 = 188;
	// stb r29,-1(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1, ctx.r29.u8);
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x823fca98
	ctx.lr = 0x8311B210;
	sub_823FCA98(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,5852
	ctx.r30.s64 = ctx.r30.s64 + 5852;
	// bge 0x8311b1d8
	if (!cr0.lt) goto loc_8311B1D8;
	// addis r3,r31,221
	ctx.r3.s64 = ctx.r31.s64 + 14483456;
	// addi r3,r3,-26512
	ctx.r3.s64 = ctx.r3.s64 + -26512;
	// bl 0x83118868
	ctx.lr = 0x8311B228;
	sub_83118868(ctx, base);
	// addis r3,r31,222
	ctx.r3.s64 = ctx.r31.s64 + 14548992;
	// addi r3,r3,-12208
	ctx.r3.s64 = ctx.r3.s64 + -12208;
	// bl 0x8311ae68
	ctx.lr = 0x8311B234;
	sub_8311AE68(ctx, base);
	// addis r3,r31,222
	ctx.r3.s64 = ctx.r31.s64 + 14548992;
	// addi r3,r3,-8464
	ctx.r3.s64 = ctx.r3.s64 + -8464;
	// bl 0x8311aaa0
	ctx.lr = 0x8311B240;
	sub_8311AAA0(ctx, base);
	// addis r27,r31,229
	ctx.r27.s64 = ctx.r31.s64 + 15007744;
	// li r30,279
	ctx.r30.s64 = 279;
	// addi r27,r27,-6536
	ctx.r27.s64 = ctx.r27.s64 + -6536;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8311B250:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83118c58
	ctx.lr = 0x8311B258;
	sub_83118C58(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,592
	ctx.r28.s64 = ctx.r28.s64 + 592;
	// bge 0x8311b250
	if (!cr0.lt) goto loc_8311B250;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f21b40
	ctx.lr = 0x8311B26C;
	sub_82F21B40(ctx, base);
	// addis r3,r31,231
	ctx.r3.s64 = ctx.r31.s64 + 15138816;
	// addi r3,r3,28152
	ctx.r3.s64 = ctx.r3.s64 + 28152;
	// bl 0x83119588
	ctx.lr = 0x8311B278;
	sub_83119588(ctx, base);
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// addi r3,r3,1908
	ctx.r3.s64 = ctx.r3.s64 + 1908;
	// bl 0x83128bc8
	ctx.lr = 0x8311B284;
	sub_83128BC8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// addis r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// li r28,39
	ctx.r28.s64 = 39;
	// addi r30,r30,5132
	ctx.r30.s64 = ctx.r30.s64 + 5132;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
loc_8311B29C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,121
	ctx.r5.s64 = 121;
	// sth r29,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r29.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r9,r11,20
	ctx.r9.u64 = ctx.r11.u32 & 0xFFF;
	// rlwinm r8,r10,0,31,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0001;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311B2CC;
	sub_831CDCF0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,136
	ctx.r30.s64 = ctx.r30.s64 + 136;
	// bge 0x8311b29c
	if (!cr0.lt) goto loc_8311B29C;
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// addi r3,r3,10660
	ctx.r3.s64 = ctx.r3.s64 + 10660;
	// bl 0x83118db8
	ctx.lr = 0x8311B2E4;
	sub_83118DB8(ctx, base);
	// addis r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 15466496;
	// li r28,49
	ctx.r28.s64 = 49;
	// addi r30,r30,11944
	ctx.r30.s64 = ctx.r30.s64 + 11944;
loc_8311B2F0:
	// sth r29,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// clrlwi r9,r11,20
	ctx.r9.u64 = ctx.r11.u32 & 0xFFF;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r10,0,30,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0003;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311B31C;
	sub_831CDCF0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// bge 0x8311b2f0
	if (!cr0.lt) goto loc_8311B2F0;
	// addis r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 15466496;
	// addi r3,r3,19252
	ctx.r3.s64 = ctx.r3.s64 + 19252;
	// bl 0x83118e10
	ctx.lr = 0x8311B334;
	sub_83118E10(ctx, base);
	// addis r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 15466496;
	// li r28,99
	ctx.r28.s64 = 99;
	// addi r30,r30,23896
	ctx.r30.s64 = ctx.r30.s64 + 23896;
loc_8311B340:
	// sth r29,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// li r5,97
	ctx.r5.s64 = 97;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// clrlwi r10,r11,21
	ctx.r10.u64 = ctx.r11.u32 & 0x7FF;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r9,0,30,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF0003;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311B36C;
	sub_831CDCF0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// bge 0x8311b340
	if (!cr0.lt) goto loc_8311B340;
	// addis r30,r31,237
	ctx.r30.s64 = ctx.r31.s64 + 15532032;
	// li r28,99
	ctx.r28.s64 = 99;
	// addi r30,r30,-30632
	ctx.r30.s64 = ctx.r30.s64 + -30632;
loc_8311B384:
	// sth r29,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r29.u16);
	// li r5,97
	ctx.r5.s64 = 97;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// clrlwi r10,r11,21
	ctx.r10.u64 = ctx.r11.u32 & 0x7FF;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r9,0,30,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF0003;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311B3B0;
	sub_831CDCF0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// bge 0x8311b384
	if (!cr0.lt) goto loc_8311B384;
	// addis r11,r31,237
	ctx.r11.s64 = ctx.r31.s64 + 15532032;
	// li r10,299
	ctx.r10.s64 = 299;
	// addi r11,r11,10780
	ctx.r11.s64 = ctx.r11.s64 + 10780;
loc_8311B3C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r6,r8,18
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFF;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge 0x8311b3c8
	if (!cr0.lt) goto loc_8311B3C8;
	// addis r28,r31,237
	ctx.r28.s64 = ctx.r31.s64 + 15532032;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r28,r28,13184
	ctx.r28.s64 = ctx.r28.s64 + 13184;
loc_8311B400:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b00d00
	ctx.lr = 0x8311B408;
	sub_82B00D00(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r28,r28,224
	ctx.r28.s64 = ctx.r28.s64 + 224;
	// bge 0x8311b400
	if (!cr0.lt) goto loc_8311B400;
	// addis r11,r31,237
	ctx.r11.s64 = ctx.r31.s64 + 15532032;
	// li r10,699
	ctx.r10.s64 = 699;
	// addi r11,r11,14080
	ctx.r11.s64 = ctx.r11.s64 + 14080;
loc_8311B420:
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bge 0x8311b420
	if (!cr0.lt) goto loc_8311B420;
	// lis r11,237
	ctx.r11.s64 = 15532032;
	// lis r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,19680
	ctx.r10.u64 = ctx.r11.u64 | 19680;
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// ori r5,r5,40068
	ctx.r5.u64 = ctx.r5.u64 | 40068;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19684
	ctx.r3.s64 = ctx.r3.s64 + 19684;
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x8311B45C;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-5784
	ctx.r3.s64 = ctx.r3.s64 + -5784;
	// bl 0x831cdcf0
	ctx.lr = 0x8311B470;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// addi r3,r3,-3772
	ctx.r3.s64 = ctx.r3.s64 + -3772;
	// bl 0x82ae4800
	ctx.lr = 0x8311B47C;
	sub_82AE4800(ctx, base);
	// addis r11,r31,238
	ctx.r11.s64 = ctx.r31.s64 + 15597568;
	// li r30,2
	ctx.r30.s64 = 2;
	// addi r11,r11,-2460
	ctx.r11.s64 = ctx.r11.s64 + -2460;
	// addi r29,r11,104
	ctx.r29.s64 = ctx.r11.s64 + 104;
	// sth r25,44(r11)
	PPC_STORE_U16(ctx.r11.u32 + 44, ctx.r25.u16);
	// stw r26,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r26.u32);
loc_8311B494:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x8311B49C;
	sub_82AC0AF0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x8311b494
	if (!cr0.lt) goto loc_8311B494;
	// addis r29,r31,238
	ctx.r29.s64 = ctx.r31.s64 + 15597568;
	// li r30,31
	ctx.r30.s64 = 31;
	// addi r29,r29,-1828
	ctx.r29.s64 = ctx.r29.s64 + -1828;
loc_8311B4B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b00d00
	ctx.lr = 0x8311B4BC;
	sub_82B00D00(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// bge 0x8311b4b4
	if (!cr0.lt) goto loc_8311B4B4;
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// li r5,2304
	ctx.r5.s64 = 2304;
	// addi r3,r3,5340
	ctx.r3.s64 = ctx.r3.s64 + 5340;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8311B4DC;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// li r5,4608
	ctx.r5.s64 = 4608;
	// addi r3,r3,7648
	ctx.r3.s64 = ctx.r3.s64 + 7648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8311B4F0;
	sub_831CDCF0(ctx, base);
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// addi r3,r3,12260
	ctx.r3.s64 = ctx.r3.s64 + 12260;
	// bl 0x831322d8
	ctx.lr = 0x8311B4FC;
	sub_831322D8(ctx, base);
	// addis r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 15728640;
	// addi r3,r3,-3492
	ctx.r3.s64 = ctx.r3.s64 + -3492;
	// bl 0x8312a1b8
	ctx.lr = 0x8311B508;
	sub_8312A1B8(ctx, base);
	// addis r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 15728640;
	// addi r3,r3,10296
	ctx.r3.s64 = ctx.r3.s64 + 10296;
	// bl 0x8312e160
	ctx.lr = 0x8311B514;
	sub_8312E160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83119b60
	ctx.lr = 0x8311B51C;
	sub_83119B60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311B528"))) PPC_WEAK_FUNC(sub_8311B528);
PPC_FUNC_IMPL(__imp__sub_8311B528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311B530;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r26,r3,96
	ctx.r26.s64 = ctx.r3.s64 + 6291456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r26,-4900
	ctx.r26.s64 = ctx.r26.s64 + -4900;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r29,21000
	cr6.compare<uint32_t>(ctx.r29.u32, 21000, xer);
	// bge cr6,0x8311b64c
	if (!cr6.lt) goto loc_8311B64C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// mulli r11,r29,224
	ctx.r11.s64 = ctx.r29.s64 * 224;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311a728
	ctx.lr = 0x8311B57C;
	sub_8311A728(ctx, base);
	// ld r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// ld r6,44(r27)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r27.u32 + 44);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// bne cr6,0x8311b5a8
	if (!cr6.eq) goto loc_8311B5A8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8311b5d0
	goto loc_8311B5D0;
loc_8311B5A8:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8311b5c8
	if (!cr6.eq) goto loc_8311B5C8;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8311b5cc
	if (cr6.eq) goto loc_8311B5CC;
loc_8311B5C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311B5CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8311B5D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311b644
	if (!cr6.eq) goto loc_8311B644;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// ori r9,r11,5128
	ctx.r9.u64 = ctx.r11.u64 | 5128;
	// li r8,224
	ctx.r8.s64 = 224;
	// divw r28,r10,r8
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r8.s32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8311b604
	if (!cr6.eq) goto loc_8311B604;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// bne cr6,0x8311b64c
	if (!cr6.eq) goto loc_8311B64C;
loc_8311B604:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// ble cr6,0x8311b630
	if (!cr6.gt) goto loc_8311B630;
	// mulli r11,r29,224
	ctx.r11.s64 = ctx.r29.s64 * 224;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r29,r28,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r28.s64;
loc_8311B618:
	// addi r4,r30,-224
	ctx.r4.s64 = ctx.r30.s64 + -224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x8311B624;
	sub_82B1E0E8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,-224
	ctx.r30.s64 = ctx.r30.s64 + -224;
	// bne 0x8311b618
	if (!cr0.eq) goto loc_8311B618;
loc_8311B630:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r28,224
	ctx.r11.s64 = ctx.r28.s64 * 224;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_8311B644:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x8311B64C;
	sub_82B1E0E8(ctx, base);
loc_8311B64C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311B654"))) PPC_WEAK_FUNC(sub_8311B654);
PPC_FUNC_IMPL(__imp__sub_8311B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B658"))) PPC_WEAK_FUNC(sub_8311B658);
PPC_FUNC_IMPL(__imp__sub_8311B658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8311B660;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r25,r3,96
	ctx.r25.s64 = ctx.r3.s64 + 6291456;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r25,r25,-4892
	ctx.r25.s64 = ctx.r25.s64 + -4892;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r29,850
	cr6.compare<uint32_t>(ctx.r29.u32, 850, xer);
	// bge cr6,0x8311b77c
	if (!cr6.lt) goto loc_8311B77C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,87
	ctx.r7.s64 = 5701632;
	// mulli r11,r29,632
	ctx.r11.s64 = ctx.r29.s64 * 632;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// ori r31,r7,45232
	ctx.r31.u64 = ctx.r7.u64 | 45232;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r28,r3,r31
	ctx.r28.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r4,r6,r31
	ctx.r4.u64 = ctx.r6.u64 + ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311a840
	ctx.lr = 0x8311B6C0;
	sub_8311A840(ctx, base);
	// ld r5,44(r26)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r26.u32 + 44);
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lhz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lhz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8311b6f4
	if (!cr6.eq) goto loc_8311B6F4;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8311b6f8
	if (cr6.eq) goto loc_8311B6F8;
loc_8311B6F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311B6F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311b774
	if (!cr6.eq) goto loc_8311B774;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// subf r10,r28,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r28.s64;
	// ori r9,r11,5128
	ctx.r9.u64 = ctx.r11.u64 | 5128;
	// li r8,632
	ctx.r8.s64 = 632;
	// divw r27,r10,r8
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r8.s32);
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8311b72c
	if (!cr6.eq) goto loc_8311B72C;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, xer);
	// bne cr6,0x8311b77c
	if (!cr6.eq) goto loc_8311B77C;
loc_8311B72C:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// ble cr6,0x8311b75c
	if (!cr6.gt) goto loc_8311B75C;
	// mulli r11,r29,632
	ctx.r11.s64 = ctx.r29.s64 * 632;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r28,r27,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r27.s64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8311B744:
	// addi r4,r29,-632
	ctx.r4.s64 = ctx.r29.s64 + -632;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x8311B750;
	sub_82D8A4D8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,-632
	ctx.r29.s64 = ctx.r29.s64 + -632;
	// bne 0x8311b744
	if (!cr0.eq) goto loc_8311B744;
loc_8311B75C:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulli r11,r27,632
	ctx.r11.s64 = ctx.r27.s64 * 632;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_8311B774:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82d8a4d8
	ctx.lr = 0x8311B77C;
	sub_82D8A4D8(ctx, base);
loc_8311B77C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311B784"))) PPC_WEAK_FUNC(sub_8311B784);
PPC_FUNC_IMPL(__imp__sub_8311B784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B788"))) PPC_WEAK_FUNC(sub_8311B788);
PPC_FUNC_IMPL(__imp__sub_8311B788) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311a728
	ctx.lr = 0x8311B7BC;
	sub_8311A728(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x8311b81c
	if (cr6.eq) goto loc_8311B81C;
	// ld r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bne cr6,0x8311b7e8
	if (!cr6.eq) goto loc_8311B7E8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x8311b810
	goto loc_8311B810;
loc_8311B7E8:
	// lhz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x8311b808
	if (!cr6.eq) goto loc_8311B808;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8311b80c
	if (cr6.eq) goto loc_8311B80C;
loc_8311B808:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311B80C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8311B810:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311b820
	if (!cr6.eq) goto loc_8311B820;
loc_8311B81C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311B820:
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

__attribute__((alias("__imp__sub_8311B834"))) PPC_WEAK_FUNC(sub_8311B834);
PPC_FUNC_IMPL(__imp__sub_8311B834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B838"))) PPC_WEAK_FUNC(sub_8311B838);
PPC_FUNC_IMPL(__imp__sub_8311B838) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311a7b8
	ctx.lr = 0x8311B874;
	sub_8311A7B8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x8311b8b4
	if (cr6.eq) goto loc_8311B8B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8311b8a4
	if (!cr6.eq) goto loc_8311B8A4;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8311b8a8
	if (cr6.eq) goto loc_8311B8A8;
loc_8311B8A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311B8A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311b8b8
	if (!cr6.eq) goto loc_8311B8B8;
loc_8311B8B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311B8B8:
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

__attribute__((alias("__imp__sub_8311B8D0"))) PPC_WEAK_FUNC(sub_8311B8D0);
PPC_FUNC_IMPL(__imp__sub_8311B8D0) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311a840
	ctx.lr = 0x8311B904;
	sub_8311A840(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x8311b948
	if (cr6.eq) goto loc_8311B948;
	// ld r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// lhz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x8311b938
	if (!cr6.eq) goto loc_8311B938;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8311b93c
	if (cr6.eq) goto loc_8311B93C;
loc_8311B938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311B93C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311b94c
	if (!cr6.eq) goto loc_8311B94C;
loc_8311B948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311B94C:
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

__attribute__((alias("__imp__sub_8311B960"))) PPC_WEAK_FUNC(sub_8311B960);
PPC_FUNC_IMPL(__imp__sub_8311B960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,548
	ctx.r10.s64 = 548;
	// divw. r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x8311b9ac
	if (!cr0.gt) goto loc_8311B9AC;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
loc_8311B974:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mulli r9,r10,548
	ctx.r9.s64 = ctx.r10.s64 * 548;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x8311b9a0
	if (!cr6.lt) goto loc_8311B9A0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r9,548
	ctx.r3.s64 = ctx.r9.s64 + 548;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8311b9a4
	goto loc_8311B9A4;
loc_8311B9A0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8311B9A4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8311b974
	if (cr6.gt) goto loc_8311B974;
loc_8311B9AC:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8311b9c4
	if (cr6.eq) goto loc_8311B9C4;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8311B9C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311B9CC"))) PPC_WEAK_FUNC(sub_8311B9CC);
PPC_FUNC_IMPL(__imp__sub_8311B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311B9D0"))) PPC_WEAK_FUNC(sub_8311B9D0);
PPC_FUNC_IMPL(__imp__sub_8311B9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,588
	ctx.r10.s64 = 588;
	// divw. r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble 0x8311ba1c
	if (!cr0.gt) goto loc_8311BA1C;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
loc_8311B9E4:
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mulli r9,r10,588
	ctx.r9.s64 = ctx.r10.s64 * 588;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x8311ba10
	if (!cr6.lt) goto loc_8311BA10;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r9,588
	ctx.r3.s64 = ctx.r9.s64 + 588;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8311ba14
	goto loc_8311BA14;
loc_8311BA10:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8311BA14:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x8311b9e4
	if (cr6.gt) goto loc_8311B9E4;
loc_8311BA1C:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8311ba34
	if (cr6.eq) goto loc_8311BA34;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8311BA34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BA3C"))) PPC_WEAK_FUNC(sub_8311BA3C);
PPC_FUNC_IMPL(__imp__sub_8311BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311BA40"))) PPC_WEAK_FUNC(sub_8311BA40);
PPC_FUNC_IMPL(__imp__sub_8311BA40) {
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
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r10,r11,60636
	ctx.r10.u64 = ctx.r11.u64 | 60636;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mulli r11,r9,224
	ctx.r11.s64 = ctx.r9.s64 * 224;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x8311b788
	ctx.lr = 0x8311BA74;
	sub_8311B788(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311bb10
	if (!cr6.eq) goto loc_8311BB10;
	// addis r9,r31,72
	ctx.r9.s64 = ctx.r31.s64 + 4718592;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lhz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// li r10,21033
	ctx.r10.s64 = 21033;
	// addi r9,r9,-7156
	ctx.r9.s64 = ctx.r9.s64 + -7156;
loc_8311BA90:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8311bab0
	if (!cr6.eq) goto loc_8311BAB0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x8311bad8
	goto loc_8311BAD8;
loc_8311BAB0:
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x8311bad0
	if (!cr6.eq) goto loc_8311BAD0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8311bad4
	if (cr6.eq) goto loc_8311BAD4;
loc_8311BAD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311BAD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8311BAD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311bb08
	if (!cr6.eq) goto loc_8311BB08;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,224
	ctx.r9.s64 = ctx.r9.s64 + 224;
	// cmplwi cr6,r10,21097
	cr6.compare<uint32_t>(ctx.r10.u32, 21097, xer);
	// blt cr6,0x8311ba90
	if (cr6.lt) goto loc_8311BA90;
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
loc_8311BB08:
	// mulli r11,r10,224
	ctx.r11.s64 = ctx.r10.s64 * 224;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8311BB10:
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

__attribute__((alias("__imp__sub_8311BB24"))) PPC_WEAK_FUNC(sub_8311BB24);
PPC_FUNC_IMPL(__imp__sub_8311BB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311BB28"))) PPC_WEAK_FUNC(sub_8311BB28);
PPC_FUNC_IMPL(__imp__sub_8311BB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8311BB30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r11,60640
	ctx.r9.u64 = ctx.r11.u64 | 60640;
	// lis r10,72
	ctx.r10.s64 = 4718592;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r31,r10,7136
	ctx.r31.u64 = ctx.r10.u64 | 7136;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mulli r11,r8,1312
	ctx.r11.s64 = ctx.r8.s64 * 1312;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r7,r31
	ctx.r4.u64 = ctx.r7.u64 + ctx.r31.u64;
	// bl 0x8311b838
	ctx.lr = 0x8311BB68;
	sub_8311B838(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311bbf8
	if (!cr6.eq) goto loc_8311BBF8;
	// addis r10,r30,13
	ctx.r10.s64 = ctx.r30.s64 + 851968;
	// rlwinm r9,r29,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// addi r10,r10,2144
	ctx.r10.s64 = ctx.r10.s64 + 2144;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r7,r11,14,18,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x8311bba4
	if (!cr6.eq) goto loc_8311BBA4;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8311bba8
	if (cr6.eq) goto loc_8311BBA8;
loc_8311BBA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311BBA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311bbb8
	if (cr6.eq) goto loc_8311BBB8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_8311BBB8:
	// addis r10,r10,72
	ctx.r10.s64 = ctx.r10.s64 + 4718592;
	// addi r10,r10,8448
	ctx.r10.s64 = ctx.r10.s64 + 8448;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x8311bbe4
	if (!cr6.eq) goto loc_8311BBE4;
	// xor r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8311bbe8
	if (cr6.eq) goto loc_8311BBE8;
loc_8311BBE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311BBE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311bbf8
	if (cr6.eq) goto loc_8311BBF8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8311BBF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311BC00"))) PPC_WEAK_FUNC(sub_8311BC00);
PPC_FUNC_IMPL(__imp__sub_8311BC00) {
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
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,60644
	ctx.r9.u64 = ctx.r11.u64 | 60644;
	// lis r10,87
	ctx.r10.s64 = 5701632;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r11,r10,45232
	ctx.r11.u64 = ctx.r10.u64 | 45232;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mulli r11,r7,632
	ctx.r11.s64 = ctx.r7.s64 * 632;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// bl 0x8311b8d0
	ctx.lr = 0x8311BC48;
	sub_8311B8D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311bca8
	if (!cr6.eq) goto loc_8311BCA8;
	// li r11,199
	ctx.r11.s64 = 199;
	// lhz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// addis r10,r31,94
	ctx.r10.s64 = ctx.r31.s64 + 6160384;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r10,-2088
	ctx.r10.s64 = ctx.r10.s64 + -2088;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_8311BC68:
	// ld r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 44);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x8311bc8c
	if (!cr6.eq) goto loc_8311BC8C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8311bc90
	if (cr6.eq) goto loc_8311BC90;
loc_8311BC8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311BC90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311bca0
	if (cr6.eq) goto loc_8311BCA0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_8311BCA0:
	// addi r10,r10,632
	ctx.r10.s64 = ctx.r10.s64 + 632;
	// bdnz 0x8311bc68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311BC68;
loc_8311BCA8:
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

__attribute__((alias("__imp__sub_8311BCBC"))) PPC_WEAK_FUNC(sub_8311BCBC);
PPC_FUNC_IMPL(__imp__sub_8311BCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311BCC0"))) PPC_WEAK_FUNC(sub_8311BCC0);
PPC_FUNC_IMPL(__imp__sub_8311BCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8311BCC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r4,16
	ctx.r28.u64 = ctx.r4.u32 & 0xFFFF;
	// lis r11,111
	ctx.r11.s64 = 7274496;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,9000
	cr6.compare<uint32_t>(ctx.r28.u32, 9000, xer);
	// ori r31,r11,5452
	ctx.r31.u64 = ctx.r11.u64 | 5452;
	// bge cr6,0x8311bd08
	if (!cr6.lt) goto loc_8311BD08;
	// mulli r11,r28,588
	ctx.r11.s64 = ctx.r28.s64 * 588;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bne cr6,0x8311bd08
	if (!cr6.eq) goto loc_8311BD08;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311bd5c
	if (!cr6.eq) goto loc_8311BD5C;
loc_8311BD08:
	// add r30,r29,r31
	ctx.r30.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addis r4,r29,192
	ctx.r4.s64 = ctx.r29.s64 + 12582912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,-10964
	ctx.r4.s64 = ctx.r4.s64 + -10964;
	// bl 0x8311b9d0
	ctx.lr = 0x8311BD1C;
	sub_8311B9D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311bd5c
	if (!cr6.eq) goto loc_8311BD5C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8311BD2C:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// beq cr6,0x8311bd50
	if (cr6.eq) goto loc_8311BD50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,588
	ctx.r10.s64 = ctx.r10.s64 + 588;
	// cmplwi cr6,r11,9000
	cr6.compare<uint32_t>(ctx.r11.u32, 9000, xer);
	// blt cr6,0x8311bd2c
	if (cr6.lt) goto loc_8311BD2C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8311BD50:
	// mulli r11,r11,588
	ctx.r11.s64 = ctx.r11.s64 * 588;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8311BD5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311BD64"))) PPC_WEAK_FUNC(sub_8311BD64);
PPC_FUNC_IMPL(__imp__sub_8311BD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311BD68"))) PPC_WEAK_FUNC(sub_8311BD68);
PPC_FUNC_IMPL(__imp__sub_8311BD68) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,65533
	cr6.compare<uint32_t>(ctx.r11.u32, 65533, xer);
	// beq cr6,0x8311bdc8
	if (cr6.eq) goto loc_8311BDC8;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// beq cr6,0x8311bdc8
	if (cr6.eq) goto loc_8311BDC8;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8311bdb4
	if (!cr6.eq) goto loc_8311BDB4;
	// bl 0x831179d0
	ctx.lr = 0x8311BDA4;
	sub_831179D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8311BDB4:
	// bl 0x8311ba40
	ctx.lr = 0x8311BDB8;
	sub_8311BA40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8311BDC8:
	// bl 0x831156e8
	ctx.lr = 0x8311BDCC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123be0
	ctx.lr = 0x8311BDE0;
	sub_83123BE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BDF0"))) PPC_WEAK_FUNC(sub_8311BDF0);
PPC_FUNC_IMPL(__imp__sub_8311BDF0) {
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
	// rlwinm r11,r4,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// cmplwi cr6,r11,16381
	cr6.compare<uint32_t>(ctx.r11.u32, 16381, xer);
	// beq cr6,0x8311be50
	if (cr6.eq) goto loc_8311BE50;
	// cmplwi cr6,r11,16382
	cr6.compare<uint32_t>(ctx.r11.u32, 16382, xer);
	// beq cr6,0x8311be50
	if (cr6.eq) goto loc_8311BE50;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8311be3c
	if (!cr6.eq) goto loc_8311BE3C;
	// bl 0x83117a78
	ctx.lr = 0x8311BE2C;
	sub_83117A78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8311BE3C:
	// bl 0x8311bb28
	ctx.lr = 0x8311BE40;
	sub_8311BB28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8311BE50:
	// bl 0x831156e8
	ctx.lr = 0x8311BE54;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a30
	ctx.lr = 0x8311BE68;
	sub_83123A30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BE78"))) PPC_WEAK_FUNC(sub_8311BE78);
PPC_FUNC_IMPL(__imp__sub_8311BE78) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,65533
	cr6.compare<uint32_t>(ctx.r11.u32, 65533, xer);
	// beq cr6,0x8311bed8
	if (cr6.eq) goto loc_8311BED8;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// beq cr6,0x8311bed8
	if (cr6.eq) goto loc_8311BED8;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8311bec4
	if (!cr6.eq) goto loc_8311BEC4;
	// bl 0x83117af0
	ctx.lr = 0x8311BEB4;
	sub_83117AF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8311BEC4:
	// bl 0x8311bc00
	ctx.lr = 0x8311BEC8;
	sub_8311BC00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8311BED8:
	// bl 0x831156e8
	ctx.lr = 0x8311BEDC;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123b00
	ctx.lr = 0x8311BEF0;
	sub_83123B00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311BF00"))) PPC_WEAK_FUNC(sub_8311BF00);
PPC_FUNC_IMPL(__imp__sub_8311BF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8311bf64
	if (!cr6.eq) goto loc_8311BF64;
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,11904
	ctx.r11.u64 = ctx.r11.u64 | 11904;
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_8311BF30:
	// lhz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x8311bf54
	if (cr6.eq) goto loc_8311BF54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,548
	ctx.r8.s64 = ctx.r8.s64 + 548;
	// cmplwi cr6,r10,300
	cr6.compare<uint32_t>(ctx.r10.u32, 300, xer);
	// blt cr6,0x8311bf30
	if (cr6.lt) goto loc_8311BF30;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311BF54:
	// mulli r10,r10,548
	ctx.r10.s64 = ctx.r10.s64 * 548;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_8311BF64:
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// ori r8,r11,60648
	ctx.r8.u64 = ctx.r11.u64 | 60648;
	// ori r11,r10,11904
	ctx.r11.u64 = ctx.r10.u64 | 11904;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mulli r11,r6,548
	ctx.r11.s64 = ctx.r6.s64 * 548;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 + ctx.r7.u64;
	// b 0x8311b960
	sub_8311B960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311BF90"))) PPC_WEAK_FUNC(sub_8311BF90);
PPC_FUNC_IMPL(__imp__sub_8311BF90) {
	PPC_FUNC_PROLOGUE();
	// b 0x8311bcc0
	sub_8311BCC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311BF94"))) PPC_WEAK_FUNC(sub_8311BF94);
PPC_FUNC_IMPL(__imp__sub_8311BF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311BF98"))) PPC_WEAK_FUNC(sub_8311BF98);
PPC_FUNC_IMPL(__imp__sub_8311BF98) {
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
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-9588
	ctx.r9.s64 = ctx.r11.s64 + -9588;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8311c034
	if (cr6.eq) goto loc_8311C034;
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,65533
	cr6.compare<uint32_t>(ctx.r11.u32, 65533, xer);
	// beq cr6,0x8311c050
	if (cr6.eq) goto loc_8311C050;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// beq cr6,0x8311c050
	if (cr6.eq) goto loc_8311C050;
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// ori r9,r10,5128
	ctx.r9.u64 = ctx.r10.u64 | 5128;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8311c024
	if (!cr6.eq) goto loc_8311C024;
	// cmplwi cr6,r11,21097
	cr6.compare<uint32_t>(ctx.r11.u32, 21097, xer);
	// bgt cr6,0x8311c004
	if (cr6.gt) goto loc_8311C004;
	// mulli r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 * 224;
	// add. r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8311c00c
	if (!cr0.eq) goto loc_8311C00C;
loc_8311C004:
	// addis r11,r31,237
	ctx.r11.s64 = ctx.r31.s64 + 15532032;
	// addi r11,r11,13856
	ctx.r11.s64 = ctx.r11.s64 + 13856;
loc_8311C00C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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
loc_8311C024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311ba40
	ctx.lr = 0x8311C02C;
	sub_8311BA40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311c068
	if (!cr6.eq) goto loc_8311C068;
loc_8311C034:
	// addis r3,r31,237
	ctx.r3.s64 = ctx.r31.s64 + 15532032;
	// addi r3,r3,13856
	ctx.r3.s64 = ctx.r3.s64 + 13856;
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
loc_8311C050:
	// bl 0x831156e8
	ctx.lr = 0x8311C054;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123be0
	ctx.lr = 0x8311C068;
	sub_83123BE0(ctx, base);
loc_8311C068:
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

__attribute__((alias("__imp__sub_8311C07C"))) PPC_WEAK_FUNC(sub_8311C07C);
PPC_FUNC_IMPL(__imp__sub_8311C07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C080"))) PPC_WEAK_FUNC(sub_8311C080);
PPC_FUNC_IMPL(__imp__sub_8311C080) {
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
	// bl 0x8311ba40
	ctx.lr = 0x8311C090;
	sub_8311BA40(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_8311C0A8"))) PPC_WEAK_FUNC(sub_8311C0A8);
PPC_FUNC_IMPL(__imp__sub_8311C0A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8311C0B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x8311c140
	if (cr6.eq) goto loc_8311C140;
	// bl 0x8311ba40
	ctx.lr = 0x8311C0D0;
	sub_8311BA40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8311c140
	if (cr6.eq) goto loc_8311C140;
	// addis r30,r28,96
	ctx.r30.s64 = ctx.r28.s64 + 6291456;
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// addi r30,r30,-4900
	ctx.r30.s64 = ctx.r30.s64 + -4900;
	// li r10,224
	ctx.r10.s64 = 224;
	// divw r31,r11,r10
	ctx.r31.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8311c130
	if (!cr6.lt) goto loc_8311C130;
	// mulli r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 * 224;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_8311C108:
	// cmplwi cr6,r31,20999
	cr6.compare<uint32_t>(ctx.r31.u32, 20999, xer);
	// bge cr6,0x8311c11c
	if (!cr6.lt) goto loc_8311C11C;
	// addi r4,r29,224
	ctx.r4.s64 = ctx.r29.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b1e0e8
	ctx.lr = 0x8311C11C;
	sub_82B1E0E8(ctx, base);
loc_8311C11C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,224
	ctx.r29.s64 = ctx.r29.s64 + 224;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x8311c108
	if (cr6.lt) goto loc_8311C108;
loc_8311C130:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mulli r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 * 224;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82b00b98
	ctx.lr = 0x8311C140;
	sub_82B00B98(ctx, base);
loc_8311C140:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311C148"))) PPC_WEAK_FUNC(sub_8311C148);
PPC_FUNC_IMPL(__imp__sub_8311C148) {
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
	// clrlwi r11,r4,14
	ctx.r11.u64 = ctx.r4.u32 & 0x3FFFF;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311c214
	if (cr6.eq) goto loc_8311C214;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r10,-9540(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9540);
	// clrlwi r9,r10,14
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311c214
	if (cr6.eq) goto loc_8311C214;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,65520
	ctx.r9.u64 = ctx.r10.u64 | 65520;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8311c1a0
	if (cr6.lt) goto loc_8311C1A0;
	// lis r10,3
	ctx.r10.s64 = 196608;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8311c214
	if (!cr6.gt) goto loc_8311C214;
loc_8311C1A0:
	// rlwinm r11,r4,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 14) & 0x3FFF;
	// cmplwi cr6,r11,16381
	cr6.compare<uint32_t>(ctx.r11.u32, 16381, xer);
	// beq cr6,0x8311c230
	if (cr6.eq) goto loc_8311C230;
	// cmplwi cr6,r11,16382
	cr6.compare<uint32_t>(ctx.r11.u32, 16382, xer);
	// beq cr6,0x8311c230
	if (cr6.eq) goto loc_8311C230;
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// ori r9,r10,5128
	ctx.r9.u64 = ctx.r10.u64 | 5128;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8311c204
	if (!cr6.eq) goto loc_8311C204;
	// cmplwi cr6,r11,653
	cr6.compare<uint32_t>(ctx.r11.u32, 653, xer);
	// bgt cr6,0x8311c1e4
	if (cr6.gt) goto loc_8311C1E4;
	// mulli r11,r11,1312
	ctx.r11.s64 = ctx.r11.s64 * 1312;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 4718592;
	// addic. r11,r11,7136
	xer.ca = ctx.r11.u32 > 4294960159;
	ctx.r11.s64 = ctx.r11.s64 + 7136;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8311c1ec
	if (!cr0.eq) goto loc_8311C1EC;
loc_8311C1E4:
	// addis r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 6291456;
	// addi r11,r11,-7392
	ctx.r11.s64 = ctx.r11.s64 + -7392;
loc_8311C1EC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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
loc_8311C204:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bb28
	ctx.lr = 0x8311C20C;
	sub_8311BB28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311c21c
	if (!cr6.eq) goto loc_8311C21C;
loc_8311C214:
	// addis r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 6291456;
	// addi r3,r3,-7392
	ctx.r3.s64 = ctx.r3.s64 + -7392;
loc_8311C21C:
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
loc_8311C230:
	// bl 0x831156e8
	ctx.lr = 0x8311C234;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123a30
	ctx.lr = 0x8311C248;
	sub_83123A30(ctx, base);
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

__attribute__((alias("__imp__sub_8311C25C"))) PPC_WEAK_FUNC(sub_8311C25C);
PPC_FUNC_IMPL(__imp__sub_8311C25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C260"))) PPC_WEAK_FUNC(sub_8311C260);
PPC_FUNC_IMPL(__imp__sub_8311C260) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,65533
	cr6.compare<uint32_t>(ctx.r11.u32, 65533, xer);
	// beq cr6,0x8311c308
	if (cr6.eq) goto loc_8311C308;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(ctx.r11.u32, 65534, xer);
	// beq cr6,0x8311c308
	if (cr6.eq) goto loc_8311C308;
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// ori r9,r10,5128
	ctx.r9.u64 = ctx.r10.u64 | 5128;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8311c2dc
	if (!cr6.eq) goto loc_8311C2DC;
	// cmplwi cr6,r11,850
	cr6.compare<uint32_t>(ctx.r11.u32, 850, xer);
	// bgt cr6,0x8311c2bc
	if (cr6.gt) goto loc_8311C2BC;
	// mulli r11,r11,632
	ctx.r11.s64 = ctx.r11.s64 * 632;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 5767168;
	// addic. r11,r11,-20304
	xer.ca = ctx.r11.u32 > 20303;
	ctx.r11.s64 = ctx.r11.s64 + -20304;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x8311c2c4
	if (!cr0.eq) goto loc_8311C2C4;
loc_8311C2BC:
	// addis r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 6291456;
	// addi r11,r11,-5532
	ctx.r11.s64 = ctx.r11.s64 + -5532;
loc_8311C2C4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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
loc_8311C2DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311bc00
	ctx.lr = 0x8311C2E4;
	sub_8311BC00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311c320
	if (!cr6.eq) goto loc_8311C320;
	// addis r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 6291456;
	// addi r3,r3,-5532
	ctx.r3.s64 = ctx.r3.s64 + -5532;
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
loc_8311C308:
	// bl 0x831156e8
	ctx.lr = 0x8311C30C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123b00
	ctx.lr = 0x8311C320;
	sub_83123B00(ctx, base);
loc_8311C320:
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

__attribute__((alias("__imp__sub_8311C334"))) PPC_WEAK_FUNC(sub_8311C334);
PPC_FUNC_IMPL(__imp__sub_8311C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C338"))) PPC_WEAK_FUNC(sub_8311C338);
PPC_FUNC_IMPL(__imp__sub_8311C338) {
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
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x8311c3bc
	if (cr6.eq) goto loc_8311C3BC;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8311c384
	if (!cr6.eq) goto loc_8311C384;
	// bl 0x83117980
	ctx.lr = 0x8311C370;
	sub_83117980(ctx, base);
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
loc_8311C384:
	// lis r11,95
	ctx.r11.s64 = 6225920;
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// ori r9,r11,60648
	ctx.r9.u64 = ctx.r11.u64 | 60648;
	// ori r11,r10,11904
	ctx.r11.u64 = ctx.r10.u64 | 11904;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// mulli r11,r7,548
	ctx.r11.s64 = ctx.r7.s64 * 548;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// bl 0x8311b960
	ctx.lr = 0x8311C3B4;
	sub_8311B960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311c3c4
	if (!cr6.eq) goto loc_8311C3C4;
loc_8311C3BC:
	// addis r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 6291456;
	// addi r3,r3,-6080
	ctx.r3.s64 = ctx.r3.s64 + -6080;
loc_8311C3C4:
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

__attribute__((alias("__imp__sub_8311C3D8"))) PPC_WEAK_FUNC(sub_8311C3D8);
PPC_FUNC_IMPL(__imp__sub_8311C3D8) {
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
	// bl 0x8311bcc0
	ctx.lr = 0x8311C3F0;
	sub_8311BCC0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311c400
	if (!cr6.eq) goto loc_8311C400;
	// addis r3,r31,111
	ctx.r3.s64 = ctx.r31.s64 + 7274496;
	// addi r3,r3,5452
	ctx.r3.s64 = ctx.r3.s64 + 5452;
loc_8311C400:
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

__attribute__((alias("__imp__sub_8311C414"))) PPC_WEAK_FUNC(sub_8311C414);
PPC_FUNC_IMPL(__imp__sub_8311C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C418"))) PPC_WEAK_FUNC(sub_8311C418);
PPC_FUNC_IMPL(__imp__sub_8311C418) {
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
	// lhz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// bl 0x8311bcc0
	ctx.lr = 0x8311C42C;
	sub_8311BCC0(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
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

__attribute__((alias("__imp__sub_8311C444"))) PPC_WEAK_FUNC(sub_8311C444);
PPC_FUNC_IMPL(__imp__sub_8311C444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C448"))) PPC_WEAK_FUNC(sub_8311C448);
PPC_FUNC_IMPL(__imp__sub_8311C448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8311C450;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// sth r4,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r4.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,236
	ctx.r8.s64 = 15466496;
	// lis r7,236
	ctx.r7.s64 = 15466496;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// ori r6,r8,10572
	ctx.r6.u64 = ctx.r8.u64 | 10572;
	// ori r10,r7,5132
	ctx.r10.u64 = ctx.r7.u64 | 5132;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mulli r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 * 136;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r9,r4
	ctx.r29.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311a8d0
	ctx.lr = 0x8311C4A8;
	sub_8311A8D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x8311c4d4
	if (cr6.eq) goto loc_8311C4D4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83124aa8
	ctx.lr = 0x8311C4C0;
	sub_83124AA8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8311c4d8
	if (cr6.eq) goto loc_8311C4D8;
loc_8311C4D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311C4D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311C4E0"))) PPC_WEAK_FUNC(sub_8311C4E0);
PPC_FUNC_IMPL(__imp__sub_8311C4E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8311C4E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,236
	ctx.r10.s64 = 15466496;
	// sth r4,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r4.u16);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,236
	ctx.r8.s64 = 15466496;
	// ori r6,r10,19144
	ctx.r6.u64 = ctx.r10.u64 | 19144;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r8,11944
	ctx.r10.u64 = ctx.r8.u64 | 11944;
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r9,r4
	ctx.r29.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311a950
	ctx.lr = 0x8311C54C;
	sub_8311A950(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x8311c578
	if (cr6.eq) goto loc_8311C578;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831251c0
	ctx.lr = 0x8311C564;
	sub_831251C0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8311c57c
	if (cr6.eq) goto loc_8311C57C;
loc_8311C578:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311C57C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311C584"))) PPC_WEAK_FUNC(sub_8311C584);
PPC_FUNC_IMPL(__imp__sub_8311C584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C588"))) PPC_WEAK_FUNC(sub_8311C588);
PPC_FUNC_IMPL(__imp__sub_8311C588) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,237
	ctx.r8.s64 = 15532032;
	// lis r7,236
	ctx.r7.s64 = 15466496;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// ori r6,r8,10776
	ctx.r6.u64 = ctx.r8.u64 | 10776;
	// ori r10,r7,45912
	ctx.r10.u64 = ctx.r7.u64 | 45912;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mulli r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 * 76;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r9,r4
	ctx.r30.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311aee0
	ctx.lr = 0x8311C5EC;
	sub_8311AEE0(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x8311c604
	if (cr6.eq) goto loc_8311C604;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r11,9,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x8311c60c
	if (cr6.eq) goto loc_8311C60C;
loc_8311C604:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8311c610
	goto loc_8311C610;
loc_8311C60C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8311C610:
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

__attribute__((alias("__imp__sub_8311C628"))) PPC_WEAK_FUNC(sub_8311C628);
PPC_FUNC_IMPL(__imp__sub_8311C628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8311C630;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lis r9,237
	ctx.r9.s64 = 15532032;
	// lis r8,236
	ctx.r8.s64 = 15466496;
	// ori r7,r9,10776
	ctx.r7.u64 = ctx.r9.u64 | 10776;
	// ori r11,r8,45912
	ctx.r11.u64 = ctx.r8.u64 | 45912;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r30,r3,r11
	ctx.r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r4,r3,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mulli r11,r4,76
	ctx.r11.s64 = ctx.r4.s64 * 76;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r11,r6
	ctx.r29.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8311aee0
	ctx.lr = 0x8311C684;
	sub_8311AEE0(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x8311c69c
	if (cr6.eq) goto loc_8311C69C;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// rlwinm r10,r11,9,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1FF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x8311c6a0
	if (cr6.eq) goto loc_8311C6A0;
loc_8311C69C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8311C6A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311C6A8"))) PPC_WEAK_FUNC(sub_8311C6A8);
PPC_FUNC_IMPL(__imp__sub_8311C6A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// rlwinm r11,r3,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xF;
	// li r10,7
	ctx.r10.s64 = 7;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C6C0"))) PPC_WEAK_FUNC(sub_8311C6C0);
PPC_FUNC_IMPL(__imp__sub_8311C6C0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,18,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFC3FFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C6C8"))) PPC_WEAK_FUNC(sub_8311C6C8);
PPC_FUNC_IMPL(__imp__sub_8311C6C8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r3,r3,4
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C6D0"))) PPC_WEAK_FUNC(sub_8311C6D0);
PPC_FUNC_IMPL(__imp__sub_8311C6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r3,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 15) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r3,r3,0,15,13
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C6E4"))) PPC_WEAK_FUNC(sub_8311C6E4);
PPC_FUNC_IMPL(__imp__sub_8311C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C6E8"))) PPC_WEAK_FUNC(sub_8311C6E8);
PPC_FUNC_IMPL(__imp__sub_8311C6E8) {
	PPC_FUNC_PROLOGUE();
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// clrlwi r10,r11,4
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// stw r10,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r10.u32);
	// ld r9,24(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C704"))) PPC_WEAK_FUNC(sub_8311C704);
PPC_FUNC_IMPL(__imp__sub_8311C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C708"))) PPC_WEAK_FUNC(sub_8311C708);
PPC_FUNC_IMPL(__imp__sub_8311C708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,7
	ctx.r11.s64 = 7;
	// rlwinm r10,r3,0,18,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFC3FFF;
	// subfc r9,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// rlwinm r5,r6,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0xFFFFC000;
	// or r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 | ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C728"))) PPC_WEAK_FUNC(sub_8311C728);
PPC_FUNC_IMPL(__imp__sub_8311C728) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,18,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFC3FFF;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C734"))) PPC_WEAK_FUNC(sub_8311C734);
PPC_FUNC_IMPL(__imp__sub_8311C734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C738"))) PPC_WEAK_FUNC(sub_8311C738);
PPC_FUNC_IMPL(__imp__sub_8311C738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// rlwinm r11,r3,18,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0xF;
	// li r10,7
	ctx.r10.s64 = 7;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r11
	ctx.r3.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C750"))) PPC_WEAK_FUNC(sub_8311C750);
PPC_FUNC_IMPL(__imp__sub_8311C750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,7
	ctx.r11.s64 = 7;
	// subfc r10,r11,r4
	xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 & ctx.r4.u64;
	// rlwimi r3,r7,28,0,3
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 28) & 0xF0000000) | (ctx.r3.u64 & 0xFFFFFFFF0FFFFFFF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C768"))) PPC_WEAK_FUNC(sub_8311C768);
PPC_FUNC_IMPL(__imp__sub_8311C768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,7
	ctx.r11.s64 = 7;
	// clrlwi r10,r4,14
	ctx.r10.u64 = ctx.r4.u32 & 0x3FFFF;
	// subfc r9,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 & ctx.r5.u64;
	// rlwimi r10,r6,14,0,17
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 14) & 0xFFFFC000) | (ctx.r10.u64 & 0xFFFFFFFF00003FFF);
	// rlwimi r10,r4,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C78C"))) PPC_WEAK_FUNC(sub_8311C78C);
PPC_FUNC_IMPL(__imp__sub_8311C78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C790"))) PPC_WEAK_FUNC(sub_8311C790);
PPC_FUNC_IMPL(__imp__sub_8311C790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// li r11,7
	ctx.r11.s64 = 7;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// subfc r9,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 & ctx.r5.u64;
	// rlwimi r10,r6,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r10.u32);
	// ld r5,24(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// std r5,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C7BC"))) PPC_WEAK_FUNC(sub_8311C7BC);
PPC_FUNC_IMPL(__imp__sub_8311C7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C7C0"))) PPC_WEAK_FUNC(sub_8311C7C0);
PPC_FUNC_IMPL(__imp__sub_8311C7C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311C7CC"))) PPC_WEAK_FUNC(sub_8311C7CC);
PPC_FUNC_IMPL(__imp__sub_8311C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C7D0"))) PPC_WEAK_FUNC(sub_8311C7D0);
PPC_FUNC_IMPL(__imp__sub_8311C7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8311C7D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,2500
	ctx.r30.s64 = 2500;
	// lis r29,-31772
	ctx.r29.s64 = -2082209792;
loc_8311C7EC:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311C7FC;
	sub_831CDCF0(ctx, base);
	// lwz r11,-9308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9308);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83744a28
	ctx.lr = 0x8311C818;
	sub_83744A28(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8311c85c
	if (cr6.eq) goto loc_8311C85C;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8311c85c
	if (cr6.eq) goto loc_8311C85C;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8311c85c
	if (cr6.lt) goto loc_8311C85C;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8311c85c
	if (cr6.gt) goto loc_8311C85C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8311C85C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8311C85C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// bne 0x8311c7ec
	if (!cr0.eq) goto loc_8311C7EC;
	// addis r31,r28,5
	ctx.r31.s64 = ctx.r28.s64 + 327680;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r30,21024
	ctx.r30.s64 = 21024;
	// addi r31,r31,2320
	ctx.r31.s64 = ctx.r31.s64 + 2320;
	// addi r29,r11,-9356
	ctx.r29.s64 = ctx.r11.s64 + -9356;
loc_8311C87C:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311C88C;
	sub_831CDCF0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8373f5f8
	ctx.lr = 0x8311C8A4;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311c8e8
	if (cr6.eq) goto loc_8311C8E8;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8311c8e8
	if (cr6.eq) goto loc_8311C8E8;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8311c8e8
	if (cr6.lt) goto loc_8311C8E8;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8311c8e8
	if (cr6.gt) goto loc_8311C8E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8311C8E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8311C8E8:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x8311c87c
	if (!cr0.eq) goto loc_8311C87C;
	// addis r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 1835008;
	// addi r3,r3,8720
	ctx.r3.s64 = ctx.r3.s64 + 8720;
	// bl 0x83147008
	ctx.lr = 0x8311C900;
	sub_83147008(ctx, base);
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r9,r11,3140
	ctx.r9.u64 = ctx.r11.u64 | 3140;
	// ori r8,r10,3142
	ctx.r8.u64 = ctx.r10.u64 | 3142;
	// li r11,0
	ctx.r11.s64 = 0;
	// sthx r11,r28,r9
	PPC_STORE_U16(ctx.r28.u32 + ctx.r9.u32, ctx.r11.u16);
	// sthx r11,r28,r8
	PPC_STORE_U16(ctx.r28.u32 + ctx.r8.u32, ctx.r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311C924"))) PPC_WEAK_FUNC(sub_8311C924);
PPC_FUNC_IMPL(__imp__sub_8311C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311C928"))) PPC_WEAK_FUNC(sub_8311C928);
PPC_FUNC_IMPL(__imp__sub_8311C928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8311C930;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,-31772
	ctx.r28.s64 = -2082209792;
loc_8311C94C:
	// lwz r11,-9308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -9308);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r30,r11,14,0,17
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// bl 0x83744a28
	ctx.lr = 0x8311C964;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311c9b8
	if (cr6.eq) goto loc_8311C9B8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311c9b8
	if (cr6.eq) goto loc_8311C9B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8311C98C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311c9b8
	if (cr6.eq) goto loc_8311C9B8;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8311c9b8
	if (cr6.lt) goto loc_8311C9B8;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8311c9bc
	if (!cr6.gt) goto loc_8311C9BC;
loc_8311C9B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311C9BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311c9dc
	if (cr6.eq) goto loc_8311C9DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x8311c9f8
	if (cr6.eq) goto loc_8311C9F8;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x8311c9ec
	if (cr6.eq) goto loc_8311C9EC;
loc_8311C9DC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// cmplwi cr6,r29,2500
	cr6.compare<uint32_t>(ctx.r29.u32, 2500, xer);
	// blt cr6,0x8311c94c
	if (cr6.lt) goto loc_8311C94C;
loc_8311C9EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8311C9F8:
	// mulli r11,r29,132
	ctx.r11.s64 = ctx.r29.s64 * 132;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831ce980
	ctx.lr = 0x8311CA0C;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311CA18"))) PPC_WEAK_FUNC(sub_8311CA18);
PPC_FUNC_IMPL(__imp__sub_8311CA18) {
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
	ctx.lr = 0x8311CA20;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addis r31,r3,5
	ctx.r31.s64 = ctx.r3.s64 + 327680;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r31,2320
	ctx.r31.s64 = ctx.r31.s64 + 2320;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r29,21024
	ctx.r29.s64 = 21024;
loc_8311CA3C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8311CA50;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311caa4
	if (cr6.eq) goto loc_8311CAA4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311caa4
	if (cr6.eq) goto loc_8311CAA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8311CA78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311caa4
	if (cr6.eq) goto loc_8311CAA4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8311caa4
	if (cr6.lt) goto loc_8311CAA4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8311caa8
	if (!cr6.gt) goto loc_8311CAA8;
loc_8311CAA4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8311CAA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cb0c
	if (cr6.eq) goto loc_8311CB0C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8311CAC4;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cad8
	if (cr6.eq) goto loc_8311CAD8;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x8311cafc
	goto loc_8311CAFC;
loc_8311CAD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83572958
	ctx.lr = 0x8311CAE8;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
loc_8311CAFC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8311cb0c
	if (cr6.eq) goto loc_8311CB0C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8311CB0C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// bne 0x8311ca3c
	if (!cr0.eq) goto loc_8311CA3C;
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// ori r9,r11,3142
	ctx.r9.u64 = ctx.r11.u64 | 3142;
	// sthx r28,r27,r9
	PPC_STORE_U16(ctx.r27.u32 + ctx.r9.u32, ctx.r28.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311CB2C"))) PPC_WEAK_FUNC(sub_8311CB2C);
PPC_FUNC_IMPL(__imp__sub_8311CB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311CB30"))) PPC_WEAK_FUNC(sub_8311CB30);
PPC_FUNC_IMPL(__imp__sub_8311CB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311CB38;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r10,r11,3140
	ctx.r10.u64 = ctx.r11.u64 | 3140;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lhzx r11,r3,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,2500
	cr6.compare<uint32_t>(ctx.r11.u32, 2500, xer);
	// bge cr6,0x8311cc10
	if (!cr6.lt) goto loc_8311CC10;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r28,2500
	cr6.compare<uint32_t>(ctx.r28.u32, 2500, xer);
	// blt cr6,0x8311cb68
	if (cr6.lt) goto loc_8311CB68;
	// li r28,2500
	ctx.r28.s64 = 2500;
loc_8311CB68:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// beq cr6,0x8311cc10
	if (cr6.eq) goto loc_8311CC10;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8311CB7C:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83744a28
	ctx.lr = 0x8311CB90;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cbe4
	if (cr6.eq) goto loc_8311CBE4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cbe4
	if (cr6.eq) goto loc_8311CBE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8311CBB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cbe4
	if (cr6.eq) goto loc_8311CBE4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8311cbe4
	if (cr6.lt) goto loc_8311CBE4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8311cbe8
	if (!cr6.gt) goto loc_8311CBE8;
loc_8311CBE4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8311CBE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cc00
	if (cr6.eq) goto loc_8311CC00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x8311cc1c
	if (cr6.eq) goto loc_8311CC1C;
loc_8311CC00:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x8311cb7c
	if (cr6.lt) goto loc_8311CB7C;
loc_8311CC10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8311CC1C:
	// mulli r11,r30,132
	ctx.r11.s64 = ctx.r30.s64 * 132;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311CC2C"))) PPC_WEAK_FUNC(sub_8311CC2C);
PPC_FUNC_IMPL(__imp__sub_8311CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311CC30"))) PPC_WEAK_FUNC(sub_8311CC30);
PPC_FUNC_IMPL(__imp__sub_8311CC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311CC38;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r11,-9308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9308);
	// li r29,2500
	ctx.r29.s64 = 2500;
	// rlwinm r26,r11,14,0,17
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
loc_8311CC5C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83744a28
	ctx.lr = 0x8311CC70;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ccc4
	if (cr6.eq) goto loc_8311CCC4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ccc4
	if (cr6.eq) goto loc_8311CCC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8311CC98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ccc4
	if (cr6.eq) goto loc_8311CCC4;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8311ccc4
	if (cr6.lt) goto loc_8311CCC4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8311ccc8
	if (!cr6.gt) goto loc_8311CCC8;
loc_8311CCC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8311CCC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cce4
	if (cr6.eq) goto loc_8311CCE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x8311cce4
	if (cr6.eq) goto loc_8311CCE4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8311CCE4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,132
	ctx.r31.s64 = ctx.r31.s64 + 132;
	// bne 0x8311cc5c
	if (!cr0.eq) goto loc_8311CC5C;
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// ori r9,r11,3140
	ctx.r9.u64 = ctx.r11.u64 | 3140;
	// sthx r27,r28,r9
	PPC_STORE_U16(ctx.r28.u32 + ctx.r9.u32, ctx.r27.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311CD04"))) PPC_WEAK_FUNC(sub_8311CD04);
PPC_FUNC_IMPL(__imp__sub_8311CD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311CD08"))) PPC_WEAK_FUNC(sub_8311CD08);
PPC_FUNC_IMPL(__imp__sub_8311CD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8311CD10;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r24,r3,30
	ctx.r24.s64 = ctx.r3.s64 + 1966080;
	// std r4,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r4.u64);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r24,r24,3142
	ctx.r24.s64 = ctx.r24.s64 + 3142;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ce54
	if (cr6.eq) goto loc_8311CE54;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r28,r10,2320
	ctx.r28.u64 = ctx.r10.u64 | 2320;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// add r31,r3,r28
	ctx.r31.u64 = ctx.r3.u64 + ctx.r28.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8311cddc
	if (cr6.eq) goto loc_8311CDDC;
	// lwz r26,236(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
loc_8311CD5C:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8373f5f8
	ctx.lr = 0x8311CD70;
	sub_8373F5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cd98
	if (cr6.eq) goto loc_8311CD98;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cd98
	if (cr6.eq) goto loc_8311CD98;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8311CD98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8311CD98:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// beq cr6,0x8311cdc4
	if (cr6.eq) goto loc_8311CDC4;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// lhz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r9,16
	ctx.r30.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x8311cd5c
	if (cr6.lt) goto loc_8311CD5C;
	// b 0x8311cddc
	goto loc_8311CDDC;
loc_8311CDC4:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311CDD4;
	sub_831CDCF0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// li r23,1
	ctx.r23.s64 = 1;
loc_8311CDDC:
	// lhz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r29,21024
	cr6.compare<uint32_t>(ctx.r29.u32, 21024, xer);
	// blt cr6,0x8311cdec
	if (cr6.lt) goto loc_8311CDEC;
	// li r29,21023
	ctx.r29.s64 = 21023;
loc_8311CDEC:
	// clrlwi r31,r25,16
	ctx.r31.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x8311ce30
	if (!cr6.lt) goto loc_8311CE30;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r30,r11,2392
	ctx.r30.u64 = ctx.r11.u64 | 2392;
loc_8311CE00:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x8311CE20;
	sub_831CE980(ctx, base);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x8311ce00
	if (cr6.lt) goto loc_8311CE00;
loc_8311CE30:
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ce54
	if (cr6.eq) goto loc_8311CE54;
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ce54
	if (cr6.eq) goto loc_8311CE54;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r24)
	PPC_STORE_U16(ctx.r24.u32 + 0, ctx.r11.u16);
loc_8311CE54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311CE5C"))) PPC_WEAK_FUNC(sub_8311CE5C);
PPC_FUNC_IMPL(__imp__sub_8311CE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311CE60"))) PPC_WEAK_FUNC(sub_8311CE60);
PPC_FUNC_IMPL(__imp__sub_8311CE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8311CE68;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r26,r3,30
	ctx.r26.s64 = ctx.r3.s64 + 1966080;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r26,3140
	ctx.r26.s64 = ctx.r26.s64 + 3140;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cefc
	if (cr6.eq) goto loc_8311CEFC;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8311CE94:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mulli r11,r30,132
	ctx.r11.s64 = ctx.r30.s64 * 132;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83744a28
	ctx.lr = 0x8311CEB0;
	sub_83744A28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ced8
	if (cr6.eq) goto loc_8311CED8;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ced8
	if (cr6.eq) goto loc_8311CED8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8311CED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8311CED8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// beq cr6,0x8311cefc
	if (cr6.eq) goto loc_8311CEFC;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x8311ce94
	if (cr6.lt) goto loc_8311CE94;
loc_8311CEFC:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// clrlwi r31,r29,16
	ctx.r31.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x8311cf80
	if (!cr6.lt) goto loc_8311CF80;
	// lis r29,-31772
	ctx.r29.s64 = -2082209792;
loc_8311CF10:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// mulli r11,r31,132
	ctx.r11.s64 = ctx.r31.s64 * 132;
	// bge cr6,0x8311cf38
	if (!cr6.lt) goto loc_8311CF38;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r3,132
	ctx.r4.s64 = ctx.r3.s64 + 132;
	// bl 0x831ce980
	ctx.lr = 0x8311CF34;
	sub_831CE980(ctx, base);
	// b 0x8311cf54
	goto loc_8311CF54;
loc_8311CF38:
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311CF48;
	sub_831CDCF0(ctx, base);
	// lwz r11,-9308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9308);
	// rlwinm r11,r11,14,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFFC000;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8311CF54:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x8311cf10
	if (cr6.lt) goto loc_8311CF10;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311cf80
	if (cr6.eq) goto loc_8311CF80;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
loc_8311CF80:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311CF88"))) PPC_WEAK_FUNC(sub_8311CF88);
PPC_FUNC_IMPL(__imp__sub_8311CF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311CF90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,6714
	ctx.r5.u64 = ctx.r5.u64 | 6714;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311CFA8;
	sub_831CDCF0(ctx, base);
	// li r10,50
	ctx.r10.s64 = 50;
	// addis r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 65536;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,6712
	ctx.r11.s64 = ctx.r11.s64 + 6712;
	// ori r31,r9,65535
	ctx.r31.u64 = ctx.r9.u64 | 65535;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r10,r10,-9356
	ctx.r10.s64 = ctx.r10.s64 + -9356;
loc_8311CFC8:
	// sth r31,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r31.u16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// sth r31,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r31.u16);
	// sth r31,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r31.u16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// sth r31,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r31.u16);
	// sth r31,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r31.u16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// sth r31,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r31.u16);
	// sth r31,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r31.u16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// sth r31,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r31.u16);
	// sth r31,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r31.u16);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// sthu r31,40(r11)
	ea = 40 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311cfc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311CFC8;
	// addis r30,r26,1
	ctx.r30.s64 = ctx.r26.s64 + 65536;
	// li r29,39
	ctx.r29.s64 = 39;
	// addi r30,r30,8716
	ctx.r30.s64 = ctx.r30.s64 + 8716;
loc_8311D028:
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r11,-14400
	ctx.r6.s64 = ctx.r11.s64 + -14400;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823fca98
	ctx.lr = 0x8311D040;
	sub_823FCA98(ctx, base);
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
	// sth r31,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r31.u16);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// sth r31,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r31.u16);
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// bge 0x8311d028
	if (!cr0.lt) goto loc_8311D028;
	// addis r30,r26,1
	ctx.r30.s64 = ctx.r26.s64 + 65536;
	// li r27,849
	ctx.r27.s64 = 849;
	// addi r30,r30,8956
	ctx.r30.s64 = ctx.r30.s64 + 8956;
	// lis r29,-31772
	ctx.r29.s64 = -2082209792;
loc_8311D068:
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// li r5,21
	ctx.r5.s64 = 21;
	// addi r6,r11,-14400
	ctx.r6.s64 = ctx.r11.s64 + -14400;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823fca98
	ctx.lr = 0x8311D084;
	sub_823FCA98(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r11,-9308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9308);
	// clrlwi r9,r11,14
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFF;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r11,-9308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9308);
	// clrlwi r8,r11,14
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFF;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r11,-9308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9308);
	// clrlwi r7,r11,14
	ctx.r7.u64 = ctx.r11.u32 & 0x3FFFF;
	// stw r7,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r7.u32);
	// lwz r11,-9308(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -9308);
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// stw r6,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r6.u32);
loc_8311D0C0:
	// sthu r31,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8311d0c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311D0C0;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,60
	ctx.r30.s64 = ctx.r30.s64 + 60;
	// bge 0x8311d068
	if (!cr0.lt) goto loc_8311D068;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83147008
	ctx.lr = 0x8311D0DC;
	sub_83147008(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311D0E8"))) PPC_WEAK_FUNC(sub_8311D0E8);
PPC_FUNC_IMPL(__imp__sub_8311D0E8) {
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
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r31,r11,2320
	ctx.r31.u64 = ctx.r11.u64 | 2320;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x8311D114;
	sub_831CDCF0(ctx, base);
	// lis r5,23
	ctx.r5.s64 = 1507328;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// ori r5,r5,6400
	ctx.r5.u64 = ctx.r5.u64 | 6400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x8311D128;
	sub_831CDCF0(ctx, base);
	// addis r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 1835008;
	// addi r3,r3,8720
	ctx.r3.s64 = ctx.r3.s64 + 8720;
	// bl 0x8311cf88
	ctx.lr = 0x8311D134;
	sub_8311CF88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c7d0
	ctx.lr = 0x8311D13C;
	sub_8311C7D0(ctx, base);
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

__attribute__((alias("__imp__sub_8311D158"))) PPC_WEAK_FUNC(sub_8311D158);
PPC_FUNC_IMPL(__imp__sub_8311D158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,72
	ctx.r10.s64 = 72;
	// divw. r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
loc_8311D170:
	// srawi r11,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8311d198
	if (!cr6.eq) goto loc_8311D198;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_8311D198:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// beq cr6,0x8311d1a8
	if (cr6.eq) goto loc_8311D1A8;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_8311D1A8:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x8311d1c0
	if (!cr6.lt) goto loc_8311D1C0;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r3,r8,72
	ctx.r3.s64 = ctx.r8.s64 + 72;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// b 0x8311d1c4
	goto loc_8311D1C4;
loc_8311D1C0:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8311D1C4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x8311d170
	if (cr6.gt) goto loc_8311D170;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D1D0"))) PPC_WEAK_FUNC(sub_8311D1D0);
PPC_FUNC_IMPL(__imp__sub_8311D1D0) {
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
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,3142
	ctx.r10.u64 = ctx.r11.u64 | 3142;
	// lhzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,21024
	cr6.compare<uint32_t>(ctx.r10.u32, 21024, xer);
	// bge cr6,0x8311d274
	if (!cr6.lt) goto loc_8311D274;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r6,2320
	ctx.r11.u64 = ctx.r6.u64 | 2320;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311d158
	ctx.lr = 0x8311D244;
	sub_8311D158(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x8311d274
	if (cr6.eq) goto loc_8311D274;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8311d274
	if (!cr6.eq) goto loc_8311D274;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8311D26C;
	sub_831CE980(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8311d278
	goto loc_8311D278;
loc_8311D274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311D278:
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

__attribute__((alias("__imp__sub_8311D290"))) PPC_WEAK_FUNC(sub_8311D290);
PPC_FUNC_IMPL(__imp__sub_8311D290) {
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
	// lis r11,30
	ctx.r11.s64 = 1966080;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// ori r10,r11,3142
	ctx.r10.u64 = ctx.r11.u64 | 3142;
	// lhzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,21024
	cr6.compare<uint32_t>(ctx.r10.u32, 21024, xer);
	// bge cr6,0x8311d314
	if (!cr6.lt) goto loc_8311D314;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r6,2320
	ctx.r11.u64 = ctx.r6.u64 | 2320;
	// stb r7,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r7.u8);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311d158
	ctx.lr = 0x8311D2FC;
	sub_8311D158(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x8311d314
	if (cr6.eq) goto loc_8311D314;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8311d318
	if (cr6.eq) goto loc_8311D318;
loc_8311D314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8311D318:
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

__attribute__((alias("__imp__sub_8311D32C"))) PPC_WEAK_FUNC(sub_8311D32C);
PPC_FUNC_IMPL(__imp__sub_8311D32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311D330"))) PPC_WEAK_FUNC(sub_8311D330);
PPC_FUNC_IMPL(__imp__sub_8311D330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8311D338;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r25,0(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addis r29,r3,30
	ctx.r29.s64 = ctx.r3.s64 + 1966080;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r29,3142
	ctx.r29.s64 = ctx.r29.s64 + 3142;
	// addis r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 327680;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r3,2320
	ctx.r3.s64 = ctx.r3.s64 + 2320;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lhz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r28,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 3);
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311d158
	ctx.lr = 0x8311D38C;
	sub_8311D158(ctx, base);
	// subf r9,r3,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311d3c4
	if (!cr6.eq) goto loc_8311D3C4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// bne cr6,0x8311d3c4
	if (!cr6.eq) goto loc_8311D3C4;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x8311D3BC;
	sub_831CE980(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8311D3C4:
	// cmplwi cr6,r28,21023
	cr6.compare<uint32_t>(ctx.r28.u32, 21023, xer);
	// bge cr6,0x8311d478
	if (!cr6.lt) goto loc_8311D478;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311d3f8
	if (cr6.eq) goto loc_8311D3F8;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8311D3E4;
	sub_831CE980(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8311D3F8:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r10,72
	ctx.r10.s64 = 72;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r28,r9,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82595718
	ctx.lr = 0x8311D424;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8311d478
	if (cr6.eq) goto loc_8311D478;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8311D43C;
	sub_831CE980(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x8311D44C;
	sub_831CE980(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x831ce980
	ctx.lr = 0x8311D45C;
	sub_831CE980(ctx, base);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8311D46C;
	sub_825952B8(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
loc_8311D478:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311D480"))) PPC_WEAK_FUNC(sub_8311D480);
PPC_FUNC_IMPL(__imp__sub_8311D480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8311d4d0
	if (cr6.eq) goto loc_8311D4D0;
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_8311D490:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r6,r3,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r9,r6,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// bne cr6,0x8311d490
	if (!cr6.eq) goto loc_8311D490;
loc_8311D4D0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D4D8"))) PPC_WEAK_FUNC(sub_8311D4D8);
PPC_FUNC_IMPL(__imp__sub_8311D4D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8311D4E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,108(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r7,104(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// li r8,36
	ctx.r8.s64 = 36;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r9,-36
	ctx.r31.s64 = ctx.r9.s64 + -36;
	// divw. r28,r6,r8
	ctx.r28.s32 = PPCDivide(ctx.r6.s32, ctx.r8.s32);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x8311d58c
	if (cr0.eq) goto loc_8311D58C;
loc_8311D51C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8241c348
	ctx.lr = 0x8311D524;
	sub_8241C348(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8311D52C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8311d52c
	if (!cr6.eq) goto loc_8311D52C;
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
	ctx.lr = 0x8311D558;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8311d57c
	if (cr6.eq) goto loc_8311D57C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x8311d51c
	if (cr6.lt) goto loc_8311D51C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8311D57C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8311D58C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311D598"))) PPC_WEAK_FUNC(sub_8311D598);
PPC_FUNC_IMPL(__imp__sub_8311D598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8311D5A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r10,36
	ctx.r10.s64 = 36;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r29,r8,r10
	ctx.r29.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x8311d628
	if (cr0.eq) goto loc_8311D628;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r31,r11,-36
	ctx.r31.s64 = ctx.r11.s64 + -36;
	// beq cr6,0x8311d628
	if (cr6.eq) goto loc_8311D628;
loc_8311D5D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241c348
	ctx.lr = 0x8311D5DC;
	sub_8241C348(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8311D5E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8311d5e4
	if (!cr6.eq) goto loc_8311D5E4;
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
	ctx.lr = 0x8311D610;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8311d634
	if (cr6.eq) goto loc_8311D634;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x8311d5d4
	if (cr6.lt) goto loc_8311D5D4;
loc_8311D628:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8311D634:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311D640"))) PPC_WEAK_FUNC(sub_8311D640);
PPC_FUNC_IMPL(__imp__sub_8311D640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// lwz r10,136(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// blt cr6,0x8311d668
	if (cr6.lt) goto loc_8311D668;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r11,-9172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9172);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8311D668:
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D680"))) PPC_WEAK_FUNC(sub_8311D680);
PPC_FUNC_IMPL(__imp__sub_8311D680) {
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
	// bl 0x8353b230
	ctx.lr = 0x8311D6A0;
	sub_8353B230(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8311D6A8:
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8311d6c8
	if (!cr6.eq) goto loc_8311D6C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x8311d6a8
	if (cr6.lt) goto loc_8311D6A8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8311D6C8:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, xer);
	// blt cr6,0x8311d6e8
	if (cr6.lt) goto loc_8311D6E8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8311d6f8
	goto loc_8311D6F8;
loc_8311D6E8:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,-4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
loc_8311D6F8:
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

__attribute__((alias("__imp__sub_8311D710"))) PPC_WEAK_FUNC(sub_8311D710);
PPC_FUNC_IMPL(__imp__sub_8311D710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8311d720
	if (cr6.lt) goto loc_8311D720;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8311D720:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8311D724:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8311d724
	if (!cr6.eq) goto loc_8311D724;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8259cc28
	sub_8259CC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311D748"))) PPC_WEAK_FUNC(sub_8311D748);
PPC_FUNC_IMPL(__imp__sub_8311D748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8311D750;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8311d7a4
	if (cr6.eq) goto loc_8311D7A4;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,15
	ctx.r28.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8311D770:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8311d78c
	if (cr6.lt) goto loc_8311D78C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8311D78C;
	sub_825952B8(ctx, base);
loc_8311D78C:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x8311d770
	if (!cr6.eq) goto loc_8311D770;
loc_8311D7A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311D7AC"))) PPC_WEAK_FUNC(sub_8311D7AC);
PPC_FUNC_IMPL(__imp__sub_8311D7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311D7B0"))) PPC_WEAK_FUNC(sub_8311D7B0);
PPC_FUNC_IMPL(__imp__sub_8311D7B0) {
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
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8311d7d8
	if (cr6.lt) goto loc_8311D7D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8311D7D8:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r10,-9260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9260);
loc_8311D7E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8311d804
	if (cr6.eq) goto loc_8311D804;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8311d7e0
	if (cr6.eq) goto loc_8311D7E0;
loc_8311D804:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8311d810
	if (!cr6.eq) goto loc_8311D810;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8311D810:
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x83546fd8
	ctx.lr = 0x8311D824;
	sub_83546FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D834"))) PPC_WEAK_FUNC(sub_8311D834);
PPC_FUNC_IMPL(__imp__sub_8311D834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311D838"))) PPC_WEAK_FUNC(sub_8311D838);
PPC_FUNC_IMPL(__imp__sub_8311D838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8311d860
	if (cr6.lt) goto loc_8311D860;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8311D860:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r10,-9260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9260);
loc_8311D868:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8311d88c
	if (cr6.eq) goto loc_8311D88C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8311d868
	if (cr6.eq) goto loc_8311D868;
loc_8311D88C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8311d898
	if (!cr6.eq) goto loc_8311D898;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8311D898:
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// std r7,84(r1)
	PPC_STORE_U64(ctx.r1.u32 + 84, ctx.r7.u64);
	// bl 0x82d54828
	ctx.lr = 0x8311D8AC;
	sub_82D54828(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D8BC"))) PPC_WEAK_FUNC(sub_8311D8BC);
PPC_FUNC_IMPL(__imp__sub_8311D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311D8C0"))) PPC_WEAK_FUNC(sub_8311D8C0);
PPC_FUNC_IMPL(__imp__sub_8311D8C0) {
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
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8311d8e8
	if (cr6.lt) goto loc_8311D8E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8311D8E8:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r10,-9260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9260);
loc_8311D8F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq cr6,0x8311d914
	if (cr6.eq) goto loc_8311D914;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8311d8f0
	if (cr6.eq) goto loc_8311D8F0;
loc_8311D914:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8311d920
	if (!cr6.eq) goto loc_8311D920;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8311D920:
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x83546fd8
	ctx.lr = 0x8311D934;
	sub_83546FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311D944"))) PPC_WEAK_FUNC(sub_8311D944);
PPC_FUNC_IMPL(__imp__sub_8311D944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311D948"))) PPC_WEAK_FUNC(sub_8311D948);
PPC_FUNC_IMPL(__imp__sub_8311D948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8311D950;
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8311d9a8
	if (cr6.eq) goto loc_8311D9A8;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_8311D96C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8311D980;
	sub_8259CB28(ctx, base);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// addi r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 + 28;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// bne cr6,0x8311d96c
	if (!cr6.eq) goto loc_8311D96C;
loc_8311D9A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311D9B4"))) PPC_WEAK_FUNC(sub_8311D9B4);
PPC_FUNC_IMPL(__imp__sub_8311D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311D9B8"))) PPC_WEAK_FUNC(sub_8311D9B8);
PPC_FUNC_IMPL(__imp__sub_8311D9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311D9C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8311da30
	if (cr6.eq) goto loc_8311DA30;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_8311D9E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8311da20
	if (cr6.eq) goto loc_8311DA20;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// bl 0x8259cb28
	ctx.lr = 0x8311DA10;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_8311DA20:
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, xer);
	// bne cr6,0x8311d9e4
	if (!cr6.eq) goto loc_8311D9E4;
loc_8311DA30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311DA3C"))) PPC_WEAK_FUNC(sub_8311DA3C);
PPC_FUNC_IMPL(__imp__sub_8311DA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311DA40"))) PPC_WEAK_FUNC(sub_8311DA40);
PPC_FUNC_IMPL(__imp__sub_8311DA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311DA48;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lis r10,-31751
	ctx.r10.s64 = -2080833536;
	// addi r9,r11,-2840
	ctx.r9.s64 = ctx.r11.s64 + -2840;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,184
	ctx.r29.s64 = ctx.r3.s64 + 184;
	// stw r30,30640(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30640, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r8,204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8311da90
	if (cr6.lt) goto loc_8311DA90;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8311DA90;
	sub_825952B8(ctx, base);
loc_8311DA90:
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8311dab8
	if (cr6.eq) goto loc_8311DAB8;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x8311DAB8;
	sub_825952B8(ctx, base);
loc_8311DAB8:
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8311dadc
	if (cr6.eq) goto loc_8311DADC;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x8311DADC;
	sub_825952B8(ctx, base);
loc_8311DADC:
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8311db00
	if (cr6.eq) goto loc_8311DB00;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x8311DB00;
	sub_825952B8(ctx, base);
loc_8311DB00:
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8311db24
	if (cr6.eq) goto loc_8311DB24;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x8311DB24;
	sub_825952B8(ctx, base);
loc_8311DB24:
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r29,r31,104
	ctx.r29.s64 = ctx.r31.s64 + 104;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8311db60
	if (cr6.eq) goto loc_8311DB60;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8311d748
	ctx.lr = 0x8311DB50;
	sub_8311D748(ctx, base);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8311DB60;
	sub_825952B8(ctx, base);
loc_8311DB60:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8311db8c
	if (cr6.lt) goto loc_8311DB8C;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8311DB8C;
	sub_825952B8(ctx, base);
loc_8311DB8C:
	// stw r26,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// bl 0x831032a0
	ctx.lr = 0x8311DBA0;
	sub_831032A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311DBA8"))) PPC_WEAK_FUNC(sub_8311DBA8);
PPC_FUNC_IMPL(__imp__sub_8311DBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8311DBB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,108(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,104(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// li r25,36
	ctx.r25.s64 = 36;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r28,r4,104
	ctx.r28.s64 = ctx.r4.s64 + 104;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r30,r8,-36
	ctx.r30.s64 = ctx.r8.s64 + -36;
	// divw. r27,r7,r25
	ctx.r27.s32 = PPCDivide(ctx.r7.s32, ctx.r25.s32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x8311dd08
	if (!cr0.gt) goto loc_8311DD08;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8241c348
	ctx.lr = 0x8311DBF8;
	sub_8241C348(ctx, base);
loc_8311DBF8:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8311dc0c
	if (cr6.lt) goto loc_8311DC0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8311dc10
	goto loc_8311DC10;
loc_8311DC0C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8311DC10:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8311DC14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8311dc38
	if (cr6.eq) goto loc_8311DC38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8311dc14
	if (cr6.eq) goto loc_8311DC14;
loc_8311DC38:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8311dc50
	if (cr6.eq) goto loc_8311DC50;
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r30,r30,-36
	ctx.r30.s64 = ctx.r30.s64 + -36;
	// bgt 0x8311dbf8
	if (cr0.gt) goto loc_8311DBF8;
	// b 0x8311dd08
	goto loc_8311DD08;
loc_8311DC50:
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x8311DC64;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// stw r9,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r9.u32);
	// beq cr6,0x8311dcbc
	if (cr6.eq) goto loc_8311DCBC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8311d948
	ctx.lr = 0x8311DCA4;
	sub_8311D948(ctx, base);
	// addi r5,r28,12
	ctx.r5.s64 = ctx.r28.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x8311d748
	ctx.lr = 0x8311DCB8;
	sub_8311D748(ctx, base);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
loc_8311DCBC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r4,-9256(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9256);
	// divw r7,r8,r25
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
loc_8311DCDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8311dcdc
	if (!cr6.eq) goto loc_8311DCDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8311DD00;
	sub_8259CC28(ctx, base);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(ctx.r27.s32, -1, xer);
	// bne cr6,0x8311dd30
	if (!cr6.eq) goto loc_8311DD30;
loc_8311DD08:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2928
	ctx.r4.s64 = ctx.r11.s64 + -2928;
	// bl 0x8259cc28
	ctx.lr = 0x8311DD1C;
	sub_8259CC28(ctx, base);
	// stw r26,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r26.u32);
	// stw r26,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r26.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8311DD30:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// blt cr6,0x8311dfb4
	if (cr6.lt) goto loc_8311DFB4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r7,r31,120
	ctx.r7.s64 = ctx.r31.s64 + 120;
	// sth r10,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r10.u16);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// srawi. r8,r5,3
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x8311dd88
	if (!cr0.gt) goto loc_8311DD88;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8311DD68:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// blt cr6,0x8311dd80
	if (cr6.lt) goto loc_8311DD80;
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// sth r8,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r8.u16);
loc_8311DD80:
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// bdnz 0x8311dd68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311DD68;
loc_8311DD88:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8311ddc0
	if (cr6.eq) goto loc_8311DDC0;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311ddbc
	if (cr6.eq) goto loc_8311DDBC;
loc_8311DD9C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
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
	// bne cr6,0x8311dd9c
	if (!cr6.eq) goto loc_8311DD9C;
loc_8311DDBC:
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
loc_8311DDC0:
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// addi r5,r31,136
	ctx.r5.s64 = ctx.r31.s64 + 136;
	// lwz r11,-9172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9172);
	// rlwimi r11,r9,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r11,-9172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9172);
	// rlwimi r8,r11,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// lwz r7,136(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// subf r4,r7,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// srawi. r9,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// ble 0x8311de3c
	if (!cr0.gt) goto loc_8311DE3C;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8311DE08:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r27
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, xer);
	// blt cr6,0x8311de34
	if (cr6.lt) goto loc_8311DE34;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r9,r7,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r9.u32);
loc_8311DE34:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bdnz 0x8311de08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311DE08;
loc_8311DE3C:
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8311de9c
	if (cr6.eq) goto loc_8311DE9C;
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x8311de98
	if (cr6.eq) goto loc_8311DE98;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8311DE58:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r4,r3,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne cr6,0x8311de58
	if (!cr6.eq) goto loc_8311DE58;
loc_8311DE98:
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_8311DE9C:
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r31,152
	ctx.r6.s64 = ctx.r31.s64 + 152;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// ld r8,-9220(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -9220);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// std r8,228(r31)
	PPC_STORE_U64(ctx.r31.u32 + 228, ctx.r8.u64);
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// subf r3,r5,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r5.s64;
	// divw. r8,r3,r7
	ctx.r8.s32 = PPCDivide(ctx.r3.s32, ctx.r7.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x8311defc
	if (!cr0.gt) goto loc_8311DEFC;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8311DED8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// blt cr6,0x8311def0
	if (cr6.lt) goto loc_8311DEF0;
	// ld r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// std r8,228(r31)
	PPC_STORE_U64(ctx.r31.u32 + 228, ctx.r8.u64);
loc_8311DEF0:
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// addi r7,r7,-12
	ctx.r7.s64 = ctx.r7.s64 + -12;
	// bdnz 0x8311ded8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311DED8;
loc_8311DEFC:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8311df3c
	if (cr6.eq) goto loc_8311DF3C;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311df38
	if (cr6.eq) goto loc_8311DF38;
loc_8311DF10:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne cr6,0x8311df10
	if (!cr6.eq) goto loc_8311DF10;
loc_8311DF38:
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
loc_8311DF3C:
	// lwz r9,172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r7,r31,168
	ctx.r7.s64 = ctx.r31.s64 + 168;
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// srawi. r8,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// ble 0x8311df7c
	if (!cr0.gt) goto loc_8311DF7C;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8311DF64:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, xer);
	// blt cr6,0x8311df74
	if (cr6.lt) goto loc_8311DF74;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8311DF74:
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// bdnz 0x8311df64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311DF64;
loc_8311DF7C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x8311dfb4
	if (cr6.eq) goto loc_8311DFB4;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311dfb0
	if (cr6.eq) goto loc_8311DFB0;
loc_8311DF90:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne cr6,0x8311df90
	if (!cr6.eq) goto loc_8311DF90;
loc_8311DFB0:
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
loc_8311DFB4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311DFC0"))) PPC_WEAK_FUNC(sub_8311DFC0);
PPC_FUNC_IMPL(__imp__sub_8311DFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8311DFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,104(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,108(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r31,r3,104
	ctx.r31.s64 = ctx.r3.s64 + 104;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x8311e008
	if (cr6.eq) goto loc_8311E008;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311d948
	ctx.lr = 0x8311DFF0;
	sub_8311D948(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8311d748
	ctx.lr = 0x8311E004;
	sub_8311D748(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_8311E008:
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r8,r30,120
	ctx.r8.s64 = ctx.r30.s64 + 120;
	// lwz r9,124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311e04c
	if (cr6.eq) goto loc_8311E04C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311e048
	if (cr6.eq) goto loc_8311E048;
loc_8311E028:
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
	// bne cr6,0x8311e028
	if (!cr6.eq) goto loc_8311E028;
loc_8311E048:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_8311E04C:
	// lwz r5,136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r31,r30,136
	ctx.r31.s64 = ctx.r30.s64 + 136;
	// lwz r4,140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x8311e06c
	if (cr6.eq) goto loc_8311E06C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8311d480
	ctx.lr = 0x8311E068;
	sub_8311D480(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_8311E06C:
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// addi r8,r30,152
	ctx.r8.s64 = ctx.r30.s64 + 152;
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311e0b8
	if (cr6.eq) goto loc_8311E0B8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311e0b4
	if (cr6.eq) goto loc_8311E0B4;
loc_8311E08C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8311e08c
	if (!cr6.eq) goto loc_8311E08C;
loc_8311E0B4:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_8311E0B8:
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r8,r30,168
	ctx.r8.s64 = ctx.r30.s64 + 168;
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311e0fc
	if (cr6.eq) goto loc_8311E0FC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x8311e0f8
	if (cr6.eq) goto loc_8311E0F8;
loc_8311E0D8:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne cr6,0x8311e0d8
	if (!cr6.eq) goto loc_8311E0D8;
loc_8311E0F8:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_8311E0FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311E104"))) PPC_WEAK_FUNC(sub_8311E104);
PPC_FUNC_IMPL(__imp__sub_8311E104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311E108"))) PPC_WEAK_FUNC(sub_8311E108);
PPC_FUNC_IMPL(__imp__sub_8311E108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311E110;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,29127
	ctx.r10.u64 = ctx.r11.u64 | 29127;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8311e134
	if (!cr6.gt) goto loc_8311E134;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8311E134;
	sub_831CC150(ctx, base);
loc_8311E134:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,36
	ctx.r27.s64 = 36;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x8311e1ec
	if (!cr6.lt) goto loc_8311E1EC;
	// li r26,2
	ctx.r26.s64 = 2;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
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
	ctx.lr = 0x8311E174;
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
	// bl 0x8311d9b8
	ctx.lr = 0x8311E198;
	sub_8311D9B8(ctx, base);
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
	// beq cr6,0x8311e1cc
	if (cr6.eq) goto loc_8311E1CC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8311d748
	ctx.lr = 0x8311E1BC;
	sub_8311D748(ctx, base);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x8311E1CC;
	sub_825952B8(ctx, base);
loc_8311E1CC:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
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
loc_8311E1EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311E1F4"))) PPC_WEAK_FUNC(sub_8311E1F4);
PPC_FUNC_IMPL(__imp__sub_8311E1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311E1F8"))) PPC_WEAK_FUNC(sub_8311E1F8);
PPC_FUNC_IMPL(__imp__sub_8311E1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311E200;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-2932
	ctx.r29.s64 = ctx.r11.s64 + -2932;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// bl 0x83103328
	ctx.lr = 0x8311E218;
	sub_83103328(ctx, base);
	// lis r10,-32223
	ctx.r10.s64 = -2111766528;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-2840
	ctx.r9.s64 = ctx.r10.s64 + -2840;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x8311E248;
	sub_8259CC28(ctx, base);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lis r27,-31772
	ctx.r27.s64 = -2082209792;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// lis r26,-31772
	ctx.r26.s64 = -2082209792;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// stw r28,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r28.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stb r30,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r30.u8);
	// sth r30,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r30.u16);
	// lwz r11,-9172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9172);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// ld r11,-9220(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + -9220);
	// std r11,228(r31)
	PPC_STORE_U64(ctx.r31.u32 + 228, ctx.r11.u64);
	// bl 0x8259cc28
	ctx.lr = 0x8311E2C0;
	sub_8259CC28(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// sth r8,220(r31)
	PPC_STORE_U16(ctx.r31.u32 + 220, ctx.r8.u16);
	// lwz r7,224(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,-9172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9172);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r7.u32);
	// lwz r11,-9172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9172);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r6.u32);
	// ld r11,-9220(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + -9220);
	// std r11,228(r31)
	PPC_STORE_U64(ctx.r31.u32 + 228, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311E308"))) PPC_WEAK_FUNC(sub_8311E308);
PPC_FUNC_IMPL(__imp__sub_8311E308) {
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
	// bl 0x8311da40
	ctx.lr = 0x8311E328;
	sub_8311DA40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311e340
	if (cr6.eq) goto loc_8311E340;
	// bl 0x82416268
	ctx.lr = 0x8311E33C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8311E340:
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

__attribute__((alias("__imp__sub_8311E358"))) PPC_WEAK_FUNC(sub_8311E358);
PPC_FUNC_IMPL(__imp__sub_8311E358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,36
	ctx.r9.s64 = 36;
	// ori r8,r10,29127
	ctx.r8.u64 = ctx.r10.u64 | 29127;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x8311e38c
	if (!cr6.lt) goto loc_8311E38C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_8311E38C:
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
	// blt cr6,0x8311e3bc
	if (cr6.lt) goto loc_8311E3BC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8311E3BC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8311e3c8
	if (!cr6.lt) goto loc_8311E3C8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8311E3C8:
	// b 0x8311e108
	sub_8311E108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311E3CC"))) PPC_WEAK_FUNC(sub_8311E3CC);
PPC_FUNC_IMPL(__imp__sub_8311E3CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E3D0"))) PPC_WEAK_FUNC(sub_8311E3D0);
PPC_FUNC_IMPL(__imp__sub_8311E3D0) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r3,30640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30640);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8311e43c
	if (!cr6.eq) goto loc_8311E43C;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,236
	ctx.r4.s64 = 236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8311E408;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8311e41c
	if (cr6.eq) goto loc_8311E41C;
	// bl 0x8311e1f8
	ctx.lr = 0x8311E414;
	sub_8311E1F8(ctx, base);
	// stw r3,30640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30640, ctx.r3.u32);
	// b 0x8311e424
	goto loc_8311E424;
loc_8311E41C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30640, ctx.r11.u32);
loc_8311E424:
	// bl 0x831021a0
	ctx.lr = 0x8311E428;
	sub_831021A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82da45f8
	ctx.lr = 0x8311E430;
	sub_82DA45F8(ctx, base);
	// lwz r4,30640(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30640);
	// bl 0x83103100
	ctx.lr = 0x8311E438;
	sub_83103100(ctx, base);
	// lwz r3,30640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30640);
loc_8311E43C:
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

__attribute__((alias("__imp__sub_8311E450"))) PPC_WEAK_FUNC(sub_8311E450);
PPC_FUNC_IMPL(__imp__sub_8311E450) {
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
	// bge cr6,0x8311e488
	if (!cr6.lt) goto loc_8311E488;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8311e48c
	if (!cr6.gt) goto loc_8311E48C;
loc_8311E488:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8311E48C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8311e4e4
	if (cr6.eq) goto loc_8311E4E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,36
	ctx.r9.s64 = 36;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x8311e4c0
	if (!cr6.eq) goto loc_8311E4C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311e358
	ctx.lr = 0x8311E4C0;
	sub_8311E358(ctx, base);
loc_8311E4C0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8311e510
	if (cr6.eq) goto loc_8311E510;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8311e50c
	goto loc_8311E50C;
loc_8311E4E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8311e4fc
	if (!cr6.eq) goto loc_8311E4FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311e358
	ctx.lr = 0x8311E4FC;
	sub_8311E358(ctx, base);
loc_8311E4FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8311e510
	if (cr6.eq) goto loc_8311E510;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8311E50C:
	// bl 0x83531878
	ctx.lr = 0x8311E510;
	sub_83531878(ctx, base);
loc_8311E510:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
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

__attribute__((alias("__imp__sub_8311E534"))) PPC_WEAK_FUNC(sub_8311E534);
PPC_FUNC_IMPL(__imp__sub_8311E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311E538"))) PPC_WEAK_FUNC(sub_8311E538);
PPC_FUNC_IMPL(__imp__sub_8311E538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8311E540;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x8311E570;
	sub_8259CB28(ctx, base);
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r9,124(r1)
	PPC_STORE_U64(ctx.r1.u32 + 124, ctx.r9.u64);
	// bl 0x8311e450
	ctx.lr = 0x8311E588;
	sub_8311E450(ctx, base);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lwz r4,-9260(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9260);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8311E594:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8311e594
	if (!cr6.eq) goto loc_8311E594;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8311E5B8;
	sub_8259CC28(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,36
	ctx.r10.s64 = 36;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// divw r5,r6,r10
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r10.s32);
	// stw r5,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r5.u32);
	// blt cr6,0x8311e5f0
	if (cr6.lt) goto loc_8311E5F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8311E5F0;
	sub_825952B8(ctx, base);
loc_8311E5F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311E5F8"))) PPC_WEAK_FUNC(sub_8311E5F8);
PPC_FUNC_IMPL(__imp__sub_8311E5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// li r3,17
	ctx.r3.s64 = 17;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31982
	ctx.r12.s64 = -2095972352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6624
	ctx.r12.s64 = ctx.r12.s64 + -6624;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8311E670;
	case 1:
		goto loc_8311E784;
	case 2:
		goto loc_8311E688;
	case 3:
		goto loc_8311E784;
	case 4:
		goto loc_8311E784;
	case 5:
		goto loc_8311E718;
	case 6:
		goto loc_8311E678;
	case 7:
		goto loc_8311E680;
	case 8:
		goto loc_8311E778;
	case 9:
		goto loc_8311E778;
	case 10:
		goto loc_8311E750;
	case 11:
		goto loc_8311E748;
	case 12:
		goto loc_8311E758;
	case 13:
		goto loc_8311E760;
	case 14:
		goto loc_8311E768;
	case 15:
		goto loc_8311E770;
	case 16:
		goto loc_8311E784;
	case 17:
		goto loc_8311E784;
	case 18:
		goto loc_8311E784;
	case 19:
		goto loc_8311E780;
	default:
		return;
	}
	// lwz r24,-6544(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6544);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6520(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6520);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6376(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6376);
	// lwz r24,-6536(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6536);
	// lwz r24,-6528(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6528);
	// lwz r24,-6280(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6280);
	// lwz r24,-6280(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6280);
	// lwz r24,-6320(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6320);
	// lwz r24,-6328(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6328);
	// lwz r24,-6312(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6312);
	// lwz r24,-6304(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6304);
	// lwz r24,-6296(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6296);
	// lwz r24,-6288(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6288);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6272(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6272);
loc_8311E670:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311E678:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8311E680:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8311E688:
	// addi r11,r4,-10
	ctx.r11.s64 = ctx.r4.s64 + -10;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31982
	ctx.r12.s64 = -2095972352;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6484
	ctx.r12.s64 = ctx.r12.s64 + -6484;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8311E718;
	case 1:
		goto loc_8311E784;
	case 2:
		goto loc_8311E784;
	case 3:
		goto loc_8311E784;
	case 4:
		goto loc_8311E784;
	case 5:
		goto loc_8311E720;
	case 6:
		goto loc_8311E728;
	case 7:
		goto loc_8311E784;
	case 8:
		goto loc_8311E784;
	case 9:
		goto loc_8311E784;
	case 10:
		goto loc_8311E784;
	case 11:
		goto loc_8311E784;
	case 12:
		goto loc_8311E784;
	case 13:
		goto loc_8311E784;
	case 14:
		goto loc_8311E784;
	case 15:
		goto loc_8311E784;
	case 16:
		goto loc_8311E784;
	case 17:
		goto loc_8311E738;
	case 18:
		goto loc_8311E738;
	case 19:
		goto loc_8311E740;
	case 20:
		goto loc_8311E740;
	case 21:
		goto loc_8311E784;
	case 22:
		goto loc_8311E784;
	case 23:
		goto loc_8311E784;
	case 24:
		goto loc_8311E784;
	case 25:
		goto loc_8311E784;
	case 26:
		goto loc_8311E730;
	default:
		return;
	}
	// lwz r24,-6376(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6376);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6368(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6368);
	// lwz r24,-6360(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6360);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6344(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6344);
	// lwz r24,-6344(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6344);
	// lwz r24,-6336(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6336);
	// lwz r24,-6336(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6336);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6268(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6268);
	// lwz r24,-6352(r17)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6352);
loc_8311E718:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8311E720:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8311E728:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8311E730:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8311E738:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_8311E740:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_8311E748:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_8311E750:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_8311E758:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_8311E760:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_8311E768:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_8311E770:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_8311E778:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_8311E780:
	// li r3,16
	ctx.r3.s64 = 16;
loc_8311E784:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E788"))) PPC_WEAK_FUNC(sub_8311E788);
PPC_FUNC_IMPL(__imp__sub_8311E788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bge cr6,0x8311e79c
	if (!cr6.lt) goto loc_8311E79C;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_8311E79C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E7A4"))) PPC_WEAK_FUNC(sub_8311E7A4);
PPC_FUNC_IMPL(__imp__sub_8311E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311E7A8"))) PPC_WEAK_FUNC(sub_8311E7A8);
PPC_FUNC_IMPL(__imp__sub_8311E7A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r11,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E7CC"))) PPC_WEAK_FUNC(sub_8311E7CC);
PPC_FUNC_IMPL(__imp__sub_8311E7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311E7D0"))) PPC_WEAK_FUNC(sub_8311E7D0);
PPC_FUNC_IMPL(__imp__sub_8311E7D0) {
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
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,30648(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30648);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8311e8b8
	if (cr6.eq) goto loc_8311E8B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83524ad0
	ctx.lr = 0x8311E800;
	sub_83524AD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_8311E820:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8311e848
	if (cr6.eq) goto loc_8311E848;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x8311e820
	if (cr6.lt) goto loc_8311E820;
loc_8311E848:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8311e8b4
	if (cr6.lt) goto loc_8311E8B4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8311E854:
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bge cr6,0x8311e88c
	if (!cr6.lt) goto loc_8311E88C;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// sthx r4,r5,r31
	PPC_STORE_U16(ctx.r5.u32 + ctx.r31.u32, ctx.r4.u16);
	// b 0x8311e8a0
	goto loc_8311E8A0;
loc_8311E88C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u16);
loc_8311E8A0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8311e854
	if (cr6.lt) goto loc_8311E854;
	// li r10,7
	ctx.r10.s64 = 7;
loc_8311E8B4:
	// stb r10,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r10.u8);
loc_8311E8B8:
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

__attribute__((alias("__imp__sub_8311E8D0"))) PPC_WEAK_FUNC(sub_8311E8D0);
PPC_FUNC_IMPL(__imp__sub_8311E8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// blt cr6,0x8311e8e0
	if (cr6.lt) goto loc_8311E8E0;
loc_8311E8D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311E8E0:
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_8311E8F0:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r7,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8311e914
	if (cr6.eq) goto loc_8311E914;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x8311e8f0
	if (cr6.lt) goto loc_8311E8F0;
loc_8311E914:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311e8d8
	if (cr6.eq) goto loc_8311E8D8;
	// twllei r11,0
	// divwu r11,r9,r11
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311E92C"))) PPC_WEAK_FUNC(sub_8311E92C);
PPC_FUNC_IMPL(__imp__sub_8311E92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311E930"))) PPC_WEAK_FUNC(sub_8311E930);
PPC_FUNC_IMPL(__imp__sub_8311E930) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// li r31,0
	ctx.r31.s64 = 0;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// bl 0x83524ad0
	ctx.lr = 0x8311E968;
	sub_83524AD0(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x8311e980
	if (!cr6.gt) goto loc_8311E980;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8311e9bc
	goto loc_8311E9BC;
loc_8311E980:
	// blt cr6,0x8311e9b8
	if (cr6.lt) goto loc_8311E9B8;
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,163(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 163);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,162(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 162);
	// ble cr6,0x8311e9ac
	if (!cr6.gt) goto loc_8311E9AC;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8311e9b8
	if (cr6.lt) goto loc_8311E9B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8311e9bc
	goto loc_8311E9BC;
loc_8311E9AC:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8311e9bc
	if (cr6.gt) goto loc_8311E9BC;
loc_8311E9B8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8311E9BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311e9d8
	if (cr6.eq) goto loc_8311E9D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,308(r30)
	PPC_STORE_U8(ctx.r30.u32 + 308, ctx.r11.u8);
	// b 0x8311e9e0
	goto loc_8311E9E0;
loc_8311E9D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r31,308(r30)
	PPC_STORE_U8(ctx.r30.u32 + 308, ctx.r31.u8);
loc_8311E9E0:
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

__attribute__((alias("__imp__sub_8311E9F8"))) PPC_WEAK_FUNC(sub_8311E9F8);
PPC_FUNC_IMPL(__imp__sub_8311E9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 308);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311eaa8
	if (cr6.eq) goto loc_8311EAA8;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8311EA10:
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EA1C:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r8.u16);
	// bdnz 0x8311ea1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EA1C;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r9,152
	cr6.compare<uint32_t>(ctx.r9.u32, 152, xer);
	// blt cr6,0x8311ea10
	if (cr6.lt) goto loc_8311EA10;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r9,30648(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30648);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8311ea94
	if (cr6.eq) goto loc_8311EA94;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EA58:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311ea58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EA58;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r9,10
	ctx.r11.s64 = ctx.r9.s64 + 10;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EA6C:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311ea6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EA6C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r9,22
	ctx.r11.s64 = ctx.r9.s64 + 22;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EA80:
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311ea80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EA80;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r8,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
	// stb r11,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r11.u8);
loc_8311EA94:
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r8,308(r7)
	PPC_STORE_U8(ctx.r7.u32 + 308, ctx.r8.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,304(r7)
	PPC_STORE_U32(ctx.r7.u32 + 304, ctx.r11.u32);
	// blr 
	return;
loc_8311EAA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EAB0"))) PPC_WEAK_FUNC(sub_8311EAB0);
PPC_FUNC_IMPL(__imp__sub_8311EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// clrlwi r8,r4,14
	ctx.r8.u64 = ctx.r4.u32 & 0x3FFFF;
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lwz r7,-9068(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -9068);
	// clrlwi r11,r7,14
	ctx.r11.u64 = ctx.r7.u32 & 0x3FFFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// beq cr6,0x8311eb6c
	if (cr6.eq) goto loc_8311EB6C;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x8311eb6c
	if (cr6.eq) goto loc_8311EB6C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8311EAE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x8311eb00
	if (cr6.eq) goto loc_8311EB00;
	// clrlwi r31,r7,14
	ctx.r31.u64 = ctx.r7.u32 & 0x3FFFF;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x8311eb04
	if (!cr6.eq) goto loc_8311EB04;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,-9068(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -9068);
loc_8311EB00:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8311EB04:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8311eb28
	if (!cr6.eq) goto loc_8311EB28;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r6,850
	cr6.compare<uint32_t>(ctx.r6.u32, 850, xer);
	// blt cr6,0x8311eae0
	if (cr6.lt) goto loc_8311EAE0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8311EB28:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x8311eb54
	if (cr6.lt) goto loc_8311EB54;
	// bne cr6,0x8311eb6c
	if (!cr6.eq) goto loc_8311EB6C;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8311EB54:
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
loc_8311EB6C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EB74"))) PPC_WEAK_FUNC(sub_8311EB74);
PPC_FUNC_IMPL(__imp__sub_8311EB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311EB78"))) PPC_WEAK_FUNC(sub_8311EB78);
PPC_FUNC_IMPL(__imp__sub_8311EB78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EB88:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311eb88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EB88;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r7,r3,12
	ctx.r7.s64 = ctx.r3.s64 + 12;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EBA0:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311eba0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EBA0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r8,r3,24
	ctx.r8.s64 = ctx.r3.s64 + 24;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EBB8:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311ebb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EBB8;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EBCC:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311ebcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EBCC;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r7,-2
	ctx.r11.s64 = ctx.r7.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EBE0:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311ebe0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EBE0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8311EBF4:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8311ebf4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EBF4;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EC0C"))) PPC_WEAK_FUNC(sub_8311EC0C);
PPC_FUNC_IMPL(__imp__sub_8311EC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311EC10"))) PPC_WEAK_FUNC(sub_8311EC10);
PPC_FUNC_IMPL(__imp__sub_8311EC10) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r11,30648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8311ec74
	if (!cr6.eq) goto loc_8311EC74;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8311EC48;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8311ec6c
	if (cr6.eq) goto loc_8311EC6C;
	// bl 0x8311eb78
	ctx.lr = 0x8311EC54;
	sub_8311EB78(ctx, base);
	// stw r3,30648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30648, ctx.r3.u32);
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
loc_8311EC6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30648, ctx.r11.u32);
loc_8311EC74:
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

__attribute__((alias("__imp__sub_8311EC88"))) PPC_WEAK_FUNC(sub_8311EC88);
PPC_FUNC_IMPL(__imp__sub_8311EC88) {
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
	// lis r31,-31751
	ctx.r31.s64 = -2080833536;
	// lwz r11,30648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311ecd4
	if (cr6.eq) goto loc_8311ECD4;
	// li r11,28
	ctx.r11.s64 = 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x8311ECBC;
	sub_82595150(ctx, base);
	// lwz r3,30648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30648);
	// bl 0x82416268
	ctx.lr = 0x8311ECC4;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x8311ECCC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 30648, ctx.r11.u32);
loc_8311ECD4:
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

__attribute__((alias("__imp__sub_8311ECE8"))) PPC_WEAK_FUNC(sub_8311ECE8);
PPC_FUNC_IMPL(__imp__sub_8311ECE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8311ECF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,30648(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30648);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8311eef4
	if (cr6.eq) goto loc_8311EEF4;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,78
	ctx.r10.s64 = ctx.r1.s64 + 78;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8311ED18:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8311ed18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311ED18;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// bl 0x83524ad0
	ctx.lr = 0x8311ED3C;
	sub_83524AD0(ctx, base);
	// lhz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lbz r7,115(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 115);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lbz r9,114(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// ble cr6,0x8311ed60
	if (!cr6.gt) goto loc_8311ED60;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8311ed9c
	goto loc_8311ED9C;
loc_8311ED60:
	// blt cr6,0x8311ed98
	if (cr6.lt) goto loc_8311ED98;
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// lbz r6,82(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// ble cr6,0x8311ed8c
	if (!cr6.gt) goto loc_8311ED8C;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x8311ed98
	if (cr6.lt) goto loc_8311ED98;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8311ed9c
	goto loc_8311ED9C;
loc_8311ED8C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8311ed9c
	if (cr6.gt) goto loc_8311ED9C;
loc_8311ED98:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8311ED9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311eeb0
	if (cr6.eq) goto loc_8311EEB0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// addi r10,r1,94
	ctx.r10.s64 = ctx.r1.s64 + 94;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r7,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// sth r30,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r30.u16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// stb r30,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r30.u8);
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
loc_8311EDDC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8311eddc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8311EDDC;
	// lbz r11,98(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r9,99(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r6,101(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r5,102(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// lhz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r3,106(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// stb r11,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r11.u8);
	// sth r8,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r8.u16);
	// stb r9,3(r29)
	PPC_STORE_U8(ctx.r29.u32 + 3, ctx.r9.u8);
	// stb r7,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r7.u8);
	// stb r6,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r6.u8);
	// stb r5,6(r29)
	PPC_STORE_U8(ctx.r29.u32 + 6, ctx.r5.u8);
	// sth r4,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r4.u16);
	// stw r10,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r10.u32);
	// sth r3,10(r29)
	PPC_STORE_U16(ctx.r29.u32 + 10, ctx.r3.u16);
	// stb r30,40(r29)
	PPC_STORE_U8(ctx.r29.u32 + 40, ctx.r30.u8);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// sthx r30,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r30.u16);
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,34(r8)
	PPC_STORE_U16(ctx.r8.u32 + 34, ctx.r30.u16);
	// lwz r7,304(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,36(r6)
	PPC_STORE_U16(ctx.r6.u32 + 36, ctx.r30.u16);
	// lwz r5,304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,38(r4)
	PPC_STORE_U16(ctx.r4.u32 + 38, ctx.r30.u16);
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,40(r11)
	PPC_STORE_U16(ctx.r11.u32 + 40, ctx.r30.u16);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,42(r9)
	PPC_STORE_U16(ctx.r9.u32 + 42, ctx.r30.u16);
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,44(r7)
	PPC_STORE_U16(ctx.r7.u32 + 44, ctx.r30.u16);
	// lwz r6,304(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// sth r30,46(r5)
	PPC_STORE_U16(ctx.r5.u32 + 46, ctx.r30.u16);
loc_8311EEB0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83745cd0
	ctx.lr = 0x8311EEBC;
	sub_83745CD0(ctx, base);
	// lis r11,915
	ctx.r11.s64 = 59965440;
	// lbz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 40);
	// ori r9,r11,34560
	ctx.r9.u64 = ctx.r11.u64 | 34560;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// divdu r8,r3,r9
	ctx.r8.u64 = PPCDivide(ctx.r3.u64, ctx.r9.u64);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// bge cr6,0x8311eef4
	if (!cr6.lt) goto loc_8311EEF4;
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r9.u16);
loc_8311EEF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311EEFC"))) PPC_WEAK_FUNC(sub_8311EEFC);
PPC_FUNC_IMPL(__imp__sub_8311EEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311EF00"))) PPC_WEAK_FUNC(sub_8311EF00);
PPC_FUNC_IMPL(__imp__sub_8311EF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// b 0x8311ece8
	sub_8311ECE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311EF10"))) PPC_WEAK_FUNC(sub_8311EF10);
PPC_FUNC_IMPL(__imp__sub_8311EF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311EF14"))) PPC_WEAK_FUNC(sub_8311EF14);
PPC_FUNC_IMPL(__imp__sub_8311EF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311EF18"))) PPC_WEAK_FUNC(sub_8311EF18);
PPC_FUNC_IMPL(__imp__sub_8311EF18) {
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
	ctx.lr = 0x8311EF30;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,-21336
	ctx.r3.s64 = ctx.r3.s64 + -21336;
	// bl 0x83117410
	ctx.lr = 0x8311EF44;
	sub_83117410(ctx, base);
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmpwi cr6,r10,17
	cr6.compare<int32_t>(ctx.r10.s32, 17, xer);
	// bge cr6,0x8311ef58
	if (!cr6.lt) goto loc_8311EF58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311ece8
	ctx.lr = 0x8311EF58;
	sub_8311ECE8(ctx, base);
loc_8311EF58:
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

__attribute__((alias("__imp__sub_8311EF6C"))) PPC_WEAK_FUNC(sub_8311EF6C);
PPC_FUNC_IMPL(__imp__sub_8311EF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311EF70"))) PPC_WEAK_FUNC(sub_8311EF70);
PPC_FUNC_IMPL(__imp__sub_8311EF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8311EF78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,30648(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30648);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8311efb8
	if (cr6.eq) goto loc_8311EFB8;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x83524ad0
	ctx.lr = 0x8311EF9C;
	sub_83524AD0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8311efb8
	if (cr6.eq) goto loc_8311EFB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311ece8
	ctx.lr = 0x8311EFB8;
	sub_8311ECE8(ctx, base);
loc_8311EFB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8311EFC0"))) PPC_WEAK_FUNC(sub_8311EFC0);
PPC_FUNC_IMPL(__imp__sub_8311EFC0) {
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
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// bge cr6,0x8311f020
	if (!cr6.lt) goto loc_8311F020;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// stw r4,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r4.u32);
	// lwz r31,30648(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30648);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8311f018
	if (cr6.eq) goto loc_8311F018;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8311f018
	if (!cr6.eq) goto loc_8311F018;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8311f018
	if (cr6.eq) goto loc_8311F018;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x83524ad0
	ctx.lr = 0x8311F010;
	sub_83524AD0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_8311F018:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311e7d0
	ctx.lr = 0x8311F020;
	sub_8311E7D0(ctx, base);
loc_8311F020:
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

__attribute__((alias("__imp__sub_8311F038"))) PPC_WEAK_FUNC(sub_8311F038);
PPC_FUNC_IMPL(__imp__sub_8311F038) {
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
	// cmpwi cr6,r4,17
	cr6.compare<int32_t>(ctx.r4.s32, 17, xer);
	// bge cr6,0x8311f094
	if (!cr6.lt) goto loc_8311F094;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// bge cr6,0x8311f094
	if (!cr6.lt) goto loc_8311F094;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bne cr6,0x8311f094
	if (!cr6.eq) goto loc_8311F094;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8311ef70
	ctx.lr = 0x8311F074;
	sub_8311EF70(ctx, base);
loc_8311F074:
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r11.u32);
loc_8311F07C:
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
loc_8311F094:
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r31,30648(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30648);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8311f074
	if (cr6.eq) goto loc_8311F074;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x83524ad0
	ctx.lr = 0x8311F0AC;
	sub_83524AD0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r10.u32);
	// b 0x8311f07c
	goto loc_8311F07C;
}

__attribute__((alias("__imp__sub_8311F0C0"))) PPC_WEAK_FUNC(sub_8311F0C0);
PPC_FUNC_IMPL(__imp__sub_8311F0C0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8311e5f8
	ctx.lr = 0x8311F0DC;
	sub_8311E5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8311efc0
	ctx.lr = 0x8311F0E8;
	sub_8311EFC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F0F8"))) PPC_WEAK_FUNC(sub_8311F0F8);
PPC_FUNC_IMPL(__imp__sub_8311F0F8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8311e5f8
	ctx.lr = 0x8311F114;
	sub_8311E5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8311f038
	ctx.lr = 0x8311F120;
	sub_8311F038(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F130"))) PPC_WEAK_FUNC(sub_8311F130);
PPC_FUNC_IMPL(__imp__sub_8311F130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8311F138;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r28,r11,65534
	ctx.r28.u64 = ctx.r11.u64 | 65534;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
loc_8311F158:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bge cr6,0x8311f174
	if (!cr6.lt) goto loc_8311F174;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8311f178
	if (!cr6.gt) goto loc_8311F178;
loc_8311F174:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8311F178:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311f218
	if (cr6.eq) goto loc_8311F218;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// srawi r30,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r8.s32 >> 3;
	// bne cr6,0x8311f1ec
	if (!cr6.eq) goto loc_8311F1EC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8311f2b4
	if (cr6.gt) goto loc_8311F2B4;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x8311f1ec
	if (!cr6.gt) goto loc_8311F1EC;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x8311f1d8
	if (cr6.lt) goto loc_8311F1D8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8311F1D8:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x8311f1e4
	if (!cr6.lt) goto loc_8311F1E4;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8311F1E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830aed20
	ctx.lr = 0x8311F1EC;
	sub_830AED20(ctx, base);
loc_8311F1EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311f290
	if (cr6.eq) goto loc_8311F290;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x8311f290
	goto loc_8311F290;
loc_8311F218:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8311f274
	if (!cr6.eq) goto loc_8311F274;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, xer);
	// bgt cr6,0x8311f2c0
	if (cr6.gt) goto loc_8311F2C0;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x8311f274
	if (!cr6.gt) goto loc_8311F274;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x8311f260
	if (cr6.lt) goto loc_8311F260;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8311F260:
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bge cr6,0x8311f26c
	if (!cr6.lt) goto loc_8311F26C;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8311F26C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830aed20
	ctx.lr = 0x8311F274;
	sub_830AED20(ctx, base);
loc_8311F274:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8311f290
	if (cr6.eq) goto loc_8311F290;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8311F290:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r26,850
	cr6.compare<uint32_t>(ctx.r26.u32, 850, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x8311f158
	if (cr6.lt) goto loc_8311F158;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8311F2B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8311F2C0;
	sub_831CC150(ctx, base);
loc_8311F2C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x8311F2CC;
	sub_831CC150(ctx, base);
}

__attribute__((alias("__imp__sub_8311F2CC"))) PPC_WEAK_FUNC(sub_8311F2CC);
PPC_FUNC_IMPL(__imp__sub_8311F2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311F2D0"))) PPC_WEAK_FUNC(sub_8311F2D0);
PPC_FUNC_IMPL(__imp__sub_8311F2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f2ec
	if (!cr6.eq) goto loc_8311F2EC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// addi r10,r11,30
	ctx.r10.s64 = ctx.r11.s64 + 30;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F2EC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f2fc
	if (!cr6.eq) goto loc_8311F2FC;
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_8311F2FC:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,129
	ctx.r3.s64 = 129;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,75
	ctx.r3.s64 = 75;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F310"))) PPC_WEAK_FUNC(sub_8311F310);
PPC_FUNC_IMPL(__imp__sub_8311F310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f324
	if (!cr6.eq) goto loc_8311F324;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r3,r11,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// blr 
	return;
loc_8311F324:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f334
	if (!cr6.eq) goto loc_8311F334;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311F334:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,122
	ctx.r10.s64 = 122;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F34C"))) PPC_WEAK_FUNC(sub_8311F34C);
PPC_FUNC_IMPL(__imp__sub_8311F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311F350"))) PPC_WEAK_FUNC(sub_8311F350);
PPC_FUNC_IMPL(__imp__sub_8311F350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f36c
	if (!cr6.eq) goto loc_8311F36C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,13,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F36C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f37c
	if (!cr6.eq) goto loc_8311F37C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F37C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F390"))) PPC_WEAK_FUNC(sub_8311F390);
PPC_FUNC_IMPL(__imp__sub_8311F390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f3ac
	if (!cr6.eq) goto loc_8311F3AC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,19,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F3AC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f3bc
	if (!cr6.eq) goto loc_8311F3BC;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F3BC:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F3D0"))) PPC_WEAK_FUNC(sub_8311F3D0);
PPC_FUNC_IMPL(__imp__sub_8311F3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f3ec
	if (!cr6.eq) goto loc_8311F3EC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,25,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F3EC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f3fc
	if (!cr6.eq) goto loc_8311F3FC;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F3FC:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F410"))) PPC_WEAK_FUNC(sub_8311F410);
PPC_FUNC_IMPL(__imp__sub_8311F410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f42c
	if (!cr6.eq) goto loc_8311F42C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,31,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F42C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f43c
	if (!cr6.eq) goto loc_8311F43C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F43C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F450"))) PPC_WEAK_FUNC(sub_8311F450);
PPC_FUNC_IMPL(__imp__sub_8311F450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f464
	if (!cr6.eq) goto loc_8311F464;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_8311F464:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f474
	if (!cr6.eq) goto loc_8311F474;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311F474:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F484"))) PPC_WEAK_FUNC(sub_8311F484);
PPC_FUNC_IMPL(__imp__sub_8311F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311F488"))) PPC_WEAK_FUNC(sub_8311F488);
PPC_FUNC_IMPL(__imp__sub_8311F488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f4a4
	if (!cr6.eq) goto loc_8311F4A4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F4A4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f4b4
	if (!cr6.eq) goto loc_8311F4B4;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F4B4:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F4C8"))) PPC_WEAK_FUNC(sub_8311F4C8);
PPC_FUNC_IMPL(__imp__sub_8311F4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f4e4
	if (!cr6.eq) goto loc_8311F4E4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F4E4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f4f4
	if (!cr6.eq) goto loc_8311F4F4;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F4F4:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F508"))) PPC_WEAK_FUNC(sub_8311F508);
PPC_FUNC_IMPL(__imp__sub_8311F508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f524
	if (!cr6.eq) goto loc_8311F524;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F524:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f534
	if (!cr6.eq) goto loc_8311F534;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F534:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F548"))) PPC_WEAK_FUNC(sub_8311F548);
PPC_FUNC_IMPL(__imp__sub_8311F548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f564
	if (!cr6.eq) goto loc_8311F564;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,24,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F564:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f574
	if (!cr6.eq) goto loc_8311F574;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F574:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F588"))) PPC_WEAK_FUNC(sub_8311F588);
PPC_FUNC_IMPL(__imp__sub_8311F588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f5a4
	if (!cr6.eq) goto loc_8311F5A4;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F5A4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f5b4
	if (!cr6.eq) goto loc_8311F5B4;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F5B4:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F5C8"))) PPC_WEAK_FUNC(sub_8311F5C8);
PPC_FUNC_IMPL(__imp__sub_8311F5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f5dc
	if (!cr6.eq) goto loc_8311F5DC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_8311F5DC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f5ec
	if (!cr6.eq) goto loc_8311F5EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311F5EC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F604"))) PPC_WEAK_FUNC(sub_8311F604);
PPC_FUNC_IMPL(__imp__sub_8311F604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311F608"))) PPC_WEAK_FUNC(sub_8311F608);
PPC_FUNC_IMPL(__imp__sub_8311F608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f624
	if (!cr6.eq) goto loc_8311F624;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F624:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f634
	if (!cr6.eq) goto loc_8311F634;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F634:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F648"))) PPC_WEAK_FUNC(sub_8311F648);
PPC_FUNC_IMPL(__imp__sub_8311F648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f664
	if (!cr6.eq) goto loc_8311F664;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F664:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f674
	if (!cr6.eq) goto loc_8311F674;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F674:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F688"))) PPC_WEAK_FUNC(sub_8311F688);
PPC_FUNC_IMPL(__imp__sub_8311F688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f6a4
	if (!cr6.eq) goto loc_8311F6A4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F6A4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f6b4
	if (!cr6.eq) goto loc_8311F6B4;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F6B4:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F6C8"))) PPC_WEAK_FUNC(sub_8311F6C8);
PPC_FUNC_IMPL(__imp__sub_8311F6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f6e4
	if (!cr6.eq) goto loc_8311F6E4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,24,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F6E4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f6f4
	if (!cr6.eq) goto loc_8311F6F4;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F6F4:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F708"))) PPC_WEAK_FUNC(sub_8311F708);
PPC_FUNC_IMPL(__imp__sub_8311F708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f724
	if (!cr6.eq) goto loc_8311F724;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F724:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f734
	if (!cr6.eq) goto loc_8311F734;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F734:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F748"))) PPC_WEAK_FUNC(sub_8311F748);
PPC_FUNC_IMPL(__imp__sub_8311F748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f75c
	if (!cr6.eq) goto loc_8311F75C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_8311F75C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F770"))) PPC_WEAK_FUNC(sub_8311F770);
PPC_FUNC_IMPL(__imp__sub_8311F770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f78c
	if (!cr6.eq) goto loc_8311F78C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F78C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f79c
	if (!cr6.eq) goto loc_8311F79C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F79C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F7B0"))) PPC_WEAK_FUNC(sub_8311F7B0);
PPC_FUNC_IMPL(__imp__sub_8311F7B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f7cc
	if (!cr6.eq) goto loc_8311F7CC;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F7CC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f7dc
	if (!cr6.eq) goto loc_8311F7DC;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F7DC:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F7F0"))) PPC_WEAK_FUNC(sub_8311F7F0);
PPC_FUNC_IMPL(__imp__sub_8311F7F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f80c
	if (!cr6.eq) goto loc_8311F80C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F80C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f81c
	if (!cr6.eq) goto loc_8311F81C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F81C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F830"))) PPC_WEAK_FUNC(sub_8311F830);
PPC_FUNC_IMPL(__imp__sub_8311F830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f84c
	if (!cr6.eq) goto loc_8311F84C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,24,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F84C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f85c
	if (!cr6.eq) goto loc_8311F85C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F85C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F870"))) PPC_WEAK_FUNC(sub_8311F870);
PPC_FUNC_IMPL(__imp__sub_8311F870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f88c
	if (!cr6.eq) goto loc_8311F88C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r11,r11,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F88C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f89c
	if (!cr6.eq) goto loc_8311F89C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F89C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F8B0"))) PPC_WEAK_FUNC(sub_8311F8B0);
PPC_FUNC_IMPL(__imp__sub_8311F8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f8c4
	if (!cr6.eq) goto loc_8311F8C4;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_8311F8C4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f8d4
	if (!cr6.eq) goto loc_8311F8D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311F8D4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F8EC"))) PPC_WEAK_FUNC(sub_8311F8EC);
PPC_FUNC_IMPL(__imp__sub_8311F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311F8F0"))) PPC_WEAK_FUNC(sub_8311F8F0);
PPC_FUNC_IMPL(__imp__sub_8311F8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f90c
	if (!cr6.eq) goto loc_8311F90C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F90C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f91c
	if (!cr6.eq) goto loc_8311F91C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F91C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F930"))) PPC_WEAK_FUNC(sub_8311F930);
PPC_FUNC_IMPL(__imp__sub_8311F930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f94c
	if (!cr6.eq) goto loc_8311F94C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F94C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f95c
	if (!cr6.eq) goto loc_8311F95C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F95C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F970"))) PPC_WEAK_FUNC(sub_8311F970);
PPC_FUNC_IMPL(__imp__sub_8311F970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f98c
	if (!cr6.eq) goto loc_8311F98C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F98C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f99c
	if (!cr6.eq) goto loc_8311F99C;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F99C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F9B0"))) PPC_WEAK_FUNC(sub_8311F9B0);
PPC_FUNC_IMPL(__imp__sub_8311F9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311f9cc
	if (!cr6.eq) goto loc_8311F9CC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,24,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311F9CC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311f9dc
	if (!cr6.eq) goto loc_8311F9DC;
	// li r3,40
	ctx.r3.s64 = 40;
	// blr 
	return;
loc_8311F9DC:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,99
	ctx.r3.s64 = 99;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311F9F0"))) PPC_WEAK_FUNC(sub_8311F9F0);
PPC_FUNC_IMPL(__imp__sub_8311F9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fa0c
	if (!cr6.eq) goto loc_8311FA0C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r11,r11,30,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3F;
	// addi r10,r11,15
	ctx.r10.s64 = ctx.r11.s64 + 15;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
loc_8311FA0C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fa1c
	if (!cr6.eq) goto loc_8311FA1C;
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_8311FA1C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,63
	ctx.r3.s64 = 63;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FA30"))) PPC_WEAK_FUNC(sub_8311FA30);
PPC_FUNC_IMPL(__imp__sub_8311FA30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fa44
	if (!cr6.eq) goto loc_8311FA44;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,5,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// blr 
	return;
loc_8311FA44:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fa54
	if (!cr6.eq) goto loc_8311FA54;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FA54:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,17
	ctx.r10.s64 = 17;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FA6C"))) PPC_WEAK_FUNC(sub_8311FA6C);
PPC_FUNC_IMPL(__imp__sub_8311FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FA70"))) PPC_WEAK_FUNC(sub_8311FA70);
PPC_FUNC_IMPL(__imp__sub_8311FA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fa84
	if (!cr6.eq) goto loc_8311FA84;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,9,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xF;
	// blr 
	return;
loc_8311FA84:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fa94
	if (!cr6.eq) goto loc_8311FA94;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FA94:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,15
	ctx.r10.s64 = 15;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FAAC"))) PPC_WEAK_FUNC(sub_8311FAAC);
PPC_FUNC_IMPL(__imp__sub_8311FAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FAB0"))) PPC_WEAK_FUNC(sub_8311FAB0);
PPC_FUNC_IMPL(__imp__sub_8311FAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fac4
	if (!cr6.eq) goto loc_8311FAC4;
	// lhz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
loc_8311FAC4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fad4
	if (!cr6.eq) goto loc_8311FAD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FAD4:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,7
	ctx.r3.s64 = 7;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FAE8"))) PPC_WEAK_FUNC(sub_8311FAE8);
PPC_FUNC_IMPL(__imp__sub_8311FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fafc
	if (!cr6.eq) goto loc_8311FAFC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
loc_8311FAFC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fb0c
	if (!cr6.eq) goto loc_8311FB0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FB0C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,5
	ctx.r10.s64 = 5;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FB24"))) PPC_WEAK_FUNC(sub_8311FB24);
PPC_FUNC_IMPL(__imp__sub_8311FB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FB28"))) PPC_WEAK_FUNC(sub_8311FB28);
PPC_FUNC_IMPL(__imp__sub_8311FB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fb3c
	if (!cr6.eq) goto loc_8311FB3C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
loc_8311FB3C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fb4c
	if (!cr6.eq) goto loc_8311FB4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FB4C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,7
	ctx.r10.s64 = 7;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FB64"))) PPC_WEAK_FUNC(sub_8311FB64);
PPC_FUNC_IMPL(__imp__sub_8311FB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FB68"))) PPC_WEAK_FUNC(sub_8311FB68);
PPC_FUNC_IMPL(__imp__sub_8311FB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fb7c
	if (!cr6.eq) goto loc_8311FB7C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,25,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7;
	// blr 
	return;
loc_8311FB7C:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fb8c
	if (!cr6.eq) goto loc_8311FB8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FB8C:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,7
	ctx.r10.s64 = 7;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FBA4"))) PPC_WEAK_FUNC(sub_8311FBA4);
PPC_FUNC_IMPL(__imp__sub_8311FBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FBA8"))) PPC_WEAK_FUNC(sub_8311FBA8);
PPC_FUNC_IMPL(__imp__sub_8311FBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fbbc
	if (!cr6.eq) goto loc_8311FBBC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// blr 
	return;
loc_8311FBBC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fbcc
	if (!cr6.eq) goto loc_8311FBCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FBCC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FBE4"))) PPC_WEAK_FUNC(sub_8311FBE4);
PPC_FUNC_IMPL(__imp__sub_8311FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FBE8"))) PPC_WEAK_FUNC(sub_8311FBE8);
PPC_FUNC_IMPL(__imp__sub_8311FBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fbfc
	if (!cr6.eq) goto loc_8311FBFC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_8311FBFC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fc0c
	if (!cr6.eq) goto loc_8311FC0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FC0C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FC20"))) PPC_WEAK_FUNC(sub_8311FC20);
PPC_FUNC_IMPL(__imp__sub_8311FC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fc34
	if (!cr6.eq) goto loc_8311FC34;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,2,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// blr 
	return;
loc_8311FC34:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fc44
	if (!cr6.eq) goto loc_8311FC44;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FC44:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FC5C"))) PPC_WEAK_FUNC(sub_8311FC5C);
PPC_FUNC_IMPL(__imp__sub_8311FC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FC60"))) PPC_WEAK_FUNC(sub_8311FC60);
PPC_FUNC_IMPL(__imp__sub_8311FC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fc74
	if (!cr6.eq) goto loc_8311FC74;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,4,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// blr 
	return;
loc_8311FC74:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fc84
	if (!cr6.eq) goto loc_8311FC84;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FC84:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FC98"))) PPC_WEAK_FUNC(sub_8311FC98);
PPC_FUNC_IMPL(__imp__sub_8311FC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fcac
	if (!cr6.eq) goto loc_8311FCAC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,6,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// blr 
	return;
loc_8311FCAC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fcbc
	if (!cr6.eq) goto loc_8311FCBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FCBC:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FCD4"))) PPC_WEAK_FUNC(sub_8311FCD4);
PPC_FUNC_IMPL(__imp__sub_8311FCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FCD8"))) PPC_WEAK_FUNC(sub_8311FCD8);
PPC_FUNC_IMPL(__imp__sub_8311FCD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fcec
	if (!cr6.eq) goto loc_8311FCEC;
	// lbz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_8311FCEC:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fcfc
	if (!cr6.eq) goto loc_8311FCFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FCFC:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FD10"))) PPC_WEAK_FUNC(sub_8311FD10);
PPC_FUNC_IMPL(__imp__sub_8311FD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fd24
	if (!cr6.eq) goto loc_8311FD24;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,10,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// blr 
	return;
loc_8311FD24:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fd34
	if (!cr6.eq) goto loc_8311FD34;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FD34:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FD4C"))) PPC_WEAK_FUNC(sub_8311FD4C);
PPC_FUNC_IMPL(__imp__sub_8311FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FD50"))) PPC_WEAK_FUNC(sub_8311FD50);
PPC_FUNC_IMPL(__imp__sub_8311FD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fd64
	if (!cr6.eq) goto loc_8311FD64;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r3,r11,14,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// blr 
	return;
loc_8311FD64:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fd74
	if (!cr6.eq) goto loc_8311FD74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FD74:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FD8C"))) PPC_WEAK_FUNC(sub_8311FD8C);
PPC_FUNC_IMPL(__imp__sub_8311FD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8311FD90"))) PPC_WEAK_FUNC(sub_8311FD90);
PPC_FUNC_IMPL(__imp__sub_8311FD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8311fda4
	if (!cr6.eq) goto loc_8311FDA4;
	// lhz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_8311FDA4:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x8311fdb4
	if (!cr6.eq) goto loc_8311FDB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8311FDB4:
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// li r10,2
	ctx.r10.s64 = 2;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8311FDCC"))) PPC_WEAK_FUNC(sub_8311FDCC);
PPC_FUNC_IMPL(__imp__sub_8311FDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

