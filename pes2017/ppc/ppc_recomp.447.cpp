#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83800BF0"))) PPC_WEAK_FUNC(sub_83800BF0);
PPC_FUNC_IMPL(__imp__sub_83800BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x83800BF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x837da198
	ctx.lr = 0x83800C0C;
	sub_837DA198(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_83800C2C:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x83800d54
	if (!cr6.gt) goto loc_83800D54;
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83800d54
	if (cr6.eq) goto loc_83800D54;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x837da358
	ctx.lr = 0x83800C68;
	sub_837DA358(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r5,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x83800d48
	if (cr0.eq) goto loc_83800D48;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_83800C84:
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// rlwinm r11,r8,0,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,6400
	cr6.compare<uint32_t>(ctx.r11.u32, 6400, xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x83800ce4
	if (!cr6.eq) goto loc_83800CE4;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bge cr6,0x83800d2c
	if (!cr6.lt) goto loc_83800D2C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83800CA8:
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83800cc4
	if (!cr6.eq) goto loc_83800CC4;
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x83800cd0
	if (cr6.gt) goto loc_83800CD0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x83800cd0
	goto loc_83800CD0;
loc_83800CC4:
	// lhz r23,-56(r10)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r10.u32 + -56);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, xer);
	// bne cr6,0x83800d24
	if (!cr6.eq) goto loc_83800D24;
loc_83800CD0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x83800ca8
	if (cr6.lt) goto loc_83800CA8;
	// b 0x83800d24
	goto loc_83800D24;
loc_83800CE4:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bge cr6,0x83800d2c
	if (!cr6.lt) goto loc_83800D2C;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_83800CF0:
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83800d0c
	if (!cr6.eq) goto loc_83800D0C;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bne cr6,0x83800d14
	if (!cr6.eq) goto loc_83800D14;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// b 0x83800d14
	goto loc_83800D14;
loc_83800D0C:
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bne cr6,0x83800d24
	if (!cr6.eq) goto loc_83800D24;
loc_83800D14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// blt cr6,0x83800cf0
	if (cr6.lt) goto loc_83800CF0;
loc_83800D24:
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, xer);
	// bne cr6,0x83800d40
	if (!cr6.eq) goto loc_83800D40;
loc_83800D2C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// blt cr6,0x83800c84
	if (cr6.lt) goto loc_83800C84;
	// b 0x83800d48
	goto loc_83800D48;
loc_83800D40:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_83800D48:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// blt cr6,0x83800c2c
	if (cr6.lt) goto loc_83800C2C;
loc_83800D54:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83800d6c
	if (cr6.eq) goto loc_83800D6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83800D6C;
	sub_825952B8(ctx, base);
loc_83800D6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83800D78"))) PPC_WEAK_FUNC(sub_83800D78);
PPC_FUNC_IMPL(__imp__sub_83800D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83800D80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83800D90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83800d90
	if (!cr6.eq) goto loc_83800D90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83800DB4;
	sub_8259CC28(ctx, base);
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// li r29,8
	ctx.r29.s64 = 8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83800DC4:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83800dfc
	if (cr6.eq) goto loc_83800DFC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83800DD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83800dd4
	if (!cr6.eq) goto loc_83800DD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83800DF8;
	sub_8259CC28(ctx, base);
	// b 0x83800e1c
	goto loc_83800E1C;
loc_83800DFC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83800e14
	if (cr6.lt) goto loc_83800E14;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x83800e18
	goto loc_83800E18;
loc_83800E14:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83800E18:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
loc_83800E1C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// bne 0x83800dc4
	if (!cr0.eq) goto loc_83800DC4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83800E34"))) PPC_WEAK_FUNC(sub_83800E34);
PPC_FUNC_IMPL(__imp__sub_83800E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83800E38"))) PPC_WEAK_FUNC(sub_83800E38);
PPC_FUNC_IMPL(__imp__sub_83800E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83800E40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r29,16,24,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFF;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x83800ec8
	if (cr6.eq) goto loc_83800EC8;
	// bl 0x82a4d1d8
	ctx.lr = 0x83800E5C;
	sub_82A4D1D8(ctx, base);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82a4cf00
	ctx.lr = 0x83800E78;
	sub_82A4CF00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83800bf0
	ctx.lr = 0x83800E88;
	sub_83800BF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 * 56;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82a4cf38
	ctx.lr = 0x83800EA0;
	sub_82A4CF38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83800d78
	ctx.lr = 0x83800EB0;
	sub_83800D78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
loc_83800EC8:
	// bl 0x837da198
	ctx.lr = 0x83800ECC;
	sub_837DA198(ctx, base);
	// lbz r11,11371(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11371);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83800f10
	if (cr6.eq) goto loc_83800F10;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// addi r29,r11,6312
	ctx.r29.s64 = ctx.r11.s64 + 6312;
	// addi r5,r29,-60
	ctx.r5.s64 = ctx.r29.s64 + -60;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// bl 0x8380f818
	ctx.lr = 0x83800EF0;
	sub_8380F818(ctx, base);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// li r31,8
	ctx.r31.s64 = 8;
loc_83800EF8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8380f6f8
	ctx.lr = 0x83800F04;
	sub_8380F6F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// bne 0x83800ef8
	if (!cr0.eq) goto loc_83800EF8;
loc_83800F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83800F18"))) PPC_WEAK_FUNC(sub_83800F18);
PPC_FUNC_IMPL(__imp__sub_83800F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83800F20;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x837da198
	ctx.lr = 0x83800F38;
	sub_837DA198(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r19.u32);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r19.u32);
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r19.u32);
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, xer);
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// beq cr6,0x83800fac
	if (cr6.eq) goto loc_83800FAC;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x831ce420
	ctx.lr = 0x83800FA4;
	sub_831CE420(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r10.u32);
loc_83800FAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// beq cr6,0x83800fd8
	if (cr6.eq) goto loc_83800FD8;
loc_83800FB8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x835977d8
	ctx.lr = 0x83800FC4;
	sub_835977D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// blt cr6,0x83800fb8
	if (cr6.lt) goto loc_83800FB8;
loc_83800FD8:
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// b 0x83800fe8
	goto loc_83800FE8;
loc_83800FE0:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83800FE8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// ble cr6,0x83801284
	if (!cr6.gt) goto loc_83801284;
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// beq cr6,0x83801020
	if (cr6.eq) goto loc_83801020;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x8380101C;
	sub_831CE420(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
loc_83801020:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r21,r25,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r27,r25,1
	ctx.r27.s64 = ctx.r25.s64 + 1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwzx r8,r21,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// srawi r7,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + ctx.r24.u64;
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, xer);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r22
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r22.u32);
	// rlwinm r31,r4,0,0,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF00;
	// bge cr6,0x8380109c
	if (!cr6.lt) goto loc_8380109C;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_8380105C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// add r8,r9,r24
	ctx.r8.u64 = ctx.r9.u64 + ctx.r24.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r22
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r22.u32);
	// rlwinm r5,r6,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, xer);
	// bne cr6,0x8380109c
	if (!cr6.eq) goto loc_8380109C;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r6.u32, xer);
	// blt cr6,0x8380105c
	if (cr6.lt) goto loc_8380105C;
loc_8380109C:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x837da358
	ctx.lr = 0x838010B4;
	sub_837DA358(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83801114
	if (!cr6.eq) goto loc_83801114;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x838010e4
	if (!cr6.eq) goto loc_838010E4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// beq cr6,0x83801234
	if (cr6.eq) goto loc_83801234;
loc_838010E4:
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, xer);
	// bge cr6,0x83801214
	if (!cr6.lt) goto loc_83801214;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// subf r31,r25,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_838010F4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x835977d8
	ctx.lr = 0x83801104;
	sub_835977D8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x838010f4
	if (!cr0.eq) goto loc_838010F4;
	// b 0x83801214
	goto loc_83801214;
loc_83801114:
	// cmplw cr6,r23,r20
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, xer);
	// beq cr6,0x83801134
	if (cr6.eq) goto loc_83801134;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831ce420
	ctx.lr = 0x8380112C;
	sub_831CE420(ctx, base);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
loc_83801134:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x838011c8
	if (cr0.eq) goto loc_838011C8;
loc_8380114C:
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, xer);
	// bge cr6,0x838011a8
	if (!cr6.lt) goto loc_838011A8;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// subf r29,r25,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r25.s64;
loc_83801160:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r8,r11,r24
	ctx.r8.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r22
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r22.u32);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x83801190
	if (!cr6.eq) goto loc_83801190;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x835977d8
	ctx.lr = 0x83801190;
	sub_835977D8(ctx, base);
loc_83801190:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x83801160
	if (!cr0.eq) goto loc_83801160;
	// lwz r20,132(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_838011A8:
	// cmplw cr6,r23,r20
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, xer);
	// bne cr6,0x838011d0
	if (!cr6.eq) goto loc_838011D0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x8380114c
	if (cr6.lt) goto loc_8380114C;
loc_838011C8:
	// cmplw cr6,r23,r20
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r20.u32, xer);
	// beq cr6,0x83801204
	if (cr6.eq) goto loc_83801204;
loc_838011D0:
	// subf r11,r23,r20
	ctx.r11.s64 = ctx.r20.s64 - ctx.r23.s64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// srawi. r29,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x83801214
	if (cr0.eq) goto loc_83801214;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_838011E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x838011F0;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// blt cr6,0x838011e4
	if (cr6.lt) goto loc_838011E4;
	// b 0x83801214
	goto loc_83801214;
loc_83801204:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x835977d8
	ctx.lr = 0x83801214;
	sub_835977D8(ctx, base);
loc_83801214:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, xer);
	// bge cr6,0x83801248
	if (!cr6.lt) goto loc_83801248;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x83801020
	goto loc_83801020;
loc_83801234:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83801244
	if (!cr6.eq) goto loc_83801244;
	// li r15,1
	ctx.r15.s64 = 1;
	// b 0x83801248
	goto loc_83801248;
loc_83801244:
	// li r16,1
	ctx.r16.s64 = 1;
loc_83801248:
	// clrlwi r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83801280
	if (!cr6.eq) goto loc_83801280;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83801268
	if (cr6.eq) goto loc_83801268;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// b 0x83801274
	goto loc_83801274;
loc_83801268:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a120f0
	ctx.lr = 0x83801274;
	sub_82A120F0(ctx, base);
loc_83801274:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,5
	cr6.compare<uint32_t>(ctx.r24.u32, 5, xer);
	// blt cr6,0x83800fe0
	if (cr6.lt) goto loc_83800FE0;
loc_83801280:
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_83801284:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x838012a0
	if (cr6.eq) goto loc_838012A0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x838012A0;
	sub_825952B8(ctx, base);
loc_838012A0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838012b8
	if (cr6.eq) goto loc_838012B8;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x838012B8;
	sub_825952B8(ctx, base);
loc_838012B8:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838012d0
	if (cr6.eq) goto loc_838012D0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x838012D0;
	sub_825952B8(ctx, base);
loc_838012D0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838012D8"))) PPC_WEAK_FUNC(sub_838012D8);
PPC_FUNC_IMPL(__imp__sub_838012D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x838012E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,188
	ctx.r11.s64 = 12320768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,21092
	ctx.r10.u64 = ctx.r11.u64 | 21092;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83801304
	if (!cr6.gt) goto loc_83801304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x83801304;
	sub_831CC150(ctx, base);
loc_83801304:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,348
	ctx.r24.s64 = 348;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x838013c0
	if (!cr6.lt) goto loc_838013C0;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,348
	ctx.r26.s64 = ctx.r4.s64 * 348;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8380133C;
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
	// beq cr6,0x83801378
	if (cr6.eq) goto loc_83801378;
loc_83801354:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83801368
	if (cr6.eq) goto loc_83801368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837fe030
	ctx.lr = 0x83801368;
	sub_837FE030(ctx, base);
loc_83801368:
	// addi r30,r30,348
	ctx.r30.s64 = ctx.r30.s64 + 348;
	// addi r29,r29,348
	ctx.r29.s64 = ctx.r29.s64 + 348;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x83801354
	if (!cr6.eq) goto loc_83801354;
loc_83801378:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x838013a8
	if (cr6.eq) goto loc_838013A8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// bl 0x837feea0
	ctx.lr = 0x83801398;
	sub_837FEEA0(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x838013A8;
	sub_825952B8(ctx, base);
loc_838013A8:
	// mulli r11,r30,348
	ctx.r11.s64 = ctx.r30.s64 * 348;
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
loc_838013C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838013C8"))) PPC_WEAK_FUNC(sub_838013C8);
PPC_FUNC_IMPL(__imp__sub_838013C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x838013D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r29,r5,16,24,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// bl 0x82a4d1d8
	ctx.lr = 0x838013E8;
	sub_82A4D1D8(ctx, base);
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82a4cf00
	ctx.lr = 0x83801404;
	sub_82A4CF00(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83800f18
	ctx.lr = 0x83801428;
	sub_83800F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4cf38
	ctx.lr = 0x83801434;
	sub_82A4CF38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8380143C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8380143c
	if (!cr6.eq) goto loc_8380143C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x83801460;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r24,96(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r23,2
	ctx.r23.s64 = 2;
	// subf r9,r24,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r24.s64;
	// srawi. r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8380155c
	if (cr0.eq) goto loc_8380155C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// li r28,15
	ctx.r28.s64 = 15;
loc_83801488:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mulli r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 * 14;
	// addi r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 3;
loc_83801498:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83801544
	if (cr6.eq) goto loc_83801544;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838014B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838014b4
	if (!cr6.eq) goto loc_838014B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83801544
	if (cr6.eq) goto loc_83801544;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_838014E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838014e8
	if (!cr6.eq) goto loc_838014E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x8380150C;
	sub_8259CC28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8291fdc8
	ctx.lr = 0x83801518;
	sub_8291FDC8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83801534
	if (cr6.lt) goto loc_83801534;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x83801534;
	sub_825952B8(ctx, base);
loc_83801534:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83801544:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(ctx.r31.u32, 8, xer);
	// blt cr6,0x83801498
	if (cr6.lt) goto loc_83801498;
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x83801488
	if (!cr0.eq) goto loc_83801488;
loc_8380155C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x83801574
	if (cr6.eq) goto loc_83801574;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x83801574;
	sub_825952B8(ctx, base);
loc_83801574:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380157C"))) PPC_WEAK_FUNC(sub_8380157C);
PPC_FUNC_IMPL(__imp__sub_8380157C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83801580"))) PPC_WEAK_FUNC(sub_83801580);
PPC_FUNC_IMPL(__imp__sub_83801580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,188
	ctx.r10.s64 = 12320768;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,348
	ctx.r9.s64 = 348;
	// ori r8,r10,21092
	ctx.r8.u64 = ctx.r10.u64 | 21092;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x838015b4
	if (!cr6.lt) goto loc_838015B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_838015B4:
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
	// blt cr6,0x838015e4
	if (cr6.lt) goto loc_838015E4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_838015E4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x838015f0
	if (!cr6.lt) goto loc_838015F0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_838015F0:
	// b 0x838012d8
	sub_838012D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838015F4"))) PPC_WEAK_FUNC(sub_838015F4);
PPC_FUNC_IMPL(__imp__sub_838015F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838015F8"))) PPC_WEAK_FUNC(sub_838015F8);
PPC_FUNC_IMPL(__imp__sub_838015F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83801600;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x837f92b8
	ctx.lr = 0x83801610;
	sub_837F92B8(ctx, base);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r30,20
	ctx.r31.s64 = ctx.r30.s64 + 20;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x83801644
	if (cr6.eq) goto loc_83801644;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x837feef0
	ctx.lr = 0x83801630;
	sub_837FEEF0(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x837feea0
	ctx.lr = 0x83801640;
	sub_837FEEA0(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_83801644:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83801658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83801660"))) PPC_WEAK_FUNC(sub_83801660);
PPC_FUNC_IMPL(__imp__sub_83801660) {
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
	// bge cr6,0x83801698
	if (!cr6.lt) goto loc_83801698;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8380169c
	if (!cr6.gt) goto loc_8380169C;
loc_83801698:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8380169C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838016ec
	if (cr6.eq) goto loc_838016EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,348
	ctx.r9.s64 = 348;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x838016d0
	if (!cr6.eq) goto loc_838016D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83801580
	ctx.lr = 0x838016D0;
	sub_83801580(ctx, base);
loc_838016D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83801718
	if (cr6.eq) goto loc_83801718;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,348
	ctx.r11.s64 = ctx.r30.s64 * 348;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x83801714
	goto loc_83801714;
loc_838016EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83801704
	if (!cr6.eq) goto loc_83801704;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83801580
	ctx.lr = 0x83801704;
	sub_83801580(ctx, base);
loc_83801704:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83801718
	if (cr6.eq) goto loc_83801718;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83801714:
	// bl 0x837fe030
	ctx.lr = 0x83801718;
	sub_837FE030(ctx, base);
loc_83801718:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,348
	ctx.r11.s64 = ctx.r11.s64 + 348;
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

__attribute__((alias("__imp__sub_8380173C"))) PPC_WEAK_FUNC(sub_8380173C);
PPC_FUNC_IMPL(__imp__sub_8380173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83801740"))) PPC_WEAK_FUNC(sub_83801740);
PPC_FUNC_IMPL(__imp__sub_83801740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83801748;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r21,28
	ctx.r21.s64 = 28;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r31,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r31.u8);
	// lfs f31,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// divw. r7,r8,r21
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r21.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r31.u32);
	// stb r31,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r31.u8);
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r31.u8);
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r31.u32);
	// stb r31,380(r1)
	PPC_STORE_U8(ctx.r1.u32 + 380, ctx.r31.u8);
	// stw r11,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r11.u32);
	// stw r31,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r31.u32);
	// stb r31,408(r1)
	PPC_STORE_U8(ctx.r1.u32 + 408, ctx.r31.u8);
	// beq 0x838019dc
	if (cr0.eq) goto loc_838019DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// li r22,27
	ctx.r22.s64 = 27;
	// lfs f30,-24912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24912);
	ctx.f30.f64 = double(temp.f32);
loc_83801814:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r25,r10,16,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// addi r24,r11,-1
	ctx.r24.s64 = ctx.r11.s64 + -1;
	// bl 0x82a4d1d8
	ctx.lr = 0x8380182C;
	sub_82A4D1D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bl 0x82a4cdc0
	ctx.lr = 0x83801840;
	sub_82A4CDC0(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_83801848:
	// li r11,20
	ctx.r11.s64 = 20;
	// stfs f30,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r1,127
	ctx.r11.s64 = ctx.r1.s64 + 127;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
loc_83801878:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x83801878
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83801878;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stfs f31,436(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// stfs f31,440(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// bge cr6,0x8380192c
	if (!cr6.lt) goto loc_8380192C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lhz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lhz r5,14(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// lhz r3,18(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_8380191C:
	// lbzx r11,r8,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8380191c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8380191C;
loc_8380192C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// stb r8,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r8.u8);
	// bl 0x83800e38
	ctx.lr = 0x83801974;
	sub_83800E38(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83801998;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838019bc
	if (cr6.eq) goto loc_838019BC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// bl 0x83801660
	ctx.lr = 0x838019B0;
	sub_83801660(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// b 0x83801848
	goto loc_83801848;
loc_838019BC:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r8,r9,r21
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r21.s32);
	// cmplw cr6,r23,r8
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r8.u32, xer);
	// blt cr6,0x83801814
	if (cr6.lt) goto loc_83801814;
loc_838019DC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// bl 0x83801660
	ctx.lr = 0x838019E8;
	sub_83801660(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x837fc788
	ctx.lr = 0x838019F0;
	sub_837FC788(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83801A00"))) PPC_WEAK_FUNC(sub_83801A00);
PPC_FUNC_IMPL(__imp__sub_83801A00) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,46(r3)
	PPC_STORE_U8(ctx.r3.u32 + 46, ctx.r11.u8);
	// stb r10,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r10.u8);
	// stb r10,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, ctx.r10.u8);
	// stb r11,51(r3)
	PPC_STORE_U8(ctx.r3.u32 + 51, ctx.r11.u8);
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// stb r11,55(r3)
	PPC_STORE_U8(ctx.r3.u32 + 55, ctx.r11.u8);
	// b 0x837f9ce0
	sub_837F9CE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83801A24"))) PPC_WEAK_FUNC(sub_83801A24);
PPC_FUNC_IMPL(__imp__sub_83801A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83801A28"))) PPC_WEAK_FUNC(sub_83801A28);
PPC_FUNC_IMPL(__imp__sub_83801A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83801A44"))) PPC_WEAK_FUNC(sub_83801A44);
PPC_FUNC_IMPL(__imp__sub_83801A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83801A48"))) PPC_WEAK_FUNC(sub_83801A48);
PPC_FUNC_IMPL(__imp__sub_83801A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83801A50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x837ffa08
	ctx.lr = 0x83801A68;
	sub_837FFA08(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6552
	ctx.r9.s64 = ctx.r10.s64 + 6552;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r29,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// blt cr6,0x83801a90
	if (cr6.lt) goto loc_83801A90;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x83801a94
	if (cr6.lt) goto loc_83801A94;
loc_83801A90:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_83801A94:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 468, ctx.r10.u8);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83801AC8"))) PPC_WEAK_FUNC(sub_83801AC8);
PPC_FUNC_IMPL(__imp__sub_83801AC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6552
	ctx.r10.s64 = ctx.r11.s64 + 6552;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x83800020
	ctx.lr = 0x83801AF4;
	sub_83800020(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83801b0c
	if (cr6.eq) goto loc_83801B0C;
	// bl 0x82416268
	ctx.lr = 0x83801B08;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83801B0C:
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

__attribute__((alias("__imp__sub_83801B24"))) PPC_WEAK_FUNC(sub_83801B24);
PPC_FUNC_IMPL(__imp__sub_83801B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83801B28"))) PPC_WEAK_FUNC(sub_83801B28);
PPC_FUNC_IMPL(__imp__sub_83801B28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,496
	ctx.r4.s64 = 496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83801B5C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83801bbc
	if (cr6.eq) goto loc_83801BBC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83801a48
	ctx.lr = 0x83801B70;
	sub_83801A48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83801bbc
	if (cr6.eq) goto loc_83801BBC;
	// bl 0x837f9790
	ctx.lr = 0x83801B80;
	sub_837F9790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83801bc4
	if (!cr6.eq) goto loc_83801BC4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83801B9C;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83801BB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83801BBC;
	sub_82595170(ctx, base);
loc_83801BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83801bc8
	goto loc_83801BC8;
loc_83801BC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83801BC8:
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

__attribute__((alias("__imp__sub_83801BE0"))) PPC_WEAK_FUNC(sub_83801BE0);
PPC_FUNC_IMPL(__imp__sub_83801BE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addi r8,r3,136
	ctx.r8.s64 = ctx.r3.s64 + 136;
	// lwz r9,140(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801c20
	if (cr6.eq) goto loc_83801C20;
loc_83801C00:
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
	// bne cr6,0x83801c00
	if (!cr6.eq) goto loc_83801C00;
loc_83801C20:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83801C28"))) PPC_WEAK_FUNC(sub_83801C28);
PPC_FUNC_IMPL(__imp__sub_83801C28) {
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
	// bl 0x830ff290
	ctx.lr = 0x83801C38;
	sub_830FF290(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830ff7b8
	ctx.lr = 0x83801C40;
	sub_830FF7B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83801C50"))) PPC_WEAK_FUNC(sub_83801C50);
PPC_FUNC_IMPL(__imp__sub_83801C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bne cr6,0x83801c6c
	if (!cr6.eq) goto loc_83801C6C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83801c88
	if (!cr6.eq) goto loc_83801C88;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83801C6C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83801c7c
	if (cr6.eq) goto loc_83801C7C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83801c88
	if (!cr6.eq) goto loc_83801C88;
loc_83801C7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83801C88:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83801ca0
	if (!cr6.eq) goto loc_83801CA0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_83801CA0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83801CB4"))) PPC_WEAK_FUNC(sub_83801CB4);
PPC_FUNC_IMPL(__imp__sub_83801CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83801CB8"))) PPC_WEAK_FUNC(sub_83801CB8);
PPC_FUNC_IMPL(__imp__sub_83801CB8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6824
	ctx.r10.s64 = ctx.r11.s64 + 6824;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x830ff290
	ctx.lr = 0x83801CE4;
	sub_830FF290(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x830ff7b8
	ctx.lr = 0x83801CEC;
	sub_830FF7B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83800020
	ctx.lr = 0x83801CF4;
	sub_83800020(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83801d0c
	if (cr6.eq) goto loc_83801D0C;
	// bl 0x82416268
	ctx.lr = 0x83801D08;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83801D0C:
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

__attribute__((alias("__imp__sub_83801D24"))) PPC_WEAK_FUNC(sub_83801D24);
PPC_FUNC_IMPL(__imp__sub_83801D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83801D28"))) PPC_WEAK_FUNC(sub_83801D28);
PPC_FUNC_IMPL(__imp__sub_83801D28) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,464
	ctx.r4.s64 = 464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83801D58;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83801dc4
	if (cr6.eq) goto loc_83801DC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837ffa08
	ctx.lr = 0x83801D6C;
	sub_837FFA08(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,6824
	ctx.r10.s64 = ctx.r11.s64 + 6824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// bl 0x837f9790
	ctx.lr = 0x83801D88;
	sub_837F9790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83801dcc
	if (!cr6.eq) goto loc_83801DCC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83801DA4;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83801DBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83801DC4;
	sub_82595170(ctx, base);
loc_83801DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83801dd0
	goto loc_83801DD0;
loc_83801DCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83801DD0:
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

__attribute__((alias("__imp__sub_83801DE8"))) PPC_WEAK_FUNC(sub_83801DE8);
PPC_FUNC_IMPL(__imp__sub_83801DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83801DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,348
	ctx.r10.s64 = 348;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// divw. r8,r8,r10
	ctx.r8.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq 0x83801e40
	if (cr0.eq) goto loc_83801E40;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_83801E20:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,348
	ctx.r10.s64 = ctx.r10.s64 + 348;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// lwz r7,56(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// or r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 | ctx.r30.u64;
	// blt cr6,0x83801e20
	if (cr6.lt) goto loc_83801E20;
loc_83801E40:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83801f54
	if (cr6.eq) goto loc_83801F54;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// stb r29,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r29.u8);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,11
	ctx.r9.u64 = ctx.r10.u64 | 11;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,12
	ctx.r9.u64 = ctx.r10.u64 | 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,13
	ctx.r9.u64 = ctx.r10.u64 | 13;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,14
	ctx.r9.u64 = ctx.r10.u64 | 14;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,15
	ctx.r9.u64 = ctx.r10.u64 | 15;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,17
	ctx.r9.u64 = ctx.r10.u64 | 17;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,18
	ctx.r9.u64 = ctx.r10.u64 | 18;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,19
	ctx.r9.u64 = ctx.r10.u64 | 19;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r9,r10,20
	ctx.r9.u64 = ctx.r10.u64 | 20;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x83801f2c
	if (cr6.eq) goto loc_83801F2C;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83801f58
	if (cr6.lt) goto loc_83801F58;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// ori r9,r10,9
	ctx.r9.u64 = ctx.r10.u64 | 9;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x83801f58
	if (!cr6.lt) goto loc_83801F58;
loc_83801F2C:
	// bl 0x837da198
	ctx.lr = 0x83801F30;
	sub_837DA198(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x837da198
	ctx.lr = 0x83801F3C;
	sub_837DA198(ctx, base);
	// stw r28,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r28.u32);
	// bl 0x837da198
	ctx.lr = 0x83801F44;
	sub_837DA198(ctx, base);
	// stw r29,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r29.u32);
	// bl 0x837da198
	ctx.lr = 0x83801F4C;
	sub_837DA198(ctx, base);
	// stw r28,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r28.u32);
	// b 0x83801f58
	goto loc_83801F58;
loc_83801F54:
	// stb r28,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r28.u8);
loc_83801F58:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// stb r28,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r28.u8);
	// stb r29,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r29.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83801f74
	if (cr6.eq) goto loc_83801F74;
	// stb r29,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r29.u8);
	// b 0x83801f78
	goto loc_83801F78;
loc_83801F74:
	// stb r28,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r28.u8);
loc_83801F78:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a4d1d8
	ctx.lr = 0x83801F84;
	sub_82A4D1D8(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82a4ce10
	ctx.lr = 0x83801F94;
	sub_82A4CE10(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83801fa4
	if (cr6.eq) goto loc_83801FA4;
	// stb r29,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r29.u8);
loc_83801FA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f9ce0
	ctx.lr = 0x83801FAC;
	sub_837F9CE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83801FB4"))) PPC_WEAK_FUNC(sub_83801FB4);
PPC_FUNC_IMPL(__imp__sub_83801FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83801FB8"))) PPC_WEAK_FUNC(sub_83801FB8);
PPC_FUNC_IMPL(__imp__sub_83801FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83801FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,348
	ctx.r9.s64 = 348;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// divw. r8,r7,r9
	ctx.r8.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8380200c
	if (cr0.eq) goto loc_8380200C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83801FEC:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,348
	ctx.r10.s64 = ctx.r10.s64 + 348;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// lwz r7,52(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// or r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 | ctx.r29.u64;
	// blt cr6,0x83801fec
	if (cr6.lt) goto loc_83801FEC;
loc_8380200C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_83802014:
	// and r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 & ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83802054
	if (cr6.eq) goto loc_83802054;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(ctx.r30.u32, 10, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bgt cr6,0x83802040
	if (cr6.gt) goto loc_83802040;
	// clrlwi r7,r30,24
	ctx.r7.u64 = ctx.r30.u32 & 0xFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8380204c
	goto loc_8380204C;
loc_83802040:
	// addi r11,r30,245
	ctx.r11.s64 = ctx.r30.s64 + 245;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
loc_8380204C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x837fe670
	ctx.lr = 0x83802054;
	sub_837FE670(ctx, base);
loc_83802054:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r28,r28,1
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// cmplwi cr6,r30,22
	cr6.compare<uint32_t>(ctx.r30.u32, 22, xer);
	// blt cr6,0x83802014
	if (cr6.lt) goto loc_83802014;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x837fe7e0
	ctx.lr = 0x83802078;
	sub_837FE7E0(ctx, base);
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r8,r31,136
	ctx.r8.s64 = ctx.r31.s64 + 136;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x838020bc
	if (cr6.eq) goto loc_838020BC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x838020b8
	if (cr6.eq) goto loc_838020B8;
loc_83802098:
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
	// bne cr6,0x83802098
	if (!cr6.eq) goto loc_83802098;
loc_838020B8:
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_838020BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838020C4"))) PPC_WEAK_FUNC(sub_838020C4);
PPC_FUNC_IMPL(__imp__sub_838020C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838020C8"))) PPC_WEAK_FUNC(sub_838020C8);
PPC_FUNC_IMPL(__imp__sub_838020C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,33
	ctx.r11.s64 = 33;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,464
	ctx.r4.s64 = 464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x838020F8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83802168
	if (cr6.eq) goto loc_83802168;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837ffa08
	ctx.lr = 0x8380210C;
	sub_837FFA08(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,6824
	ctx.r10.s64 = ctx.r11.s64 + 6824;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x837f92b8
	ctx.lr = 0x83802124;
	sub_837F92B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x837f9790
	ctx.lr = 0x8380212C;
	sub_837F9790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83802170
	if (!cr6.eq) goto loc_83802170;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83802148;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83802160;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83802168;
	sub_82595170(ctx, base);
loc_83802168:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83802174
	goto loc_83802174;
loc_83802170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83802174:
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

__attribute__((alias("__imp__sub_8380218C"))) PPC_WEAK_FUNC(sub_8380218C);
PPC_FUNC_IMPL(__imp__sub_8380218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83802190"))) PPC_WEAK_FUNC(sub_83802190);
PPC_FUNC_IMPL(__imp__sub_83802190) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838021d0
	if (cr6.eq) goto loc_838021D0;
	// addi r4,r31,832
	ctx.r4.s64 = ctx.r31.s64 + 832;
	// bl 0x837b0ea0
	ctx.lr = 0x838021B8;
	sub_837B0EA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838021d0
	if (cr6.eq) goto loc_838021D0;
	// addi r4,r31,840
	ctx.r4.s64 = ctx.r31.s64 + 840;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b1768
	ctx.lr = 0x838021D0;
	sub_837B1768(ctx, base);
loc_838021D0:
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

__attribute__((alias("__imp__sub_838021E4"))) PPC_WEAK_FUNC(sub_838021E4);
PPC_FUNC_IMPL(__imp__sub_838021E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838021E8"))) PPC_WEAK_FUNC(sub_838021E8);
PPC_FUNC_IMPL(__imp__sub_838021E8) {
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
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83802214
	if (cr6.eq) goto loc_83802214;
	// bl 0x837b1768
	ctx.lr = 0x8380220C;
	sub_837B1768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r11.u8);
loc_83802214:
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

__attribute__((alias("__imp__sub_83802228"))) PPC_WEAK_FUNC(sub_83802228);
PPC_FUNC_IMPL(__imp__sub_83802228) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83802258
	if (!cr6.eq) goto loc_83802258;
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
loc_83802258:
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x83802268;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_8380227C"))) PPC_WEAK_FUNC(sub_8380227C);
PPC_FUNC_IMPL(__imp__sub_8380227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83802280"))) PPC_WEAK_FUNC(sub_83802280);
PPC_FUNC_IMPL(__imp__sub_83802280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-25156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25156);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-18360(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18360);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmadds f9,f10,f0,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f9,8(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838022CC"))) PPC_WEAK_FUNC(sub_838022CC);
PPC_FUNC_IMPL(__imp__sub_838022CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838022D0"))) PPC_WEAK_FUNC(sub_838022D0);
PPC_FUNC_IMPL(__imp__sub_838022D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838022D8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8380234c
	if (cr6.eq) goto loc_8380234C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834fc060
	ctx.lr = 0x83802310;
	sub_834FC060(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x834ff3f0
	ctx.lr = 0x8380231C;
	sub_834FF3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x834f64a8
	ctx.lr = 0x83802334;
	sub_834F64A8(ctx, base);
	// bl 0x83740868
	ctx.lr = 0x83802338;
	sub_83740868(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// bl 0x834ef9e8
	ctx.lr = 0x8380234C;
	sub_834EF9E8(ctx, base);
loc_8380234C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83802374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83802380"))) PPC_WEAK_FUNC(sub_83802380);
PPC_FUNC_IMPL(__imp__sub_83802380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83802388;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838023e8
	if (!cr6.eq) goto loc_838023E8;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,892
	ctx.r4.s64 = 892;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x838023BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838023e0
	if (cr6.eq) goto loc_838023E0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x837aa440
	ctx.lr = 0x838023CC;
	sub_837AA440(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stb r30,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838023E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
loc_838023E8:
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stb r30,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838023F8"))) PPC_WEAK_FUNC(sub_838023F8);
PPC_FUNC_IMPL(__imp__sub_838023F8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83802438
	if (cr6.eq) goto loc_83802438;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x834f0718
	ctx.lr = 0x8380241C;
	sub_834F0718(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lfs f0,24504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83802438:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83802450"))) PPC_WEAK_FUNC(sub_83802450);
PPC_FUNC_IMPL(__imp__sub_83802450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x83802458;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,7220
	ctx.r8.s64 = ctx.r11.s64 + 7220;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,100
	ctx.r11.s64 = ctx.r3.s64 + 100;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f31,16(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f31,24(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f31,36(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f31,40(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f31,44(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f31,48(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f31,52(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f31,56(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
loc_838024BC:
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x838024bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838024BC;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r31,340
	ctx.r11.s64 = ctx.r31.s64 + 340;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f30,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
loc_838024E0:
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f30,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x838024e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838024E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r4,828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 828, ctx.r4.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r30,829(r31)
	PPC_STORE_U8(ctx.r31.u32 + 829, ctx.r30.u8);
	// li r24,1
	ctx.r24.s64 = 1;
	// sth r10,832(r31)
	PPC_STORE_U16(ctx.r31.u32 + 832, ctx.r10.u16);
	// addi r22,r31,1028
	ctx.r22.s64 = ctx.r31.s64 + 1028;
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// lfs f0,-25156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,840(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 840, temp.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stfs f31,844(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
	// addi r11,r31,832
	ctx.r11.s64 = ctx.r31.s64 + 832;
	// stfs f31,848(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// stfs f31,852(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// stfs f31,856(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// stfs f31,860(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// stfs f31,864(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f31,868(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// stfs f31,872(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// stfs f31,876(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f31,880(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 880, temp.u32);
	// stfs f31,884(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 884, temp.u32);
	// stfs f31,888(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 888, temp.u32);
	// stfs f31,892(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 892, temp.u32);
	// stfs f31,896(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 896, temp.u32);
	// stfs f31,900(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 900, temp.u32);
	// stb r30,904(r31)
	PPC_STORE_U8(ctx.r31.u32 + 904, ctx.r30.u8);
	// stb r30,905(r31)
	PPC_STORE_U8(ctx.r31.u32 + 905, ctx.r30.u8);
	// stb r30,906(r31)
	PPC_STORE_U8(ctx.r31.u32 + 906, ctx.r30.u8);
	// stb r30,907(r31)
	PPC_STORE_U8(ctx.r31.u32 + 907, ctx.r30.u8);
	// stw r30,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r30.u32);
	// stb r30,928(r31)
	PPC_STORE_U8(ctx.r31.u32 + 928, ctx.r30.u8);
	// stb r30,929(r31)
	PPC_STORE_U8(ctx.r31.u32 + 929, ctx.r30.u8);
	// stw r30,912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 912, ctx.r30.u32);
	// stw r30,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r30.u32);
	// stw r30,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r30.u32);
	// stw r30,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r30.u32);
	// stb r24,941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 941, ctx.r24.u8);
	// stb r24,942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 942, ctx.r24.u8);
	// bl 0x82a5c280
	ctx.lr = 0x8380259C;
	sub_82A5C280(ctx, base);
	// stfs f31,1120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1120, temp.u32);
	// stfs f31,1124(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1124, temp.u32);
	// addi r21,r31,1192
	ctx.r21.s64 = ctx.r31.s64 + 1192;
	// stfs f31,1128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1128, temp.u32);
	// addi r29,r31,1120
	ctx.r29.s64 = ctx.r31.s64 + 1120;
	// stfs f31,1132(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1132, temp.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stfs f31,1136(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1136, temp.u32);
	// addi r28,r31,1132
	ctx.r28.s64 = ctx.r31.s64 + 1132;
	// stfs f31,1140(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1140, temp.u32);
	// addi r27,r31,1144
	ctx.r27.s64 = ctx.r31.s64 + 1144;
	// stfs f31,1144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f31,1148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f31,1152(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// bl 0x82a5c280
	ctx.lr = 0x838025D8;
	sub_82A5C280(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,1248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1248, temp.u32);
	// addi r26,r31,1248
	ctx.r26.s64 = ctx.r31.s64 + 1248;
	// stfs f31,1252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1252, temp.u32);
	// addi r25,r31,1260
	ctx.r25.s64 = ctx.r31.s64 + 1260;
	// stfs f31,1256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1256, temp.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stfs f31,1260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// addi r10,r31,744
	ctx.r10.s64 = ctx.r31.s64 + 744;
	// stfs f31,1264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stfs f31,1268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// lfs f0,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stfs f31,60(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stfs f31,64(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stb r30,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r30.u8);
	// stfs f31,92(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f31,100(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stb r30,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r30.u8);
	// stb r30,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r30.u8);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stb r24,936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 936, ctx.r24.u8);
	// stb r30,937(r31)
	PPC_STORE_U8(ctx.r31.u32 + 937, ctx.r30.u8);
	// stb r30,938(r31)
	PPC_STORE_U8(ctx.r31.u32 + 938, ctx.r30.u8);
	// stb r30,939(r31)
	PPC_STORE_U8(ctx.r31.u32 + 939, ctx.r30.u8);
	// stb r30,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r30.u8);
	// stb r30,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r30.u8);
loc_8380265C:
	// stfs f30,-76(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + -76, temp.u32);
	// stfsu f30,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8380265c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8380265C;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r31,956
	ctx.r11.s64 = ctx.r31.s64 + 956;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83802674:
	// stfs f31,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83802674
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83802674;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,976(r31)
	PPC_STORE_U8(ctx.r31.u32 + 976, ctx.r30.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r30,977(r31)
	PPC_STORE_U8(ctx.r31.u32 + 977, ctx.r30.u8);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stb r30,978(r31)
	PPC_STORE_U8(ctx.r31.u32 + 978, ctx.r30.u8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stb r30,1056(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1056, ctx.r30.u8);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stb r30,1057(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1057, ctx.r30.u8);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfs f0,-9980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9980);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lfs f13,-6672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6672);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32222
	ctx.r4.s64 = -2111700992;
	// lfs f12,27084(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27084);
	ctx.f12.f64 = double(temp.f32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f11,-10804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10804);
	ctx.f11.f64 = double(temp.f32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lfs f10,-12416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12416);
	ctx.f10.f64 = double(temp.f32);
	// li r23,2
	ctx.r23.s64 = 2;
	// lfs f9,-28496(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28496);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,25364(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 25364);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,1000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1000, ctx.r11.u32);
	// lfs f7,-26940(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -26940);
	ctx.f7.f64 = double(temp.f32);
	// stw r11,1004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1004, ctx.r11.u32);
	// lfs f6,-23860(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -23860);
	ctx.f6.f64 = double(temp.f32);
	// stw r23,996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 996, ctx.r23.u32);
	// stfs f0,980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 980, temp.u32);
	// stw r23,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r23.u32);
	// stfs f13,984(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 984, temp.u32);
	// lbz r11,828(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 828);
	// stfs f12,988(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 988, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f11,992(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 992, temp.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stfs f10,1008(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1008, temp.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stfs f9,1012(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1012, temp.u32);
	// mulli r5,r10,10000
	ctx.r5.s64 = ctx.r10.s64 * 10000;
	// stfs f8,1016(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1016, temp.u32);
	// stfs f7,1020(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1020, temp.u32);
	// stfs f6,1024(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1024, temp.u32);
	// bl 0x826501d8
	ctx.lr = 0x83802730;
	sub_826501D8(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r30,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r30.u32);
	// stw r30,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r30.u32);
	// stw r30,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r30.u32);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// stw r11,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r11.u32);
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// stw r30,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r30.u32);
	// stw r30,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r30.u32);
	// stw r30,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r30.u32);
	// stw r24,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r24.u32);
	// stw r24,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r24.u32);
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f31,4(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f31,0(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f31,4(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f31,0(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f31,4(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f31,8(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stw r30,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r30.u32);
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// stw r30,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r30.u32);
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// stw r30,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r30.u32);
	// lbz r9,828(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 828);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// mulli r5,r8,25000
	ctx.r5.s64 = ctx.r8.s64 * 25000;
	// bl 0x826501d8
	ctx.lr = 0x838027C4;
	sub_826501D8(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stw r30,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r30.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r30,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r30.u32);
	// stw r30,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,4(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f31,8(r26)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f31,0(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// stfs f31,4(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// stfs f31,8(r25)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// stw r23,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r23.u32);
	// lfs f0,-11316(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// stw r23,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r23.u32);
	// lfs f13,21708(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21708);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1232, ctx.r11.u32);
	// stfs f0,1272(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1272, temp.u32);
	// stw r11,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r11.u32);
	// stfs f13,1276(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1276, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83802828"))) PPC_WEAK_FUNC(sub_83802828);
PPC_FUNC_IMPL(__imp__sub_83802828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83802830;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,7220
	ctx.r9.s64 = ctx.r11.s64 + 7220;
	// li r30,33
	ctx.r30.s64 = 33;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83802894
	if (cr6.eq) goto loc_83802894;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83802868;
	sub_82595150(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83802888
	if (cr6.eq) goto loc_83802888;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83802888;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83802888:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83802890;
	sub_82595170(ctx, base);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
loc_83802894:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838028a8
	if (cr6.eq) goto loc_838028A8;
	// bl 0x834f64a0
	ctx.lr = 0x838028A4;
	sub_834F64A0(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_838028A8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838028ec
	if (cr6.eq) goto loc_838028EC;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x838028C4;
	sub_82595150(ctx, base);
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838028e0
	if (cr6.eq) goto loc_838028E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x837aaab8
	ctx.lr = 0x838028D8;
	sub_837AAAB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x838028E0;
	sub_82416268(ctx, base);
loc_838028E0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x838028E8;
	sub_82595170(ctx, base);
	// stw r29,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r29.u32);
loc_838028EC:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83802900
	if (cr6.eq) goto loc_83802900;
	// bl 0x834fd268
	ctx.lr = 0x838028FC;
	sub_834FD268(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_83802900:
	// addi r3,r31,1192
	ctx.r3.s64 = ctx.r31.s64 + 1192;
	// bl 0x82a5c688
	ctx.lr = 0x83802908;
	sub_82A5C688(ctx, base);
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// bl 0x82a5c688
	ctx.lr = 0x83802910;
	sub_82A5C688(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83802918"))) PPC_WEAK_FUNC(sub_83802918);
PPC_FUNC_IMPL(__imp__sub_83802918) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,85(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 85);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83802a00
	if (!cr6.eq) goto loc_83802A00;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838029a0
	if (!cr6.eq) goto loc_838029A0;
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,268
	ctx.r4.s64 = 268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8380295C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83802978
	if (cr6.eq) goto loc_83802978;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,932(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 932);
	// addi r5,r31,832
	ctx.r5.s64 = ctx.r31.s64 + 832;
	// bl 0x837c9af0
	ctx.lr = 0x83802974;
	sub_837C9AF0(ctx, base);
	// b 0x8380297c
	goto loc_8380297C;
loc_83802978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8380297C:
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838029a0
	if (!cr6.eq) goto loc_838029A0;
loc_83802988:
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
loc_838029A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838029B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83802988
	if (cr6.eq) goto loc_83802988;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-23860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23860);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x837b1038
	ctx.lr = 0x838029D8;
	sub_837B1038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83802190
	ctx.lr = 0x838029E0;
	sub_83802190(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r4,83(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 83);
	// bl 0x837b11d8
	ctx.lr = 0x838029EC;
	sub_837B11D8(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lbz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// bl 0x837b1250
	ctx.lr = 0x838029F8;
	sub_837B1250(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r9.u8);
loc_83802A00:
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

__attribute__((alias("__imp__sub_83802A18"))) PPC_WEAK_FUNC(sub_83802A18);
PPC_FUNC_IMPL(__imp__sub_83802A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83802A20;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83802b44
	if (!cr6.eq) goto loc_83802B44;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83802A48:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f8,36(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,40(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f4,44(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f1,56(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f2,60(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f13,72(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,76(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f9,80(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f10,84(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lfs f7,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,88(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f6,92(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfsu f7,96(r11)
	ea = 96 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83802a48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83802A48;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83802B18:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83802b18
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83802B18;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83802B44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x834f1d30
	ctx.lr = 0x83802B78;
	sub_834F1D30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82624408
	ctx.lr = 0x83802B84;
	sub_82624408(ctx, base);
	// stfs f30,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f30,200(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f30,220(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x82a5a1b8
	ctx.lr = 0x83802BD0;
	sub_82A5A1B8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a078
	ctx.lr = 0x83802BE4;
	sub_82A5A078(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,344
	ctx.r30.s64 = ctx.r31.s64 + 344;
	// stfs f13,336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfs f12,340(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r8.u32);
	// stw r7,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r7.u32);
	// stw r6,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r6.u32);
	// stw r5,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r5.u32);
loc_83802C2C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x837c5598
	ctx.lr = 0x83802C34;
	sub_837C5598(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// bl 0x834f1248
	ctx.lr = 0x83802C4C;
	sub_834F1248(ctx, base);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82a59ca0
	ctx.lr = 0x83802C74;
	sub_82A59CA0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfsu f12,12(r29)
	ea = 12 + ctx.r29.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x834f12f0
	ctx.lr = 0x83802CAC;
	sub_834F12F0(ctx, base);
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r28,19
	cr6.compare<int32_t>(ctx.r28.s32, 19, xer);
	// fmuls f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f2,f10,f11,f6
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f6.f64));
	// fmsubs f1,f0,f9,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 - ctx.f5.f64));
	// fmsubs f6,f12,f13,f4
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f4.f64));
	// fmsubs f5,f8,f7,f3
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f3.f64));
	// fmadds f4,f8,f9,f2
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f3,f8,f13,f1
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f8,f11,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fnmsubs f1,f10,f13,f5
	ctx.f1.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f5.f64)));
	// fmadds f13,f12,f7,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f4.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f12,f10,f7,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmadds f10,f0,f7,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f2.f64));
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fnmsubs f9,f0,f11,f1
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f1.f64)));
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// blt cr6,0x83802c2c
	if (cr6.lt) goto loc_83802C2C;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83802D60"))) PPC_WEAK_FUNC(sub_83802D60);
PPC_FUNC_IMPL(__imp__sub_83802D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83802D68;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce748
	ctx.lr = 0x83802D70;
	__savefpr_16(ctx, base);
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r23,0
	ctx.r23.s64 = 0;
	// lbz r17,1056(r3)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1056);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,1092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1092, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r23,1096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1096, ctx.r23.u32);
	// stw r23,1100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1100, ctx.r23.u32);
	// beq cr6,0x83802da0
	if (cr6.eq) goto loc_83802DA0;
	// lbz r11,82(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 82);
	// b 0x83802da4
	goto loc_83802DA4;
loc_83802DA0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_83802DA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83802dc0
	if (cr6.eq) goto loc_83802DC0;
	// lwz r11,1180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r11.u32);
	// b 0x83802dc4
	goto loc_83802DC4;
loc_83802DC0:
	// stw r23,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r23.u32);
loc_83802DC4:
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// addi r30,r31,1120
	ctx.r30.s64 = ctx.r31.s64 + 1120;
	// lwz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// addi r27,r31,1132
	ctx.r27.s64 = ctx.r31.s64 + 1132;
	// lwz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r15,15
	ctx.r15.s64 = 15;
	// stw r8,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r8.u32);
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lfs f26,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f26.f64 = double(temp.f32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lfs f27,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f20,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f20.f64 = double(temp.f32);
	// fsubs f7,f20,f12
	ctx.f7.f64 = double(float(ctx.f20.f64 - ctx.f12.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f25,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f8,f27,f9
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// lfs f19,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f19.f64 = double(temp.f32);
	// fsubs f6,f26,f11
	ctx.f6.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// lfs f24,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f5,f25,f0
	ctx.f5.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// fsubs f4,f19,f10
	ctx.f4.f64 = double(float(ctx.f19.f64 - ctx.f10.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f3,f24,f13
	ctx.f3.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r14,r23
	ctx.r14.u64 = ctx.r23.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x83740868
	ctx.lr = 0x83802EA8;
	sub_83740868(ctx, base);
	// lfs f2,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x83740868
	ctx.lr = 0x83802ED0;
	sub_83740868(ctx, base);
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f1,f8
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f6,f12,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmuls f9,f1,f7
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f5,f11,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fsqrts f0,f5
	ctx.f0.f64 = double(float(sqrt(ctx.f5.f64)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// lfs f31,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f8,f1,f4
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r20,r11,-26260
	ctx.r20.s64 = ctx.r11.s64 + -26260;
	// addi r19,r10,9008
	ctx.r19.s64 = ctx.r10.s64 + 9008;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f30,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x83802f54
	if (!cr6.gt) goto loc_83802F54;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83802f54
	if (cr6.eq) goto loc_83802F54;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_83802F54:
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f13,f10,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f12,f8,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fsqrts f0,f12
	ctx.f0.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x83802f90
	if (!cr6.gt) goto loc_83802F90;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83802f90
	if (cr6.eq) goto loc_83802F90;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f12,f0,f9
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_83802F90:
	// fsqrts f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f31.f64)));
	// stfs f30,144(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x83802fbc
	if (cr6.eq) goto loc_83802FBC;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_83802FBC:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// bl 0x82a5c2d0
	ctx.lr = 0x83802FC8;
	sub_82A5C2D0(ctx, base);
	// lis r11,27670
	ctx.r11.s64 = 1813381120;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ori r8,r11,49517
	ctx.r8.u64 = ctx.r11.u64 | 49517;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r7,-31769
	ctx.r7.s64 = -2082013184;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mulhwu r11,r3,r8
	ctx.r11.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// subf r6,r11,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r6,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r5,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFFFFFF;
	// mulli r10,r11,360
	ctx.r10.s64 = ctx.r11.s64 * 360;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x82624408
	ctx.lr = 0x8380302C;
	sub_82624408(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828c56a0
	ctx.lr = 0x83803034;
	sub_828C56A0(ctx, base);
	// lfs f0,1008(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f20,f0
	cr6.compare(ctx.f20.f64, ctx.f0.f64);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f8,168(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f7,172(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bge cr6,0x83803080
	if (!cr6.lt) goto loc_83803080;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x83803070
	if (!cr6.lt) goto loc_83803070;
	// stw r23,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r23.u32);
loc_83803070:
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// b 0x83803090
	goto loc_83803090;
loc_83803080:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// ble 0x83803090
	if (!cr0.gt) goto loc_83803090;
	// stw r23,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r23.u32);
loc_83803090:
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// fcmpu cr6,f19,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f19.f64, ctx.f0.f64);
	// bge cr6,0x838030b8
	if (!cr6.lt) goto loc_838030B8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x838030a8
	if (!cr6.lt) goto loc_838030A8;
	// stw r23,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r23.u32);
loc_838030A8:
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r11.u32);
	// b 0x838030c8
	goto loc_838030C8;
loc_838030B8:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r11.u32);
	// ble 0x838030c8
	if (!cr0.gt) goto loc_838030C8;
	// stw r23,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r23.u32);
loc_838030C8:
	// fcmpu cr6,f19,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f19.f64, ctx.f0.f64);
	// bge cr6,0x838030f8
	if (!cr6.lt) goto loc_838030F8;
	// fcmpu cr6,f20,f0
	cr6.compare(ctx.f20.f64, ctx.f0.f64);
	// bge cr6,0x838030f8
	if (!cr6.lt) goto loc_838030F8;
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x838030e8
	if (!cr6.lt) goto loc_838030E8;
	// stw r23,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r23.u32);
loc_838030E8:
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// b 0x8380310c
	goto loc_8380310C;
loc_838030F8:
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r11.u32);
	// ble 0x8380310c
	if (!cr0.gt) goto loc_8380310C;
	// stw r23,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r23.u32);
loc_8380310C:
	// lfs f13,1016(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1016);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// lfs f18,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f18.f64 = double(temp.f32);
	// fcmpu cr6,f18,f13
	cr6.compare(ctx.f18.f64, ctx.f13.f64);
	// bge cr6,0x8380313c
	if (!cr6.lt) goto loc_8380313C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x8380312c
	if (!cr6.lt) goto loc_8380312C;
	// stw r23,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r23.u32);
loc_8380312C:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// b 0x8380314c
	goto loc_8380314C;
loc_8380313C:
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// ble 0x8380314c
	if (!cr0.gt) goto loc_8380314C;
	// stw r23,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r23.u32);
loc_8380314C:
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r8,232(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lfs f13,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// bge cr6,0x8380317c
	if (!cr6.lt) goto loc_8380317C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8380317C:
	// lwz r10,1104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x838031bc
	if (cr6.gt) goto loc_838031BC;
	// lwz r9,1108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x838031bc
	if (cr6.gt) goto loc_838031BC;
	// lwz r9,1116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x838031bc
	if (cr6.gt) goto loc_838031BC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838031bc
	if (!cr6.eq) goto loc_838031BC;
	// lwz r11,1060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r11.u32);
	// b 0x838031c0
	goto loc_838031C0;
loc_838031BC:
	// stw r23,1060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1060, ctx.r23.u32);
loc_838031C0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x838031ec
	if (!cr6.gt) goto loc_838031EC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f27,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f26,104(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0d80
	ctx.lr = 0x838031EC;
	sub_837A0D80(ctx, base);
loc_838031EC:
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8380321c
	if (!cr6.gt) goto loc_8380321C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f25,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f24,104(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x837a0d80
	ctx.lr = 0x8380321C;
	sub_837A0D80(ctx, base);
loc_8380321C:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838032c8
	if (!cr6.eq) goto loc_838032C8;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380323c
	if (cr6.eq) goto loc_8380323C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829270f8
	ctx.lr = 0x8380323C;
	sub_829270F8(ctx, base);
loc_8380323C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83803250
	if (cr6.eq) goto loc_83803250;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83580aa8
	ctx.lr = 0x83803250;
	sub_83580AA8(ctx, base);
loc_83803250:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83803264
	if (cr6.eq) goto loc_83803264;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835d31c0
	ctx.lr = 0x83803264;
	sub_835D31C0(ctx, base);
loc_83803264:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83803278
	if (cr6.eq) goto loc_83803278;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x837b20f0
	ctx.lr = 0x83803278;
	sub_837B20F0(ctx, base);
loc_83803278:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380328c
	if (cr6.eq) goto loc_8380328C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x837b2148
	ctx.lr = 0x8380328C;
	sub_837B2148(ctx, base);
loc_8380328C:
	// stfs f27,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f20,4(r30)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f26,8(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f25,0(r27)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f19,4(r27)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f24,8(r27)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f18,1148(r31)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f13,1152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce794
	ctx.lr = 0x838032C4;
	__restfpr_16(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_838032C8:
	// lwz r11,1180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x83803378
	if (!cr6.lt) goto loc_83803378;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838032e8
	if (cr6.eq) goto loc_838032E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829270f8
	ctx.lr = 0x838032E8;
	sub_829270F8(ctx, base);
loc_838032E8:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838032fc
	if (cr6.eq) goto loc_838032FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83580aa8
	ctx.lr = 0x838032FC;
	sub_83580AA8(ctx, base);
loc_838032FC:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83803310
	if (cr6.eq) goto loc_83803310;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835d31c0
	ctx.lr = 0x83803310;
	sub_835D31C0(ctx, base);
loc_83803310:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83803324
	if (cr6.eq) goto loc_83803324;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x837b20f0
	ctx.lr = 0x83803324;
	sub_837B20F0(ctx, base);
loc_83803324:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83803338
	if (cr6.eq) goto loc_83803338;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x837b2148
	ctx.lr = 0x83803338;
	sub_837B2148(ctx, base);
loc_83803338:
	// stfs f27,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f20,4(r30)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f26,8(r30)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f25,0(r27)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f19,4(r27)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f24,8(r27)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f18,1148(r31)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stfs f13,1152(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1152, temp.u32);
	// stw r23,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r23.u32);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce794
	ctx.lr = 0x83803374;
	__restfpr_16(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_83803378:
	// lwz r10,1060(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x83803390;
	sub_83740868(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f12,1020(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f31,f1
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// lfs f28,14604(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14604);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x838033b4
	if (!cr6.lt) goto loc_838033B4;
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
loc_838033B4:
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x838033dc
	if (!cr6.eq) goto loc_838033DC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// b 0x838033e8
	goto loc_838033E8;
loc_838033DC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838033e8
	if (!cr6.eq) goto loc_838033E8;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
loc_838033E8:
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x838033fc
	if (!cr6.eq) goto loc_838033FC;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// b 0x83803408
	goto loc_83803408;
loc_838033FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83803408
	if (!cr6.eq) goto loc_83803408;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_83803408:
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83803418
	if (!cr6.eq) goto loc_83803418;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_83803418:
	// addi r11,r31,1144
	ctx.r11.s64 = ctx.r31.s64 + 1144;
	// lfs f23,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f22.f64 = double(temp.f32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f23,f0
	ctx.f31.f64 = double(float(ctx.f23.f64 - ctx.f0.f64));
	// fsubs f29,f22,f13
	ctx.f29.f64 = double(float(ctx.f22.f64 - ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x8380343C;
	sub_83740868(ctx, base);
	// fmuls f12,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lfs f0,-23868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,23372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f21,-10804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10804);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f10,f31,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsqrts f8,f10
	ctx.f8.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// bne cr6,0x83803484
	if (!cr6.eq) goto loc_83803484;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838034d8
	if (cr6.eq) goto loc_838034D8;
loc_83803484:
	// lfs f13,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x838034d8
	if (!cr6.gt) goto loc_838034D8;
	// lfs f13,984(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x838034ac
	if (cr6.gt) goto loc_838034AC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838034d8
	if (cr6.eq) goto loc_838034D8;
	// li r28,13
	ctx.r28.s64 = 13;
	// b 0x838034d8
	goto loc_838034D8;
loc_838034AC:
	// lfs f13,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x838034c8
	if (cr6.gt) goto loc_838034C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838034d8
	if (cr6.eq) goto loc_838034D8;
	// li r28,14
	ctx.r28.s64 = 14;
	// b 0x838034d8
	goto loc_838034D8;
loc_838034C8:
	// fmuls f13,f13,f21
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x838034d8
	if (!cr6.gt) goto loc_838034D8;
	// li r28,2
	ctx.r28.s64 = 2;
loc_838034D8:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838034f0
	if (!cr6.eq) goto loc_838034F0;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83803544
	if (cr6.eq) goto loc_83803544;
loc_838034F0:
	// lfs f13,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x83803544
	if (!cr6.gt) goto loc_83803544;
	// lfs f13,984(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83803518
	if (cr6.gt) goto loc_83803518;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803544
	if (cr6.eq) goto loc_83803544;
	// li r29,13
	ctx.r29.s64 = 13;
	// b 0x83803544
	goto loc_83803544;
loc_83803518:
	// lfs f13,988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 988);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83803534
	if (cr6.gt) goto loc_83803534;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803544
	if (cr6.eq) goto loc_83803544;
	// li r29,14
	ctx.r29.s64 = 14;
	// b 0x83803544
	goto loc_83803544;
loc_83803534:
	// fmuls f13,f13,f21
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x83803544
	if (!cr6.gt) goto loc_83803544;
	// li r29,2
	ctx.r29.s64 = 2;
loc_83803544:
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// li r25,5
	ctx.r25.s64 = 5;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x838035a0
	if (!cr6.gt) goto loc_838035A0;
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// stb r23,1057(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1057, ctx.r23.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838035a0
	if (cr6.eq) goto loc_838035A0;
	// lwz r10,1064(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x83803584;
	sub_83740868(ctx, base);
	// lfs f12,1024(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f31,f1
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// fmuls f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x838035a0
	if (!cr6.lt) goto loc_838035A0;
	// mr r18,r25
	ctx.r18.u64 = ctx.r25.u64;
	// stw r23,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r23.u32);
loc_838035A0:
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x838036f8
	if (!cr6.eq) goto loc_838036F8;
	// cmpwi cr6,r28,15
	cr6.compare<int32_t>(ctx.r28.s32, 15, xer);
	// bne cr6,0x838036f8
	if (!cr6.eq) goto loc_838036F8;
	// lwz r11,1068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x838035CC;
	sub_83740868(ctx, base);
	// lwz r9,1156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f12.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// frsp f7,f13
	ctx.f7.f64 = double(float(ctx.f13.f64));
	// fsubs f17,f27,f8
	ctx.f17.f64 = double(float(ctx.f27.f64 - ctx.f8.f64));
	// fsubs f16,f26,f6
	ctx.f16.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fdivs f29,f7,f1
	ctx.f29.f64 = double(float(ctx.f7.f64 / ctx.f1.f64));
	// fmuls f31,f5,f28
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// bl 0x83740868
	ctx.lr = 0x83803614;
	sub_83740868(ctx, base);
	// fmuls f4,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lis r8,-32208
	ctx.r8.s64 = -2110783488;
	// fmuls f3,f16,f16
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f16.f64));
	// lfs f0,23304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23304);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f1,f17,f17,f3
	ctx.f1.f64 = double(float(ctx.f17.f64 * ctx.f17.f64 + ctx.f3.f64));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x838036a8
	if (cr6.lt) goto loc_838036A8;
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x838036a8
	if (cr6.gt) goto loc_838036A8;
	// lwz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// clrlwi r10,r17,24
	ctx.r10.u64 = ctx.r17.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r9.u32);
	// beq cr6,0x8380369c
	if (cr6.eq) goto loc_8380369C;
	// lvlx128 v63,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r7,r1,560
	ctx.r7.s64 = ctx.r1.s64 + 560;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f27,400(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stfs f20,404(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f26,408(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x8380369C;
	sub_83102DB0(ctx, base);
loc_8380369C:
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x838036ac
	goto loc_838036AC;
loc_838036A8:
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
loc_838036AC:
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// lwz r10,1156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x838036e4
	if (!cr6.gt) goto loc_838036E4;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fcmpu cr6,f9,f29
	cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// bge cr6,0x83803b40
	if (!cr6.lt) goto loc_83803B40;
loc_838036E4:
	// stw r15,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r15.u32);
	// stw r23,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r23.u32);
	// stw r23,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r23.u32);
	// stw r23,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r23.u32);
	// b 0x83803b40
	goto loc_83803B40;
loc_838036F8:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x83803708
	if (cr6.eq) goto loc_83803708;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x83803898
	if (!cr6.eq) goto loc_83803898;
loc_83803708:
	// cmpwi cr6,r28,15
	cr6.compare<int32_t>(ctx.r28.s32, 15, xer);
	// bne cr6,0x83803898
	if (!cr6.eq) goto loc_83803898;
	// lwz r11,1068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x83803728;
	sub_83740868(ctx, base);
	// lwz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmuls f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fcmpu cr6,f7,f11
	cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bgt cr6,0x83803860
	if (cr6.gt) goto loc_83803860;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,1160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// stw r10,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8380377c
	if (!cr6.eq) goto loc_8380377C;
	// lwz r10,1104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83803784
	if (cr6.gt) goto loc_83803784;
loc_8380377C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
loc_83803784:
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// li r28,13
	ctx.r28.s64 = 13;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x83803798
	if (!cr6.eq) goto loc_83803798;
	// li r28,14
	ctx.r28.s64 = 14;
loc_83803798:
	// lwz r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r10,1112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x838037bc
	if (!cr6.lt) goto loc_838037BC;
	// lwz r11,1160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x838037bc
	if (cr6.gt) goto loc_838037BC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_838037BC:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803848
	if (cr6.eq) goto loc_83803848;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83803848
	if (!cr6.eq) goto loc_83803848;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// vspltisw128 v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,1040
	ctx.r9.s64 = ctx.r1.s64 + 1040;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,528
	ctx.r8.s64 = ctx.r1.s64 + 528;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vupkd3d128 v58,v59,0
	vTemp.u32[0] = ctx.v59.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v59.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v59.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v59.u8[2] | 0x3F800000;
	ctx.v58 = vTemp;
	// addi r6,r1,528
	ctx.r6.s64 = ctx.r1.s64 + 528;
	// addi r5,r1,1040
	ctx.r5.s64 = ctx.r1.s64 + 1040;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// vsldoi128 v55,v59,v58,4
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 12));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v56,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v54,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v56.u32), 0xFF));
	// stfs f27,336(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f20,340(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f26,344(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stvx128 v55,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83803848;
	sub_83102DB0(ctx, base);
loc_83803848:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8380385c
	if (!cr6.eq) goto loc_8380385C;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// b 0x83803864
	goto loc_83803864;
loc_8380385C:
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
loc_83803860:
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
loc_83803864:
	// lwz r10,1080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bne cr6,0x83803878
	if (!cr6.eq) goto loc_83803878;
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
loc_83803878:
	// lwz r10,1160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1160);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83803b40
	if (cr6.gt) goto loc_83803B40;
	// stw r15,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r15.u32);
	// stw r23,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r23.u32);
	// stw r23,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r23.u32);
	// stw r23,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r23.u32);
	// b 0x83803b40
	goto loc_83803B40;
loc_83803898:
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// beq cr6,0x83803b40
	if (cr6.eq) goto loc_83803B40;
	// stw r28,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r28.u32);
	// cmplwi cr6,r28,14
	cr6.compare<uint32_t>(ctx.r28.u32, 14, xer);
	// stw r23,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r23.u32);
	// bgt cr6,0x83803b3c
	if (cr6.gt) goto loc_83803B3C;
	// lis r12,-31872
	ctx.r12.s64 = -2088763392;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14536
	ctx.r12.s64 = ctx.r12.s64 + 14536;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u32) {
	case 0:
		goto loc_8380391C;
	case 1:
		goto loc_83803A78;
	case 2:
		goto loc_83803AE0;
	case 3:
		goto loc_83803B3C;
	case 4:
		goto loc_83803B3C;
	case 5:
		goto loc_83803B3C;
	case 6:
		goto loc_83803B3C;
	case 7:
		goto loc_83803B3C;
	case 8:
		goto loc_83803904;
	case 9:
		goto loc_83803910;
	case 10:
		goto loc_83803B3C;
	case 11:
		goto loc_83803B3C;
	case 12:
		goto loc_83803B3C;
	case 13:
		goto loc_83803978;
	case 14:
		goto loc_838039E0;
	default:
		return;
	}
	// lwz r28,14620(0)
	ctx.r28.u64 = PPC_LOAD_U32(14620);
	// lwz r28,14968(0)
	ctx.r28.u64 = PPC_LOAD_U32(14968);
	// lwz r28,15072(0)
	ctx.r28.u64 = PPC_LOAD_U32(15072);
	// lwz r28,15164(0)
	ctx.r28.u64 = PPC_LOAD_U32(15164);
	// lwz r28,15164(0)
	ctx.r28.u64 = PPC_LOAD_U32(15164);
	// lwz r28,15164(0)
	ctx.r28.u64 = PPC_LOAD_U32(15164);
	// lwz r28,15164(0)
	ctx.r28.u64 = PPC_LOAD_U32(15164);
	// lwz r28,15164(0)
	ctx.r28.u64 = PPC_LOAD_U32(15164);
	// lwz r28,14596(0)
	ctx.r28.u64 = PPC_LOAD_U32(14596);
	// lwz r28,14608(0)
	ctx.r28.u64 = PPC_LOAD_U32(14608);
	// lwz r28,15164(0)
	ctx.r28.u64 = PPC_LOAD_U32(15164);
	// lwz r28,15164(0)
	ctx.r28.u64 = PPC_LOAD_U32(15164);
	// lwz r28,15164(0)
	ctx.r28.u64 = PPC_LOAD_U32(15164);
	// lwz r28,14712(0)
	ctx.r28.u64 = PPC_LOAD_U32(14712);
	// lwz r28,14816(0)
	ctx.r28.u64 = PPC_LOAD_U32(14816);
loc_83803904:
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x83803b40
	goto loc_83803B40;
loc_83803910:
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// li r28,9
	ctx.r28.s64 = 9;
	// b 0x83803b40
	goto loc_83803B40;
loc_8380391C:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380396c
	if (cr6.eq) goto loc_8380396C;
	// lvlx128 v53,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// addi r7,r1,464
	ctx.r7.s64 = ctx.r1.s64 + 464;
	// addi r6,r1,816
	ctx.r6.s64 = ctx.r1.s64 + 816;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v52,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v51,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f27,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// vspltw128 v50,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// stfs f30,244(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f26,248(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stvx128 v50,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x8380396C;
	sub_83102DB0(ctx, base);
loc_8380396C:
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// b 0x83803b40
	goto loc_83803B40;
loc_83803978:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// stw r23,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r23.u32);
	// stw r22,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r22.u32);
	// stw r23,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838039d4
	if (cr6.eq) goto loc_838039D4;
	// lvlx128 v49,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// vspltw128 v48,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,944
	ctx.r6.s64 = ctx.r1.s64 + 944;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v48,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v47,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f27,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// vspltw128 v46,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// stfs f20,196(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f26,200(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stvx128 v46,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x838039D4;
	sub_83102DB0(ctx, base);
loc_838039D4:
	// lwz r28,1080(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// b 0x83803b40
	goto loc_83803B40;
loc_838039E0:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// stw r23,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r23.u32);
	// stw r22,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r22.u32);
	// stw r23,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803a6c
	if (cr6.eq) goto loc_83803A6C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_set1_epi32(int(0x0)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,656
	ctx.r9.s64 = ctx.r1.s64 + 656;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,848
	ctx.r8.s64 = ctx.r1.s64 + 848;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vupkd3d128 v44,v45,0
	vTemp.u32[0] = ctx.v45.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v45.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v45.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v45.u8[2] | 0x3F800000;
	ctx.v44 = vTemp;
	// addi r6,r1,848
	ctx.r6.s64 = ctx.r1.s64 + 848;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// vsldoi128 v43,v45,v44,4
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 12));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvx128 v42,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v41,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v40,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xFF));
	// stfs f27,272(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f20,276(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f26,280(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stvx128 v43,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83803A6C;
	sub_83102DB0(ctx, base);
loc_83803A6C:
	// lwz r28,1080(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// b 0x83803b40
	goto loc_83803B40;
loc_83803A78:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// stw r23,1068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1068, ctx.r23.u32);
	// stw r22,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r22.u32);
	// stw r23,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803ad4
	if (cr6.eq) goto loc_83803AD4;
	// lvlx128 v39,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// vspltw128 v38,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// addi r7,r1,1008
	ctx.r7.s64 = ctx.r1.s64 + 1008;
	// addi r6,r1,688
	ctx.r6.s64 = ctx.r1.s64 + 688;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v38,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v37,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f27,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// vspltw128 v36,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xFF));
	// stfs f20,372(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f26,376(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stvx128 v36,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83803AD4;
	sub_83102DB0(ctx, base);
loc_83803AD4:
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x83803b40
	goto loc_83803B40;
loc_83803AE0:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803b30
	if (cr6.eq) goto loc_83803B30;
	// lvlx128 v35,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// vspltw128 v34,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), 0xFF));
	// addi r7,r1,880
	ctx.r7.s64 = ctx.r1.s64 + 880;
	// addi r6,r1,720
	ctx.r6.s64 = ctx.r1.s64 + 720;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// li r3,2
	ctx.r3.s64 = 2;
	// stvx128 v34,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v33,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f27,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// vspltw128 v32,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// stfs f30,308(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f26,312(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stvx128 v32,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83803B30;
	sub_83102DB0(ctx, base);
loc_83803B30:
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x83803b40
	goto loc_83803B40;
loc_83803B3C:
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
loc_83803B40:
	// lwz r11,1084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x83803c98
	if (!cr6.eq) goto loc_83803C98;
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(ctx.r29.s32, 15, xer);
	// bne cr6,0x83803c98
	if (!cr6.eq) goto loc_83803C98;
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x83803B6C;
	sub_83740868(ctx, base);
	// lwz r9,1164(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f12.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f17,f25,f11
	ctx.f17.f64 = double(float(ctx.f25.f64 - ctx.f11.f64));
	// fsubs f16,f24,f10
	ctx.f16.f64 = double(float(ctx.f24.f64 - ctx.f10.f64));
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// fdivs f29,f9,f1
	ctx.f29.f64 = double(float(ctx.f9.f64 / ctx.f1.f64));
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f31,f5,f28
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// bl 0x83740868
	ctx.lr = 0x83803BB4;
	sub_83740868(ctx, base);
	// fmuls f4,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// fmuls f3,f16,f16
	ctx.f3.f64 = double(float(ctx.f16.f64 * ctx.f16.f64));
	// lfs f0,18044(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18044);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f1,f17,f17,f3
	ctx.f1.f64 = double(float(ctx.f17.f64 * ctx.f17.f64 + ctx.f3.f64));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83803c48
	if (cr6.lt) goto loc_83803C48;
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x83803c48
	if (cr6.gt) goto loc_83803C48;
	// lwz r11,1164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// clrlwi r10,r17,24
	ctx.r10.u64 = ctx.r17.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r9.u32);
	// beq cr6,0x83803c3c
	if (cr6.eq) goto loc_83803C3C;
	// lvlx128 v63,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,976
	ctx.r11.s64 = ctx.r1.s64 + 976;
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r7,r1,976
	ctx.r7.s64 = ctx.r1.s64 + 976;
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f25,432(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stfs f19,436(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f24,440(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83803C3C;
	sub_83102DB0(ctx, base);
loc_83803C3C:
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x83803c4c
	goto loc_83803C4C;
loc_83803C48:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_83803C4C:
	// lwz r11,996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 996);
	// lwz r10,1164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x83803c84
	if (!cr6.gt) goto loc_83803C84;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f0,992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 992);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fcmpu cr6,f9,f29
	cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// bge cr6,0x838040e0
	if (!cr6.lt) goto loc_838040E0;
loc_83803C84:
	// stw r15,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r15.u32);
	// stw r23,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r23.u32);
	// stw r23,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r23.u32);
	// stw r23,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r23.u32);
	// b 0x838040e0
	goto loc_838040E0;
loc_83803C98:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x83803ca8
	if (cr6.eq) goto loc_83803CA8;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x83803e38
	if (!cr6.eq) goto loc_83803E38;
loc_83803CA8:
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(ctx.r29.s32, 15, xer);
	// bne cr6,0x83803e38
	if (!cr6.eq) goto loc_83803E38;
	// lwz r11,1072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x83803CC8;
	sub_83740868(ctx, base);
	// lwz r11,1164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f9,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fcmpu cr6,f7,f8
	cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bgt cr6,0x83803e00
	if (cr6.gt) goto loc_83803E00;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// stw r10,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83803d1c
	if (!cr6.eq) goto loc_83803D1C;
	// lwz r10,1108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x83803d24
	if (cr6.gt) goto loc_83803D24;
loc_83803D1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r11.u32);
loc_83803D24:
	// lwz r11,1084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// li r29,13
	ctx.r29.s64 = 13;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x83803d38
	if (!cr6.eq) goto loc_83803D38;
	// li r29,14
	ctx.r29.s64 = 14;
loc_83803D38:
	// lwz r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lwz r10,1112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x83803d5c
	if (!cr6.lt) goto loc_83803D5C;
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x83803d5c
	if (cr6.gt) goto loc_83803D5C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83803D5C:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803de8
	if (cr6.eq) goto loc_83803DE8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83803de8
	if (!cr6.eq) goto loc_83803DE8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vspltisw128 v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,512
	ctx.r9.s64 = ctx.r1.s64 + 512;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,912
	ctx.r7.s64 = ctx.r1.s64 + 912;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vupkd3d128 v58,v59,0
	vTemp.u32[0] = ctx.v59.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v59.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v59.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v59.u8[2] | 0x3F800000;
	ctx.v58 = vTemp;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// vsldoi128 v57,v59,v58,4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 12));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v56,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v55,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f25,208(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// vspltw128 v54,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// stfs f19,212(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f24,216(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stvx128 v57,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83803DE8;
	sub_83102DB0(ctx, base);
loc_83803DE8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83803dfc
	if (!cr6.eq) goto loc_83803DFC;
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// b 0x83803e04
	goto loc_83803E04;
loc_83803DFC:
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
loc_83803E00:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_83803E04:
	// lwz r10,1084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// lwz r11,1000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1000);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// bne cr6,0x83803e18
	if (!cr6.eq) goto loc_83803E18;
	// lwz r11,1004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1004);
loc_83803E18:
	// lwz r10,1168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x838040e0
	if (cr6.gt) goto loc_838040E0;
	// stw r15,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r15.u32);
	// stw r23,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r23.u32);
	// stw r23,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r23.u32);
	// stw r23,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r23.u32);
	// b 0x838040e0
	goto loc_838040E0;
loc_83803E38:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// beq cr6,0x838040e0
	if (cr6.eq) goto loc_838040E0;
	// stw r29,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r29.u32);
	// cmplwi cr6,r29,14
	cr6.compare<uint32_t>(ctx.r29.u32, 14, xer);
	// stw r23,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r23.u32);
	// bgt cr6,0x838040dc
	if (cr6.gt) goto loc_838040DC;
	// lis r12,-31872
	ctx.r12.s64 = -2088763392;
	// rlwinm r0,r29,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15976
	ctx.r12.s64 = ctx.r12.s64 + 15976;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r29.u32) {
	case 0:
		goto loc_83803EBC;
	case 1:
		goto loc_83804018;
	case 2:
		goto loc_83804080;
	case 3:
		goto loc_838040DC;
	case 4:
		goto loc_838040DC;
	case 5:
		goto loc_838040DC;
	case 6:
		goto loc_838040DC;
	case 7:
		goto loc_838040DC;
	case 8:
		goto loc_83803EA4;
	case 9:
		goto loc_83803EB0;
	case 10:
		goto loc_838040DC;
	case 11:
		goto loc_838040DC;
	case 12:
		goto loc_838040DC;
	case 13:
		goto loc_83803F18;
	case 14:
		goto loc_83803F80;
	default:
		return;
	}
	// lwz r28,16060(0)
	ctx.r28.u64 = PPC_LOAD_U32(16060);
	// lwz r28,16408(0)
	ctx.r28.u64 = PPC_LOAD_U32(16408);
	// lwz r28,16512(0)
	ctx.r28.u64 = PPC_LOAD_U32(16512);
	// lwz r28,16604(0)
	ctx.r28.u64 = PPC_LOAD_U32(16604);
	// lwz r28,16604(0)
	ctx.r28.u64 = PPC_LOAD_U32(16604);
	// lwz r28,16604(0)
	ctx.r28.u64 = PPC_LOAD_U32(16604);
	// lwz r28,16604(0)
	ctx.r28.u64 = PPC_LOAD_U32(16604);
	// lwz r28,16604(0)
	ctx.r28.u64 = PPC_LOAD_U32(16604);
	// lwz r28,16036(0)
	ctx.r28.u64 = PPC_LOAD_U32(16036);
	// lwz r28,16048(0)
	ctx.r28.u64 = PPC_LOAD_U32(16048);
	// lwz r28,16604(0)
	ctx.r28.u64 = PPC_LOAD_U32(16604);
	// lwz r28,16604(0)
	ctx.r28.u64 = PPC_LOAD_U32(16604);
	// lwz r28,16604(0)
	ctx.r28.u64 = PPC_LOAD_U32(16604);
	// lwz r28,16152(0)
	ctx.r28.u64 = PPC_LOAD_U32(16152);
	// lwz r28,16256(0)
	ctx.r28.u64 = PPC_LOAD_U32(16256);
loc_83803EA4:
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// li r29,8
	ctx.r29.s64 = 8;
	// b 0x838040e0
	goto loc_838040E0;
loc_83803EB0:
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// li r29,9
	ctx.r29.s64 = 9;
	// b 0x838040e0
	goto loc_838040E0;
loc_83803EBC:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803f0c
	if (cr6.eq) goto loc_83803F0C;
	// lvlx128 v53,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v52,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v51,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f25,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// vspltw128 v50,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v51.u32), 0xFF));
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f24,232(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stvx128 v50,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83803F0C;
	sub_83102DB0(ctx, base);
loc_83803F0C:
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// b 0x838040e0
	goto loc_838040E0;
loc_83803F18:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// stw r23,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r23.u32);
	// stw r22,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r22.u32);
	// stw r23,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83803f74
	if (cr6.eq) goto loc_83803F74;
	// lvlx128 v49,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// vspltw128 v48,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// addi r6,r1,640
	ctx.r6.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r3,0
	ctx.r3.s64 = 0;
	// stvx128 v48,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v47,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f25,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// vspltw128 v46,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// stfs f19,260(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f24,264(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stvx128 v46,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83803F74;
	sub_83102DB0(ctx, base);
loc_83803F74:
	// lwz r29,1084(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// b 0x838040e0
	goto loc_838040E0;
loc_83803F80:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// stw r23,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r23.u32);
	// stw r22,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r22.u32);
	// stw r23,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380400c
	if (cr6.eq) goto loc_8380400C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,672
	ctx.r10.s64 = ctx.r1.s64 + 672;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_set1_epi32(int(0x0)));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,736
	ctx.r9.s64 = ctx.r1.s64 + 736;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r8,r1,704
	ctx.r8.s64 = ctx.r1.s64 + 704;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vupkd3d128 v44,v45,0
	vTemp.u32[0] = ctx.v45.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v45.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v45.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v45.u8[2] | 0x3F800000;
	ctx.v44 = vTemp;
	// addi r6,r1,704
	ctx.r6.s64 = ctx.r1.s64 + 704;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// vsldoi128 v43,v45,v44,4
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 12));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v42,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v41,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f25,288(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// vspltw128 v40,v41,0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v41.u32), 0xFF));
	// stfs f19,292(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f24,296(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stvx128 v43,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x8380400C;
	sub_83102DB0(ctx, base);
loc_8380400C:
	// lwz r29,1084(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1084);
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// b 0x838040e0
	goto loc_838040E0;
loc_83804018:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// stw r23,1072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1072, ctx.r23.u32);
	// stw r22,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r22.u32);
	// stw r23,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r23.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804074
	if (cr6.eq) goto loc_83804074;
	// lvlx128 v39,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// vspltw128 v38,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v39.u32), 0xFF));
	// addi r7,r1,768
	ctx.r7.s64 = ctx.r1.s64 + 768;
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// li r3,1
	ctx.r3.s64 = 1;
	// stvx128 v38,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v37,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f25,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// vspltw128 v36,v37,0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), 0xFF));
	// stfs f19,324(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f24,328(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stvx128 v36,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83804074;
	sub_83102DB0(ctx, base);
loc_83804074:
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x838040e0
	goto loc_838040E0;
loc_83804080:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838040d0
	if (cr6.eq) goto loc_838040D0;
	// lvlx128 v35,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,832
	ctx.r11.s64 = ctx.r1.s64 + 832;
	// addi r10,r1,864
	ctx.r10.s64 = ctx.r1.s64 + 864;
	// vspltw128 v34,v35,0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), 0xFF));
	// addi r7,r1,832
	ctx.r7.s64 = ctx.r1.s64 + 832;
	// addi r6,r1,864
	ctx.r6.s64 = ctx.r1.s64 + 864;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// li r3,2
	ctx.r3.s64 = 2;
	// stvx128 v34,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v33,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f25,352(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// vspltw128 v32,v33,0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v33.u32), 0xFF));
	// stfs f30,356(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f24,360(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stvx128 v32,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x838040D0;
	sub_83102DB0(ctx, base);
loc_838040D0:
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// b 0x838040e0
	goto loc_838040E0;
loc_838040DC:
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
loc_838040E0:
	// lwz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// li r27,6
	ctx.r27.s64 = 6;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// bne cr6,0x83804224
	if (!cr6.eq) goto loc_83804224;
	// cmpwi cr6,r18,15
	cr6.compare<int32_t>(ctx.r18.s32, 15, xer);
	// bne cr6,0x83804224
	if (!cr6.eq) goto loc_83804224;
	// lwz r11,1076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1076);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r11.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x83804110;
	sub_83740868(ctx, base);
	// lwz r9,1172(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fsubs f17,f23,f12
	ctx.f17.f64 = double(float(ctx.f23.f64 - ctx.f12.f64));
	// fsubs f16,f22,f11
	ctx.f16.f64 = double(float(ctx.f22.f64 - ctx.f11.f64));
	// fmuls f6,f7,f21
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f21.f64));
	// fdivs f29,f10,f1
	ctx.f29.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// fmuls f31,f6,f28
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// bl 0x83740868
	ctx.lr = 0x83804154;
	sub_83740868(ctx, base);
	// fmuls f5,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmuls f4,f16,f16
	ctx.f4.f64 = double(float(ctx.f16.f64 * ctx.f16.f64));
	// lfs f0,2940(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2940);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f2,f17,f17,f4
	ctx.f2.f64 = double(float(ctx.f17.f64 * ctx.f17.f64 + ctx.f4.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fcmpu cr6,f2,f1
	cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// blt cr6,0x838041f4
	if (cr6.lt) goto loc_838041F4;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838041f4
	if (cr6.eq) goto loc_838041F4;
	// fcmpu cr6,f31,f29
	cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x838041f4
	if (cr6.gt) goto loc_838041F4;
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// clrlwi r10,r17,24
	ctx.r10.u64 = ctx.r17.u32 & 0xFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r9.u32);
	// beq cr6,0x838041e8
	if (cr6.eq) goto loc_838041E8;
	// lvlx128 v63,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r7,r1,896
	ctx.r7.s64 = ctx.r1.s64 + 896;
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// li r3,6
	ctx.r3.s64 = 6;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f23,384(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stfs f30,388(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f22,392(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x838041E8;
	sub_83102DB0(ctx, base);
loc_838041E8:
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// b 0x838041f8
	goto loc_838041F8;
loc_838041F4:
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
loc_838041F8:
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bge cr6,0x83804214
	if (!cr6.lt) goto loc_83804214;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,9104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// ble cr6,0x83804304
	if (!cr6.gt) goto loc_83804304;
loc_83804214:
	// stw r15,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r15.u32);
	// stw r23,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r23.u32);
	// stw r23,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r23.u32);
	// b 0x83804304
	goto loc_83804304;
loc_83804224:
	// cmpw cr6,r11,r18
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, xer);
	// beq cr6,0x83804304
	if (cr6.eq) goto loc_83804304;
	// stw r18,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r18.u32);
	// cmpwi cr6,r18,5
	cr6.compare<int32_t>(ctx.r18.s32, 5, xer);
	// stw r23,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r23.u32);
	// beq cr6,0x838042ac
	if (cr6.eq) goto loc_838042AC;
	// cmpwi cr6,r18,6
	cr6.compare<int32_t>(ctx.r18.s32, 6, xer);
	// beq cr6,0x8380424c
	if (cr6.eq) goto loc_8380424C;
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// b 0x83804304
	goto loc_83804304;
loc_8380424C:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// stw r23,1076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1076, ctx.r23.u32);
	// stw r22,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r22.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838042a4
	if (cr6.eq) goto loc_838042A4;
	// lvlx128 v59,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,960
	ctx.r11.s64 = ctx.r1.s64 + 960;
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
	// vspltw128 v58,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// addi r7,r1,960
	ctx.r7.s64 = ctx.r1.s64 + 960;
	// addi r6,r1,992
	ctx.r6.s64 = ctx.r1.s64 + 992;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// li r3,6
	ctx.r3.s64 = 6;
	// stvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v57,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f23,416(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// stfs f30,420(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f22,424(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x838042A4;
	sub_83102DB0(ctx, base);
loc_838042A4:
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// b 0x83804300
	goto loc_83804300;
loc_838042AC:
	// clrlwi r11,r17,24
	ctx.r11.u64 = ctx.r17.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838042fc
	if (cr6.eq) goto loc_838042FC;
	// lvlx128 v55,r0,r19
	temp.u32 = ctx.r19.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
	// addi r10,r1,1056
	ctx.r10.s64 = ctx.r1.s64 + 1056;
	// vspltw128 v54,v55,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), 0xFF));
	// addi r7,r1,1024
	ctx.r7.s64 = ctx.r1.s64 + 1024;
	// addi r6,r1,1056
	ctx.r6.s64 = ctx.r1.s64 + 1056;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// li r3,5
	ctx.r3.s64 = 5;
	// stvx128 v54,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v53,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f23,448(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// stfs f30,452(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f22,456(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stvx128 v52,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x838042FC;
	sub_83102DB0(ctx, base);
loc_838042FC:
	// mr r18,r25
	ctx.r18.u64 = ctx.r25.u64;
loc_83804300:
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
loc_83804304:
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmpwi cr6,r18,6
	cr6.compare<int32_t>(ctx.r18.s32, 6, xer);
	// bne cr6,0x8380432c
	if (!cr6.eq) goto loc_8380432C;
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380434c
	if (cr6.eq) goto loc_8380434C;
	// stw r22,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r22.u32);
	// b 0x83804348
	goto loc_83804348;
loc_8380432C:
	// cmpwi cr6,r18,5
	cr6.compare<int32_t>(ctx.r18.s32, 5, xer);
	// bne cr6,0x8380434c
	if (!cr6.eq) goto loc_8380434C;
	// clrlwi r11,r14,24
	ctx.r11.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380434c
	if (cr6.eq) goto loc_8380434C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1100, ctx.r11.u32);
loc_83804348:
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_8380434C:
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r7,4
	ctx.r7.s64 = 4;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// bne cr6,0x83804374
	if (!cr6.eq) goto loc_83804374;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804434
	if (cr6.eq) goto loc_83804434;
	// stw r27,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r27.u32);
	// b 0x83804430
	goto loc_83804430;
loc_83804374:
	// cmpwi cr6,r28,9
	cr6.compare<int32_t>(ctx.r28.s32, 9, xer);
	// bne cr6,0x83804390
	if (!cr6.eq) goto loc_83804390;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804434
	if (cr6.eq) goto loc_83804434;
	// stw r10,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r10.u32);
	// b 0x83804430
	goto loc_83804430;
loc_83804390:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x838043ac
	if (!cr6.eq) goto loc_838043AC;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804434
	if (cr6.eq) goto loc_83804434;
	// stw r22,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r22.u32);
	// b 0x83804430
	goto loc_83804430;
loc_838043AC:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// bne cr6,0x838043c8
	if (!cr6.eq) goto loc_838043C8;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804434
	if (cr6.eq) goto loc_83804434;
	// stw r9,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r9.u32);
	// b 0x83804430
	goto loc_83804430;
loc_838043C8:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x838043e4
	if (!cr6.eq) goto loc_838043E4;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804434
	if (cr6.eq) goto loc_83804434;
	// stw r25,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r25.u32);
	// b 0x83804430
	goto loc_83804430;
loc_838043E4:
	// cmpwi cr6,r28,13
	cr6.compare<int32_t>(ctx.r28.s32, 13, xer);
	// bne cr6,0x83804418
	if (!cr6.eq) goto loc_83804418;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804434
	if (cr6.eq) goto loc_83804434;
	// lwz r11,1156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r11,r5,1
	ctx.r11.u64 = ctx.r5.u64 ^ 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r4.u32);
	// b 0x83804430
	goto loc_83804430;
loc_83804418:
	// cmpwi cr6,r28,14
	cr6.compare<int32_t>(ctx.r28.s32, 14, xer);
	// bne cr6,0x83804434
	if (!cr6.eq) goto loc_83804434;
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804434
	if (cr6.eq) goto loc_83804434;
	// stw r7,1096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1096, ctx.r7.u32);
loc_83804430:
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_83804434:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(ctx.r29.s32, 8, xer);
	// bne cr6,0x83804450
	if (!cr6.eq) goto loc_83804450;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380450c
	if (cr6.eq) goto loc_8380450C;
	// stw r27,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r27.u32);
	// b 0x83804508
	goto loc_83804508;
loc_83804450:
	// cmpwi cr6,r29,9
	cr6.compare<int32_t>(ctx.r29.s32, 9, xer);
	// bne cr6,0x8380446c
	if (!cr6.eq) goto loc_8380446C;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380450c
	if (cr6.eq) goto loc_8380450C;
	// stw r10,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r10.u32);
	// b 0x83804508
	goto loc_83804508;
loc_8380446C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83804488
	if (!cr6.eq) goto loc_83804488;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380450c
	if (cr6.eq) goto loc_8380450C;
	// stw r22,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r22.u32);
	// b 0x83804508
	goto loc_83804508;
loc_83804488:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x838044a4
	if (!cr6.eq) goto loc_838044A4;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380450c
	if (cr6.eq) goto loc_8380450C;
	// stw r9,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r9.u32);
	// b 0x83804508
	goto loc_83804508;
loc_838044A4:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x838044c0
	if (!cr6.eq) goto loc_838044C0;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380450c
	if (cr6.eq) goto loc_8380450C;
	// stw r25,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r25.u32);
	// b 0x83804508
	goto loc_83804508;
loc_838044C0:
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(ctx.r29.s32, 13, xer);
	// bne cr6,0x838044f0
	if (!cr6.eq) goto loc_838044F0;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380450c
	if (cr6.eq) goto loc_8380450C;
	// lwz r11,1164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x83804504
	goto loc_83804504;
loc_838044F0:
	// cmpwi cr6,r29,14
	cr6.compare<int32_t>(ctx.r29.s32, 14, xer);
	// bne cr6,0x8380450c
	if (!cr6.eq) goto loc_8380450C;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380450c
	if (cr6.eq) goto loc_8380450C;
loc_83804504:
	// stw r7,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r7.u32);
loc_83804508:
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
loc_8380450C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380452c
	if (cr6.eq) goto loc_8380452C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380453c
	if (cr6.eq) goto loc_8380453C;
	// lwz r4,1092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// b 0x83804538
	goto loc_83804538;
loc_8380452C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380453c
	if (cr6.eq) goto loc_8380453C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83804538:
	// bl 0x829270f8
	ctx.lr = 0x8380453C;
	sub_829270F8(ctx, base);
loc_8380453C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380455c
	if (cr6.eq) goto loc_8380455C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380456c
	if (cr6.eq) goto loc_8380456C;
	// lwz r4,1096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// b 0x83804568
	goto loc_83804568;
loc_8380455C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380456c
	if (cr6.eq) goto loc_8380456C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83804568:
	// bl 0x83580aa8
	ctx.lr = 0x8380456C;
	sub_83580AA8(ctx, base);
loc_8380456C:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380458c
	if (cr6.eq) goto loc_8380458C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380459c
	if (cr6.eq) goto loc_8380459C;
	// lwz r4,1100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// b 0x83804598
	goto loc_83804598;
loc_8380458C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380459c
	if (cr6.eq) goto loc_8380459C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83804598:
	// bl 0x835d31c0
	ctx.lr = 0x8380459C;
	sub_835D31C0(ctx, base);
loc_8380459C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838045b0
	if (cr6.eq) goto loc_838045B0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x837b20f0
	ctx.lr = 0x838045B0;
	sub_837B20F0(ctx, base);
loc_838045B0:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838045c4
	if (cr6.eq) goto loc_838045C4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x837b2148
	ctx.lr = 0x838045C4;
	sub_837B2148(ctx, base);
loc_838045C4:
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f27,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f20,4(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f26,8(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stfs f25,0(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f19,4(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f24,8(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f23,0(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f18,4(r11)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f22,8(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831ce794
	ctx.lr = 0x83804600;
	__restfpr_16(ctx, base);
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83804604"))) PPC_WEAK_FUNC(sub_83804604);
PPC_FUNC_IMPL(__imp__sub_83804604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83804608"))) PPC_WEAK_FUNC(sub_83804608);
PPC_FUNC_IMPL(__imp__sub_83804608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83804610;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce768
	ctx.lr = 0x83804618;
	__savefpr_24(ctx, base);
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380463c
	if (cr6.eq) goto loc_8380463C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835d31c8
	ctx.lr = 0x8380463C;
	sub_835D31C8(ctx, base);
loc_8380463C:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// lfs f0,1248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1248);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,224(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lfs f13,1252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1252);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lfs f12,1256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1256);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r31,1248
	ctx.r26.s64 = ctx.r31.s64 + 1248;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f27,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f10,f28,f13
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f11,f29,f0
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f27,f12
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x83740868
	ctx.lr = 0x8380468C;
	sub_83740868(ctx, base);
	// lfs f8,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f1,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f1,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r27,r11,-26260
	ctx.r27.s64 = ctx.r11.s64 + -26260;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f10,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f4,f13,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f12,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fsqrts f11,f3
	ctx.f11.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x83804700
	if (!cr6.gt) goto loc_83804700;
	// fcmpu cr6,f11,f31
	cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x83804700
	if (cr6.eq) goto loc_83804700;
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_83804700:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lbz r28,1188(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1188);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lfs f25,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f25.f64 = double(temp.f32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lfs f26,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f26.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// beq cr6,0x83804b1c
	if (cr6.eq) goto loc_83804B1C;
	// lfs f0,1260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f25,f0
	ctx.f30.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// fsubs f24,f26,f13
	ctx.f24.f64 = double(float(ctx.f26.f64 - ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x83804740;
	sub_83740868(ctx, base);
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r8,512(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,516(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// fmuls f12,f24,f24
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f24.f64 * ctx.f24.f64));
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// vspltisw128 v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u32, simde_mm_set1_epi32(int(0x0)));
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// vslw128 v62,v63,v63
	ctx.v62.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v62.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v62.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v62.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// lfs f0,-8376(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -8376);
	ctx.f0.f64 = double(temp.f32);
	// vor128 v61,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v127.u8));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f30,f30,f12
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f12.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v60,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v61,v60,14,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 14));
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// vpermwi128 v59,v61,177
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x4E));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vpermwi128 v58,v61,78
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xB1));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vpermwi128 v57,v61,228
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x1B));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor128 v56,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vrlimi128 v56,v63,1,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v63.f32), 228), 1));
	// lfs f0,-23868(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -23868);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,23372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// stfs f29,128(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f28,132(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vpermwi128 v55,v63,177
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x4E));
	// vxor128 v52,v56,v62
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stfs f27,136(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vpermwi128 v54,v63,78
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xB1));
	// vpermwi128 v53,v63,228
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x1B));
	// vor128 v51,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v50,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vor128 v49,v52,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_load_si128((simde__m128i*)ctx.v52.u8));
	// vrlimi128 v52,v56,11,0
	simde_mm_store_ps(ctx.v52.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 11));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// vrlimi128 v51,v56,1,0
	simde_mm_store_ps(ctx.v51.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 1));
	// vrlimi128 v50,v56,13,0
	simde_mm_store_ps(ctx.v50.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 13));
	// vrlimi128 v49,v56,7,0
	simde_mm_store_ps(ctx.v49.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v56.f32), 228), 7));
	// vmsum4fp128 v45,v52,v57
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v48,v51,v61
	simde_mm_store_ps(ctx.v48.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v51.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v47,v50,v59
	simde_mm_store_ps(ctx.v47.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v46,v49,v58
	simde_mm_store_ps(ctx.v46.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v49.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// fmuls f0,f4,f6
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// vmrghw128 v44,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vmrghw128 v43,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// vmrghw128 v42,v43,v44
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), simde_mm_load_si128((simde__m128i*)ctx.v43.u32)));
	// vxor128 v41,v42,v62
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vor128 v40,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vor128 v39,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vor128 v38,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// vrlimi128 v40,v42,1,0
	simde_mm_store_ps(ctx.v40.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 1));
	// vrlimi128 v39,v42,13,0
	simde_mm_store_ps(ctx.v39.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 13));
	// vrlimi128 v38,v42,7,0
	simde_mm_store_ps(ctx.v38.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 7));
	// vrlimi128 v41,v42,11,0
	simde_mm_store_ps(ctx.v41.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v42.f32), 228), 11));
	// vmsum4fp128 v37,v40,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v37.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v40.f32), simde_mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v36,v39,v55
	simde_mm_store_ps(ctx.v36.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v55.f32), 0xFF));
	// lvx128 v35,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v34,v38,v54
	simde_mm_store_ps(ctx.v34.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v54.f32), 0xFF));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r8,1228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// vmsum4fp128 v33,v41,v53
	simde_mm_store_ps(ctx.v33.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v53.f32), 0xFF));
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// vmrghw128 v32,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrghw128 v63,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vmrghw128 v62,v63,v32
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v32.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// vaddfp128 v61,v35,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v62.f32)));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x83804a10
	if (cr6.eq) goto loc_83804A10;
	// lwz r10,1224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x838049fc
	if (!cr6.gt) goto loc_838049FC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x83740868
	ctx.lr = 0x838048CC;
	sub_83740868(ctx, base);
	// lwz r9,1240(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1240);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,1224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r4,1228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfs f13,14604(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14604);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// fdivs f11,f7,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 / ctx.f1.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f12,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// bne cr6,0x83804940
	if (!cr6.eq) goto loc_83804940;
	// lwz r9,1244(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1244);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
loc_83804940:
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x83804b1c
	if (cr6.gt) goto loc_83804B1C;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// beq cr6,0x83804960
	if (cr6.eq) goto loc_83804960;
	// bl 0x835d31c8
	ctx.lr = 0x83804960;
	sub_835D31C8(ctx, base);
loc_83804960:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838049dc
	if (cr6.eq) goto loc_838049DC;
	// lwz r11,1228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	// li r3,10
	ctx.r3.s64 = 10;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8380497c
	if (!cr6.eq) goto loc_8380497C;
	// li r3,11
	ctx.r3.s64 = 11;
loc_8380497C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// vupkd3d128 v60,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v60 = vTemp;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// vsldoi128 v59,v127,v60,4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 12));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v57,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v56,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.u32), 0xFF));
	// stvx128 v59,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x838049DC;
	sub_83102DB0(ctx, base);
loc_838049DC:
	// lwz r10,1228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1228);
	// lwz r11,1232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1232);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x838049f0
	if (!cr6.eq) goto loc_838049F0;
	// lwz r11,1236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1236);
loc_838049F0:
	// lwz r10,1224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83804b1c
	if (cr6.gt) goto loc_83804B1C;
loc_838049FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r11.u32);
	// stw r11,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r11.u32);
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// b 0x83804b1c
	goto loc_83804B1C;
loc_83804A10:
	// lfs f13,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 980);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83804a2c
	if (cr6.gt) goto loc_83804A2C;
	// lfs f30,1272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	ctx.f30.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r29,10
	ctx.r29.s64 = 10;
	// b 0x83804a44
	goto loc_83804A44;
loc_83804A2C:
	// lfs f13,984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x83804b1c
	if (cr6.gt) goto loc_83804B1C;
	// lfs f30,1276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1276);
	ctx.f30.f64 = double(temp.f32);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,11
	ctx.r29.s64 = 11;
loc_83804A44:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,21
	ctx.r4.s64 = 21;
	// addi r3,r31,1192
	ctx.r3.s64 = ctx.r31.s64 + 1192;
	// bl 0x82a5c5b0
	ctx.lr = 0x83804A54;
	sub_82A5C5B0(ctx, base);
	// lwz r10,1220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// addi r11,r3,-10
	ctx.r11.s64 = ctx.r3.s64 + -10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f24,f13
	ctx.f24.f64 = double(float(ctx.f13.f64));
	// bl 0x83740868
	ctx.lr = 0x83804A78;
	sub_83740868(ctx, base);
	// fdivs f12,f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f24.f64 / ctx.f1.f64));
	// fcmpu cr6,f30,f12
	cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// bge cr6,0x83804b1c
	if (!cr6.lt) goto loc_83804B1C;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83804a9c
	if (cr6.eq) goto loc_83804A9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x835d31c8
	ctx.lr = 0x83804A9C;
	sub_835D31C8(ctx, base);
loc_83804A9C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83804b08
	if (cr6.eq) goto loc_83804B08;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vupkd3d128 v55,v127,0
	vTemp.u32[0] = ctx.v127.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v127.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v127.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v127.u8[2] | 0x3F800000;
	ctx.v55 = vTemp;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vsldoi128 v54,v127,v55,4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 12));
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lvx128 v53,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v52,r0,r27
	temp.u32 = ctx.r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v51,v52,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v52.u32), 0xFF));
	// stvx128 v54,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83102db0
	ctx.lr = 0x83804B08;
	sub_83102DB0(ctx, base);
loc_83804B08:
	// lwz r11,1224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1224);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r10,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r10.u32);
	// stw r9,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r9.u32);
loc_83804B1C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83804b30
	if (cr6.eq) goto loc_83804B30;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x837b21a0
	ctx.lr = 0x83804B30;
	sub_837B21A0(ctx, base);
loc_83804B30:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,0(r26)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f28,4(r26)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f27,8(r26)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f25,1260(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1260, temp.u32);
	// stfs f0,1264(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1264, temp.u32);
	// stfs f26,1268(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1268, temp.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831ce7b4
	ctx.lr = 0x83804B60;
	__restfpr_24(ctx, base);
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83804B64"))) PPC_WEAK_FUNC(sub_83804B64);
PPC_FUNC_IMPL(__imp__sub_83804B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83804B68"))) PPC_WEAK_FUNC(sub_83804B68);
PPC_FUNC_IMPL(__imp__sub_83804B68) {
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
	// bl 0x83802828
	ctx.lr = 0x83804B88;
	sub_83802828(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804ba8
	if (cr6.eq) goto loc_83804BA8;
	// bl 0x82595188
	ctx.lr = 0x83804B98;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83804BA8;
	sub_825952B8(ctx, base);
loc_83804BA8:
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

__attribute__((alias("__imp__sub_83804BC4"))) PPC_WEAK_FUNC(sub_83804BC4);
PPC_FUNC_IMPL(__imp__sub_83804BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83804BC8"))) PPC_WEAK_FUNC(sub_83804BC8);
PPC_FUNC_IMPL(__imp__sub_83804BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83804BD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
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
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804c38
	if (cr6.eq) goto loc_83804C38;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83804C0C;
	sub_82595150(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83804c2c
	if (cr6.eq) goto loc_83804C2C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83804C2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83804C2C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83804C34;
	sub_82595170(ctx, base);
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
loc_83804C38:
	// addi r3,r31,832
	ctx.r3.s64 = ctx.r31.s64 + 832;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83804C48;
	sub_831CE980(ctx, base);
	// stw r29,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r29.u32);
	// bl 0x8378cba8
	ctx.lr = 0x83804C50;
	sub_8378CBA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8378fc10
	ctx.lr = 0x83804C5C;
	sub_8378FC10(ctx, base);
	// stb r3,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r3.u8);
	// stb r26,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,829(r31)
	PPC_STORE_U8(ctx.r31.u32 + 829, ctx.r28.u8);
	// stb r27,940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 940, ctx.r27.u8);
	// bl 0x83802918
	ctx.lr = 0x83804C74;
	sub_83802918(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83804C7C"))) PPC_WEAK_FUNC(sub_83804C7C);
PPC_FUNC_IMPL(__imp__sub_83804C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83804C80"))) PPC_WEAK_FUNC(sub_83804C80);
PPC_FUNC_IMPL(__imp__sub_83804C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83804C88;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831d1254
	ctx.lr = 0x83804C94;
	__savevmx_124(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804efc
	if (cr6.eq) goto loc_83804EFC;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83804efc
	if (cr6.eq) goto loc_83804EFC;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// bl 0x837c5598
	ctx.lr = 0x83804CC0;
	sub_837C5598(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x834fd130
	ctx.lr = 0x83804CD4;
	sub_834FD130(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f31,-26260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x83804ee8
	if (!cr6.gt) goto loc_83804EE8;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r29,r31,664
	ctx.r29.s64 = ctx.r31.s64 + 664;
	// addi r28,r31,748
	ctx.r28.s64 = ctx.r31.s64 + 748;
	// addi r25,r11,7124
	ctx.r25.s64 = ctx.r11.s64 + 7124;
loc_83804CF4:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x834f0fc0
	ctx.lr = 0x83804D04;
	sub_834F0FC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, xer);
	// bne cr6,0x83804dfc
	if (!cr6.eq) goto loc_83804DFC;
	// lbz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83804d7c
	if (!cr6.eq) goto loc_83804D7C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x83522540
	ctx.lr = 0x83804D28;
	sub_83522540(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x833c7180
	ctx.lr = 0x83804D3C;
	sub_833C7180(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lvx128 v125,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83521f50
	ctx.lr = 0x83804D4C;
	sub_83521F50(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x83522540
	ctx.lr = 0x83804D58;
	sub_83522540(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x833c7228
	ctx.lr = 0x83804D6C;
	sub_833C7228(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lvx128 v124,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83521f50
	ctx.lr = 0x83804D7C;
	sub_83521F50(ctx, base);
loc_83804D7C:
	// lbz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83804dc8
	if (!cr6.eq) goto loc_83804DC8;
	// vspltw128 v63,v124,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v124.u32), 0xFF));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x833c7378
	ctx.lr = 0x83804D9C;
	sub_833C7378(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v62,v125,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v125.u32), 0xFF));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x833c7378
	ctx.lr = 0x83804DBC;
	sub_833C7378(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_83804DC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x834f20e0
	ctx.lr = 0x83804DD8;
	sub_834F20E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x834f20e0
	ctx.lr = 0x83804DE8;
	sub_834F20E0(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x834f1ea8
	ctx.lr = 0x83804DF4;
	sub_834F1EA8(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x83804ecc
	goto loc_83804ECC;
loc_83804DFC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x83804ed0
	if (cr6.lt) goto loc_83804ED0;
	// lbz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83804e78
	if (!cr6.eq) goto loc_83804E78;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x834fc930
	ctx.lr = 0x83804E1C;
	sub_834FC930(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82c90e90
	ctx.lr = 0x83804E2C;
	sub_82C90E90(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x833c7180
	ctx.lr = 0x83804E3C;
	sub_833C7180(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83521f50
	ctx.lr = 0x83804E4C;
	sub_83521F50(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82c90e90
	ctx.lr = 0x83804E58;
	sub_82C90E90(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x833c7228
	ctx.lr = 0x83804E68;
	sub_833C7228(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lvx128 v126,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x83521f50
	ctx.lr = 0x83804E78;
	sub_83521F50(ctx, base);
loc_83804E78:
	// lbz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 664);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83804eac
	if (!cr6.eq) goto loc_83804EAC;
	// vspltw128 v60,v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xFF));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltw128 v61,v126,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xFF));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v61,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_83804EAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x834f20e0
	ctx.lr = 0x83804EBC;
	sub_834F20E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834f20e0
	ctx.lr = 0x83804ECC;
	sub_834F20E0(ctx, base);
loc_83804ECC:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_83804ED0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r3,276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x834fd130
	ctx.lr = 0x83804EE0;
	sub_834FD130(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x83804cf4
	if (cr6.lt) goto loc_83804CF4;
loc_83804EE8:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x834f1ea8
	ctx.lr = 0x83804EF4;
	sub_834F1EA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,664(r31)
	PPC_STORE_U8(ctx.r31.u32 + 664, ctx.r11.u8);
loc_83804EFC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x831d14ec
	ctx.lr = 0x83804F08;
	__restvmx_124(ctx, base);
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83804F10"))) PPC_WEAK_FUNC(sub_83804F10);
PPC_FUNC_IMPL(__imp__sub_83804F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83804F18;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,941(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 941);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83804f58
	if (!cr6.eq) goto loc_83804F58;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83804F58:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805100
	if (cr6.eq) goto loc_83805100;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x834f07e0
	ctx.lr = 0x83804F70;
	sub_834F07E0(ctx, base);
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x834f0718
	ctx.lr = 0x83804F8C;
	sub_834F0718(ctx, base);
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f13,f31
	ctx.f29.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f1,92(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f0,27608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x83804fb4
	if (!cr6.lt) goto loc_83804FB4;
	// fsubs f31,f13,f1
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// b 0x83804fc0
	goto loc_83804FC0;
loc_83804FB4:
	// lfs f13,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_83804FC0:
	// lbz r11,936(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 936);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83804fe8
	if (!cr6.eq) goto loc_83804FE8;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lfs f0,23372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x83804fe8
	if (cr6.lt) goto loc_83804FE8;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_83804FE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x83804ffc
	if (!cr6.lt) goto loc_83804FFC;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_83804FFC:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x834ef9e8
	ctx.lr = 0x83805008;
	sub_834EF9E8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8380501C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834f4ea8
	ctx.lr = 0x83805024;
	sub_834F4EA8(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x834ef9e8
	ctx.lr = 0x83805030;
	sub_834EF9E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834f0718
	ctx.lr = 0x83805040;
	sub_834F0718(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x834f07e0
	ctx.lr = 0x83805054;
	sub_834F07E0(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// blt cr6,0x83805060
	if (cr6.lt) goto loc_83805060;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83805060:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838050b4
	if (cr6.eq) goto loc_838050B4;
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838050b4
	if (cr6.eq) goto loc_838050B4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r29,937(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 937);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834f0718
	ctx.lr = 0x8380508C;
	sub_834F0718(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x837adbb8
	ctx.lr = 0x838050A0;
	sub_837ADBB8(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x837ac2e0
	ctx.lr = 0x838050A8;
	sub_837AC2E0(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x837ac640
	ctx.lr = 0x838050B4;
	sub_837AC640(ctx, base);
loc_838050B4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838050fc
	if (cr6.eq) goto loc_838050FC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x834f0718
	ctx.lr = 0x838050D0;
	sub_834F0718(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x834fcbd8
	ctx.lr = 0x838050DC;
	sub_834FCBD8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x834fce60
	ctx.lr = 0x838050E8;
	sub_834FCE60(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838050FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838050FC:
	// stfs f29,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
loc_83805100:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805114
	if (cr6.eq) goto loc_83805114;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829270f8
	ctx.lr = 0x83805114;
	sub_829270F8(ctx, base);
loc_83805114:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805128
	if (cr6.eq) goto loc_83805128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83580aa8
	ctx.lr = 0x83805128;
	sub_83580AA8(ctx, base);
loc_83805128:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380513c
	if (cr6.eq) goto loc_8380513C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835d31c0
	ctx.lr = 0x8380513C;
	sub_835D31C0(ctx, base);
loc_8380513C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83802d60
	ctx.lr = 0x83805144;
	sub_83802D60(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805158
	if (cr6.eq) goto loc_83805158;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x835d31c8
	ctx.lr = 0x83805158;
	sub_835D31C8(ctx, base);
loc_83805158:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83804608
	ctx.lr = 0x83805160;
	sub_83804608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_83805178"))) PPC_WEAK_FUNC(sub_83805178);
PPC_FUNC_IMPL(__imp__sub_83805178) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce778
	ctx.lr = 0x83805190;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,941(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 941);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380556c
	if (cr6.eq) goto loc_8380556C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838051c8
	if (cr6.eq) goto loc_838051C8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 & ctx.r30.u64;
loc_838051C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// beq cr6,0x83805280
	if (cr6.eq) goto loc_83805280;
	// bl 0x834f4ea8
	ctx.lr = 0x838051E4;
	sub_834F4EA8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834f0718
	ctx.lr = 0x838051F4;
	sub_834F0718(ctx, base);
	// lbz r11,938(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 938);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805238
	if (cr6.eq) goto loc_83805238;
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83805238
	if (!cr6.lt) goto loc_83805238;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x834f18f8
	ctx.lr = 0x83805228;
	sub_834F18F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834f1a58
	ctx.lr = 0x83805238;
	sub_834F1A58(ctx, base);
loc_83805238:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805280
	if (cr6.eq) goto loc_83805280;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x837b1ca8
	ctx.lr = 0x83805250;
	sub_837B1CA8(ctx, base);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83805280
	if (cr6.eq) goto loc_83805280;
	// lbz r11,86(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 86);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805280
	if (cr6.eq) goto loc_83805280;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805280
	if (cr6.eq) goto loc_83805280;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b0f70
	ctx.lr = 0x83805280;
	sub_837B0F70(ctx, base);
loc_83805280:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838052f0
	if (cr6.eq) goto loc_838052F0;
	// lbz r11,939(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 939);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838052f0
	if (!cr6.eq) goto loc_838052F0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x834f19a8
	ctx.lr = 0x838052AC;
	sub_834F19A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834f1d30
	ctx.lr = 0x838052B8;
	sub_834F1D30(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lfs f0,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f13,6996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x838052e0
	if (!cr6.lt) goto loc_838052E0;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x838052ec
	goto loc_838052EC;
loc_838052E0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x838052f0
	if (cr6.lt) goto loc_838052F0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_838052EC:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_838052F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83802a18
	ctx.lr = 0x838052F8;
	sub_83802A18(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f29,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x8380547c
	if (cr6.eq) goto loc_8380547C;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380547c
	if (cr6.eq) goto loc_8380547C;
	// bl 0x834fd298
	ctx.lr = 0x8380531C;
	sub_834FD298(ctx, base);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x834fd2b8
	ctx.lr = 0x83805330;
	sub_834FD2B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,937(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 937);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f30,20056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x83805350
	if (cr6.eq) goto loc_83805350;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_83805350:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x834fcda8
	ctx.lr = 0x8380537C;
	sub_834FCDA8(ctx, base);
	// lbz r11,937(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 937);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805394
	if (cr6.eq) goto loc_83805394;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_83805394:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,504
	ctx.r4.s64 = ctx.r31.s64 + 504;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f7,44(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f29,136(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f29,156(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82a5a1b8
	ctx.lr = 0x83805440;
	sub_82A5A1B8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f3,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a5a078
	ctx.lr = 0x83805454;
	sub_82A5A078(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a59ca0
	ctx.lr = 0x83805464;
	sub_82A59CA0(ctx, base);
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8380547C:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805568
	if (cr6.eq) goto loc_83805568;
	// lbz r11,977(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 977);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x838054a0
	if (!cr6.gt) goto loc_838054A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x838054a8
	goto loc_838054A8;
loc_838054A0:
	// bne cr6,0x838054b8
	if (!cr6.eq) goto loc_838054B8;
	// li r4,1
	ctx.r4.s64 = 1;
loc_838054A8:
	// bl 0x837b1690
	ctx.lr = 0x838054AC;
	sub_837B1690(ctx, base);
	// lbz r11,977(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 977);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stb r10,977(r31)
	PPC_STORE_U8(ctx.r31.u32 + 977, ctx.r10.u8);
loc_838054B8:
	// lbz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 976);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x838054dc
	if (!cr6.gt) goto loc_838054DC;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b1508
	ctx.lr = 0x838054D0;
	sub_837B1508(ctx, base);
	// lbz r11,976(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 976);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stb r10,976(r31)
	PPC_STORE_U8(ctx.r31.u32 + 976, ctx.r10.u8);
loc_838054DC:
	// lbz r11,978(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 978);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x838054f8
	if (!cr6.gt) goto loc_838054F8;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b1640
	ctx.lr = 0x838054F4;
	sub_837B1640(ctx, base);
	// b 0x8380550c
	goto loc_8380550C;
loc_838054F8:
	// bne cr6,0x83805518
	if (!cr6.eq) goto loc_83805518;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x837b1560
	ctx.lr = 0x8380550C;
	sub_837B1560(ctx, base);
loc_8380550C:
	// lbz r11,978(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 978);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stb r10,978(r31)
	PPC_STORE_U8(ctx.r31.u32 + 978, ctx.r10.u8);
loc_83805518:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x837b1dc0
	ctx.lr = 0x83805568;
	sub_837B1DC0(ctx, base);
loc_83805568:
	// stfs f28,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
loc_8380556C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831ce7c4
	ctx.lr = 0x83805578;
	__restfpr_28(ctx, base);
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

__attribute__((alias("__imp__sub_8380558C"))) PPC_WEAK_FUNC(sub_8380558C);
PPC_FUNC_IMPL(__imp__sub_8380558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83805590"))) PPC_WEAK_FUNC(sub_83805590);
PPC_FUNC_IMPL(__imp__sub_83805590) {
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
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838056f4
	if (cr6.eq) goto loc_838056F4;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x838056f4
	if (!cr6.lt) goto loc_838056F4;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x838056f4
	if (cr6.gt) goto loc_838056F4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x838055dc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838055DC;
	// bdzf 4*cr6+eq,0x838055e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_838055E4;
	// bne cr6,0x838055ec
	if (!cr6.eq) goto loc_838055EC;
	// li r9,5
	ctx.r9.s64 = 5;
	// b 0x838055f0
	goto loc_838055F0;
loc_838055DC:
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x838055f0
	goto loc_838055F0;
loc_838055E4:
	// li r9,7
	ctx.r9.s64 = 7;
	// b 0x838055f0
	goto loc_838055F0;
loc_838055EC:
	// li r9,6
	ctx.r9.s64 = 6;
loc_838055F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x83805604
	if (!cr6.lt) goto loc_83805604;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83805604:
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// addi r11,r4,236
	ctx.r11.s64 = ctx.r4.s64 + 236;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lfs f0,27608(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bne cr6,0x83805624
	if (!cr6.eq) goto loc_83805624;
	// addi r11,r4,240
	ctx.r11.s64 = ctx.r4.s64 + 240;
loc_83805624:
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfsx f0,r6,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,72(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// lwzx r31,r7,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// beq cr6,0x838056b0
	if (cr6.eq) goto loc_838056B0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805664
	if (cr6.eq) goto loc_83805664;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x83805668
	if (!cr6.eq) goto loc_83805668;
loc_83805664:
	// li r11,1
	ctx.r11.s64 = 1;
loc_83805668:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838056f4
	if (cr6.eq) goto loc_838056F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r4,236
	ctx.r10.s64 = ctx.r4.s64 + 236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83805694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r6,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r6.u8);
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
loc_838056B0:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x838056c4
	if (cr6.eq) goto loc_838056C4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x838056c8
	if (!cr6.eq) goto loc_838056C8;
loc_838056C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_838056C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838056f4
	if (cr6.eq) goto loc_838056F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r4,240
	ctx.r10.s64 = ctx.r4.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x838056F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838056F4:
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

__attribute__((alias("__imp__sub_83805708"))) PPC_WEAK_FUNC(sub_83805708);
PPC_FUNC_IMPL(__imp__sub_83805708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x83805740
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83805740;
	// bdzf 4*cr6+eq,0x83805748
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_83805748;
	// bne cr6,0x83805750
	if (!cr6.eq) goto loc_83805750;
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x83805754
	goto loc_83805754;
loc_83805740:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x83805754
	goto loc_83805754;
loc_83805748:
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x83805754
	goto loc_83805754;
loc_83805750:
	// li r10,6
	ctx.r10.s64 = 6;
loc_83805754:
	// lwz r11,224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x838057b0
	if (cr6.eq) goto loc_838057B0;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x838057b0
	if (cr6.eq) goto loc_838057B0;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r7,208
	ctx.r7.s64 = 208;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x838057f4
	goto loc_838057F4;
loc_838057B0:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// li r7,208
	ctx.r7.s64 = 208;
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,7
	ctx.r4.s64 = 7;
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_838057F4:
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83805824
	if (cr6.lt) goto loc_83805824;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83805828
	if (!cr6.gt) goto loc_83805828;
loc_83805824:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_83805828:
	// stfs f13,152(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83805830"))) PPC_WEAK_FUNC(sub_83805830);
PPC_FUNC_IMPL(__imp__sub_83805830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x83805838;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805a68
	if (cr6.eq) goto loc_83805A68;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83805a68
	if (cr6.eq) goto loc_83805A68;
	// bl 0x837db998
	ctx.lr = 0x83805860;
	sub_837DB998(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x83805a68
	if (cr6.eq) goto loc_83805A68;
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// bge cr6,0x83805a68
	if (!cr6.lt) goto loc_83805A68;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825a2368
	ctx.lr = 0x8380587C;
	sub_825A2368(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b0ea0
	ctx.lr = 0x83805888;
	sub_837B0EA0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r10,82(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 82);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838058c0
	if (cr6.eq) goto loc_838058C0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838058B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838058c4
	if (!cr6.eq) goto loc_838058C4;
loc_838058C0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_838058C4:
	// lwz r27,68(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r29,22
	cr6.compare<int32_t>(ctx.r29.s32, 22, xer);
	// bne cr6,0x838058dc
	if (!cr6.eq) goto loc_838058DC;
	// lbz r25,93(r27)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r27.u32 + 93);
	// b 0x838058e0
	goto loc_838058E0;
loc_838058DC:
	// lbz r25,92(r27)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r27.u32 + 92);
loc_838058E0:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r26,r11,86
	ctx.r26.s64 = ctx.r11.s64 + 86;
	// lbz r23,140(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 140);
	// lfs f31,136(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f31.f64 = double(temp.f32);
	// lwz r22,112(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r21,108(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r20,104(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r19,100(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r18,96(r11)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lbz r17,84(r11)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r11.u32 + 84);
	// lbz r16,83(r11)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r11.u32 + 83);
	// bl 0x831ce980
	ctx.lr = 0x8380591C;
	sub_831CE980(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x837b1418
	ctx.lr = 0x8380592C;
	sub_837B1418(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b1410
	ctx.lr = 0x83805938;
	sub_837B1410(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b1408
	ctx.lr = 0x83805944;
	sub_837B1408(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// addi r9,r1,544
	ctx.r9.s64 = ctx.r1.s64 + 544;
	// lfs f1,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r20.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stb r25,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r25.u8);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stb r17,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r17.u8);
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stb r23,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r23.u8);
	// stb r30,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r30.u8);
	// stb r30,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r30.u8);
	// stb r30,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r30.u8);
	// stb r30,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r30.u8);
	// bl 0x82a57268
	ctx.lr = 0x838059AC;
	sub_82A57268(ctx, base);
	// sth r30,528(r1)
	PPC_STORE_U16(ctx.r1.u32 + 528, ctx.r30.u16);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// sth r30,530(r1)
	PPC_STORE_U16(ctx.r1.u32 + 530, ctx.r30.u16);
	// sth r30,532(r1)
	PPC_STORE_U16(ctx.r1.u32 + 532, ctx.r30.u16);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x837b1f98
	ctx.lr = 0x838059C4;
	sub_837B1F98(ctx, base);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a57588
	ctx.lr = 0x838059D4;
	sub_82A57588(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805a44
	if (cr6.eq) goto loc_83805A44;
	// bl 0x837ac6d0
	ctx.lr = 0x838059E4;
	sub_837AC6D0(ctx, base);
	// sth r3,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r3.u16);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82d61510
	ctx.lr = 0x838059F0;
	sub_82D61510(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82638f20
	ctx.lr = 0x838059FC;
	sub_82638F20(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x83102db0
	ctx.lr = 0x83805A14;
	sub_83102DB0(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x837ac768
	ctx.lr = 0x83805A1C;
	sub_837AC768(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x83805A2C;
	sub_83102DB0(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82da1d58
	ctx.lr = 0x83805A34;
	sub_82DA1D58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x83805A44;
	sub_83102DB0(ctx, base);
loc_83805A44:
	// addi r11,r1,232
	ctx.r11.s64 = ctx.r1.s64 + 232;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r6,r1,232
	ctx.r6.s64 = ctx.r1.s64 + 232;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// bl 0x83102db0
	ctx.lr = 0x83805A68;
	sub_83102DB0(ctx, base);
loc_83805A68:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83805A74"))) PPC_WEAK_FUNC(sub_83805A74);
PPC_FUNC_IMPL(__imp__sub_83805A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83805A78"))) PPC_WEAK_FUNC(sub_83805A78);
PPC_FUNC_IMPL(__imp__sub_83805A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83805A80;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805ad0
	if (cr6.eq) goto loc_83805AD0;
	// bl 0x834f64a0
	ctx.lr = 0x83805ABC;
	sub_834F64A0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805ad0
	if (cr6.eq) goto loc_83805AD0;
	// stw r30,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r30.u32);
loc_83805AD0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805ae4
	if (cr6.eq) goto loc_83805AE4;
	// bl 0x834fd268
	ctx.lr = 0x83805AE0;
	sub_834FD268(ctx, base);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
loc_83805AE4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stb r30,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r30.u8);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805b34
	if (cr6.eq) goto loc_83805B34;
	// li r11,33
	ctx.r11.s64 = 33;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83805B0C;
	sub_82595150(ctx, base);
	// lwz r29,76(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83805b28
	if (cr6.eq) goto loc_83805B28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x837aaab8
	ctx.lr = 0x83805B20;
	sub_837AAAB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x83805B28;
	sub_82416268(ctx, base);
loc_83805B28:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83805B30;
	sub_82595170(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_83805B34:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83805d08
	if (cr6.eq) goto loc_83805D08;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83805b50
	if (cr6.eq) goto loc_83805B50;
	// stw r28,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r28.u32);
loc_83805B50:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83804c80
	ctx.lr = 0x83805B58;
	sub_83804C80(ctx, base);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lfs f0,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x834f18f8
	ctx.lr = 0x83805B9C;
	sub_834F18F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834f1a58
	ctx.lr = 0x83805BAC;
	sub_834F1A58(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stb r27,937(r31)
	PPC_STORE_U8(ctx.r31.u32 + 937, ctx.r27.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,27608(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f30,92(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// bl 0x827eca90
	ctx.lr = 0x83805BD8;
	sub_827ECA90(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f8,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r30.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,9008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x834faa10
	ctx.lr = 0x83805C14;
	sub_834FAA10(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x83805cc0
	if (cr6.eq) goto loc_83805CC0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83805c40
	if (!cr6.eq) goto loc_83805C40;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x834ff190
	ctx.lr = 0x83805C34;
	sub_834FF190(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x834ff3f0
	ctx.lr = 0x83805C40;
	sub_834FF3F0(ctx, base);
loc_83805C40:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x834fe050
	ctx.lr = 0x83805C58;
	sub_834FE050(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x834ff328
	ctx.lr = 0x83805C74;
	sub_834FF328(ctx, base);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f29,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x834fcb30
	ctx.lr = 0x83805C8C;
	sub_834FCB30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x834fcbb8
	ctx.lr = 0x83805C9C;
	sub_834FCBB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x834fcbd8
	ctx.lr = 0x83805CAC;
	sub_834FCBD8(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805cd4
	if (cr6.eq) goto loc_83805CD4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83805cd0
	goto loc_83805CD0;
loc_83805CC0:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83805cd4
	if (cr6.eq) goto loc_83805CD4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_83805CD0:
	// bl 0x837b1178
	ctx.lr = 0x83805CD4;
	sub_837B1178(ctx, base);
loc_83805CD4:
	// stfs f31,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lbz r11,904(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 904);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x83805d00
	if (!cr6.eq) goto loc_83805D00;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,976(r31)
	PPC_STORE_U8(ctx.r31.u32 + 976, ctx.r11.u8);
loc_83805D00:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x824243f0
	ctx.lr = 0x83805D08;
	sub_824243F0(ctx, base);
loc_83805D08:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_83805D1C"))) PPC_WEAK_FUNC(sub_83805D1C);
PPC_FUNC_IMPL(__imp__sub_83805D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83805D20"))) PPC_WEAK_FUNC(sub_83805D20);
PPC_FUNC_IMPL(__imp__sub_83805D20) {
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
	// bl 0x824b3de0
	ctx.lr = 0x83805D38;
	sub_824B3DE0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r9,r11,13180
	ctx.r9.s64 = ctx.r11.s64 + 13180;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r4,r10,7286
	ctx.r4.s64 = ctx.r10.s64 + 7286;
	// bl 0x82420a60
	ctx.lr = 0x83805D54;
	sub_82420A60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r11.u8);
	// stb r11,123(r31)
	PPC_STORE_U8(ctx.r31.u32 + 123, ctx.r11.u8);
	// stb r11,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r11.u8);
	// stb r11,125(r31)
	PPC_STORE_U8(ctx.r31.u32 + 125, ctx.r11.u8);
	// stb r11,126(r31)
	PPC_STORE_U8(ctx.r31.u32 + 126, ctx.r11.u8);
	// stb r11,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r11.u8);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stb r11,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r11.u8);
	// stb r11,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r11.u8);
	// stb r11,131(r31)
	PPC_STORE_U8(ctx.r31.u32 + 131, ctx.r11.u8);
	// stb r11,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r11.u8);
	// stb r11,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r11.u8);
	// stb r11,134(r31)
	PPC_STORE_U8(ctx.r31.u32 + 134, ctx.r11.u8);
	// stb r11,135(r31)
	PPC_STORE_U8(ctx.r31.u32 + 135, ctx.r11.u8);
	// stb r11,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r11.u8);
	// stb r11,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r11.u8);
	// stb r10,138(r31)
	PPC_STORE_U8(ctx.r31.u32 + 138, ctx.r10.u8);
	// stb r10,139(r31)
	PPC_STORE_U8(ctx.r31.u32 + 139, ctx.r10.u8);
	// stb r10,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r10.u8);
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stb r10,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r10.u8);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stb r11,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r11.u8);
	// stb r11,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r11.u8);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r10,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r10.u32);
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
	// stb r11,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r11.u8);
	// stb r10,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r10.u8);
	// stb r10,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_83805DF8"))) PPC_WEAK_FUNC(sub_83805DF8);
PPC_FUNC_IMPL(__imp__sub_83805DF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824b3de0
	ctx.lr = 0x83805E10;
	sub_824B3DE0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r10,r11,13348
	ctx.r10.s64 = ctx.r11.s64 + 13348;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f278
	ctx.lr = 0x83805E20;
	sub_8241F278(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x8241f130
	ctx.lr = 0x83805E2C;
	sub_8241F130(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
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

__attribute__((alias("__imp__sub_83805E6C"))) PPC_WEAK_FUNC(sub_83805E6C);
PPC_FUNC_IMPL(__imp__sub_83805E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83805E70"))) PPC_WEAK_FUNC(sub_83805E70);
PPC_FUNC_IMPL(__imp__sub_83805E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83805E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x83805E98;
	sub_831CDCF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stb r29,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r29.u8);
	// bl 0x8252e3c0
	ctx.lr = 0x83805ED8;
	sub_8252E3C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83805EDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83805edc
	if (!cr6.eq) goto loc_83805EDC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x831d88a0
	ctx.lr = 0x83805F04;
	sub_831D88A0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r30,136
	ctx.r3.s64 = ctx.r30.s64 + 136;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r7,120(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lfs f12,128(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x8252e3c0
	ctx.lr = 0x83805F4C;
	sub_8252E3C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x831ce7d8
	ctx.lr = 0x83805F5C;
	sub_831CE7D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83805F68"))) PPC_WEAK_FUNC(sub_83805F68);
PPC_FUNC_IMPL(__imp__sub_83805F68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8251b010
	ctx.lr = 0x83805F80;
	sub_8251B010(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r9,r10,13424
	ctx.r9.s64 = ctx.r10.s64 + 13424;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x83805FA0;
	sub_831CDCF0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_83805FF0"))) PPC_WEAK_FUNC(sub_83805FF0);
PPC_FUNC_IMPL(__imp__sub_83805FF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825c7398
	sub_825C7398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83805FF4"))) PPC_WEAK_FUNC(sub_83805FF4);
PPC_FUNC_IMPL(__imp__sub_83805FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83805FF8"))) PPC_WEAK_FUNC(sub_83805FF8);
PPC_FUNC_IMPL(__imp__sub_83805FF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824fe5f8
	ctx.lr = 0x83806010;
	sub_824FE5F8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r9,r11,-2720
	ctx.r9.s64 = ctx.r11.s64 + -2720;
	// li r8,432
	ctx.r8.s64 = 432;
	// li r7,448
	ctx.r7.s64 = 448;
	// addi r6,r10,13516
	ctx.r6.s64 = ctx.r10.s64 + 13516;
	// li r5,464
	ctx.r5.s64 = 464;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,480
	ctx.r4.s64 = 480;
	// vor128 v62,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vor128 v61,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// vor128 v60,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// stvx128 v62,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stvx128 v61,r31,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stvx128 v60,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,9008(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// lfs f13,-26260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lfs f11,20048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20048);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,-4460(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4460);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32228
	ctx.r4.s64 = -2112094208;
	// lfs f9,22108(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22108);
	ctx.f9.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f5,-3404(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -3404);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,23372(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 23372);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f7,-23848(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23848);
	ctx.f7.f64 = double(temp.f32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// lfs f12,-24912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24912);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r11.u8);
	// lfs f6,9104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 9104);
	ctx.f6.f64 = double(temp.f32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stfs f0,304(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// stfs f13,308(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f11,316(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// stfs f13,320(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f10,324(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f13,328(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stfs f0,332(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// stfs f9,336(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stfs f13,340(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// stfs f8,344(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// stfs f13,348(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// stfs f13,352(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// stfs f7,356(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// stfs f0,360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// stfs f0,368(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// stfs f0,372(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stfs f12,376(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f12,380(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// stfs f13,384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f0,388(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f13,392(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f13,396(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfs f6,408(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stfs f5,412(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
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

__attribute__((alias("__imp__sub_83806148"))) PPC_WEAK_FUNC(sub_83806148);
PPC_FUNC_IMPL(__imp__sub_83806148) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83806198
	if (cr6.eq) goto loc_83806198;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b3ea8
	ctx.lr = 0x83806178;
	sub_824B3EA8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,13180
	ctx.r10.s64 = ctx.r11.s64 + 13180;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824201f0
	ctx.lr = 0x83806190;
	sub_824201F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8380619c
	goto loc_8380619C;
loc_83806198:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8380619C:
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

__attribute__((alias("__imp__sub_838061B4"))) PPC_WEAK_FUNC(sub_838061B4);
PPC_FUNC_IMPL(__imp__sub_838061B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838061B8"))) PPC_WEAK_FUNC(sub_838061B8);
PPC_FUNC_IMPL(__imp__sub_838061B8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83806208
	if (cr6.eq) goto loc_83806208;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b3ea8
	ctx.lr = 0x838061E8;
	sub_824B3EA8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,13348
	ctx.r10.s64 = ctx.r11.s64 + 13348;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8241f160
	ctx.lr = 0x83806200;
	sub_8241F160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8380620c
	goto loc_8380620C;
loc_83806208:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8380620C:
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

__attribute__((alias("__imp__sub_83806224"))) PPC_WEAK_FUNC(sub_83806224);
PPC_FUNC_IMPL(__imp__sub_83806224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806228"))) PPC_WEAK_FUNC(sub_83806228);
PPC_FUNC_IMPL(__imp__sub_83806228) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83806274
	if (cr6.eq) goto loc_83806274;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe060
	ctx.lr = 0x83806250;
	sub_824FE060(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,13516
	ctx.r10.s64 = ctx.r11.s64 + 13516;
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
loc_83806274:
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

__attribute__((alias("__imp__sub_8380628C"))) PPC_WEAK_FUNC(sub_8380628C);
PPC_FUNC_IMPL(__imp__sub_8380628C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806290"))) PPC_WEAK_FUNC(sub_83806290);
PPC_FUNC_IMPL(__imp__sub_83806290) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-6024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6024);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83806300
	if (!cr6.eq) goto loc_83806300;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-6024(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6024, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-6256
	ctx.r31.s64 = ctx.r9.s64 + -6256;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// bl 0x82477fc8
	ctx.lr = 0x838062DC;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19880
	ctx.r3.s64 = ctx.r8.s64 + -19880;
	// bl 0x831cdcc8
	ctx.lr = 0x838062E8;
	sub_831CDCC8(ctx, base);
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
loc_83806300:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6256
	ctx.r3.s64 = ctx.r11.s64 + -6256;
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

__attribute__((alias("__imp__sub_8380631C"))) PPC_WEAK_FUNC(sub_8380631C);
PPC_FUNC_IMPL(__imp__sub_8380631C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806320"))) PPC_WEAK_FUNC(sub_83806320);
PPC_FUNC_IMPL(__imp__sub_83806320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83806328;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8380634C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83806374
	if (cr6.eq) goto loc_83806374;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8251b010
	ctx.lr = 0x83806360;
	sub_8251B010(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,13088
	ctx.r10.s64 = ctx.r11.s64 + 13088;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x83806378
	goto loc_83806378;
loc_83806374:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_83806378:
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x83806384;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83806390"))) PPC_WEAK_FUNC(sub_83806390);
PPC_FUNC_IMPL(__imp__sub_83806390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83806398;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x837dced8
	ctx.lr = 0x838063B0;
	sub_837DCED8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stb r28,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r28.u8);
	// bl 0x8252e3c0
	ctx.lr = 0x838063C4;
	sub_8252E3C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_838063C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838063c8
	if (!cr6.eq) goto loc_838063C8;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x831d88a0
	ctx.lr = 0x838063F0;
	sub_831D88A0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// lfs f13,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stb r3,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r3.u8);
	// addi r11,r31,42
	ctx.r11.s64 = ctx.r31.s64 + 42;
	// lbz r8,120(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r8,21(r31)
	PPC_STORE_U8(ctx.r31.u32 + 21, ctx.r8.u8);
	// subfic r8,r31,-42
	xer.ca = ctx.r31.u32 <= 4294967254;
	ctx.r8.s64 = -42 - ctx.r31.s64;
	// lvx128 v63,r30,r7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v61,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v60,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f8,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lbz r7,148(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 148);
	// stb r7,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r7.u8);
loc_83806488:
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x838064a8
	if (!cr6.lt) goto loc_838064A8;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// b 0x838064ac
	goto loc_838064AC;
loc_838064A8:
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
loc_838064AC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x83806488
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83806488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838064C4"))) PPC_WEAK_FUNC(sub_838064C4);
PPC_FUNC_IMPL(__imp__sub_838064C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838064C8"))) PPC_WEAK_FUNC(sub_838064C8);
PPC_FUNC_IMPL(__imp__sub_838064C8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-5784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5784);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83806538
	if (!cr6.eq) goto loc_83806538;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-5784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5784, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-6016
	ctx.r31.s64 = ctx.r9.s64 + -6016;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82477fc8
	ctx.lr = 0x83806514;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19864
	ctx.r3.s64 = ctx.r8.s64 + -19864;
	// bl 0x831cdcc8
	ctx.lr = 0x83806520;
	sub_831CDCC8(ctx, base);
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
loc_83806538:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-6016
	ctx.r3.s64 = ctx.r11.s64 + -6016;
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

__attribute__((alias("__imp__sub_83806554"))) PPC_WEAK_FUNC(sub_83806554);
PPC_FUNC_IMPL(__imp__sub_83806554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806558"))) PPC_WEAK_FUNC(sub_83806558);
PPC_FUNC_IMPL(__imp__sub_83806558) {
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
	// bl 0x838064c8
	ctx.lr = 0x8380656C;
	sub_838064C8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7756
	ctx.r4.s64 = ctx.r11.s64 + 7756;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83806584;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83806590;
	sub_8246BE10(ctx, base);
	// bl 0x8251af80
	ctx.lr = 0x83806594;
	sub_8251AF80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x838065A0;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_838065B4"))) PPC_WEAK_FUNC(sub_838065B4);
PPC_FUNC_IMPL(__imp__sub_838065B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838065B8"))) PPC_WEAK_FUNC(sub_838065B8);
PPC_FUNC_IMPL(__imp__sub_838065B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13088
	ctx.r10.s64 = ctx.r11.s64 + 13088;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8251b278
	ctx.lr = 0x838065E4;
	sub_8251B278(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83806604
	if (cr6.eq) goto loc_83806604;
	// bl 0x82595188
	ctx.lr = 0x838065F4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83806604;
	sub_825952B8(ctx, base);
loc_83806604:
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

__attribute__((alias("__imp__sub_83806620"))) PPC_WEAK_FUNC(sub_83806620);
PPC_FUNC_IMPL(__imp__sub_83806620) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83806670
	if (cr6.eq) goto loc_83806670;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x83806650;
	sub_82595150(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83806668;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x83806670;
	sub_82595170(ctx, base);
loc_83806670:
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

__attribute__((alias("__imp__sub_83806684"))) PPC_WEAK_FUNC(sub_83806684);
PPC_FUNC_IMPL(__imp__sub_83806684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806688"))) PPC_WEAK_FUNC(sub_83806688);
PPC_FUNC_IMPL(__imp__sub_83806688) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-5544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5544);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838066f8
	if (!cr6.eq) goto loc_838066F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-5544(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5544, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-5776
	ctx.r31.s64 = ctx.r9.s64 + -5776;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,176
	ctx.r4.s64 = 176;
	// bl 0x82477fc8
	ctx.lr = 0x838066D4;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19848
	ctx.r3.s64 = ctx.r8.s64 + -19848;
	// bl 0x831cdcc8
	ctx.lr = 0x838066E0;
	sub_831CDCC8(ctx, base);
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
loc_838066F8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-5776
	ctx.r3.s64 = ctx.r11.s64 + -5776;
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

__attribute__((alias("__imp__sub_83806714"))) PPC_WEAK_FUNC(sub_83806714);
PPC_FUNC_IMPL(__imp__sub_83806714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806718"))) PPC_WEAK_FUNC(sub_83806718);
PPC_FUNC_IMPL(__imp__sub_83806718) {
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
	// bl 0x82467738
	ctx.lr = 0x83806730;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,176
	ctx.r3.s64 = 176;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83806744;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83806768
	if (cr6.eq) goto loc_83806768;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83805d20
	ctx.lr = 0x83806754;
	sub_83805D20(ctx, base);
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
loc_83806768:
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

__attribute__((alias("__imp__sub_83806780"))) PPC_WEAK_FUNC(sub_83806780);
PPC_FUNC_IMPL(__imp__sub_83806780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83806788;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x838067AC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838067d4
	if (cr6.eq) goto loc_838067D4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8251b010
	ctx.lr = 0x838067C0;
	sub_8251B010(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,13256
	ctx.r10.s64 = ctx.r11.s64 + 13256;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x838067d8
	goto loc_838067D8;
loc_838067D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_838067D8:
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x838067E4;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838067F0"))) PPC_WEAK_FUNC(sub_838067F0);
PPC_FUNC_IMPL(__imp__sub_838067F0) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241fb00
	ctx.lr = 0x83806814;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b40a8
	ctx.lr = 0x8380681C;
	sub_824B40A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83806834
	if (cr6.eq) goto loc_83806834;
	// bl 0x8248b818
	ctx.lr = 0x83806830;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83806834:
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

__attribute__((alias("__imp__sub_8380684C"))) PPC_WEAK_FUNC(sub_8380684C);
PPC_FUNC_IMPL(__imp__sub_8380684C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806850"))) PPC_WEAK_FUNC(sub_83806850);
PPC_FUNC_IMPL(__imp__sub_83806850) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-5304(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5304);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838068c0
	if (!cr6.eq) goto loc_838068C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-5304(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5304, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-5536
	ctx.r31.s64 = ctx.r9.s64 + -5536;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x82477fc8
	ctx.lr = 0x8380689C;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19832
	ctx.r3.s64 = ctx.r8.s64 + -19832;
	// bl 0x831cdcc8
	ctx.lr = 0x838068A8;
	sub_831CDCC8(ctx, base);
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
loc_838068C0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-5536
	ctx.r3.s64 = ctx.r11.s64 + -5536;
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

__attribute__((alias("__imp__sub_838068DC"))) PPC_WEAK_FUNC(sub_838068DC);
PPC_FUNC_IMPL(__imp__sub_838068DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838068E0"))) PPC_WEAK_FUNC(sub_838068E0);
PPC_FUNC_IMPL(__imp__sub_838068E0) {
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
	// bl 0x83806850
	ctx.lr = 0x838068F4;
	sub_83806850(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,9804
	ctx.r4.s64 = ctx.r11.s64 + 9804;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8380690C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83806918;
	sub_8246BE10(ctx, base);
	// bl 0x8251af80
	ctx.lr = 0x8380691C;
	sub_8251AF80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83806928;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_8380693C"))) PPC_WEAK_FUNC(sub_8380693C);
PPC_FUNC_IMPL(__imp__sub_8380693C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806940"))) PPC_WEAK_FUNC(sub_83806940);
PPC_FUNC_IMPL(__imp__sub_83806940) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13256
	ctx.r10.s64 = ctx.r11.s64 + 13256;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8251b278
	ctx.lr = 0x8380696C;
	sub_8251B278(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8380698c
	if (cr6.eq) goto loc_8380698C;
	// bl 0x82595188
	ctx.lr = 0x8380697C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8380698C;
	sub_825952B8(ctx, base);
loc_8380698C:
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

__attribute__((alias("__imp__sub_838069A8"))) PPC_WEAK_FUNC(sub_838069A8);
PPC_FUNC_IMPL(__imp__sub_838069A8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-5064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5064);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83806a18
	if (!cr6.eq) goto loc_83806A18;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-5064(r10)
	PPC_STORE_U32(ctx.r10.u32 + -5064, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-5296
	ctx.r31.s64 = ctx.r9.s64 + -5296;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// bl 0x82477fc8
	ctx.lr = 0x838069F4;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19816
	ctx.r3.s64 = ctx.r8.s64 + -19816;
	// bl 0x831cdcc8
	ctx.lr = 0x83806A00;
	sub_831CDCC8(ctx, base);
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
loc_83806A18:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-5296
	ctx.r3.s64 = ctx.r11.s64 + -5296;
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

__attribute__((alias("__imp__sub_83806A34"))) PPC_WEAK_FUNC(sub_83806A34);
PPC_FUNC_IMPL(__imp__sub_83806A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806A38"))) PPC_WEAK_FUNC(sub_83806A38);
PPC_FUNC_IMPL(__imp__sub_83806A38) {
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
	// bl 0x82467738
	ctx.lr = 0x83806A50;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83806A64;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83806a88
	if (cr6.eq) goto loc_83806A88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83805df8
	ctx.lr = 0x83806A74;
	sub_83805DF8(ctx, base);
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
loc_83806A88:
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

__attribute__((alias("__imp__sub_83806AA0"))) PPC_WEAK_FUNC(sub_83806AA0);
PPC_FUNC_IMPL(__imp__sub_83806AA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83806AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,168
	ctx.r4.s64 = 168;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83806ACC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83806ae4
	if (cr6.eq) goto loc_83806AE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83805f68
	ctx.lr = 0x83806ADC;
	sub_83805F68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83806ae8
	goto loc_83806AE8;
loc_83806AE4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83806AE8:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x83806AF4;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83806B00"))) PPC_WEAK_FUNC(sub_83806B00);
PPC_FUNC_IMPL(__imp__sub_83806B00) {
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
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82573c50
	ctx.lr = 0x83806B24;
	sub_82573C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b40a8
	ctx.lr = 0x83806B2C;
	sub_824B40A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83806b44
	if (cr6.eq) goto loc_83806B44;
	// bl 0x8248b818
	ctx.lr = 0x83806B40;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83806B44:
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

__attribute__((alias("__imp__sub_83806B5C"))) PPC_WEAK_FUNC(sub_83806B5C);
PPC_FUNC_IMPL(__imp__sub_83806B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806B60"))) PPC_WEAK_FUNC(sub_83806B60);
PPC_FUNC_IMPL(__imp__sub_83806B60) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-4824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4824);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83806bd0
	if (!cr6.eq) goto loc_83806BD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-4824(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4824, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-5056
	ctx.r31.s64 = ctx.r9.s64 + -5056;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,168
	ctx.r4.s64 = 168;
	// bl 0x82477fc8
	ctx.lr = 0x83806BAC;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19800
	ctx.r3.s64 = ctx.r8.s64 + -19800;
	// bl 0x831cdcc8
	ctx.lr = 0x83806BB8;
	sub_831CDCC8(ctx, base);
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
loc_83806BD0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-5056
	ctx.r3.s64 = ctx.r11.s64 + -5056;
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

__attribute__((alias("__imp__sub_83806BEC"))) PPC_WEAK_FUNC(sub_83806BEC);
PPC_FUNC_IMPL(__imp__sub_83806BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806BF0"))) PPC_WEAK_FUNC(sub_83806BF0);
PPC_FUNC_IMPL(__imp__sub_83806BF0) {
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
	// bl 0x83806b60
	ctx.lr = 0x83806C04;
	sub_83806B60(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,10660
	ctx.r4.s64 = ctx.r11.s64 + 10660;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83806C1C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83806C28;
	sub_8246BE10(ctx, base);
	// bl 0x8251af80
	ctx.lr = 0x83806C2C;
	sub_8251AF80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83806C38;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_83806C4C"))) PPC_WEAK_FUNC(sub_83806C4C);
PPC_FUNC_IMPL(__imp__sub_83806C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806C50"))) PPC_WEAK_FUNC(sub_83806C50);
PPC_FUNC_IMPL(__imp__sub_83806C50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13424
	ctx.r10.s64 = ctx.r11.s64 + 13424;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8251b278
	ctx.lr = 0x83806C7C;
	sub_8251B278(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83806c9c
	if (cr6.eq) goto loc_83806C9C;
	// bl 0x82595188
	ctx.lr = 0x83806C8C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83806C9C;
	sub_825952B8(ctx, base);
loc_83806C9C:
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

__attribute__((alias("__imp__sub_83806CB8"))) PPC_WEAK_FUNC(sub_83806CB8);
PPC_FUNC_IMPL(__imp__sub_83806CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83806CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83806CE0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83806d10
	if (cr6.eq) goto loc_83806D10;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// addi r10,r11,13408
	ctx.r10.s64 = ctx.r11.s64 + 13408;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,104
	ctx.r5.s64 = 104;
	// bl 0x831ce980
	ctx.lr = 0x83806D08;
	sub_831CE980(ctx, base);
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// b 0x83806d14
	goto loc_83806D14;
loc_83806D10:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_83806D14:
	// bl 0x8353f578
	ctx.lr = 0x83806D18;
	sub_8353F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f700
	ctx.lr = 0x83806D20;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x83806D24;
	sub_8353F588(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83806d5c
	if (cr6.eq) goto loc_83806D5C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83806D3C;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83806D54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83806D5C;
	sub_82595170(ctx, base);
loc_83806D5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83806D64"))) PPC_WEAK_FUNC(sub_83806D64);
PPC_FUNC_IMPL(__imp__sub_83806D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806D68"))) PPC_WEAK_FUNC(sub_83806D68);
PPC_FUNC_IMPL(__imp__sub_83806D68) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-4584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4584);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83806dd8
	if (!cr6.eq) goto loc_83806DD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-4584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4584, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-4816
	ctx.r31.s64 = ctx.r9.s64 + -4816;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x82477fc8
	ctx.lr = 0x83806DB4;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19784
	ctx.r3.s64 = ctx.r8.s64 + -19784;
	// bl 0x831cdcc8
	ctx.lr = 0x83806DC0;
	sub_831CDCC8(ctx, base);
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
loc_83806DD8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-4816
	ctx.r3.s64 = ctx.r11.s64 + -4816;
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

__attribute__((alias("__imp__sub_83806DF4"))) PPC_WEAK_FUNC(sub_83806DF4);
PPC_FUNC_IMPL(__imp__sub_83806DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806DF8"))) PPC_WEAK_FUNC(sub_83806DF8);
PPC_FUNC_IMPL(__imp__sub_83806DF8) {
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
	// bl 0x82467738
	ctx.lr = 0x83806E10;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,512
	ctx.r3.s64 = 512;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83806E24;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83806e48
	if (cr6.eq) goto loc_83806E48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83805ff8
	ctx.lr = 0x83806E34;
	sub_83805FF8(ctx, base);
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
loc_83806E48:
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

__attribute__((alias("__imp__sub_83806E60"))) PPC_WEAK_FUNC(sub_83806E60);
PPC_FUNC_IMPL(__imp__sub_83806E60) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-4344(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4344);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83806ed0
	if (!cr6.eq) goto loc_83806ED0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-4344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4344, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-4576
	ctx.r31.s64 = ctx.r9.s64 + -4576;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,320
	ctx.r4.s64 = 320;
	// bl 0x82477fc8
	ctx.lr = 0x83806EAC;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19768
	ctx.r3.s64 = ctx.r8.s64 + -19768;
	// bl 0x831cdcc8
	ctx.lr = 0x83806EB8;
	sub_831CDCC8(ctx, base);
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
loc_83806ED0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-4576
	ctx.r3.s64 = ctx.r11.s64 + -4576;
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

__attribute__((alias("__imp__sub_83806EEC"))) PPC_WEAK_FUNC(sub_83806EEC);
PPC_FUNC_IMPL(__imp__sub_83806EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806EF0"))) PPC_WEAK_FUNC(sub_83806EF0);
PPC_FUNC_IMPL(__imp__sub_83806EF0) {
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
	// bl 0x83806e60
	ctx.lr = 0x83806F04;
	sub_83806E60(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,12872
	ctx.r4.s64 = ctx.r11.s64 + 12872;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83806F1C;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83806F28;
	sub_8246BE10(ctx, base);
	// bl 0x824fd170
	ctx.lr = 0x83806F2C;
	sub_824FD170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83806F38;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_83806F4C"))) PPC_WEAK_FUNC(sub_83806F4C);
PPC_FUNC_IMPL(__imp__sub_83806F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83806F50"))) PPC_WEAK_FUNC(sub_83806F50);
PPC_FUNC_IMPL(__imp__sub_83806F50) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13592
	ctx.r10.s64 = ctx.r11.s64 + 13592;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824fcd10
	ctx.lr = 0x83806F7C;
	sub_824FCD10(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83806f9c
	if (cr6.eq) goto loc_83806F9C;
	// bl 0x82595188
	ctx.lr = 0x83806F8C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83806F9C;
	sub_825952B8(ctx, base);
loc_83806F9C:
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

__attribute__((alias("__imp__sub_83806FB8"))) PPC_WEAK_FUNC(sub_83806FB8);
PPC_FUNC_IMPL(__imp__sub_83806FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83806FC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83806FE0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83807018
	if (cr6.eq) goto loc_83807018;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r10,r11,13576
	ctx.r10.s64 = ctx.r11.s64 + 13576;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,196
	ctx.r5.s64 = 196;
	// bl 0x831ce980
	ctx.lr = 0x83807008;
	sub_831CE980(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r29,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r29.u8);
	// stw r9,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r9.u32);
	// b 0x8380701c
	goto loc_8380701C;
loc_83807018:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8380701C:
	// bl 0x8353f578
	ctx.lr = 0x83807020;
	sub_8353F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f700
	ctx.lr = 0x83807028;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x8380702C;
	sub_8353F588(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83807064
	if (cr6.eq) goto loc_83807064;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83807044;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8380705C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83807064;
	sub_82595170(ctx, base);
loc_83807064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380706C"))) PPC_WEAK_FUNC(sub_8380706C);
PPC_FUNC_IMPL(__imp__sub_8380706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807070"))) PPC_WEAK_FUNC(sub_83807070);
PPC_FUNC_IMPL(__imp__sub_83807070) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-4104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4104);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838070e0
	if (!cr6.eq) goto loc_838070E0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-4104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4104, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-4336
	ctx.r31.s64 = ctx.r9.s64 + -4336;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// bl 0x82477fc8
	ctx.lr = 0x838070BC;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19752
	ctx.r3.s64 = ctx.r8.s64 + -19752;
	// bl 0x831cdcc8
	ctx.lr = 0x838070C8;
	sub_831CDCC8(ctx, base);
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
loc_838070E0:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-4336
	ctx.r3.s64 = ctx.r11.s64 + -4336;
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

__attribute__((alias("__imp__sub_838070FC"))) PPC_WEAK_FUNC(sub_838070FC);
PPC_FUNC_IMPL(__imp__sub_838070FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807100"))) PPC_WEAK_FUNC(sub_83807100);
PPC_FUNC_IMPL(__imp__sub_83807100) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-3864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3864);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83807170
	if (!cr6.eq) goto loc_83807170;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-3864(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3864, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-4096
	ctx.r31.s64 = ctx.r9.s64 + -4096;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,408
	ctx.r4.s64 = 408;
	// bl 0x82477fc8
	ctx.lr = 0x8380714C;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19736
	ctx.r3.s64 = ctx.r8.s64 + -19736;
	// bl 0x831cdcc8
	ctx.lr = 0x83807158;
	sub_831CDCC8(ctx, base);
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
loc_83807170:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-4096
	ctx.r3.s64 = ctx.r11.s64 + -4096;
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

__attribute__((alias("__imp__sub_8380718C"))) PPC_WEAK_FUNC(sub_8380718C);
PPC_FUNC_IMPL(__imp__sub_8380718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807190"))) PPC_WEAK_FUNC(sub_83807190);
PPC_FUNC_IMPL(__imp__sub_83807190) {
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
	// bl 0x83807100
	ctx.lr = 0x838071A4;
	sub_83807100(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,12976
	ctx.r4.s64 = ctx.r11.s64 + 12976;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x838071BC;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x838071C8;
	sub_8246BE10(ctx, base);
	// bl 0x8251af80
	ctx.lr = 0x838071CC;
	sub_8251AF80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x838071D8;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_838071EC"))) PPC_WEAK_FUNC(sub_838071EC);
PPC_FUNC_IMPL(__imp__sub_838071EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838071F0"))) PPC_WEAK_FUNC(sub_838071F0);
PPC_FUNC_IMPL(__imp__sub_838071F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x838064c8
	sub_838064C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838071F4"))) PPC_WEAK_FUNC(sub_838071F4);
PPC_FUNC_IMPL(__imp__sub_838071F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838071F8"))) PPC_WEAK_FUNC(sub_838071F8);
PPC_FUNC_IMPL(__imp__sub_838071F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83806688
	sub_83806688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838071FC"))) PPC_WEAK_FUNC(sub_838071FC);
PPC_FUNC_IMPL(__imp__sub_838071FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807200"))) PPC_WEAK_FUNC(sub_83807200);
PPC_FUNC_IMPL(__imp__sub_83807200) {
	PPC_FUNC_PROLOGUE();
	// b 0x83806850
	sub_83806850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83807204"))) PPC_WEAK_FUNC(sub_83807204);
PPC_FUNC_IMPL(__imp__sub_83807204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807208"))) PPC_WEAK_FUNC(sub_83807208);
PPC_FUNC_IMPL(__imp__sub_83807208) {
	PPC_FUNC_PROLOGUE();
	// b 0x838069a8
	sub_838069A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380720C"))) PPC_WEAK_FUNC(sub_8380720C);
PPC_FUNC_IMPL(__imp__sub_8380720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807210"))) PPC_WEAK_FUNC(sub_83807210);
PPC_FUNC_IMPL(__imp__sub_83807210) {
	PPC_FUNC_PROLOGUE();
	// b 0x83806b60
	sub_83806B60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83807214"))) PPC_WEAK_FUNC(sub_83807214);
PPC_FUNC_IMPL(__imp__sub_83807214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807218"))) PPC_WEAK_FUNC(sub_83807218);
PPC_FUNC_IMPL(__imp__sub_83807218) {
	PPC_FUNC_PROLOGUE();
	// b 0x83806d68
	sub_83806D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380721C"))) PPC_WEAK_FUNC(sub_8380721C);
PPC_FUNC_IMPL(__imp__sub_8380721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807220"))) PPC_WEAK_FUNC(sub_83807220);
PPC_FUNC_IMPL(__imp__sub_83807220) {
	PPC_FUNC_PROLOGUE();
	// b 0x83806e60
	sub_83806E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83807224"))) PPC_WEAK_FUNC(sub_83807224);
PPC_FUNC_IMPL(__imp__sub_83807224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83807228"))) PPC_WEAK_FUNC(sub_83807228);
PPC_FUNC_IMPL(__imp__sub_83807228) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,9792
	ctx.r31.s64 = ctx.r11.s64 + 9792;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r31,-2016
	ctx.r4.s64 = ctx.r31.s64 + -2016;
	// bl 0x82485ec8
	ctx.lr = 0x83807254;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-2000
	ctx.r5.s64 = ctx.r31.s64 + -2000;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x83807264;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1984
	ctx.r5.s64 = ctx.r31.s64 + -1984;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486320
	ctx.lr = 0x83807274;
	sub_82486320(ctx, base);
	// addi r5,r31,-1972
	ctx.r5.s64 = ctx.r31.s64 + -1972;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x83807284;
	sub_82486320(ctx, base);
	// addi r4,r31,-1952
	ctx.r4.s64 = ctx.r31.s64 + -1952;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82485ec8
	ctx.lr = 0x83807294;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-1936
	ctx.r5.s64 = ctx.r31.s64 + -1936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x838072A4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1924
	ctx.r5.s64 = ctx.r31.s64 + -1924;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486320
	ctx.lr = 0x838072B4;
	sub_82486320(ctx, base);
	// addi r5,r31,-1916
	ctx.r5.s64 = ctx.r31.s64 + -1916;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x838072C4;
	sub_82486320(ctx, base);
	// addi r4,r31,-1900
	ctx.r4.s64 = ctx.r31.s64 + -1900;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82485ec8
	ctx.lr = 0x838072D4;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-1884
	ctx.r5.s64 = ctx.r31.s64 + -1884;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x838072E4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1872
	ctx.r5.s64 = ctx.r31.s64 + -1872;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486320
	ctx.lr = 0x838072F4;
	sub_82486320(ctx, base);
	// addi r5,r31,-1860
	ctx.r5.s64 = ctx.r31.s64 + -1860;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x83807304;
	sub_82486320(ctx, base);
	// addi r4,r31,-1848
	ctx.r4.s64 = ctx.r31.s64 + -1848;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82485ec8
	ctx.lr = 0x83807314;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-1824
	ctx.r5.s64 = ctx.r31.s64 + -1824;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x83807324;
	sub_82486320(ctx, base);
	// addi r5,r31,-1816
	ctx.r5.s64 = ctx.r31.s64 + -1816;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x83807334;
	sub_82486320(ctx, base);
	// bl 0x83806688
	ctx.lr = 0x83807338;
	sub_83806688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-1808
	ctx.r4.s64 = ctx.r31.s64 + -1808;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8380734C;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8246be10
	ctx.lr = 0x83807358;
	sub_8246BE10(ctx, base);
	// addi r4,r31,-1792
	ctx.r4.s64 = ctx.r31.s64 + -1792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x83807364;
	sub_8246C3A0(ctx, base);
	// addi r4,r31,-1784
	ctx.r4.s64 = ctx.r31.s64 + -1784;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83807374;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x8380737C;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380739c
	if (cr6.eq) goto loc_8380739C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83807394;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8380739C:
	// bl 0x824b4418
	ctx.lr = 0x838073A0;
	sub_824B4418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x838073AC;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x838073C0;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838073dc
	if (cr6.eq) goto loc_838073DC;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,13712
	ctx.r9.s64 = ctx.r10.s64 + 13712;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x838073e0
	goto loc_838073E0;
loc_838073DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_838073E0:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// lis r11,-31872
	ctx.r11.s64 = -2088763392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,26392
	ctx.r4.s64 = ctx.r11.s64 + 26392;
	// bl 0x8246be80
	ctx.lr = 0x838073F4;
	sub_8246BE80(ctx, base);
	// addi r5,r31,-1776
	ctx.r5.s64 = ctx.r31.s64 + -1776;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807408;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1764
	ctx.r6.s64 = ctx.r31.s64 + -1764;
	// addi r5,r31,-1760
	ctx.r5.s64 = ctx.r31.s64 + -1760;
	// addi r4,r31,-1748
	ctx.r4.s64 = ctx.r31.s64 + -1748;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807420;
	sub_82479460(ctx, base);
	// addi r5,r31,-1736
	ctx.r5.s64 = ctx.r31.s64 + -1736;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807434;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1724
	ctx.r6.s64 = ctx.r31.s64 + -1724;
	// addi r5,r31,-1720
	ctx.r5.s64 = ctx.r31.s64 + -1720;
	// addi r4,r31,-1708
	ctx.r4.s64 = ctx.r31.s64 + -1708;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380744C;
	sub_82479460(ctx, base);
	// addi r5,r31,-1696
	ctx.r5.s64 = ctx.r31.s64 + -1696;
	// li r6,121
	ctx.r6.s64 = 121;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807460;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1680
	ctx.r6.s64 = ctx.r31.s64 + -1680;
	// addi r5,r31,-1676
	ctx.r5.s64 = ctx.r31.s64 + -1676;
	// addi r4,r31,-1660
	ctx.r4.s64 = ctx.r31.s64 + -1660;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807478;
	sub_82479460(ctx, base);
	// addi r5,r31,-1644
	ctx.r5.s64 = ctx.r31.s64 + -1644;
	// li r6,122
	ctx.r6.s64 = 122;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380748C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1628
	ctx.r6.s64 = ctx.r31.s64 + -1628;
	// addi r5,r31,-1624
	ctx.r5.s64 = ctx.r31.s64 + -1624;
	// addi r4,r31,-1608
	ctx.r4.s64 = ctx.r31.s64 + -1608;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838074A4;
	sub_82479460(ctx, base);
	// addi r5,r31,-1592
	ctx.r5.s64 = ctx.r31.s64 + -1592;
	// li r6,123
	ctx.r6.s64 = 123;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838074B8;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1576
	ctx.r6.s64 = ctx.r31.s64 + -1576;
	// addi r5,r31,-1572
	ctx.r5.s64 = ctx.r31.s64 + -1572;
	// addi r4,r31,-1556
	ctx.r4.s64 = ctx.r31.s64 + -1556;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838074D0;
	sub_82479460(ctx, base);
	// li r6,124
	ctx.r6.s64 = 124;
	// addi r5,r31,-1540
	ctx.r5.s64 = ctx.r31.s64 + -1540;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838074E4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1520
	ctx.r6.s64 = ctx.r31.s64 + -1520;
	// addi r5,r31,-1516
	ctx.r5.s64 = ctx.r31.s64 + -1516;
	// addi r4,r31,-1496
	ctx.r4.s64 = ctx.r31.s64 + -1496;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838074FC;
	sub_82479460(ctx, base);
	// addi r5,r31,-1476
	ctx.r5.s64 = ctx.r31.s64 + -1476;
	// li r6,125
	ctx.r6.s64 = 125;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807510;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1456
	ctx.r6.s64 = ctx.r31.s64 + -1456;
	// addi r5,r31,-1452
	ctx.r5.s64 = ctx.r31.s64 + -1452;
	// addi r4,r31,-1432
	ctx.r4.s64 = ctx.r31.s64 + -1432;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807528;
	sub_82479460(ctx, base);
	// addi r5,r31,-1412
	ctx.r5.s64 = ctx.r31.s64 + -1412;
	// li r6,126
	ctx.r6.s64 = 126;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380753C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1396
	ctx.r6.s64 = ctx.r31.s64 + -1396;
	// addi r5,r31,-1392
	ctx.r5.s64 = ctx.r31.s64 + -1392;
	// addi r4,r31,-1376
	ctx.r4.s64 = ctx.r31.s64 + -1376;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807554;
	sub_82479460(ctx, base);
	// addi r5,r31,-1360
	ctx.r5.s64 = ctx.r31.s64 + -1360;
	// li r6,127
	ctx.r6.s64 = 127;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807568;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1344
	ctx.r6.s64 = ctx.r31.s64 + -1344;
	// addi r5,r31,-1340
	ctx.r5.s64 = ctx.r31.s64 + -1340;
	// addi r4,r31,-1324
	ctx.r4.s64 = ctx.r31.s64 + -1324;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807580;
	sub_82479460(ctx, base);
	// addi r5,r31,-1308
	ctx.r5.s64 = ctx.r31.s64 + -1308;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807594;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1292
	ctx.r6.s64 = ctx.r31.s64 + -1292;
	// addi r5,r31,-1288
	ctx.r5.s64 = ctx.r31.s64 + -1288;
	// addi r4,r31,-1272
	ctx.r4.s64 = ctx.r31.s64 + -1272;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838075AC;
	sub_82479460(ctx, base);
	// addi r5,r31,-1256
	ctx.r5.s64 = ctx.r31.s64 + -1256;
	// li r6,129
	ctx.r6.s64 = 129;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838075C0;
	sub_824788C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,-1240
	ctx.r6.s64 = ctx.r31.s64 + -1240;
	// addi r5,r31,-1236
	ctx.r5.s64 = ctx.r31.s64 + -1236;
	// addi r4,r31,-1220
	ctx.r4.s64 = ctx.r31.s64 + -1220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838075D8;
	sub_82479460(ctx, base);
	// addi r5,r31,-1204
	ctx.r5.s64 = ctx.r31.s64 + -1204;
	// li r6,130
	ctx.r6.s64 = 130;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838075EC;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1184
	ctx.r6.s64 = ctx.r31.s64 + -1184;
	// addi r5,r31,-1180
	ctx.r5.s64 = ctx.r31.s64 + -1180;
	// addi r4,r31,-1160
	ctx.r4.s64 = ctx.r31.s64 + -1160;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807604;
	sub_82479460(ctx, base);
	// addi r5,r31,-1140
	ctx.r5.s64 = ctx.r31.s64 + -1140;
	// li r6,131
	ctx.r6.s64 = 131;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807618;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1116
	ctx.r6.s64 = ctx.r31.s64 + -1116;
	// addi r5,r31,-1112
	ctx.r5.s64 = ctx.r31.s64 + -1112;
	// addi r4,r31,-1088
	ctx.r4.s64 = ctx.r31.s64 + -1088;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807630;
	sub_82479460(ctx, base);
	// addi r5,r31,-1064
	ctx.r5.s64 = ctx.r31.s64 + -1064;
	// li r6,132
	ctx.r6.s64 = 132;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807644;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1040
	ctx.r6.s64 = ctx.r31.s64 + -1040;
	// addi r5,r31,-1036
	ctx.r5.s64 = ctx.r31.s64 + -1036;
	// addi r4,r31,-1012
	ctx.r4.s64 = ctx.r31.s64 + -1012;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380765C;
	sub_82479460(ctx, base);
	// addi r5,r31,-988
	ctx.r5.s64 = ctx.r31.s64 + -988;
	// li r6,133
	ctx.r6.s64 = 133;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807670;
	sub_824788C8(ctx, base);
	// addi r6,r31,-968
	ctx.r6.s64 = ctx.r31.s64 + -968;
	// addi r5,r31,-964
	ctx.r5.s64 = ctx.r31.s64 + -964;
	// addi r4,r31,-944
	ctx.r4.s64 = ctx.r31.s64 + -944;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807688;
	sub_82479460(ctx, base);
	// addi r5,r31,-924
	ctx.r5.s64 = ctx.r31.s64 + -924;
	// li r6,134
	ctx.r6.s64 = 134;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380769C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-904
	ctx.r6.s64 = ctx.r31.s64 + -904;
	// addi r5,r31,-900
	ctx.r5.s64 = ctx.r31.s64 + -900;
	// addi r4,r31,-880
	ctx.r4.s64 = ctx.r31.s64 + -880;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838076B4;
	sub_82479460(ctx, base);
	// addi r5,r31,-860
	ctx.r5.s64 = ctx.r31.s64 + -860;
	// li r6,135
	ctx.r6.s64 = 135;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838076C8;
	sub_824788C8(ctx, base);
	// addi r6,r31,-840
	ctx.r6.s64 = ctx.r31.s64 + -840;
	// addi r5,r31,-836
	ctx.r5.s64 = ctx.r31.s64 + -836;
	// addi r4,r31,-816
	ctx.r4.s64 = ctx.r31.s64 + -816;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838076E0;
	sub_82479460(ctx, base);
	// addi r5,r31,-796
	ctx.r5.s64 = ctx.r31.s64 + -796;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838076F4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-776
	ctx.r6.s64 = ctx.r31.s64 + -776;
	// addi r5,r31,-772
	ctx.r5.s64 = ctx.r31.s64 + -772;
	// addi r4,r31,-752
	ctx.r4.s64 = ctx.r31.s64 + -752;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380770C;
	sub_82479460(ctx, base);
	// addi r5,r31,-732
	ctx.r5.s64 = ctx.r31.s64 + -732;
	// li r6,137
	ctx.r6.s64 = 137;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807720;
	sub_824788C8(ctx, base);
	// addi r6,r31,-716
	ctx.r6.s64 = ctx.r31.s64 + -716;
	// addi r5,r31,-712
	ctx.r5.s64 = ctx.r31.s64 + -712;
	// addi r4,r31,-696
	ctx.r4.s64 = ctx.r31.s64 + -696;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807738;
	sub_82479460(ctx, base);
	// addi r5,r31,-680
	ctx.r5.s64 = ctx.r31.s64 + -680;
	// li r6,138
	ctx.r6.s64 = 138;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380774C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-660
	ctx.r6.s64 = ctx.r31.s64 + -660;
	// addi r5,r31,-656
	ctx.r5.s64 = ctx.r31.s64 + -656;
	// addi r4,r31,-636
	ctx.r4.s64 = ctx.r31.s64 + -636;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807764;
	sub_82479460(ctx, base);
	// addi r5,r31,-616
	ctx.r5.s64 = ctx.r31.s64 + -616;
	// li r6,139
	ctx.r6.s64 = 139;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807778;
	sub_824788C8(ctx, base);
	// addi r6,r31,-596
	ctx.r6.s64 = ctx.r31.s64 + -596;
	// addi r5,r31,-592
	ctx.r5.s64 = ctx.r31.s64 + -592;
	// addi r4,r31,-572
	ctx.r4.s64 = ctx.r31.s64 + -572;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807790;
	sub_82479460(ctx, base);
	// addi r5,r31,-552
	ctx.r5.s64 = ctx.r31.s64 + -552;
	// li r6,140
	ctx.r6.s64 = 140;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838077A4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-532
	ctx.r6.s64 = ctx.r31.s64 + -532;
	// addi r5,r31,-528
	ctx.r5.s64 = ctx.r31.s64 + -528;
	// addi r4,r31,-508
	ctx.r4.s64 = ctx.r31.s64 + -508;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838077BC;
	sub_82479460(ctx, base);
	// addi r7,r31,-488
	ctx.r7.s64 = ctx.r31.s64 + -488;
	// addi r5,r31,-472
	ctx.r5.s64 = ctx.r31.s64 + -472;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478958
	ctx.lr = 0x838077D4;
	sub_82478958(ctx, base);
	// addi r6,r31,-464
	ctx.r6.s64 = ctx.r31.s64 + -464;
	// addi r5,r31,-460
	ctx.r5.s64 = ctx.r31.s64 + -460;
	// addi r4,r31,-452
	ctx.r4.s64 = ctx.r31.s64 + -452;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838077EC;
	sub_82479460(ctx, base);
	// addi r5,r31,-444
	ctx.r5.s64 = ctx.r31.s64 + -444;
	// li r6,148
	ctx.r6.s64 = 148;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807800;
	sub_824788C8(ctx, base);
	// addi r6,r31,-432
	ctx.r6.s64 = ctx.r31.s64 + -432;
	// addi r5,r31,-428
	ctx.r5.s64 = ctx.r31.s64 + -428;
	// addi r4,r31,-416
	ctx.r4.s64 = ctx.r31.s64 + -416;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807818;
	sub_82479460(ctx, base);
	// addi r7,r31,-404
	ctx.r7.s64 = ctx.r31.s64 + -404;
	// addi r5,r31,-388
	ctx.r5.s64 = ctx.r31.s64 + -388;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478958
	ctx.lr = 0x83807830;
	sub_82478958(ctx, base);
	// addi r6,r31,-376
	ctx.r6.s64 = ctx.r31.s64 + -376;
	// addi r5,r31,-372
	ctx.r5.s64 = ctx.r31.s64 + -372;
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807848;
	sub_82479460(ctx, base);
	// addi r5,r31,-348
	ctx.r5.s64 = ctx.r31.s64 + -348;
	// li r6,156
	ctx.r6.s64 = 156;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380785C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-340
	ctx.r6.s64 = ctx.r31.s64 + -340;
	// addi r5,r31,-336
	ctx.r5.s64 = ctx.r31.s64 + -336;
	// addi r4,r31,-328
	ctx.r4.s64 = ctx.r31.s64 + -328;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807874;
	sub_82479460(ctx, base);
	// addi r5,r31,-320
	ctx.r5.s64 = ctx.r31.s64 + -320;
	// li r6,157
	ctx.r6.s64 = 157;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807888;
	sub_824788C8(ctx, base);
	// addi r6,r31,-308
	ctx.r6.s64 = ctx.r31.s64 + -308;
	// addi r5,r31,-304
	ctx.r5.s64 = ctx.r31.s64 + -304;
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838078A0;
	sub_82479460(ctx, base);
	// addi r7,r31,-280
	ctx.r7.s64 = ctx.r31.s64 + -280;
	// addi r5,r31,-264
	ctx.r5.s64 = ctx.r31.s64 + -264;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478958
	ctx.lr = 0x838078B8;
	sub_82478958(ctx, base);
	// addi r6,r31,-252
	ctx.r6.s64 = ctx.r31.s64 + -252;
	// addi r5,r31,-248
	ctx.r5.s64 = ctx.r31.s64 + -248;
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838078D0;
	sub_82479460(ctx, base);
	// addi r7,r31,-224
	ctx.r7.s64 = ctx.r31.s64 + -224;
	// addi r5,r31,-200
	ctx.r5.s64 = ctx.r31.s64 + -200;
	// li r6,164
	ctx.r6.s64 = 164;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478958
	ctx.lr = 0x838078E8;
	sub_82478958(ctx, base);
	// addi r6,r31,-184
	ctx.r6.s64 = ctx.r31.s64 + -184;
	// addi r5,r31,-180
	ctx.r5.s64 = ctx.r31.s64 + -180;
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807900;
	sub_82479460(ctx, base);
	// addi r5,r31,-148
	ctx.r5.s64 = ctx.r31.s64 + -148;
	// li r6,168
	ctx.r6.s64 = 168;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807914;
	sub_824788C8(ctx, base);
	// addi r6,r31,-136
	ctx.r6.s64 = ctx.r31.s64 + -136;
	// addi r5,r31,-132
	ctx.r5.s64 = ctx.r31.s64 + -132;
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380792C;
	sub_82479460(ctx, base);
	// addi r5,r31,-108
	ctx.r5.s64 = ctx.r31.s64 + -108;
	// li r6,169
	ctx.r6.s64 = 169;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807940;
	sub_824788C8(ctx, base);
	// addi r6,r31,-96
	ctx.r6.s64 = ctx.r31.s64 + -96;
	// addi r5,r31,-92
	ctx.r5.s64 = ctx.r31.s64 + -92;
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807958;
	sub_82479460(ctx, base);
	// addi r5,r31,-68
	ctx.r5.s64 = ctx.r31.s64 + -68;
	// li r6,170
	ctx.r6.s64 = 170;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380796C;
	sub_824788C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,-56
	ctx.r6.s64 = ctx.r31.s64 + -56;
	// addi r5,r31,-52
	ctx.r5.s64 = ctx.r31.s64 + -52;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807984;
	sub_82479460(ctx, base);
	// addi r5,r31,-28
	ctx.r5.s64 = ctx.r31.s64 + -28;
	// li r6,171
	ctx.r6.s64 = 171;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807998;
	sub_824788C8(ctx, base);
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838079B0;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_838079C8"))) PPC_WEAK_FUNC(sub_838079C8);
PPC_FUNC_IMPL(__imp__sub_838079C8) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,10648
	ctx.r31.s64 = ctx.r11.s64 + 10648;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r31,-824
	ctx.r4.s64 = ctx.r31.s64 + -824;
	// bl 0x82485ec8
	ctx.lr = 0x838079F4;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-808
	ctx.r5.s64 = ctx.r31.s64 + -808;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x83807A04;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-788
	ctx.r5.s64 = ctx.r31.s64 + -788;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486320
	ctx.lr = 0x83807A14;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-772
	ctx.r5.s64 = ctx.r31.s64 + -772;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82486320
	ctx.lr = 0x83807A24;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-756
	ctx.r5.s64 = ctx.r31.s64 + -756;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82486320
	ctx.lr = 0x83807A34;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-740
	ctx.r5.s64 = ctx.r31.s64 + -740;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82486320
	ctx.lr = 0x83807A44;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-724
	ctx.r5.s64 = ctx.r31.s64 + -724;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82486320
	ctx.lr = 0x83807A54;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-708
	ctx.r5.s64 = ctx.r31.s64 + -708;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82486320
	ctx.lr = 0x83807A64;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-684
	ctx.r5.s64 = ctx.r31.s64 + -684;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82486320
	ctx.lr = 0x83807A74;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-660
	ctx.r5.s64 = ctx.r31.s64 + -660;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82486320
	ctx.lr = 0x83807A84;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-644
	ctx.r5.s64 = ctx.r31.s64 + -644;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82486320
	ctx.lr = 0x83807A94;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-628
	ctx.r5.s64 = ctx.r31.s64 + -628;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82486320
	ctx.lr = 0x83807AA4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-604
	ctx.r5.s64 = ctx.r31.s64 + -604;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82486320
	ctx.lr = 0x83807AB4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-580
	ctx.r5.s64 = ctx.r31.s64 + -580;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82486320
	ctx.lr = 0x83807AC4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-564
	ctx.r5.s64 = ctx.r31.s64 + -564;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82486320
	ctx.lr = 0x83807AD4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-544
	ctx.r5.s64 = ctx.r31.s64 + -544;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82486320
	ctx.lr = 0x83807AE4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-512
	ctx.r5.s64 = ctx.r31.s64 + -512;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82486320
	ctx.lr = 0x83807AF4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-484
	ctx.r5.s64 = ctx.r31.s64 + -484;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82486320
	ctx.lr = 0x83807B04;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-456
	ctx.r5.s64 = ctx.r31.s64 + -456;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82486320
	ctx.lr = 0x83807B14;
	sub_82486320(ctx, base);
	// addi r5,r31,-428
	ctx.r5.s64 = ctx.r31.s64 + -428;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82486320
	ctx.lr = 0x83807B24;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-392
	ctx.r5.s64 = ctx.r31.s64 + -392;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82486320
	ctx.lr = 0x83807B34;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-372
	ctx.r5.s64 = ctx.r31.s64 + -372;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82486320
	ctx.lr = 0x83807B44;
	sub_82486320(ctx, base);
	// addi r5,r31,-348
	ctx.r5.s64 = ctx.r31.s64 + -348;
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x83807B54;
	sub_82486320(ctx, base);
	// bl 0x838069a8
	ctx.lr = 0x83807B58;
	sub_838069A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-324
	ctx.r4.s64 = ctx.r31.s64 + -324;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83807B6C;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8246be10
	ctx.lr = 0x83807B78;
	sub_8246BE10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-304
	ctx.r4.s64 = ctx.r31.s64 + -304;
	// bl 0x8246c3a0
	ctx.lr = 0x83807B84;
	sub_8246C3A0(ctx, base);
	// addi r4,r31,-296
	ctx.r4.s64 = ctx.r31.s64 + -296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83807B94;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83807B9C;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83807bbc
	if (cr6.eq) goto loc_83807BBC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83807BB4;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83807BBC:
	// bl 0x824b4418
	ctx.lr = 0x83807BC0;
	sub_824B4418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x83807BCC;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83807BE0;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83807bfc
	if (cr6.eq) goto loc_83807BFC;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,13720
	ctx.r9.s64 = ctx.r10.s64 + 13720;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x83807c00
	goto loc_83807C00;
loc_83807BFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83807C00:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// lis r11,-31872
	ctx.r11.s64 = -2088763392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,27192
	ctx.r4.s64 = ctx.r11.s64 + 27192;
	// bl 0x8246be80
	ctx.lr = 0x83807C14;
	sub_8246BE80(ctx, base);
	// addi r7,r31,-288
	ctx.r7.s64 = ctx.r31.s64 + -288;
	// addi r5,r31,-272
	ctx.r5.s64 = ctx.r31.s64 + -272;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478958
	ctx.lr = 0x83807C2C;
	sub_82478958(ctx, base);
	// addi r6,r31,-264
	ctx.r6.s64 = ctx.r31.s64 + -264;
	// addi r5,r31,-260
	ctx.r5.s64 = ctx.r31.s64 + -260;
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807C44;
	sub_82479460(ctx, base);
	// addi r5,r31,-244
	ctx.r5.s64 = ctx.r31.s64 + -244;
	// li r6,108
	ctx.r6.s64 = 108;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807C58;
	sub_824788C8(ctx, base);
	// addi r6,r31,-232
	ctx.r6.s64 = ctx.r31.s64 + -232;
	// addi r5,r31,-228
	ctx.r5.s64 = ctx.r31.s64 + -228;
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807C70;
	sub_82479460(ctx, base);
	// addi r5,r31,-204
	ctx.r5.s64 = ctx.r31.s64 + -204;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807C84;
	sub_824788C8(ctx, base);
	// addi r6,r31,-196
	ctx.r6.s64 = ctx.r31.s64 + -196;
	// addi r5,r31,-192
	ctx.r5.s64 = ctx.r31.s64 + -192;
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807C9C;
	sub_82479460(ctx, base);
	// addi r5,r31,-176
	ctx.r5.s64 = ctx.r31.s64 + -176;
	// li r6,116
	ctx.r6.s64 = 116;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807CB0;
	sub_824788C8(ctx, base);
	// addi r6,r31,-164
	ctx.r6.s64 = ctx.r31.s64 + -164;
	// addi r5,r31,-160
	ctx.r5.s64 = ctx.r31.s64 + -160;
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807CC8;
	sub_82479460(ctx, base);
	// addi r5,r31,-136
	ctx.r5.s64 = ctx.r31.s64 + -136;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807CDC;
	sub_824788C8(ctx, base);
	// addi r6,r31,-124
	ctx.r6.s64 = ctx.r31.s64 + -124;
	// addi r5,r31,-120
	ctx.r5.s64 = ctx.r31.s64 + -120;
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807CF4;
	sub_82479460(ctx, base);
	// addi r5,r31,-96
	ctx.r5.s64 = ctx.r31.s64 + -96;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807D08;
	sub_824788C8(ctx, base);
	// addi r6,r31,-84
	ctx.r6.s64 = ctx.r31.s64 + -84;
	// addi r5,r31,-80
	ctx.r5.s64 = ctx.r31.s64 + -80;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807D20;
	sub_82479460(ctx, base);
	// addi r5,r31,-56
	ctx.r5.s64 = ctx.r31.s64 + -56;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807D34;
	sub_824788C8(ctx, base);
	// addi r6,r31,-48
	ctx.r6.s64 = ctx.r31.s64 + -48;
	// addi r5,r31,-44
	ctx.r5.s64 = ctx.r31.s64 + -44;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807D4C;
	sub_82479460(ctx, base);
	// addi r5,r31,-28
	ctx.r5.s64 = ctx.r31.s64 + -28;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83807D60;
	sub_824788C8(ctx, base);
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83807D78;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_83807D90"))) PPC_WEAK_FUNC(sub_83807D90);
PPC_FUNC_IMPL(__imp__sub_83807D90) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,12860
	ctx.r31.s64 = ctx.r11.s64 + 12860;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r31,-2176
	ctx.r4.s64 = ctx.r31.s64 + -2176;
	// bl 0x82485ec8
	ctx.lr = 0x83807DBC;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-2160
	ctx.r5.s64 = ctx.r31.s64 + -2160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x83807DCC;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-2144
	ctx.r5.s64 = ctx.r31.s64 + -2144;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486320
	ctx.lr = 0x83807DDC;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-2124
	ctx.r5.s64 = ctx.r31.s64 + -2124;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82486320
	ctx.lr = 0x83807DEC;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-2104
	ctx.r5.s64 = ctx.r31.s64 + -2104;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82486320
	ctx.lr = 0x83807DFC;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-2084
	ctx.r5.s64 = ctx.r31.s64 + -2084;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82486320
	ctx.lr = 0x83807E0C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-2064
	ctx.r5.s64 = ctx.r31.s64 + -2064;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82486320
	ctx.lr = 0x83807E1C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-2044
	ctx.r5.s64 = ctx.r31.s64 + -2044;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82486320
	ctx.lr = 0x83807E2C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-2028
	ctx.r5.s64 = ctx.r31.s64 + -2028;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82486320
	ctx.lr = 0x83807E3C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-2012
	ctx.r5.s64 = ctx.r31.s64 + -2012;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82486320
	ctx.lr = 0x83807E4C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1992
	ctx.r5.s64 = ctx.r31.s64 + -1992;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82486320
	ctx.lr = 0x83807E5C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1972
	ctx.r5.s64 = ctx.r31.s64 + -1972;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82486320
	ctx.lr = 0x83807E6C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1948
	ctx.r5.s64 = ctx.r31.s64 + -1948;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82486320
	ctx.lr = 0x83807E7C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1924
	ctx.r5.s64 = ctx.r31.s64 + -1924;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82486320
	ctx.lr = 0x83807E8C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1900
	ctx.r5.s64 = ctx.r31.s64 + -1900;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82486320
	ctx.lr = 0x83807E9C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1880
	ctx.r5.s64 = ctx.r31.s64 + -1880;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82486320
	ctx.lr = 0x83807EAC;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1856
	ctx.r5.s64 = ctx.r31.s64 + -1856;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82486320
	ctx.lr = 0x83807EBC;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1832
	ctx.r5.s64 = ctx.r31.s64 + -1832;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82486320
	ctx.lr = 0x83807ECC;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1808
	ctx.r5.s64 = ctx.r31.s64 + -1808;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82486320
	ctx.lr = 0x83807EDC;
	sub_82486320(ctx, base);
	// addi r5,r31,-1780
	ctx.r5.s64 = ctx.r31.s64 + -1780;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82486320
	ctx.lr = 0x83807EEC;
	sub_82486320(ctx, base);
	// addi r5,r31,-1760
	ctx.r5.s64 = ctx.r31.s64 + -1760;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x83807EFC;
	sub_82486320(ctx, base);
	// addi r4,r31,-1740
	ctx.r4.s64 = ctx.r31.s64 + -1740;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82485ec8
	ctx.lr = 0x83807F0C;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-1720
	ctx.r5.s64 = ctx.r31.s64 + -1720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x83807F1C;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1708
	ctx.r5.s64 = ctx.r31.s64 + -1708;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486320
	ctx.lr = 0x83807F2C;
	sub_82486320(ctx, base);
	// addi r5,r31,-1692
	ctx.r5.s64 = ctx.r31.s64 + -1692;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x83807F3C;
	sub_82486320(ctx, base);
	// bl 0x83806d68
	ctx.lr = 0x83807F40;
	sub_83806D68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-1676
	ctx.r4.s64 = ctx.r31.s64 + -1676;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83807F54;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8246be10
	ctx.lr = 0x83807F60;
	sub_8246BE10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-1656
	ctx.r4.s64 = ctx.r31.s64 + -1656;
	// bl 0x8246c3a0
	ctx.lr = 0x83807F6C;
	sub_8246C3A0(ctx, base);
	// addi r4,r31,-1648
	ctx.r4.s64 = ctx.r31.s64 + -1648;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83807F7C;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83807F84;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83807fa4
	if (cr6.eq) goto loc_83807FA4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83807F9C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83807FA4:
	// bl 0x824ffb68
	ctx.lr = 0x83807FA8;
	sub_824FFB68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x83807FB4;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83807FC8;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83807fe4
	if (cr6.eq) goto loc_83807FE4;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,13728
	ctx.r9.s64 = ctx.r10.s64 + 13728;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x83807fe8
	goto loc_83807FE8;
loc_83807FE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83807FE8:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// lis r11,-31872
	ctx.r11.s64 = -2088763392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,28152
	ctx.r4.s64 = ctx.r11.s64 + 28152;
	// bl 0x8246be80
	ctx.lr = 0x83807FFC;
	sub_8246BE80(ctx, base);
	// addi r7,r31,-1640
	ctx.r7.s64 = ctx.r31.s64 + -1640;
	// addi r5,r31,-1624
	ctx.r5.s64 = ctx.r31.s64 + -1624;
	// li r6,288
	ctx.r6.s64 = 288;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478958
	ctx.lr = 0x83808014;
	sub_82478958(ctx, base);
	// addi r6,r31,-1616
	ctx.r6.s64 = ctx.r31.s64 + -1616;
	// addi r5,r31,-1612
	ctx.r5.s64 = ctx.r31.s64 + -1612;
	// addi r4,r31,-1604
	ctx.r4.s64 = ctx.r31.s64 + -1604;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380802C;
	sub_82479460(ctx, base);
	// addi r5,r31,-1596
	ctx.r5.s64 = ctx.r31.s64 + -1596;
	// li r6,292
	ctx.r6.s64 = 292;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808040;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1592
	ctx.r6.s64 = ctx.r31.s64 + -1592;
	// addi r5,r31,-1588
	ctx.r5.s64 = ctx.r31.s64 + -1588;
	// addi r4,r31,-1584
	ctx.r4.s64 = ctx.r31.s64 + -1584;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808058;
	sub_82479460(ctx, base);
	// addi r5,r31,-1580
	ctx.r5.s64 = ctx.r31.s64 + -1580;
	// li r6,296
	ctx.r6.s64 = 296;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380806C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1568
	ctx.r6.s64 = ctx.r31.s64 + -1568;
	// addi r5,r31,-1564
	ctx.r5.s64 = ctx.r31.s64 + -1564;
	// addi r4,r31,-1552
	ctx.r4.s64 = ctx.r31.s64 + -1552;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808084;
	sub_82479460(ctx, base);
	// addi r5,r31,-1540
	ctx.r5.s64 = ctx.r31.s64 + -1540;
	// li r6,300
	ctx.r6.s64 = 300;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808098;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1532
	ctx.r6.s64 = ctx.r31.s64 + -1532;
	// addi r5,r31,-1528
	ctx.r5.s64 = ctx.r31.s64 + -1528;
	// addi r4,r31,-1520
	ctx.r4.s64 = ctx.r31.s64 + -1520;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838080B0;
	sub_82479460(ctx, base);
	// addi r5,r31,-1512
	ctx.r5.s64 = ctx.r31.s64 + -1512;
	// li r6,304
	ctx.r6.s64 = 304;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838080C4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1496
	ctx.r6.s64 = ctx.r31.s64 + -1496;
	// addi r5,r31,-1492
	ctx.r5.s64 = ctx.r31.s64 + -1492;
	// addi r4,r31,-1476
	ctx.r4.s64 = ctx.r31.s64 + -1476;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838080DC;
	sub_82479460(ctx, base);
	// addi r5,r31,-1460
	ctx.r5.s64 = ctx.r31.s64 + -1460;
	// li r6,308
	ctx.r6.s64 = 308;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838080F0;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1452
	ctx.r6.s64 = ctx.r31.s64 + -1452;
	// addi r5,r31,-1448
	ctx.r5.s64 = ctx.r31.s64 + -1448;
	// addi r4,r31,-1440
	ctx.r4.s64 = ctx.r31.s64 + -1440;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808108;
	sub_82479460(ctx, base);
	// addi r5,r31,-1432
	ctx.r5.s64 = ctx.r31.s64 + -1432;
	// li r6,312
	ctx.r6.s64 = 312;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380811C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1420
	ctx.r6.s64 = ctx.r31.s64 + -1420;
	// addi r5,r31,-1416
	ctx.r5.s64 = ctx.r31.s64 + -1416;
	// addi r4,r31,-1404
	ctx.r4.s64 = ctx.r31.s64 + -1404;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808134;
	sub_82479460(ctx, base);
	// addi r5,r31,-1392
	ctx.r5.s64 = ctx.r31.s64 + -1392;
	// li r6,316
	ctx.r6.s64 = 316;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808148;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1376
	ctx.r6.s64 = ctx.r31.s64 + -1376;
	// addi r5,r31,-1372
	ctx.r5.s64 = ctx.r31.s64 + -1372;
	// addi r4,r31,-1356
	ctx.r4.s64 = ctx.r31.s64 + -1356;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808160;
	sub_82479460(ctx, base);
	// addi r5,r31,-1340
	ctx.r5.s64 = ctx.r31.s64 + -1340;
	// li r6,320
	ctx.r6.s64 = 320;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808174;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1328
	ctx.r6.s64 = ctx.r31.s64 + -1328;
	// addi r5,r31,-1324
	ctx.r5.s64 = ctx.r31.s64 + -1324;
	// addi r4,r31,-1312
	ctx.r4.s64 = ctx.r31.s64 + -1312;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380818C;
	sub_82479460(ctx, base);
	// addi r5,r31,-1300
	ctx.r5.s64 = ctx.r31.s64 + -1300;
	// li r6,324
	ctx.r6.s64 = 324;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838081A0;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1288
	ctx.r6.s64 = ctx.r31.s64 + -1288;
	// addi r5,r31,-1284
	ctx.r5.s64 = ctx.r31.s64 + -1284;
	// addi r4,r31,-1272
	ctx.r4.s64 = ctx.r31.s64 + -1272;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838081B8;
	sub_82479460(ctx, base);
	// addi r5,r31,-1260
	ctx.r5.s64 = ctx.r31.s64 + -1260;
	// li r6,328
	ctx.r6.s64 = 328;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838081CC;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1244
	ctx.r6.s64 = ctx.r31.s64 + -1244;
	// addi r5,r31,-1240
	ctx.r5.s64 = ctx.r31.s64 + -1240;
	// addi r4,r31,-1224
	ctx.r4.s64 = ctx.r31.s64 + -1224;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838081E4;
	sub_82479460(ctx, base);
	// addi r5,r31,-1208
	ctx.r5.s64 = ctx.r31.s64 + -1208;
	// li r6,332
	ctx.r6.s64 = 332;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838081F8;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1188
	ctx.r6.s64 = ctx.r31.s64 + -1188;
	// addi r5,r31,-1184
	ctx.r5.s64 = ctx.r31.s64 + -1184;
	// addi r4,r31,-1164
	ctx.r4.s64 = ctx.r31.s64 + -1164;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808210;
	sub_82479460(ctx, base);
	// addi r5,r31,-1144
	ctx.r5.s64 = ctx.r31.s64 + -1144;
	// li r6,336
	ctx.r6.s64 = 336;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808224;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1128
	ctx.r6.s64 = ctx.r31.s64 + -1128;
	// addi r5,r31,-1124
	ctx.r5.s64 = ctx.r31.s64 + -1124;
	// addi r4,r31,-1108
	ctx.r4.s64 = ctx.r31.s64 + -1108;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380823C;
	sub_82479460(ctx, base);
	// addi r5,r31,-1092
	ctx.r5.s64 = ctx.r31.s64 + -1092;
	// li r6,340
	ctx.r6.s64 = 340;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808250;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1080
	ctx.r6.s64 = ctx.r31.s64 + -1080;
	// addi r5,r31,-1076
	ctx.r5.s64 = ctx.r31.s64 + -1076;
	// addi r4,r31,-1064
	ctx.r4.s64 = ctx.r31.s64 + -1064;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808268;
	sub_82479460(ctx, base);
	// addi r5,r31,-1052
	ctx.r5.s64 = ctx.r31.s64 + -1052;
	// li r6,344
	ctx.r6.s64 = 344;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380827C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1036
	ctx.r6.s64 = ctx.r31.s64 + -1036;
	// addi r5,r31,-1032
	ctx.r5.s64 = ctx.r31.s64 + -1032;
	// addi r4,r31,-1016
	ctx.r4.s64 = ctx.r31.s64 + -1016;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808294;
	sub_82479460(ctx, base);
	// addi r5,r31,-1000
	ctx.r5.s64 = ctx.r31.s64 + -1000;
	// li r6,348
	ctx.r6.s64 = 348;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838082A8;
	sub_824788C8(ctx, base);
	// addi r6,r31,-984
	ctx.r6.s64 = ctx.r31.s64 + -984;
	// addi r5,r31,-980
	ctx.r5.s64 = ctx.r31.s64 + -980;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r31,-964
	ctx.r4.s64 = ctx.r31.s64 + -964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838082C0;
	sub_82479460(ctx, base);
	// addi r5,r31,-948
	ctx.r5.s64 = ctx.r31.s64 + -948;
	// li r6,352
	ctx.r6.s64 = 352;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838082D4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-932
	ctx.r6.s64 = ctx.r31.s64 + -932;
	// addi r5,r31,-928
	ctx.r5.s64 = ctx.r31.s64 + -928;
	// addi r4,r31,-912
	ctx.r4.s64 = ctx.r31.s64 + -912;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838082EC;
	sub_82479460(ctx, base);
	// addi r5,r31,-896
	ctx.r5.s64 = ctx.r31.s64 + -896;
	// li r6,356
	ctx.r6.s64 = 356;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808300;
	sub_824788C8(ctx, base);
	// addi r6,r31,-880
	ctx.r6.s64 = ctx.r31.s64 + -880;
	// addi r5,r31,-876
	ctx.r5.s64 = ctx.r31.s64 + -876;
	// addi r4,r31,-860
	ctx.r4.s64 = ctx.r31.s64 + -860;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808318;
	sub_82479460(ctx, base);
	// addi r5,r31,-844
	ctx.r5.s64 = ctx.r31.s64 + -844;
	// li r6,360
	ctx.r6.s64 = 360;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380832C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-836
	ctx.r6.s64 = ctx.r31.s64 + -836;
	// addi r5,r31,-832
	ctx.r5.s64 = ctx.r31.s64 + -832;
	// addi r4,r31,-824
	ctx.r4.s64 = ctx.r31.s64 + -824;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808344;
	sub_82479460(ctx, base);
	// addi r5,r31,-816
	ctx.r5.s64 = ctx.r31.s64 + -816;
	// li r6,364
	ctx.r6.s64 = 364;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808358;
	sub_824788C8(ctx, base);
	// addi r6,r31,-804
	ctx.r6.s64 = ctx.r31.s64 + -804;
	// addi r5,r31,-800
	ctx.r5.s64 = ctx.r31.s64 + -800;
	// addi r4,r31,-788
	ctx.r4.s64 = ctx.r31.s64 + -788;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808370;
	sub_82479460(ctx, base);
	// addi r5,r31,-776
	ctx.r5.s64 = ctx.r31.s64 + -776;
	// li r6,368
	ctx.r6.s64 = 368;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808384;
	sub_824788C8(ctx, base);
	// addi r6,r31,-764
	ctx.r6.s64 = ctx.r31.s64 + -764;
	// addi r5,r31,-760
	ctx.r5.s64 = ctx.r31.s64 + -760;
	// addi r4,r31,-748
	ctx.r4.s64 = ctx.r31.s64 + -748;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380839C;
	sub_82479460(ctx, base);
	// li r6,372
	ctx.r6.s64 = 372;
	// addi r5,r31,-736
	ctx.r5.s64 = ctx.r31.s64 + -736;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838083B0;
	sub_824788C8(ctx, base);
	// addi r6,r31,-720
	ctx.r6.s64 = ctx.r31.s64 + -720;
	// addi r5,r31,-716
	ctx.r5.s64 = ctx.r31.s64 + -716;
	// addi r4,r31,-700
	ctx.r4.s64 = ctx.r31.s64 + -700;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838083C8;
	sub_82479460(ctx, base);
	// addi r5,r31,-684
	ctx.r5.s64 = ctx.r31.s64 + -684;
	// li r6,376
	ctx.r6.s64 = 376;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838083DC;
	sub_824788C8(ctx, base);
	// addi r6,r31,-668
	ctx.r6.s64 = ctx.r31.s64 + -668;
	// addi r5,r31,-664
	ctx.r5.s64 = ctx.r31.s64 + -664;
	// addi r4,r31,-648
	ctx.r4.s64 = ctx.r31.s64 + -648;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838083F4;
	sub_82479460(ctx, base);
	// addi r5,r31,-632
	ctx.r5.s64 = ctx.r31.s64 + -632;
	// li r6,380
	ctx.r6.s64 = 380;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808408;
	sub_824788C8(ctx, base);
	// addi r6,r31,-616
	ctx.r6.s64 = ctx.r31.s64 + -616;
	// addi r5,r31,-612
	ctx.r5.s64 = ctx.r31.s64 + -612;
	// addi r4,r31,-596
	ctx.r4.s64 = ctx.r31.s64 + -596;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808420;
	sub_82479460(ctx, base);
	// addi r5,r31,-580
	ctx.r5.s64 = ctx.r31.s64 + -580;
	// li r6,384
	ctx.r6.s64 = 384;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808434;
	sub_824788C8(ctx, base);
	// addi r6,r31,-564
	ctx.r6.s64 = ctx.r31.s64 + -564;
	// addi r5,r31,-560
	ctx.r5.s64 = ctx.r31.s64 + -560;
	// addi r4,r31,-544
	ctx.r4.s64 = ctx.r31.s64 + -544;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380844C;
	sub_82479460(ctx, base);
	// addi r5,r31,-528
	ctx.r5.s64 = ctx.r31.s64 + -528;
	// li r6,388
	ctx.r6.s64 = 388;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808460;
	sub_824788C8(ctx, base);
	// addi r6,r31,-512
	ctx.r6.s64 = ctx.r31.s64 + -512;
	// addi r5,r31,-508
	ctx.r5.s64 = ctx.r31.s64 + -508;
	// addi r4,r31,-492
	ctx.r4.s64 = ctx.r31.s64 + -492;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808478;
	sub_82479460(ctx, base);
	// addi r5,r31,-476
	ctx.r5.s64 = ctx.r31.s64 + -476;
	// li r6,392
	ctx.r6.s64 = 392;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380848C;
	sub_824788C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,-460
	ctx.r6.s64 = ctx.r31.s64 + -460;
	// addi r5,r31,-456
	ctx.r5.s64 = ctx.r31.s64 + -456;
	// addi r4,r31,-440
	ctx.r4.s64 = ctx.r31.s64 + -440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838084A4;
	sub_82479460(ctx, base);
	// addi r5,r31,-424
	ctx.r5.s64 = ctx.r31.s64 + -424;
	// li r6,396
	ctx.r6.s64 = 396;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838084B8;
	sub_824788C8(ctx, base);
	// addi r6,r31,-408
	ctx.r6.s64 = ctx.r31.s64 + -408;
	// addi r5,r31,-404
	ctx.r5.s64 = ctx.r31.s64 + -404;
	// addi r4,r31,-388
	ctx.r4.s64 = ctx.r31.s64 + -388;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838084D0;
	sub_82479460(ctx, base);
	// addi r5,r31,-372
	ctx.r5.s64 = ctx.r31.s64 + -372;
	// li r6,400
	ctx.r6.s64 = 400;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838084E4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-356
	ctx.r6.s64 = ctx.r31.s64 + -356;
	// addi r5,r31,-352
	ctx.r5.s64 = ctx.r31.s64 + -352;
	// addi r4,r31,-336
	ctx.r4.s64 = ctx.r31.s64 + -336;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838084FC;
	sub_82479460(ctx, base);
	// addi r5,r31,-320
	ctx.r5.s64 = ctx.r31.s64 + -320;
	// li r6,404
	ctx.r6.s64 = 404;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808510;
	sub_824788C8(ctx, base);
	// addi r6,r31,-308
	ctx.r6.s64 = ctx.r31.s64 + -308;
	// addi r5,r31,-304
	ctx.r5.s64 = ctx.r31.s64 + -304;
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808528;
	sub_82479460(ctx, base);
	// addi r5,r31,-280
	ctx.r5.s64 = ctx.r31.s64 + -280;
	// li r6,408
	ctx.r6.s64 = 408;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380853C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-268
	ctx.r6.s64 = ctx.r31.s64 + -268;
	// addi r5,r31,-264
	ctx.r5.s64 = ctx.r31.s64 + -264;
	// addi r4,r31,-252
	ctx.r4.s64 = ctx.r31.s64 + -252;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808554;
	sub_82479460(ctx, base);
	// addi r5,r31,-240
	ctx.r5.s64 = ctx.r31.s64 + -240;
	// li r6,412
	ctx.r6.s64 = 412;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808568;
	sub_824788C8(ctx, base);
	// addi r6,r31,-228
	ctx.r6.s64 = ctx.r31.s64 + -228;
	// addi r5,r31,-224
	ctx.r5.s64 = ctx.r31.s64 + -224;
	// addi r4,r31,-212
	ctx.r4.s64 = ctx.r31.s64 + -212;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808580;
	sub_82479460(ctx, base);
	// addi r5,r31,-200
	ctx.r5.s64 = ctx.r31.s64 + -200;
	// li r6,416
	ctx.r6.s64 = 416;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808594;
	sub_824788C8(ctx, base);
	// addi r6,r31,-188
	ctx.r6.s64 = ctx.r31.s64 + -188;
	// addi r5,r31,-184
	ctx.r5.s64 = ctx.r31.s64 + -184;
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838085AC;
	sub_82479460(ctx, base);
	// addi r5,r31,-160
	ctx.r5.s64 = ctx.r31.s64 + -160;
	// li r6,432
	ctx.r6.s64 = 432;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838085C0;
	sub_824788C8(ctx, base);
	// addi r6,r31,-152
	ctx.r6.s64 = ctx.r31.s64 + -152;
	// addi r5,r31,-148
	ctx.r5.s64 = ctx.r31.s64 + -148;
	// addi r4,r31,-140
	ctx.r4.s64 = ctx.r31.s64 + -140;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838085D8;
	sub_82479460(ctx, base);
	// addi r5,r31,-132
	ctx.r5.s64 = ctx.r31.s64 + -132;
	// li r6,448
	ctx.r6.s64 = 448;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838085EC;
	sub_824788C8(ctx, base);
	// addi r6,r31,-124
	ctx.r6.s64 = ctx.r31.s64 + -124;
	// addi r5,r31,-120
	ctx.r5.s64 = ctx.r31.s64 + -120;
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808604;
	sub_82479460(ctx, base);
	// addi r5,r31,-104
	ctx.r5.s64 = ctx.r31.s64 + -104;
	// li r6,464
	ctx.r6.s64 = 464;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808618;
	sub_824788C8(ctx, base);
	// addi r6,r31,-96
	ctx.r6.s64 = ctx.r31.s64 + -96;
	// addi r5,r31,-92
	ctx.r5.s64 = ctx.r31.s64 + -92;
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83808630;
	sub_82479460(ctx, base);
	// addi r5,r31,-76
	ctx.r5.s64 = ctx.r31.s64 + -76;
	// li r6,480
	ctx.r6.s64 = 480;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83808644;
	sub_824788C8(ctx, base);
	// addi r6,r31,-68
	ctx.r6.s64 = ctx.r31.s64 + -68;
	// addi r5,r31,-64
	ctx.r5.s64 = ctx.r31.s64 + -64;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380865C;
	sub_82479460(ctx, base);
	// addi r7,r31,-48
	ctx.r7.s64 = ctx.r31.s64 + -48;
	// addi r5,r31,-28
	ctx.r5.s64 = ctx.r31.s64 + -28;
	// li r6,496
	ctx.r6.s64 = 496;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478958
	ctx.lr = 0x83808674;
	sub_82478958(ctx, base);
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380868C;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_838086A4"))) PPC_WEAK_FUNC(sub_838086A4);
PPC_FUNC_IMPL(__imp__sub_838086A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838086A8"))) PPC_WEAK_FUNC(sub_838086A8);
PPC_FUNC_IMPL(__imp__sub_838086A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838086B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,320
	ctx.r4.s64 = 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x838086D4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83808710
	if (cr6.eq) goto loc_83808710;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824fcca8
	ctx.lr = 0x838086E8;
	sub_824FCCA8(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// addi r9,r10,13592
	ctx.r9.s64 = ctx.r10.s64 + 13592;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x837dd050
	ctx.lr = 0x83808700;
	sub_837DD050(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r30.u8);
	// b 0x83808714
	goto loc_83808714;
loc_83808710:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83808714:
	// std r30,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r30.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241f040
	ctx.lr = 0x83808720;
	sub_8241F040(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380872C"))) PPC_WEAK_FUNC(sub_8380872C);
PPC_FUNC_IMPL(__imp__sub_8380872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83808730"))) PPC_WEAK_FUNC(sub_83808730);
PPC_FUNC_IMPL(__imp__sub_83808730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83808738;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x837dd050
	ctx.lr = 0x83808750;
	sub_837DD050(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stb r28,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r28.u8);
	// bl 0x8252e3c0
	ctx.lr = 0x83808764;
	sub_8252E3C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83808768:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83808768
	if (!cr6.eq) goto loc_83808768;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x831d88a0
	ctx.lr = 0x83808790;
	sub_831D88A0(ctx, base);
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// lwz r7,112(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// li r28,48
	ctx.r28.s64 = 48;
	// lvx128 v63,r7,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v62,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v61,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v60,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v60,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lvx128 v59,r9,r4
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v58,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// stvx128 v58,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v57,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vspltw128 v56,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// addi r3,r30,432
	ctx.r3.s64 = ctx.r30.s64 + 432;
	// vspltw128 v55,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stvx128 v55,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stvx128 v57,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lvx128 v54,r8,r28
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v53,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0x55));
	// vspltw128 v52,v54,1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xAA));
	// stvx128 v53,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v51,v54,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0xFF));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,52(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stvx128 v52,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// stvx128 v51,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r7,288(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// stb r7,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r7.u8);
	// lbz r5,292(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 292);
	// stb r5,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r5.u8);
	// lfs f4,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f3,300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f2,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f1,308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,60(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f0,312(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f13,316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f12,320(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lfs f11,324(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f10,328(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f9,332(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// lfs f8,336(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f7,340(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f6,344(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f5,348(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,100(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f4,352(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 352);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,104(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lfs f3,356(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 356);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,108(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lfs f2,360(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,112(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f1,364(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,116(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f0,368(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f13,372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f12,376(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,128(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lfs f11,380(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 380);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,132(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// lfs f10,384(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,136(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// lfs f9,388(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,140(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f8,392(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,144(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// lfs f7,396(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,148(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f6,400(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,152(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lfs f5,404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,156(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lfs f4,408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,160(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f3,412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,164(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f2,416(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,168(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// bl 0x835b4260
	ctx.lr = 0x83808994;
	sub_835B4260(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// addi r3,r30,448
	ctx.r3.s64 = ctx.r30.s64 + 448;
	// bl 0x835b4260
	ctx.lr = 0x838089A0;
	sub_835B4260(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// addi r3,r30,464
	ctx.r3.s64 = ctx.r30.s64 + 464;
	// bl 0x835b4260
	ctx.lr = 0x838089AC;
	sub_835B4260(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// addi r3,r30,480
	ctx.r3.s64 = ctx.r30.s64 + 480;
	// bl 0x835b4260
	ctx.lr = 0x838089B8;
	sub_835B4260(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// lwz r4,496(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r4,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r4.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838089D0"))) PPC_WEAK_FUNC(sub_838089D0);
PPC_FUNC_IMPL(__imp__sub_838089D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x838089D8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824b3de0
	ctx.lr = 0x838089E8;
	sub_824B3DE0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13744
	ctx.r9.s64 = ctx.r11.s64 + 13744;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r31,r30,152
	ctx.r31.s64 = ctx.r30.s64 + 152;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,128(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// stfs f31,132(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// stfs f31,136(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// stw r27,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r27.u32);
	// stw r27,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r27.u32);
	// std r27,160(r30)
	PPC_STORE_U64(ctx.r30.u32 + 160, ctx.r27.u64);
	// bl 0x82422f40
	ctx.lr = 0x83808A30;
	sub_82422F40(ctx, base);
	// li r26,2
	ctx.r26.s64 = 2;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// stfs f31,108(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// stw r27,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r27.u32);
	// stfs f31,112(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// stb r27,120(r30)
	PPC_STORE_U8(ctx.r30.u32 + 120, ctx.r27.u8);
	// stfs f31,144(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// stb r27,148(r30)
	PPC_STORE_U8(ctx.r30.u32 + 148, ctx.r27.u8);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// addi r25,r11,9580
	ctx.r25.s64 = ctx.r11.s64 + 9580;
loc_83808A5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83808ab8
	if (cr6.lt) goto loc_83808AB8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83808aa8
	if (!cr6.gt) goto loc_83808AA8;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x8247b270
	ctx.lr = 0x83808AA4;
	sub_8247B270(ctx, base);
	// b 0x83808aac
	goto loc_83808AAC;
loc_83808AA8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83808AAC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83808adc
	if (cr6.eq) goto loc_83808ADC;
loc_83808AB8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x83808ad0
	if (cr0.eq) goto loc_83808AD0;
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
loc_83808AD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_83808ADC:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne 0x83808a5c
	if (!cr0.eq) goto loc_83808A5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83808AF4"))) PPC_WEAK_FUNC(sub_83808AF4);
PPC_FUNC_IMPL(__imp__sub_83808AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83808AF8"))) PPC_WEAK_FUNC(sub_83808AF8);
PPC_FUNC_IMPL(__imp__sub_83808AF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83806290
	sub_83806290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83808AFC"))) PPC_WEAK_FUNC(sub_83808AFC);
PPC_FUNC_IMPL(__imp__sub_83808AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83808B00"))) PPC_WEAK_FUNC(sub_83808B00);
PPC_FUNC_IMPL(__imp__sub_83808B00) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83808b4c
	if (cr6.eq) goto loc_83808B4C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b3ea8
	ctx.lr = 0x83808B28;
	sub_824B3EA8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,13744
	ctx.r10.s64 = ctx.r11.s64 + 13744;
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
loc_83808B4C:
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

__attribute__((alias("__imp__sub_83808B64"))) PPC_WEAK_FUNC(sub_83808B64);
PPC_FUNC_IMPL(__imp__sub_83808B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83808B68"))) PPC_WEAK_FUNC(sub_83808B68);
PPC_FUNC_IMPL(__imp__sub_83808B68) {
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
	// bl 0x82467738
	ctx.lr = 0x83808B80;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,176
	ctx.r3.s64 = 176;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x83808B94;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83808bb8
	if (cr6.eq) goto loc_83808BB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838089d0
	ctx.lr = 0x83808BA4;
	sub_838089D0(ctx, base);
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
loc_83808BB8:
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

__attribute__((alias("__imp__sub_83808BD0"))) PPC_WEAK_FUNC(sub_83808BD0);
PPC_FUNC_IMPL(__imp__sub_83808BD0) {
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
	// addi r3,r3,152
	ctx.r3.s64 = ctx.r3.s64 + 152;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82422cd0
	ctx.lr = 0x83808BF4;
	sub_82422CD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b40a8
	ctx.lr = 0x83808BFC;
	sub_824B40A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83808c14
	if (cr6.eq) goto loc_83808C14;
	// bl 0x8248b818
	ctx.lr = 0x83808C10;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_83808C14:
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

__attribute__((alias("__imp__sub_83808C2C"))) PPC_WEAK_FUNC(sub_83808C2C);
PPC_FUNC_IMPL(__imp__sub_83808C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83808C30"))) PPC_WEAK_FUNC(sub_83808C30);
PPC_FUNC_IMPL(__imp__sub_83808C30) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x83808C4C;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x83808C54;
	sub_8251B068(ctx, base);
	// bl 0x837e39d0
	ctx.lr = 0x83808C58;
	sub_837E39D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83808C6C;
	sub_8241F040(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83808C80;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83808cbc
	if (cr6.eq) goto loc_83808CBC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83806390
	ctx.lr = 0x83808C98;
	sub_83806390(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r11,13700
	ctx.r9.s64 = ctx.r11.s64 + 13700;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x83808CB8;
	sub_831CE980(ctx, base);
	// b 0x83808cc0
	goto loc_83808CC0;
loc_83808CBC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83808CC0:
	// bl 0x8353f578
	ctx.lr = 0x83808CC4;
	sub_8353F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f700
	ctx.lr = 0x83808CCC;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x83808CD0;
	sub_8353F588(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83808CDC;
	sub_8241F040(ctx, base);
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

__attribute__((alias("__imp__sub_83808CF4"))) PPC_WEAK_FUNC(sub_83808CF4);
PPC_FUNC_IMPL(__imp__sub_83808CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83808CF8"))) PPC_WEAK_FUNC(sub_83808CF8);
PPC_FUNC_IMPL(__imp__sub_83808CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83808D00;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x837dcf80
	ctx.lr = 0x83808D18;
	sub_837DCF80(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stb r29,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r29.u8);
	// bl 0x8252e3c0
	ctx.lr = 0x83808D2C;
	sub_8252E3C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83808D30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83808d30
	if (!cr6.eq) goto loc_83808D30;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x831d88a0
	ctx.lr = 0x83808D58;
	sub_831D88A0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82420258
	ctx.lr = 0x83808D6C;
	sub_82420258(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83808d80
	if (cr6.lt) goto loc_83808D80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_83808D80:
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x83808D94;
	sub_831CE7D8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83808da8
	if (cr6.lt) goto loc_83808DA8;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x83808DA8;
	sub_8386D088(ctx, base);
loc_83808DA8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r29.u8);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8380f5f0
	ctx.lr = 0x83808DC4;
	sub_8380F5F0(ctx, base);
	// lbz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,136(r31)
	PPC_STORE_U8(ctx.r31.u32 + 136, ctx.r10.u8);
	// lbz r9,121(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// stb r9,137(r31)
	PPC_STORE_U8(ctx.r31.u32 + 137, ctx.r9.u8);
	// lbz r8,122(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 122);
	// stb r8,138(r31)
	PPC_STORE_U8(ctx.r31.u32 + 138, ctx.r8.u8);
	// lbz r7,123(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 123);
	// stb r7,139(r31)
	PPC_STORE_U8(ctx.r31.u32 + 139, ctx.r7.u8);
	// lbz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 124);
	// stb r6,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r6.u8);
	// lbz r5,125(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 125);
	// stb r5,141(r31)
	PPC_STORE_U8(ctx.r31.u32 + 141, ctx.r5.u8);
	// lbz r4,126(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 126);
	// stb r4,142(r31)
	PPC_STORE_U8(ctx.r31.u32 + 142, ctx.r4.u8);
	// lbz r11,127(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 127);
	// stb r11,143(r31)
	PPC_STORE_U8(ctx.r31.u32 + 143, ctx.r11.u8);
	// lbz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
	// lbz r9,129(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// stb r9,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r9.u8);
	// lbz r8,130(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 130);
	// stb r8,146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 146, ctx.r8.u8);
	// lbz r7,131(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 131);
	// stb r7,147(r31)
	PPC_STORE_U8(ctx.r31.u32 + 147, ctx.r7.u8);
	// lbz r6,132(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// stb r6,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r6.u8);
	// lbz r5,133(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 133);
	// stb r5,149(r31)
	PPC_STORE_U8(ctx.r31.u32 + 149, ctx.r5.u8);
	// lbz r4,134(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 134);
	// stb r4,150(r31)
	PPC_STORE_U8(ctx.r31.u32 + 150, ctx.r4.u8);
	// lbz r11,135(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 135);
	// stb r11,151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 151, ctx.r11.u8);
	// lbz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 136);
	// stb r10,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r10.u8);
	// lbz r9,137(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 137);
	// stb r9,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r9.u8);
	// lbz r8,138(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 138);
	// stb r8,154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 154, ctx.r8.u8);
	// lbz r7,139(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 139);
	// stb r7,155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 155, ctx.r7.u8);
	// lbz r6,140(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// stb r6,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r6.u8);
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stb r5,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r5.u8);
	// lbz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 148);
	// stb r11,158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 158, ctx.r11.u8);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stb r10,159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 159, ctx.r10.u8);
	// lbz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// stb r8,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r8.u8);
	// lbz r7,157(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// stb r7,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r7.u8);
	// lwz r6,160(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stb r6,162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 162, ctx.r6.u8);
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stb r4,163(r31)
	PPC_STORE_U8(ctx.r31.u32 + 163, ctx.r4.u8);
	// lbz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 168);
	// stb r10,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r10.u8);
	// lbz r9,169(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 169);
	// stb r9,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r9.u8);
	// lbz r8,170(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 170);
	// stb r8,166(r31)
	PPC_STORE_U8(ctx.r31.u32 + 166, ctx.r8.u8);
	// lbz r7,171(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 171);
	// stb r7,167(r31)
	PPC_STORE_U8(ctx.r31.u32 + 167, ctx.r7.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83808ED0"))) PPC_WEAK_FUNC(sub_83808ED0);
PPC_FUNC_IMPL(__imp__sub_83808ED0) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x83808EEC;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x83808EF4;
	sub_8251B068(ctx, base);
	// bl 0x837e3a40
	ctx.lr = 0x83808EF8;
	sub_837E3A40(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83808F0C;
	sub_8241F040(ctx, base);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,176
	ctx.r4.s64 = 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x83808F20;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83808f5c
	if (cr6.eq) goto loc_83808F5C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83808cf8
	ctx.lr = 0x83808F38;
	sub_83808CF8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r9,r11,13240
	ctx.r9.s64 = ctx.r11.s64 + 13240;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r5,172
	ctx.r5.s64 = 172;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x83808F58;
	sub_831CE980(ctx, base);
	// b 0x83808f60
	goto loc_83808F60;
loc_83808F5C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_83808F60:
	// bl 0x8353f578
	ctx.lr = 0x83808F64;
	sub_8353F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f700
	ctx.lr = 0x83808F6C;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x83808F70;
	sub_8353F588(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83808F7C;
	sub_8241F040(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

__attribute__((alias("__imp__sub_83808F94"))) PPC_WEAK_FUNC(sub_83808F94);
PPC_FUNC_IMPL(__imp__sub_83808F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83808F98"))) PPC_WEAK_FUNC(sub_83808F98);
PPC_FUNC_IMPL(__imp__sub_83808F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83808FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x83808FAC;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x83808FB4;
	sub_8251B068(ctx, base);
	// bl 0x837e3ab0
	ctx.lr = 0x83808FB8;
	sub_837E3AB0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83808FCC;
	sub_8241F040(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83805e70
	ctx.lr = 0x83808FD8;
	sub_83805E70(ctx, base);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83808FEC;
	sub_831CE980(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83809000;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83809034
	if (cr6.eq) goto loc_83809034;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,13408
	ctx.r10.s64 = ctx.r11.s64 + 13408;
	// li r5,104
	ctx.r5.s64 = 104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x83809028;
	sub_831CE980(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stb r9,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r9.u8);
loc_83809034:
	// bl 0x8353f578
	ctx.lr = 0x83809038;
	sub_8353F578(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8353f700
	ctx.lr = 0x83809040;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x83809044;
	sub_8353F588(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x83809050;
	sub_8241F040(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809058"))) PPC_WEAK_FUNC(sub_83809058);
PPC_FUNC_IMPL(__imp__sub_83809058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83809060;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83307688
	ctx.lr = 0x8380906C;
	sub_83307688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x83809074;
	sub_8251B068(ctx, base);
	// bl 0x837e3b20
	ctx.lr = 0x83809078;
	sub_837E3B20(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8380908C;
	sub_8241F040(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83808730
	ctx.lr = 0x83809098;
	sub_83808730(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x837dbbe0
	ctx.lr = 0x838090B4;
	sub_837DBBE0(ctx, base);
	// lbz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r10.u8);
	// bl 0x82595718
	ctx.lr = 0x838090D0;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83809108
	if (cr6.eq) goto loc_83809108;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,13576
	ctx.r10.s64 = ctx.r11.s64 + 13576;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x838090F8;
	sub_831CE980(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stb r11,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r11.u8);
loc_83809108:
	// bl 0x8353f578
	ctx.lr = 0x8380910C;
	sub_8353F578(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8353f700
	ctx.lr = 0x83809114;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x83809118;
	sub_8353F588(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83809124;
	sub_8241F040(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380912C"))) PPC_WEAK_FUNC(sub_8380912C);
PPC_FUNC_IMPL(__imp__sub_8380912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83809130"))) PPC_WEAK_FUNC(sub_83809130);
PPC_FUNC_IMPL(__imp__sub_83809130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83809138;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8251b068
	ctx.lr = 0x83809148;
	sub_8251B068(ctx, base);
	// bl 0x837e3b20
	ctx.lr = 0x8380914C;
	sub_837E3B20(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x83809160;
	sub_8241F040(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83808730
	ctx.lr = 0x8380916C;
	sub_83808730(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x837dbbe0
	ctx.lr = 0x83809188;
	sub_837DBBE0(ctx, base);
	// lbz r10,192(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 192);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r10,192(r30)
	PPC_STORE_U8(ctx.r30.u32 + 192, ctx.r10.u8);
	// bl 0x82595718
	ctx.lr = 0x838091A4;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838091d8
	if (cr6.eq) goto loc_838091D8;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,13576
	ctx.r10.s64 = ctx.r11.s64 + 13576;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x838091CC;
	sub_831CE980(ctx, base);
	// stb r28,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r28.u8);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// b 0x838091dc
	goto loc_838091DC;
loc_838091D8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_838091DC:
	// bl 0x8353f578
	ctx.lr = 0x838091E0;
	sub_8353F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f700
	ctx.lr = 0x838091E8;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x838091EC;
	sub_8353F588(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x838091F8;
	sub_8241F040(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809200"))) PPC_WEAK_FUNC(sub_83809200);
PPC_FUNC_IMPL(__imp__sub_83809200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x83809208;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x824b3de0
	ctx.lr = 0x83809214;
	sub_824B3DE0(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,13804
	ctx.r9.s64 = ctx.r10.s64 + 13804;
	// addi r31,r23,104
	ctx.r31.s64 = ctx.r23.s64 + 104;
	// stw r9,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,104(r23)
	PPC_STORE_U32(ctx.r23.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r23)
	PPC_STORE_U32(ctx.r23.u32 + 108, ctx.r11.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// std r11,112(r23)
	PPC_STORE_U64(ctx.r23.u32 + 112, ctx.r11.u64);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x8241f6d8
	ctx.lr = 0x83809248;
	sub_8241F6D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r22,10
	ctx.r22.s64 = 10;
	// li r25,8
	ctx.r25.s64 = 8;
	// li r26,16
	ctx.r26.s64 = 16;
	// addi r28,r11,8980
	ctx.r28.s64 = ctx.r11.s64 + 8980;
	// addi r27,r10,9080
	ctx.r27.s64 = ctx.r10.s64 + 9080;
loc_83809264:
	// bl 0x8241f278
	ctx.lr = 0x83809268;
	sub_8241F278(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x838092cc
	if (cr6.lt) goto loc_838092CC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x838092bc
	if (!cr6.gt) goto loc_838092BC;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x8247b270
	ctx.lr = 0x838092B4;
	sub_8247B270(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// b 0x838092c0
	goto loc_838092C0;
loc_838092BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_838092C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838092f4
	if (cr6.eq) goto loc_838092F4;
loc_838092CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x838092e8
	if (cr0.eq) goto loc_838092E8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8241f130
	ctx.lr = 0x838092E8;
	sub_8241F130(ctx, base);
loc_838092E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_838092F4:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne 0x83809264
	if (!cr0.eq) goto loc_83809264;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809308"))) PPC_WEAK_FUNC(sub_83809308);
PPC_FUNC_IMPL(__imp__sub_83809308) {
	PPC_FUNC_PROLOGUE();
	// b 0x83807070
	sub_83807070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380930C"))) PPC_WEAK_FUNC(sub_8380930C);
PPC_FUNC_IMPL(__imp__sub_8380930C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83809310"))) PPC_WEAK_FUNC(sub_83809310);
PPC_FUNC_IMPL(__imp__sub_83809310) {
	PPC_FUNC_PROLOGUE();
	// b 0x83807100
	sub_83807100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809314"))) PPC_WEAK_FUNC(sub_83809314);
PPC_FUNC_IMPL(__imp__sub_83809314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83809318"))) PPC_WEAK_FUNC(sub_83809318);
PPC_FUNC_IMPL(__imp__sub_83809318) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83809368
	if (cr6.eq) goto loc_83809368;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b3ea8
	ctx.lr = 0x83809348;
	sub_824B3EA8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,13804
	ctx.r10.s64 = ctx.r11.s64 + 13804;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824b7648
	ctx.lr = 0x83809360;
	sub_824B7648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8380936c
	goto loc_8380936C;
loc_83809368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8380936C:
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

__attribute__((alias("__imp__sub_83809384"))) PPC_WEAK_FUNC(sub_83809384);
PPC_FUNC_IMPL(__imp__sub_83809384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83809388"))) PPC_WEAK_FUNC(sub_83809388);
PPC_FUNC_IMPL(__imp__sub_83809388) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,7744
	ctx.r31.s64 = ctx.r11.s64 + 7744;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r31,-444
	ctx.r4.s64 = ctx.r31.s64 + -444;
	// bl 0x82485ec8
	ctx.lr = 0x838093B4;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-420
	ctx.r5.s64 = ctx.r31.s64 + -420;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x838093C4;
	sub_82486320(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-412
	ctx.r5.s64 = ctx.r31.s64 + -412;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486320
	ctx.lr = 0x838093D4;
	sub_82486320(ctx, base);
	// addi r5,r31,-404
	ctx.r5.s64 = ctx.r31.s64 + -404;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x838093E4;
	sub_82486320(ctx, base);
	// bl 0x83806290
	ctx.lr = 0x838093E8;
	sub_83806290(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-392
	ctx.r4.s64 = ctx.r31.s64 + -392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x838093FC;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8246be10
	ctx.lr = 0x83809408;
	sub_8246BE10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-376
	ctx.r4.s64 = ctx.r31.s64 + -376;
	// bl 0x8246c3a0
	ctx.lr = 0x83809414;
	sub_8246C3A0(ctx, base);
	// addi r4,r31,-368
	ctx.r4.s64 = ctx.r31.s64 + -368;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83809424;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x8380942C;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380944c
	if (cr6.eq) goto loc_8380944C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83809444;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8380944C:
	// bl 0x824b4418
	ctx.lr = 0x83809450;
	sub_824B4418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x8380945C;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83809470;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380948c
	if (cr6.eq) goto loc_8380948C;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,13692
	ctx.r9.s64 = ctx.r10.s64 + 13692;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x83809490
	goto loc_83809490;
loc_8380948C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83809490:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// lis r11,-31871
	ctx.r11.s64 = -2088697856;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-29848
	ctx.r4.s64 = ctx.r11.s64 + -29848;
	// bl 0x8246be80
	ctx.lr = 0x838094A4;
	sub_8246BE80(ctx, base);
	// addi r5,r31,-360
	ctx.r5.s64 = ctx.r31.s64 + -360;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838094B8;
	sub_824788C8(ctx, base);
	// addi r6,r31,-352
	ctx.r6.s64 = ctx.r31.s64 + -352;
	// addi r5,r31,-348
	ctx.r5.s64 = ctx.r31.s64 + -348;
	// addi r4,r31,-340
	ctx.r4.s64 = ctx.r31.s64 + -340;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838094D0;
	sub_82479460(ctx, base);
	// addi r5,r31,-332
	ctx.r5.s64 = ctx.r31.s64 + -332;
	// li r6,108
	ctx.r6.s64 = 108;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838094E4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-324
	ctx.r6.s64 = ctx.r31.s64 + -324;
	// addi r5,r31,-320
	ctx.r5.s64 = ctx.r31.s64 + -320;
	// addi r4,r31,-312
	ctx.r4.s64 = ctx.r31.s64 + -312;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838094FC;
	sub_82479460(ctx, base);
	// addi r5,r31,-304
	ctx.r5.s64 = ctx.r31.s64 + -304;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83809510;
	sub_824788C8(ctx, base);
	// addi r6,r31,-288
	ctx.r6.s64 = ctx.r31.s64 + -288;
	// addi r5,r31,-284
	ctx.r5.s64 = ctx.r31.s64 + -284;
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83809528;
	sub_82479460(ctx, base);
	// addi r7,r31,-252
	ctx.r7.s64 = ctx.r31.s64 + -252;
	// addi r5,r31,-228
	ctx.r5.s64 = ctx.r31.s64 + -228;
	// li r6,116
	ctx.r6.s64 = 116;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478958
	ctx.lr = 0x83809540;
	sub_82478958(ctx, base);
	// addi r6,r31,-212
	ctx.r6.s64 = ctx.r31.s64 + -212;
	// addi r5,r31,-208
	ctx.r5.s64 = ctx.r31.s64 + -208;
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83809558;
	sub_82479460(ctx, base);
	// addi r5,r31,-176
	ctx.r5.s64 = ctx.r31.s64 + -176;
	// li r6,120
	ctx.r6.s64 = 120;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380956C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-168
	ctx.r6.s64 = ctx.r31.s64 + -168;
	// addi r5,r31,-164
	ctx.r5.s64 = ctx.r31.s64 + -164;
	// addi r4,r31,-156
	ctx.r4.s64 = ctx.r31.s64 + -156;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83809584;
	sub_82479460(ctx, base);
	// addi r5,r31,-148
	ctx.r5.s64 = ctx.r31.s64 + -148;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x83809598;
	sub_824788C8(ctx, base);
	// addi r6,r31,-136
	ctx.r6.s64 = ctx.r31.s64 + -136;
	// addi r5,r31,-132
	ctx.r5.s64 = ctx.r31.s64 + -132;
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838095B0;
	sub_82479460(ctx, base);
	// addi r5,r31,-108
	ctx.r5.s64 = ctx.r31.s64 + -108;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838095C4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-96
	ctx.r6.s64 = ctx.r31.s64 + -96;
	// addi r5,r31,-92
	ctx.r5.s64 = ctx.r31.s64 + -92;
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x838095DC;
	sub_82479460(ctx, base);
	// addi r5,r31,-68
	ctx.r5.s64 = ctx.r31.s64 + -68;
	// li r6,148
	ctx.r6.s64 = 148;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x838095F0;
	sub_824788C8(ctx, base);
	// addi r6,r31,-56
	ctx.r6.s64 = ctx.r31.s64 + -56;
	// addi r5,r31,-52
	ctx.r5.s64 = ctx.r31.s64 + -52;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83809608;
	sub_82479460(ctx, base);
	// addi r5,r31,-28
	ctx.r5.s64 = ctx.r31.s64 + -28;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82478360
	ctx.lr = 0x8380961C;
	sub_82478360(ctx, base);
	// addi r6,r31,-16
	ctx.r6.s64 = ctx.r31.s64 + -16;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x83809634;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_8380964C"))) PPC_WEAK_FUNC(sub_8380964C);
PPC_FUNC_IMPL(__imp__sub_8380964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83809650"))) PPC_WEAK_FUNC(sub_83809650);
PPC_FUNC_IMPL(__imp__sub_83809650) {
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
	// bl 0x82467738
	ctx.lr = 0x83809668;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,120
	ctx.r3.s64 = 120;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8380967C;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838096a0
	if (cr6.eq) goto loc_838096A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83809200
	ctx.lr = 0x8380968C;
	sub_83809200(ctx, base);
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
loc_838096A0:
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

__attribute__((alias("__imp__sub_838096B8"))) PPC_WEAK_FUNC(sub_838096B8);
PPC_FUNC_IMPL(__imp__sub_838096B8) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8241f7e0
	ctx.lr = 0x838096DC;
	sub_8241F7E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b40a8
	ctx.lr = 0x838096E4;
	sub_824B40A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838096fc
	if (cr6.eq) goto loc_838096FC;
	// bl 0x8248b818
	ctx.lr = 0x838096F8;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838096FC:
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

__attribute__((alias("__imp__sub_83809714"))) PPC_WEAK_FUNC(sub_83809714);
PPC_FUNC_IMPL(__imp__sub_83809714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83809718"))) PPC_WEAK_FUNC(sub_83809718);
PPC_FUNC_IMPL(__imp__sub_83809718) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r11,13864
	ctx.r10.s64 = ctx.r11.s64 + 13864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r4,392(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8380975c
	if (cr6.eq) goto loc_8380975C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8380975C;
	sub_825952B8(ctx, base);
loc_8380975C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// bl 0x8251b278
	ctx.lr = 0x83809774;
	sub_8251B278(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83809794
	if (cr6.eq) goto loc_83809794;
	// bl 0x82595188
	ctx.lr = 0x83809784;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83809794;
	sub_825952B8(ctx, base);
loc_83809794:
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

__attribute__((alias("__imp__sub_838097B0"))) PPC_WEAK_FUNC(sub_838097B0);
PPC_FUNC_IMPL(__imp__sub_838097B0) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83809844
	if (cr6.eq) goto loc_83809844;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838097ec
	if (cr6.eq) goto loc_838097EC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_838097EC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83809808
	if (cr6.gt) goto loc_83809808;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_83809808:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83809844
	if (cr6.eq) goto loc_83809844;
	// bl 0x82eff9c8
	ctx.lr = 0x83809828;
	sub_82EFF9C8(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83809844
	if (cr6.eq) goto loc_83809844;
	// bl 0x82eff9c8
	ctx.lr = 0x83809838;
	sub_82EFF9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837ebfd0
	ctx.lr = 0x83809844;
	sub_837EBFD0(ctx, base);
loc_83809844:
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

__attribute__((alias("__imp__sub_83809858"))) PPC_WEAK_FUNC(sub_83809858);
PPC_FUNC_IMPL(__imp__sub_83809858) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x838097b0
	sub_838097B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809868"))) PPC_WEAK_FUNC(sub_83809868);
PPC_FUNC_IMPL(__imp__sub_83809868) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838098fc
	if (cr6.eq) goto loc_838098FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838098a4
	if (cr6.eq) goto loc_838098A4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_838098A4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x838098c0
	if (cr6.gt) goto loc_838098C0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_838098C0:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838098fc
	if (cr6.eq) goto loc_838098FC;
	// bl 0x82eff9c8
	ctx.lr = 0x838098E0;
	sub_82EFF9C8(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838098fc
	if (cr6.eq) goto loc_838098FC;
	// bl 0x82eff9c8
	ctx.lr = 0x838098F0;
	sub_82EFF9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837ed770
	ctx.lr = 0x838098FC;
	sub_837ED770(ctx, base);
loc_838098FC:
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

__attribute__((alias("__imp__sub_83809910"))) PPC_WEAK_FUNC(sub_83809910);
PPC_FUNC_IMPL(__imp__sub_83809910) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x83809868
	sub_83809868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809920"))) PPC_WEAK_FUNC(sub_83809920);
PPC_FUNC_IMPL(__imp__sub_83809920) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838099dc
	if (cr6.eq) goto loc_838099DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83809964
	if (cr6.eq) goto loc_83809964;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83809964:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83809980
	if (cr6.gt) goto loc_83809980;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_83809980:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838099dc
	if (cr6.eq) goto loc_838099DC;
	// bl 0x82eff9c8
	ctx.lr = 0x838099A0;
	sub_82EFF9C8(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838099dc
	if (cr6.eq) goto loc_838099DC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838099cc
	if (cr6.eq) goto loc_838099CC;
	// bl 0x82eff9c8
	ctx.lr = 0x838099BC;
	sub_82EFF9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837ec068
	ctx.lr = 0x838099C8;
	sub_837EC068(ctx, base);
	// b 0x838099dc
	goto loc_838099DC;
loc_838099CC:
	// bl 0x82eff9c8
	ctx.lr = 0x838099D0;
	sub_82EFF9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837ec258
	ctx.lr = 0x838099DC;
	sub_837EC258(ctx, base);
loc_838099DC:
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

__attribute__((alias("__imp__sub_838099F4"))) PPC_WEAK_FUNC(sub_838099F4);
PPC_FUNC_IMPL(__imp__sub_838099F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838099F8"))) PPC_WEAK_FUNC(sub_838099F8);
PPC_FUNC_IMPL(__imp__sub_838099F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lbz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 108);
	// b 0x83809920
	sub_83809920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809A0C"))) PPC_WEAK_FUNC(sub_83809A0C);
PPC_FUNC_IMPL(__imp__sub_83809A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83809A10"))) PPC_WEAK_FUNC(sub_83809A10);
PPC_FUNC_IMPL(__imp__sub_83809A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83809A18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83809af0
	if (cr6.eq) goto loc_83809AF0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83809a50
	if (cr6.eq) goto loc_83809A50;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83809A50:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83809a6c
	if (cr6.gt) goto loc_83809A6C;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_83809A6C:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83809af0
	if (cr6.eq) goto loc_83809AF0;
	// bl 0x82eff9c8
	ctx.lr = 0x83809A8C;
	sub_82EFF9C8(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83809af0
	if (cr6.eq) goto loc_83809AF0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x83809ac0
	if (!cr6.eq) goto loc_83809AC0;
	// lhz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// bl 0x82eff9c8
	ctx.lr = 0x83809AA8;
	sub_82EFF9C8(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x837dc588
	ctx.lr = 0x83809AB8;
	sub_837DC588(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83809AC0:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// bne cr6,0x83809ae0
	if (!cr6.eq) goto loc_83809AE0;
	// bl 0x82eff9c8
	ctx.lr = 0x83809ACC;
	sub_82EFF9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837ec140
	ctx.lr = 0x83809AD8;
	sub_837EC140(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83809AE0:
	// bl 0x82eff9c8
	ctx.lr = 0x83809AE4;
	sub_82EFF9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837e7560
	ctx.lr = 0x83809AF0;
	sub_837E7560(ctx, base);
loc_83809AF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809AF8"))) PPC_WEAK_FUNC(sub_83809AF8);
PPC_FUNC_IMPL(__imp__sub_83809AF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lbz r6,204(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 204);
	// lwz r5,200(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// b 0x83809a10
	sub_83809A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809B10"))) PPC_WEAK_FUNC(sub_83809B10);
PPC_FUNC_IMPL(__imp__sub_83809B10) {
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
	// bl 0x83807070
	ctx.lr = 0x83809B28;
	sub_83807070(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,12960
	ctx.r30.s64 = ctx.r11.s64 + 12960;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x83809B44;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x83809B50;
	sub_8246BE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,-44
	ctx.r4.s64 = ctx.r30.s64 + -44;
	// bl 0x8246c3a0
	ctx.lr = 0x83809B5C;
	sub_8246C3A0(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = ctx.r30.s64 + -36;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x83809B6C;
	sub_8241F280(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x83809B74;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83809b94
	if (cr6.eq) goto loc_83809B94;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x83809B8C;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_83809B94:
	// bl 0x824b4418
	ctx.lr = 0x83809B98;
	sub_824B4418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x83809BA4;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x83809BB8;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83809bd4
	if (cr6.eq) goto loc_83809BD4;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,13736
	ctx.r9.s64 = ctx.r10.s64 + 13736;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x83809bd8
	goto loc_83809BD8;
loc_83809BD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83809BD8:
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lis r11,-31871
	ctx.r11.s64 = -2088697856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27056
	ctx.r4.s64 = ctx.r11.s64 + -27056;
	// bl 0x8246be80
	ctx.lr = 0x83809BEC;
	sub_8246BE80(ctx, base);
	// addi r5,r30,-28
	ctx.r5.s64 = ctx.r30.s64 + -28;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82478360
	ctx.lr = 0x83809C00;
	sub_82478360(ctx, base);
	// addi r6,r30,-16
	ctx.r6.s64 = ctx.r30.s64 + -16;
	// addi r5,r30,-12
	ctx.r5.s64 = ctx.r30.s64 + -12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82479460
	ctx.lr = 0x83809C18;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_83809C30"))) PPC_WEAK_FUNC(sub_83809C30);
PPC_FUNC_IMPL(__imp__sub_83809C30) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83809cf0
	if (cr6.eq) goto loc_83809CF0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83809c74
	if (cr6.eq) goto loc_83809C74;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83809C74:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x83809c90
	if (cr6.gt) goto loc_83809C90;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_83809C90:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83809cf0
	if (cr6.eq) goto loc_83809CF0;
	// bl 0x82eff9c8
	ctx.lr = 0x83809CB0;
	sub_82EFF9C8(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83809cf0
	if (cr6.eq) goto loc_83809CF0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x83809cf0
	if (cr6.eq) goto loc_83809CF0;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// bne cr6,0x83809ce0
	if (!cr6.eq) goto loc_83809CE0;
	// bl 0x82eff9c8
	ctx.lr = 0x83809CD0;
	sub_82EFF9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837f1b28
	ctx.lr = 0x83809CDC;
	sub_837F1B28(ctx, base);
	// b 0x83809cf0
	goto loc_83809CF0;
loc_83809CE0:
	// bl 0x82eff9c8
	ctx.lr = 0x83809CE4;
	sub_82EFF9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837eeb60
	ctx.lr = 0x83809CF0;
	sub_837EEB60(ctx, base);
loc_83809CF0:
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

__attribute__((alias("__imp__sub_83809D08"))) PPC_WEAK_FUNC(sub_83809D08);
PPC_FUNC_IMPL(__imp__sub_83809D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83809D10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8251b010
	ctx.lr = 0x83809D1C;
	sub_8251B010(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r10,r11,13864
	ctx.r10.s64 = ctx.r11.s64 + 13864;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x837dd1b8
	ctx.lr = 0x83809D34;
	sub_837DD1B8(ctx, base);
	// addi r30,r30,328
	ctx.r30.s64 = ctx.r30.s64 + 328;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r29,392(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x83809d7c
	if (cr6.eq) goto loc_83809D7C;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x83809D74;
	sub_831CE420(ctx, base);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_83809D7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809D88"))) PPC_WEAK_FUNC(sub_83809D88);
PPC_FUNC_IMPL(__imp__sub_83809D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83809D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,408
	ctx.r4.s64 = 408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83809DB4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83809dcc
	if (cr6.eq) goto loc_83809DCC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83809d08
	ctx.lr = 0x83809DC4;
	sub_83809D08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83809dd0
	goto loc_83809DD0;
loc_83809DCC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_83809DD0:
	// std r29,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r29.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8241f040
	ctx.lr = 0x83809DDC;
	sub_8241F040(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809DE8"))) PPC_WEAK_FUNC(sub_83809DE8);
PPC_FUNC_IMPL(__imp__sub_83809DE8) {
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
	// lwz r4,332(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83809e20
	if (cr6.eq) goto loc_83809E20;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x83809E20;
	sub_825952B8(ctx, base);
loc_83809E20:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-17240
	ctx.r9.s64 = ctx.r10.s64 + -17240;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83809e5c
	if (cr6.eq) goto loc_83809E5C;
	// bl 0x82595188
	ctx.lr = 0x83809E4C;
	sub_82595188(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x83809E5C;
	sub_825952B8(ctx, base);
loc_83809E5C:
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

__attribute__((alias("__imp__sub_83809E78"))) PPC_WEAK_FUNC(sub_83809E78);
PPC_FUNC_IMPL(__imp__sub_83809E78) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lbz r6,352(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 352);
	// lwz r5,348(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// b 0x83809c30
	sub_83809C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809E90"))) PPC_WEAK_FUNC(sub_83809E90);
PPC_FUNC_IMPL(__imp__sub_83809E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83809E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,356
	ctx.r4.s64 = 356;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83809EB8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83809f0c
	if (cr6.eq) goto loc_83809F0C;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,13956
	ctx.r10.s64 = ctx.r11.s64 + 13956;
	// addi r29,r30,64
	ctx.r29.s64 = ctx.r30.s64 + 64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r5,324
	ctx.r5.s64 = 324;
	// bl 0x831ce980
	ctx.lr = 0x83809EF0;
	sub_831CE980(ctx, base);
	// addi r4,r29,328
	ctx.r4.s64 = ctx.r29.s64 + 328;
	// addi r3,r28,328
	ctx.r3.s64 = ctx.r28.s64 + 328;
	// bl 0x82a8e3a8
	ctx.lr = 0x83809EFC;
	sub_82A8E3A8(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stb r27,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r27.u8);
	// stw r8,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r8.u32);
	// b 0x83809f10
	goto loc_83809F10;
loc_83809F0C:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_83809F10:
	// bl 0x8353f578
	ctx.lr = 0x83809F14;
	sub_8353F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f700
	ctx.lr = 0x83809F1C;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x83809F20;
	sub_8353F588(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83809f58
	if (cr6.eq) goto loc_83809F58;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x83809F38;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83809F50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x83809F58;
	sub_82595170(ctx, base);
loc_83809F58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83809F60"))) PPC_WEAK_FUNC(sub_83809F60);
PPC_FUNC_IMPL(__imp__sub_83809F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83809F68;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x837dd1b8
	ctx.lr = 0x83809F80;
	sub_837DD1B8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r25,328
	ctx.r31.s64 = ctx.r25.s64 + 328;
	// stw r27,328(r25)
	PPC_STORE_U32(ctx.r25.u32 + 328, ctx.r27.u32);
	// stw r27,336(r25)
	PPC_STORE_U32(ctx.r25.u32 + 336, ctx.r27.u32);
	// stw r27,332(r25)
	PPC_STORE_U32(ctx.r25.u32 + 332, ctx.r27.u32);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// lwz r4,332(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 332);
	// lwz r30,328(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 328);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x83809fc8
	if (cr6.eq) goto loc_83809FC8;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x831ce420
	ctx.lr = 0x83809FC0;
	sub_831CE420(ctx, base);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_83809FC8:
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// bl 0x8252e3c0
	ctx.lr = 0x83809FD0;
	sub_8252E3C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83809FD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83809fd4
	if (!cr6.eq) goto loc_83809FD4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x831d88a0
	ctx.lr = 0x83809FFC;
	sub_831D88A0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwz r10,104(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8380a254
	if (cr6.eq) goto loc_8380A254;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lbz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r25,88
	ctx.r30.s64 = ctx.r25.s64 + 88;
	// li r28,28
	ctx.r28.s64 = 28;
	// li r23,2
	ctx.r23.s64 = 2;
	// addi r29,r11,12972
	ctx.r29.s64 = ctx.r11.s64 + 12972;
loc_8380A038:
	// lis r11,-16618
	ctx.r11.s64 = -1089077248;
	// lwz r10,112(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// ori r8,r11,40856
	ctx.r8.u64 = ctx.r11.u64 | 40856;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// ori r7,r9,47264
	ctx.r7.u64 = ctx.r9.u64 | 47264;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// ldx r6,r31,r10
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r10.u32);
	// cmpld cr6,r6,r8
	cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, xer);
	// beq cr6,0x8380a070
	if (cr6.eq) goto loc_8380A070;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8380A070:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8380a22c
	if (!cr6.eq) goto loc_8380A22C;
	// lwz r11,112(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 112);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r19,4(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8252e3c0
	ctx.lr = 0x8380A090;
	sub_8252E3C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// bl 0x838106d0
	ctx.lr = 0x8380A0A4;
	sub_838106D0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r9,r10,r28
	ctx.r9.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x8380a0dc
	if (!cr6.lt) goto loc_8380A0DC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380a22c
	if (cr6.eq) goto loc_8380A22C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// bl 0x838adab0
	ctx.lr = 0x8380A0D0;
	sub_838ADAB0(ctx, base);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// b 0x8380a224
	goto loc_8380A224;
loc_8380A0DC:
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8380a0f0
	if (cr6.lt) goto loc_8380A0F0;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8380a0f4
	goto loc_8380A0F4;
loc_8380A0F0:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8380A0F4:
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8380a104
	if (cr6.lt) goto loc_8380A104;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8380a108
	goto loc_8380A108;
loc_8380A104:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8380A108:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8380a120
	if (cr6.lt) goto loc_8380A120;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8380a124
	goto loc_8380A124;
loc_8380A120:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8380A124:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8380a144
	if (cr6.eq) goto loc_8380A144;
	// lis r11,-31971
	ctx.r11.s64 = -2095251456;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r7,r11,18384
	ctx.r7.s64 = ctx.r11.s64 + 18384;
	// bl 0x82e8b6a8
	ctx.lr = 0x8380A13C;
	sub_82E8B6A8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x8380a148
	goto loc_8380A148;
loc_8380A144:
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
loc_8380A148:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8380a158
	if (cr6.lt) goto loc_8380A158;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8380A158:
	// bl 0x82a4cf50
	ctx.lr = 0x8380A15C;
	sub_82A4CF50(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// stw r10,-80(r30)
	PPC_STORE_U32(ctx.r30.u32 + -80, ctx.r10.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8380a17c
	if (cr6.lt) goto loc_8380A17C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8380A17C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a4cff0
	ctx.lr = 0x8380A184;
	sub_82A4CFF0(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8380a1f8
	if (cr6.gt) goto loc_8380A1F8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8380a1d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8380A1D0;
	// bdzf 4*cr6+eq,0x8380a1d0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8380A1D0;
	// bne cr6,0x8380a1a8
	if (!cr6.eq) goto loc_8380A1A8;
loc_8380A1A8:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8380a1c0
	if (cr6.lt) goto loc_8380A1C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8380A1C0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831d88a0
	ctx.lr = 0x8380A1C8;
	sub_831D88A0(ctx, base);
	// stw r3,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r3.u32);
	// b 0x8380a1f8
	goto loc_8380A1F8;
loc_8380A1D0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8380a1e8
	if (cr6.lt) goto loc_8380A1E8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8380A1E8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831d82e8
	ctx.lr = 0x8380A1F0;
	sub_831D82E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
loc_8380A1F8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380a22c
	if (cr6.eq) goto loc_8380A22C;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// bl 0x838adab0
	ctx.lr = 0x8380A21C;
	sub_838ADAB0(ctx, base);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
loc_8380A224:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x8380A22C;
	sub_825952B8(ctx, base);
loc_8380A22C:
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// blt cr6,0x8380a038
	if (cr6.lt) goto loc_8380A038;
	// cmplwi cr6,r24,20
	cr6.compare<uint32_t>(ctx.r24.u32, 20, xer);
	// bge cr6,0x8380a284
	if (!cr6.lt) goto loc_8380A284;
loc_8380A254:
	// subfic r10,r24,20
	xer.ca = ctx.r24.u32 <= 20;
	ctx.r10.s64 = 20 - ctx.r24.s64;
	// addi r11,r24,61
	ctx.r11.s64 = ctx.r24.s64 + 61;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_8380A270:
	// stfs f0,-76(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -76, temp.u32);
	// stw r27,-236(r11)
	PPC_STORE_U32(ctx.r11.u32 + -236, ctx.r27.u32);
	// stw r27,-156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -156, ctx.r27.u32);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8380a270
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8380A270;
loc_8380A284:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380A290"))) PPC_WEAK_FUNC(sub_8380A290);
PPC_FUNC_IMPL(__imp__sub_8380A290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8380A298;
	__savegprlr_26(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x8380A2A4;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x8380A2AC;
	sub_8251B068(ctx, base);
	// bl 0x837e3b90
	ctx.lr = 0x8380A2B0;
	sub_837E3B90(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r26,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r26.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8380A2C4;
	sub_8241F040(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x83809f60
	ctx.lr = 0x8380A2D0;
	sub_83809F60(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r5,324
	ctx.r5.s64 = 324;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x8380A2F4;
	sub_831CE980(ctx, base);
	// addi r27,r30,328
	ctx.r27.s64 = ctx.r30.s64 + 328;
	// addi r4,r29,328
	ctx.r4.s64 = ctx.r29.s64 + 328;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a120f0
	ctx.lr = 0x8380A304;
	sub_82A120F0(ctx, base);
	// lwz r4,440(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8380a320
	if (cr6.eq) goto loc_8380A320;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x8380A320;
	sub_825952B8(ctx, base);
loc_8380A320:
	// stw r26,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r26.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r26,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r26.u32);
	// li r4,356
	ctx.r4.s64 = 356;
	// stw r26,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// bl 0x82595718
	ctx.lr = 0x8380A340;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380a390
	if (cr6.eq) goto loc_8380A390;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,13956
	ctx.r10.s64 = ctx.r11.s64 + 13956;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,324
	ctx.r5.s64 = 324;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x831ce980
	ctx.lr = 0x8380A374;
	sub_831CE980(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r29,328
	ctx.r3.s64 = ctx.r29.s64 + 328;
	// bl 0x82a8e3a8
	ctx.lr = 0x8380A380;
	sub_82A8E3A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stb r11,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r11.u8);
loc_8380A390:
	// bl 0x8353f578
	ctx.lr = 0x8380A394;
	sub_8353F578(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8353f700
	ctx.lr = 0x8380A39C;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x8380A3A0;
	sub_8353F588(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8241f040
	ctx.lr = 0x8380A3AC;
	sub_8241F040(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380A3B4"))) PPC_WEAK_FUNC(sub_8380A3B4);
PPC_FUNC_IMPL(__imp__sub_8380A3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380A3B8"))) PPC_WEAK_FUNC(sub_8380A3B8);
PPC_FUNC_IMPL(__imp__sub_8380A3B8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-3616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3616);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8380a428
	if (!cr6.eq) goto loc_8380A428;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-3616(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3616, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-3848
	ctx.r31.s64 = ctx.r9.s64 + -3848;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,288
	ctx.r4.s64 = 288;
	// bl 0x82477fc8
	ctx.lr = 0x8380A404;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19608
	ctx.r3.s64 = ctx.r8.s64 + -19608;
	// bl 0x831cdcc8
	ctx.lr = 0x8380A410;
	sub_831CDCC8(ctx, base);
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
loc_8380A428:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-3848
	ctx.r3.s64 = ctx.r11.s64 + -3848;
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

__attribute__((alias("__imp__sub_8380A444"))) PPC_WEAK_FUNC(sub_8380A444);
PPC_FUNC_IMPL(__imp__sub_8380A444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380A448"))) PPC_WEAK_FUNC(sub_8380A448);
PPC_FUNC_IMPL(__imp__sub_8380A448) {
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
	// bl 0x8380a3b8
	ctx.lr = 0x8380A460;
	sub_8380A3B8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r6,216
	ctx.r6.s64 = 216;
	// addi r31,r11,17488
	ctx.r31.s64 = ctx.r11.s64 + 17488;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r31,-1928
	ctx.r5.s64 = ctx.r31.s64 + -1928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380A47C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1912
	ctx.r6.s64 = ctx.r31.s64 + -1912;
	// addi r5,r31,-1908
	ctx.r5.s64 = ctx.r31.s64 + -1908;
	// addi r4,r31,-1892
	ctx.r4.s64 = ctx.r31.s64 + -1892;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A494;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1876
	ctx.r5.s64 = ctx.r31.s64 + -1876;
	// li r6,217
	ctx.r6.s64 = 217;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A4A8;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1856
	ctx.r6.s64 = ctx.r31.s64 + -1856;
	// addi r5,r31,-1852
	ctx.r5.s64 = ctx.r31.s64 + -1852;
	// addi r4,r31,-1832
	ctx.r4.s64 = ctx.r31.s64 + -1832;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A4C0;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1812
	ctx.r5.s64 = ctx.r31.s64 + -1812;
	// li r6,218
	ctx.r6.s64 = 218;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A4D4;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1792
	ctx.r6.s64 = ctx.r31.s64 + -1792;
	// addi r5,r31,-1788
	ctx.r5.s64 = ctx.r31.s64 + -1788;
	// addi r4,r31,-1768
	ctx.r4.s64 = ctx.r31.s64 + -1768;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A4EC;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1748
	ctx.r5.s64 = ctx.r31.s64 + -1748;
	// li r6,219
	ctx.r6.s64 = 219;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A500;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1736
	ctx.r6.s64 = ctx.r31.s64 + -1736;
	// addi r5,r31,-1732
	ctx.r5.s64 = ctx.r31.s64 + -1732;
	// addi r4,r31,-1720
	ctx.r4.s64 = ctx.r31.s64 + -1720;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A518;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1708
	ctx.r5.s64 = ctx.r31.s64 + -1708;
	// li r6,220
	ctx.r6.s64 = 220;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A52C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1696
	ctx.r6.s64 = ctx.r31.s64 + -1696;
	// addi r5,r31,-1692
	ctx.r5.s64 = ctx.r31.s64 + -1692;
	// addi r4,r31,-1680
	ctx.r4.s64 = ctx.r31.s64 + -1680;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A544;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1668
	ctx.r5.s64 = ctx.r31.s64 + -1668;
	// li r6,221
	ctx.r6.s64 = 221;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A558;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1656
	ctx.r6.s64 = ctx.r31.s64 + -1656;
	// addi r5,r31,-1652
	ctx.r5.s64 = ctx.r31.s64 + -1652;
	// addi r4,r31,-1640
	ctx.r4.s64 = ctx.r31.s64 + -1640;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A570;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1628
	ctx.r5.s64 = ctx.r31.s64 + -1628;
	// li r6,222
	ctx.r6.s64 = 222;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A584;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1612
	ctx.r6.s64 = ctx.r31.s64 + -1612;
	// addi r5,r31,-1608
	ctx.r5.s64 = ctx.r31.s64 + -1608;
	// addi r4,r31,-1592
	ctx.r4.s64 = ctx.r31.s64 + -1592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A59C;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1576
	ctx.r5.s64 = ctx.r31.s64 + -1576;
	// li r6,223
	ctx.r6.s64 = 223;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A5B0;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1560
	ctx.r6.s64 = ctx.r31.s64 + -1560;
	// addi r5,r31,-1556
	ctx.r5.s64 = ctx.r31.s64 + -1556;
	// addi r4,r31,-1540
	ctx.r4.s64 = ctx.r31.s64 + -1540;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A5C8;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1524
	ctx.r5.s64 = ctx.r31.s64 + -1524;
	// li r6,224
	ctx.r6.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A5DC;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1504
	ctx.r6.s64 = ctx.r31.s64 + -1504;
	// addi r5,r31,-1500
	ctx.r5.s64 = ctx.r31.s64 + -1500;
	// addi r4,r31,-1480
	ctx.r4.s64 = ctx.r31.s64 + -1480;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A5F4;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1460
	ctx.r5.s64 = ctx.r31.s64 + -1460;
	// li r6,225
	ctx.r6.s64 = 225;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A608;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1444
	ctx.r6.s64 = ctx.r31.s64 + -1444;
	// addi r5,r31,-1440
	ctx.r5.s64 = ctx.r31.s64 + -1440;
	// addi r4,r31,-1424
	ctx.r4.s64 = ctx.r31.s64 + -1424;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A620;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1408
	ctx.r5.s64 = ctx.r31.s64 + -1408;
	// li r6,226
	ctx.r6.s64 = 226;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A634;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1384
	ctx.r6.s64 = ctx.r31.s64 + -1384;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r31,-1380
	ctx.r5.s64 = ctx.r31.s64 + -1380;
	// addi r4,r31,-1356
	ctx.r4.s64 = ctx.r31.s64 + -1356;
	// bl 0x82479460
	ctx.lr = 0x8380A64C;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1332
	ctx.r5.s64 = ctx.r31.s64 + -1332;
	// li r6,227
	ctx.r6.s64 = 227;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A660;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1316
	ctx.r6.s64 = ctx.r31.s64 + -1316;
	// addi r5,r31,-1312
	ctx.r5.s64 = ctx.r31.s64 + -1312;
	// addi r4,r31,-1296
	ctx.r4.s64 = ctx.r31.s64 + -1296;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A678;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1280
	ctx.r5.s64 = ctx.r31.s64 + -1280;
	// li r6,228
	ctx.r6.s64 = 228;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A68C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1260
	ctx.r6.s64 = ctx.r31.s64 + -1260;
	// addi r5,r31,-1256
	ctx.r5.s64 = ctx.r31.s64 + -1256;
	// addi r4,r31,-1236
	ctx.r4.s64 = ctx.r31.s64 + -1236;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A6A4;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1216
	ctx.r5.s64 = ctx.r31.s64 + -1216;
	// li r6,229
	ctx.r6.s64 = 229;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A6B8;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1200
	ctx.r6.s64 = ctx.r31.s64 + -1200;
	// addi r5,r31,-1196
	ctx.r5.s64 = ctx.r31.s64 + -1196;
	// addi r4,r31,-1180
	ctx.r4.s64 = ctx.r31.s64 + -1180;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A6D0;
	sub_82479460(ctx, base);
	// addi r5,r31,-1164
	ctx.r5.s64 = ctx.r31.s64 + -1164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,230
	ctx.r6.s64 = 230;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A6E4;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1140
	ctx.r6.s64 = ctx.r31.s64 + -1140;
	// addi r5,r31,-1136
	ctx.r5.s64 = ctx.r31.s64 + -1136;
	// addi r4,r31,-1112
	ctx.r4.s64 = ctx.r31.s64 + -1112;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A6FC;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1088
	ctx.r5.s64 = ctx.r31.s64 + -1088;
	// li r6,231
	ctx.r6.s64 = 231;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A710;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1072
	ctx.r6.s64 = ctx.r31.s64 + -1072;
	// addi r5,r31,-1068
	ctx.r5.s64 = ctx.r31.s64 + -1068;
	// addi r4,r31,-1052
	ctx.r4.s64 = ctx.r31.s64 + -1052;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A728;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,232
	ctx.r6.s64 = 232;
	// addi r5,r31,-1036
	ctx.r5.s64 = ctx.r31.s64 + -1036;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A73C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1016
	ctx.r6.s64 = ctx.r31.s64 + -1016;
	// addi r5,r31,-1012
	ctx.r5.s64 = ctx.r31.s64 + -1012;
	// addi r4,r31,-992
	ctx.r4.s64 = ctx.r31.s64 + -992;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A754;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-972
	ctx.r5.s64 = ctx.r31.s64 + -972;
	// li r6,233
	ctx.r6.s64 = 233;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A768;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-956
	ctx.r6.s64 = ctx.r31.s64 + -956;
	// addi r5,r31,-952
	ctx.r5.s64 = ctx.r31.s64 + -952;
	// addi r4,r31,-936
	ctx.r4.s64 = ctx.r31.s64 + -936;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A780;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-920
	ctx.r5.s64 = ctx.r31.s64 + -920;
	// li r6,234
	ctx.r6.s64 = 234;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A794;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-896
	ctx.r6.s64 = ctx.r31.s64 + -896;
	// addi r5,r31,-892
	ctx.r5.s64 = ctx.r31.s64 + -892;
	// addi r4,r31,-868
	ctx.r4.s64 = ctx.r31.s64 + -868;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A7AC;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-844
	ctx.r5.s64 = ctx.r31.s64 + -844;
	// li r6,235
	ctx.r6.s64 = 235;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A7C0;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-828
	ctx.r6.s64 = ctx.r31.s64 + -828;
	// addi r5,r31,-824
	ctx.r5.s64 = ctx.r31.s64 + -824;
	// addi r4,r31,-808
	ctx.r4.s64 = ctx.r31.s64 + -808;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A7D8;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-792
	ctx.r5.s64 = ctx.r31.s64 + -792;
	// li r6,236
	ctx.r6.s64 = 236;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A7EC;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-772
	ctx.r6.s64 = ctx.r31.s64 + -772;
	// addi r5,r31,-768
	ctx.r5.s64 = ctx.r31.s64 + -768;
	// addi r4,r31,-748
	ctx.r4.s64 = ctx.r31.s64 + -748;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A804;
	sub_82479460(ctx, base);
	// addi r5,r31,-728
	ctx.r5.s64 = ctx.r31.s64 + -728;
	// li r6,237
	ctx.r6.s64 = 237;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824788c8
	ctx.lr = 0x8380A818;
	sub_824788C8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,-712
	ctx.r6.s64 = ctx.r31.s64 + -712;
	// addi r5,r31,-708
	ctx.r5.s64 = ctx.r31.s64 + -708;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-692
	ctx.r4.s64 = ctx.r31.s64 + -692;
	// bl 0x82479460
	ctx.lr = 0x8380A830;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-676
	ctx.r5.s64 = ctx.r31.s64 + -676;
	// li r6,238
	ctx.r6.s64 = 238;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380A844;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-652
	ctx.r6.s64 = ctx.r31.s64 + -652;
	// addi r5,r31,-648
	ctx.r5.s64 = ctx.r31.s64 + -648;
	// addi r4,r31,-624
	ctx.r4.s64 = ctx.r31.s64 + -624;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A85C;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-600
	ctx.r5.s64 = ctx.r31.s64 + -600;
	// li r6,239
	ctx.r6.s64 = 239;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x824788c8
	ctx.lr = 0x8380A870;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-584
	ctx.r6.s64 = ctx.r31.s64 + -584;
	// addi r5,r31,-580
	ctx.r5.s64 = ctx.r31.s64 + -580;
	// addi r4,r31,-564
	ctx.r4.s64 = ctx.r31.s64 + -564;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A888;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-548
	ctx.r5.s64 = ctx.r31.s64 + -548;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824788c8
	ctx.lr = 0x8380A89C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-536
	ctx.r6.s64 = ctx.r31.s64 + -536;
	// addi r5,r31,-532
	ctx.r5.s64 = ctx.r31.s64 + -532;
	// addi r4,r31,-520
	ctx.r4.s64 = ctx.r31.s64 + -520;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A8B4;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-508
	ctx.r5.s64 = ctx.r31.s64 + -508;
	// li r6,244
	ctx.r6.s64 = 244;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380A8C8;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-496
	ctx.r6.s64 = ctx.r31.s64 + -496;
	// addi r5,r31,-492
	ctx.r5.s64 = ctx.r31.s64 + -492;
	// addi r4,r31,-480
	ctx.r4.s64 = ctx.r31.s64 + -480;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A8E0;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-468
	ctx.r5.s64 = ctx.r31.s64 + -468;
	// li r6,248
	ctx.r6.s64 = 248;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380A8F4;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-460
	ctx.r6.s64 = ctx.r31.s64 + -460;
	// addi r5,r31,-456
	ctx.r5.s64 = ctx.r31.s64 + -456;
	// addi r4,r31,-448
	ctx.r4.s64 = ctx.r31.s64 + -448;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A90C;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-440
	ctx.r5.s64 = ctx.r31.s64 + -440;
	// li r6,252
	ctx.r6.s64 = 252;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380A920;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-424
	ctx.r6.s64 = ctx.r31.s64 + -424;
	// addi r5,r31,-420
	ctx.r5.s64 = ctx.r31.s64 + -420;
	// addi r4,r31,-404
	ctx.r4.s64 = ctx.r31.s64 + -404;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A938;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-388
	ctx.r5.s64 = ctx.r31.s64 + -388;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380A94C;
	sub_824788C8(ctx, base);
	// addi r6,r31,-372
	ctx.r6.s64 = ctx.r31.s64 + -372;
	// addi r5,r31,-368
	ctx.r5.s64 = ctx.r31.s64 + -368;
	// addi r4,r31,-352
	ctx.r4.s64 = ctx.r31.s64 + -352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A964;
	sub_82479460(ctx, base);
	// addi r5,r31,-336
	ctx.r5.s64 = ctx.r31.s64 + -336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,260
	ctx.r6.s64 = 260;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380A978;
	sub_824788C8(ctx, base);
	// addi r6,r31,-316
	ctx.r6.s64 = ctx.r31.s64 + -316;
	// addi r5,r31,-312
	ctx.r5.s64 = ctx.r31.s64 + -312;
	// addi r4,r31,-292
	ctx.r4.s64 = ctx.r31.s64 + -292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A990;
	sub_82479460(ctx, base);
	// addi r5,r31,-272
	ctx.r5.s64 = ctx.r31.s64 + -272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,264
	ctx.r6.s64 = 264;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380A9A4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-256
	ctx.r6.s64 = ctx.r31.s64 + -256;
	// addi r5,r31,-252
	ctx.r5.s64 = ctx.r31.s64 + -252;
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A9BC;
	sub_82479460(ctx, base);
	// addi r5,r31,-220
	ctx.r5.s64 = ctx.r31.s64 + -220;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,268
	ctx.r6.s64 = 268;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824788c8
	ctx.lr = 0x8380A9D0;
	sub_824788C8(ctx, base);
	// addi r6,r31,-204
	ctx.r6.s64 = ctx.r31.s64 + -204;
	// addi r5,r31,-200
	ctx.r5.s64 = ctx.r31.s64 + -200;
	// addi r4,r31,-184
	ctx.r4.s64 = ctx.r31.s64 + -184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380A9E8;
	sub_82479460(ctx, base);
	// addi r5,r31,-168
	ctx.r5.s64 = ctx.r31.s64 + -168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,272
	ctx.r6.s64 = 272;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380A9FC;
	sub_824788C8(ctx, base);
	// addi r6,r31,-152
	ctx.r6.s64 = ctx.r31.s64 + -152;
	// addi r5,r31,-148
	ctx.r5.s64 = ctx.r31.s64 + -148;
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380AA14;
	sub_82479460(ctx, base);
	// addi r5,r31,-116
	ctx.r5.s64 = ctx.r31.s64 + -116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,276
	ctx.r6.s64 = 276;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380AA28;
	sub_824788C8(ctx, base);
	// addi r6,r31,-108
	ctx.r6.s64 = ctx.r31.s64 + -108;
	// addi r5,r31,-104
	ctx.r5.s64 = ctx.r31.s64 + -104;
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380AA40;
	sub_82479460(ctx, base);
	// addi r5,r31,-88
	ctx.r5.s64 = ctx.r31.s64 + -88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,280
	ctx.r6.s64 = 280;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380AA54;
	sub_824788C8(ctx, base);
	// addi r6,r31,-72
	ctx.r6.s64 = ctx.r31.s64 + -72;
	// addi r5,r31,-68
	ctx.r5.s64 = ctx.r31.s64 + -68;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380AA6C;
	sub_82479460(ctx, base);
	// addi r5,r31,-36
	ctx.r5.s64 = ctx.r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,284
	ctx.r6.s64 = 284;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380AA80;
	sub_824788C8(ctx, base);
	// addi r6,r31,-20
	ctx.r6.s64 = ctx.r31.s64 + -20;
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380AA98;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_8380AAB0"))) PPC_WEAK_FUNC(sub_8380AAB0);
PPC_FUNC_IMPL(__imp__sub_8380AAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8380AAB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,360
	ctx.r4.s64 = 360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8380AADC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380ab18
	if (cr6.eq) goto loc_8380AB18;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8251b010
	ctx.lr = 0x8380AAF0;
	sub_8251B010(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r9,r10,17616
	ctx.r9.s64 = ctx.r10.s64 + 17616;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x837db800
	ctx.lr = 0x8380AB08;
	sub_837DB800(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r30.u8);
	// b 0x8380ab1c
	goto loc_8380AB1C;
loc_8380AB18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8380AB1C:
	// std r30,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r30.u64);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8241f040
	ctx.lr = 0x8380AB28;
	sub_8241F040(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380AB34"))) PPC_WEAK_FUNC(sub_8380AB34);
PPC_FUNC_IMPL(__imp__sub_8380AB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380AB38"))) PPC_WEAK_FUNC(sub_8380AB38);
PPC_FUNC_IMPL(__imp__sub_8380AB38) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-3376(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3376);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8380aba8
	if (!cr6.eq) goto loc_8380ABA8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-3376(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3376, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-3608
	ctx.r31.s64 = ctx.r9.s64 + -3608;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,360
	ctx.r4.s64 = 360;
	// bl 0x82477fc8
	ctx.lr = 0x8380AB84;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19592
	ctx.r3.s64 = ctx.r8.s64 + -19592;
	// bl 0x831cdcc8
	ctx.lr = 0x8380AB90;
	sub_831CDCC8(ctx, base);
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
loc_8380ABA8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-3608
	ctx.r3.s64 = ctx.r11.s64 + -3608;
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

__attribute__((alias("__imp__sub_8380ABC4"))) PPC_WEAK_FUNC(sub_8380ABC4);
PPC_FUNC_IMPL(__imp__sub_8380ABC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380ABC8"))) PPC_WEAK_FUNC(sub_8380ABC8);
PPC_FUNC_IMPL(__imp__sub_8380ABC8) {
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
	// bl 0x8380ab38
	ctx.lr = 0x8380ABDC;
	sub_8380AB38(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17504
	ctx.r4.s64 = ctx.r11.s64 + 17504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8380ABF4;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x8380AC00;
	sub_8246BE10(ctx, base);
	// bl 0x8251af80
	ctx.lr = 0x8380AC04;
	sub_8251AF80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x8380AC10;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_8380AC24"))) PPC_WEAK_FUNC(sub_8380AC24);
PPC_FUNC_IMPL(__imp__sub_8380AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380AC28"))) PPC_WEAK_FUNC(sub_8380AC28);
PPC_FUNC_IMPL(__imp__sub_8380AC28) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,17616
	ctx.r10.s64 = ctx.r11.s64 + 17616;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x8251b278
	ctx.lr = 0x8380AC54;
	sub_8251B278(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8380ac74
	if (cr6.eq) goto loc_8380AC74;
	// bl 0x82595188
	ctx.lr = 0x8380AC64;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8380AC74;
	sub_825952B8(ctx, base);
loc_8380AC74:
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

__attribute__((alias("__imp__sub_8380AC90"))) PPC_WEAK_FUNC(sub_8380AC90);
PPC_FUNC_IMPL(__imp__sub_8380AC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8380AC98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,300
	ctx.r4.s64 = 300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8380ACB8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380ace8
	if (cr6.eq) goto loc_8380ACE8;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// addi r10,r11,17716
	ctx.r10.s64 = ctx.r11.s64 + 17716;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,292
	ctx.r5.s64 = 292;
	// bl 0x831ce980
	ctx.lr = 0x8380ACE0;
	sub_831CE980(ctx, base);
	// stb r29,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r29.u8);
	// b 0x8380acec
	goto loc_8380ACEC;
loc_8380ACE8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8380ACEC:
	// bl 0x8353f578
	ctx.lr = 0x8380ACF0;
	sub_8353F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f700
	ctx.lr = 0x8380ACF8;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x8380ACFC;
	sub_8353F588(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8380ad34
	if (cr6.eq) goto loc_8380AD34;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8380AD14;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8380AD2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8380AD34;
	sub_82595170(ctx, base);
loc_8380AD34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380AD3C"))) PPC_WEAK_FUNC(sub_8380AD3C);
PPC_FUNC_IMPL(__imp__sub_8380AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380AD40"))) PPC_WEAK_FUNC(sub_8380AD40);
PPC_FUNC_IMPL(__imp__sub_8380AD40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8380ab38
	sub_8380AB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380AD44"))) PPC_WEAK_FUNC(sub_8380AD44);
PPC_FUNC_IMPL(__imp__sub_8380AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380AD48"))) PPC_WEAK_FUNC(sub_8380AD48);
PPC_FUNC_IMPL(__imp__sub_8380AD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8380AD50;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824b3de0
	ctx.lr = 0x8380AD60;
	sub_824B3DE0(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r9,r11,17728
	ctx.r9.s64 = ctx.r11.s64 + 17728;
	// addi r4,r10,14014
	ctx.r4.s64 = ctx.r10.s64 + 14014;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82420a60
	ctx.lr = 0x8380AD7C;
	sub_82420A60(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r29,168(r31)
	PPC_STORE_U64(ctx.r31.u32 + 168, ctx.r29.u64);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// bl 0x82422f40
	ctx.lr = 0x8380ADA4;
	sub_82422F40(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stb r29,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r29.u8);
	// lis r5,-32222
	ctx.r5.s64 = -2111700992;
	// stb r29,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r29.u8);
	// li r26,2
	ctx.r26.s64 = 2;
	// stb r29,146(r31)
	PPC_STORE_U8(ctx.r31.u32 + 146, ctx.r29.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f31,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-24912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,11772(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11772);
	ctx.f13.f64 = double(temp.f32);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lfs f12,-26260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r4.u32);
	// stfs f31,104(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r25,r11,9580
	ctx.r25.s64 = ctx.r11.s64 + 9580;
	// stfs f31,128(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
loc_8380AE04:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8380ae60
	if (cr6.lt) goto loc_8380AE60;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8380ae50
	if (!cr6.gt) goto loc_8380AE50;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x8247b270
	ctx.lr = 0x8380AE4C;
	sub_8247B270(ctx, base);
	// b 0x8380ae54
	goto loc_8380AE54;
loc_8380AE50:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8380AE54:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380ae84
	if (cr6.eq) goto loc_8380AE84;
loc_8380AE60:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8380ae78
	if (cr0.eq) goto loc_8380AE78;
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
loc_8380AE78:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8380AE84:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne 0x8380ae04
	if (!cr0.eq) goto loc_8380AE04;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f31,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfs f31,260(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// stfs f31,272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// li r11,100
	ctx.r11.s64 = 100;
	// stb r29,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r29.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// lfs f13,25596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25596);
	ctx.f13.f64 = double(temp.f32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,50
	ctx.r5.s64 = 50;
	// stfs f13,248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f13,276(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// lfs f0,-11316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11316);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r10.u8);
	// lfs f13,-20096(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20096);
	ctx.f13.f64 = double(temp.f32);
	// stb r10,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r10.u8);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stb r5,183(r31)
	PPC_STORE_U8(ctx.r31.u32 + 183, ctx.r5.u8);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stw r10,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r10.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// stfs f13,264(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stfs f0,284(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// stb r11,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r11.u8);
	// stb r29,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r29.u8);
	// stb r29,218(r31)
	PPC_STORE_U8(ctx.r31.u32 + 218, ctx.r29.u8);
	// stb r11,219(r31)
	PPC_STORE_U8(ctx.r31.u32 + 219, ctx.r11.u8);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// stb r11,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r11.u8);
	// stb r29,222(r31)
	PPC_STORE_U8(ctx.r31.u32 + 222, ctx.r29.u8);
	// stb r11,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r11.u8);
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// stb r11,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r11.u8);
	// stb r11,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r11.u8);
	// stb r11,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r11.u8);
	// stb r11,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r11.u8);
	// stb r11,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r11.u8);
	// stb r11,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r11.u8);
	// stb r11,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r11.u8);
	// stb r11,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r11.u8);
	// stb r11,233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 233, ctx.r11.u8);
	// stb r11,234(r31)
	PPC_STORE_U8(ctx.r31.u32 + 234, ctx.r11.u8);
	// stb r11,235(r31)
	PPC_STORE_U8(ctx.r31.u32 + 235, ctx.r11.u8);
	// stb r11,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r11.u8);
	// stb r11,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r11.u8);
	// stb r11,238(r31)
	PPC_STORE_U8(ctx.r31.u32 + 238, ctx.r11.u8);
	// stb r29,239(r31)
	PPC_STORE_U8(ctx.r31.u32 + 239, ctx.r29.u8);
	// stb r29,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r29.u8);
	// stb r29,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380AF88"))) PPC_WEAK_FUNC(sub_8380AF88);
PPC_FUNC_IMPL(__imp__sub_8380AF88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8380a3b8
	sub_8380A3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380AF8C"))) PPC_WEAK_FUNC(sub_8380AF8C);
PPC_FUNC_IMPL(__imp__sub_8380AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380AF90"))) PPC_WEAK_FUNC(sub_8380AF90);
PPC_FUNC_IMPL(__imp__sub_8380AF90) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8380afe0
	if (cr6.eq) goto loc_8380AFE0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b3ea8
	ctx.lr = 0x8380AFC0;
	sub_824B3EA8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,17728
	ctx.r10.s64 = ctx.r11.s64 + 17728;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824201f0
	ctx.lr = 0x8380AFD8;
	sub_824201F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8380afe4
	goto loc_8380AFE4;
loc_8380AFE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8380AFE4:
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

__attribute__((alias("__imp__sub_8380AFFC"))) PPC_WEAK_FUNC(sub_8380AFFC);
PPC_FUNC_IMPL(__imp__sub_8380AFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380B000"))) PPC_WEAK_FUNC(sub_8380B000);
PPC_FUNC_IMPL(__imp__sub_8380B000) {
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
	// bl 0x82467738
	ctx.lr = 0x8380B018;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,288
	ctx.r3.s64 = 288;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8380B02C;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380b050
	if (cr6.eq) goto loc_8380B050;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8380ad48
	ctx.lr = 0x8380B03C;
	sub_8380AD48(ctx, base);
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
loc_8380B050:
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

__attribute__((alias("__imp__sub_8380B068"))) PPC_WEAK_FUNC(sub_8380B068);
PPC_FUNC_IMPL(__imp__sub_8380B068) {
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
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82422cd0
	ctx.lr = 0x8380B08C;
	sub_82422CD0(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8241fb00
	ctx.lr = 0x8380B094;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824b40a8
	ctx.lr = 0x8380B09C;
	sub_824B40A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380b0b4
	if (cr6.eq) goto loc_8380B0B4;
	// bl 0x8248b818
	ctx.lr = 0x8380B0B0;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8380B0B4:
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

__attribute__((alias("__imp__sub_8380B0CC"))) PPC_WEAK_FUNC(sub_8380B0CC);
PPC_FUNC_IMPL(__imp__sub_8380B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380B0D0"))) PPC_WEAK_FUNC(sub_8380B0D0);
PPC_FUNC_IMPL(__imp__sub_8380B0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8380B0D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x837db800
	ctx.lr = 0x8380B0F0;
	sub_837DB800(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stb r28,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r28.u8);
	// bl 0x8252e3c0
	ctx.lr = 0x8380B104;
	sub_8252E3C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8380B108:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8380b108
	if (!cr6.eq) goto loc_8380B108;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-3
	ctx.r3.s64 = ctx.r11.s64 + -3;
	// bl 0x831d88a0
	ctx.lr = 0x8380B130;
	sub_831D88A0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82420258
	ctx.lr = 0x8380B154;
	sub_82420258(ctx, base);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8380b168
	if (cr6.lt) goto loc_8380B168;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8380B168:
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x8380B17C;
	sub_831CE7D8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8380b190
	if (cr6.lt) goto loc_8380B190;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8386d088
	ctx.lr = 0x8380B190;
	sub_8386D088(ctx, base);
loc_8380B190:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r28.u8);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8380f5f0
	ctx.lr = 0x8380B1AC;
	sub_8380F5F0(ctx, base);
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f13,132(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r11,r31,170
	ctx.r11.s64 = ctx.r31.s64 + 170;
	// lfs f12,136(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stfs f12,152(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// subfic r8,r31,-170
	xer.ca = ctx.r31.u32 <= 4294967126;
	ctx.r8.s64 = -170 - ctx.r31.s64;
	// lfs f11,140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,156(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// lbz r10,144(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// stb r10,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r10.u8);
	// lbz r7,145(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 145);
	// stb r7,161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 161, ctx.r7.u8);
	// lbz r6,146(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 146);
	// stb r6,162(r31)
	PPC_STORE_U8(ctx.r31.u32 + 162, ctx.r6.u8);
	// lfs f10,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,164(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lwz r5,152(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stb r5,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r5.u8);
loc_8380B208:
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8380b228
	if (!cr6.lt) goto loc_8380B228;
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// b 0x8380b22c
	goto loc_8380B22C;
loc_8380B228:
	// sth r28,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r28.u16);
loc_8380B22C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8380b208
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8380B208;
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stb r11,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r11.u8);
	// lbz r9,180(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 180);
	// stb r9,179(r31)
	PPC_STORE_U8(ctx.r31.u32 + 179, ctx.r9.u8);
	// lbz r8,181(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 181);
	// stb r8,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r8.u8);
	// lbz r7,182(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 182);
	// stb r7,181(r31)
	PPC_STORE_U8(ctx.r31.u32 + 181, ctx.r7.u8);
	// lbz r6,183(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 183);
	// stb r6,182(r31)
	PPC_STORE_U8(ctx.r31.u32 + 182, ctx.r6.u8);
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r5,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r5.u32);
	// lwz r4,188(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// lwz r9,204(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// lwz r8,208(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r8,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r8.u32);
	// lwz r7,212(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// lbz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// stb r6,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r6.u8);
	// lbz r5,217(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 217);
	// stb r5,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r5.u8);
	// lbz r4,218(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 218);
	// stb r4,218(r31)
	PPC_STORE_U8(ctx.r31.u32 + 218, ctx.r4.u8);
	// lbz r3,219(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 219);
	// stb r3,219(r31)
	PPC_STORE_U8(ctx.r31.u32 + 219, ctx.r3.u8);
	// lbz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 220);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// lbz r10,221(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 221);
	// stb r10,221(r31)
	PPC_STORE_U8(ctx.r31.u32 + 221, ctx.r10.u8);
	// lbz r9,222(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 222);
	// stb r9,222(r31)
	PPC_STORE_U8(ctx.r31.u32 + 222, ctx.r9.u8);
	// lbz r8,223(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 223);
	// stb r8,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r8.u8);
	// lbz r7,224(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 224);
	// stb r7,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r7.u8);
	// lbz r6,225(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 225);
	// stb r6,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r6.u8);
	// lbz r5,226(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 226);
	// stb r5,226(r31)
	PPC_STORE_U8(ctx.r31.u32 + 226, ctx.r5.u8);
	// lbz r4,227(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 227);
	// stb r4,227(r31)
	PPC_STORE_U8(ctx.r31.u32 + 227, ctx.r4.u8);
	// lbz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 228);
	// stb r3,228(r31)
	PPC_STORE_U8(ctx.r31.u32 + 228, ctx.r3.u8);
	// lbz r11,229(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 229);
	// stb r11,229(r31)
	PPC_STORE_U8(ctx.r31.u32 + 229, ctx.r11.u8);
	// lbz r10,230(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 230);
	// stb r10,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r10.u8);
	// lbz r9,231(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 231);
	// stb r9,231(r31)
	PPC_STORE_U8(ctx.r31.u32 + 231, ctx.r9.u8);
	// lbz r8,232(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 232);
	// stb r8,232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 232, ctx.r8.u8);
	// lbz r7,233(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 233);
	// stb r7,233(r31)
	PPC_STORE_U8(ctx.r31.u32 + 233, ctx.r7.u8);
	// lbz r6,234(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 234);
	// stb r6,234(r31)
	PPC_STORE_U8(ctx.r31.u32 + 234, ctx.r6.u8);
	// lbz r5,235(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 235);
	// stb r5,235(r31)
	PPC_STORE_U8(ctx.r31.u32 + 235, ctx.r5.u8);
	// lbz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 236);
	// stb r4,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r4.u8);
	// lbz r3,237(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 237);
	// stb r3,237(r31)
	PPC_STORE_U8(ctx.r31.u32 + 237, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,238(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 238);
	// stb r11,238(r31)
	PPC_STORE_U8(ctx.r31.u32 + 238, ctx.r11.u8);
	// lbz r10,239(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 239);
	// stb r10,239(r31)
	PPC_STORE_U8(ctx.r31.u32 + 239, ctx.r10.u8);
	// lbz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 240);
	// stb r9,240(r31)
	PPC_STORE_U8(ctx.r31.u32 + 240, ctx.r9.u8);
	// lfs f0,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f13,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f12,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,252(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f11,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,256(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f10,260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,260(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f9,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,264(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lbz r8,268(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 268);
	// stb r8,268(r31)
	PPC_STORE_U8(ctx.r31.u32 + 268, ctx.r8.u8);
	// lfs f8,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,272(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lfs f7,276(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,276(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// lfs f6,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,280(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f5,284(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,284(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380B3CC"))) PPC_WEAK_FUNC(sub_8380B3CC);
PPC_FUNC_IMPL(__imp__sub_8380B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380B3D0"))) PPC_WEAK_FUNC(sub_8380B3D0);
PPC_FUNC_IMPL(__imp__sub_8380B3D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8380B3D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x8380B3E4;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8251b068
	ctx.lr = 0x8380B3EC;
	sub_8251B068(ctx, base);
	// bl 0x837e3c00
	ctx.lr = 0x8380B3F0;
	sub_837E3C00(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8380B404;
	sub_8241F040(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8380b0d0
	ctx.lr = 0x8380B410;
	sub_8380B0D0(ctx, base);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,292
	ctx.r5.s64 = 292;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x8380B424;
	sub_831CE980(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,300
	ctx.r4.s64 = 300;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x8380B438;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380b46c
	if (cr6.eq) goto loc_8380B46C;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,17716
	ctx.r10.s64 = ctx.r11.s64 + 17716;
	// li r5,292
	ctx.r5.s64 = 292;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x8380B460;
	sub_831CE980(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stb r9,296(r31)
	PPC_STORE_U8(ctx.r31.u32 + 296, ctx.r9.u8);
loc_8380B46C:
	// bl 0x8353f578
	ctx.lr = 0x8380B470;
	sub_8353F578(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8353f700
	ctx.lr = 0x8380B478;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x8380B47C;
	sub_8353F588(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241f040
	ctx.lr = 0x8380B488;
	sub_8241F040(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380B490"))) PPC_WEAK_FUNC(sub_8380B490);
PPC_FUNC_IMPL(__imp__sub_8380B490) {
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
	// bl 0x8380a3b8
	ctx.lr = 0x8380B4A8;
	sub_8380A3B8(ctx, base);
	// lis r11,-31871
	ctx.r11.s64 = -2088697856;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-20480
	ctx.r4.s64 = ctx.r11.s64 + -20480;
	// bl 0x8246be80
	ctx.lr = 0x8380B4B8;
	sub_8246BE80(ctx, base);
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r10,15540
	ctx.r31.s64 = ctx.r10.s64 + 15540;
	// li r6,104
	ctx.r6.s64 = 104;
	// addi r5,r31,-1272
	ctx.r5.s64 = ctx.r31.s64 + -1272;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380B4D4;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1256
	ctx.r6.s64 = ctx.r31.s64 + -1256;
	// addi r5,r31,-1252
	ctx.r5.s64 = ctx.r31.s64 + -1252;
	// addi r4,r31,-1236
	ctx.r4.s64 = ctx.r31.s64 + -1236;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B4EC;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1220
	ctx.r5.s64 = ctx.r31.s64 + -1220;
	// li r6,108
	ctx.r6.s64 = 108;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B500;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1208
	ctx.r6.s64 = ctx.r31.s64 + -1208;
	// addi r5,r31,-1204
	ctx.r5.s64 = ctx.r31.s64 + -1204;
	// addi r4,r31,-1192
	ctx.r4.s64 = ctx.r31.s64 + -1192;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B518;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1180
	ctx.r5.s64 = ctx.r31.s64 + -1180;
	// li r6,112
	ctx.r6.s64 = 112;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x824788c8
	ctx.lr = 0x8380B52C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1168
	ctx.r6.s64 = ctx.r31.s64 + -1168;
	// addi r5,r31,-1164
	ctx.r5.s64 = ctx.r31.s64 + -1164;
	// addi r4,r31,-1152
	ctx.r4.s64 = ctx.r31.s64 + -1152;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B544;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1140
	ctx.r5.s64 = ctx.r31.s64 + -1140;
	// li r6,128
	ctx.r6.s64 = 128;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380B558;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1124
	ctx.r6.s64 = ctx.r31.s64 + -1124;
	// addi r5,r31,-1120
	ctx.r5.s64 = ctx.r31.s64 + -1120;
	// addi r4,r31,-1104
	ctx.r4.s64 = ctx.r31.s64 + -1104;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B570;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1088
	ctx.r5.s64 = ctx.r31.s64 + -1088;
	// li r6,132
	ctx.r6.s64 = 132;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380B584;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1076
	ctx.r6.s64 = ctx.r31.s64 + -1076;
	// addi r5,r31,-1072
	ctx.r5.s64 = ctx.r31.s64 + -1072;
	// addi r4,r31,-1060
	ctx.r4.s64 = ctx.r31.s64 + -1060;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B59C;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-1048
	ctx.r5.s64 = ctx.r31.s64 + -1048;
	// li r6,136
	ctx.r6.s64 = 136;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380B5B0;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-1040
	ctx.r6.s64 = ctx.r31.s64 + -1040;
	// addi r5,r31,-1036
	ctx.r5.s64 = ctx.r31.s64 + -1036;
	// addi r4,r31,-1028
	ctx.r4.s64 = ctx.r31.s64 + -1028;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B5C8;
	sub_82479460(ctx, base);
	// addi r5,r31,-1020
	ctx.r5.s64 = ctx.r31.s64 + -1020;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,140
	ctx.r6.s64 = 140;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380B5DC;
	sub_824788C8(ctx, base);
	// addi r6,r31,-1004
	ctx.r6.s64 = ctx.r31.s64 + -1004;
	// addi r5,r31,-1000
	ctx.r5.s64 = ctx.r31.s64 + -1000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,-984
	ctx.r4.s64 = ctx.r31.s64 + -984;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B5F4;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-968
	ctx.r5.s64 = ctx.r31.s64 + -968;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x824788c8
	ctx.lr = 0x8380B608;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-948
	ctx.r6.s64 = ctx.r31.s64 + -948;
	// addi r5,r31,-944
	ctx.r5.s64 = ctx.r31.s64 + -944;
	// addi r4,r31,-924
	ctx.r4.s64 = ctx.r31.s64 + -924;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B620;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-904
	ctx.r5.s64 = ctx.r31.s64 + -904;
	// li r6,145
	ctx.r6.s64 = 145;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x824788c8
	ctx.lr = 0x8380B634;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-892
	ctx.r6.s64 = ctx.r31.s64 + -892;
	// addi r5,r31,-888
	ctx.r5.s64 = ctx.r31.s64 + -888;
	// addi r4,r31,-876
	ctx.r4.s64 = ctx.r31.s64 + -876;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B64C;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-864
	ctx.r5.s64 = ctx.r31.s64 + -864;
	// li r6,146
	ctx.r6.s64 = 146;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x824788c8
	ctx.lr = 0x8380B660;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-848
	ctx.r6.s64 = ctx.r31.s64 + -848;
	// addi r5,r31,-844
	ctx.r5.s64 = ctx.r31.s64 + -844;
	// addi r4,r31,-828
	ctx.r4.s64 = ctx.r31.s64 + -828;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B678;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-812
	ctx.r5.s64 = ctx.r31.s64 + -812;
	// li r6,148
	ctx.r6.s64 = 148;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x824788c8
	ctx.lr = 0x8380B68C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-788
	ctx.r6.s64 = ctx.r31.s64 + -788;
	// addi r5,r31,-784
	ctx.r5.s64 = ctx.r31.s64 + -784;
	// addi r4,r31,-760
	ctx.r4.s64 = ctx.r31.s64 + -760;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B6A4;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r31,-736
	ctx.r7.s64 = ctx.r31.s64 + -736;
	// addi r5,r31,-712
	ctx.r5.s64 = ctx.r31.s64 + -712;
	// li r6,152
	ctx.r6.s64 = 152;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82478958
	ctx.lr = 0x8380B6BC;
	sub_82478958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-700
	ctx.r6.s64 = ctx.r31.s64 + -700;
	// addi r5,r31,-696
	ctx.r5.s64 = ctx.r31.s64 + -696;
	// addi r4,r31,-684
	ctx.r4.s64 = ctx.r31.s64 + -684;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B6D4;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-672
	ctx.r5.s64 = ctx.r31.s64 + -672;
	// li r6,160
	ctx.r6.s64 = 160;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82478360
	ctx.lr = 0x8380B6E8;
	sub_82478360(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-660
	ctx.r6.s64 = ctx.r31.s64 + -660;
	// addi r5,r31,-656
	ctx.r5.s64 = ctx.r31.s64 + -656;
	// addi r4,r31,-644
	ctx.r4.s64 = ctx.r31.s64 + -644;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B700;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r31,-632
	ctx.r7.s64 = ctx.r31.s64 + -632;
	// addi r5,r31,-608
	ctx.r5.s64 = ctx.r31.s64 + -608;
	// li r6,176
	ctx.r6.s64 = 176;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82478958
	ctx.lr = 0x8380B718;
	sub_82478958(ctx, base);
	// addi r6,r31,-596
	ctx.r6.s64 = ctx.r31.s64 + -596;
	// addi r5,r31,-592
	ctx.r5.s64 = ctx.r31.s64 + -592;
	// addi r4,r31,-580
	ctx.r4.s64 = ctx.r31.s64 + -580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B730;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-568
	ctx.r5.s64 = ctx.r31.s64 + -568;
	// li r6,180
	ctx.r6.s64 = 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380B744;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-556
	ctx.r6.s64 = ctx.r31.s64 + -556;
	// addi r5,r31,-552
	ctx.r5.s64 = ctx.r31.s64 + -552;
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B75C;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-528
	ctx.r5.s64 = ctx.r31.s64 + -528;
	// li r6,181
	ctx.r6.s64 = 181;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380B770;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,-516
	ctx.r6.s64 = ctx.r31.s64 + -516;
	// addi r5,r31,-512
	ctx.r5.s64 = ctx.r31.s64 + -512;
	// addi r4,r31,-500
	ctx.r4.s64 = ctx.r31.s64 + -500;
	// bl 0x82479460
	ctx.lr = 0x8380B788;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-488
	ctx.r5.s64 = ctx.r31.s64 + -488;
	// li r6,182
	ctx.r6.s64 = 182;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824788c8
	ctx.lr = 0x8380B79C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-476
	ctx.r6.s64 = ctx.r31.s64 + -476;
	// addi r5,r31,-472
	ctx.r5.s64 = ctx.r31.s64 + -472;
	// addi r4,r31,-460
	ctx.r4.s64 = ctx.r31.s64 + -460;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B7B4;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-448
	ctx.r5.s64 = ctx.r31.s64 + -448;
	// li r6,183
	ctx.r6.s64 = 183;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824788c8
	ctx.lr = 0x8380B7C8;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-432
	ctx.r6.s64 = ctx.r31.s64 + -432;
	// addi r5,r31,-428
	ctx.r5.s64 = ctx.r31.s64 + -428;
	// addi r4,r31,-412
	ctx.r4.s64 = ctx.r31.s64 + -412;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B7E0;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-396
	ctx.r5.s64 = ctx.r31.s64 + -396;
	// li r6,184
	ctx.r6.s64 = 184;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B7F4;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-384
	ctx.r6.s64 = ctx.r31.s64 + -384;
	// addi r5,r31,-380
	ctx.r5.s64 = ctx.r31.s64 + -380;
	// addi r4,r31,-368
	ctx.r4.s64 = ctx.r31.s64 + -368;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B80C;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-356
	ctx.r5.s64 = ctx.r31.s64 + -356;
	// li r6,188
	ctx.r6.s64 = 188;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B820;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-344
	ctx.r6.s64 = ctx.r31.s64 + -344;
	// addi r5,r31,-340
	ctx.r5.s64 = ctx.r31.s64 + -340;
	// addi r4,r31,-328
	ctx.r4.s64 = ctx.r31.s64 + -328;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B838;
	sub_82479460(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,-316
	ctx.r5.s64 = ctx.r31.s64 + -316;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B84C;
	sub_824788C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r31,-300
	ctx.r6.s64 = ctx.r31.s64 + -300;
	// addi r5,r31,-296
	ctx.r5.s64 = ctx.r31.s64 + -296;
	// addi r4,r31,-280
	ctx.r4.s64 = ctx.r31.s64 + -280;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B864;
	sub_82479460(ctx, base);
	// addi r5,r31,-264
	ctx.r5.s64 = ctx.r31.s64 + -264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,196
	ctx.r6.s64 = 196;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B878;
	sub_824788C8(ctx, base);
	// addi r6,r31,-252
	ctx.r6.s64 = ctx.r31.s64 + -252;
	// addi r5,r31,-248
	ctx.r5.s64 = ctx.r31.s64 + -248;
	// addi r4,r31,-236
	ctx.r4.s64 = ctx.r31.s64 + -236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B890;
	sub_82479460(ctx, base);
	// addi r5,r31,-224
	ctx.r5.s64 = ctx.r31.s64 + -224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,200
	ctx.r6.s64 = 200;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B8A4;
	sub_824788C8(ctx, base);
	// addi r6,r31,-208
	ctx.r6.s64 = ctx.r31.s64 + -208;
	// addi r5,r31,-204
	ctx.r5.s64 = ctx.r31.s64 + -204;
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B8BC;
	sub_82479460(ctx, base);
	// addi r5,r31,-172
	ctx.r5.s64 = ctx.r31.s64 + -172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,204
	ctx.r6.s64 = 204;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B8D0;
	sub_824788C8(ctx, base);
	// addi r6,r31,-152
	ctx.r6.s64 = ctx.r31.s64 + -152;
	// addi r5,r31,-148
	ctx.r5.s64 = ctx.r31.s64 + -148;
	// addi r4,r31,-128
	ctx.r4.s64 = ctx.r31.s64 + -128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B8E8;
	sub_82479460(ctx, base);
	// addi r5,r31,-108
	ctx.r5.s64 = ctx.r31.s64 + -108;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,208
	ctx.r6.s64 = 208;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B8FC;
	sub_824788C8(ctx, base);
	// addi r6,r31,-88
	ctx.r6.s64 = ctx.r31.s64 + -88;
	// addi r5,r31,-84
	ctx.r5.s64 = ctx.r31.s64 + -84;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82479460
	ctx.lr = 0x8380B914;
	sub_82479460(ctx, base);
	// addi r5,r31,-44
	ctx.r5.s64 = ctx.r31.s64 + -44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,212
	ctx.r6.s64 = 212;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x824788c8
	ctx.lr = 0x8380B928;
	sub_824788C8(ctx, base);
	// addi r6,r31,-24
	ctx.r6.s64 = ctx.r31.s64 + -24;
	// addi r5,r31,-20
	ctx.r5.s64 = ctx.r31.s64 + -20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82479460
	ctx.lr = 0x8380B940;
	sub_82479460(ctx, base);
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

__attribute__((alias("__imp__sub_8380B958"))) PPC_WEAK_FUNC(sub_8380B958);
PPC_FUNC_IMPL(__imp__sub_8380B958) {
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
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,14260
	ctx.r31.s64 = ctx.r11.s64 + 14260;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r31,-232
	ctx.r4.s64 = ctx.r31.s64 + -232;
	// bl 0x82485ec8
	ctx.lr = 0x8380B984;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-208
	ctx.r5.s64 = ctx.r31.s64 + -208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x8380B994;
	sub_82486320(ctx, base);
	// addi r5,r31,-196
	ctx.r5.s64 = ctx.r31.s64 + -196;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x8380B9A4;
	sub_82486320(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82485ec8
	ctx.lr = 0x8380B9B4;
	sub_82485EC8(ctx, base);
	// addi r5,r31,-156
	ctx.r5.s64 = ctx.r31.s64 + -156;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82486320
	ctx.lr = 0x8380B9C4;
	sub_82486320(ctx, base);
	// addi r5,r31,-136
	ctx.r5.s64 = ctx.r31.s64 + -136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82486320
	ctx.lr = 0x8380B9D4;
	sub_82486320(ctx, base);
	// addi r5,r31,-116
	ctx.r5.s64 = ctx.r31.s64 + -116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82486320
	ctx.lr = 0x8380B9E4;
	sub_82486320(ctx, base);
	// addi r5,r31,-96
	ctx.r5.s64 = ctx.r31.s64 + -96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82486320
	ctx.lr = 0x8380B9F4;
	sub_82486320(ctx, base);
	// addi r5,r31,-76
	ctx.r5.s64 = ctx.r31.s64 + -76;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82486320
	ctx.lr = 0x8380BA04;
	sub_82486320(ctx, base);
	// addi r5,r31,-60
	ctx.r5.s64 = ctx.r31.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82486320
	ctx.lr = 0x8380BA14;
	sub_82486320(ctx, base);
	// addi r5,r31,-44
	ctx.r5.s64 = ctx.r31.s64 + -44;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82486320
	ctx.lr = 0x8380BA24;
	sub_82486320(ctx, base);
	// bl 0x8380a3b8
	ctx.lr = 0x8380BA28;
	sub_8380A3B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8380BA3C;
	sub_8247B0F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x8246be10
	ctx.lr = 0x8380BA48;
	sub_8246BE10(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246c3a0
	ctx.lr = 0x8380BA54;
	sub_8246C3A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f280
	ctx.lr = 0x8380BA64;
	sub_8241F280(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824f5ee0
	ctx.lr = 0x8380BA6C;
	sub_824F5EE0(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380ba8c
	if (cr6.eq) goto loc_8380BA8C;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82573040
	ctx.lr = 0x8380BA84;
	sub_82573040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8380BA8C:
	// bl 0x824b4418
	ctx.lr = 0x8380BA90;
	sub_824B4418(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8246be18
	ctx.lr = 0x8380BA9C;
	sub_8246BE18(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x825730a8
	ctx.lr = 0x8380BAB0;
	sub_825730A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380bacc
	if (cr6.eq) goto loc_8380BACC;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,17708
	ctx.r9.s64 = ctx.r10.s64 + 17708;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x8380bad0
	goto loc_8380BAD0;
loc_8380BACC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8380BAD0:
	// stw r11,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// bl 0x8380b490
	ctx.lr = 0x8380BAD8;
	sub_8380B490(ctx, base);
	// bl 0x8380a448
	ctx.lr = 0x8380BADC;
	sub_8380A448(ctx, base);
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

__attribute__((alias("__imp__sub_8380BAF4"))) PPC_WEAK_FUNC(sub_8380BAF4);
PPC_FUNC_IMPL(__imp__sub_8380BAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380BAF8"))) PPC_WEAK_FUNC(sub_8380BAF8);
PPC_FUNC_IMPL(__imp__sub_8380BAF8) {
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
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,-6352
	ctx.r11.s64 = ctx.r11.s64 + -6352;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8380bbb4
	if (cr6.eq) goto loc_8380BBB4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8380bb3c
	if (cr6.eq) goto loc_8380BB3C;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_8380BB3C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x8380bb58
	if (cr6.gt) goto loc_8380BB58;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_8380BB58:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8380bbb4
	if (cr6.eq) goto loc_8380BBB4;
	// bl 0x82eff9c8
	ctx.lr = 0x8380BB78;
	sub_82EFF9C8(ctx, base);
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8380bbb4
	if (cr6.eq) goto loc_8380BBB4;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380bba4
	if (cr6.eq) goto loc_8380BBA4;
	// bl 0x82eff9c8
	ctx.lr = 0x8380BB94;
	sub_82EFF9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837ed828
	ctx.lr = 0x8380BBA0;
	sub_837ED828(ctx, base);
	// b 0x8380bbb4
	goto loc_8380BBB4;
loc_8380BBA4:
	// bl 0x82eff9c8
	ctx.lr = 0x8380BBA8;
	sub_82EFF9C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// bl 0x837e7610
	ctx.lr = 0x8380BBB4;
	sub_837E7610(ctx, base);
loc_8380BBB4:
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

__attribute__((alias("__imp__sub_8380BBCC"))) PPC_WEAK_FUNC(sub_8380BBCC);
PPC_FUNC_IMPL(__imp__sub_8380BBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380BBD0"))) PPC_WEAK_FUNC(sub_8380BBD0);
PPC_FUNC_IMPL(__imp__sub_8380BBD0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lbz r5,296(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 296);
	// b 0x8380baf8
	sub_8380BAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380BBE4"))) PPC_WEAK_FUNC(sub_8380BBE4);
PPC_FUNC_IMPL(__imp__sub_8380BBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380BBE8"))) PPC_WEAK_FUNC(sub_8380BBE8);
PPC_FUNC_IMPL(__imp__sub_8380BBE8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-3128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3128);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8380bc58
	if (!cr6.eq) goto loc_8380BC58;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-3128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3128, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-3360
	ctx.r31.s64 = ctx.r9.s64 + -3360;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,464
	ctx.r4.s64 = 464;
	// bl 0x82477fc8
	ctx.lr = 0x8380BC34;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19464
	ctx.r3.s64 = ctx.r8.s64 + -19464;
	// bl 0x831cdcc8
	ctx.lr = 0x8380BC40;
	sub_831CDCC8(ctx, base);
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
loc_8380BC58:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-3360
	ctx.r3.s64 = ctx.r11.s64 + -3360;
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

__attribute__((alias("__imp__sub_8380BC74"))) PPC_WEAK_FUNC(sub_8380BC74);
PPC_FUNC_IMPL(__imp__sub_8380BC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380BC78"))) PPC_WEAK_FUNC(sub_8380BC78);
PPC_FUNC_IMPL(__imp__sub_8380BC78) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r11,-2888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2888);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8380bce8
	if (!cr6.eq) goto loc_8380BCE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// stw r11,-2888(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2888, ctx.r11.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// addi r31,r9,-3120
	ctx.r31.s64 = ctx.r9.s64 + -3120;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,496
	ctx.r4.s64 = 496;
	// bl 0x82477fc8
	ctx.lr = 0x8380BCC4;
	sub_82477FC8(ctx, base);
	// lis r8,-31785
	ctx.r8.s64 = -2083061760;
	// addi r3,r8,-19448
	ctx.r3.s64 = ctx.r8.s64 + -19448;
	// bl 0x831cdcc8
	ctx.lr = 0x8380BCD0;
	sub_831CDCC8(ctx, base);
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
loc_8380BCE8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r3,r11,-3120
	ctx.r3.s64 = ctx.r11.s64 + -3120;
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

__attribute__((alias("__imp__sub_8380BD04"))) PPC_WEAK_FUNC(sub_8380BD04);
PPC_FUNC_IMPL(__imp__sub_8380BD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380BD08"))) PPC_WEAK_FUNC(sub_8380BD08);
PPC_FUNC_IMPL(__imp__sub_8380BD08) {
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
	// bl 0x8380bc78
	ctx.lr = 0x8380BD1C;
	sub_8380BC78(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,19836
	ctx.r4.s64 = ctx.r11.s64 + 19836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8247b0f0
	ctx.lr = 0x8380BD34;
	sub_8247B0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8246be10
	ctx.lr = 0x8380BD40;
	sub_8246BE10(ctx, base);
	// bl 0x824fd170
	ctx.lr = 0x8380BD44;
	sub_824FD170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8246be18
	ctx.lr = 0x8380BD50;
	sub_8246BE18(ctx, base);
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

__attribute__((alias("__imp__sub_8380BD64"))) PPC_WEAK_FUNC(sub_8380BD64);
PPC_FUNC_IMPL(__imp__sub_8380BD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380BD68"))) PPC_WEAK_FUNC(sub_8380BD68);
PPC_FUNC_IMPL(__imp__sub_8380BD68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,19944
	ctx.r10.s64 = ctx.r11.s64 + 19944;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x824fcd10
	ctx.lr = 0x8380BD94;
	sub_824FCD10(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8380bdb4
	if (cr6.eq) goto loc_8380BDB4;
	// bl 0x82595188
	ctx.lr = 0x8380BDA4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8380BDB4;
	sub_825952B8(ctx, base);
loc_8380BDB4:
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

__attribute__((alias("__imp__sub_8380BDD0"))) PPC_WEAK_FUNC(sub_8380BDD0);
PPC_FUNC_IMPL(__imp__sub_8380BDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8380BDD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,392
	ctx.r4.s64 = 392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8380BDF8;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380be30
	if (cr6.eq) goto loc_8380BE30;
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r10,r11,20052
	ctx.r10.s64 = ctx.r11.s64 + 20052;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,380
	ctx.r5.s64 = 380;
	// bl 0x831ce980
	ctx.lr = 0x8380BE20;
	sub_831CE980(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r29,388(r31)
	PPC_STORE_U8(ctx.r31.u32 + 388, ctx.r29.u8);
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// b 0x8380be34
	goto loc_8380BE34;
loc_8380BE30:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8380BE34:
	// bl 0x8353f578
	ctx.lr = 0x8380BE38;
	sub_8353F578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353f700
	ctx.lr = 0x8380BE40;
	sub_8353F700(ctx, base);
	// bl 0x8353f588
	ctx.lr = 0x8380BE44;
	sub_8353F588(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8380be7c
	if (cr6.eq) goto loc_8380BE7C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x8380BE5C;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8380BE74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x8380BE7C;
	sub_82595170(ctx, base);
loc_8380BE7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380BE84"))) PPC_WEAK_FUNC(sub_8380BE84);
PPC_FUNC_IMPL(__imp__sub_8380BE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380BE88"))) PPC_WEAK_FUNC(sub_8380BE88);
PPC_FUNC_IMPL(__imp__sub_8380BE88) {
	PPC_FUNC_PROLOGUE();
	// b 0x8380bc78
	sub_8380BC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380BE8C"))) PPC_WEAK_FUNC(sub_8380BE8C);
PPC_FUNC_IMPL(__imp__sub_8380BE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380BE90"))) PPC_WEAK_FUNC(sub_8380BE90);
PPC_FUNC_IMPL(__imp__sub_8380BE90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8380BE98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,496
	ctx.r4.s64 = 496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x8380BEBC;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380beec
	if (cr6.eq) goto loc_8380BEEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824fcca8
	ctx.lr = 0x8380BED0;
	sub_824FCCA8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r10,r11,19944
	ctx.r10.s64 = ctx.r11.s64 + 19944;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x837dd328
	ctx.lr = 0x8380BEE4;
	sub_837DD328(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8380bef0
	goto loc_8380BEF0;
loc_8380BEEC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8380BEF0:
	// std r28,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r28.u64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241f040
	ctx.lr = 0x8380BEFC;
	sub_8241F040(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380BF08"))) PPC_WEAK_FUNC(sub_8380BF08);
PPC_FUNC_IMPL(__imp__sub_8380BF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8380BF10;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824fe5f8
	ctx.lr = 0x8380BF20;
	sub_824FE5F8(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// lis r10,-32211
	ctx.r10.s64 = -2110980096;
	// addi r9,r11,20064
	ctx.r9.s64 = ctx.r11.s64 + 20064;
	// addi r30,r10,17839
	ctx.r30.s64 = ctx.r10.s64 + 17839;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// bl 0x82420a60
	ctx.lr = 0x8380BF40;
	sub_82420A60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x82420a60
	ctx.lr = 0x8380BF4C;
	sub_82420A60(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,352
	ctx.r30.s64 = ctx.r31.s64 + 352;
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r29,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r29.u64);
	// addi r27,r30,4
	ctx.r27.s64 = ctx.r30.s64 + 4;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// bl 0x82422f40
	ctx.lr = 0x8380BF74;
	sub_82422F40(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r26,2
	ctx.r26.s64 = 2;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// lfs f31,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r25,r11,9580
	ctx.r25.s64 = ctx.r11.s64 + 9580;
	// stfs f31,384(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// stfs f31,388(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stfs f31,392(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f31,432(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// stfs f31,436(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// stfs f31,440(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// stb r24,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r24.u8);
	// stfs f31,328(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// stb r29,332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 332, ctx.r29.u8);
	// stfs f31,336(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// stb r29,333(r31)
	PPC_STORE_U8(ctx.r31.u32 + 333, ctx.r29.u8);
	// stb r29,334(r31)
	PPC_STORE_U8(ctx.r31.u32 + 334, ctx.r29.u8);
	// stw r24,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r24.u32);
	// stw r29,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r29.u32);
loc_8380BFC8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8380c024
	if (cr6.lt) goto loc_8380C024;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8380c014
	if (!cr6.gt) goto loc_8380C014;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x8247b270
	ctx.lr = 0x8380C010;
	sub_8247B270(ctx, base);
	// b 0x8380c018
	goto loc_8380C018;
loc_8380C014:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_8380C018:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380c048
	if (cr6.eq) goto loc_8380C048;
loc_8380C024:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8380c03c
	if (cr0.eq) goto loc_8380C03C;
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
loc_8380C03C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8380C048:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// bne 0x8380bfc8
	if (!cr0.eq) goto loc_8380BFC8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f31,400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// stfs f31,404(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,408(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stfs f31,412(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// stw r29,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r29.u32);
	// stfs f31,448(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stb r29,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r29.u8);
	// stfs f31,452(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stw r29,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r29.u32);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stfs f31,460(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stw r29,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r29.u32);
	// stb r29,424(r31)
	PPC_STORE_U8(ctx.r31.u32 + 424, ctx.r29.u8);
	// stw r29,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r29.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380C0A4"))) PPC_WEAK_FUNC(sub_8380C0A4);
PPC_FUNC_IMPL(__imp__sub_8380C0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380C0A8"))) PPC_WEAK_FUNC(sub_8380C0A8);
PPC_FUNC_IMPL(__imp__sub_8380C0A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8380bbe8
	sub_8380BBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8380C0AC"))) PPC_WEAK_FUNC(sub_8380C0AC);
PPC_FUNC_IMPL(__imp__sub_8380C0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8380C0B0"))) PPC_WEAK_FUNC(sub_8380C0B0);
PPC_FUNC_IMPL(__imp__sub_8380C0B0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8380c10c
	if (cr6.eq) goto loc_8380C10C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe060
	ctx.lr = 0x8380C0E0;
	sub_824FE060(ctx, base);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,20064
	ctx.r10.s64 = ctx.r11.s64 + 20064;
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x824201f0
	ctx.lr = 0x8380C0F8;
	sub_824201F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x824201f0
	ctx.lr = 0x8380C104;
	sub_824201F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8380c110
	goto loc_8380C110;
loc_8380C10C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8380C110:
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

__attribute__((alias("__imp__sub_8380C128"))) PPC_WEAK_FUNC(sub_8380C128);
PPC_FUNC_IMPL(__imp__sub_8380C128) {
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
	// bl 0x82467738
	ctx.lr = 0x8380C140;
	sub_82467738(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,464
	ctx.r3.s64 = 464;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8248b768
	ctx.lr = 0x8380C154;
	sub_8248B768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8380c178
	if (cr6.eq) goto loc_8380C178;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8380bf08
	ctx.lr = 0x8380C164;
	sub_8380BF08(ctx, base);
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
loc_8380C178:
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

__attribute__((alias("__imp__sub_8380C190"))) PPC_WEAK_FUNC(sub_8380C190);
PPC_FUNC_IMPL(__imp__sub_8380C190) {
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
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82422cd0
	ctx.lr = 0x8380C1B4;
	sub_82422CD0(ctx, base);
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x8241fb00
	ctx.lr = 0x8380C1BC;
	sub_8241FB00(ctx, base);
	// addi r3,r31,296
	ctx.r3.s64 = ctx.r31.s64 + 296;
	// bl 0x8241fb00
	ctx.lr = 0x8380C1C4;
	sub_8241FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe228
	ctx.lr = 0x8380C1CC;
	sub_824FE228(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8380c1e4
	if (cr6.eq) goto loc_8380C1E4;
	// bl 0x8248b818
	ctx.lr = 0x8380C1E0;
	sub_8248B818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8380C1E4:
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

