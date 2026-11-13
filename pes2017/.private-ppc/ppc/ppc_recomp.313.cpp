#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8327CD3C"))) PPC_WEAK_FUNC(sub_8327CD3C);
PPC_FUNC_IMPL(__imp__sub_8327CD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CD40"))) PPC_WEAK_FUNC(sub_8327CD40);
PPC_FUNC_IMPL(__imp__sub_8327CD40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8327CD48;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8327cd7c
	if (!cr6.eq) goto loc_8327CD7C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8327ce28
	if (cr6.eq) goto loc_8327CE28;
loc_8327CD7C:
	// lhz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// li r9,12288
	ctx.r9.s64 = 12288;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// srw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// xori r10,r6,40
	ctx.r10.u64 = ctx.r6.u64 ^ 40;
	// li r3,640
	ctx.r3.s64 = 640;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// srawi r7,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// and r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 & ctx.r5.u64;
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327cdcc
	if (cr6.eq) goto loc_8327CDCC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220e78
	ctx.lr = 0x8327CDC4;
	sub_83220E78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x8327ce28
	goto loc_8327CE28;
loc_8327CDCC:
	// li r10,1032
	ctx.r10.s64 = 1032;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8327ce14
	if (cr6.eq) goto loc_8327CE14;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,23360
	ctx.r5.s64 = ctx.r11.s64 + 23360;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83297a40
	ctx.lr = 0x8327CDF8;
	sub_83297A40(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// b 0x8327ce28
	goto loc_8327CE28;
loc_8327CE14:
	// srw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8327ce40
	if (cr6.eq) goto loc_8327CE40;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8327CE28:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8327c8e0
	ctx.lr = 0x8327CE38;
	sub_8327C8E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8327CE40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8327CE48;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,21124
	ctx.r9.s64 = ctx.r11.s64 + 21124;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,22300
	ctx.r4.s64 = ctx.r10.s64 + 22300;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83208568
	ctx.lr = 0x8327CE64;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327CE64"))) PPC_WEAK_FUNC(sub_8327CE64);
PPC_FUNC_IMPL(__imp__sub_8327CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CE68"))) PPC_WEAK_FUNC(sub_8327CE68);
PPC_FUNC_IMPL(__imp__sub_8327CE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8327CE70;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8328d5a8
	ctx.lr = 0x8327CE7C;
	sub_8328D5A8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8327cea4
	if (!cr6.eq) goto loc_8327CEA4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8327cea4
	if (!cr6.eq) goto loc_8327CEA4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8327cf0c
	goto loc_8327CF0C;
loc_8327CEA4:
	// lhz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// li r4,640
	ctx.r4.s64 = 640;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// li r7,12288
	ctx.r7.s64 = 12288;
	// xori r11,r6,40
	ctx.r11.u64 = ctx.r6.u64 ^ 40;
	// srw r5,r7,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// srw r11,r4,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// srawi r10,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ctx.r5.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8327cf4c
	if (cr6.eq) goto loc_8327CF4C;
	// bl 0x83220dc8
	ctx.lr = 0x8327CEE8;
	sub_83220DC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83208aa0
	ctx.lr = 0x8327CEF0;
	sub_83208AA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8327cf40
	if (cr6.eq) goto loc_8327CF40;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832984d0
	ctx.lr = 0x8327CF08;
	sub_832984D0(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
loc_8327CF0C:
	// cmpw cr6,r6,r29
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, xer);
	// bge cr6,0x8327cf40
	if (!cr6.lt) goto loc_8327CF40;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,23360
	ctx.r5.s64 = ctx.r11.s64 + 23360;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x8327CF28;
	sub_83297A40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223a60
	ctx.lr = 0x8327CF34;
	sub_83223A60(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8327CF40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8327CF4C:
	// bl 0x83225c80
	ctx.lr = 0x8327CF50;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,21124
	ctx.r9.s64 = ctx.r11.s64 + 21124;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,22356
	ctx.r4.s64 = ctx.r10.s64 + 22356;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83208568
	ctx.lr = 0x8327CF6C;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327CF6C"))) PPC_WEAK_FUNC(sub_8327CF6C);
PPC_FUNC_IMPL(__imp__sub_8327CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327CF70"))) PPC_WEAK_FUNC(sub_8327CF70);
PPC_FUNC_IMPL(__imp__sub_8327CF70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8327CF78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r7,2(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,12288
	ctx.r5.s64 = 12288;
	// addi r6,r9,-163
	ctx.r6.s64 = ctx.r9.s64 + -163;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r28,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r6.s32 >> 31;
	// cntlzw r29,r3
	ctx.r29.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// srw r6,r5,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r29,r29,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r27,r6,24
	ctx.r27.u64 = ctx.r6.u32 & 0xFF;
	// and r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 & ctx.r29.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// and r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 & ctx.r27.u64;
	// clrlwi r29,r29,31
	ctx.r29.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8327d0a8
	if (!cr6.eq) goto loc_8327D0A8;
	// clrlwi r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8327d054
	if (cr6.eq) goto loc_8327D054;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r10,53
	cr6.compare<uint32_t>(ctx.r10.u32, 53, xer);
	// bgt cr6,0x8327d010
	if (cr6.gt) goto loc_8327D010;
	// beq cr6,0x8327d048
	if (cr6.eq) goto loc_8327D048;
	// cmplwi cr6,r10,29
	cr6.compare<uint32_t>(ctx.r10.u32, 29, xer);
	// beq cr6,0x8327d048
	if (cr6.eq) goto loc_8327D048;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// beq cr6,0x8327d004
	if (cr6.eq) goto loc_8327D004;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bne cr6,0x8327d028
	if (!cr6.eq) goto loc_8327D028;
loc_8327D004:
	// bl 0x8327cb60
	ctx.lr = 0x8327D008;
	sub_8327CB60(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// b 0x8327d0a8
	goto loc_8327D0A8;
loc_8327D010:
	// cmplwi cr6,r10,85
	cr6.compare<uint32_t>(ctx.r10.u32, 85, xer);
	// beq cr6,0x8327d048
	if (cr6.eq) goto loc_8327D048;
	// cmplwi cr6,r10,122
	cr6.compare<uint32_t>(ctx.r10.u32, 122, xer);
	// beq cr6,0x8327d048
	if (cr6.eq) goto loc_8327D048;
	// cmplwi cr6,r10,141
	cr6.compare<uint32_t>(ctx.r10.u32, 141, xer);
	// beq cr6,0x8327d03c
	if (cr6.eq) goto loc_8327D03C;
loc_8327D028:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83225c80
	ctx.lr = 0x8327D030;
	sub_83225C80(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r10,22448
	ctx.r4.s64 = ctx.r10.s64 + 22448;
	// b 0x8327d094
	goto loc_8327D094;
loc_8327D03C:
	// bl 0x8327ce68
	ctx.lr = 0x8327D040;
	sub_8327CE68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8327d0a8
	goto loc_8327D0A8;
loc_8327D048:
	// bl 0x8327cd40
	ctx.lr = 0x8327D04C;
	sub_8327CD40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8327d0a8
	goto loc_8327D0A8;
loc_8327D054:
	// xori r9,r9,40
	ctx.r9.u64 = ctx.r9.u64 ^ 40;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// srw r7,r5,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// srawi r6,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// li r5,640
	ctx.r5.s64 = 640;
	// and r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ctx.r7.u64;
	// srw r3,r5,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// or r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 | ctx.r3.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8327d0a8
	if (!cr6.eq) goto loc_8327D0A8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83225c80
	ctx.lr = 0x8327D08C;
	sub_83225C80(ctx, base);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r10,22408
	ctx.r4.s64 = ctx.r10.s64 + 22408;
loc_8327D094:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r9,r11,21124
	ctx.r9.s64 = ctx.r11.s64 + 21124;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8327D0A8;
	sub_832085E8(ctx, base);
loc_8327D0A8:
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r10,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r10.u16);
	// bl 0x832778b8
	ctx.lr = 0x8327D0C4;
	sub_832778B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D0D0"))) PPC_WEAK_FUNC(sub_8327D0D0);
PPC_FUNC_IMPL(__imp__sub_8327D0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8327D0D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bl 0x83211400
	ctx.lr = 0x8327D118;
	sub_83211400(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// subf r8,r25,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r25.s64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8327d154
	if (!cr6.eq) goto loc_8327D154;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83211228
	ctx.lr = 0x8327D14C;
	sub_83211228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x8327d170
	goto loc_8327D170;
loc_8327D154:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83222be8
	ctx.lr = 0x8327D168;
	sub_83222BE8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8327D170:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8327d188
	if (cr6.eq) goto loc_8327D188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83211558
	ctx.lr = 0x8327D184;
	sub_83211558(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8327D188:
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83221378
	ctx.lr = 0x8327D194;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327d1b0
	if (cr6.eq) goto loc_8327D1B0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8328ff20
	ctx.lr = 0x8327D1AC;
	sub_8328FF20(ctx, base);
	// b 0x8327d228
	goto loc_8327D228;
loc_8327D1B0:
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83221378
	ctx.lr = 0x8327D1BC;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327d1d8
	if (cr6.eq) goto loc_8327D1D8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8328ffc0
	ctx.lr = 0x8327D1D4;
	sub_8328FFC0(ctx, base);
	// b 0x8327d228
	goto loc_8327D228;
loc_8327D1D8:
	// li r4,141
	ctx.r4.s64 = 141;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83221378
	ctx.lr = 0x8327D1E4;
	sub_83221378(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327d200
	if (cr6.eq) goto loc_8327D200;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8328d5c0
	ctx.lr = 0x8327D1FC;
	sub_8328D5C0(ctx, base);
	// b 0x8327d228
	goto loc_8327D228;
loc_8327D200:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83225c80
	ctx.lr = 0x8327D208;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,21124
	ctx.r9.s64 = ctx.r11.s64 + 21124;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,22492
	ctx.r4.s64 = ctx.r10.s64 + 22492;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x832085e8
	ctx.lr = 0x8327D228;
	sub_832085E8(ctx, base);
loc_8327D228:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(ctx.r25.s32, 1, xer);
	// ble cr6,0x8327d23c
	if (!cr6.gt) goto loc_8327D23C;
	// addi r4,r25,-1
	ctx.r4.s64 = ctx.r25.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320db60
	ctx.lr = 0x8327D23C;
	sub_8320DB60(ctx, base);
loc_8327D23C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x8327D25C;
	sub_83222508(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r24,r8
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, xer);
	// beq cr6,0x8327d278
	if (cr6.eq) goto loc_8327D278;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8327d278
	if (cr6.eq) goto loc_8327D278;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83209d68
	ctx.lr = 0x8327D278;
	sub_83209D68(ctx, base);
loc_8327D278:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D284"))) PPC_WEAK_FUNC(sub_8327D284);
PPC_FUNC_IMPL(__imp__sub_8327D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D288"))) PPC_WEAK_FUNC(sub_8327D288);
PPC_FUNC_IMPL(__imp__sub_8327D288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8327D290;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// beq cr6,0x8327d2c0
	if (cr6.eq) goto loc_8327D2C0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,22564
	ctx.r4.s64 = ctx.r11.s64 + 22564;
	// addi r3,r10,21124
	ctx.r3.s64 = ctx.r10.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327D2C0;
	sub_83208568(ctx, base);
loc_8327D2C0:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// lhz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// srw r3,r9,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// addi r10,r11,-349
	ctx.r10.s64 = ctx.r11.s64 + -349;
	// srawi r7,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// subfic r6,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r6.s64 = 162 - ctx.r11.s64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 & ctx.r5.u64;
	// and r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8327d3b0
	if (cr6.eq) goto loc_8327D3B0;
	// cmpwi cr6,r11,164
	cr6.compare<int32_t>(ctx.r11.s32, 164, xer);
	// bne cr6,0x8327d3b0
	if (!cr6.eq) goto loc_8327D3B0;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// addi r6,r11,-349
	ctx.r6.s64 = ctx.r11.s64 + -349;
	// srw r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// subfic r3,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r3.s64 = 162 - ctx.r11.s64;
	// srawi r7,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 31;
	// and r6,r4,r7
	ctx.r6.u64 = ctx.r4.u64 & ctx.r7.u64;
	// and r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 & ctx.r5.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8327d37c
	if (!cr6.eq) goto loc_8327D37C;
	// xori r11,r11,55
	ctx.r11.u64 = ctx.r11.u64 ^ 55;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327d3b0
	if (cr6.eq) goto loc_8327D3B0;
loc_8327D37C:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x83209aa8
	ctx.lr = 0x8327D384;
	sub_83209AA8(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x832240b8
	ctx.lr = 0x8327D39C;
	sub_832240B8(ctx, base);
	// li r5,164
	ctx.r5.s64 = 164;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266dd0
	ctx.lr = 0x8327D3AC;
	sub_83266DD0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
loc_8327D3B0:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327d3f0
	if (!cr6.eq) goto loc_8327D3F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83225c80
	ctx.lr = 0x8327D3C4;
	sub_83225C80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8327D3D0;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,21124
	ctx.r9.s64 = ctx.r11.s64 + 21124;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,22516
	ctx.r4.s64 = ctx.r10.s64 + 22516;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8327D3F0;
	sub_832085E8(ctx, base);
loc_8327D3F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8320db60
	ctx.lr = 0x8327D3FC;
	sub_8320DB60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D408"))) PPC_WEAK_FUNC(sub_8327D408);
PPC_FUNC_IMPL(__imp__sub_8327D408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8327D410;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,68(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r4,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r4,6(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// bl 0x832117c0
	ctx.lr = 0x8327D434;
	sub_832117C0(ctx, base);
	// lwz r14,16(r18)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327d7bc
	if (cr6.eq) goto loc_8327D7BC;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r30,80(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// lbz r15,1(r3)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x832117e8
	ctx.lr = 0x8327D460;
	sub_832117E8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83211930
	ctx.lr = 0x8327D470;
	sub_83211930(ctx, base);
	// rlwinm r17,r15,0,29,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stb r24,38(r21)
	PPC_STORE_U8(ctx.r21.u32 + 38, ctx.r24.u8);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// addi r16,r11,21124
	ctx.r16.s64 = ctx.r11.s64 + 21124;
	// bne cr6,0x8327d494
	if (!cr6.eq) goto loc_8327D494;
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, xer);
	// bgt cr6,0x8327d4a8
	if (cr6.gt) goto loc_8327D4A8;
loc_8327D494:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,28(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// subf r9,r11,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r11.s64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x8327d4f4
	if (!cr6.lt) goto loc_8327D4F4;
loc_8327D4A8:
	// lwz r11,92(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 92);
	// addi r8,r21,72
	ctx.r8.s64 = ctx.r21.s64 + 72;
	// lhz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r21.u32 + 44);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lhz r9,42(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 42);
	// li r4,128
	ctx.r4.s64 = 128;
	// lbz r5,36(r21)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r21.u32 + 36);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// sth r10,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// bl 0x8324c880
	ctx.lr = 0x8327D4D8;
	sub_8324C880(ctx, base);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// lwz r6,28(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// addi r4,r9,9632
	ctx.r4.s64 = ctx.r9.s64 + 9632;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x83208330
	ctx.lr = 0x8327D4F4;
	sub_83208330(ctx, base);
loc_8327D4F4:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x8327d6f0
	if (cr6.eq) goto loc_8327D6F0;
	// rlwinm r3,r24,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x83209aa8
	ctx.lr = 0x8327D504;
	sub_83209AA8(ctx, base);
	// stw r3,56(r21)
	PPC_STORE_U32(ctx.r21.u32 + 56, ctx.r3.u32);
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8327d530
	if (!cr6.gt) goto loc_8327D530;
	// lhz r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r14.u32 + 0);
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8327d534
	goto loc_8327D534;
loc_8327D530:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8327D534:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// ble cr6,0x8327d580
	if (!cr6.gt) goto loc_8327D580;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8327D544:
	// lwz r11,56(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stwx r27,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bge cr6,0x8327d570
	if (!cr6.lt) goto loc_8327D570;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x8327D56C;
	sub_832240B8(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
loc_8327D570:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r24
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, xer);
	// blt cr6,0x8327d544
	if (cr6.lt) goto loc_8327D544;
loc_8327D580:
	// lwz r26,28(r18)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, xer);
	// bge cr6,0x8327d6f0
	if (!cr6.lt) goto loc_8327D6F0;
	// subf r29,r24,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r24.s64;
	// rlwinm r30,r26,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// li r23,9
	ctx.r23.s64 = 9;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r19,1
	ctx.r19.s64 = 1;
	// li r20,12
	ctx.r20.s64 = 12;
loc_8327D5A8:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,56(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// add r11,r29,r9
	ctx.r11.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r31,r30,r10
	ctx.r31.u64 = ctx.r30.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8327d6d8
	if (!cr6.lt) goto loc_8327D6D8;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,12
	cr6.compare<uint32_t>(ctx.r5.u32, 12, xer);
	// bgt cr6,0x8327d764
	if (cr6.gt) goto loc_8327D764;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10776
	ctx.r12.s64 = ctx.r12.s64 + -10776;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_8327D6D8;
	case 1:
		goto loc_8327D61C;
	case 2:
		goto loc_8327D764;
	case 3:
		goto loc_8327D65C;
	case 4:
		goto loc_8327D764;
	case 5:
		goto loc_8327D764;
	case 6:
		goto loc_8327D688;
	case 7:
		goto loc_8327D764;
	case 8:
		goto loc_8327D764;
	case 9:
		goto loc_8327D764;
	case 10:
		goto loc_8327D6C0;
	case 11:
		goto loc_8327D6B4;
	case 12:
		goto loc_8327D6CC;
	default:
		return;
	}
	// lwz r25,-10536(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10536);
	// lwz r25,-10724(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10724);
	// lwz r25,-10396(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10396);
	// lwz r25,-10660(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10660);
	// lwz r25,-10396(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10396);
	// lwz r25,-10396(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10396);
	// lwz r25,-10616(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10616);
	// lwz r25,-10396(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10396);
	// lwz r25,-10396(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10396);
	// lwz r25,-10396(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10396);
	// lwz r25,-10560(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10560);
	// lwz r25,-10572(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10572);
	// lwz r25,-10548(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10548);
loc_8327D61C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// sth r27,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r27.u16);
	// stb r27,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r27.u8);
	// bl 0x83210908
	ctx.lr = 0x8327D644;
	sub_83210908(ctx, base);
	// sth r23,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r23.u16);
	// lhz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// sth r7,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r7.u16);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// b 0x8327d6d8
	goto loc_8327D6D8;
loc_8327D65C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lhzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lhz r10,22(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 22);
	// rotlwi r11,r7,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// sth r25,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r25.u16);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// b 0x8327d6d8
	goto loc_8327D6D8;
loc_8327D688:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// lhz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 28);
	// rotlwi r11,r7,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfdx f1,r6,r8
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x83221508
	ctx.lr = 0x8327D6B0;
	sub_83221508(ctx, base);
	// b 0x8327d6d8
	goto loc_8327D6D8;
loc_8327D6B4:
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// stb r19,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r19.u8);
	// b 0x8327d6d8
	goto loc_8327D6D8;
loc_8327D6C0:
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// b 0x8327d6d8
	goto loc_8327D6D8;
loc_8327D6CC:
	// sth r20,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r20.u16);
	// sth r27,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r27.u16);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_8327D6D8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, xer);
	// blt cr6,0x8327d5a8
	if (cr6.lt) goto loc_8327D5A8;
	// lwz r25,444(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
loc_8327D6F0:
	// clrlwi r11,r15,29
	ctx.r11.u64 = ctx.r15.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8327d7bc
	if (cr6.eq) goto loc_8327D7BC;
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x8327d710
	if (cr6.eq) goto loc_8327D710;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
loc_8327D710:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83273b48
	ctx.lr = 0x8327D724;
	sub_83273B48(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x8327d7a4
	if (!cr6.gt) goto loc_8327D7A4;
	// lhz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r14.u32 + 0);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lwz r10,4(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r30.s64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8327d7a4
	if (!cr6.gt) goto loc_8327D7A4;
loc_8327D754:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8327d774
	if (!cr6.eq) goto loc_8327D774;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x8327d788
	goto loc_8327D788;
loc_8327D764:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r4,r11,22604
	ctx.r4.s64 = ctx.r11.s64 + 22604;
	// bl 0x83208568
	ctx.lr = 0x8327D774;
	sub_83208568(ctx, base);
loc_8327D774:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r9,r31,31,1,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8327D788:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x8327D794;
	sub_832240B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, xer);
	// blt cr6,0x8327d754
	if (cr6.lt) goto loc_8327D754;
loc_8327D7A4:
	// li r6,504
	ctx.r6.s64 = 504;
	// li r5,142
	ctx.r5.s64 = 142;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83271060
	ctx.lr = 0x8327D7B8;
	sub_83271060(ctx, base);
	// stw r28,60(r21)
	PPC_STORE_U32(ctx.r21.u32 + 60, ctx.r28.u32);
loc_8327D7BC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327D7C4"))) PPC_WEAK_FUNC(sub_8327D7C4);
PPC_FUNC_IMPL(__imp__sub_8327D7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327D7C8"))) PPC_WEAK_FUNC(sub_8327D7C8);
PPC_FUNC_IMPL(__imp__sub_8327D7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8327D7D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8327da18
	if (cr6.eq) goto loc_8327DA18;
	// lwz r29,68(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832117c0
	ctx.lr = 0x8327D7F4;
	sub_832117C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327da18
	if (cr6.eq) goto loc_8327DA18;
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,63
	cr6.compare<uint32_t>(ctx.r5.u32, 63, xer);
	// bgt cr6,0x8327db70
	if (cr6.gt) goto loc_8327DB70;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10208
	ctx.r12.s64 = ctx.r12.s64 + -10208;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_8327DA18;
	case 1:
		goto loc_8327DA18;
	case 2:
		goto loc_8327DA18;
	case 3:
		goto loc_8327DA18;
	case 4:
		goto loc_8327D920;
	case 5:
		goto loc_8327D920;
	case 6:
		goto loc_8327D928;
	case 7:
		goto loc_8327D928;
	case 8:
		goto loc_8327DA18;
	case 9:
		goto loc_8327DA18;
	case 10:
		goto loc_8327DB70;
	case 11:
		goto loc_8327DB70;
	case 12:
		goto loc_8327D920;
	case 13:
		goto loc_8327D920;
	case 14:
		goto loc_8327DB70;
	case 15:
		goto loc_8327DB70;
	case 16:
		goto loc_8327DB70;
	case 17:
		goto loc_8327DB70;
	case 18:
		goto loc_8327DB70;
	case 19:
		goto loc_8327DA18;
	case 20:
		goto loc_8327DB70;
	case 21:
		goto loc_8327DB70;
	case 22:
		goto loc_8327DB70;
	case 23:
		goto loc_8327D928;
	case 24:
		goto loc_8327DB70;
	case 25:
		goto loc_8327DB70;
	case 26:
		goto loc_8327DB70;
	case 27:
		goto loc_8327DB70;
	case 28:
		goto loc_8327DB70;
	case 29:
		goto loc_8327DB70;
	case 30:
		goto loc_8327DB70;
	case 31:
		goto loc_8327DB70;
	case 32:
		goto loc_8327DB70;
	case 33:
		goto loc_8327DB70;
	case 34:
		goto loc_8327DB70;
	case 35:
		goto loc_8327DA18;
	case 36:
		goto loc_8327DB70;
	case 37:
		goto loc_8327DB70;
	case 38:
		goto loc_8327DB70;
	case 39:
		goto loc_8327D928;
	case 40:
		goto loc_8327DB70;
	case 41:
		goto loc_8327DB70;
	case 42:
		goto loc_8327DB70;
	case 43:
		goto loc_8327DA18;
	case 44:
		goto loc_8327DB70;
	case 45:
		goto loc_8327DB70;
	case 46:
		goto loc_8327DB70;
	case 47:
		goto loc_8327D928;
	case 48:
		goto loc_8327DB70;
	case 49:
		goto loc_8327DB70;
	case 50:
		goto loc_8327DB70;
	case 51:
		goto loc_8327DB70;
	case 52:
		goto loc_8327DB70;
	case 53:
		goto loc_8327DB70;
	case 54:
		goto loc_8327DB70;
	case 55:
		goto loc_8327DB70;
	case 56:
		goto loc_8327DB70;
	case 57:
		goto loc_8327DB70;
	case 58:
		goto loc_8327DB70;
	case 59:
		goto loc_8327DA18;
	case 60:
		goto loc_8327DB70;
	case 61:
		goto loc_8327DB70;
	case 62:
		goto loc_8327DB70;
	case 63:
		goto loc_8327D928;
	default:
		return;
	}
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9952(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9952);
	// lwz r25,-9952(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9952);
	// lwz r25,-9944(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9944);
	// lwz r25,-9944(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9944);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9952(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9952);
	// lwz r25,-9952(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9952);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9944(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9944);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9944(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9944);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9944(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9944);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9704(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9704);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9360(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9360);
	// lwz r25,-9944(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9944);
loc_8327D920:
	// lhz r30,2(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// b 0x8327d92c
	goto loc_8327D92C;
loc_8327D928:
	// lhz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
loc_8327D92C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8327da18
	if (cr6.eq) goto loc_8327DA18;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r31.u16);
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x832240b8
	ctx.lr = 0x8327D960;
	sub_832240B8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83210f58
	ctx.lr = 0x8327D970;
	sub_83210F58(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83211620
	ctx.lr = 0x8327D988;
	sub_83211620(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327da20
	if (cr6.eq) goto loc_8327DA20;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832270d0
	ctx.lr = 0x8327D9A0;
	sub_832270D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8327da10
	if (cr6.eq) goto loc_8327DA10;
	// cmplwi cr6,r31,167
	cr6.compare<uint32_t>(ctx.r31.u32, 167, xer);
	// bne cr6,0x8327d9bc
	if (!cr6.eq) goto loc_8327D9BC;
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832270d0
	ctx.lr = 0x8327D9BC;
	sub_832270D0(ctx, base);
loc_8327D9BC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8327da10
	if (cr6.eq) goto loc_8327DA10;
loc_8327D9C4:
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8327d9e8
	if (!cr6.eq) goto loc_8327D9E8;
	// lhz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// bl 0x832277f8
	ctx.lr = 0x8327D9D8;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8327d9e4
	if (!cr6.eq) goto loc_8327D9E4;
	// bl 0x83227908
	ctx.lr = 0x8327D9E4;
	sub_83227908(ctx, base);
loc_8327D9E4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8327D9E8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83225c80
	ctx.lr = 0x8327D9F0;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,21124
	ctx.r9.s64 = ctx.r11.s64 + 21124;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,22736
	ctx.r4.s64 = ctx.r10.s64 + 22736;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8327DA10;
	sub_832085E8(ctx, base);
loc_8327DA10:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x8327DA18;
	sub_83222030(ctx, base);
loc_8327DA18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8327DA20:
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r10,1824
	cr6.compare<uint32_t>(ctx.r10.u32, 1824, xer);
	// bne cr6,0x8327da44
	if (!cr6.eq) goto loc_8327DA44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222030
	ctx.lr = 0x8327DA34;
	sub_83222030(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x8327DA3C;
	sub_83222030(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8327DA44:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83239388
	ctx.lr = 0x8327DA58;
	sub_83239388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r9,12288
	ctx.r9.s64 = 12288;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8327dab0
	if (!cr6.eq) goto loc_8327DAB0;
	// lhz r11,74(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 74);
	// lhz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 72);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r8,55
	ctx.r11.u64 = ctx.r8.u64 ^ 55;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327db34
	if (cr6.eq) goto loc_8327DB34;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8327db34
	if (cr6.eq) goto loc_8327DB34;
	// lhz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x8327db34
	if (!cr6.eq) goto loc_8327DB34;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8327DAB0:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8327dad8
	if (!cr6.eq) goto loc_8327DAD8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213150
	ctx.lr = 0x8327DAC8;
	sub_83213150(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x8327DAD0;
	sub_83222030(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8327DAD8:
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// addi r6,r10,-163
	ctx.r6.s64 = ctx.r10.s64 + -163;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// srawi r3,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// and r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 & ctx.r7.u64;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8327da10
	if (!cr6.eq) goto loc_8327DA10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320fd48
	ctx.lr = 0x8327DB1C;
	sub_8320FD48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327da10
	if (!cr6.eq) goto loc_8327DA10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83213150
	ctx.lr = 0x8327DB30;
	sub_83213150(ctx, base);
	// b 0x8327d9c4
	goto loc_8327D9C4;
loc_8327DB34:
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8327db5c
	if (!cr6.eq) goto loc_8327DB5C;
	// lhz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// bl 0x832277f8
	ctx.lr = 0x8327DB48;
	sub_832277F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8327db5c
	if (!cr6.eq) goto loc_8327DB5C;
	// bl 0x83227908
	ctx.lr = 0x8327DB58;
	sub_83227908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8327DB5C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,22708
	ctx.r4.s64 = ctx.r11.s64 + 22708;
	// addi r3,r10,21124
	ctx.r3.s64 = ctx.r10.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327DB70;
	sub_83208568(ctx, base);
loc_8327DB70:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,22652
	ctx.r4.s64 = ctx.r11.s64 + 22652;
	// addi r3,r10,21124
	ctx.r3.s64 = ctx.r10.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327DB84;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327DB84"))) PPC_WEAK_FUNC(sub_8327DB84);
PPC_FUNC_IMPL(__imp__sub_8327DB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DB88"))) PPC_WEAK_FUNC(sub_8327DB88);
PPC_FUNC_IMPL(__imp__sub_8327DB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8327DB90;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8327ddb0
	if (!cr6.eq) goto loc_8327DDB0;
	// bl 0x83260f78
	ctx.lr = 0x8327DBAC;
	sub_83260F78(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lhz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x8327dda4
	if (!cr6.lt) goto loc_8327DDA4;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r10,17536
	ctx.r31.s64 = ctx.r10.s64 + 17536;
loc_8327DBD0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lbzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// rotlwi r5,r7,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stb r7,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// lbzx r10,r5,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8327dc40
	if (cr6.eq) goto loc_8327DC40;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 ^ 32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8327dc44
	if (!cr6.eq) goto loc_8327DC44;
loc_8327DC1C:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8327DC20:
	// cmplwi cr6,r6,22
	cr6.compare<uint32_t>(ctx.r6.u32, 22, xer);
	// bne cr6,0x8327dd4c
	if (!cr6.eq) goto loc_8327DD4C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8327dd9c
	if (cr6.lt) goto loc_8327DD9C;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x8327dd98
	goto loc_8327DD98;
loc_8327DC40:
	// lbz r5,94(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
loc_8327DC44:
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8327dc64
	if (cr6.eq) goto loc_8327DC64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// xori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 ^ 16;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8327dc1c
	if (cr6.eq) goto loc_8327DC1C;
loc_8327DC64:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8327dcbc
	if (cr6.eq) goto loc_8327DCBC;
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_8327DC80:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r7,25
	ctx.r28.u64 = ctx.r7.u32 & 0x7F;
	// rlwinm r7,r7,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// slw r28,r28,r8
	ctx.r28.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// or r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 | ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8327dca8
	if (cr6.eq) goto loc_8327DCA8;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// bdnz 0x8327dc80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8327DC80;
loc_8327DCA8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8327dc20
	if (cr6.eq) goto loc_8327DC20;
	// b 0x8327dcc0
	goto loc_8327DCC0;
loc_8327DCBC:
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8327DCC0:
	// rlwinm r8,r10,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8327dce0
	if (cr6.eq) goto loc_8327DCE0;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 ^ 64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8327dc20
	if (cr6.eq) goto loc_8327DC20;
loc_8327DCE0:
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8327dd18
	if (cr6.eq) goto loc_8327DD18;
	// li r8,5
	ctx.r8.s64 = 5;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8327DCF4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bdnzf 4*cr6+eq,0x8327dcf4
	--ctr.u64;
	if (ctr.u32 != 0 && !cr6.eq) goto loc_8327DCF4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// xori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 ^ 2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8327dc20
	if (cr6.eq) goto loc_8327DC20;
loc_8327DD18:
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8327dd38
	if (cr6.eq) goto loc_8327DD38;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 ^ 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8327dc20
	if (cr6.eq) goto loc_8327DC20;
loc_8327DD38:
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8327dc20
	if (cr6.eq) goto loc_8327DC20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8327dc20
	goto loc_8327DC20;
loc_8327DD4C:
	// cmplwi cr6,r6,138
	cr6.compare<uint32_t>(ctx.r6.u32, 138, xer);
	// bne cr6,0x8327dd9c
	if (!cr6.eq) goto loc_8327DD9C;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x8327ddb8
	if (cr6.gt) goto loc_8327DDB8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8327dd94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327DD94;
	// bdzf 4*cr6+eq,0x8327dd94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327DD94;
	// bdzf 4*cr6+eq,0x8327dd8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327DD8C;
	// bdzf 4*cr6+eq,0x8327dd94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327DD94;
	// bdzf 4*cr6+eq,0x8327dd9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327DD9C;
	// bdzf 4*cr6+eq,0x8327dd9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327DD9C;
	// bdzf 4*cr6+eq,0x8327dd9c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327DD9C;
	// bne cr6,0x8327dd94
	if (!cr6.eq) goto loc_8327DD94;
loc_8327DD8C:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8327dd9c
	goto loc_8327DD9C;
loc_8327DD94:
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_8327DD98:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8327DD9C:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x8327dbd0
	if (cr6.lt) goto loc_8327DBD0;
loc_8327DDA4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_8327DDB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8327DDB8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r6,r11,22816
	ctx.r6.s64 = ctx.r11.s64 + 22816;
	// addi r4,r10,22780
	ctx.r4.s64 = ctx.r10.s64 + 22780;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327DDD4;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327DDD4"))) PPC_WEAK_FUNC(sub_8327DDD4);
PPC_FUNC_IMPL(__imp__sub_8327DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DDD8"))) PPC_WEAK_FUNC(sub_8327DDD8);
PPC_FUNC_IMPL(__imp__sub_8327DDD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
loc_8327DDEC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r7,25
	ctx.r6.u64 = ctx.r7.u32 & 0x7F;
	// rlwinm r5,r7,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF80;
	// slw r4,r6,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// or r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 | ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8327de18
	if (cr6.eq) goto loc_8327DE18;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// bgt 0x8327ddec
	if (cr0.gt) goto loc_8327DDEC;
loc_8327DE18:
	// stw r11,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327DE20"))) PPC_WEAK_FUNC(sub_8327DE20);
PPC_FUNC_IMPL(__imp__sub_8327DE20) {
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
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x8327DE58;
	sub_83222508(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327DE74;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,-17
	ctx.r4.s64 = -17;
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// stb r5,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r5.u8);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327DEA4"))) PPC_WEAK_FUNC(sub_8327DEA4);
PPC_FUNC_IMPL(__imp__sub_8327DEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DEA8"))) PPC_WEAK_FUNC(sub_8327DEA8);
PPC_FUNC_IMPL(__imp__sub_8327DEA8) {
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
	// cmpwi cr6,r4,-17
	cr6.compare<int32_t>(ctx.r4.s32, -17, xer);
	// bne cr6,0x8327ded4
	if (!cr6.eq) goto loc_8327DED4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8327deec
	goto loc_8327DEEC;
loc_8327DED4:
	// cmpwi cr6,r30,-1000
	cr6.compare<int32_t>(ctx.r30.s32, -1000, xer);
	// bgt cr6,0x8327dee8
	if (cr6.gt) goto loc_8327DEE8;
	// cmpwi cr6,r30,-3000
	cr6.compare<int32_t>(ctx.r30.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8327deec
	if (cr6.gt) goto loc_8327DEEC;
loc_8327DEE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8327DEEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8327df2c
	if (cr6.eq) goto loc_8327DF2C;
	// cmpwi cr6,r30,-17
	cr6.compare<int32_t>(ctx.r30.s32, -17, xer);
	// bne cr6,0x8327df20
	if (!cr6.eq) goto loc_8327DF20;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x8327DF20;
	sub_83222508(ctx, base);
loc_8327DF20:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
loc_8327DF2C:
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

__attribute__((alias("__imp__sub_8327DF44"))) PPC_WEAK_FUNC(sub_8327DF44);
PPC_FUNC_IMPL(__imp__sub_8327DF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DF48"))) PPC_WEAK_FUNC(sub_8327DF48);
PPC_FUNC_IMPL(__imp__sub_8327DF48) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327DF60;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8327b5d0
	ctx.lr = 0x8327DF70;
	sub_8327B5D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dea8
	ctx.lr = 0x8327DF7C;
	sub_8327DEA8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327DF90"))) PPC_WEAK_FUNC(sub_8327DF90);
PPC_FUNC_IMPL(__imp__sub_8327DF90) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327DFA8;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327c0b0
	ctx.lr = 0x8327DFB8;
	sub_8327C0B0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327DFCC"))) PPC_WEAK_FUNC(sub_8327DFCC);
PPC_FUNC_IMPL(__imp__sub_8327DFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327DFD0"))) PPC_WEAK_FUNC(sub_8327DFD0);
PPC_FUNC_IMPL(__imp__sub_8327DFD0) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327DFE8;
	sub_8327DDD8(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222030
	ctx.lr = 0x8327DFF8;
	sub_83222030(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327E00C"))) PPC_WEAK_FUNC(sub_8327E00C);
PPC_FUNC_IMPL(__imp__sub_8327E00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E010"))) PPC_WEAK_FUNC(sub_8327E010);
PPC_FUNC_IMPL(__imp__sub_8327E010) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8327E018;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// or r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 | ctx.r8.u64;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// rlwinm r8,r4,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// or r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r29,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 8;
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// bl 0x8320e0d8
	ctx.lr = 0x8327E080;
	sub_8320E0D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320db60
	ctx.lr = 0x8327E090;
	sub_8320DB60(ctx, base);
	// clrlwi r3,r27,24
	ctx.r3.u64 = ctx.r27.u32 & 0xFF;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8327e0b4
	if (cr6.eq) goto loc_8327E0B4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8327E0B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E0BC"))) PPC_WEAK_FUNC(sub_8327E0BC);
PPC_FUNC_IMPL(__imp__sub_8327E0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E0C0"))) PPC_WEAK_FUNC(sub_8327E0C0);
PPC_FUNC_IMPL(__imp__sub_8327E0C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E0CC"))) PPC_WEAK_FUNC(sub_8327E0CC);
PPC_FUNC_IMPL(__imp__sub_8327E0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E0D0"))) PPC_WEAK_FUNC(sub_8327E0D0);
PPC_FUNC_IMPL(__imp__sub_8327E0D0) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E0DC"))) PPC_WEAK_FUNC(sub_8327E0DC);
PPC_FUNC_IMPL(__imp__sub_8327E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E0E0"))) PPC_WEAK_FUNC(sub_8327E0E0);
PPC_FUNC_IMPL(__imp__sub_8327E0E0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E0EC"))) PPC_WEAK_FUNC(sub_8327E0EC);
PPC_FUNC_IMPL(__imp__sub_8327E0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E0F0"))) PPC_WEAK_FUNC(sub_8327E0F0);
PPC_FUNC_IMPL(__imp__sub_8327E0F0) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E0FC"))) PPC_WEAK_FUNC(sub_8327E0FC);
PPC_FUNC_IMPL(__imp__sub_8327E0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E100"))) PPC_WEAK_FUNC(sub_8327E100);
PPC_FUNC_IMPL(__imp__sub_8327E100) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E10C"))) PPC_WEAK_FUNC(sub_8327E10C);
PPC_FUNC_IMPL(__imp__sub_8327E10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E110"))) PPC_WEAK_FUNC(sub_8327E110);
PPC_FUNC_IMPL(__imp__sub_8327E110) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E11C"))) PPC_WEAK_FUNC(sub_8327E11C);
PPC_FUNC_IMPL(__imp__sub_8327E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E120"))) PPC_WEAK_FUNC(sub_8327E120);
PPC_FUNC_IMPL(__imp__sub_8327E120) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E12C"))) PPC_WEAK_FUNC(sub_8327E12C);
PPC_FUNC_IMPL(__imp__sub_8327E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E130"))) PPC_WEAK_FUNC(sub_8327E130);
PPC_FUNC_IMPL(__imp__sub_8327E130) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E13C"))) PPC_WEAK_FUNC(sub_8327E13C);
PPC_FUNC_IMPL(__imp__sub_8327E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E140"))) PPC_WEAK_FUNC(sub_8327E140);
PPC_FUNC_IMPL(__imp__sub_8327E140) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E14C"))) PPC_WEAK_FUNC(sub_8327E14C);
PPC_FUNC_IMPL(__imp__sub_8327E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E150"))) PPC_WEAK_FUNC(sub_8327E150);
PPC_FUNC_IMPL(__imp__sub_8327E150) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E15C"))) PPC_WEAK_FUNC(sub_8327E15C);
PPC_FUNC_IMPL(__imp__sub_8327E15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E160"))) PPC_WEAK_FUNC(sub_8327E160);
PPC_FUNC_IMPL(__imp__sub_8327E160) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E16C"))) PPC_WEAK_FUNC(sub_8327E16C);
PPC_FUNC_IMPL(__imp__sub_8327E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E170"))) PPC_WEAK_FUNC(sub_8327E170);
PPC_FUNC_IMPL(__imp__sub_8327E170) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8327e010
	sub_8327E010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E17C"))) PPC_WEAK_FUNC(sub_8327E17C);
PPC_FUNC_IMPL(__imp__sub_8327E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E180"))) PPC_WEAK_FUNC(sub_8327E180);
PPC_FUNC_IMPL(__imp__sub_8327E180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r10,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E1B8"))) PPC_WEAK_FUNC(sub_8327E1B8);
PPC_FUNC_IMPL(__imp__sub_8327E1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8327E1C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lhz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// srawi r29,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r7.s32 >> 8;
	// bl 0x83220140
	ctx.lr = 0x8327E218;
	sub_83220140(ctx, base);
	// lhz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subfe r30,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r30.u64 = ~ctx.r3.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327E240;
	sub_83222030(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// sth r9,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r9.u16);
	// beq cr6,0x8327e264
	if (cr6.eq) goto loc_8327E264;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8327E264:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E26C"))) PPC_WEAK_FUNC(sub_8327E26C);
PPC_FUNC_IMPL(__imp__sub_8327E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E270"))) PPC_WEAK_FUNC(sub_8327E270);
PPC_FUNC_IMPL(__imp__sub_8327E270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8327E278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lhz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// srawi r30,r7,8
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 8;
	// bl 0x83220140
	ctx.lr = 0x8327E2D0;
	sub_83220140(ctx, base);
	// lhz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r3,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327E2F8;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// sth r10,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// beq cr6,0x8327e318
	if (cr6.eq) goto loc_8327E318;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8327E318:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E320"))) PPC_WEAK_FUNC(sub_8327E320);
PPC_FUNC_IMPL(__imp__sub_8327E320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8327E328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r4,r5,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r4,r7
	ctx.r11.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r27,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 8;
	// bl 0x8327ddd8
	ctx.lr = 0x8327E364;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r3,127
	cr6.compare<uint32_t>(ctx.r3.u32, 127, xer);
	// ble cr6,0x8327e3b0
	if (!cr6.gt) goto loc_8327E3B0;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// cmplwi cr6,r3,16383
	cr6.compare<uint32_t>(ctx.r3.u32, 16383, xer);
	// ble cr6,0x8327e3b0
	if (!cr6.gt) goto loc_8327E3B0;
	// lis r11,31
	ctx.r11.s64 = 2031616;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x8327e3b0
	if (!cr6.gt) goto loc_8327E3B0;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x8327e3b0
	if (!cr6.gt) goto loc_8327E3B0;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_8327E3B0:
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222578
	ctx.lr = 0x8327E3D0;
	sub_83222578(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327E3F0;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// blt cr6,0x8327e414
	if (cr6.lt) goto loc_8327E414;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8327E414:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E45C"))) PPC_WEAK_FUNC(sub_8327E45C);
PPC_FUNC_IMPL(__imp__sub_8327E45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E460"))) PPC_WEAK_FUNC(sub_8327E460);
PPC_FUNC_IMPL(__imp__sub_8327E460) {
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
	// lhz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327E498;
	sub_83222030(ctx, base);
	// lhz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// sth r7,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r7.u16);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x83277e20
	ctx.lr = 0x8327E4B0;
	sub_83277E20(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8327E4CC"))) PPC_WEAK_FUNC(sub_8327E4CC);
PPC_FUNC_IMPL(__imp__sub_8327E4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E4D0"))) PPC_WEAK_FUNC(sub_8327E4D0);
PPC_FUNC_IMPL(__imp__sub_8327E4D0) {
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
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// bl 0x83222508
	ctx.lr = 0x8327E508;
	sub_83222508(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327E524;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327E544"))) PPC_WEAK_FUNC(sub_8327E544);
PPC_FUNC_IMPL(__imp__sub_8327E544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E548"))) PPC_WEAK_FUNC(sub_8327E548);
PPC_FUNC_IMPL(__imp__sub_8327E548) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r7.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r8,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r8.u16);
	// sth r9,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r9.u16);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E584"))) PPC_WEAK_FUNC(sub_8327E584);
PPC_FUNC_IMPL(__imp__sub_8327E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E588"))) PPC_WEAK_FUNC(sub_8327E588);
PPC_FUNC_IMPL(__imp__sub_8327E588) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8327b5d0
	sub_8327B5D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E594"))) PPC_WEAK_FUNC(sub_8327E594);
PPC_FUNC_IMPL(__imp__sub_8327E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E598"))) PPC_WEAK_FUNC(sub_8327E598);
PPC_FUNC_IMPL(__imp__sub_8327E598) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r5.u16);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// stw r4,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E5E0"))) PPC_WEAK_FUNC(sub_8327E5E0);
PPC_FUNC_IMPL(__imp__sub_8327E5E0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E5F0"))) PPC_WEAK_FUNC(sub_8327E5F0);
PPC_FUNC_IMPL(__imp__sub_8327E5F0) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327E608;
	sub_8327DDD8(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r8.u16);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327E64C"))) PPC_WEAK_FUNC(sub_8327E64C);
PPC_FUNC_IMPL(__imp__sub_8327E64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E650"))) PPC_WEAK_FUNC(sub_8327E650);
PPC_FUNC_IMPL(__imp__sub_8327E650) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r7.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// stb r8,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E688"))) PPC_WEAK_FUNC(sub_8327E688);
PPC_FUNC_IMPL(__imp__sub_8327E688) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r7.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// stb r8,-4(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327E6C0"))) PPC_WEAK_FUNC(sub_8327E6C0);
PPC_FUNC_IMPL(__imp__sub_8327E6C0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x83221490
	sub_83221490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E6E8"))) PPC_WEAK_FUNC(sub_8327E6E8);
PPC_FUNC_IMPL(__imp__sub_8327E6E8) {
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
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327E718;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327E738"))) PPC_WEAK_FUNC(sub_8327E738);
PPC_FUNC_IMPL(__imp__sub_8327E738) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r4,8
	ctx.r3.s64 = ctx.r4.s64 + 8;
	// b 0x832240b8
	sub_832240B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E768"))) PPC_WEAK_FUNC(sub_8327E768);
PPC_FUNC_IMPL(__imp__sub_8327E768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x8327e798
	if (cr6.lt) goto loc_8327E798;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// ld r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// std r10,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.r10.u64);
	// std r9,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r9.u64);
	// blr 
	return;
loc_8327E798:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,22824
	ctx.r4.s64 = ctx.r11.s64 + 22824;
	// addi r3,r10,21124
	ctx.r3.s64 = ctx.r10.s64 + 21124;
	// b 0x832085e8
	sub_832085E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327E7AC"))) PPC_WEAK_FUNC(sub_8327E7AC);
PPC_FUNC_IMPL(__imp__sub_8327E7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E7B0"))) PPC_WEAK_FUNC(sub_8327E7B0);
PPC_FUNC_IMPL(__imp__sub_8327E7B0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327E7C8;
	sub_8327DDD8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83210908
	ctx.lr = 0x8327E7EC;
	sub_83210908(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r7.u16);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// sth r3,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r3.u16);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8327E83C"))) PPC_WEAK_FUNC(sub_8327E83C);
PPC_FUNC_IMPL(__imp__sub_8327E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E840"))) PPC_WEAK_FUNC(sub_8327E840);
PPC_FUNC_IMPL(__imp__sub_8327E840) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327E858;
	sub_8327DDD8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// lhz r11,22(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 22);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r9,r3,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// sth r5,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r5.u16);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r7,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r7.u16);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327E8B4"))) PPC_WEAK_FUNC(sub_8327E8B4);
PPC_FUNC_IMPL(__imp__sub_8327E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E8B8"))) PPC_WEAK_FUNC(sub_8327E8B8);
PPC_FUNC_IMPL(__imp__sub_8327E8B8) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327E8D0;
	sub_8327DDD8(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// lhz r11,28(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 28);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f1,r4,r7
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r7.u32);
	// sth r6,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r6.u16);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83221508
	ctx.lr = 0x8327E910;
	sub_83221508(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327E924"))) PPC_WEAK_FUNC(sub_8327E924);
PPC_FUNC_IMPL(__imp__sub_8327E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327E928"))) PPC_WEAK_FUNC(sub_8327E928);
PPC_FUNC_IMPL(__imp__sub_8327E928) {
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
	// addi r30,r3,96
	ctx.r30.s64 = ctx.r3.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8320db50
	ctx.lr = 0x8327E950;
	sub_8320DB50(ctx, base);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lhz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// addi r4,r10,-8
	ctx.r4.s64 = ctx.r10.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x8327E988;
	sub_83222508(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x83277c58
	ctx.lr = 0x8327E994;
	sub_83277C58(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lhz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327E9B4;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8327E9D8"))) PPC_WEAK_FUNC(sub_8327E9D8);
PPC_FUNC_IMPL(__imp__sub_8327E9D8) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327E9F0;
	sub_8327DDD8(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327EA10"))) PPC_WEAK_FUNC(sub_8327EA10);
PPC_FUNC_IMPL(__imp__sub_8327EA10) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327EA2C;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327EA38;
	sub_8327DDD8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x8327cf70
	ctx.lr = 0x8327EA54;
	sub_8327CF70(ctx, base);
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

__attribute__((alias("__imp__sub_8327EA6C"))) PPC_WEAK_FUNC(sub_8327EA6C);
PPC_FUNC_IMPL(__imp__sub_8327EA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327EA70"))) PPC_WEAK_FUNC(sub_8327EA70);
PPC_FUNC_IMPL(__imp__sub_8327EA70) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327EA8C;
	sub_8327DDD8(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83221440
	ctx.lr = 0x8327EAA4;
	sub_83221440(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8327eab8
	if (!cr6.eq) goto loc_8327EAB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
loc_8327EAB8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x832860f8
	ctx.lr = 0x8327EAC8;
	sub_832860F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,13
	ctx.r9.s64 = 13;
	// li r8,142
	ctx.r8.s64 = 142;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lhz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// sth r8,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r8.u16);
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8327EB20"))) PPC_WEAK_FUNC(sub_8327EB20);
PPC_FUNC_IMPL(__imp__sub_8327EB20) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327EB38;
	sub_8327DDD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83279d68
	ctx.lr = 0x8327EB4C;
	sub_83279D68(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327EB60"))) PPC_WEAK_FUNC(sub_8327EB60);
PPC_FUNC_IMPL(__imp__sub_8327EB60) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stw r10,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327EB74"))) PPC_WEAK_FUNC(sub_8327EB74);
PPC_FUNC_IMPL(__imp__sub_8327EB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327EB78"))) PPC_WEAK_FUNC(sub_8327EB78);
PPC_FUNC_IMPL(__imp__sub_8327EB78) {
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
	// beq cr6,0x8327ebb4
	if (cr6.eq) goto loc_8327EBB4;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x8327EBB4;
	sub_83222508(ctx, base);
loc_8327EBB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327EBD8"))) PPC_WEAK_FUNC(sub_8327EBD8);
PPC_FUNC_IMPL(__imp__sub_8327EBD8) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327EBF4;
	sub_8327DDD8(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// subf r11,r30,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r30.s64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8327a3b8
	ctx.lr = 0x8327EC28;
	sub_8327A3B8(ctx, base);
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320db60
	ctx.lr = 0x8327EC34;
	sub_8320DB60(ctx, base);
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

__attribute__((alias("__imp__sub_8327EC4C"))) PPC_WEAK_FUNC(sub_8327EC4C);
PPC_FUNC_IMPL(__imp__sub_8327EC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327EC50"))) PPC_WEAK_FUNC(sub_8327EC50);
PPC_FUNC_IMPL(__imp__sub_8327EC50) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327EC6C;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327EC78;
	sub_8327DDD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8327a068
	ctx.lr = 0x8327EC90;
	sub_8327A068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dea8
	ctx.lr = 0x8327EC9C;
	sub_8327DEA8(ctx, base);
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

__attribute__((alias("__imp__sub_8327ECB4"))) PPC_WEAK_FUNC(sub_8327ECB4);
PPC_FUNC_IMPL(__imp__sub_8327ECB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327ECB8"))) PPC_WEAK_FUNC(sub_8327ECB8);
PPC_FUNC_IMPL(__imp__sub_8327ECB8) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327ECD4;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327ECE0;
	sub_8327DDD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8327a068
	ctx.lr = 0x8327ECF8;
	sub_8327A068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dea8
	ctx.lr = 0x8327ED04;
	sub_8327DEA8(ctx, base);
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

__attribute__((alias("__imp__sub_8327ED1C"))) PPC_WEAK_FUNC(sub_8327ED1C);
PPC_FUNC_IMPL(__imp__sub_8327ED1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327ED20"))) PPC_WEAK_FUNC(sub_8327ED20);
PPC_FUNC_IMPL(__imp__sub_8327ED20) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327ED3C;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327ED48;
	sub_8327DDD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8327a068
	ctx.lr = 0x8327ED60;
	sub_8327A068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dea8
	ctx.lr = 0x8327ED6C;
	sub_8327DEA8(ctx, base);
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

__attribute__((alias("__imp__sub_8327ED84"))) PPC_WEAK_FUNC(sub_8327ED84);
PPC_FUNC_IMPL(__imp__sub_8327ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327ED88"))) PPC_WEAK_FUNC(sub_8327ED88);
PPC_FUNC_IMPL(__imp__sub_8327ED88) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327EDA4;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327EDB0;
	sub_8327DDD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8327a068
	ctx.lr = 0x8327EDC8;
	sub_8327A068(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dea8
	ctx.lr = 0x8327EDD4;
	sub_8327DEA8(ctx, base);
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

__attribute__((alias("__imp__sub_8327EDEC"))) PPC_WEAK_FUNC(sub_8327EDEC);
PPC_FUNC_IMPL(__imp__sub_8327EDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327EDF0"))) PPC_WEAK_FUNC(sub_8327EDF0);
PPC_FUNC_IMPL(__imp__sub_8327EDF0) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327EE08;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8327d288
	ctx.lr = 0x8327EE14;
	sub_8327D288(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327EE28"))) PPC_WEAK_FUNC(sub_8327EE28);
PPC_FUNC_IMPL(__imp__sub_8327EE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8327EE30;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327EE3C;
	sub_8327DDD8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r30,r3,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,163
	ctx.r9.s64 = 163;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r9,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r9.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stb r6,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r6.u8);
	// bl 0x83283760
	ctx.lr = 0x8327EE9C;
	sub_83283760(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8327eeb4
	if (!cr6.eq) goto loc_8327EEB4;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// b 0x8327eec0
	goto loc_8327EEC0;
loc_8327EEB4:
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320db60
	ctx.lr = 0x8327EEC0;
	sub_8320DB60(ctx, base);
loc_8327EEC0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x8327EEE0;
	sub_83222508(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327EEE8"))) PPC_WEAK_FUNC(sub_8327EEE8);
PPC_FUNC_IMPL(__imp__sub_8327EEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8327EEF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327EEFC;
	sub_8327DDD8(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// bge cr6,0x8327ef2c
	if (!cr6.lt) goto loc_8327EF2C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,22856
	ctx.r4.s64 = ctx.r11.s64 + 22856;
	// addi r3,r10,21124
	ctx.r3.s64 = ctx.r10.s64 + 21124;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83208568
	ctx.lr = 0x8327EF2C;
	sub_83208568(ctx, base);
loc_8327EF2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83273b48
	ctx.lr = 0x8327EF34;
	sub_83273B48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,166
	ctx.r10.s64 = 166;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stb r8,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r8.u8);
	// bl 0x83273be8
	ctx.lr = 0x8327EF80;
	sub_83273BE8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8327ef98
	if (!cr6.eq) goto loc_8327EF98;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// b 0x8327efac
	goto loc_8327EFAC;
loc_8327EF98:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// ble cr6,0x8327efac
	if (!cr6.gt) goto loc_8327EFAC;
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320db60
	ctx.lr = 0x8327EFAC;
	sub_8320DB60(ctx, base);
loc_8327EFAC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// ori r7,r9,8400
	ctx.r7.u64 = ctx.r9.u64 | 8400;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lhz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r7,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8327efec
	if (cr6.eq) goto loc_8327EFEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8327EFEC;
	sub_83222030(ctx, base);
loc_8327EFEC:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8327F014"))) PPC_WEAK_FUNC(sub_8327F014);
PPC_FUNC_IMPL(__imp__sub_8327F014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327F018"))) PPC_WEAK_FUNC(sub_8327F018);
PPC_FUNC_IMPL(__imp__sub_8327F018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8327F020;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// bl 0x8327ddd8
	ctx.lr = 0x8327F040;
	sub_8327DDD8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x83273b48
	ctx.lr = 0x8327F048;
	sub_83273B48(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x8327f4ac
	if (cr6.gt) goto loc_8327F4AC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8327f0f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F0F0;
	// bdzf 4*cr6+eq,0x8327f16c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F16C;
	// bdzf 4*cr6+eq,0x8327f2ac
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F2AC;
	// bdzf 4*cr6+eq,0x8327f31c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F31C;
	// bdzf 4*cr6+eq,0x8327f3bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F3BC;
	// bdzf 4*cr6+eq,0x8327f410
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F410;
	// bdzf 4*cr6+eq,0x8327f45c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F45C;
	// bne cr6,0x8327f208
	if (!cr6.eq) goto loc_8327F208;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ble cr6,0x8327f0e0
	if (!cr6.gt) goto loc_8327F0E0;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r7,3
	ctx.r7.s64 = 3;
loc_8327F0A4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8327f0b4
	if (!cr6.eq) goto loc_8327F0B4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x8327f0c8
	goto loc_8327F0C8;
loc_8327F0B4:
	// lwz r9,32(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r6,r11,31,1,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r10,r11,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x38;
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8327F0C8:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bdnz 0x8327f0a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8327F0A4;
loc_8327F0E0:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// b 0x8327f45c
	goto loc_8327F45C;
loc_8327F0F0:
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ble cr6,0x8327f158
	if (!cr6.gt) goto loc_8327F158;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r7,3
	ctx.r7.s64 = 3;
loc_8327F110:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8327f120
	if (!cr6.eq) goto loc_8327F120;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x8327f134
	goto loc_8327F134;
loc_8327F120:
	// lwz r9,32(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r6,r11,31,1,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r10,r11,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x38;
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8327F134:
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// rlwimi r9,r6,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// bdnz 0x8327f110
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8327F110;
loc_8327F158:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// b 0x8327f45c
	goto loc_8327F45C;
loc_8327F16C:
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r30,24(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// ble cr6,0x8327f1f4
	if (!cr6.gt) goto loc_8327F1F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
loc_8327F188:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8327f198
	if (!cr6.eq) goto loc_8327F198;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x8327f1ac
	goto loc_8327F1AC;
loc_8327F198:
	// lwz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r9,r31,31,1,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r11,r31,3,26,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8327F1AC:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8327f1e0
	if (cr6.eq) goto loc_8327F1E0;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 28);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfdx f1,r8,r9
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
loc_8327F1E0:
	// bl 0x83221508
	ctx.lr = 0x8327F1E4;
	sub_83221508(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x8327f188
	if (cr6.lt) goto loc_8327F188;
loc_8327F1F4:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// b 0x8327f45c
	goto loc_8327F45C;
loc_8327F208:
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r30,24(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// ble cr6,0x8327f298
	if (!cr6.gt) goto loc_8327F298;
loc_8327F21C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8327f22c
	if (!cr6.eq) goto loc_8327F22C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x8327f240
	goto loc_8327F240;
loc_8327F22C:
	// lwz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r9,r31,31,1,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r11,r31,3,26,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8327F240:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwimi r10,r9,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8327f274
	if (cr6.eq) goto loc_8327F274;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lhz r11,22(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 22);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_8327F274:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// bl 0x83221508
	ctx.lr = 0x8327F288;
	sub_83221508(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// blt cr6,0x8327f21c
	if (cr6.lt) goto loc_8327F21C;
loc_8327F298:
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// b 0x8327f45c
	goto loc_8327F45C;
loc_8327F2AC:
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ble cr6,0x8327f30c
	if (!cr6.gt) goto loc_8327F30C;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r7,2
	ctx.r7.s64 = 2;
loc_8327F2CC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8327f2dc
	if (!cr6.eq) goto loc_8327F2DC;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x8327f2f0
	goto loc_8327F2F0;
loc_8327F2DC:
	// lwz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r6,r11,31,1,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r9,r11,3,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x38;
	// lwzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8327F2F0:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfe r9,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// bdnz 0x8327f2cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8327F2CC;
loc_8327F30C:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// b 0x8327f45c
	goto loc_8327F45C;
loc_8327F31C:
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// ble cr6,0x8327f3a8
	if (!cr6.gt) goto loc_8327F3A8;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
	// li r28,9
	ctx.r28.s64 = 9;
loc_8327F338:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// sth r24,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r24.u16);
	// stb r24,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r24.u8);
	// bne cr6,0x8327f358
	if (!cr6.eq) goto loc_8327F358;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x8327f36c
	goto loc_8327F36C;
loc_8327F358:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r9,r31,31,1,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r10,r31,3,26,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0x38;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8327F36C:
	// lbz r10,3(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x83210908
	ctx.lr = 0x8327F388;
	sub_83210908(ctx, base);
	// sth r28,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// lhz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sth r9,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r9.u16);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, xer);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// blt cr6,0x8327f338
	if (cr6.lt) goto loc_8327F338;
loc_8327F3A8:
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
	// b 0x8327f45c
	goto loc_8327F45C;
loc_8327F3BC:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// ble cr6,0x8327f45c
	if (!cr6.gt) goto loc_8327F45C;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// li r8,12
	ctx.r8.s64 = 12;
loc_8327F3D4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8327f3e4
	if (!cr6.eq) goto loc_8327F3E4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x8327f3f8
	goto loc_8327F3F8;
loc_8327F3E4:
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r7,r10,31,1,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r9,r10,3,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x38;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8327F3F8:
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r24,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r24.u16);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// bdnz 0x8327f3d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8327F3D4;
	// b 0x8327f45c
	goto loc_8327F45C;
loc_8327F410:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ble cr6,0x8327f45c
	if (!cr6.gt) goto loc_8327F45C;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// li r7,3
	ctx.r7.s64 = 3;
loc_8327F428:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x8327f438
	if (!cr6.eq) goto loc_8327F438;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// b 0x8327f44c
	goto loc_8327F44C;
loc_8327F438:
	// lwz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r8,r11,31,1,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r9,r11,3,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x38;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8327F44C:
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// bdnz 0x8327f428
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8327F428;
loc_8327F45C:
	// lhz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 32);
	// cntlzw r10,r25
	ctx.r10.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,32(r26)
	PPC_STORE_U16(ctx.r26.u32 + 32, ctx.r7.u16);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// lwz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r5,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r5.u16);
	// sth r9,-6(r11)
	PPC_STORE_U16(ctx.r11.u32 + -6, ctx.r9.u16);
	// stw r25,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8327F4AC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r6,r11,22908
	ctx.r6.s64 = ctx.r11.s64 + 22908;
	// addi r4,r10,22780
	ctx.r4.s64 = ctx.r10.s64 + 22780;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327F4C8;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327F4C8"))) PPC_WEAK_FUNC(sub_8327F4C8);
PPC_FUNC_IMPL(__imp__sub_8327F4C8) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r9,17
	ctx.r9.s64 = 17;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r8.u16);
	// clrlwi r5,r8,16
	ctx.r5.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// stw r6,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r10,r3,4096
	ctx.r10.u64 = ctx.r3.u64 | 4096;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8327F510"))) PPC_WEAK_FUNC(sub_8327F510);
PPC_FUNC_IMPL(__imp__sub_8327F510) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327F528;
	sub_8327DDD8(ctx, base);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x8323a968
	ctx.lr = 0x8327F54C;
	sub_8323A968(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327F560"))) PPC_WEAK_FUNC(sub_8327F560);
PPC_FUNC_IMPL(__imp__sub_8327F560) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327F578;
	sub_8327DDD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8327d0d0
	ctx.lr = 0x8327F588;
	sub_8327D0D0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327F59C"))) PPC_WEAK_FUNC(sub_8327F59C);
PPC_FUNC_IMPL(__imp__sub_8327F59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327F5A0"))) PPC_WEAK_FUNC(sub_8327F5A0);
PPC_FUNC_IMPL(__imp__sub_8327F5A0) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327F5B8;
	sub_8327DDD8(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x83221378
	ctx.lr = 0x8327F5C4;
	sub_83221378(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// li r9,18
	ctx.r9.s64 = 18;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r8.u16);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327F608"))) PPC_WEAK_FUNC(sub_8327F608);
PPC_FUNC_IMPL(__imp__sub_8327F608) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327F620;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8327c0b0
	ctx.lr = 0x8327F630;
	sub_8327C0B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dea8
	ctx.lr = 0x8327F63C;
	sub_8327DEA8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8327F650"))) PPC_WEAK_FUNC(sub_8327F650);
PPC_FUNC_IMPL(__imp__sub_8327F650) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327F66C;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// clrlwi r11,r7,25
	ctx.r11.u64 = ctx.r7.u32 & 0x7F;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x8327f774
	if (cr6.gt) goto loc_8327F774;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8327f6cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F6CC;
	// bdzf 4*cr6+eq,0x8327f6d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F6D8;
	// bdzf 4*cr6+eq,0x8327f6e4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F6E4;
	// bdzf 4*cr6+eq,0x8327f6f0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F6F0;
	// bdzf 4*cr6+eq,0x8327f740
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F740;
	// bne cr6,0x8327f6e4
	if (!cr6.eq) goto loc_8327F6E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x8327F6C8;
	sub_8322E5B0(ctx, base);
	// b 0x8327f728
	goto loc_8327F728;
loc_8327F6CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223850
	ctx.lr = 0x8327F6D4;
	sub_83223850(ctx, base);
	// b 0x8327f728
	goto loc_8327F728;
loc_8327F6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8327F6E0;
	sub_83222030(ctx, base);
	// b 0x8327f728
	goto loc_8327F728;
loc_8327F6E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213150
	ctx.lr = 0x8327F6EC;
	sub_83213150(ctx, base);
	// b 0x8327f728
	goto loc_8327F728;
loc_8327F6F0:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8327f718
	if (cr6.eq) goto loc_8327F718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8327F718;
	sub_83222030(ctx, base);
loc_8327F718:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8327F720:
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
loc_8327F728:
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
loc_8327F740:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8327f768
	if (cr6.eq) goto loc_8327F768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8327F768;
	sub_83222030(ctx, base);
loc_8327F768:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x8327f720
	goto loc_8327F720;
loc_8327F774:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,22920
	ctx.r4.s64 = ctx.r10.s64 + 22920;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327F790;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327F790"))) PPC_WEAK_FUNC(sub_8327F790);
PPC_FUNC_IMPL(__imp__sub_8327F790) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8327F7AC;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327F7B8;
	sub_8327DDD8(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r8,r9,8400
	ctx.r8.u64 = ctx.r9.u64 | 8400;
	// lhzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sraw r5,r8,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r5.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8327f7ec
	if (cr6.eq) goto loc_8327F7EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8327F7EC;
	sub_83222030(ctx, base);
loc_8327F7EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_8327F818"))) PPC_WEAK_FUNC(sub_8327F818);
PPC_FUNC_IMPL(__imp__sub_8327F818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8327F820;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327F82C;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r8,r9,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// lhz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r9,25
	ctx.r10.u64 = ctx.r9.u32 & 0x7F;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x8327f978
	if (cr6.eq) goto loc_8327F978;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8327f95c
	if (cr6.gt) goto loc_8327F95C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8327f8c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F8C0;
	// bdzf 4*cr6+eq,0x8327f8e8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F8E8;
	// bdzf 4*cr6+eq,0x8327f910
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8327F910;
	// bne cr6,0x8327f938
	if (!cr6.eq) goto loc_8327F938;
	// li r4,176
	ctx.r4.s64 = 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320fcc0
	ctx.lr = 0x8327F8A4;
	sub_8320FCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x8327F8BC;
	sub_8322E5B0(ctx, base);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327F8C0:
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320fcc0
	ctx.lr = 0x8327F8CC;
	sub_8320FCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x8327F8E4;
	sub_8322E5B0(ctx, base);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327F8E8:
	// li r4,298
	ctx.r4.s64 = 298;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320fcc0
	ctx.lr = 0x8327F8F4;
	sub_8320FCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x8327F90C;
	sub_8322E5B0(ctx, base);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327F910:
	// li r4,175
	ctx.r4.s64 = 175;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320fcc0
	ctx.lr = 0x8327F91C;
	sub_8320FCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320cf60
	ctx.lr = 0x8327F934;
	sub_8320CF60(ctx, base);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327F938:
	// li r4,174
	ctx.r4.s64 = 174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320fcc0
	ctx.lr = 0x8327F944;
	sub_8320FCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213150
	ctx.lr = 0x8327F958;
	sub_83213150(ctx, base);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327F95C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,22948
	ctx.r4.s64 = ctx.r10.s64 + 22948;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327F978;
	sub_83208568(ctx, base);
loc_8327F978:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8327fb6c
	if (cr6.gt) goto loc_8327FB6C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8327fb28
	if (cr6.eq) goto loc_8327FB28;
	// bdz 0x8327f9a4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327F9A4;
	// bdz 0x8327f9e8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327F9E8;
	// bdz 0x8327fa1c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FA1C;
	// bdz 0x8327fa6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FA6C;
	// b 0x8327fa90
	goto loc_8327FA90;
loc_8327F9A4:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,3450
	ctx.r10.s64 = 3450;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83226378
	ctx.lr = 0x8327F9D8;
	sub_83226378(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222508
	ctx.lr = 0x8327F9E4;
	sub_83222508(ctx, base);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327F9E8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,1032
	ctx.r10.s64 = 1032;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8327FA0C;
	sub_83222578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x8327FA18;
	sub_8322E5B0(ctx, base);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327FA1C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x8327fb28
	if (cr6.eq) goto loc_8327FB28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832229d8
	ctx.lr = 0x8327FA30;
	sub_832229D8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sraw r7,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8327fa5c
	if (cr6.eq) goto loc_8327FA5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8327FA5C;
	sub_83222030(ctx, base);
loc_8327FA5C:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327FA6C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8327fb28
	if (cr6.eq) goto loc_8327FB28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220140
	ctx.lr = 0x8327FA80;
	sub_83220140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320cf60
	ctx.lr = 0x8327FA8C;
	sub_8320CF60(ctx, base);
	// b 0x8327fb28
	goto loc_8327FB28;
loc_8327FA90:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r8,12288
	ctx.r8.s64 = 12288;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r6,r10,-163
	ctx.r6.s64 = ctx.r10.s64 + -163;
	// srw r5,r8,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// and r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ctx.r3.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// xori r10,r10,40
	ctx.r10.u64 = ctx.r10.u64 ^ 40;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srawi r7,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// li r6,640
	ctx.r6.s64 = 640;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// srw r4,r6,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327fb28
	if (!cr6.eq) goto loc_8327FB28;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x8327FB1C;
	sub_83222BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223bd0
	ctx.lr = 0x8327FB28;
	sub_83223BD0(ctx, base);
loc_8327FB28:
	// lwz r10,68(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222508
	ctx.lr = 0x8327FB3C;
	sub_83222508(ctx, base);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8327FB58;
	sub_83222030(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// sth r7,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8327FB6C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,22948
	ctx.r4.s64 = ctx.r10.s64 + 22948;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327FB88;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327FB88"))) PPC_WEAK_FUNC(sub_8327FB88);
PPC_FUNC_IMPL(__imp__sub_8327FB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8327FB90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327FB9C;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lhz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r10,-8
	ctx.r31.s64 = ctx.r10.s64 + -8;
	// bgt cr6,0x8327fd98
	if (cr6.gt) goto loc_8327FD98;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8327fd78
	if (cr6.eq) goto loc_8327FD78;
	// bdz 0x8327fbf4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FBF4;
	// bdz 0x8327fc38
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FC38;
	// bdz 0x8327fc6c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FC6C;
	// bdz 0x8327fcbc
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FCBC;
	// b 0x8327fce0
	goto loc_8327FCE0;
loc_8327FBF4:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,3450
	ctx.r10.s64 = 3450;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8327fd78
	if (!cr6.eq) goto loc_8327FD78;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83226378
	ctx.lr = 0x8327FC28;
	sub_83226378(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222508
	ctx.lr = 0x8327FC34;
	sub_83222508(ctx, base);
	// b 0x8327fd78
	goto loc_8327FD78;
loc_8327FC38:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,1032
	ctx.r10.s64 = 1032;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8327fd78
	if (!cr6.eq) goto loc_8327FD78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8327FC5C;
	sub_83222578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x8327FC68;
	sub_8322E5B0(ctx, base);
	// b 0x8327fd78
	goto loc_8327FD78;
loc_8327FC6C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x8327fd78
	if (cr6.eq) goto loc_8327FD78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832229d8
	ctx.lr = 0x8327FC80;
	sub_832229D8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sraw r7,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8327fcac
	if (cr6.eq) goto loc_8327FCAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8327FCAC;
	sub_83222030(ctx, base);
loc_8327FCAC:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x8327fd78
	goto loc_8327FD78;
loc_8327FCBC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8327fd78
	if (cr6.eq) goto loc_8327FD78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220140
	ctx.lr = 0x8327FCD0;
	sub_83220140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320cf60
	ctx.lr = 0x8327FCDC;
	sub_8320CF60(ctx, base);
	// b 0x8327fd78
	goto loc_8327FD78;
loc_8327FCE0:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r8,12288
	ctx.r8.s64 = 12288;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r6,r10,-163
	ctx.r6.s64 = ctx.r10.s64 + -163;
	// srw r5,r8,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// and r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ctx.r3.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8327fd78
	if (!cr6.eq) goto loc_8327FD78;
	// xori r10,r10,40
	ctx.r10.u64 = ctx.r10.u64 ^ 40;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srawi r7,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// li r6,640
	ctx.r6.s64 = 640;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// srw r4,r6,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327fd78
	if (!cr6.eq) goto loc_8327FD78;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x8327FD6C;
	sub_83222BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223bd0
	ctx.lr = 0x8327FD78;
	sub_83223BD0(ctx, base);
loc_8327FD78:
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x832240b8
	ctx.lr = 0x8327FD90;
	sub_832240B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8327FD98:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,22980
	ctx.r4.s64 = ctx.r10.s64 + 22980;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327FDB4;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327FDB4"))) PPC_WEAK_FUNC(sub_8327FDB4);
PPC_FUNC_IMPL(__imp__sub_8327FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8327FDB8"))) PPC_WEAK_FUNC(sub_8327FDB8);
PPC_FUNC_IMPL(__imp__sub_8327FDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8327FDC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327FDCC;
	sub_8327DDD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8327FDD8;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r31,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832240b8
	ctx.lr = 0x8327FE08;
	sub_832240B8(ctx, base);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x8327ffd4
	if (cr6.gt) goto loc_8327FFD4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8327fe78
	if (cr6.eq) goto loc_8327FE78;
	// bdz 0x8327fe38
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FE38;
	// bdz 0x8327fe80
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FE80;
	// bdz 0x8327feb8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FEB8;
	// bdz 0x8327ff0c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8327FF0C;
	// b 0x8327ff34
	goto loc_8327FF34;
loc_8327FE38:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,3450
	ctx.r10.s64 = 3450;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8327fe78
	if (!cr6.eq) goto loc_8327FE78;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83226378
	ctx.lr = 0x8327FE6C;
	sub_83226378(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222508
	ctx.lr = 0x8327FE78;
	sub_83222508(ctx, base);
loc_8327FE78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8327FE80:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r10,1032
	ctx.r10.s64 = 1032;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8327fe78
	if (!cr6.eq) goto loc_8327FE78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8327FEA4;
	sub_83222578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x8327FEB0;
	sub_8322E5B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8327FEB8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x8327fe78
	if (cr6.eq) goto loc_8327FE78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832229d8
	ctx.lr = 0x8327FECC;
	sub_832229D8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sraw r7,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8327fef8
	if (cr6.eq) goto loc_8327FEF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8327FEF8;
	sub_83222030(ctx, base);
loc_8327FEF8:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8327FF0C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x8327fe78
	if (cr6.eq) goto loc_8327FE78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220140
	ctx.lr = 0x8327FF20;
	sub_83220140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320cf60
	ctx.lr = 0x8327FF2C;
	sub_8320CF60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8327FF34:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r8,12288
	ctx.r8.s64 = 12288;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r6,r10,-163
	ctx.r6.s64 = ctx.r10.s64 + -163;
	// srw r5,r8,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// and r4,r6,r3
	ctx.r4.u64 = ctx.r6.u64 & ctx.r3.u64;
	// rlwinm r3,r5,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// and r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ctx.r3.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8327fe78
	if (!cr6.eq) goto loc_8327FE78;
	// xori r10,r10,40
	ctx.r10.u64 = ctx.r10.u64 ^ 40;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srawi r7,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// li r6,640
	ctx.r6.s64 = 640;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// srw r4,r6,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8327fe78
	if (!cr6.eq) goto loc_8327FE78;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x8327FFC0;
	sub_83222BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223bd0
	ctx.lr = 0x8327FFCC;
	sub_83223BD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8327FFD4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,22980
	ctx.r4.s64 = ctx.r10.s64 + 22980;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// bl 0x83208568
	ctx.lr = 0x8327FFF0;
	sub_83208568(ctx, base);
}

__attribute__((alias("__imp__sub_8327FFF0"))) PPC_WEAK_FUNC(sub_8327FFF0);
PPC_FUNC_IMPL(__imp__sub_8327FFF0) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8328000C;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x83280018;
	sub_8327DDD8(ctx, base);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x83280044;
	sub_83222508(ctx, base);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280060;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// sth r5,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r5.u16);
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

__attribute__((alias("__imp__sub_83280084"))) PPC_WEAK_FUNC(sub_83280084);
PPC_FUNC_IMPL(__imp__sub_83280084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280088"))) PPC_WEAK_FUNC(sub_83280088);
PPC_FUNC_IMPL(__imp__sub_83280088) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x832800A4;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x832800B0;
	sub_8327DDD8(ctx, base);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x832240b8
	ctx.lr = 0x832800DC;
	sub_832240B8(ctx, base);
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

__attribute__((alias("__imp__sub_832800F4"))) PPC_WEAK_FUNC(sub_832800F4);
PPC_FUNC_IMPL(__imp__sub_832800F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832800F8"))) PPC_WEAK_FUNC(sub_832800F8);
PPC_FUNC_IMPL(__imp__sub_832800F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83280100;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8328010C;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x8327ddd8
	ctx.lr = 0x83280128;
	sub_8327DDD8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r9,r29,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 3);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x832240b8
	ctx.lr = 0x83280144;
	sub_832240B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328014C"))) PPC_WEAK_FUNC(sub_8328014C);
PPC_FUNC_IMPL(__imp__sub_8328014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280150"))) PPC_WEAK_FUNC(sub_83280150);
PPC_FUNC_IMPL(__imp__sub_83280150) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83280168;
	sub_8327DDD8(ctx, base);
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r5,2
	ctx.r5.s64 = 2;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x832240b8
	ctx.lr = 0x83280194;
	sub_832240B8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832801A8"))) PPC_WEAK_FUNC(sub_832801A8);
PPC_FUNC_IMPL(__imp__sub_832801A8) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x832801C4;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x832801D0;
	sub_8327DDD8(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x832240b8
	ctx.lr = 0x832801EC;
	sub_832240B8(ctx, base);
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

__attribute__((alias("__imp__sub_83280204"))) PPC_WEAK_FUNC(sub_83280204);
PPC_FUNC_IMPL(__imp__sub_83280204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280208"))) PPC_WEAK_FUNC(sub_83280208);
PPC_FUNC_IMPL(__imp__sub_83280208) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x832240b8
	sub_832240B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280238"))) PPC_WEAK_FUNC(sub_83280238);
PPC_FUNC_IMPL(__imp__sub_83280238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// sth r6,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r6.u16);
	// clrlwi r7,r6,16
	ctx.r7.u64 = ctx.r6.u32 & 0xFFFF;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x832240b8
	sub_832240B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280288"))) PPC_WEAK_FUNC(sub_83280288);
PPC_FUNC_IMPL(__imp__sub_83280288) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x832802A0;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8327b5d0
	ctx.lr = 0x832802B0;
	sub_8327B5D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327dea8
	ctx.lr = 0x832802BC;
	sub_8327DEA8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832802D0"))) PPC_WEAK_FUNC(sub_832802D0);
PPC_FUNC_IMPL(__imp__sub_832802D0) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x832802E8;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327c0b0
	ctx.lr = 0x832802F8;
	sub_8327C0B0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8328030C"))) PPC_WEAK_FUNC(sub_8328030C);
PPC_FUNC_IMPL(__imp__sub_8328030C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280310"))) PPC_WEAK_FUNC(sub_83280310);
PPC_FUNC_IMPL(__imp__sub_83280310) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83280328;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// bl 0x8327c498
	ctx.lr = 0x83280338;
	sub_8327C498(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8328034C"))) PPC_WEAK_FUNC(sub_8328034C);
PPC_FUNC_IMPL(__imp__sub_8328034C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280350"))) PPC_WEAK_FUNC(sub_83280350);
PPC_FUNC_IMPL(__imp__sub_83280350) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83280368;
	sub_8327DDD8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r31,128
	ctx.r6.s64 = ctx.r31.s64 + 128;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// bl 0x8327c738
	ctx.lr = 0x83280380;
	sub_8327C738(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83280394"))) PPC_WEAK_FUNC(sub_83280394);
PPC_FUNC_IMPL(__imp__sub_83280394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280398"))) PPC_WEAK_FUNC(sub_83280398);
PPC_FUNC_IMPL(__imp__sub_83280398) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x832803B0;
	sub_8327DDD8(ctx, base);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x8327c578
	ctx.lr = 0x832803BC;
	sub_8327C578(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832803D0"))) PPC_WEAK_FUNC(sub_832803D0);
PPC_FUNC_IMPL(__imp__sub_832803D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832803D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r8,640
	ctx.r8.s64 = 640;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lhz r6,-6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + -6);
	// lhz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// srw r10,r9,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// xori r11,r4,40
	ctx.r11.u64 = ctx.r4.u64 ^ 40;
	// extsh r7,r5
	ctx.r7.s64 = ctx.r5.s16;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// srw r5,r8,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// srawi r6,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83280490
	if (!cr6.eq) goto loc_83280490;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x83280448;
	sub_83222BE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832277e8
	ctx.lr = 0x83280450;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(ctx.r11.u32, 256, xer);
	// blt cr6,0x83280484
	if (cr6.lt) goto loc_83280484;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83280470
	if (cr6.eq) goto loc_83280470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x83280470;
	sub_83209D68(ctx, base);
loc_83280470:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223c38
	ctx.lr = 0x8328047C;
	sub_83223C38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83280484:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223bd0
	ctx.lr = 0x83280490;
	sub_83223BD0(ctx, base);
loc_83280490:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280498"))) PPC_WEAK_FUNC(sub_83280498);
PPC_FUNC_IMPL(__imp__sub_83280498) {
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
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r9,1032
	ctx.r9.s64 = 1032;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// srw r5,r9,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832804f0
	if (!cr6.eq) goto loc_832804F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x832804E4;
	sub_83222578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322e5b0
	ctx.lr = 0x832804F0;
	sub_8322E5B0(ctx, base);
loc_832804F0:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83280504"))) PPC_WEAK_FUNC(sub_83280504);
PPC_FUNC_IMPL(__imp__sub_83280504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280508"))) PPC_WEAK_FUNC(sub_83280508);
PPC_FUNC_IMPL(__imp__sub_83280508) {
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
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,11
	cr6.compare<uint32_t>(ctx.r8.u32, 11, xer);
	// beq cr6,0x83280580
	if (cr6.eq) goto loc_83280580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832229d8
	ctx.lr = 0x83280548;
	sub_832229D8(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sraw r7,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83280574
	if (cr6.eq) goto loc_83280574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83280574;
	sub_83222030(ctx, base);
loc_83280574:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83280580:
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

__attribute__((alias("__imp__sub_83280598"))) PPC_WEAK_FUNC(sub_83280598);
PPC_FUNC_IMPL(__imp__sub_83280598) {
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
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r9,3450
	ctx.r9.s64 = 3450;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// srw r5,r9,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83280600
	if (!cr6.eq) goto loc_83280600;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x83226378
	ctx.lr = 0x832805F4;
	sub_83226378(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222508
	ctx.lr = 0x83280600;
	sub_83222508(ctx, base);
loc_83280600:
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

__attribute__((alias("__imp__sub_83280614"))) PPC_WEAK_FUNC(sub_83280614);
PPC_FUNC_IMPL(__imp__sub_83280614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280618"))) PPC_WEAK_FUNC(sub_83280618);
PPC_FUNC_IMPL(__imp__sub_83280618) {
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
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// beq cr6,0x83280660
	if (cr6.eq) goto loc_83280660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220140
	ctx.lr = 0x83280654;
	sub_83220140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320cf60
	ctx.lr = 0x83280660;
	sub_8320CF60(ctx, base);
loc_83280660:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83280674"))) PPC_WEAK_FUNC(sub_83280674);
PPC_FUNC_IMPL(__imp__sub_83280674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280678"))) PPC_WEAK_FUNC(sub_83280678);
PPC_FUNC_IMPL(__imp__sub_83280678) {
	PPC_FUNC_PROLOGUE();
	// b 0x8327ddd8
	sub_8327DDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328067C"))) PPC_WEAK_FUNC(sub_8328067C);
PPC_FUNC_IMPL(__imp__sub_8328067C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280680"))) PPC_WEAK_FUNC(sub_83280680);
PPC_FUNC_IMPL(__imp__sub_83280680) {
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
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r8,12288
	ctx.r8.s64 = 12288;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lhz r7,-6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -6);
	// lhz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r5,r10,-163
	ctx.r5.s64 = ctx.r10.s64 + -163;
	// srw r4,r8,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// srawi r3,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 31;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// and r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 & ctx.r7.u64;
	// rlwinm r7,r4,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// and r6,r3,r7
	ctx.r6.u64 = ctx.r3.u64 & ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83280740
	if (!cr6.eq) goto loc_83280740;
	// xori r10,r10,40
	ctx.r10.u64 = ctx.r10.u64 ^ 40;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// srawi r7,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// li r6,640
	ctx.r6.s64 = 640;
	// and r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 & ctx.r8.u64;
	// srw r4,r6,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83280740
	if (!cr6.eq) goto loc_83280740;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222be8
	ctx.lr = 0x83280734;
	sub_83222BE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83223bd0
	ctx.lr = 0x83280740;
	sub_83223BD0(ctx, base);
loc_83280740:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83280754"))) PPC_WEAK_FUNC(sub_83280754);
PPC_FUNC_IMPL(__imp__sub_83280754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280758"))) PPC_WEAK_FUNC(sub_83280758);
PPC_FUNC_IMPL(__imp__sub_83280758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83280760;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8320fdd0
	ctx.lr = 0x83280794;
	sub_8320FDD0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832807d4
	if (!cr6.eq) goto loc_832807D4;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832807d4
	if (cr6.eq) goto loc_832807D4;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,167
	cr6.compare<uint32_t>(ctx.r11.u32, 167, xer);
	// bne cr6,0x832807d4
	if (!cr6.eq) goto loc_832807D4;
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8320fcc0
	ctx.lr = 0x832807D4;
	sub_8320FCC0(ctx, base);
loc_832807D4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832807e8
	if (!cr6.eq) goto loc_832807E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213150
	ctx.lr = 0x832807E8;
	sub_83213150(ctx, base);
loc_832807E8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280804;
	sub_83222030(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// sth r7,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280818"))) PPC_WEAK_FUNC(sub_83280818);
PPC_FUNC_IMPL(__imp__sub_83280818) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x83224d90
	sub_83224D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280838"))) PPC_WEAK_FUNC(sub_83280838);
PPC_FUNC_IMPL(__imp__sub_83280838) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x83224d90
	sub_83224D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280858"))) PPC_WEAK_FUNC(sub_83280858);
PPC_FUNC_IMPL(__imp__sub_83280858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8320f5b0
	sub_8320F5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280860"))) PPC_WEAK_FUNC(sub_83280860);
PPC_FUNC_IMPL(__imp__sub_83280860) {
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
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220140
	ctx.lr = 0x83280894;
	sub_83220140(ctx, base);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832808c0
	if (cr6.eq) goto loc_832808C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832808C0;
	sub_83222030(ctx, base);
loc_832808C0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r10,2
	ctx.r10.s64 = 2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
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

__attribute__((alias("__imp__sub_832808F0"))) PPC_WEAK_FUNC(sub_832808F0);
PPC_FUNC_IMPL(__imp__sub_832808F0) {
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
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x83280924;
	sub_83222578(ctx, base);
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83280950
	if (cr6.eq) goto loc_83280950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83280950;
	sub_83222030(ctx, base);
loc_83280950:
	// li r11,3
	ctx.r11.s64 = 3;
	// not r10,r30
	ctx.r10.u64 = ~ctx.r30.u64;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_83280978"))) PPC_WEAK_FUNC(sub_83280978);
PPC_FUNC_IMPL(__imp__sub_83280978) {
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
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83224ad0
	ctx.lr = 0x832809B4;
	sub_83224AD0(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x832809D0;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832809F0"))) PPC_WEAK_FUNC(sub_832809F0);
PPC_FUNC_IMPL(__imp__sub_832809F0) {
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
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83224f38
	ctx.lr = 0x83280A2C;
	sub_83224F38(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280A48;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83280A68"))) PPC_WEAK_FUNC(sub_83280A68);
PPC_FUNC_IMPL(__imp__sub_83280A68) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83225150
	sub_83225150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280A88"))) PPC_WEAK_FUNC(sub_83280A88);
PPC_FUNC_IMPL(__imp__sub_83280A88) {
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
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83225268
	ctx.lr = 0x83280AC4;
	sub_83225268(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280AE0;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83280B00"))) PPC_WEAK_FUNC(sub_83280B00);
PPC_FUNC_IMPL(__imp__sub_83280B00) {
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
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83225470
	ctx.lr = 0x83280B3C;
	sub_83225470(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280B58;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83280B78"))) PPC_WEAK_FUNC(sub_83280B78);
PPC_FUNC_IMPL(__imp__sub_83280B78) {
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
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83225908
	ctx.lr = 0x83280BB4;
	sub_83225908(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280BD0;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// sth r4,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r4.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83280BF0"))) PPC_WEAK_FUNC(sub_83280BF0);
PPC_FUNC_IMPL(__imp__sub_83280BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83280BF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83280C20;
	sub_83222578(ctx, base);
	// clrlwi r29,r3,27
	ctx.r29.u64 = ctx.r3.u32 & 0x1F;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x83280C2C;
	sub_83222578(ctx, base);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83280c58
	if (cr6.eq) goto loc_83280C58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83280C58;
	sub_83222030(ctx, base);
loc_83280C58:
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// slw r10,r28,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r29.u8 & 0x3F));
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280C84;
	sub_83222030(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r6,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280C98"))) PPC_WEAK_FUNC(sub_83280C98);
PPC_FUNC_IMPL(__imp__sub_83280C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83280CA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83280CC8;
	sub_83222578(ctx, base);
	// clrlwi r29,r3,27
	ctx.r29.u64 = ctx.r3.u32 & 0x1F;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x83280CD4;
	sub_83222578(ctx, base);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83280d00
	if (cr6.eq) goto loc_83280D00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83280D00;
	sub_83222030(ctx, base);
loc_83280D00:
	// sraw r11,r28,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r11.s64 = ctx.r28.s32 >> temp.u32;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280D2C;
	sub_83222030(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r6,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280D40"))) PPC_WEAK_FUNC(sub_83280D40);
PPC_FUNC_IMPL(__imp__sub_83280D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83280D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83280D70;
	sub_83222578(ctx, base);
	// clrlwi r29,r3,27
	ctx.r29.u64 = ctx.r3.u32 & 0x1F;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x83280D7C;
	sub_83222578(ctx, base);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83280da8
	if (cr6.eq) goto loc_83280DA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83280DA8;
	sub_83222030(ctx, base);
loc_83280DA8:
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// srw r10,r28,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r29.u8 & 0x3F));
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280DD4;
	sub_83222030(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r6,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280DE8"))) PPC_WEAK_FUNC(sub_83280DE8);
PPC_FUNC_IMPL(__imp__sub_83280DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83280DF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83280E18;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x83280E24;
	sub_83222578(ctx, base);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83280e50
	if (cr6.eq) goto loc_83280E50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83280E50;
	sub_83222030(ctx, base);
loc_83280E50:
	// li r11,3
	ctx.r11.s64 = 3;
	// and r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 & ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280E7C;
	sub_83222030(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r6,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280E90"))) PPC_WEAK_FUNC(sub_83280E90);
PPC_FUNC_IMPL(__imp__sub_83280E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83280E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83280EC0;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x83280ECC;
	sub_83222578(ctx, base);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83280ef8
	if (cr6.eq) goto loc_83280EF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83280EF8;
	sub_83222030(ctx, base);
loc_83280EF8:
	// li r11,3
	ctx.r11.s64 = 3;
	// or r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 | ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280F24;
	sub_83222030(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r6,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280F38"))) PPC_WEAK_FUNC(sub_83280F38);
PPC_FUNC_IMPL(__imp__sub_83280F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83280F40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83280F68;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x83280F74;
	sub_83222578(ctx, base);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// ori r5,r7,8400
	ctx.r5.u64 = ctx.r7.u64 | 8400;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// sraw r4,r5,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83280fa0
	if (cr6.eq) goto loc_83280FA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x83280FA0;
	sub_83222030(ctx, base);
loc_83280FA0:
	// li r11,3
	ctx.r11.s64 = 3;
	// xor r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83280FCC;
	sub_83222030(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// sth r6,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280FE0"))) PPC_WEAK_FUNC(sub_83280FE0);
PPC_FUNC_IMPL(__imp__sub_83280FE0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8320e1f8
	sub_8320E1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280FEC"))) PPC_WEAK_FUNC(sub_83280FEC);
PPC_FUNC_IMPL(__imp__sub_83280FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83280FF0"))) PPC_WEAK_FUNC(sub_83280FF0);
PPC_FUNC_IMPL(__imp__sub_83280FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8320e278
	sub_8320E278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83280FF8"))) PPC_WEAK_FUNC(sub_83280FF8);
PPC_FUNC_IMPL(__imp__sub_83280FF8) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8320e1f8
	sub_8320E1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281004"))) PPC_WEAK_FUNC(sub_83281004);
PPC_FUNC_IMPL(__imp__sub_83281004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281008"))) PPC_WEAK_FUNC(sub_83281008);
PPC_FUNC_IMPL(__imp__sub_83281008) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8320e1f8
	sub_8320E1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281014"))) PPC_WEAK_FUNC(sub_83281014);
PPC_FUNC_IMPL(__imp__sub_83281014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281018"))) PPC_WEAK_FUNC(sub_83281018);
PPC_FUNC_IMPL(__imp__sub_83281018) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8320e1f8
	sub_8320E1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281024"))) PPC_WEAK_FUNC(sub_83281024);
PPC_FUNC_IMPL(__imp__sub_83281024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281028"))) PPC_WEAK_FUNC(sub_83281028);
PPC_FUNC_IMPL(__imp__sub_83281028) {
	PPC_FUNC_PROLOGUE();
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8320e1f8
	sub_8320E1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281034"))) PPC_WEAK_FUNC(sub_83281034);
PPC_FUNC_IMPL(__imp__sub_83281034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281038"))) PPC_WEAK_FUNC(sub_83281038);
PPC_FUNC_IMPL(__imp__sub_83281038) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x83210000
	sub_83210000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281044"))) PPC_WEAK_FUNC(sub_83281044);
PPC_FUNC_IMPL(__imp__sub_83281044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281048"))) PPC_WEAK_FUNC(sub_83281048);
PPC_FUNC_IMPL(__imp__sub_83281048) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83281060;
	sub_8327DDD8(ctx, base);
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bge cr6,0x8328109c
	if (!cr6.lt) goto loc_8328109C;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83224d90
	ctx.lr = 0x83281088;
	sub_83224D90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8328109C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,23008
	ctx.r4.s64 = ctx.r11.s64 + 23008;
	// addi r3,r10,21124
	ctx.r3.s64 = ctx.r10.s64 + 21124;
	// bl 0x832085e8
	ctx.lr = 0x832810B0;
	sub_832085E8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832810C4"))) PPC_WEAK_FUNC(sub_832810C4);
PPC_FUNC_IMPL(__imp__sub_832810C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832810C8"))) PPC_WEAK_FUNC(sub_832810C8);
PPC_FUNC_IMPL(__imp__sub_832810C8) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x832810E0;
	sub_8327DDD8(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x832240b8
	ctx.lr = 0x83281118;
	sub_832240B8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8328112C"))) PPC_WEAK_FUNC(sub_8328112C);
PPC_FUNC_IMPL(__imp__sub_8328112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281130"))) PPC_WEAK_FUNC(sub_83281130);
PPC_FUNC_IMPL(__imp__sub_83281130) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,68(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x832240b8
	sub_832240B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281160"))) PPC_WEAK_FUNC(sub_83281160);
PPC_FUNC_IMPL(__imp__sub_83281160) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x832240b8
	sub_832240B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281194"))) PPC_WEAK_FUNC(sub_83281194);
PPC_FUNC_IMPL(__imp__sub_83281194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281198"))) PPC_WEAK_FUNC(sub_83281198);
PPC_FUNC_IMPL(__imp__sub_83281198) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x832240b8
	sub_832240B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832811CC"))) PPC_WEAK_FUNC(sub_832811CC);
PPC_FUNC_IMPL(__imp__sub_832811CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832811D0"))) PPC_WEAK_FUNC(sub_832811D0);
PPC_FUNC_IMPL(__imp__sub_832811D0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lhz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r9,24
	ctx.r4.s64 = ctx.r9.s64 + 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// b 0x832240b8
	sub_832240B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281204"))) PPC_WEAK_FUNC(sub_83281204);
PPC_FUNC_IMPL(__imp__sub_83281204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281208"))) PPC_WEAK_FUNC(sub_83281208);
PPC_FUNC_IMPL(__imp__sub_83281208) {
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
	// lhz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// lwz r9,68(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x83281248;
	sub_83222508(ctx, base);
	// lhz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83281264;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// sth r3,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r3.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83281284"))) PPC_WEAK_FUNC(sub_83281284);
PPC_FUNC_IMPL(__imp__sub_83281284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281288"))) PPC_WEAK_FUNC(sub_83281288);
PPC_FUNC_IMPL(__imp__sub_83281288) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x832812A0;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281208
	ctx.lr = 0x832812AC;
	sub_83281208(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832812C0"))) PPC_WEAK_FUNC(sub_832812C0);
PPC_FUNC_IMPL(__imp__sub_832812C0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x83281208
	sub_83281208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832812C8"))) PPC_WEAK_FUNC(sub_832812C8);
PPC_FUNC_IMPL(__imp__sub_832812C8) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x83281208
	sub_83281208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832812D0"))) PPC_WEAK_FUNC(sub_832812D0);
PPC_FUNC_IMPL(__imp__sub_832812D0) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x83281208
	sub_83281208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832812D8"))) PPC_WEAK_FUNC(sub_832812D8);
PPC_FUNC_IMPL(__imp__sub_832812D8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bl 0x8327ddd8
	ctx.lr = 0x832812FC;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x8327ddd8
	ctx.lr = 0x83281310;
	sub_8327DDD8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83281324"))) PPC_WEAK_FUNC(sub_83281324);
PPC_FUNC_IMPL(__imp__sub_83281324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281328"))) PPC_WEAK_FUNC(sub_83281328);
PPC_FUNC_IMPL(__imp__sub_83281328) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83281340;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832109c8
	ctx.lr = 0x8328134C;
	sub_832109C8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83281360"))) PPC_WEAK_FUNC(sub_83281360);
PPC_FUNC_IMPL(__imp__sub_83281360) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x83210000
	sub_83210000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328136C"))) PPC_WEAK_FUNC(sub_8328136C);
PPC_FUNC_IMPL(__imp__sub_8328136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281370"))) PPC_WEAK_FUNC(sub_83281370);
PPC_FUNC_IMPL(__imp__sub_83281370) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r7.u16);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// sth r9,-8(r11)
	PPC_STORE_U16(ctx.r11.u32 + -8, ctx.r9.u16);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832813A8"))) PPC_WEAK_FUNC(sub_832813A8);
PPC_FUNC_IMPL(__imp__sub_832813A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x832813B0;
	__savegprlr_19(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// sth r31,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r31.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// li r27,12288
	ctx.r27.s64 = 12288;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r21,r11,21124
	ctx.r21.s64 = ctx.r11.s64 + 21124;
	// addi r23,r10,23096
	ctx.r23.s64 = ctx.r10.s64 + 23096;
	// bne cr6,0x83281490
	if (!cr6.eq) goto loc_83281490;
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subf r11,r6,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832814e0
	if (cr6.eq) goto loc_832814E0;
loc_83281444:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subfic r8,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r8.s64 = 162 - ctx.r11.s64;
	// addi r7,r11,-349
	ctx.r7.s64 = ctx.r11.s64 + -349;
	// srawi r6,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// srw r4,r27,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r9.u8 & 0x3F));
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// and r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ctx.r4.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832815a0
	if (cr6.eq) goto loc_832815A0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,164
	cr6.compare<uint32_t>(ctx.r11.u32, 164, xer);
	// bne cr6,0x8328150c
	if (!cr6.eq) goto loc_8328150C;
	// lwz r24,4(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8328150c
	goto loc_8328150C;
loc_83281490:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83210ec0
	ctx.lr = 0x8328149C;
	sub_83210EC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83210908
	ctx.lr = 0x832814AC;
	sub_83210908(ctx, base);
	// lhz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subf r11,r19,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r19.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(ctx.r11.u32, 19, xer);
	// bne cr6,0x8328152c
	if (!cr6.eq) goto loc_8328152C;
	// lwz r26,4(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x8328150c
	if (!cr6.eq) goto loc_8328150C;
loc_832814E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c80
	ctx.lr = 0x832814E8;
	sub_83225C80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83277870
	ctx.lr = 0x832814F4;
	sub_83277870(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8328150C;
	sub_832085E8(ctx, base);
loc_8328150C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83222030
	ctx.lr = 0x83281514;
	sub_83222030(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bne cr6,0x832815cc
	if (!cr6.eq) goto loc_832815CC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x832815d8
	goto loc_832815D8;
loc_8328152C:
	// lhz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srw r7,r27,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,350
	ctx.r11.u64 = ctx.r8.u64 ^ 350;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r4,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// and r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ctx.r7.u64;
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83281580
	if (cr6.eq) goto loc_83281580;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83211620
	ctx.lr = 0x83281570;
	sub_83211620(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832814e0
	if (cr6.eq) goto loc_832814E0;
	// b 0x8328150c
	goto loc_8328150C;
loc_83281580:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8327ad20
	ctx.lr = 0x83281590;
	sub_8327AD20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8328150c
	if (!cr6.eq) goto loc_8328150C;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// b 0x83281444
	goto loc_83281444;
loc_832815A0:
	// xori r11,r11,55
	ctx.r11.u64 = ctx.r11.u64 ^ 55;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// srw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// srawi r7,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832814e0
	if (cr6.eq) goto loc_832814E0;
	// lwz r22,4(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8328150c
	goto loc_8328150C;
loc_832815CC:
	// clrlwi r3,r26,16
	ctx.r3.u64 = ctx.r26.u32 & 0xFFFF;
	// bl 0x8322a4f8
	ctx.lr = 0x832815D4;
	sub_8322A4F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
loc_832815D8:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r20,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r20.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r19,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r19.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// sth r11,200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 200, ctx.r11.u16);
	// stb r31,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r31.u8);
	// stw r10,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r25.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// stb r8,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r8.u8);
	// beq cr6,0x83281628
	if (cr6.eq) goto loc_83281628;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x832240b8
	ctx.lr = 0x83281628;
	sub_832240B8(ctx, base);
loc_83281628:
	// addi r11,r26,-163
	ctx.r11.s64 = ctx.r26.s64 + -163;
	// cmplwi cr6,r11,136
	cr6.compare<uint32_t>(ctx.r11.u32, 136, xer);
	// bge cr6,0x8328165c
	if (!cr6.lt) goto loc_8328165C;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,9344
	ctx.r8.s64 = ctx.r10.s64 + 9344;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328165c
	if (cr6.eq) goto loc_8328165C;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83281658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83281b48
	goto loc_83281B48;
loc_8328165C:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x83281afc
	if (cr6.eq) goto loc_83281AFC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83237d90
	ctx.lr = 0x8328166C;
	sub_83237D90(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,180
	cr6.compare<uint32_t>(ctx.r3.u32, 180, xer);
	// bgt cr6,0x83281744
	if (cr6.gt) goto loc_83281744;
	// beq cr6,0x83281738
	if (cr6.eq) goto loc_83281738;
	// addi r11,r3,-163
	ctx.r11.s64 = ctx.r3.s64 + -163;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x8328195c
	if (cr6.gt) goto loc_8328195C;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5792
	ctx.r12.s64 = ctx.r12.s64 + 5792;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832816C8;
	case 1:
		goto loc_8328195C;
	case 2:
		goto loc_832816F0;
	case 3:
		goto loc_83281728;
	case 4:
		goto loc_8328195C;
	case 5:
		goto loc_8328195C;
	case 6:
		goto loc_8328195C;
	case 7:
		goto loc_8328195C;
	case 8:
		goto loc_832816D4;
	case 9:
		goto loc_832816E4;
	default:
		return;
	}
	// lwz r25,5832(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5832);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,5872(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5872);
	// lwz r25,5928(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5928);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,5844(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5844);
	// lwz r25,5860(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5860);
loc_832816C8:
	// bl 0x83235198
	ctx.lr = 0x832816CC;
	sub_83235198(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832816D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83267e20
	ctx.lr = 0x832816DC;
	sub_83267E20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832816E4:
	// bl 0x83267438
	ctx.lr = 0x832816E8;
	sub_83267438(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832816F0:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// sth r31,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r31.u16);
	// stb r31,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r31.u8);
	// bl 0x83236458
	ctx.lr = 0x83281704;
	sub_83236458(ctx, base);
	// lwz r11,40(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r10,66(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 66);
	// sth r10,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// bl 0x8322c2b8
	ctx.lr = 0x83281724;
	sub_8322C2B8(ctx, base);
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281728:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83273b48
	ctx.lr = 0x83281730;
	sub_83273B48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281738:
	// bl 0x8326a2e8
	ctx.lr = 0x8328173C;
	sub_8326A2E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281744:
	// cmplwi cr6,r27,209
	cr6.compare<uint32_t>(ctx.r27.u32, 209, xer);
	// bgt cr6,0x83281850
	if (cr6.gt) goto loc_83281850;
	// beq cr6,0x83281844
	if (cr6.eq) goto loc_83281844;
	// addi r11,r27,-182
	ctx.r11.s64 = ctx.r27.s64 + -182;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x8328195c
	if (cr6.gt) goto loc_8328195C;
	// lis r12,-31960
	ctx.r12.s64 = -2094530560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6004
	ctx.r12.s64 = ctx.r12.s64 + 6004;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83281800;
	case 1:
		goto loc_8328195C;
	case 2:
		goto loc_832817D4;
	case 3:
		goto loc_832817E4;
	case 4:
		goto loc_8328180C;
	case 5:
		goto loc_8328195C;
	case 6:
		goto loc_8328195C;
	case 7:
		goto loc_8328195C;
	case 8:
		goto loc_832817F4;
	case 9:
		goto loc_8328195C;
	case 10:
		goto loc_8328181C;
	case 11:
		goto loc_8328195C;
	case 12:
		goto loc_8328195C;
	case 13:
		goto loc_8328195C;
	case 14:
		goto loc_832817C8;
	case 15:
		goto loc_8328195C;
	case 16:
		goto loc_8328195C;
	case 17:
		goto loc_83281828;
	case 18:
		goto loc_8328195C;
	case 19:
		goto loc_8328195C;
	case 20:
		goto loc_83281838;
	default:
		return;
	}
	// lwz r25,6144(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6144);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6100(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6100);
	// lwz r25,6116(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6116);
	// lwz r25,6156(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6156);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6132(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6132);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6172(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6172);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6088(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6088);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6184(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6184);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6492(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6492);
	// lwz r25,6200(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6200);
loc_832817C8:
	// bl 0x8324b818
	ctx.lr = 0x832817CC;
	sub_8324B818(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832817D4:
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x832630c8
	ctx.lr = 0x832817DC;
	sub_832630C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832817E4:
	// li r3,51
	ctx.r3.s64 = 51;
	// bl 0x832630c8
	ctx.lr = 0x832817EC;
	sub_832630C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832817F4:
	// bl 0x83264cd0
	ctx.lr = 0x832817F8;
	sub_83264CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281800:
	// bl 0x83285438
	ctx.lr = 0x83281804;
	sub_83285438(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_8328180C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8326b8c0
	ctx.lr = 0x83281814;
	sub_8326B8C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_8328181C:
	// bl 0x8326c700
	ctx.lr = 0x83281820;
	sub_8326C700(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281828:
	// li r3,65
	ctx.r3.s64 = 65;
	// bl 0x832630c8
	ctx.lr = 0x83281830;
	sub_832630C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281838:
	// bl 0x83272fa8
	ctx.lr = 0x8328183C;
	sub_83272FA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281844:
	// bl 0x83290b48
	ctx.lr = 0x83281848;
	sub_83290B48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281850:
	// cmplwi cr6,r27,261
	cr6.compare<uint32_t>(ctx.r27.u32, 261, xer);
	// bgt cr6,0x83281944
	if (cr6.gt) goto loc_83281944;
	// beq cr6,0x832818ec
	if (cr6.eq) goto loc_832818EC;
	// cmplwi cr6,r27,215
	cr6.compare<uint32_t>(ctx.r27.u32, 215, xer);
	// beq cr6,0x832818dc
	if (cr6.eq) goto loc_832818DC;
	// cmplwi cr6,r27,247
	cr6.compare<uint32_t>(ctx.r27.u32, 247, xer);
	// beq cr6,0x832818d0
	if (cr6.eq) goto loc_832818D0;
	// cmplwi cr6,r27,256
	cr6.compare<uint32_t>(ctx.r27.u32, 256, xer);
	// bne cr6,0x8328195c
	if (!cr6.eq) goto loc_8328195C;
	// bl 0x83234fc8
	ctx.lr = 0x83281878;
	sub_83234FC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832018e0
	ctx.lr = 0x83281880;
	sub_832018E0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x83238688
	ctx.lr = 0x83281894;
	sub_83238688(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83281aa8
	if (cr6.eq) goto loc_83281AA8;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// lwz r8,32(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// stw r8,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r8.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// bl 0x83215368
	ctx.lr = 0x832818C0;
	sub_83215368(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832146c8
	ctx.lr = 0x832818CC;
	sub_832146C8(ctx, base);
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832818D0:
	// bl 0x83572958
	ctx.lr = 0x832818D4;
	sub_83572958(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832818DC:
	// li r3,81
	ctx.r3.s64 = 81;
	// bl 0x832630c8
	ctx.lr = 0x832818E4;
	sub_832630C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x83281aa8
	goto loc_83281AA8;
loc_832818EC:
	// bl 0x8320a1c8
	ctx.lr = 0x832818F0;
	sub_8320A1C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832018e0
	ctx.lr = 0x832818F8;
	sub_832018E0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// bl 0x83238688
	ctx.lr = 0x8328190C;
	sub_83238688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83281aa8
	if (cr6.eq) goto loc_83281AA8;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// lwz r9,32(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r9.u32);
	// bl 0x83215368
	ctx.lr = 0x83281934;
	sub_83215368(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832146c8
	ctx.lr = 0x83281940;
	sub_832146C8(ctx, base);
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281944:
	// cmplwi cr6,r27,262
	cr6.compare<uint32_t>(ctx.r27.u32, 262, xer);
	// beq cr6,0x83281a90
	if (cr6.eq) goto loc_83281A90;
	// cmplwi cr6,r27,264
	cr6.compare<uint32_t>(ctx.r27.u32, 264, xer);
	// beq cr6,0x832819cc
	if (cr6.eq) goto loc_832819CC;
	// cmplwi cr6,r27,274
	cr6.compare<uint32_t>(ctx.r27.u32, 274, xer);
	// beq cr6,0x8328198c
	if (cr6.eq) goto loc_8328198C;
loc_8328195C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x83281968;
	sub_83221C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83277870
	ctx.lr = 0x83281974;
	sub_83277870(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,23044
	ctx.r4.s64 = ctx.r11.s64 + 23044;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x83208568
	ctx.lr = 0x8328198C;
	sub_83208568(ctx, base);
loc_8328198C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x83237be8
	ctx.lr = 0x83281994;
	sub_83237BE8(ctx, base);
	// lwz r4,32(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// bl 0x83262690
	ctx.lr = 0x8328199C;
	sub_83262690(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83261cf8
	ctx.lr = 0x832819A8;
	sub_83261CF8(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// b 0x83281b48
	goto loc_83281B48;
loc_832819CC:
	// bl 0x8320a450
	ctx.lr = 0x832819D0;
	sub_8320A450(ctx, base);
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x83237be8
	ctx.lr = 0x832819E4;
	sub_83237BE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x832592d8
	ctx.lr = 0x832819F4;
	sub_832592D8(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// bne cr6,0x83281a10
	if (!cr6.eq) goto loc_83281A10;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83211ef8
	ctx.lr = 0x83281A08;
	sub_83211EF8(ctx, base);
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x83281a74
	if (cr6.eq) goto loc_83281A74;
loc_83281A10:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83262690
	ctx.lr = 0x83281A1C;
	sub_83262690(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r11,140
	ctx.r11.s64 = 140;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// sth r11,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r11.u16);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// li r7,1884
	ctx.r7.s64 = 1884;
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// sth r7,168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 168, ctx.r7.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r31.u8);
	// sth r6,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r6.u16);
	// bl 0x8320a780
	ctx.lr = 0x83281A6C;
	sub_8320A780(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x83222030
	ctx.lr = 0x83281A74;
	sub_83222030(ctx, base);
loc_83281A74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832018e0
	ctx.lr = 0x83281A7C;
	sub_832018E0(ctx, base);
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// b 0x83281aa8
	goto loc_83281AA8;
loc_83281A90:
	// bl 0x8320a350
	ctx.lr = 0x83281A94;
	sub_8320A350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832018e0
	ctx.lr = 0x83281A9C;
	sub_832018E0(ctx, base);
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
loc_83281AA8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83281ad4
	if (cr6.eq) goto loc_83281AD4;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// bl 0x8327a2d0
	ctx.lr = 0x83281AD4;
	sub_8327A2D0(ctx, base);
loc_83281AD4:
	// cmplwi cr6,r27,256
	cr6.compare<uint32_t>(ctx.r27.u32, 256, xer);
	// bne cr6,0x83281b48
	if (!cr6.eq) goto loc_83281B48;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83281b48
	if (cr6.eq) goto loc_83281B48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83212128
	ctx.lr = 0x83281AF8;
	sub_83212128(ctx, base);
	// b 0x83281b48
	goto loc_83281B48;
loc_83281AFC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83221c30
	ctx.lr = 0x83281B08;
	sub_83221C30(ctx, base);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83281b34
	if (!cr6.eq) goto loc_83281B34;
	// lhz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// bl 0x832277f8
	ctx.lr = 0x83281B20;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83281b34
	if (!cr6.eq) goto loc_83281B34;
	// bl 0x83227908
	ctx.lr = 0x83281B30;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_83281B34:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x832085e8
	ctx.lr = 0x83281B48;
	sub_832085E8(ctx, base);
loc_83281B48:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x83281b5c
	if (cr6.eq) goto loc_83281B5C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8320db60
	ctx.lr = 0x83281B5C;
	sub_8320DB60(ctx, base);
loc_83281B5C:
	// lhz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x83281B7C;
	sub_83222508(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281B88"))) PPC_WEAK_FUNC(sub_83281B88);
PPC_FUNC_IMPL(__imp__sub_83281B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83281B90;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// sth r26,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r26.u16);
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r26,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r26.u8);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// beq cr6,0x83281bf4
	if (cr6.eq) goto loc_83281BF4;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
loc_83281BF4:
	// addi r23,r30,32
	ctx.r23.s64 = ctx.r30.s64 + 32;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83211400
	ctx.lr = 0x83281C10;
	sub_83211400(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83281c34
	if (!cr6.eq) goto loc_83281C34;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83210f58
	ctx.lr = 0x83281C30;
	sub_83210F58(ctx, base);
	// b 0x83281c48
	goto loc_83281C48;
loc_83281C34:
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832264e0
	ctx.lr = 0x83281C48;
	sub_832264E0(ctx, base);
loc_83281C48:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83281c74
	if (cr6.eq) goto loc_83281C74;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83211558
	ctx.lr = 0x83281C5C;
	sub_83211558(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83281c74
	if (cr6.eq) goto loc_83281C74;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
loc_83281C74:
	// li r28,-4
	ctx.r28.s64 = -4;
	// li r20,12
	ctx.r20.s64 = 12;
	// li r21,350
	ctx.r21.s64 = 350;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// bne cr6,0x83281d20
	if (!cr6.eq) goto loc_83281D20;
	// lhz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 96);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83281d20
	if (cr6.lt) goto loc_83281D20;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r29,r31,r8
	ctx.r29.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// addi r25,r10,-8
	ctx.r25.s64 = ctx.r10.s64 + -8;
loc_83281CB0:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83281cfc
	if (!cr6.eq) goto loc_83281CFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8327ad20
	ctx.lr = 0x83281CD4;
	sub_8327AD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83281d18
	if (cr6.eq) goto loc_83281D18;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8327a980
	ctx.lr = 0x83281CF0;
	sub_8327A980(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83281d18
	if (cr6.eq) goto loc_83281D18;
loc_83281CFC:
	// lhz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 96);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r25,r25,-8
	ctx.r25.s64 = ctx.r25.s64 + -8;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// ble cr6,0x83281cb0
	if (!cr6.gt) goto loc_83281CB0;
loc_83281D18:
	// cmpwi cr6,r28,-4
	cr6.compare<int32_t>(ctx.r28.s32, -4, xer);
	// bne cr6,0x83281e84
	if (!cr6.eq) goto loc_83281E84;
loc_83281D20:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,88(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83281dd8
	if (cr6.eq) goto loc_83281DD8;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83211a70
	ctx.lr = 0x83281D3C;
	sub_83211A70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83281d98
	if (cr6.eq) goto loc_83281D98;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x83210ec0
	ctx.lr = 0x83281D54;
	sub_83210EC0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8327aa78
	ctx.lr = 0x83281D74;
	sub_8327AA78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83281d90
	if (!cr6.eq) goto loc_83281D90;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x83281e84
	goto loc_83281E84;
loc_83281D90:
	// cmpwi cr6,r28,-4
	cr6.compare<int32_t>(ctx.r28.s32, -4, xer);
	// bne cr6,0x83281e84
	if (!cr6.eq) goto loc_83281E84;
loc_83281D98:
	// addi r25,r31,72
	ctx.r25.s64 = ctx.r31.s64 + 72;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8327ad20
	ctx.lr = 0x83281DB0;
	sub_8327AD20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83281dd0
	if (cr6.eq) goto loc_83281DD0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8327a980
	ctx.lr = 0x83281DCC;
	sub_8327A980(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_83281DD0:
	// cmpwi cr6,r28,-4
	cr6.compare<int32_t>(ctx.r28.s32, -4, xer);
	// bne cr6,0x83281e84
	if (!cr6.eq) goto loc_83281E84;
loc_83281DD8:
	// lhz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,524
	cr6.compare<uint32_t>(ctx.r10.u32, 524, xer);
	// bne cr6,0x83281df8
	if (!cr6.eq) goto loc_83281DF8;
	// sth r20,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r20.u16);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// sth r21,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r21.u16);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// b 0x83281e84
	goto loc_83281E84;
loc_83281DF8:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x83281e10
	if (cr6.eq) goto loc_83281E10;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// beq cr6,0x83281e10
	if (cr6.eq) goto loc_83281E10;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(ctx.r24.s32, 2, xer);
	// bne cr6,0x83281e50
	if (!cr6.eq) goto loc_83281E50;
loc_83281E10:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// addic r11,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subfe r5,r11,r24
	temp.u8 = (~ctx.r11.u32 + ctx.r24.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r24.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r24.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x83211620
	ctx.lr = 0x83281E2C;
	sub_83211620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83281e48
	if (cr6.eq) goto loc_83281E48;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x83281e84
	goto loc_83281E84;
loc_83281E48:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// beq cr6,0x83281e60
	if (cr6.eq) goto loc_83281E60;
loc_83281E50:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq cr6,0x83281e60
	if (cr6.eq) goto loc_83281E60;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(ctx.r24.s32, 3, xer);
	// bne cr6,0x83281e84
	if (!cr6.eq) goto loc_83281E84;
loc_83281E60:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x83239a98
	ctx.lr = 0x83281E78;
	sub_83239A98(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_83281E84:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// bne cr6,0x83281e9c
	if (!cr6.eq) goto loc_83281E9C;
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,0(r23)
	PPC_STORE_U16(ctx.r23.u32 + 0, ctx.r10.u16);
	// b 0x83281eb0
	goto loc_83281EB0;
loc_83281E9C:
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(ctx.r22.s32, 1, xer);
	// beq cr6,0x83281eb0
	if (cr6.eq) goto loc_83281EB0;
	// addi r4,r22,-1
	ctx.r4.s64 = ctx.r22.s64 + -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8320db60
	ctx.lr = 0x83281EB0;
	sub_8320DB60(ctx, base);
loc_83281EB0:
	// lhz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// bne cr6,0x83281efc
	if (!cr6.eq) goto loc_83281EFC;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83281ef0
	if (!cr6.eq) goto loc_83281EF0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x832240b8
	ctx.lr = 0x83281EEC;
	sub_832240B8(ctx, base);
	// b 0x83281f30
	goto loc_83281F30;
loc_83281EF0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83222508
	ctx.lr = 0x83281EF8;
	sub_83222508(ctx, base);
	// b 0x83281f30
	goto loc_83281F30;
loc_83281EFC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83281f24
	if (cr6.eq) goto loc_83281F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83281F24;
	sub_83222030(ctx, base);
loc_83281F24:
	// sth r20,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r20.u16);
	// sth r21,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r21.u16);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_83281F30:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83222030
	ctx.lr = 0x83281F38;
	sub_83222030(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83281F40;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83281F4C"))) PPC_WEAK_FUNC(sub_83281F4C);
PPC_FUNC_IMPL(__imp__sub_83281F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83281F50"))) PPC_WEAK_FUNC(sub_83281F50);
PPC_FUNC_IMPL(__imp__sub_83281F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83281F58;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// li r6,256
	ctx.r6.s64 = 256;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// bl 0x832264e0
	ctx.lr = 0x83281FB4;
	sub_832264E0(ctx, base);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r7,12288
	ctx.r7.s64 = 12288;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lhz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// lhz r5,10(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 10);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// xori r11,r4,53
	ctx.r11.u64 = ctx.r4.u64 ^ 53;
	// srw r3,r7,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// srawi r10,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// and r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 & ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83281ffc
	if (cr6.eq) goto loc_83281FFC;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_83281FFC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8327ad20
	ctx.lr = 0x83282010;
	sub_8327AD20(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83282030;
	sub_83222030(ctx, base);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// ori r7,r8,8400
	ctx.r7.u64 = ctx.r8.u64 | 8400;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r4,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r4.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// lhz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sraw r9,r7,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r9.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83282078
	if (cr6.eq) goto loc_83282078;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83282078;
	sub_83222030(ctx, base);
loc_83282078:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stb r9,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r9.u8);
	// bl 0x83222030
	ctx.lr = 0x83282094;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832820A0"))) PPC_WEAK_FUNC(sub_832820A0);
PPC_FUNC_IMPL(__imp__sub_832820A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832820A8;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// sth r28,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r28.u16);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// stb r28,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r28.u8);
	// li r29,-4
	ctx.r29.s64 = -4;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83210ec0
	ctx.lr = 0x832820FC;
	sub_83210EC0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83210908
	ctx.lr = 0x83282110;
	sub_83210908(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bne cr6,0x83282334
	if (!cr6.eq) goto loc_83282334;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8328214c
	if (cr6.eq) goto loc_8328214C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8327aa78
	ctx.lr = 0x83282148;
	sub_8327AA78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8328214C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r29,-4
	cr6.compare<int32_t>(ctx.r29.s32, -4, xer);
	// lwz r23,88(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bne cr6,0x832823ec
	if (!cr6.eq) goto loc_832823EC;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x832821a4
	if (cr6.eq) goto loc_832821A4;
	// lwz r4,64(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 64);
	// lwz r3,68(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// bl 0x83211a70
	ctx.lr = 0x83282170;
	sub_83211A70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832821a4
	if (cr6.eq) goto loc_832821A4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r3,68(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x8327aa78
	ctx.lr = 0x83282198;
	sub_8327AA78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x832823ec
	if (!cr6.eq) goto loc_832823EC;
loc_832821A4:
	// lhz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// li r25,1
	ctx.r25.s64 = 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8328224c
	if (cr6.lt) goto loc_8328224C;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r26,r25,r8
	ctx.r26.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r8.u8 & 0x3F));
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_832821D4:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// and r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 & ctx.r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83282228
	if (!cr6.eq) goto loc_83282228;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8327ad20
	ctx.lr = 0x832821FC;
	sub_8327AD20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83282244
	if (cr6.eq) goto loc_83282244;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8327a980
	ctx.lr = 0x8328221C;
	sub_8327A980(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83282244
	if (cr6.eq) goto loc_83282244;
loc_83282228:
	// lhz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 96);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r26,r26,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// ble cr6,0x832821d4
	if (!cr6.gt) goto loc_832821D4;
loc_83282244:
	// cmpwi cr6,r29,-4
	cr6.compare<int32_t>(ctx.r29.s32, -4, xer);
	// bne cr6,0x832823ec
	if (!cr6.eq) goto loc_832823EC;
loc_8328224C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83282294
	if (cr6.eq) goto loc_83282294;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r30,r23,72
	ctx.r30.s64 = ctx.r23.s64 + 72;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8327ad20
	ctx.lr = 0x83282270;
	sub_8327AD20(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8328228c
	if (cr6.eq) goto loc_8328228C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8327a980
	ctx.lr = 0x8328228C;
	sub_8327A980(ctx, base);
loc_8328228C:
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x832823ec
	if (!cr6.eq) goto loc_832823EC;
loc_83282294:
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,516
	cr6.compare<int32_t>(ctx.r11.s32, 516, xer);
	// beq cr6,0x83282300
	if (cr6.eq) goto loc_83282300;
	// cmpwi cr6,r11,517
	cr6.compare<int32_t>(ctx.r11.s32, 517, xer);
	// beq cr6,0x832822c8
	if (cr6.eq) goto loc_832822C8;
	// cmpwi cr6,r11,524
	cr6.compare<int32_t>(ctx.r11.s32, 524, xer);
	// beq cr6,0x832823ec
	if (cr6.eq) goto loc_832823EC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832784a8
	ctx.lr = 0x832822B8;
	sub_832784A8(ctx, base);
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x832823ec
	if (!cr6.eq) goto loc_832823EC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x83282348
	goto loc_83282348;
loc_832822C8:
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832822f0
	if (cr6.eq) goto loc_832822F0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x832822F0;
	sub_83222030(ctx, base);
loc_832822F0:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// b 0x832823ec
	goto loc_832823EC;
loc_83282300:
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83282328
	if (cr6.eq) goto loc_83282328;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83282328;
	sub_83222030(ctx, base);
loc_83282328:
	// sth r25,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r25.u16);
	// sth r25,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r25.u16);
	// b 0x832823ec
	goto loc_832823EC;
loc_83282334:
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(ctx.r21.s32, 1, xer);
	// beq cr6,0x83282344
	if (cr6.eq) goto loc_83282344;
	// cmpwi cr6,r21,2
	cr6.compare<int32_t>(ctx.r21.s32, 2, xer);
	// bne cr6,0x83282370
	if (!cr6.eq) goto loc_83282370;
loc_83282344:
	// li r6,1
	ctx.r6.s64 = 1;
loc_83282348:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83211720
	ctx.lr = 0x83282360;
	sub_83211720(ctx, base);
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x832823ec
	if (!cr6.eq) goto loc_832823EC;
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(ctx.r21.s32, 1, xer);
	// beq cr6,0x83282380
	if (cr6.eq) goto loc_83282380;
loc_83282370:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// beq cr6,0x83282380
	if (cr6.eq) goto loc_83282380;
	// cmpwi cr6,r21,3
	cr6.compare<int32_t>(ctx.r21.s32, 3, xer);
	// bne cr6,0x8328239c
	if (!cr6.eq) goto loc_8328239C;
loc_83282380:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x832393e8
	ctx.lr = 0x83282394;
	sub_832393E8(ctx, base);
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x832823ec
	if (!cr6.eq) goto loc_832823EC;
loc_8328239C:
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832823c4
	if (!cr6.eq) goto loc_832823C4;
	// lhz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// bl 0x832277f8
	ctx.lr = 0x832823B0;
	sub_832277F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832823c4
	if (!cr6.eq) goto loc_832823C4;
	// bl 0x83227908
	ctx.lr = 0x832823C0;
	sub_83227908(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_832823C4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lhz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r30,r11,25416
	ctx.r30.s64 = ctx.r11.s64 + 25416;
	// addi r5,r9,23136
	ctx.r5.s64 = ctx.r9.s64 + 23136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x83297a40
	ctx.lr = 0x832823E4;
	sub_83297A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x832823EC;
	sub_83255A88(ctx, base);
loc_832823EC:
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r10.u16);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x83282418;
	sub_83222508(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83222030
	ctx.lr = 0x83282420;
	sub_83222030(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282428"))) PPC_WEAK_FUNC(sub_83282428);
PPC_FUNC_IMPL(__imp__sub_83282428) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83282440;
	sub_8327DDD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832813a8
	ctx.lr = 0x83282458;
	sub_832813A8(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_8328246C"))) PPC_WEAK_FUNC(sub_8328246C);
PPC_FUNC_IMPL(__imp__sub_8328246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282470"))) PPC_WEAK_FUNC(sub_83282470);
PPC_FUNC_IMPL(__imp__sub_83282470) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x8328248C;
	sub_8327DDD8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x83282498;
	sub_8327DDD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832813a8
	ctx.lr = 0x832824B0;
	sub_832813A8(ctx, base);
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

__attribute__((alias("__imp__sub_832824C8"))) PPC_WEAK_FUNC(sub_832824C8);
PPC_FUNC_IMPL(__imp__sub_832824C8) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x832824E0;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281b88
	ctx.lr = 0x832824F4;
	sub_83281B88(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83282508"))) PPC_WEAK_FUNC(sub_83282508);
PPC_FUNC_IMPL(__imp__sub_83282508) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83282520;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83281b88
	ctx.lr = 0x83282534;
	sub_83281B88(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83282548"))) PPC_WEAK_FUNC(sub_83282548);
PPC_FUNC_IMPL(__imp__sub_83282548) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83282560;
	sub_8327DDD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832820a0
	ctx.lr = 0x83282570;
	sub_832820A0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83282584"))) PPC_WEAK_FUNC(sub_83282584);
PPC_FUNC_IMPL(__imp__sub_83282584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282588"))) PPC_WEAK_FUNC(sub_83282588);
PPC_FUNC_IMPL(__imp__sub_83282588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83282590;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x8328259C;
	sub_8327DDD8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8327ddd8
	ctx.lr = 0x832825A8;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(ctx.r29.s32, 4, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bne cr6,0x83282620
	if (!cr6.eq) goto loc_83282620;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x832825F4;
	sub_83222508(ctx, base);
	// lhz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x83282610;
	sub_83222030(ctx, base);
	// lhz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// sth r5,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r5.u16);
	// b 0x83282758
	goto loc_83282758;
loc_83282620:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83282638
	if (cr6.eq) goto loc_83282638;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x8328264c
	if (cr6.eq) goto loc_8328264C;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bne cr6,0x83282680
	if (!cr6.eq) goto loc_83282680;
loc_83282638:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// beq cr6,0x8328264c
	if (cr6.eq) goto loc_8328264C;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bne cr6,0x83282650
	if (!cr6.eq) goto loc_83282650;
loc_8328264C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_83282650:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83211720
	ctx.lr = 0x83282668;
	sub_83211720(ctx, base);
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x83282758
	if (!cr6.eq) goto loc_83282758;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// bne cr6,0x83282680
	if (!cr6.eq) goto loc_83282680;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x83282690
	goto loc_83282690;
loc_83282680:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq cr6,0x83282690
	if (cr6.eq) goto loc_83282690;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x832826ec
	if (!cr6.eq) goto loc_832826EC;
loc_83282690:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// sth r30,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r30.u16);
	// stb r30,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r30.u8);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83210ec0
	ctx.lr = 0x832826BC;
	sub_83210EC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83210908
	ctx.lr = 0x832826D0;
	sub_83210908(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x832393e8
	ctx.lr = 0x832826E4;
	sub_832393E8(ctx, base);
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x83282758
	if (!cr6.eq) goto loc_83282758;
loc_832826EC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83211228
	ctx.lr = 0x832826F8;
	sub_83211228(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r8,r11,21124
	ctx.r8.s64 = ctx.r11.s64 + 21124;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// addi r4,r9,23164
	ctx.r4.s64 = ctx.r9.s64 + 23164;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x832085e8
	ctx.lr = 0x8328271C;
	sub_832085E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832820a0
	ctx.lr = 0x8328272C;
	sub_832820A0(ctx, base);
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x83222508
	ctx.lr = 0x83282750;
	sub_83222508(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83277938
	ctx.lr = 0x83282758;
	sub_83277938(ctx, base);
loc_83282758:
	// lhz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320fdd0
	ctx.lr = 0x83282790;
	sub_8320FDD0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832827d0
	if (!cr6.eq) goto loc_832827D0;
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x832827d0
	if (cr6.eq) goto loc_832827D0;
	// lhz r11,90(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r11,167
	cr6.compare<uint32_t>(ctx.r11.u32, 167, xer);
	// bne cr6,0x832827d0
	if (!cr6.eq) goto loc_832827D0;
	// li r4,168
	ctx.r4.s64 = 168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320fcc0
	ctx.lr = 0x832827D0;
	sub_8320FCC0(ctx, base);
loc_832827D0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832827e8
	if (!cr6.eq) goto loc_832827E8;
	// bl 0x83213150
	ctx.lr = 0x832827E4;
	sub_83213150(ctx, base);
	// b 0x832827f0
	goto loc_832827F0;
loc_832827E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83222508
	ctx.lr = 0x832827F0;
	sub_83222508(ctx, base);
loc_832827F0:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x83222030
	ctx.lr = 0x8328280C;
	sub_83222030(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// sth r7,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282820"))) PPC_WEAK_FUNC(sub_83282820);
PPC_FUNC_IMPL(__imp__sub_83282820) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83281f50
	sub_83281F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328282C"))) PPC_WEAK_FUNC(sub_8328282C);
PPC_FUNC_IMPL(__imp__sub_8328282C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282830"))) PPC_WEAK_FUNC(sub_83282830);
PPC_FUNC_IMPL(__imp__sub_83282830) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83282848;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x832820a0
	ctx.lr = 0x83282864;
	sub_832820A0(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_83282878"))) PPC_WEAK_FUNC(sub_83282878);
PPC_FUNC_IMPL(__imp__sub_83282878) {
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
	// bl 0x8327ddd8
	ctx.lr = 0x83282890;
	sub_8327DDD8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x83281b88
	ctx.lr = 0x832828B0;
	sub_83281B88(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_832828C4"))) PPC_WEAK_FUNC(sub_832828C4);
PPC_FUNC_IMPL(__imp__sub_832828C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832828C8"))) PPC_WEAK_FUNC(sub_832828C8);
PPC_FUNC_IMPL(__imp__sub_832828C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832828D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,36(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,80(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83282918
	if (cr6.eq) goto loc_83282918;
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// ori r8,r11,512
	ctx.r8.u64 = ctx.r11.u64 | 512;
	// rlwinm r25,r9,23,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x1;
	// sth r8,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r8.u16);
loc_83282918:
	// lis r26,-31748
	ctx.r26.s64 = -2080636928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,25416(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25416, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x832780c8
	ctx.lr = 0x83282938;
	sub_832780C8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83282998
	if (cr6.eq) goto loc_83282998;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8320db50
	ctx.lr = 0x83282964;
	sub_8320DB50(ctx, base);
	// lhz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 176);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r5,2
	ctx.r5.s64 = 2;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x832240b8
	ctx.lr = 0x83282988;
	sub_832240B8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x83277c58
	ctx.lr = 0x83282994;
	sub_83277C58(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
loc_83282998:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r30,r11,10728
	ctx.r30.s64 = ctx.r11.s64 + 10728;
loc_832829A0:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x83282b10
	if (!cr6.lt) goto loc_83282B10;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r10
	// lbz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 256);
	// lwz r6,252(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83282ae4
	if (cr6.eq) goto loc_83282AE4;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83282b38
	if (cr6.eq) goto loc_83282B38;
	// cmpwi cr6,r6,-17
	cr6.compare<int32_t>(ctx.r6.s32, -17, xer);
	// bne cr6,0x832829e4
	if (!cr6.eq) goto loc_832829E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x832829fc
	goto loc_832829FC;
loc_832829E4:
	// cmpwi cr6,r6,-1000
	cr6.compare<int32_t>(ctx.r6.s32, -1000, xer);
	// bgt cr6,0x832829f8
	if (cr6.gt) goto loc_832829F8;
	// cmpwi cr6,r6,-3000
	cr6.compare<int32_t>(ctx.r6.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x832829fc
	if (cr6.gt) goto loc_832829FC;
loc_832829F8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_832829FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83282ae4
	if (cr6.eq) goto loc_83282AE4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83277f40
	ctx.lr = 0x83282A20;
	sub_83277F40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83282aa0
	if (cr6.eq) goto loc_83282AA0;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmpwi cr6,r31,-17
	cr6.compare<int32_t>(ctx.r31.s32, -17, xer);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// beq cr6,0x83282a4c
	if (cr6.eq) goto loc_83282A4C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83285e10
	ctx.lr = 0x83282A4C;
	sub_83285E10(ctx, base);
loc_83282A4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8320dc28
	ctx.lr = 0x83282A58;
	sub_8320DC28(ctx, base);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r5,2
	ctx.r5.s64 = 2;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x832240b8
	ctx.lr = 0x83282A7C;
	sub_832240B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8320dc28
	ctx.lr = 0x83282A88;
	sub_8320DC28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83277c58
	ctx.lr = 0x83282A94;
	sub_83277C58(ctx, base);
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x83282ac4
	goto loc_83282AC4;
loc_83282AA0:
	// cmpwi cr6,r31,-17
	cr6.compare<int32_t>(ctx.r31.s32, -17, xer);
	// bne cr6,0x83282ab0
	if (!cr6.eq) goto loc_83282AB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83282ac8
	goto loc_83282AC8;
loc_83282AB0:
	// cmpwi cr6,r31,-1000
	cr6.compare<int32_t>(ctx.r31.s32, -1000, xer);
	// bgt cr6,0x83282ac4
	if (cr6.gt) goto loc_83282AC4;
	// cmpwi cr6,r31,-3000
	cr6.compare<int32_t>(ctx.r31.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83282ac8
	if (cr6.gt) goto loc_83282AC8;
loc_83282AC4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83282AC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83282b10
	if (!cr6.eq) goto loc_83282B10;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
loc_83282AE4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x83282b14
	if (cr6.lt) goto loc_83282B14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83282B0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832829a0
	goto loc_832829A0;
loc_83282B10:
	// lwz r6,252(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
loc_83282B14:
	// cmpwi cr6,r6,-17
	cr6.compare<int32_t>(ctx.r6.s32, -17, xer);
	// bne cr6,0x83282b24
	if (!cr6.eq) goto loc_83282B24;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x83282b3c
	goto loc_83282B3C;
loc_83282B24:
	// cmpwi cr6,r6,-1000
	cr6.compare<int32_t>(ctx.r6.s32, -1000, xer);
	// bgt cr6,0x83282b38
	if (cr6.gt) goto loc_83282B38;
	// cmpwi cr6,r6,-3000
	cr6.compare<int32_t>(ctx.r6.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x83282b3c
	if (cr6.gt) goto loc_83282B3C;
loc_83282B38:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83282B3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83282b5c
	if (cr6.eq) goto loc_83282B5C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x83282b5c
	if (cr6.eq) goto loc_83282B5C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83222508
	ctx.lr = 0x83282B5C;
	sub_83222508(ctx, base);
loc_83282B5C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8320d9e8
	ctx.lr = 0x83282B64;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8320d9e8
	ctx.lr = 0x83282B6C;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8320d9e8
	ctx.lr = 0x83282B74;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8320d9e8
	ctx.lr = 0x83282B7C;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83222030
	ctx.lr = 0x83282B84;
	sub_83222030(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// stw r29,25416(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25416, ctx.r29.u32);
	// beq cr6,0x83282c1c
	if (cr6.eq) goto loc_83282C1C;
	// lwz r31,80(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bne cr6,0x83282bcc
	if (!cr6.eq) goto loc_83282BCC;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83282bcc
	if (cr6.eq) goto loc_83282BCC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266348
	ctx.lr = 0x83282BCC;
	sub_83266348(ctx, base);
loc_83282BCC:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r30,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r9,r9,0,23,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// sth r9,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// beq cr6,0x83282c1c
	if (cr6.eq) goto loc_83282C1C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r30,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r11,0,16,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// beq cr6,0x83282c0c
	if (cr6.eq) goto loc_83282C0C;
	// bl 0x83219cf0
	ctx.lr = 0x83282C08;
	sub_83219CF0(ctx, base);
	// b 0x83282c10
	goto loc_83282C10;
loc_83282C0C:
	// bl 0x83219c00
	ctx.lr = 0x83282C10;
	sub_83219C00(ctx, base);
loc_83282C10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 236);
	// bl 0x832181c8
	ctx.lr = 0x83282C1C;
	sub_832181C8(ctx, base);
loc_83282C1C:
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282C28"))) PPC_WEAK_FUNC(sub_83282C28);
PPC_FUNC_IMPL(__imp__sub_83282C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83282C30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1059
	cr6.compare<uint32_t>(ctx.r3.u32, 1059, xer);
	// bne cr6,0x83282c54
	if (!cr6.eq) goto loc_83282C54;
	// li r3,175
	ctx.r3.s64 = 175;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83282C54:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83282c70
	if (cr6.eq) goto loc_83282C70;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
loc_83282C70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83282d38
	if (cr6.eq) goto loc_83282D38;
	// bl 0x8322a8c8
	ctx.lr = 0x83282C84;
	sub_8322A8C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83282d40
	if (!cr6.eq) goto loc_83282D40;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83282d40
	if (cr6.eq) goto loc_83282D40;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83282d40
	if (cr6.eq) goto loc_83282D40;
	// li r4,58
	ctx.r4.s64 = 58;
	// bl 0x83296d08
	ctx.lr = 0x83282CB0;
	sub_83296D08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83282d40
	if (cr6.eq) goto loc_83282D40;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(ctx.r11.u32, 58, xer);
	// bne cr6,0x83282d40
	if (!cr6.eq) goto loc_83282D40;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r30,r3,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r3.s64;
	// bl 0x83209c20
	ctx.lr = 0x83282CD4;
	sub_83209C20(ctx, base);
	// li r11,46
	ctx.r11.s64 = 46;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stbx r11,r3,r30
	PPC_STORE_U8(ctx.r3.u32 + ctx.r30.u32, ctx.r11.u8);
	// add r28,r3,r30
	ctx.r28.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x83255980
	ctx.lr = 0x83282CEC;
	sub_83255980(ctx, base);
	// subf r5,r30,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r30.s64;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// bl 0x83296be0
	ctx.lr = 0x83282CFC;
	sub_83296BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x83282D04;
	sub_83255A88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832277e8
	ctx.lr = 0x83282D0C;
	sub_832277E8(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8322a8c8
	ctx.lr = 0x83282D18;
	sub_8322A8C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83282d40
	if (cr6.eq) goto loc_83282D40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83282D2C;
	sub_83209D68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_83282D38:
	// bl 0x8322a400
	ctx.lr = 0x83282D3C;
	sub_8322A400(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83282D40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282D4C"))) PPC_WEAK_FUNC(sub_83282D4C);
PPC_FUNC_IMPL(__imp__sub_83282D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282D50"))) PPC_WEAK_FUNC(sub_83282D50);
PPC_FUNC_IMPL(__imp__sub_83282D50) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r3,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r3.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83282c28
	ctx.lr = 0x83282D7C;
	sub_83282C28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83282D8C"))) PPC_WEAK_FUNC(sub_83282D8C);
PPC_FUNC_IMPL(__imp__sub_83282D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282D90"))) PPC_WEAK_FUNC(sub_83282D90);
PPC_FUNC_IMPL(__imp__sub_83282D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83282D98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x83282c28
	ctx.lr = 0x83282DC4;
	sub_83282C28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83282ddc
	if (!cr6.eq) goto loc_83282DDC;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83282DDC:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83282e20
	if (cr6.eq) goto loc_83282E20;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83282e10
	if (cr6.eq) goto loc_83282E10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83282E10;
	sub_83222030(ctx, base);
loc_83282E10:
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_83282E20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83282E2C"))) PPC_WEAK_FUNC(sub_83282E2C);
PPC_FUNC_IMPL(__imp__sub_83282E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83282E30"))) PPC_WEAK_FUNC(sub_83282E30);
PPC_FUNC_IMPL(__imp__sub_83282E30) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83282c28
	ctx.lr = 0x83282E50;
	sub_83282C28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83282e64
	if (!cr6.eq) goto loc_83282E64;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x83282eb0
	goto loc_83282EB0;
loc_83282E64:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83282eac
	if (cr6.eq) goto loc_83282EAC;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83282e98
	if (cr6.eq) goto loc_83282E98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83282E98;
	sub_83222030(ctx, base);
loc_83282E98:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_83282EAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83282EB0:
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

__attribute__((alias("__imp__sub_83282EC8"))) PPC_WEAK_FUNC(sub_83282EC8);
PPC_FUNC_IMPL(__imp__sub_83282EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83282ED0;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83282eec
	if (!cr6.gt) goto loc_83282EEC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x83282ef4
	if (!cr6.gt) goto loc_83282EF4;
loc_83282EEC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8320d028
	ctx.lr = 0x83282EF4;
	sub_8320D028(ctx, base);
loc_83282EF4:
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83283200
	if (cr6.lt) goto loc_83283200;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x83282f40
	if (cr6.lt) goto loc_83282F40;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x83282F34;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83282f74
	if (!cr6.eq) goto loc_83282F74;
loc_83282F40:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x83282f60
	if (cr6.eq) goto loc_83282F60;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x83282f60
	if (cr6.eq) goto loc_83282F60;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bne cr6,0x83282f74
	if (!cr6.eq) goto loc_83282F74;
loc_83282F60:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83282F6C;
	sub_8322E5B0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83282F74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x83222be8
	ctx.lr = 0x83282F94;
	sub_83222BE8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8328308c
	if (cr6.eq) goto loc_8328308C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,81
	ctx.r10.s64 = ctx.r1.s64 + 81;
loc_83282FB4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,43
	cr6.compare<int32_t>(ctx.r9.s32, 43, xer);
	// bne cr6,0x83282fe8
	if (!cr6.eq) goto loc_83282FE8;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8328308c
	if (!cr6.eq) goto loc_8328308C;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8328307c
	goto loc_8328307C;
loc_83282FE8:
	// cmpwi cr6,r9,45
	cr6.compare<int32_t>(ctx.r9.s32, 45, xer);
	// bne cr6,0x83283014
	if (!cr6.eq) goto loc_83283014;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8328308c
	if (!cr6.eq) goto loc_8328308C;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8328307c
	goto loc_8328307C;
loc_83283014:
	// cmpwi cr6,r9,48
	cr6.compare<int32_t>(ctx.r9.s32, 48, xer);
	// bne cr6,0x8328308c
	if (!cr6.eq) goto loc_8328308C;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// blt cr6,0x83283038
	if (cr6.lt) goto loc_83283038;
	// cmpwi cr6,r9,90
	cr6.compare<int32_t>(ctx.r9.s32, 90, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// ble cr6,0x8328303c
	if (!cr6.gt) goto loc_8328303C;
loc_83283038:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8328303C:
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8328304c
	if (cr6.eq) goto loc_8328304C;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
loc_8328304C:
	// cmpwi cr6,r9,120
	cr6.compare<int32_t>(ctx.r9.s32, 120, xer);
	// bne cr6,0x8328308c
	if (!cr6.eq) goto loc_8328308C;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8328308c
	if (!cr6.eq) goto loc_8328308C;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x83283070
	if (!cr6.eq) goto loc_83283070;
	// li r29,16
	ctx.r29.s64 = 16;
loc_83283070:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_8328307C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83282fb4
	if (!cr6.eq) goto loc_83282FB4;
loc_8328308C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x832830ec
	if (!cr6.eq) goto loc_832830EC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// bne cr6,0x832830e8
	if (!cr6.eq) goto loc_832830E8;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832830e0
	if (cr6.eq) goto loc_832830E0;
loc_832830C0:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832830e8
	if (cr6.lt) goto loc_832830E8;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// bgt cr6,0x832830e8
	if (cr6.gt) goto loc_832830E8;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832830c0
	if (!cr6.eq) goto loc_832830C0;
loc_832830E0:
	// li r29,8
	ctx.r29.s64 = 8;
	// b 0x832830ec
	goto loc_832830EC;
loc_832830E8:
	// li r29,10
	ctx.r29.s64 = 10;
loc_832830EC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83283174
	if (cr6.eq) goto loc_83283174;
loc_83283104:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x8328311c
	if (cr6.lt) goto loc_8328311C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x8328311c
	if (cr6.gt) goto loc_8328311C;
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// b 0x83283148
	goto loc_83283148;
loc_8328311C:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x83283134
	if (cr6.lt) goto loc_83283134;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// bgt cr6,0x83283134
	if (cr6.gt) goto loc_83283134;
	// addi r10,r11,-87
	ctx.r10.s64 = ctx.r11.s64 + -87;
	// b 0x83283148
	goto loc_83283148;
loc_83283134:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x83283174
	if (cr6.lt) goto loc_83283174;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// bgt cr6,0x83283174
	if (cr6.gt) goto loc_83283174;
	// addi r10,r11,-55
	ctx.r10.s64 = ctx.r11.s64 + -55;
loc_83283148:
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bge cr6,0x83283174
	if (!cr6.lt) goto loc_83283174;
	// lbzu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// extsw r7,r29
	ctx.r7.s64 = ctx.r29.s32;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulld r10,r7,r28
	ctx.r10.s64 = ctx.r7.s64 * ctx.r28.s64;
	// li r26,1
	ctx.r26.s64 = 1;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83283104
	if (!cr6.eq) goto loc_83283104;
loc_83283174:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832831f0
	if (cr6.eq) goto loc_832831F0;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpd cr6,r28,r10
	cr6.compare<int64_t>(ctx.r28.s64, ctx.r10.s64, xer);
	// ble cr6,0x832831a8
	if (!cr6.gt) goto loc_832831A8;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mulld r4,r11,r28
	ctx.r4.s64 = ctx.r11.s64 * ctx.r28.s64;
	// bl 0x832238c0
	ctx.lr = 0x832831A0;
	sub_832238C0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832831A8:
	// lwz r31,12(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832831d4
	if (cr6.eq) goto loc_832831D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832831D4;
	sub_83222030(ctx, base);
loc_832831D4:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832831F0:
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x832831F8;
	sub_83223850(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83283200:
	// lwz r3,12(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x83283208;
	sub_83222030(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283210"))) PPC_WEAK_FUNC(sub_83283210);
PPC_FUNC_IMPL(__imp__sub_83283210) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83283238
	if (cr6.eq) goto loc_83283238;
	// bl 0x8320d028
	ctx.lr = 0x83283238;
	sub_8320D028(ctx, base);
loc_83283238:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83283320
	if (cr6.lt) goto loc_83283320;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83221558
	ctx.lr = 0x83283268;
	sub_83221558(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83283288
	if (cr6.eq) goto loc_83283288;
	// bl 0x83220448
	ctx.lr = 0x8328327C;
	sub_83220448(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832248d8
	ctx.lr = 0x83283284;
	sub_832248D8(ctx, base);
	// b 0x83283328
	goto loc_83283328;
loc_83283288:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83222be8
	ctx.lr = 0x8328329C;
	sub_83222BE8(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// beq cr6,0x832832b8
	if (cr6.eq) goto loc_832832B8;
	// cmpwi cr6,r10,43
	cr6.compare<int32_t>(ctx.r10.s32, 43, xer);
	// bne cr6,0x832832bc
	if (!cr6.eq) goto loc_832832BC;
loc_832832B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832832BC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,46
	cr6.compare<uint32_t>(ctx.r9.u32, 46, xer);
	// bne cr6,0x832832d0
	if (!cr6.eq) goto loc_832832D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832832D0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832832f0
	if (cr6.lt) goto loc_832832F0;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x832832f0
	if (cr6.gt) goto loc_832832F0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_832832F0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83283314
	if (cr6.eq) goto loc_83283314;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83298928
	ctx.lr = 0x83283308;
	sub_83298928(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832239d8
	ctx.lr = 0x83283310;
	sub_832239D8(ctx, base);
	// b 0x83283328
	goto loc_83283328;
loc_83283314:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223850
	ctx.lr = 0x8328331C;
	sub_83223850(ctx, base);
	// b 0x83283328
	goto loc_83283328;
loc_83283320:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x83283328;
	sub_83222030(ctx, base);
loc_83283328:
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

__attribute__((alias("__imp__sub_83283340"))) PPC_WEAK_FUNC(sub_83283340);
PPC_FUNC_IMPL(__imp__sub_83283340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83283348;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83283360
	if (cr6.eq) goto loc_83283360;
	// bl 0x8320d028
	ctx.lr = 0x83283360;
	sub_8320D028(ctx, base);
loc_83283360:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832833f8
	if (cr6.lt) goto loc_832833F8;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x83283394;
	sub_832217A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832833cc
	if (cr6.eq) goto loc_832833CC;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x832833e4
	if (!cr6.eq) goto loc_832833E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,4095
	ctx.r10.s64 = 4095;
	// rldicr r9,r10,51,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 51) & 0xFFF8000000000000;
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpd cr6,r8,r9
	cr6.compare<int64_t>(ctx.r8.s64, ctx.r9.s64, xer);
	// b 0x832833dc
	goto loc_832833DC;
loc_832833CC:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bne cr6,0x832833e0
	if (!cr6.eq) goto loc_832833E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
loc_832833DC:
	// bne cr6,0x832833e4
	if (!cr6.eq) goto loc_832833E4;
loc_832833E0:
	// li r29,1
	ctx.r29.s64 = 1;
loc_832833E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x832833F0;
	sub_8320CF60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832833F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x83283404;
	sub_8320CF60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328340C"))) PPC_WEAK_FUNC(sub_8328340C);
PPC_FUNC_IMPL(__imp__sub_8328340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283410"))) PPC_WEAK_FUNC(sub_83283410);
PPC_FUNC_IMPL(__imp__sub_83283410) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328343c
	if (cr6.eq) goto loc_8328343C;
	// bl 0x8320d028
	ctx.lr = 0x8328343C;
	sub_8320D028(ctx, base);
loc_8328343C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x832834a4
	if (cr6.lt) goto loc_832834A4;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83226378
	ctx.lr = 0x83283474;
	sub_83226378(ctx, base);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8328349c
	if (cr6.eq) goto loc_8328349C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x83283498
	if (!cr6.eq) goto loc_83283498;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8328349c
	if (!cr6.eq) goto loc_8328349C;
loc_83283498:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8328349C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832834A4;
	sub_83222030(ctx, base);
loc_832834A4:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832834d0
	if (cr6.eq) goto loc_832834D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832834D0;
	sub_83222030(ctx, base);
loc_832834D0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_832834F4"))) PPC_WEAK_FUNC(sub_832834F4);
PPC_FUNC_IMPL(__imp__sub_832834F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832834F8"))) PPC_WEAK_FUNC(sub_832834F8);
PPC_FUNC_IMPL(__imp__sub_832834F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83283500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83283518
	if (cr6.eq) goto loc_83283518;
	// bl 0x8320d028
	ctx.lr = 0x83283518;
	sub_8320D028(ctx, base);
loc_83283518:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r31,16(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83283534
	if (!cr6.eq) goto loc_83283534;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8328354c
	goto loc_8328354C;
loc_83283534:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83297bb8
	ctx.lr = 0x8328353C;
	sub_83297BB8(ctx, base);
	// ld r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 112);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8328354C:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83283578
	if (cr6.eq) goto loc_83283578;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83283578;
	sub_83222030(ctx, base);
loc_83283578:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8328358C"))) PPC_WEAK_FUNC(sub_8328358C);
PPC_FUNC_IMPL(__imp__sub_8328358C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283590"))) PPC_WEAK_FUNC(sub_83283590);
PPC_FUNC_IMPL(__imp__sub_83283590) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x832835b8
	if (cr6.eq) goto loc_832835B8;
	// bl 0x8320d028
	ctx.lr = 0x832835B8;
	sub_8320D028(ctx, base);
loc_832835B8:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83283614
	if (cr6.lt) goto loc_83283614;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222be8
	ctx.lr = 0x832835F0;
	sub_83222BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83254540
	ctx.lr = 0x832835F8;
	sub_83254540(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x83283604;
	sub_83223BD0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83283614
	if (cr6.eq) goto loc_83283614;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83283614;
	sub_83209D68(ctx, base);
loc_83283614:
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

__attribute__((alias("__imp__sub_8328362C"))) PPC_WEAK_FUNC(sub_8328362C);
PPC_FUNC_IMPL(__imp__sub_8328362C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283630"))) PPC_WEAK_FUNC(sub_83283630);
PPC_FUNC_IMPL(__imp__sub_83283630) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83283658
	if (cr6.eq) goto loc_83283658;
	// bl 0x8320d028
	ctx.lr = 0x83283658;
	sub_8320D028(ctx, base);
loc_83283658:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x832836b4
	if (cr6.lt) goto loc_832836B4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222be8
	ctx.lr = 0x83283690;
	sub_83222BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83254a18
	ctx.lr = 0x83283698;
	sub_83254A18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x832836A4;
	sub_83223BD0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832836b4
	if (cr6.eq) goto loc_832836B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x832836B4;
	sub_83209D68(ctx, base);
loc_832836B4:
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

__attribute__((alias("__imp__sub_832836CC"))) PPC_WEAK_FUNC(sub_832836CC);
PPC_FUNC_IMPL(__imp__sub_832836CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832836D0"))) PPC_WEAK_FUNC(sub_832836D0);
PPC_FUNC_IMPL(__imp__sub_832836D0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// beq cr6,0x8328370c
	if (cr6.eq) goto loc_8328370C;
	// bl 0x8320d028
	ctx.lr = 0x8328370C;
	sub_8320D028(ctx, base);
loc_8328370C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83283744
	if (cr6.lt) goto loc_83283744;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832264e0
	ctx.lr = 0x83283744;
	sub_832264E0(ctx, base);
loc_83283744:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83201428
	ctx.lr = 0x8328374C;
	sub_83201428(ctx, base);
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

__attribute__((alias("__imp__sub_83283760"))) PPC_WEAK_FUNC(sub_83283760);
PPC_FUNC_IMPL(__imp__sub_83283760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83283768;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83283784
	if (cr6.eq) goto loc_83283784;
	// bl 0x8320e738
	ctx.lr = 0x83283784;
	sub_8320E738(ctx, base);
loc_83283784:
	// bl 0x83235198
	ctx.lr = 0x83283788;
	sub_83235198(ctx, base);
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832837b8
	if (cr6.eq) goto loc_832837B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x832837B8;
	sub_83222030(ctx, base);
loc_832837B8:
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8328386c
	if (!cr6.gt) goto loc_8328386C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8328386c
	if (!cr6.gt) goto loc_8328386C;
loc_83283810:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r31.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x832264e0
	ctx.lr = 0x83283844;
	sub_832264E0(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8322e3e0
	ctx.lr = 0x83283858;
	sub_8322E3E0(ctx, base);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x83283810
	if (cr6.lt) goto loc_83283810;
loc_8328386C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83283874"))) PPC_WEAK_FUNC(sub_83283874);
PPC_FUNC_IMPL(__imp__sub_83283874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283878"))) PPC_WEAK_FUNC(sub_83283878);
PPC_FUNC_IMPL(__imp__sub_83283878) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832838ac
	if (!cr6.eq) goto loc_832838AC;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r3,r11,-22544
	ctx.r3.s64 = ctx.r11.s64 + -22544;
	// bl 0x83209b18
	ctx.lr = 0x832838A8;
	sub_83209B18(ctx, base);
	// b 0x832838f0
	goto loc_832838F0;
loc_832838AC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x832838dc
	if (!cr6.gt) goto loc_832838DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x832838DC;
	sub_8320E738(ctx, base);
loc_832838DC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x832838F0;
	sub_83222BE8(ctx, base);
loc_832838F0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x832838FC;
	sub_83223BD0(ctx, base);
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

__attribute__((alias("__imp__sub_83283914"))) PPC_WEAK_FUNC(sub_83283914);
PPC_FUNC_IMPL(__imp__sub_83283914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283918"))) PPC_WEAK_FUNC(sub_83283918);
PPC_FUNC_IMPL(__imp__sub_83283918) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83283978
	if (cr6.eq) goto loc_83283978;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8328396c
	if (cr6.eq) goto loc_8328396C;
	// bl 0x8320e738
	ctx.lr = 0x8328396C;
	sub_8320E738(ctx, base);
loc_8328396C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83220140
	ctx.lr = 0x83283974;
	sub_83220140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83283978:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x83283980;
	sub_8320CF60(ctx, base);
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

__attribute__((alias("__imp__sub_83283998"))) PPC_WEAK_FUNC(sub_83283998);
PPC_FUNC_IMPL(__imp__sub_83283998) {
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
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne cr6,0x832839d8
	if (!cr6.eq) goto loc_832839D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8322e5b0
	ctx.lr = 0x832839D4;
	sub_8322E5B0(ctx, base);
	// b 0x83283a14
	goto loc_83283A14;
loc_832839D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x83283a08
	if (cr6.eq) goto loc_83283A08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x83283A08;
	sub_8320E738(ctx, base);
loc_83283A08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83226378
	ctx.lr = 0x83283A14;
	sub_83226378(ctx, base);
loc_83283A14:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832240b8
	ctx.lr = 0x83283A24;
	sub_832240B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83283A2C;
	sub_83222030(ctx, base);
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

__attribute__((alias("__imp__sub_83283A44"))) PPC_WEAK_FUNC(sub_83283A44);
PPC_FUNC_IMPL(__imp__sub_83283A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283A48"))) PPC_WEAK_FUNC(sub_83283A48);
PPC_FUNC_IMPL(__imp__sub_83283A48) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83283a7c
	if (cr6.eq) goto loc_83283A7C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83283a7c
	if (cr6.eq) goto loc_83283A7C;
	// bl 0x8320e738
	ctx.lr = 0x83283A7C;
	sub_8320E738(ctx, base);
loc_83283A7C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83283aac
	if (cr6.lt) goto loc_83283AAC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83222578
	ctx.lr = 0x83283AA8;
	sub_83222578(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83283AAC:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83283ad8
	if (cr6.eq) goto loc_83283AD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83283AD8;
	sub_83222030(ctx, base);
loc_83283AD8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83283AFC"))) PPC_WEAK_FUNC(sub_83283AFC);
PPC_FUNC_IMPL(__imp__sub_83283AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283B00"))) PPC_WEAK_FUNC(sub_83283B00);
PPC_FUNC_IMPL(__imp__sub_83283B00) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83283b34
	if (cr6.eq) goto loc_83283B34;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83283b34
	if (cr6.eq) goto loc_83283B34;
	// bl 0x8320e738
	ctx.lr = 0x83283B34;
	sub_8320E738(ctx, base);
loc_83283B34:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x83283b64
	if (cr6.lt) goto loc_83283B64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832229d8
	ctx.lr = 0x83283B60;
	sub_832229D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83283B64:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83283b90
	if (cr6.eq) goto loc_83283B90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83283B90;
	sub_83222030(ctx, base);
loc_83283B90:
	// li r11,11
	ctx.r11.s64 = 11;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_83283BB4"))) PPC_WEAK_FUNC(sub_83283BB4);
PPC_FUNC_IMPL(__imp__sub_83283BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283BB8"))) PPC_WEAK_FUNC(sub_83283BB8);
PPC_FUNC_IMPL(__imp__sub_83283BB8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83283be8
	if (cr6.eq) goto loc_83283BE8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83283be8
	if (cr6.eq) goto loc_83283BE8;
	// bl 0x8320e738
	ctx.lr = 0x83283BE8;
	sub_8320E738(ctx, base);
loc_83283BE8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83283c70
	if (!cr6.gt) goto loc_83283C70;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83283c70
	if (cr6.eq) goto loc_83283C70;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// srw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r6,r10,-163
	ctx.r6.s64 = ctx.r10.s64 + -163;
	// clrlwi r5,r7,24
	ctx.r5.u64 = ctx.r7.u32 & 0xFF;
	// srawi r3,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ctx.r5.u64;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x83283c70
	if (!cr6.eq) goto loc_83283C70;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832240b8
	ctx.lr = 0x83283C6C;
	sub_832240B8(ctx, base);
	// b 0x83283cc4
	goto loc_83283CC4;
loc_83283C70:
	// bl 0x83235198
	ctx.lr = 0x83283C74;
	sub_83235198(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x83283ca4
	if (cr6.eq) goto loc_83283CA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x83283CA4;
	sub_83222030(ctx, base);
loc_83283CA4:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
loc_83283CC4:
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

__attribute__((alias("__imp__sub_83283CDC"))) PPC_WEAK_FUNC(sub_83283CDC);
PPC_FUNC_IMPL(__imp__sub_83283CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83283CE0"))) PPC_WEAK_FUNC(sub_83283CE0);
PPC_FUNC_IMPL(__imp__sub_83283CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83283CE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,615
	ctx.r3.s64 = 615;
	// bl 0x832277f8
	ctx.lr = 0x83283CF8;
	sub_832277F8(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r9,r11,-1088
	ctx.r9.s64 = ctx.r11.s64 + -1088;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r28,r8,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x83283d30
	if (cr6.eq) goto loc_83283D30;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,23188
	ctx.r3.s64 = ctx.r11.s64 + 23188;
	// bl 0x8320d088
	ctx.lr = 0x83283D28;
	sub_8320D088(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83283D30:
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83283d48
	if (!cr6.eq) goto loc_83283D48;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_83283D48:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832133d0
	ctx.lr = 0x83283D70;
	sub_832133D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83283da0
	if (!cr6.eq) goto loc_83283DA0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,-29404
	ctx.r5.s64 = ctx.r11.s64 + -29404;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r3,343
	ctx.r3.s64 = 343;
	// bl 0x8320d428
	ctx.lr = 0x83283D98;
	sub_8320D428(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83283DA0:
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83283db8
	if (cr6.eq) goto loc_83283DB8;
	// bl 0x83219c00
	ctx.lr = 0x83283DB4;
	sub_83219C00(ctx, base);
	// b 0x83283dbc
	goto loc_83283DBC;
loc_83283DB8:
	// bl 0x83219cf0
	ctx.lr = 0x83283DBC;
	sub_83219CF0(ctx, base);
loc_83283DBC:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83283e04
	if (cr6.eq) goto loc_83283E04;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// bl 0x83237ad0
	ctx.lr = 0x83283DD8;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83283e04
	if (!cr6.eq) goto loc_83283E04;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83283e04
	if (cr6.eq) goto loc_83283E04;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83283e00
	if (cr6.eq) goto loc_83283E00;
	// bl 0x83219c00
	ctx.lr = 0x83283DFC;
	sub_83219C00(ctx, base);
	// b 0x83283e04
	goto loc_83283E04;
loc_83283E00:
	// bl 0x83219cf0
	ctx.lr = 0x83283E04;
	sub_83219CF0(ctx, base);
loc_83283E04:
	// lwz r31,56(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83283e68
	if (cr6.eq) goto loc_83283E68;
loc_83283E10:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83283e5c
	if (cr6.eq) goto loc_83283E5C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83283e5c
	if (cr6.eq) goto loc_83283E5C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x83237ad0
	ctx.lr = 0x83283E38;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83283e5c
	if (!cr6.eq) goto loc_83283E5C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83283e58
	if (cr6.eq) goto loc_83283E58;
	// bl 0x83219c00
	ctx.lr = 0x83283E54;
	sub_83219C00(ctx, base);
	// b 0x83283e5c
	goto loc_83283E5C;
loc_83283E58:
	// bl 0x83219cf0
	ctx.lr = 0x83283E5C;
	sub_83219CF0(ctx, base);
loc_83283E5C:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83283e10
	if (!cr6.eq) goto loc_83283E10;
loc_83283E68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

