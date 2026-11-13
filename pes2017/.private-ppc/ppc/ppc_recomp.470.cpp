#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_838F5C70"))) PPC_WEAK_FUNC(sub_838F5C70);
PPC_FUNC_IMPL(__imp__sub_838F5C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x838F5C78;
	__savegprlr_21(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x838f5da4
	if (!cr6.eq) goto loc_838F5DA4;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r25,r3,1412
	ctx.r25.s64 = ctx.r3.s64 + 1412;
	// stw r6,1412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1412, ctx.r6.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r24,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r24.u32);
	// stw r24,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r24.u32);
	// beq cr6,0x838f5cc4
	if (cr6.eq) goto loc_838F5CC4;
	// stw r8,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r8.u32);
loc_838F5CC4:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_838F5CC8:
	// lwz r10,1416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bge cr6,0x838f5ce0
	if (!cr6.lt) goto loc_838F5CE0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838F5CE0:
	// lwz r9,1428(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r10,r29,r9
	ctx.r10.u64 = ctx.r29.u64 + ctx.r9.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x838f5d08
	if (!cr6.eq) goto loc_838F5D08;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r9,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r9.u32);
loc_838F5D08:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x838f5d14
	if (!cr6.lt) goto loc_838F5D14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838F5D14:
	// subf. r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// beq 0x838f5d28
	if (cr0.eq) goto loc_838F5D28;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x838f5d38
	goto loc_838F5D38;
loc_838F5D28:
	// subfic r11,r23,0
	xer.ca = ctx.r23.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r23.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
loc_838F5D38:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8255b728
	ctx.lr = 0x838F5D40;
	sub_8255B728(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f5cc8
	if (cr6.eq) goto loc_838F5CC8;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x838f5d58
	if (!cr6.eq) goto loc_838F5D58;
	// stw r24,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r24.u32);
loc_838F5D58:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lwz r10,1416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// add. r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// beq 0x838f5d78
	if (cr0.eq) goto loc_838F5D78;
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r8.u32);
loc_838F5D78:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f5d8c
	if (cr6.eq) goto loc_838F5D8C;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_838F5D8C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6c50
	ctx.lr = 0x838F5D98;
	sub_838E6C50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838F5DA4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r10,r11,26868
	ctx.r10.s64 = ctx.r11.s64 + 26868;
	// stw r10,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r10.u32);
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F5DBC"))) PPC_WEAK_FUNC(sub_838F5DBC);
PPC_FUNC_IMPL(__imp__sub_838F5DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F5DC0"))) PPC_WEAK_FUNC(sub_838F5DC0);
PPC_FUNC_IMPL(__imp__sub_838F5DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x838F5DC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1916);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f5dfc
	if (cr6.eq) goto loc_838F5DFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x838f5dfc
	if (!cr6.lt) goto loc_838F5DFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_838F5DFC:
	// addic r11,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// subfe r29,r11,r23
	temp.u8 = (~ctx.r11.u32 + ctx.r23.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r23.u32 + xer.ca < xer.ca);
	ctx.r29.u64 = ~ctx.r11.u64 + ctx.r23.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x838f5fe4
	if (cr6.lt) goto loc_838F5FE4;
	// subf r11,r29,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r29.s64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x838f5e28
	if (!cr6.lt) goto loc_838F5E28;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_838F5E28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// bl 0x838f5b78
	ctx.lr = 0x838F5E34;
	sub_838F5B78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f5fcc
	if (!cr6.eq) goto loc_838F5FCC;
	// subf r24,r30,r26
	ctx.r24.s64 = ctx.r26.s64 - ctx.r30.s64;
	// lwz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,1564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x838f5c70
	ctx.lr = 0x838F5E6C;
	sub_838F5C70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x838f5fb0
	if (!cr6.eq) goto loc_838F5FB0;
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x8255b3c0
	ctx.lr = 0x838F5E84;
	sub_8255B3C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x838f5f94
	if (!cr6.eq) goto loc_838F5F94;
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// add r25,r11,r30
	ctx.r25.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F5EA4;
	sub_838F1F78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f5f74
	if (cr6.eq) goto loc_838F5F74;
	// lwz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// add r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r4,1564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f5c70
	ctx.lr = 0x838F5ED4;
	sub_838F5C70(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x838f5f28
	if (!cr6.eq) goto loc_838F5F28;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, xer);
	// bne cr6,0x838f5f30
	if (!cr6.eq) goto loc_838F5F30;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(ctx.r23.s32, 0, xer);
	// beq cr6,0x838f5efc
	if (cr6.eq) goto loc_838F5EFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stbx r22,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r22.u8);
loc_838F5EFC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f5f14
	if (cr6.eq) goto loc_838F5F14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F5F14;
	sub_831CE980(ctx, base);
loc_838F5F14:
	// lwz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// stw r29,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r29.u32);
	// stw r25,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r25.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x838f5f34
	goto loc_838F5F34;
loc_838F5F28:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x838f5f34
	if (!cr6.eq) goto loc_838F5F34;
loc_838F5F30:
	// li r27,-7
	ctx.r27.s64 = -7;
loc_838F5F34:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F5F40;
	sub_838F2288(ctx, base);
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x838f5fbc
	if (!cr6.eq) goto loc_838F5FBC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// beq cr6,0x838f5fbc
	if (cr6.eq) goto loc_838F5FBC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26888
	ctx.r4.s64 = ctx.r11.s64 + 26888;
	// bl 0x838e5f50
	ctx.lr = 0x838F5F64;
	sub_838E5F50(ctx, base);
	// stw r22,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r22.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F5F74:
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,-4
	ctx.r27.s64 = -4;
	// bl 0x838e6c50
	ctx.lr = 0x838F5F84;
	sub_838E6C50(ctx, base);
	// stw r22,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r22.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F5F94:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x838e6c50
	ctx.lr = 0x838F5F9C;
	sub_838E6C50(ctx, base);
	// li r27,-7
	ctx.r27.s64 = -7;
	// stw r22,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r22.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F5FB0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bne cr6,0x838f5fbc
	if (!cr6.eq) goto loc_838F5FBC;
	// li r27,-7
	ctx.r27.s64 = -7;
loc_838F5FBC:
	// stw r22,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r22.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F5FCC:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(ctx.r27.s32, 1, xer);
	// bne cr6,0x838f5fd8
	if (!cr6.eq) goto loc_838F5FD8;
	// li r27,-7
	ctx.r27.s64 = -7;
loc_838F5FD8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838F5FE4:
	// li r4,-4
	ctx.r4.s64 = -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6c50
	ctx.lr = 0x838F5FF0;
	sub_838E6C50(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F5FFC"))) PPC_WEAK_FUNC(sub_838F5FFC);
PPC_FUNC_IMPL(__imp__sub_838F5FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F6000"))) PPC_WEAK_FUNC(sub_838F6000);
PPC_FUNC_IMPL(__imp__sub_838F6000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x838F6008;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1564);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838f6140
	if (!cr6.eq) goto loc_838F6140;
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r7,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r7.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r23,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r23.u32);
loc_838F6044:
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f6098
	if (!cr6.eq) goto loc_838F6098;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f6060
	if (!cr6.gt) goto loc_838F6060;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_838F6060:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// beq cr6,0x838f6090
	if (cr6.eq) goto loc_838F6090;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F6080;
	sub_838E9728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F6090;
	sub_838E63A8(ctx, base);
loc_838F6090:
	// stw r27,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r27.u32);
	// stw r29,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r29.u32);
loc_838F6098:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f60c4
	if (!cr6.eq) goto loc_838F60C4;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bge cr6,0x838f60b8
	if (!cr6.lt) goto loc_838F60B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838F60B8:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_838F60C4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x838f60d8
	if (!cr6.gt) goto loc_838F60D8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x838f60e8
	goto loc_838F60E8;
loc_838F60D8:
	// subfic r11,r24,0
	xer.ca = ctx.r24.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r24.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
loc_838F60E8:
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x8255b728
	ctx.lr = 0x838F60F0;
	sub_8255B728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f6114
	if (!cr6.eq) goto loc_838F6114;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x838f6044
	if (cr6.gt) goto loc_838F6044;
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x838f6044
	if (cr6.gt) goto loc_838F6044;
loc_838F6114:
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r23,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r23.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x838e6c50
	ctx.lr = 0x838F6134;
	sub_838E6C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838F6140:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r10,r11,26912
	ctx.r10.s64 = ctx.r11.s64 + 26912;
	// stw r10,1436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1436, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F6158"))) PPC_WEAK_FUNC(sub_838F6158);
PPC_FUNC_IMPL(__imp__sub_838F6158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838F6160;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lbz r11,1623(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1623);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r31,1536(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// li r28,0
	ctx.r28.s64 = 0;
	// lbz r7,1613(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1613);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f619c
	if (!cr6.eq) goto loc_838F619C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,29112
	ctx.r11.s64 = ctx.r11.s64 + 29112;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x838e5e88
	ctx.lr = 0x838F619C;
	sub_838E5E88(ctx, base);
loc_838F619C:
	// lwz r9,1584(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f61e0
	if (cr6.eq) goto loc_838F61E0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838f61bc
	if (cr6.lt) goto loc_838F61BC;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// b 0x838f61c8
	goto loc_838F61C8;
loc_838F61BC:
	// mullw r10,r31,r11
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F61C8:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x838f61e0
	if (cr6.eq) goto loc_838F61E0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,29112
	ctx.r11.s64 = ctx.r11.s64 + 29112;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// bl 0x838e5e88
	ctx.lr = 0x838F61E0;
	sub_838E5E88(ctx, base);
loc_838F61E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838f61f8
	if (!cr6.eq) goto loc_838F61F8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,29112
	ctx.r11.s64 = ctx.r11.s64 + 29112;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x838e5e88
	ctx.lr = 0x838F61F8;
	sub_838E5E88(ctx, base);
loc_838F61F8:
	// mullw r9,r31,r11
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// clrlwi r29,r9,29
	ctx.r29.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f6250
	if (cr6.eq) goto loc_838F6250;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838f621c
	if (cr6.lt) goto loc_838F621C;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// b 0x838f6224
	goto loc_838F6224;
loc_838F621C:
	// addi r10,r9,7
	ctx.r10.s64 = ctx.r9.s64 + 7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F6224:
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r8,1404(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// rlwinm r8,r8,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lbz r28,-1(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// li r10,255
	ctx.r10.s64 = 255;
	// beq cr6,0x838f624c
	if (cr6.eq) goto loc_838F624C;
	// slw r29,r10,r29
	ctx.r29.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// b 0x838f6250
	goto loc_838F6250;
loc_838F624C:
	// sraw r29,r10,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r29.s64 = ctx.r10.s32 >> temp.u32;
loc_838F6250:
	// lbz r10,1612(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1612);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f6724
	if (cr6.eq) goto loc_838F6724;
	// lwz r10,1404(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838f6724
	if (cr6.eq) goto loc_838F6724;
	// cmplwi cr6,r7,6
	cr6.compare<uint32_t>(ctx.r7.u32, 6, xer);
	// bge cr6,0x838f6724
	if (!cr6.lt) goto loc_838F6724;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838f6290
	if (cr6.eq) goto loc_838F6290;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x838f6724
	if (!cr6.eq) goto loc_838F6724;
	// clrlwi r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838f6724
	if (cr6.eq) goto loc_838F6724;
loc_838F6290:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// clrlwi r8,r7,31
	ctx.r8.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// subfic r9,r9,3
	xer.ca = ctx.r9.u32 <= 3;
	ctx.r9.s64 = 3 - ctx.r9.s64;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// clrlwi r9,r8,29
	ctx.r9.u64 = ctx.r8.u32 & 0x7;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// ble cr6,0x838f6768
	if (!cr6.gt) goto loc_838F6768;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bge cr6,0x838f6460
	if (!cr6.lt) goto loc_838F6460;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r3,r10,0,15,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// divwu r8,r9,r11
	ctx.r8.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// twllei r11,0
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f636c
	if (cr6.eq) goto loc_838F636C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838f6324
	if (cr6.eq) goto loc_838F6324;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f62e8
	if (!cr6.eq) goto loc_838F62E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x838f62fc
	goto loc_838F62FC;
loc_838F62E8:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_838F62FC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r7,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,11008
	ctx.r11.s64 = ctx.r10.s64 + 11008;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,144
	ctx.r5.s64 = ctx.r11.s64 + 144;
	// lwzx r10,r7,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// b 0x838f640c
	goto loc_838F640C;
loc_838F6324:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f6344
	if (!cr6.eq) goto loc_838F6344;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r9,11008
	ctx.r3.s64 = ctx.r9.s64 + 11008;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x838f63fc
	goto loc_838F63FC;
loc_838F6344:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r9,11008
	ctx.r3.s64 = ctx.r9.s64 + 11008;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x838f63fc
	goto loc_838F63FC;
loc_838F636C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x838f63c4
	if (cr6.eq) goto loc_838F63C4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f6384
	if (!cr6.eq) goto loc_838F6384;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x838f6398
	goto loc_838F6398;
loc_838F6384:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_838F6398:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,-32210
	ctx.r5.s64 = -2110914560;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r5,11008
	ctx.r11.s64 = ctx.r5.s64 + 11008;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x838f640c
	goto loc_838F640C;
loc_838F63C4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f63d4
	if (!cr6.eq) goto loc_838F63D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x838f63e8
	goto loc_838F63E8;
loc_838F63D4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_838F63E8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,11008
	ctx.r10.s64 = ctx.r9.s64 + 11008;
	// addi r3,r10,72
	ctx.r3.s64 = ctx.r10.s64 + 72;
loc_838F63FC:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
loc_838F640C:
	// subf r9,r6,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_838F6410:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rotlwi r10,r10,24
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 24);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f644c
	if (cr6.eq) goto loc_838F644C;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x838f6444
	if (cr6.eq) goto loc_838F6444;
	// lbzx r7,r9,r6
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// and r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 & ctx.r11.u64;
	// andc r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// or r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	// b 0x838f6448
	goto loc_838F6448;
loc_838F6444:
	// lbzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
loc_838F6448:
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
loc_838F644C:
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// ble cr6,0x838f6748
	if (!cr6.gt) goto loc_838F6748;
	// subf r31,r8,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r8.s64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// b 0x838f6410
	goto loc_838F6410;
loc_838F6460:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f6478
	if (cr6.eq) goto loc_838F6478;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,29112
	ctx.r4.s64 = ctx.r11.s64 + 29112;
	// bl 0x838e5e88
	ctx.lr = 0x838F6478;
	sub_838E5E88(ctx, base);
loc_838F6478:
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r31,r10
	ctx.r9.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// subf r31,r11,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r28,r11,r6
	ctx.r28.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r29,r11,r4
	ctx.r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// beq cr6,0x838f64bc
	if (cr6.eq) goto loc_838F64BC;
	// subfic r11,r7,6
	xer.ca = ctx.r7.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r7.s64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// slw r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// mullw r27,r6,r10
	ctx.r27.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// ble cr6,0x838f64c0
	if (!cr6.gt) goto loc_838F64C0;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x838f64c0
	goto loc_838F64C0;
loc_838F64BC:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_838F64C0:
	// subfic r11,r7,7
	xer.ca = ctx.r7.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r7.s64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// mullw r30,r8,r10
	ctx.r30.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x838f66f8
	if (cr6.eq) goto loc_838F66F8;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// beq cr6,0x838f66bc
	if (cr6.eq) goto loc_838F66BC;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// beq cr6,0x838f6670
	if (cr6.eq) goto loc_838F6670;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(ctx.r27.u32, 16, xer);
	// bge cr6,0x838f6620
	if (!cr6.lt) goto loc_838F6620;
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f6620
	if (!cr6.eq) goto loc_838F6620;
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f6620
	if (!cr6.eq) goto loc_838F6620;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f6620
	if (!cr6.eq) goto loc_838F6620;
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f6620
	if (!cr6.eq) goto loc_838F6620;
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f65b8
	if (!cr6.eq) goto loc_838F65B8;
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f65b8
	if (!cr6.eq) goto loc_838F65B8;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f65b8
	if (!cr6.eq) goto loc_838F65B8;
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f65b8
	if (!cr6.eq) goto loc_838F65B8;
	// subf r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
loc_838F6558:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_838F655C:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic. r11,r11,-4
	xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x838f655c
	if (!cr0.eq) goto loc_838F655C;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x838f6768
	if (!cr6.gt) goto loc_838F6768;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// ble cr6,0x838f6558
	if (!cr6.gt) goto loc_838F6558;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r10,r28,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r28.s64;
loc_838F659C:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x838f659c
	if (!cr0.eq) goto loc_838F659C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F65B8:
	// subf r11,r27,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r27.s64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_838F65C0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_838F65C4:
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addic. r11,r11,-2
	xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// sth r9,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bne 0x838f65c4
	if (!cr0.eq) goto loc_838F65C4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x838f6768
	if (!cr6.gt) goto loc_838F6768;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// ble cr6,0x838f65c0
	if (!cr6.gt) goto loc_838F65C0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r10,r28,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r28.s64;
loc_838F6604:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x838f6604
	if (!cr0.eq) goto loc_838F6604;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F6620:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F6630;
	sub_831CE980(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// ble cr6,0x838f6768
	if (!cr6.gt) goto loc_838F6768;
loc_838F6638:
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, xer);
	// ble cr6,0x838f6650
	if (!cr6.gt) goto loc_838F6650;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_838F6650:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F6660;
	sub_831CE980(ctx, base);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bgt cr6,0x838f6638
	if (cr6.gt) goto loc_838F6638;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F6670:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r10,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stb r9,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r9.u8);
	// ble cr6,0x838f6768
	if (!cr6.gt) goto loc_838F6768;
loc_838F6690:
	// lbzux r11,r29,r30
	ea = ctx.r29.u32 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stbux r11,r28,r30
	ea = ctx.r28.u32 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r10,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// stb r9,2(r28)
	PPC_STORE_U8(ctx.r28.u32 + 2, ctx.r9.u8);
	// bgt cr6,0x838f6690
	if (cr6.gt) goto loc_838F6690;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F66BC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// lbz r10,1(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// stb r10,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r10.u8);
	// ble cr6,0x838f6768
	if (!cr6.gt) goto loc_838F6768;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bgt cr6,0x838f66bc
	if (cr6.gt) goto loc_838F66BC;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F66F8:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r11,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// ble cr6,0x838f6768
	if (!cr6.gt) goto loc_838F6768;
loc_838F6708:
	// lbzux r11,r29,r30
	ea = ctx.r29.u32 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// subf r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stbux r11,r28,r30
	ea = ctx.r28.u32 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
	// bgt cr6,0x838f6708
	if (cr6.gt) goto loc_838F6708;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F6724:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838f6738
	if (cr6.lt) goto loc_838F6738;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r5,r11,r31
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// b 0x838f6740
	goto loc_838F6740;
loc_838F6738:
	// addi r11,r9,7
	ctx.r11.s64 = ctx.r9.s64 + 7;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F6740:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F6748;
	sub_831CE980(ctx, base);
loc_838F6748:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f6768
	if (cr6.eq) goto loc_838F6768;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// andc r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// and r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 & ctx.r29.u64;
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
loc_838F6768:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F6770"))) PPC_WEAK_FUNC(sub_838F6770);
PPC_FUNC_IMPL(__imp__sub_838F6770) {
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
	ctx.lr = 0x838F6778;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f6b68
	if (cr6.eq) goto loc_838F6B68;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f6b68
	if (cr6.eq) goto loc_838F6B68;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// addi r7,r9,10980
	ctx.r7.s64 = ctx.r9.s64 + 10980;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lwzx r25,r8,r7
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mullw r26,r11,r25
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// addi r9,r26,-1
	ctx.r9.s64 = ctx.r26.s64 + -1;
	// beq cr6,0x838f6a44
	if (cr6.eq) goto loc_838F6A44;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x838f693c
	if (cr6.eq) goto loc_838F693C;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x838f683c
	if (cr6.eq) goto loc_838F683C;
	// rlwinm r31,r10,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// add r28,r10,r4
	ctx.r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r29,r9,r4
	ctx.r29.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f6b34
	if (cr6.eq) goto loc_838F6B34;
loc_838F67EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x838F67FC;
	sub_831CE980(ctx, base);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// ble cr6,0x838f6824
	if (!cr6.gt) goto loc_838F6824;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_838F6808:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F6818;
	sub_831CE980(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// bne 0x838f6808
	if (!cr0.eq) goto loc_838F6808;
loc_838F6824:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// subf r28,r31,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x838f67ec
	if (cr6.lt) goto loc_838F67EC;
	// b 0x838f6b34
	goto loc_838F6B34;
loc_838F683C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r6,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838f6884
	if (cr6.eq) goto loc_838F6884;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r7,r10,-1
	xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r7.s64 = -1 - ctx.r10.s64;
	// subfic r6,r8,-1
	xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r6.s64 = -1 - ctx.r8.s64;
	// rlwinm r8,r7,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// rlwinm r10,r6,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,-4
	ctx.r4.s64 = -4;
	// b 0x838f68a8
	goto loc_838F68A8;
loc_838F6884:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r8,r26,-1
	ctx.r8.s64 = ctx.r26.s64 + -1;
	// rlwinm r7,r10,2,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// rlwinm r6,r8,2,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x4;
	// subfic r8,r7,4
	xer.ca = ctx.r7.u32 <= 4;
	ctx.r8.s64 = 4 - ctx.r7.s64;
	// subfic r10,r6,4
	xer.ca = ctx.r6.u32 <= 4;
	ctx.r10.s64 = 4 - ctx.r6.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
loc_838F68A8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f6b34
	if (cr6.eq) goto loc_838F6B34;
	// li r5,3855
	ctx.r5.s64 = 3855;
loc_838F68B8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// srw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// ble cr6,0x838f6910
	if (!cr6.gt) goto loc_838F6910;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
loc_838F68D8:
	// subfic r29,r10,4
	xer.ca = ctx.r10.u32 <= 4;
	ctx.r29.s64 = 4 - ctx.r10.s64;
	// lbz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r28,r11,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r29,r5,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r29.s64 = ctx.r5.s32 >> temp.u32;
	// and r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ctx.r30.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r30.u8);
	// bne cr6,0x838f6908
	if (!cr6.eq) goto loc_838F6908;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x838f690c
	goto loc_838F690C;
loc_838F6908:
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
loc_838F690C:
	// bdnz 0x838f68d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F68D8;
loc_838F6910:
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x838f6924
	if (!cr6.eq) goto loc_838F6924;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x838f6928
	goto loc_838F6928;
loc_838F6924:
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
loc_838F6928:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x838f68b8
	if (cr6.lt) goto loc_838F68B8;
	// b 0x838f6b34
	goto loc_838F6B34;
loc_838F693C:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r6,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838f6984
	if (cr6.eq) goto loc_838F6984;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r26,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r10,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// rlwinm r10,r7,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x6;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// b 0x838f69b0
	goto loc_838F69B0;
loc_838F6984:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r26,-1
	ctx.r9.s64 = ctx.r26.s64 + -1;
	// clrlwi r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r6,r9,30
	ctx.r6.u64 = ctx.r9.u32 & 0x3;
	// subfic r5,r7,3
	xer.ca = ctx.r7.u32 <= 3;
	ctx.r5.s64 = 3 - ctx.r7.s64;
	// subfic r4,r6,3
	xer.ca = ctx.r6.u32 <= 3;
	ctx.r4.s64 = 3 - ctx.r6.s64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
loc_838F69B0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f6b34
	if (cr6.eq) goto loc_838F6B34;
	// li r5,16191
	ctx.r5.s64 = 16191;
loc_838F69C0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// srw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// ble cr6,0x838f6a18
	if (!cr6.gt) goto loc_838F6A18;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
loc_838F69E0:
	// subfic r29,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r29.s64 = 6 - ctx.r10.s64;
	// lbz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// slw r28,r11,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r29,r5,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r29.s64 = ctx.r5.s32 >> temp.u32;
	// and r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ctx.r30.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r30.u8);
	// bne cr6,0x838f6a10
	if (!cr6.eq) goto loc_838F6A10;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x838f6a14
	goto loc_838F6A14;
loc_838F6A10:
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
loc_838F6A14:
	// bdnz 0x838f69e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F69E0;
loc_838F6A18:
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// bne cr6,0x838f6a2c
	if (!cr6.eq) goto loc_838F6A2C;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x838f6a30
	goto loc_838F6A30;
loc_838F6A2C:
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
loc_838F6A30:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x838f69c0
	if (cr6.lt) goto loc_838F69C0;
	// b 0x838f6b34
	goto loc_838F6B34;
loc_838F6A44:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r8,r6,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x838f6a84
	if (cr6.eq) goto loc_838F6A84;
	// addi r7,r26,-1
	ctx.r7.s64 = ctx.r26.s64 + -1;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x838f6aa4
	goto loc_838F6AA4;
loc_838F6A84:
	// addi r8,r26,-1
	ctx.r8.s64 = ctx.r26.s64 + -1;
	// clrlwi r7,r10,29
	ctx.r7.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// subfic r8,r7,7
	xer.ca = ctx.r7.u32 <= 7;
	ctx.r8.s64 = 7 - ctx.r7.s64;
	// subfic r10,r6,7
	xer.ca = ctx.r6.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r6.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,1
	ctx.r4.s64 = 1;
loc_838F6AA4:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f6b34
	if (cr6.eq) goto loc_838F6B34;
	// li r5,32639
	ctx.r5.s64 = 32639;
loc_838F6AB4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// srw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// ble cr6,0x838f6b0c
	if (!cr6.gt) goto loc_838F6B0C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
loc_838F6AD4:
	// subfic r29,r10,7
	xer.ca = ctx.r10.u32 <= 7;
	ctx.r29.s64 = 7 - ctx.r10.s64;
	// lbz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r28,r11,r10
	ctx.r28.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// sraw r29,r5,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r29.s64 = ctx.r5.s32 >> temp.u32;
	// and r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 & ctx.r30.u64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// stb r30,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r30.u8);
	// bne cr6,0x838f6b04
	if (!cr6.eq) goto loc_838F6B04;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x838f6b08
	goto loc_838F6B08;
loc_838F6B04:
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
loc_838F6B08:
	// bdnz 0x838f6ad4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F6AD4;
loc_838F6B0C:
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x838f6b20
	if (!cr6.eq) goto loc_838F6B20;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x838f6b24
	goto loc_838F6B24;
loc_838F6B20:
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
loc_838F6B24:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x838f6ab4
	if (cr6.lt) goto loc_838F6AB4;
loc_838F6B34:
	// lbz r11,11(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 11);
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838f6b58
	if (cr6.lt) goto loc_838F6B58;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838F6B58:
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
loc_838F6B68:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F6B70"))) PPC_WEAK_FUNC(sub_838F6B70);
PPC_FUNC_IMPL(__imp__sub_838F6B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r7,r10,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_838F6BA0:
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stbu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x838f6ba0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F6BA0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F6BC0"))) PPC_WEAK_FUNC(sub_838F6BC0);
PPC_FUNC_IMPL(__imp__sub_838F6BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
loc_838F6BD8:
	// lbzx r8,r10,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stbu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x838f6bd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F6BD8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F6BF8"))) PPC_WEAK_FUNC(sub_838F6BF8);
PPC_FUNC_IMPL(__imp__sub_838F6BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lbz r9,11(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// srawi. r9,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// beq 0x838f6c3c
	if (cr0.eq) goto loc_838F6C3C;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838F6C1C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838f6c1c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F6C1C;
loc_838F6C3C:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
loc_838F6C54:
	// lbzx r7,r6,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r4,r5,24
	ctx.r4.u64 = ctx.r5.u32 & 0xFF;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838f6c54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F6C54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F6C84"))) PPC_WEAK_FUNC(sub_838F6C84);
PPC_FUNC_IMPL(__imp__sub_838F6C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F6C88"))) PPC_WEAK_FUNC(sub_838F6C88);
PPC_FUNC_IMPL(__imp__sub_838F6C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x838f6d34
	if (!cr6.lt) goto loc_838F6D34;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838F6CC8:
	// lbzu r7,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r5,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 31;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r31,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 31;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// srawi r30,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r3.s32 >> 31;
	// xor r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r31.u64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// xor r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r30.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r30.s64;
	// bge cr6,0x838f6d10
	if (!cr6.lt) goto loc_838F6D10;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_838F6D10:
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// bge cr6,0x838f6d1c
	if (!cr6.lt) goto loc_838F6D1C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_838F6D1C:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stbu r10,1(r4)
	ea = 1 + ctx.r4.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// bdnz 0x838f6cc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F6CC8;
loc_838F6D34:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F6D40"))) PPC_WEAK_FUNC(sub_838F6D40);
PPC_FUNC_IMPL(__imp__sub_838F6D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F6D48;
	__savegprlr_28(ctx, base);
	// lbz r11,11(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bge cr6,0x838f6d88
	if (!cr6.lt) goto loc_838F6D88;
	// subf r10,r4,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r4.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838F6D68:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bdnz 0x838f6d68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F6D68;
loc_838F6D88:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x838f6e28
	if (!cr6.lt) goto loc_838F6E28;
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r3,r11,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_838F6DB8:
	// lbzu r9,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// lbzu r7,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r4,r11,31
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r29,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 31;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// srawi r28,r30,31
	xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r28.s64 = ctx.r30.s32 >> 31;
	// xor r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// xor r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 ^ ctx.r28.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// subf r4,r28,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r28.s64;
	// bge cr6,0x838f6e04
	if (!cr6.lt) goto loc_838F6E04;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_838F6E04:
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bge cr6,0x838f6e10
	if (!cr6.lt) goto loc_838F6E10;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_838F6E10:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stbu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r31.u32 = ea;
	// bdnz 0x838f6db8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838F6DB8;
loc_838F6E28:
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F6E2C"))) PPC_WEAK_FUNC(sub_838F6E2C);
PPC_FUNC_IMPL(__imp__sub_838F6E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F6E30"))) PPC_WEAK_FUNC(sub_838F6E30);
PPC_FUNC_IMPL(__imp__sub_838F6E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r7,5
	cr6.compare<int32_t>(ctx.r7.s32, 5, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,1964(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1964);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f6ea8
	if (!cr6.eq) goto loc_838F6EA8;
	// lbz r10,1618(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1618);
	// lis r9,-31857
	ctx.r9.s64 = -2087780352;
	// lis r8,-31857
	ctx.r8.s64 = -2087780352;
	// lis r5,-31857
	ctx.r5.s64 = -2087780352;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// addi r9,r9,27504
	ctx.r9.s64 = ctx.r9.s64 + 27504;
	// addi r8,r8,27584
	ctx.r8.s64 = ctx.r8.s64 + 27584;
	// addi r5,r5,27640
	ctx.r5.s64 = ctx.r5.s64 + 27640;
	// stw r9,1964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1964, ctx.r9.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r8,1968(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1968, ctx.r8.u32);
	// stw r5,1972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1972, ctx.r5.u32);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x838f6e9c
	if (!cr6.eq) goto loc_838F6E9C;
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// addi r9,r10,27784
	ctx.r9.s64 = ctx.r10.s64 + 27784;
	// b 0x838f6ea4
	goto loc_838F6EA4;
loc_838F6E9C:
	// lis r10,-31857
	ctx.r10.s64 = -2087780352;
	// addi r9,r10,27968
	ctx.r9.s64 = ctx.r10.s64 + 27968;
loc_838F6EA4:
	// stw r9,1976(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1976, ctx.r9.u32);
loc_838F6EA8:
	// addi r10,r7,490
	ctx.r10.s64 = ctx.r7.s64 + 490;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_838F6EC0"))) PPC_WEAK_FUNC(sub_838F6EC0);
PPC_FUNC_IMPL(__imp__sub_838F6EC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838F6EC4"))) PPC_WEAK_FUNC(sub_838F6EC4);
PPC_FUNC_IMPL(__imp__sub_838F6EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F6EC8"))) PPC_WEAK_FUNC(sub_838F6EC8);
PPC_FUNC_IMPL(__imp__sub_838F6EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F6ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x838eb118
	ctx.lr = 0x838F6EDC;
	sub_838EB118(ctx, base);
	// lbz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f6f48
	if (cr6.eq) goto loc_838F6F48;
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f6f0c
	if (!cr6.eq) goto loc_838F6F0C;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r10.u32);
	// b 0x838f6f10
	goto loc_838F6F10;
loc_838F6F0C:
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_838F6F10:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lbz r10,1613(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// lwz r7,1536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// addi r11,r11,11256
	ctx.r11.s64 = ctx.r11.s64 + 11256;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twllei r11,0
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// divwu r5,r6,r11
	ctx.r5.u32 = PPCDivide(ctx.r6.u32, ctx.r11.u32);
	// stw r5,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r5.u32);
	// b 0x838f6f58
	goto loc_838F6F58;
loc_838F6F48:
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// lwz r7,1536(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// stw r11,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// stw r7,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r7.u32);
loc_838F6F58:
	// lwz r9,1404(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// lbz r11,1618(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1618);
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f6f7c
	if (cr6.eq) goto loc_838F6F7C;
	// lbz r10,1616(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x838f6f7c
	if (!cr6.lt) goto loc_838F6F7C;
	// li r11,8
	ctx.r11.s64 = 8;
loc_838F6F7C:
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838f6ff4
	if (cr6.eq) goto loc_838F6FF4;
	// lbz r10,1615(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838f6fac
	if (!cr6.eq) goto loc_838F6FAC;
	// lhz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r6,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r6,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// b 0x838f6ff4
	goto loc_838F6FF4;
loc_838F6FAC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f6fd4
	if (!cr6.eq) goto loc_838F6FD4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bge cr6,0x838f6fc0
	if (!cr6.lt) goto loc_838F6FC0;
	// li r11,8
	ctx.r11.s64 = 8;
loc_838F6FC0:
	// lhz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f6ff4
	if (cr6.eq) goto loc_838F6FF4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x838f6ff4
	goto loc_838F6FF4;
loc_838F6FD4:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x838f6ff4
	if (!cr6.eq) goto loc_838F6FF4;
	// lhz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f6ff4
	if (cr6.eq) goto loc_838F6FF4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
loc_838F6FF4:
	// rlwinm r10,r9,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7024
	if (cr6.eq) goto loc_838F7024;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838f701c
	if (cr6.eq) goto loc_838F701C;
	// lbz r10,1616(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x838f7024
	if (!cr6.lt) goto loc_838F7024;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x838f7024
	goto loc_838F7024;
loc_838F701C:
	// rlwinm r10,r9,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r10,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r10.u32);
loc_838F7024:
	// lwz r8,1404(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r9,r8,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f7078
	if (cr6.eq) goto loc_838F7078;
	// lbz r10,1615(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f7058
	if (!cr6.eq) goto loc_838F7058;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bgt cr6,0x838f7050
	if (cr6.gt) goto loc_838F7050;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x838f7078
	goto loc_838F7078;
loc_838F7050:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x838f7078
	goto loc_838F7078;
loc_838F7058:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x838f7068
	if (cr6.eq) goto loc_838F7068;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838f7078
	if (!cr6.eq) goto loc_838F7078;
loc_838F7068:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// ble cr6,0x838f7078
	if (!cr6.gt) goto loc_838F7078;
	// li r11,64
	ctx.r11.s64 = 64;
loc_838F7078:
	// rlwinm r10,r8,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f70f0
	if (cr6.eq) goto loc_838F70F0;
	// lhz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f709c
	if (cr6.eq) goto loc_838F709C;
	// rlwinm r10,r8,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f70e0
	if (!cr6.eq) goto loc_838F70E0;
loc_838F709C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f70e0
	if (!cr6.eq) goto loc_838F70E0;
	// lbz r10,1615(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x838f70e0
	if (cr6.eq) goto loc_838F70E0;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bgt cr6,0x838f70d0
	if (cr6.gt) goto loc_838F70D0;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x838f70c8
	if (!cr6.eq) goto loc_838F70C8;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x838f70f0
	goto loc_838F70F0;
loc_838F70C8:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x838f70f0
	goto loc_838F70F0;
loc_838F70D0:
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x838f70ec
	if (cr6.eq) goto loc_838F70EC;
	// li r11,48
	ctx.r11.s64 = 48;
	// b 0x838f70f0
	goto loc_838F70F0;
loc_838F70E0:
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// li r11,32
	ctx.r11.s64 = 32;
	// ble cr6,0x838f70f0
	if (!cr6.gt) goto loc_838F70F0;
loc_838F70EC:
	// li r11,64
	ctx.r11.s64 = 64;
loc_838F70F0:
	// rlwinm r10,r8,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7114
	if (cr6.eq) goto loc_838F7114;
	// lbz r10,1393(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1393);
	// lbz r9,1392(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1392);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x838f7114
	if (!cr6.gt) goto loc_838F7114;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_838F7114:
	// li r29,0
	ctx.r29.s64 = 0;
	// stb r11,1622(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1622, ctx.r11.u8);
	// addi r9,r7,7
	ctx.r9.s64 = ctx.r7.s64 + 7;
	// stb r29,1623(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1623, ctx.r29.u8);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// rlwinm r10,r9,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// blt cr6,0x838f713c
	if (cr6.lt) goto loc_838F713C;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// b 0x838f7148
	goto loc_838F7148;
loc_838F713C:
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F7148:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lwz r9,1940(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1940);
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// ble cr6,0x838f71e4
	if (!cr6.gt) goto loc_838F71E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1884(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// bl 0x838f2288
	ctx.lr = 0x838F7174;
	sub_838F2288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1960);
	// bl 0x838f2288
	ctx.lr = 0x838F7180;
	sub_838F2288(ctx, base);
	// lbz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1612);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f719c
	if (cr6.eq) goto loc_838F719C;
	// bl 0x838f2238
	ctx.lr = 0x838F7198;
	sub_838F2238(ctx, base);
	// b 0x838f71a0
	goto loc_838F71A0;
loc_838F719C:
	// bl 0x838f2120
	ctx.lr = 0x838F71A0;
	sub_838F2120(ctx, base);
loc_838F71A0:
	// stw r3,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2120
	ctx.lr = 0x838F71B0;
	sub_838F2120(ctx, base);
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// stw r30,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r30.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stw r3,1960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1960, ctx.r3.u32);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// stw r9,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r9.u32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r7.u32);
loc_838F71E4:
	// lwz r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// li r10,-2
	ctx.r10.s64 = -2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x838f7204
	if (!cr6.gt) goto loc_838F7204;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,29240
	ctx.r4.s64 = ctx.r11.s64 + 29240;
	// bl 0x838e5e88
	ctx.lr = 0x838F7204;
	sub_838E5E88(ctx, base);
loc_838F7204:
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lwz r3,1568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831cdcf0
	ctx.lr = 0x838F7214;
	sub_831CDCF0(ctx, base);
	// lwz r4,1944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f7230
	if (cr6.eq) goto loc_838F7230;
	// stw r29,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r29.u32);
	// bl 0x838f2288
	ctx.lr = 0x838F7230;
	sub_838F2288(ctx, base);
loc_838F7230:
	// lis r4,18756
	ctx.r4.s64 = 1229193216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,16724
	ctx.r4.u64 = ctx.r4.u64 | 16724;
	// bl 0x838f5b78
	ctx.lr = 0x838F7240;
	sub_838F5B78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f7254
	if (cr6.eq) goto loc_838F7254;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// bl 0x838e5e88
	ctx.lr = 0x838F7254;
	sub_838E5E88(ctx, base);
loc_838F7254:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F7268"))) PPC_WEAK_FUNC(sub_838F7268);
PPC_FUNC_IMPL(__imp__sub_838F7268) {
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
	// li r11,33
	ctx.r11.s64 = 33;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F7294;
	sub_838E9728(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// ble cr6,0x838f72dc
	if (!cr6.gt) goto loc_838F72DC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,26616
	ctx.r4.s64 = ctx.r11.s64 + 26616;
	// bl 0x838e5e88
	ctx.lr = 0x838F72DC;
	sub_838E5E88(ctx, base);
loc_838F72DC:
	// lbz r11,85(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwimi r11,r10,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwimi r9,r7,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r9,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stw r8,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r8.u32);
	// bl 0x838e6368
	ctx.lr = 0x838F7304;
	sub_838E6368(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F7314;
	sub_838E63A8(ctx, base);
	// lwz r10,1564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// li r9,1
	ctx.r9.s64 = 1;
loc_838F731C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x838f7374
	if (cr6.lt) goto loc_838F7374;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(ctx.r11.s32, 122, xer);
	// bgt cr6,0x838f7374
	if (cr6.gt) goto loc_838F7374;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(ctx.r11.s32, 90, xer);
	// ble cr6,0x838f7340
	if (!cr6.gt) goto loc_838F7340;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x838f7374
	if (cr6.lt) goto loc_838F7374;
loc_838F7340:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// ble cr6,0x838f731c
	if (!cr6.gt) goto loc_838F731C;
	// li r11,65
	ctx.r11.s64 = 65;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r11.u32);
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
loc_838F7374:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26616
	ctx.r11.s64 = ctx.r11.s64 + 26616;
	// addi r4,r11,2384
	ctx.r4.s64 = ctx.r11.s64 + 2384;
	// bl 0x838e5f10
	ctx.lr = 0x838F7388;
	sub_838E5F10(ctx, base);
}

__attribute__((alias("__imp__sub_838F7388"))) PPC_WEAK_FUNC(sub_838F7388);
PPC_FUNC_IMPL(__imp__sub_838F7388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F7390;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838f73e8
	if (cr6.eq) goto loc_838F73E8;
loc_838F73A4:
	// li r31,1024
	ctx.r31.s64 = 1024;
	// cmplwi cr6,r30,1024
	cr6.compare<uint32_t>(ctx.r30.u32, 1024, xer);
	// bge cr6,0x838f73b4
	if (!cr6.lt) goto loc_838F73B4;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_838F73B4:
	// subf r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f73e0
	if (cr6.eq) goto loc_838F73E0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F73D0;
	sub_838E9728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F73E0;
	sub_838E63A8(ctx, base);
loc_838F73E0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x838f73a4
	if (!cr6.eq) goto loc_838F73A4;
loc_838F73E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f5aa8
	ctx.lr = 0x838F73F0;
	sub_838F5AA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f744c
	if (cr6.eq) goto loc_838F744C;
	// lwz r11,1564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1564);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// lwz r11,1400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1400);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7418
	if (cr6.eq) goto loc_838F7418;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r11,r10,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// b 0x838f741c
	goto loc_838F741C;
loc_838F7418:
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
loc_838F741C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x838f7444
	if (cr6.eq) goto loc_838F7444;
	// addi r11,r11,26760
	ctx.r11.s64 = ctx.r11.s64 + 26760;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x838e5e38
	ctx.lr = 0x838F7438;
	sub_838E5E38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F7444:
	// addi r4,r11,26760
	ctx.r4.s64 = ctx.r11.s64 + 26760;
	// bl 0x838e5f10
	ctx.lr = 0x838F744C;
	sub_838E5F10(ctx, base);
loc_838F744C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F7458"))) PPC_WEAK_FUNC(sub_838F7458);
PPC_FUNC_IMPL(__imp__sub_838F7458) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7494
	if (cr6.eq) goto loc_838F7494;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,26616
	ctx.r11.s64 = ctx.r11.s64 + 26616;
	// addi r4,r11,316
	ctx.r4.s64 = ctx.r11.s64 + 316;
	// bl 0x838e5f10
	ctx.lr = 0x838F7494;
	sub_838E5F10(ctx, base);
loc_838F7494:
	// cmplwi cr6,r5,13
	cr6.compare<uint32_t>(ctx.r5.u32, 13, xer);
	// beq cr6,0x838f74ac
	if (cr6.eq) goto loc_838F74AC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,26616
	ctx.r11.s64 = ctx.r11.s64 + 26616;
	// addi r4,r11,332
	ctx.r4.s64 = ctx.r11.s64 + 332;
	// bl 0x838e5f10
	ctx.lr = 0x838F74AC;
	sub_838E5F10(ctx, base);
loc_838F74AC:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r5,13
	ctx.r5.s64 = 13;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x838e9728
	ctx.lr = 0x838F74C0;
	sub_838E9728(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F74D0;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F74DC;
	sub_838F7388(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lbz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// ori r11,r10,65535
	ctx.r11.u64 = ctx.r10.u64 | 65535;
	// lbz r7,98(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,99(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// lbz r10,97(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f7524
	if (!cr6.gt) goto loc_838F7524;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26616
	ctx.r4.s64 = ctx.r11.s64 + 26616;
	// bl 0x838e5e88
	ctx.lr = 0x838F7524;
	sub_838E5E88(ctx, base);
loc_838F7524:
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbz r7,101(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,102(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// lbz r4,103(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// ble cr6,0x838f7568
	if (!cr6.gt) goto loc_838F7568;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26616
	ctx.r4.s64 = ctx.r11.s64 + 26616;
	// bl 0x838e5e88
	ctx.lr = 0x838F7568;
	sub_838E5E88(ctx, base);
loc_838F7568:
	// lbz r8,105(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// lbz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// lbz r10,106(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r4,107(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// stw r5,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r5.u32);
	// stw r6,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r6.u32);
	// stb r8,1615(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1615, ctx.r8.u8);
	// stb r7,1616(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1616, ctx.r7.u8);
	// stb r10,1900(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1900, ctx.r10.u8);
	// stb r4,1868(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1868, ctx.r4.u8);
	// stb r3,1612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1612, ctx.r3.u8);
	// beq cr6,0x838f75cc
	if (cr6.eq) goto loc_838F75CC;
	// cmplwi cr6,r8,4
	cr6.compare<uint32_t>(ctx.r8.u32, 4, xer);
	// beq cr6,0x838f75c4
	if (cr6.eq) goto loc_838F75C4;
	// cmplwi cr6,r8,6
	cr6.compare<uint32_t>(ctx.r8.u32, 6, xer);
	// beq cr6,0x838f75bc
	if (cr6.eq) goto loc_838F75BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x838f75d0
	goto loc_838F75D0;
loc_838F75BC:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x838f75d0
	goto loc_838F75D0;
loc_838F75C4:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x838f75d0
	goto loc_838F75D0;
loc_838F75CC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_838F75D0:
	// stb r11,1619(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1619, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,1618(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1618, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838f75fc
	if (cr6.lt) goto loc_838F75FC;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// b 0x838f7608
	goto loc_838F7608;
loc_838F75FC:
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_838F7608:
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// bl 0x838f0ec0
	ctx.lr = 0x838F761C;
	sub_838F0EC0(ctx, base);
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

__attribute__((alias("__imp__sub_838F7634"))) PPC_WEAK_FUNC(sub_838F7634);
PPC_FUNC_IMPL(__imp__sub_838F7634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F7638"))) PPC_WEAK_FUNC(sub_838F7638);
PPC_FUNC_IMPL(__imp__sub_838F7638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F7640;
	__savegprlr_26(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f7670
	if (!cr6.eq) goto loc_838F7670;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27084
	ctx.r11.s64 = ctx.r11.s64 + 27084;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bl 0x838e5f10
	ctx.lr = 0x838F7670;
	sub_838E5F10(ctx, base);
loc_838F7670:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7690
	if (cr6.eq) goto loc_838F7690;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27084
	ctx.r11.s64 = ctx.r11.s64 + 27084;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x838e5f10
	ctx.lr = 0x838F7690;
	sub_838E5F10(ctx, base);
loc_838F7690:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f76c4
	if (cr6.eq) goto loc_838F76C4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F76A8;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27084
	ctx.r11.s64 = ctx.r11.s64 + 27084;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x838e5f50
	ctx.lr = 0x838F76BC;
	sub_838E5F50(ctx, base);
loc_838F76BC:
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F76C4:
	// lbz r9,1615(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f7704
	if (!cr6.eq) goto loc_838F7704;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F76E8;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27084
	ctx.r11.s64 = ctx.r11.s64 + 27084;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x838e5f50
	ctx.lr = 0x838F76FC;
	sub_838E5F50(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F7704:
	// cmplwi cr6,r27,768
	cr6.compare<uint32_t>(ctx.r27.u32, 768, xer);
	// bgt cr6,0x838f786c
	if (cr6.gt) goto loc_838F786C;
	// lis r11,-21846
	ctx.r11.s64 = -1431699456;
	// ori r10,r11,43691
	ctx.r10.u64 = ctx.r11.u64 | 43691;
	// mulhwu r8,r27,r10
	ctx.r8.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r6,r7,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x838f786c
	if (!cr0.eq) goto loc_838F786C;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// divw r29,r27,r11
	ctx.r29.s32 = PPCDivide(ctx.r27.s32, ctx.r11.s32);
	// bne cr6,0x838f774c
	if (!cr6.eq) goto loc_838F774C;
	// lbz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x838f7750
	goto loc_838F7750;
loc_838F774C:
	// li r11,256
	ctx.r11.s64 = 256;
loc_838F7750:
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// ble cr6,0x838f775c
	if (!cr6.gt) goto loc_838F775C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_838F775C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x838f77b0
	if (!cr6.gt) goto loc_838F77B0;
	// addi r11,r1,98
	ctx.r11.s64 = ctx.r1.s64 + 98;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r30,r11,-3
	ctx.r30.s64 = ctx.r11.s64 + -3;
loc_838F7770:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F7780;
	sub_838E9728(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F7790;
	sub_838E63A8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// stb r10,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r10.u8);
	// stbu r9,3(r30)
	ea = 3 + ctx.r30.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r30.u32 = ea;
	// bne 0x838f7770
	if (!cr0.eq) goto loc_838F7770;
loc_838F77B0:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// subf r4,r11,r27
	ctx.r4.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x838f7388
	ctx.lr = 0x838F77C4;
	sub_838F7388(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f14d8
	ctx.lr = 0x838F77D8;
	sub_838F14D8(ctx, base);
	// lhz r10,1608(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r30,r11,27084
	ctx.r30.s64 = ctx.r11.s64 + 27084;
	// bne cr6,0x838f7804
	if (!cr6.eq) goto loc_838F7804;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838f76bc
	if (cr6.eq) goto loc_838F76BC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7824
	if (cr6.eq) goto loc_838F7824;
loc_838F7804:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// sth r11,1608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1608, ctx.r11.u16);
	// beq cr6,0x838f7818
	if (cr6.eq) goto loc_838F7818;
	// sth r11,22(r26)
	PPC_STORE_U16(ctx.r26.u32 + 22, ctx.r11.u16);
loc_838F7818:
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838F7824;
	sub_838E5F50(ctx, base);
loc_838F7824:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838f76bc
	if (cr6.eq) goto loc_838F76BC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7848
	if (cr6.eq) goto loc_838F7848;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838F7848;
	sub_838E5F50(ctx, base);
loc_838F7848:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f76bc
	if (cr6.eq) goto loc_838F76BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838F7864;
	sub_838E5F50(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F786C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F7878;
	sub_838F7388(ctx, base);
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27084
	ctx.r11.s64 = ctx.r11.s64 + 27084;
	// beq cr6,0x838f78a0
	if (cr6.eq) goto loc_838F78A0;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x838e5f50
	ctx.lr = 0x838F7898;
	sub_838E5F50(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F78A0:
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x838e5f10
	ctx.lr = 0x838F78A8;
	sub_838E5F10(ctx, base);
}

__attribute__((alias("__imp__sub_838F78A8"))) PPC_WEAK_FUNC(sub_838F78A8);
PPC_FUNC_IMPL(__imp__sub_838F78A8) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7920
	if (cr6.eq) goto loc_838F7920;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7920
	if (cr6.eq) goto loc_838F7920;
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,1396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1396, ctx.r11.u32);
	// bl 0x838f7388
	ctx.lr = 0x838F78F0;
	sub_838F7388(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f7908
	if (cr6.eq) goto loc_838F7908;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27120
	ctx.r4.s64 = ctx.r11.s64 + 27120;
	// bl 0x838e5f50
	ctx.lr = 0x838F7908;
	sub_838E5F50(ctx, base);
loc_838F7908:
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
loc_838F7920:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27120
	ctx.r11.s64 = ctx.r11.s64 + 27120;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x838e5f10
	ctx.lr = 0x838F7934;
	sub_838E5F10(ctx, base);
}

__attribute__((alias("__imp__sub_838F7934"))) PPC_WEAK_FUNC(sub_838F7934);
PPC_FUNC_IMPL(__imp__sub_838F7934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F7938"))) PPC_WEAK_FUNC(sub_838F7938);
PPC_FUNC_IMPL(__imp__sub_838F7938) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f7978
	if (!cr6.eq) goto loc_838F7978;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27160
	ctx.r11.s64 = ctx.r11.s64 + 27160;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x838e5f10
	ctx.lr = 0x838F7978;
	sub_838E5F10(ctx, base);
loc_838F7978:
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f79a0
	if (cr6.eq) goto loc_838F79A0;
	// bl 0x838f7388
	ctx.lr = 0x838F7988;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27160
	ctx.r11.s64 = ctx.r11.s64 + 27160;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x838e5f50
	ctx.lr = 0x838F799C;
	sub_838E5F50(ctx, base);
	// b 0x838f7a48
	goto loc_838F7A48;
loc_838F79A0:
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// beq cr6,0x838f79c0
	if (cr6.eq) goto loc_838F79C0;
	// bl 0x838f7388
	ctx.lr = 0x838F79AC;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27160
	ctx.r4.s64 = ctx.r11.s64 + 27160;
	// bl 0x838e5f50
	ctx.lr = 0x838F79BC;
	sub_838E5F50(ctx, base);
	// b 0x838f7a48
	goto loc_838F7A48;
loc_838F79C0:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9728
	ctx.lr = 0x838F79CC;
	sub_838E9728(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F79DC;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F79E8;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f7a48
	if (!cr6.eq) goto loc_838F7A48;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r5,83(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// ori r3,r8,65535
	ctx.r3.u64 = ctx.r8.u64 | 65535;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x838f7a2c
	if (!cr6.gt) goto loc_838F7A2C;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_838F7A2C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r31,1980
	ctx.r4.s64 = ctx.r31.s64 + 1980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e8c48
	ctx.lr = 0x838F7A3C;
	sub_838E8C48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6df8
	ctx.lr = 0x838F7A48;
	sub_838E6DF8(ctx, base);
loc_838F7A48:
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

__attribute__((alias("__imp__sub_838F7A60"))) PPC_WEAK_FUNC(sub_838F7A60);
PPC_FUNC_IMPL(__imp__sub_838F7A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838F7A68;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f7a98
	if (!cr6.eq) goto loc_838F7A98;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27220
	ctx.r11.s64 = ctx.r11.s64 + 27220;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x838e5f10
	ctx.lr = 0x838F7A98;
	sub_838E5F10(ctx, base);
loc_838F7A98:
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f7acc
	if (cr6.eq) goto loc_838F7ACC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F7AB0;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27220
	ctx.r11.s64 = ctx.r11.s64 + 27220;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x838e5f50
	ctx.lr = 0x838F7AC4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F7ACC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f7b0c
	if (cr6.eq) goto loc_838F7B0C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7b0c
	if (cr6.eq) goto loc_838F7B0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F7AF0;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27220
	ctx.r11.s64 = ctx.r11.s64 + 27220;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x838e5f50
	ctx.lr = 0x838F7B04;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F7B0C:
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838f7b24
	if (!cr6.eq) goto loc_838F7B24;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r28,8
	ctx.r28.s64 = 8;
	// b 0x838f7b2c
	goto loc_838F7B2C;
loc_838F7B24:
	// lbz r30,1619(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1619);
	// lbz r28,1616(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
loc_838F7B2C:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x838f7c44
	if (!cr6.eq) goto loc_838F7C44;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bgt cr6,0x838f7c44
	if (cr6.gt) goto loc_838F7C44;
	// stb r28,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r28.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x838e9728
	ctx.lr = 0x838F7B5C;
	sub_838E9728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F7B6C;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F7B78;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f7c64
	if (!cr6.eq) goto loc_838F7C64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f7bb4
	if (cr6.eq) goto loc_838F7BB4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_838F7B90:
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f7bfc
	if (cr6.eq) goto loc_838F7BFC;
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x838f7bfc
	if (cr6.gt) goto loc_838F7BFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// blt cr6,0x838f7b90
	if (cr6.lt) goto loc_838F7B90;
loc_838F7BB4:
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// addi r5,r31,1696
	ctx.r5.s64 = ctx.r31.s64 + 1696;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f7c14
	if (cr6.eq) goto loc_838F7C14;
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,1697(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1697, ctx.r11.u8);
	// stb r10,1698(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1698, ctx.r10.u8);
	// stb r9,1700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1700, ctx.r9.u8);
	// stb r8,1696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1696, ctx.r8.u8);
	// bl 0x838f1610
	ctx.lr = 0x838F7BF4;
	sub_838F1610(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F7BFC:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27220
	ctx.r4.s64 = ctx.r11.s64 + 27220;
	// bl 0x838e5f50
	ctx.lr = 0x838F7C0C;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F7C14:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,1699(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1699, ctx.r11.u8);
	// stb r11,1698(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1698, ctx.r11.u8);
	// stb r10,1700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1700, ctx.r10.u8);
	// stb r11,1696(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1696, ctx.r11.u8);
	// stb r11,1697(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1697, ctx.r11.u8);
	// bl 0x838f1610
	ctx.lr = 0x838F7C3C;
	sub_838F1610(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838F7C44:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27220
	ctx.r11.s64 = ctx.r11.s64 + 27220;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x838e5f50
	ctx.lr = 0x838F7C58;
	sub_838E5F50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F7C64;
	sub_838F7388(ctx, base);
loc_838F7C64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F7C6C"))) PPC_WEAK_FUNC(sub_838F7C6C);
PPC_FUNC_IMPL(__imp__sub_838F7C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F7C70"))) PPC_WEAK_FUNC(sub_838F7C70);
PPC_FUNC_IMPL(__imp__sub_838F7C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F7C78;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f7ca8
	if (!cr6.eq) goto loc_838F7CA8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27284
	ctx.r11.s64 = ctx.r11.s64 + 27284;
	// addi r4,r11,-56
	ctx.r4.s64 = ctx.r11.s64 + -56;
	// bl 0x838e5f10
	ctx.lr = 0x838F7CA8;
	sub_838E5F10(ctx, base);
loc_838F7CA8:
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f7cd4
	if (cr6.eq) goto loc_838F7CD4;
	// bl 0x838f7388
	ctx.lr = 0x838F7CB8;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27284
	ctx.r11.s64 = ctx.r11.s64 + 27284;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x838e5f50
	ctx.lr = 0x838F7CCC;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F7CD4:
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// beq cr6,0x838f7cfc
	if (cr6.eq) goto loc_838F7CFC;
	// bl 0x838f7388
	ctx.lr = 0x838F7CE0;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27284
	ctx.r11.s64 = ctx.r11.s64 + 27284;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e5f50
	ctx.lr = 0x838F7CF4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F7CFC:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9728
	ctx.lr = 0x838F7D08;
	sub_838E9728(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F7D18;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F7D24;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f7fdc
	if (!cr6.eq) goto loc_838F7FDC;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lis r7,32767
	ctx.r7.s64 = 2147418112;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// ori r11,r7,65535
	ctx.r11.u64 = ctx.r7.u64 | 65535;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// ble cr6,0x838f7d6c
	if (!cr6.gt) goto loc_838F7D6C;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_838F7D6C:
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r9,85(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ble cr6,0x838f7da8
	if (!cr6.gt) goto loc_838F7DA8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_838F7DA8:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r9,89(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,90(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// lbz r7,91(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// ble cr6,0x838f7de4
	if (!cr6.gt) goto loc_838F7DE4;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_838F7DE4:
	// lbz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 92);
	// lbz r9,93(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,94(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 94);
	// lbz r7,95(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 95);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// ble cr6,0x838f7e20
	if (!cr6.gt) goto loc_838F7E20;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_838F7E20:
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lbz r9,97(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// lbz r7,99(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ble cr6,0x838f7e5c
	if (!cr6.gt) goto loc_838F7E5C;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_838F7E5C:
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lbz r9,101(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// lbz r7,103(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// ble cr6,0x838f7e98
	if (!cr6.gt) goto loc_838F7E98;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_838F7E98:
	// lbz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lbz r9,105(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,106(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// lbz r28,107(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f7ed0
	if (!cr6.gt) goto loc_838F7ED0;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_838F7ED0:
	// lbz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lbz r8,109(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r27,110(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 110);
	// lbz r26,111(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 111);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// ble cr6,0x838f7f0c
	if (!cr6.gt) goto loc_838F7F0C;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_838F7F0C:
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(ctx.r30.s32, -1, xer);
	// beq cr6,0x838f7fc8
	if (cr6.eq) goto loc_838F7FC8;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x838f7fc8
	if (cr6.eq) goto loc_838F7FC8;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x838f7fc8
	if (cr6.eq) goto loc_838F7FC8;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x838f7fc8
	if (cr6.eq) goto loc_838F7FC8;
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x838f7fc8
	if (cr6.eq) goto loc_838F7FC8;
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x838f7fc8
	if (cr6.eq) goto loc_838F7FC8;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x838f7fc8
	if (cr6.eq) goto loc_838F7FC8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x838f7fc8
	if (cr6.eq) goto loc_838F7FC8;
	// lhz r11,2054(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2054);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f7fdc
	if (!cr6.eq) goto loc_838F7FDC;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f7f9c
	if (cr6.eq) goto loc_838F7F9C;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r10,2054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2054, ctx.r10.u16);
	// bl 0x838e6df8
	ctx.lr = 0x838F7F84;
	sub_838E6DF8(ctx, base);
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,27284
	ctx.r4.s64 = ctx.r9.s64 + 27284;
	// bl 0x838e5f50
	ctx.lr = 0x838F7F94;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F7F9C:
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r10,2054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2054, ctx.r10.u16);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,1980
	ctx.r4.s64 = ctx.r31.s64 + 1980;
	// bl 0x838e9298
	ctx.lr = 0x838F7FB4;
	sub_838E9298(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6df8
	ctx.lr = 0x838F7FC0;
	sub_838E6DF8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F7FC8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27284
	ctx.r11.s64 = ctx.r11.s64 + 27284;
	// addi r4,r11,-16
	ctx.r4.s64 = ctx.r11.s64 + -16;
	// bl 0x838e5f50
	ctx.lr = 0x838F7FDC;
	sub_838E5F50(ctx, base);
loc_838F7FDC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F7FE4"))) PPC_WEAK_FUNC(sub_838F7FE4);
PPC_FUNC_IMPL(__imp__sub_838F7FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F7FE8"))) PPC_WEAK_FUNC(sub_838F7FE8);
PPC_FUNC_IMPL(__imp__sub_838F7FE8) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8028
	if (!cr6.eq) goto loc_838F8028;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27336
	ctx.r11.s64 = ctx.r11.s64 + 27336;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x838e5f10
	ctx.lr = 0x838F8028;
	sub_838E5F10(ctx, base);
loc_838F8028:
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f8050
	if (cr6.eq) goto loc_838F8050;
	// bl 0x838f7388
	ctx.lr = 0x838F8038;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27336
	ctx.r11.s64 = ctx.r11.s64 + 27336;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e5f50
	ctx.lr = 0x838F804C;
	sub_838E5F50(ctx, base);
	// b 0x838f8104
	goto loc_838F8104;
loc_838F8050:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// beq cr6,0x838f8074
	if (cr6.eq) goto loc_838F8074;
	// bl 0x838f7388
	ctx.lr = 0x838F805C;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27336
	ctx.r11.s64 = ctx.r11.s64 + 27336;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x838e5f50
	ctx.lr = 0x838F8070;
	sub_838E5F50(ctx, base);
	// b 0x838f8104
	goto loc_838F8104;
loc_838F8074:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9728
	ctx.lr = 0x838F8080;
	sub_838E9728(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F8090;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F809C;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f8104
	if (!cr6.eq) goto loc_838F8104;
	// lhz r11,2054(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2054);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8104
	if (!cr6.eq) goto loc_838F8104;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f80ec
	if (cr6.eq) goto loc_838F80EC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,2054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2054, ctx.r10.u16);
	// bl 0x838e6df8
	ctx.lr = 0x838F80D8;
	sub_838E6DF8(ctx, base);
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,27336
	ctx.r4.s64 = ctx.r9.s64 + 27336;
	// bl 0x838e5f50
	ctx.lr = 0x838F80E8;
	sub_838E5F50(ctx, base);
	// b 0x838f8104
	goto loc_838F8104;
loc_838F80EC:
	// addi r4,r31,1980
	ctx.r4.s64 = ctx.r31.s64 + 1980;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x838e9350
	ctx.lr = 0x838F80F8;
	sub_838E9350(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6df8
	ctx.lr = 0x838F8104;
	sub_838E6DF8(ctx, base);
loc_838F8104:
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

__attribute__((alias("__imp__sub_838F811C"))) PPC_WEAK_FUNC(sub_838F811C);
PPC_FUNC_IMPL(__imp__sub_838F811C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F8120"))) PPC_WEAK_FUNC(sub_838F8120);
PPC_FUNC_IMPL(__imp__sub_838F8120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x838F8128;
	__savegprlr_21(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8164
	if (!cr6.eq) goto loc_838F8164;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r4,r11,-172
	ctx.r4.s64 = ctx.r11.s64 + -172;
	// bl 0x838e5f10
	ctx.lr = 0x838F8164;
	sub_838E5F10(ctx, base);
loc_838F8164:
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f8198
	if (cr6.eq) goto loc_838F8198;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F817C;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// bl 0x838e5f50
	ctx.lr = 0x838F8190;
	sub_838E5F50(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838F8198:
	// cmplwi cr6,r27,9
	cr6.compare<uint32_t>(ctx.r27.u32, 9, xer);
	// bge cr6,0x838f81c8
	if (!cr6.lt) goto loc_838F81C8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F81AC;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// bl 0x838e5f50
	ctx.lr = 0x838F81C0;
	sub_838E5F50(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838F81C8:
	// lhz r11,2054(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2054);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f81ec
	if (cr6.eq) goto loc_838F81EC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F81E4;
	sub_838F7388(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838F81EC:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f86b4
	if (!cr6.eq) goto loc_838F86B4;
	// li r29,81
	ctx.r29.s64 = 81;
	// cmplwi cr6,r27,81
	cr6.compare<uint32_t>(ctx.r27.u32, 81, xer);
	// bge cr6,0x838f8208
	if (!cr6.lt) goto loc_838F8208;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_838F8208:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F8218;
	sub_838E9728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F8228;
	sub_838E63A8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,95
	ctx.r10.s64 = ctx.r1.s64 + 95;
	// subf r27,r29,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r29.s64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r27,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, ctx.r27.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
loc_838F8248:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bge cr6,0x838f82f4
	if (!cr6.lt) goto loc_838F82F4;
	// lbzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f82f4
	if (cr6.eq) goto loc_838F82F4;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, xer);
	// bge cr6,0x838f82d8
	if (!cr6.lt) goto loc_838F82D8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x838f82d8
	if (cr6.eq) goto loc_838F82D8;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x838f82e0
	if (!cr6.lt) goto loc_838F82E0;
	// lbzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f82e0
	if (cr6.eq) goto loc_838F82E0;
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, xer);
	// bge cr6,0x838f82e8
	if (!cr6.lt) goto loc_838F82E8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x838f82e8
	if (cr6.eq) goto loc_838F82E8;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x838f82f0
	if (!cr6.lt) goto loc_838F82F0;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lbzx r5,r30,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838f82f0
	if (cr6.eq) goto loc_838F82F0;
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// addi r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 5;
	// cmplwi cr6,r8,81
	cr6.compare<uint32_t>(ctx.r8.u32, 81, xer);
	// blt cr6,0x838f8248
	if (cr6.lt) goto loc_838F8248;
	// b 0x838f82f4
	goto loc_838F82F4;
loc_838F82D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x838f82f4
	goto loc_838F82F4;
loc_838F82E0:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// b 0x838f82f4
	goto loc_838F82F4;
loc_838F82E8:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x838f82f4
	goto loc_838F82F4;
loc_838F82F0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_838F82F4:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x838f86a4
	if (cr6.lt) goto loc_838F86A4;
	// cmplwi cr6,r30,79
	cr6.compare<uint32_t>(ctx.r30.u32, 79, xer);
	// bgt cr6,0x838f86a4
	if (cr6.gt) goto loc_838F86A4;
	// addi r25,r30,1
	ctx.r25.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r29.u32, xer);
	// bge cr6,0x838f8694
	if (!cr6.lt) goto loc_838F8694;
	// addi r11,r1,97
	ctx.r11.s64 = ctx.r1.s64 + 97;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8694
	if (!cr6.eq) goto loc_838F8694;
	// lis r4,26947
	ctx.r4.s64 = 1765998592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,17232
	ctx.r4.u64 = ctx.r4.u64 | 17232;
	// bl 0x838f5b78
	ctx.lr = 0x838F8330;
	sub_838F5B78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f868c
	if (!cr6.eq) goto loc_838F868C;
	// addi r11,r1,98
	ctx.r11.s64 = ctx.r1.s64 + 98;
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// li r8,132
	ctx.r8.s64 = 132;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,1492
	ctx.r6.s64 = ctx.r1.s64 + 1492;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6000
	ctx.lr = 0x838F8378;
	sub_838F6000(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x838f8638
	if (!cr6.eq) goto loc_838F8638;
	// lbz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// addi r26,r31,1980
	ctx.r26.s64 = ctx.r31.s64 + 1980;
	// lbz r9,193(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 193);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,194(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 194);
	// lbz r7,195(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 195);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x838e7348
	ctx.lr = 0x838F83C4;
	sub_838E7348(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f863c
	if (cr6.eq) goto loc_838F863C;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lbz r8,1615(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e7368
	ctx.lr = 0x838F83E8;
	sub_838E7368(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f863c
	if (cr6.eq) goto loc_838F863C;
	// lbz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 320);
	// lbz r10,321(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 321);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,322(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 322);
	// lbz r8,323(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 323);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,1944(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x838f8444
	if (cr6.eq) goto loc_838F8444;
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f8464
	if (!cr6.gt) goto loc_838F8464;
	// stw r22,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r22.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r22,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F8444;
	sub_838F2288(ctx, base);
loc_838F8444:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F8450;
	sub_838F1F78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f8628
	if (cr6.eq) goto loc_838F8628;
	// stw r3,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r3.u32);
	// stw r28,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r28.u32);
loc_838F8464:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x838F8474;
	sub_831CE980(ctx, base);
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,132
	ctx.r7.s64 = ctx.r30.s64 + 132;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r6,r1,1492
	ctx.r6.s64 = ctx.r1.s64 + 1492;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6000
	ctx.lr = 0x838F84A4;
	sub_838F6000(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8638
	if (!cr6.eq) goto loc_838F8638;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e7700
	ctx.lr = 0x838F84C8;
	sub_838E7700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f863c
	if (cr6.eq) goto loc_838F863C;
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// addi r11,r27,11
	ctx.r11.s64 = ctx.r27.s64 + 11;
	// addi r9,r10,-132
	ctx.r9.s64 = ctx.r10.s64 + -132;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,1492
	ctx.r6.s64 = ctx.r1.s64 + 1492;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f6000
	ctx.lr = 0x838F850C;
	sub_838F6000(ctx, base);
	// lwz r27,1492(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f8538
	if (cr6.eq) goto loc_838F8538;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8538
	if (!cr6.eq) goto loc_838F8538;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r23,r11,-128
	ctx.r23.s64 = ctx.r11.s64 + -128;
	// b 0x838f8640
	goto loc_838F8640;
loc_838F8538:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// bne cr6,0x838f861c
	if (!cr6.eq) goto loc_838F861C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// addi r29,r11,27528
	ctx.r29.s64 = ctx.r11.s64 + 27528;
	// beq cr6,0x838f8560
	if (cr6.eq) goto loc_838F8560;
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5e38
	ctx.lr = 0x838F8560;
	sub_838E5E38(ctx, base);
loc_838F8560:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F856C;
	sub_838F7388(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,1460(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// bl 0x838e9518
	ctx.lr = 0x838F8584;
	sub_838E9518(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x838f8610
	if (cr6.eq) goto loc_838F8610;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e66e8
	ctx.lr = 0x838F85A0;
	sub_838E66E8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F85AC;
	sub_838F1F78(ctx, base);
	// stw r3,116(r24)
	PPC_STORE_U32(ctx.r24.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f85ec
	if (cr6.eq) goto loc_838F85EC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x831ce980
	ctx.lr = 0x838F85C4;
	sub_831CE980(ctx, base);
	// lwz r11,232(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 232);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// ori r9,r11,16
	ctx.r9.u64 = ctx.r11.u64 | 16;
	// stw r28,124(r24)
	PPC_STORE_U32(ctx.r24.u32 + 124, ctx.r28.u32);
	// ori r8,r10,4096
	ctx.r8.u64 = ctx.r10.u64 | 4096;
	// stw r30,120(r24)
	PPC_STORE_U32(ctx.r24.u32 + 120, ctx.r30.u32);
	// stw r22,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r22.u32);
	// stw r9,232(r24)
	PPC_STORE_U32(ctx.r24.u32 + 232, ctx.r9.u32);
	// stw r8,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r8.u32);
	// b 0x838f85fc
	goto loc_838F85FC;
loc_838F85EC:
	// lhz r11,2054(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2054);
	// addi r23,r29,-80
	ctx.r23.s64 = ctx.r29.s64 + -80;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,2054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2054, ctx.r10.u16);
loc_838F85FC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6df8
	ctx.lr = 0x838F8608;
	sub_838E6DF8(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// bne cr6,0x838f8640
	if (!cr6.eq) goto loc_838F8640;
loc_838F8610:
	// stw r22,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r22.u32);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838F861C:
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r23,r11,-64
	ctx.r23.s64 = ctx.r11.s64 + -64;
	// b 0x838f8640
	goto loc_838F8640;
loc_838F8628:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r23,r11,-52
	ctx.r23.s64 = ctx.r11.s64 + -52;
	// b 0x838f863c
	goto loc_838F863C;
loc_838F8638:
	// lwz r23,1436(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
loc_838F863C:
	// lwz r27,1492(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
loc_838F8640:
	// stw r22,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r22.u32);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bne cr6,0x838f8658
	if (!cr6.eq) goto loc_838F8658;
loc_838F864C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8658;
	sub_838F7388(ctx, base);
loc_838F8658:
	// lhz r11,2054(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2054);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// sth r10,2054(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2054, ctx.r10.u16);
	// bl 0x838e6df8
	ctx.lr = 0x838F8670;
	sub_838E6DF8(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x838f8684
	if (cr6.eq) goto loc_838F8684;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838F8684;
	sub_838E5F50(ctx, base);
loc_838F8684:
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838F868C:
	// lwz r23,1436(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// b 0x838f864c
	goto loc_838F864C;
loc_838F8694:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r23,r11,-36
	ctx.r23.s64 = ctx.r11.s64 + -36;
	// b 0x838f864c
	goto loc_838F864C;
loc_838F86A4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27528
	ctx.r11.s64 = ctx.r11.s64 + 27528;
	// addi r23,r11,-12
	ctx.r23.s64 = ctx.r11.s64 + -12;
	// b 0x838f864c
	goto loc_838F864C;
loc_838F86B4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r23,r11,27528
	ctx.r23.s64 = ctx.r11.s64 + 27528;
	// b 0x838f864c
	goto loc_838F864C;
}

__attribute__((alias("__imp__sub_838F86C0"))) PPC_WEAK_FUNC(sub_838F86C0);
PPC_FUNC_IMPL(__imp__sub_838F86C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F86C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1912);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f8720
	if (cr6.eq) goto loc_838F8720;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x838f870c
	if (cr6.eq) goto loc_838F870C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1912, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f8720
	if (!cr6.eq) goto loc_838F8720;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// bl 0x838e5cc0
	ctx.lr = 0x838F870C;
	sub_838E5CC0(ctx, base);
loc_838F870C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8718;
	sub_838F7388(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F8720:
	// lwz r11,1396(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1396);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8744
	if (!cr6.eq) goto loc_838F8744;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x838e5f10
	ctx.lr = 0x838F8744;
	sub_838E5F10(ctx, base);
loc_838F8744:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f8778
	if (cr6.eq) goto loc_838F8778;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F875C;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// bl 0x838e5f50
	ctx.lr = 0x838F8770;
	sub_838E5F50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F8778:
	// lwz r27,1944(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1944);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838f87ac
	if (cr6.eq) goto loc_838F87AC;
	// lwz r11,1948(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1948);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f87cc
	if (!cr6.gt) goto loc_838F87CC;
	// stw r28,1944(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1944, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,1948(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1948, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F87AC;
	sub_838F2288(ctx, base);
loc_838F87AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F87B8;
	sub_838F1F78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f8850
	if (cr6.eq) goto loc_838F8850;
	// stw r3,1944(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1944, ctx.r3.u32);
	// stw r31,1948(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1948, ctx.r31.u32);
loc_838F87CC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F87DC;
	sub_838E9728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F87EC;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F87F8;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f8a48
	if (!cr6.eq) goto loc_838F8A48;
	// stbx r28,r27,r30
	PPC_STORE_U8(ctx.r27.u32 + ctx.r30.u32, ctx.r28.u8);
	// add r10,r27,r30
	ctx.r10.u64 = ctx.r27.u64 + ctx.r30.u64;
	// lbz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f8824
	if (cr6.eq) goto loc_838F8824;
loc_838F8818:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f8818
	if (!cr6.eq) goto loc_838F8818;
loc_838F8824:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x838f8878
	if (!cr6.gt) goto loc_838F8878;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// addi r4,r11,-72
	ctx.r4.s64 = ctx.r11.s64 + -72;
	// bl 0x838e5cc0
	ctx.lr = 0x838F8848;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F8850:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F885C;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// addi r4,r11,-88
	ctx.r4.s64 = ctx.r11.s64 + -88;
	// bl 0x838e5f50
	ctx.lr = 0x838F8870;
	sub_838E5F50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F8878:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// beq cr6,0x838f8894
	if (cr6.eq) goto loc_838F8894;
	// li r10,10
	ctx.r10.s64 = 10;
loc_838F8894:
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// twllei r10,0
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// divwu r9,r11,r10
	ctx.r9.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf. r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x838f88cc
	if (cr0.eq) goto loc_838F88CC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// bl 0x838e5cc0
	ctx.lr = 0x838F88C4;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F88CC:
	// lis r9,6553
	ctx.r9.s64 = 429457408;
	// divwu r11,r11,r10
	ctx.r11.u32 = PPCDivide(ctx.r11.u32, ctx.r10.u32);
	// ori r8,r9,39321
	ctx.r8.u64 = ctx.r9.u64 | 39321;
	// twllei r10,0
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x838f88fc
	if (!cr6.gt) goto loc_838F88FC;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x838e5cc0
	ctx.lr = 0x838F88F4;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F88FC:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x838f21a0
	ctx.lr = 0x838F8910;
	sub_838F21A0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f8934
	if (!cr6.eq) goto loc_838F8934;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,27704
	ctx.r4.s64 = ctx.r11.s64 + 27704;
	// bl 0x838e5cc0
	ctx.lr = 0x838F892C;
	sub_838E5CC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F8934:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838f8a24
	if (!cr6.gt) goto loc_838F8A24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// b 0x838f8954
	goto loc_838F8954;
loc_838F8950:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_838F8954:
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// add r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 + ctx.r3.u64;
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// bne cr6,0x838f8998
	if (!cr6.eq) goto loc_838F8998;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r9,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r9.u16);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r5,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r5.u16);
	// b 0x838f89f8
	goto loc_838F89F8;
loc_838F8998:
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// sth r4,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r4.u16);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
loc_838F89F8:
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r7,r7,10
	ctx.r7.s64 = ctx.r7.s64 + 10;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r4,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r4.u16);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r6,r3
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, xer);
	// blt cr6,0x838f8950
	if (cr6.lt) goto loc_838F8950;
loc_838F8A24:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838f1bc0
	ctx.lr = 0x838F8A3C;
	sub_838F1BC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x838f2288
	ctx.lr = 0x838F8A48;
	sub_838F2288(ctx, base);
loc_838F8A48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F8A50"))) PPC_WEAK_FUNC(sub_838F8A50);
PPC_FUNC_IMPL(__imp__sub_838F8A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F8A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f8a88
	if (!cr6.eq) goto loc_838F8A88;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x838e5f10
	ctx.lr = 0x838F8A88;
	sub_838E5F10(ctx, base);
loc_838F8A88:
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f8abc
	if (cr6.eq) goto loc_838F8ABC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8AA0;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x838e5f50
	ctx.lr = 0x838F8AB4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8ABC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f8afc
	if (cr6.eq) goto loc_838F8AFC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f8afc
	if (cr6.eq) goto loc_838F8AFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8AE0;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x838e5f50
	ctx.lr = 0x838F8AF4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8AFC:
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f8b74
	if (!cr6.eq) goto loc_838F8B74;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f8b38
	if (cr6.eq) goto loc_838F8B38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8B1C;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x838e5f50
	ctx.lr = 0x838F8B30;
	sub_838E5F50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8B38:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9728
	ctx.lr = 0x838F8B44;
	sub_838E9728(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F8B54;
	sub_838E63A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// sth r11,1608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1608, ctx.r11.u16);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,1720(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1720, ctx.r8.u16);
	// b 0x838f8c8c
	goto loc_838F8C8C;
loc_838F8B74:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x838f8c10
	if (!cr6.eq) goto loc_838F8C10;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f8bac
	if (cr6.eq) goto loc_838F8BAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8B90;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// bl 0x838e5f50
	ctx.lr = 0x838F8BA4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8BAC:
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x838e9728
	ctx.lr = 0x838F8BB8;
	sub_838E9728(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F8BC8;
	sub_838E63A8(ctx, base);
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rotlwi r7,r10,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// sth r11,1608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1608, ctx.r11.u16);
	// rotlwi r11,r8,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,85(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,87(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// sth r3,1714(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1714, ctx.r3.u16);
	// sth r9,1716(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1716, ctx.r9.u16);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r8,1718(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1718, ctx.r8.u16);
	// b 0x838f8c8c
	goto loc_838F8C8C;
loc_838F8C10:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838f8cf8
	if (!cr6.eq) goto loc_838F8CF8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f8c4c
	if (!cr6.eq) goto loc_838F8C4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8C30;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// bl 0x838e5f50
	ctx.lr = 0x838F8C44;
	sub_838E5F50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8C4C:
	// lhz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1600);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bgt cr6,0x838f8cd0
	if (cr6.gt) goto loc_838F8CD0;
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(ctx.r30.u32, 256, xer);
	// bgt cr6,0x838f8cd0
	if (cr6.gt) goto loc_838F8CD0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f8cd0
	if (cr6.eq) goto loc_838F8CD0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F8C78;
	sub_838E9728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F8C88;
	sub_838E63A8(ctx, base);
	// sth r30,1608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1608, ctx.r30.u16);
loc_838F8C8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8C98;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f8cb0
	if (cr6.eq) goto loc_838F8CB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,1608(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1608, ctx.r11.u16);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8CB0:
	// addi r7,r31,1712
	ctx.r7.s64 = ctx.r31.s64 + 1712;
	// lhz r6,1608(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1608);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1a80
	ctx.lr = 0x838F8CC8;
	sub_838F1A80(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8CD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8CDC;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27824
	ctx.r11.s64 = ctx.r11.s64 + 27824;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x838e5f50
	ctx.lr = 0x838F8CF0;
	sub_838E5F50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8CF8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8D04;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27824
	ctx.r4.s64 = ctx.r11.s64 + 27824;
	// bl 0x838e5f50
	ctx.lr = 0x838F8D14;
	sub_838E5F50(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F8D1C"))) PPC_WEAK_FUNC(sub_838F8D1C);
PPC_FUNC_IMPL(__imp__sub_838F8D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F8D20"))) PPC_WEAK_FUNC(sub_838F8D20);
PPC_FUNC_IMPL(__imp__sub_838F8D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838F8D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8d58
	if (!cr6.eq) goto loc_838F8D58;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27904
	ctx.r11.s64 = ctx.r11.s64 + 27904;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x838e5f10
	ctx.lr = 0x838F8D58;
	sub_838E5F10(ctx, base);
loc_838F8D58:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8f94
	if (!cr6.eq) goto loc_838F8F94;
	// lbz r10,1615(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838f8d7c
	if (!cr6.eq) goto loc_838F8D7C;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f8f94
	if (cr6.eq) goto loc_838F8F94;
loc_838F8D7C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838f8db8
	if (cr6.eq) goto loc_838F8DB8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f8db8
	if (cr6.eq) goto loc_838F8DB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8D9C;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27904
	ctx.r11.s64 = ctx.r11.s64 + 27904;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x838e5f50
	ctx.lr = 0x838F8DB0;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8DB8:
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x838f8dc8
	if (!cr6.eq) goto loc_838F8DC8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x838f8dd0
	goto loc_838F8DD0;
loc_838F8DC8:
	// rlwinm r11,r10,1,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x4;
	// ori r30,r11,2
	ctx.r30.u64 = ctx.r11.u64 | 2;
loc_838F8DD0:
	// cmplw cr6,r4,r30
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f8dfc
	if (cr6.eq) goto loc_838F8DFC;
	// bl 0x838f7388
	ctx.lr = 0x838F8DE0;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27904
	ctx.r11.s64 = ctx.r11.s64 + 27904;
	// addi r4,r11,-8
	ctx.r4.s64 = ctx.r11.s64 + -8;
	// bl 0x838e5f50
	ctx.lr = 0x838F8DF4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8DFC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9728
	ctx.lr = 0x838F8E08;
	sub_838E9728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F8E18;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8E24;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f8fb0
	if (!cr6.eq) goto loc_838F8FB0;
	// lbz r11,1615(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1615);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838f8ee8
	if (!cr6.eq) goto loc_838F8EE8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// beq cr6,0x838f8ec0
	if (cr6.eq) goto loc_838F8EC0;
	// lhz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f8ec0
	if (cr6.eq) goto loc_838F8EC0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x838f8e7c
	if (cr6.lt) goto loc_838F8E7C;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27904
	ctx.r4.s64 = ctx.r11.s64 + 27904;
	// bl 0x838e5f50
	ctx.lr = 0x838F8E74;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8E7C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,1596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// sth r9,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r9.u16);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// sth r5,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r5.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// bl 0x838f0d90
	ctx.lr = 0x838F8EB8;
	sub_838F0D90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8EC0:
	// sth r5,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r5.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r5,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r5.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r5,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r5.u16);
	// sth r5,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r5.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x838f0d90
	ctx.lr = 0x838F8EE0;
	sub_838F0D90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8EE8:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bne cr6,0x838f8f38
	if (!cr6.eq) goto loc_838F8F38;
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r11.u16);
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// sth r11,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r11.u16);
	// bl 0x838f0d90
	ctx.lr = 0x838F8F30;
	sub_838F0D90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8F38:
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// rotlwi r7,r11,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r6,81(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r4,83(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r11,r8,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// sth r5,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r5.u16);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r7,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r7.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r5,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r5.u16);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// sth r6,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r6.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f0d90
	ctx.lr = 0x838F8F8C;
	sub_838F0D90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838F8F94:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F8F9C;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27904
	ctx.r11.s64 = ctx.r11.s64 + 27904;
	// addi r4,r11,-36
	ctx.r4.s64 = ctx.r11.s64 + -36;
	// bl 0x838e5f50
	ctx.lr = 0x838F8FB0;
	sub_838E5F50(ctx, base);
loc_838F8FB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F8FB8"))) PPC_WEAK_FUNC(sub_838F8FB8);
PPC_FUNC_IMPL(__imp__sub_838F8FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838F8FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f8ff0
	if (!cr6.eq) goto loc_838F8FF0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,27964
	ctx.r11.s64 = ctx.r11.s64 + 27964;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x838e5f10
	ctx.lr = 0x838F8FF0;
	sub_838E5F10(ctx, base);
loc_838F8FF0:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f90fc
	if (!cr6.eq) goto loc_838F90FC;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f90fc
	if (cr6.eq) goto loc_838F90FC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f9044
	if (cr6.eq) goto loc_838F9044;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f9044
	if (cr6.eq) goto loc_838F9044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9028;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27964
	ctx.r11.s64 = ctx.r11.s64 + 27964;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x838e5f50
	ctx.lr = 0x838F903C;
	sub_838E5F50(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838F9044:
	// lhz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1600);
	// rlwinm r30,r4,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x838f90dc
	if (!cr6.eq) goto loc_838F90DC;
	// cmplwi cr6,r30,256
	cr6.compare<uint32_t>(ctx.r30.u32, 256, xer);
	// bgt cr6,0x838f90dc
	if (cr6.gt) goto loc_838F90DC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f90b0
	if (cr6.eq) goto loc_838F90B0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_838F906C:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F907C;
	sub_838E9728(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F908C;
	sub_838E63A8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,81(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// sthu r7,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r29.u32 = ea;
	// bne 0x838f906c
	if (!cr0.eq) goto loc_838F906C;
loc_838F90B0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F90BC;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f9118
	if (!cr6.eq) goto loc_838F9118;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f0dd8
	ctx.lr = 0x838F90D4;
	sub_838F0DD8(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838F90DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F90E4;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,27964
	ctx.r4.s64 = ctx.r11.s64 + 27964;
	// bl 0x838e5f50
	ctx.lr = 0x838F90F4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838F90FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9104;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,27964
	ctx.r11.s64 = ctx.r11.s64 + 27964;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x838e5f50
	ctx.lr = 0x838F9118;
	sub_838E5F50(ctx, base);
loc_838F9118:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F9120"))) PPC_WEAK_FUNC(sub_838F9120);
PPC_FUNC_IMPL(__imp__sub_838F9120) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f9160
	if (!cr6.eq) goto loc_838F9160;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,28016
	ctx.r11.s64 = ctx.r11.s64 + 28016;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x838e5f10
	ctx.lr = 0x838F9160;
	sub_838E5F10(ctx, base);
loc_838F9160:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f918c
	if (cr6.eq) goto loc_838F918C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9174;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28016
	ctx.r11.s64 = ctx.r11.s64 + 28016;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x838e5f50
	ctx.lr = 0x838F9188;
	sub_838E5F50(ctx, base);
	// b 0x838f9280
	goto loc_838F9280;
loc_838F918C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f91c4
	if (cr6.eq) goto loc_838F91C4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f91c4
	if (cr6.eq) goto loc_838F91C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F91AC;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28016
	ctx.r11.s64 = ctx.r11.s64 + 28016;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x838e5f50
	ctx.lr = 0x838F91C0;
	sub_838E5F50(ctx, base);
	// b 0x838f9280
	goto loc_838F9280;
loc_838F91C4:
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f91e8
	if (cr6.eq) goto loc_838F91E8;
	// bl 0x838f7388
	ctx.lr = 0x838F91D4;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28016
	ctx.r4.s64 = ctx.r11.s64 + 28016;
	// bl 0x838e5f50
	ctx.lr = 0x838F91E4;
	sub_838E5F50(ctx, base);
	// b 0x838f9280
	goto loc_838F9280;
loc_838F91E8:
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9728
	ctx.lr = 0x838F91F4;
	sub_838E9728(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F9204;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9210;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f9280
	if (!cr6.eq) goto loc_838F9280;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,85(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// rotlwi r11,r7,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r5,86(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,82(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lbz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r31,87(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r30,83(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x838f14a8
	ctx.lr = 0x838F9280;
	sub_838F14A8(ctx, base);
loc_838F9280:
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

__attribute__((alias("__imp__sub_838F9298"))) PPC_WEAK_FUNC(sub_838F9298);
PPC_FUNC_IMPL(__imp__sub_838F9298) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f92d8
	if (!cr6.eq) goto loc_838F92D8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,28068
	ctx.r11.s64 = ctx.r11.s64 + 28068;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// bl 0x838e5f10
	ctx.lr = 0x838F92D8;
	sub_838E5F10(ctx, base);
loc_838F92D8:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f9304
	if (cr6.eq) goto loc_838F9304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F92EC;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28068
	ctx.r11.s64 = ctx.r11.s64 + 28068;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x838e5f50
	ctx.lr = 0x838F9300;
	sub_838E5F50(ctx, base);
	// b 0x838f9430
	goto loc_838F9430;
loc_838F9304:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f933c
	if (cr6.eq) goto loc_838F933C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f933c
	if (cr6.eq) goto loc_838F933C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9324;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28068
	ctx.r11.s64 = ctx.r11.s64 + 28068;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x838e5f50
	ctx.lr = 0x838F9338;
	sub_838E5F50(ctx, base);
	// b 0x838f9430
	goto loc_838F9430;
loc_838F933C:
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f9360
	if (cr6.eq) goto loc_838F9360;
	// bl 0x838f7388
	ctx.lr = 0x838F934C;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28068
	ctx.r4.s64 = ctx.r11.s64 + 28068;
	// bl 0x838e5f50
	ctx.lr = 0x838F935C;
	sub_838E5F50(ctx, base);
	// b 0x838f9430
	goto loc_838F9430;
loc_838F9360:
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9728
	ctx.lr = 0x838F936C;
	sub_838E9728(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F937C;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9388;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f9430
	if (!cr6.eq) goto loc_838F9430;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x838f93d4
	if (cr6.eq) goto loc_838F93D4;
	// not r11,r5
	ctx.r11.u64 = ~ctx.r5.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r4,1
	ctx.r3.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// neg r5,r3
	ctx.r5.s64 = -ctx.r3.s64;
loc_838F93D4:
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// beq cr6,0x838f941c
	if (cr6.eq) goto loc_838F941C;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r3,1
	ctx.r11.u64 = ctx.r3.u32 & 0x7FFFFFFF;
	// neg r6,r11
	ctx.r6.s64 = -ctx.r11.s64;
	// b 0x838f9420
	goto loc_838F9420;
loc_838F941C:
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
loc_838F9420:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f0fc0
	ctx.lr = 0x838F9430;
	sub_838F0FC0(ctx, base);
loc_838F9430:
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

__attribute__((alias("__imp__sub_838F9448"))) PPC_WEAK_FUNC(sub_838F9448);
PPC_FUNC_IMPL(__imp__sub_838F9448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x838F9450;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f9480
	if (!cr6.eq) goto loc_838F9480;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// addi r4,r11,-136
	ctx.r4.s64 = ctx.r11.s64 + -136;
	// bl 0x838e5f10
	ctx.lr = 0x838F9480;
	sub_838E5F10(ctx, base);
loc_838F9480:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f94b4
	if (cr6.eq) goto loc_838F94B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9498;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// addi r4,r11,-120
	ctx.r4.s64 = ctx.r11.s64 + -120;
	// bl 0x838e5f50
	ctx.lr = 0x838F94AC;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838F94B4:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x838f94f4
	if (cr6.eq) goto loc_838F94F4;
	// lwz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f94f4
	if (cr6.eq) goto loc_838F94F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F94D8;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// addi r4,r11,-104
	ctx.r4.s64 = ctx.r11.s64 + -104;
	// bl 0x838e5f50
	ctx.lr = 0x838F94EC;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838F94F4:
	// lwz r22,1944(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1944);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x838f9528
	if (cr6.eq) goto loc_838F9528;
	// lwz r11,1948(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1948);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f9548
	if (!cr6.gt) goto loc_838F9548;
	// stw r20,1944(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1944, ctx.r20.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r20,1948(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1948, ctx.r20.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F9528;
	sub_838F2288(ctx, base);
loc_838F9528:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F9534;
	sub_838F1F78(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f95c8
	if (cr6.eq) goto loc_838F95C8;
	// stw r3,1944(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1944, ctx.r3.u32);
	// stw r30,1948(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1948, ctx.r30.u32);
loc_838F9548:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F9558;
	sub_838E9728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F9568;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9574;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f9804
	if (!cr6.eq) goto loc_838F9804;
	// stbx r20,r22,r31
	PPC_STORE_U8(ctx.r22.u32 + ctx.r31.u32, ctx.r20.u8);
	// add r21,r22,r31
	ctx.r21.u64 = ctx.r22.u64 + ctx.r31.u64;
	// lbz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f95a0
	if (cr6.eq) goto loc_838F95A0;
loc_838F9594:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f9594
	if (!cr6.eq) goto loc_838F9594;
loc_838F95A0:
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r21,r10
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, xer);
	// bgt cr6,0x838f95f0
	if (cr6.gt) goto loc_838F95F0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x838e5f50
	ctx.lr = 0x838F95C0;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838F95C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F95D4;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x838e5f50
	ctx.lr = 0x838F95E8;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838F95F0:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// beq cr6,0x838f9638
	if (cr6.eq) goto loc_838F9638;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// not r10,r7
	ctx.r10.u64 = ~ctx.r7.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// neg r23,r5
	ctx.r23.s64 = -ctx.r5.s64;
	// b 0x838f963c
	goto loc_838F963C;
loc_838F9638:
	// add r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_838F963C:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// beq cr6,0x838f9684
	if (cr6.eq) goto loc_838F9684;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// not r10,r7
	ctx.r10.u64 = ~ctx.r7.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// clrlwi r5,r6,1
	ctx.r5.u64 = ctx.r6.u32 & 0x7FFFFFFF;
	// neg r26,r5
	ctx.r26.s64 = -ctx.r5.s64;
	// b 0x838f9688
	goto loc_838F9688;
loc_838F9684:
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_838F9688:
	// lbz r27,9(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// addi r24,r11,11
	ctx.r24.s64 = ctx.r11.s64 + 11;
	// lbz r30,10(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x838f96a8
	if (!cr6.eq) goto loc_838F96A8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x838f96e4
	if (!cr6.eq) goto loc_838F96E4;
loc_838F96A8:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(ctx.r27.u32, 1, xer);
	// bne cr6,0x838f96bc
	if (!cr6.eq) goto loc_838F96BC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838f96e4
	if (!cr6.eq) goto loc_838F96E4;
loc_838F96BC:
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// bne cr6,0x838f96d0
	if (!cr6.eq) goto loc_838F96D0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x838f96e4
	if (!cr6.eq) goto loc_838F96E4;
loc_838F96D0:
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(ctx.r27.u32, 3, xer);
	// bne cr6,0x838f9700
	if (!cr6.eq) goto loc_838F9700;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x838f9700
	if (cr6.eq) goto loc_838F9700;
loc_838F96E4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x838e5f50
	ctx.lr = 0x838F96F8;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838F9700:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(ctx.r27.u32, 4, xer);
	// addi r25,r11,28212
	ctx.r25.s64 = ctx.r11.s64 + 28212;
	// blt cr6,0x838f971c
	if (cr6.lt) goto loc_838F971C;
	// addi r4,r25,-44
	ctx.r4.s64 = ctx.r25.s64 + -44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838F971C;
	sub_838E5F50(ctx, base);
loc_838F971C:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f9738
	if (cr6.eq) goto loc_838F9738;
loc_838F972C:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838f972c
	if (!cr6.eq) goto loc_838F972C;
loc_838F9738:
	// rlwinm r4,r30,2,22,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// clrlwi r29,r30,24
	ctx.r29.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x838f21a0
	ctx.lr = 0x838F9748;
	sub_838F21A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838f9768
	if (!cr6.eq) goto loc_838F9768;
	// addi r4,r25,-16
	ctx.r4.s64 = ctx.r25.s64 + -16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838F9760;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838F9768:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x838f97d0
	if (!cr6.gt) goto loc_838F97D0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_838F9778:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, xer);
	// bgt cr6,0x838f97a0
	if (cr6.gt) goto loc_838F97A0;
loc_838F9788:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f97c0
	if (cr6.eq) goto loc_838F97C0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, xer);
	// ble cr6,0x838f9788
	if (!cr6.gt) goto loc_838F9788;
loc_838F97A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F97AC;
	sub_838F2288(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838F97B8;
	sub_838E5F50(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_838F97C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// blt cr6,0x838f9778
	if (cr6.lt) goto loc_838F9778;
loc_838F97D0:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f0ff0
	ctx.lr = 0x838F97F8;
	sub_838F0FF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F9804;
	sub_838F2288(ctx, base);
loc_838F9804:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F980C"))) PPC_WEAK_FUNC(sub_838F980C);
PPC_FUNC_IMPL(__imp__sub_838F980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F9810"))) PPC_WEAK_FUNC(sub_838F9810);
PPC_FUNC_IMPL(__imp__sub_838F9810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F9818;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f9848
	if (!cr6.eq) goto loc_838F9848;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// bl 0x838e5f10
	ctx.lr = 0x838F9848;
	sub_838E5F10(ctx, base);
loc_838F9848:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f987c
	if (cr6.eq) goto loc_838F987C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9860;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bl 0x838e5f50
	ctx.lr = 0x838F9874;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F987C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x838f98bc
	if (cr6.eq) goto loc_838F98BC;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f98bc
	if (cr6.eq) goto loc_838F98BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F98A0;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x838e5f50
	ctx.lr = 0x838F98B4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F98BC:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(ctx.r29.u32, 4, xer);
	// bge cr6,0x838f98ec
	if (!cr6.lt) goto loc_838F98EC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F98D0;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-100
	ctx.r4.s64 = ctx.r11.s64 + -100;
	// bl 0x838e5f50
	ctx.lr = 0x838F98E4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F98EC:
	// lwz r30,1944(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f9920
	if (cr6.eq) goto loc_838F9920;
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f9940
	if (!cr6.gt) goto loc_838F9940;
	// stw r27,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F9920;
	sub_838F2288(ctx, base);
loc_838F9920:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F992C;
	sub_838F1F78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f99a8
	if (cr6.eq) goto loc_838F99A8;
	// stw r3,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r3.u32);
	// stw r28,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r28.u32);
loc_838F9940:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F9950;
	sub_838E9728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F9960;
	sub_838E63A8(ctx, base);
	// stbx r27,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9970;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f9aec
	if (!cr6.eq) goto loc_838F9AEC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x838f99d0
	if (cr6.eq) goto loc_838F99D0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x838f99d0
	if (cr6.eq) goto loc_838F99D0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// bl 0x838e5f50
	ctx.lr = 0x838F99A0;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F99A8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// bl 0x838e5f50
	ctx.lr = 0x838F99BC;
	sub_838E5F50(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F99C8;
	sub_838F7388(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F99D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e7d58
	ctx.lr = 0x838F99F0;
	sub_838E7D58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f9ad8
	if (cr6.eq) goto loc_838F9AD8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x838f9ad8
	if (!cr6.lt) goto loc_838F9AD8;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f9ad8
	if (!cr6.eq) goto loc_838F9AD8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,0,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F8;
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmpwi cr6,r10,264
	cr6.compare<int32_t>(ctx.r10.s32, 264, xer);
	// beq cr6,0x838f9a48
	if (cr6.eq) goto loc_838F9A48;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x838e5f50
	ctx.lr = 0x838F9A40;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9A48:
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e7d58
	ctx.lr = 0x838F9A60;
	sub_838E7D58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f9abc
	if (cr6.eq) goto loc_838F9ABC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x838f9abc
	if (!cr6.eq) goto loc_838F9ABC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,0,23,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F8;
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmpwi cr6,r10,264
	cr6.compare<int32_t>(ctx.r10.s32, 264, xer);
	// beq cr6,0x838f9aa0
	if (cr6.eq) goto loc_838F9AA0;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r4,r11,28372
	ctx.r4.s64 = ctx.r11.s64 + 28372;
	// bl 0x838e5f50
	ctx.lr = 0x838F9A98;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9AA0:
	// add r7,r30,r28
	ctx.r7.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x838f12d0
	ctx.lr = 0x838F9AB4;
	sub_838F12D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9ABC:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bl 0x838e5f50
	ctx.lr = 0x838F9AD0;
	sub_838E5F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9AD8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28372
	ctx.r11.s64 = ctx.r11.s64 + 28372;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// bl 0x838e5f50
	ctx.lr = 0x838F9AEC;
	sub_838E5F50(ctx, base);
loc_838F9AEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F9AF4"))) PPC_WEAK_FUNC(sub_838F9AF4);
PPC_FUNC_IMPL(__imp__sub_838F9AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F9AF8"))) PPC_WEAK_FUNC(sub_838F9AF8);
PPC_FUNC_IMPL(__imp__sub_838F9AF8) {
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
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f9b38
	if (!cr6.eq) goto loc_838F9B38;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r11,r11,28420
	ctx.r11.s64 = ctx.r11.s64 + 28420;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x838e5f10
	ctx.lr = 0x838F9B38;
	sub_838E5F10(ctx, base);
loc_838F9B38:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f9b70
	if (cr6.eq) goto loc_838F9B70;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f9b70
	if (cr6.eq) goto loc_838F9B70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9B58;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28420
	ctx.r11.s64 = ctx.r11.s64 + 28420;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// bl 0x838e5f50
	ctx.lr = 0x838F9B6C;
	sub_838E5F50(ctx, base);
	// b 0x838f9c24
	goto loc_838F9C24;
loc_838F9B70:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f9b84
	if (cr6.eq) goto loc_838F9B84;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
loc_838F9B84:
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838f9ba8
	if (cr6.eq) goto loc_838F9BA8;
	// bl 0x838f7388
	ctx.lr = 0x838F9B94;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28420
	ctx.r4.s64 = ctx.r11.s64 + 28420;
	// bl 0x838e5f50
	ctx.lr = 0x838F9BA4;
	sub_838E5F50(ctx, base);
	// b 0x838f9c24
	goto loc_838F9C24;
loc_838F9BA8:
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x838e9728
	ctx.lr = 0x838F9BB4;
	sub_838E9728(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F9BC4;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9BD0;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f9c24
	if (!cr6.eq) goto loc_838F9C24;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r8,85(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r6,83(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r9,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r9.u8);
	// stb r8,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r8.u8);
	// stb r7,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r7.u8);
	// stb r6,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r6.u8);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x838f19d0
	ctx.lr = 0x838F9C24;
	sub_838F19D0(ctx, base);
loc_838F9C24:
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

__attribute__((alias("__imp__sub_838F9C3C"))) PPC_WEAK_FUNC(sub_838F9C3C);
PPC_FUNC_IMPL(__imp__sub_838F9C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838F9C40"))) PPC_WEAK_FUNC(sub_838F9C40);
PPC_FUNC_IMPL(__imp__sub_838F9C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F9C48;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1912);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f9cb4
	if (cr6.eq) goto loc_838F9CB4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f9c7c
	if (!cr6.eq) goto loc_838F9C7C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9C74;
	sub_838F7388(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9C7C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f9cb4
	if (!cr6.eq) goto loc_838F9CB4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9C98;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26772
	ctx.r11.s64 = ctx.r11.s64 + 26772;
	// addi r4,r11,1656
	ctx.r4.s64 = ctx.r11.s64 + 1656;
	// bl 0x838e5f50
	ctx.lr = 0x838F9CAC;
	sub_838E5F50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9CB4:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f9cd8
	if (!cr6.eq) goto loc_838F9CD8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26772
	ctx.r11.s64 = ctx.r11.s64 + 26772;
	// addi r4,r11,1680
	ctx.r4.s64 = ctx.r11.s64 + 1680;
	// bl 0x838e5f10
	ctx.lr = 0x838F9CD8;
	sub_838E5F10(ctx, base);
loc_838F9CD8:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f9cec
	if (cr6.eq) goto loc_838F9CEC;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
loc_838F9CEC:
	// lwz r30,1944(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838f9d20
	if (cr6.eq) goto loc_838F9D20;
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f9d40
	if (!cr6.gt) goto loc_838F9D40;
	// stw r28,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F9D20;
	sub_838F2288(ctx, base);
loc_838F9D20:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F9D2C;
	sub_838F1F78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f9e18
	if (cr6.eq) goto loc_838F9E18;
	// stw r3,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r3.u32);
	// stw r29,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
loc_838F9D40:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F9D50;
	sub_838E9728(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F9D60;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9D6C;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838f9e10
	if (!cr6.eq) goto loc_838F9E10;
	// stbx r28,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r28.u8);
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838f9d98
	if (cr6.eq) goto loc_838F9D98;
loc_838F9D8C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f9d8c
	if (!cr6.eq) goto loc_838F9D8C;
loc_838F9D98:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x838f9da4
	if (cr6.eq) goto loc_838F9DA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_838F9DA4:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
loc_838F9DC4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838f9dc4
	if (!cr6.eq) goto loc_838F9DC4;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1658
	ctx.lr = 0x838F9DF4;
	sub_838F1658(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838f9e10
	if (cr6.eq) goto loc_838F9E10;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26772
	ctx.r11.s64 = ctx.r11.s64 + 26772;
	// addi r4,r11,1712
	ctx.r4.s64 = ctx.r11.s64 + 1712;
	// bl 0x838e5cc0
	ctx.lr = 0x838F9E10;
	sub_838E5CC0(ctx, base);
loc_838F9E10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9E18:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,26772
	ctx.r30.s64 = ctx.r11.s64 + 26772;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838e5e38
	ctx.lr = 0x838F9E2C;
	sub_838E5E38(ctx, base);
	// addi r4,r30,1696
	ctx.r4.s64 = ctx.r30.s64 + 1696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838F9E38;
	sub_838E5F50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838F9E40"))) PPC_WEAK_FUNC(sub_838F9E40);
PPC_FUNC_IMPL(__imp__sub_838F9E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838F9E48;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1912);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f9eb4
	if (cr6.eq) goto loc_838F9EB4;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f9e7c
	if (!cr6.eq) goto loc_838F9E7C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9E74;
	sub_838F7388(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9E7C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838f9eb4
	if (!cr6.eq) goto loc_838F9EB4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9E98;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28636
	ctx.r11.s64 = ctx.r11.s64 + 28636;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// bl 0x838e5f50
	ctx.lr = 0x838F9EAC;
	sub_838E5F50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9EB4:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838f9ed8
	if (!cr6.eq) goto loc_838F9ED8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28636
	ctx.r11.s64 = ctx.r11.s64 + 28636;
	// addi r4,r11,-84
	ctx.r4.s64 = ctx.r11.s64 + -84;
	// bl 0x838e5f10
	ctx.lr = 0x838F9ED8;
	sub_838E5F10(ctx, base);
loc_838F9ED8:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838f9eec
	if (cr6.eq) goto loc_838F9EEC;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r11.u32);
loc_838F9EEC:
	// lwz r28,1944(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838f9f1c
	if (cr6.eq) goto loc_838F9F1C;
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// ble cr6,0x838f9f3c
	if (!cr6.gt) goto loc_838F9F3C;
	// stw r29,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r29.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r29,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2288
	ctx.lr = 0x838F9F1C;
	sub_838F2288(ctx, base);
loc_838F9F1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838F9F28;
	sub_838F1F78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838f9fcc
	if (cr6.eq) goto loc_838F9FCC;
	// stw r3,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r3.u32);
	// stw r27,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r27.u32);
loc_838F9F3C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838F9F4C;
	sub_838E9728(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838F9F5C;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9F68;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fa0c8
	if (!cr6.eq) goto loc_838FA0C8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838fa0d0
	if (cr6.eq) goto loc_838FA0D0;
loc_838F9F7C:
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838f9f94
	if (cr6.eq) goto loc_838F9F94;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// blt cr6,0x838f9f7c
	if (cr6.lt) goto loc_838F9F7C;
loc_838F9F94:
	// cmplwi cr6,r30,79
	cr6.compare<uint32_t>(ctx.r30.u32, 79, xer);
	// bgt cr6,0x838fa0d0
	if (cr6.gt) goto loc_838FA0D0;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x838fa0d0
	if (cr6.lt) goto loc_838FA0D0;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// ble cr6,0x838f9ff4
	if (!cr6.gt) goto loc_838F9FF4;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28636
	ctx.r11.s64 = ctx.r11.s64 + 28636;
	// addi r4,r11,-40
	ctx.r4.s64 = ctx.r11.s64 + -40;
	// bl 0x838e5f50
	ctx.lr = 0x838F9FC4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9FCC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838F9FD8;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28636
	ctx.r11.s64 = ctx.r11.s64 + 28636;
	// addi r4,r11,-68
	ctx.r4.s64 = ctx.r11.s64 + -68;
	// bl 0x838e5f50
	ctx.lr = 0x838F9FEC;
	sub_838E5F50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838F9FF4:
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fa020
	if (cr6.eq) goto loc_838FA020;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28636
	ctx.r11.s64 = ctx.r11.s64 + 28636;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// bl 0x838e5f50
	ctx.lr = 0x838FA018;
	sub_838E5F50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838FA020:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f5dc0
	ctx.lr = 0x838FA040;
	sub_838F5DC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x838fa0b4
	if (!cr6.eq) goto loc_838FA0B4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,1944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// stb r29,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r29.u8);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// bl 0x838f1658
	ctx.lr = 0x838FA094;
	sub_838F1658(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838fa0c8
	if (cr6.eq) goto loc_838FA0C8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28636
	ctx.r4.s64 = ctx.r11.s64 + 28636;
	// bl 0x838e5f50
	ctx.lr = 0x838FA0AC;
	sub_838E5F50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838FA0B4:
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838fa0c8
	if (cr6.eq) goto loc_838FA0C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA0C8;
	sub_838E5F50(ctx, base);
loc_838FA0C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838FA0D0:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28636
	ctx.r11.s64 = ctx.r11.s64 + 28636;
	// addi r4,r11,-52
	ctx.r4.s64 = ctx.r11.s64 + -52;
	// bl 0x838e5f50
	ctx.lr = 0x838FA0E4;
	sub_838E5F50(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FA0EC"))) PPC_WEAK_FUNC(sub_838FA0EC);
PPC_FUNC_IMPL(__imp__sub_838FA0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FA0F0"))) PPC_WEAK_FUNC(sub_838FA0F0);
PPC_FUNC_IMPL(__imp__sub_838FA0F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x838FA0F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1912);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fa164
	if (cr6.eq) goto loc_838FA164;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838fa12c
	if (!cr6.eq) goto loc_838FA12C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x838f7388
	ctx.lr = 0x838FA124;
	sub_838F7388(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838FA12C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1912, ctx.r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x838fa164
	if (!cr6.eq) goto loc_838FA164;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f7388
	ctx.lr = 0x838FA148;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,26772
	ctx.r11.s64 = ctx.r11.s64 + 26772;
	// addi r4,r11,1884
	ctx.r4.s64 = ctx.r11.s64 + 1884;
	// bl 0x838e5f50
	ctx.lr = 0x838FA15C;
	sub_838E5F50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838FA164:
	// lwz r11,1396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fa188
	if (!cr6.eq) goto loc_838FA188;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,26772
	ctx.r11.s64 = ctx.r11.s64 + 26772;
	// addi r4,r11,1908
	ctx.r4.s64 = ctx.r11.s64 + 1908;
	// bl 0x838e5f10
	ctx.lr = 0x838FA188;
	sub_838E5F10(ctx, base);
loc_838FA188:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fa19c
	if (cr6.eq) goto loc_838FA19C;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r11.u32);
loc_838FA19C:
	// lwz r31,1944(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// addi r23,r11,26772
	ctx.r23.s64 = ctx.r11.s64 + 26772;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fa1d8
	if (cr6.eq) goto loc_838FA1D8;
	// lwz r11,1948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1948);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// ble cr6,0x838fa208
	if (!cr6.gt) goto loc_838FA208;
	// stw r24,1944(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1944, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r24,1948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1948, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f2288
	ctx.lr = 0x838FA1D8;
	sub_838F2288(ctx, base);
loc_838FA1D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838FA1E4;
	sub_838F1F78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fa1fc
	if (cr6.eq) goto loc_838FA1FC;
	// stw r3,1944(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1944, ctx.r3.u32);
	// stw r28,1948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1948, ctx.r28.u32);
	// b 0x838fa208
	goto loc_838FA208;
loc_838FA1FC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5e38
	ctx.lr = 0x838FA208;
	sub_838E5E38(ctx, base);
loc_838FA208:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x838fa234
	if (!cr6.eq) goto loc_838FA234;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x838f7388
	ctx.lr = 0x838FA220;
	sub_838F7388(ctx, base);
	// addi r4,r23,1924
	ctx.r4.s64 = ctx.r23.s64 + 1924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA22C;
	sub_838E5F50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838FA234:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838FA240;
	sub_838E9728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838FA250;
	sub_838E63A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f7388
	ctx.lr = 0x838FA25C;
	sub_838F7388(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fa43c
	if (!cr6.eq) goto loc_838FA43C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838fa430
	if (cr6.eq) goto loc_838FA430;
loc_838FA270:
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fa288
	if (cr6.eq) goto loc_838FA288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x838fa270
	if (cr6.lt) goto loc_838FA270;
loc_838FA288:
	// cmplwi cr6,r11,79
	cr6.compare<uint32_t>(ctx.r11.u32, 79, xer);
	// bgt cr6,0x838fa430
	if (cr6.gt) goto loc_838FA430;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x838fa430
	if (cr6.lt) goto loc_838FA430;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// ble cr6,0x838fa2b8
	if (!cr6.gt) goto loc_838FA2B8;
	// addi r4,r23,1952
	ctx.r4.s64 = ctx.r23.s64 + 1952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA2B0;
	sub_838E5F50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838FA2B8:
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fa2f0
	if (cr6.eq) goto loc_838FA2F0;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x838fa2dc
	if (!cr6.eq) goto loc_838FA2DC;
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fa2f0
	if (cr6.eq) goto loc_838FA2F0;
loc_838FA2DC:
	// addi r4,r23,1996
	ctx.r4.s64 = ctx.r23.s64 + 1996;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA2E8;
	sub_838E5F50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838FA2F0:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// subfe r26,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r26.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x838fa320
	if (!cr6.lt) goto loc_838FA320;
loc_838FA308:
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fa320
	if (cr6.eq) goto loc_838FA320;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x838fa308
	if (cr6.lt) goto loc_838FA308;
loc_838FA320:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x838fa348
	if (!cr6.lt) goto loc_838FA348;
loc_838FA330:
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fa348
	if (cr6.eq) goto loc_838FA348;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x838fa330
	if (cr6.lt) goto loc_838FA330;
loc_838FA348:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bne cr6,0x838fa364
	if (!cr6.eq) goto loc_838FA364;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bgt cr6,0x838fa41c
	if (cr6.gt) goto loc_838FA41C;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// b 0x838fa3ac
	goto loc_838FA3AC;
loc_838FA364:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bge cr6,0x838fa41c
	if (!cr6.lt) goto loc_838FA41C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838f5dc0
	ctx.lr = 0x838FA38C;
	sub_838F5DC0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x838fa39c
	if (!cr6.eq) goto loc_838FA39C;
	// lwz r28,1944(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1944);
	// b 0x838fa3a8
	goto loc_838FA3A8;
loc_838FA39C:
	// lwz r4,1436(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x838fa434
	if (!cr6.eq) goto loc_838FA434;
loc_838FA3A8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_838FA3AC:
	// cntlzw r10,r26
	ctx.r10.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// add r7,r25,r28
	ctx.r7.u64 = ctx.r25.u64 + ctx.r28.u64;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stbx r24,r9,r28
	PPC_STORE_U8(ctx.r9.u32 + ctx.r28.u32, ctx.r24.u8);
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x838f1658
	ctx.lr = 0x838FA400;
	sub_838F1658(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838fa43c
	if (cr6.eq) goto loc_838FA43C;
	// addi r4,r23,1976
	ctx.r4.s64 = ctx.r23.s64 + 1976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA414;
	sub_838E5F50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838FA41C:
	// addi r4,r23,1964
	ctx.r4.s64 = ctx.r23.s64 + 1964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA428;
	sub_838E5F50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_838FA430:
	// addi r4,r23,1940
	ctx.r4.s64 = ctx.r23.s64 + 1940;
loc_838FA434:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA43C;
	sub_838E5F50(ctx, base);
loc_838FA43C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FA444"))) PPC_WEAK_FUNC(sub_838FA444);
PPC_FUNC_IMPL(__imp__sub_838FA444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FA448"))) PPC_WEAK_FUNC(sub_838FA448);
PPC_FUNC_IMPL(__imp__sub_838FA448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FA450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,1928(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1928);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838fa478
	if (cr6.eq) goto loc_838FA478;
	// bl 0x838f2288
	ctx.lr = 0x838FA474;
	sub_838F2288(ctx, base);
	// stw r28,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r28.u32);
loc_838FA478:
	// lwz r11,1916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fa490
	if (cr6.eq) goto loc_838FA490;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x838fa490
	if (!cr6.lt) goto loc_838FA490;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_838FA490:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bgt cr6,0x838fa4e8
	if (cr6.gt) goto loc_838FA4E8;
	// lbz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1564);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// lbz r10,1565(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1565);
	// lbz r9,1566(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1566);
	// lwz r8,1564(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// lwz r7,1396(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// stb r11,1920(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1920, ctx.r11.u8);
	// stb r10,1921(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1921, ctx.r10.u8);
	// stb r9,1922(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1922, ctx.r9.u8);
	// stb r8,1923(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1923, ctx.r8.u8);
	// stb r28,1924(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1924, ctx.r28.u8);
	// stw r30,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r30.u32);
	// stb r7,1936(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1936, ctx.r7.u8);
	// bne cr6,0x838fa4d8
	if (!cr6.eq) goto loc_838FA4D8;
	// stw r28,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r28.u32);
	// b 0x838fa4e8
	goto loc_838FA4E8;
loc_838FA4D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f21a0
	ctx.lr = 0x838FA4E4;
	sub_838F21A0(ctx, base);
	// stw r3,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r3.u32);
loc_838FA4E8:
	// lwz r29,1928(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x838fa524
	if (!cr6.eq) goto loc_838FA524;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fa54c
	if (cr6.eq) goto loc_838FA54C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838FA508;
	sub_838F7388(ctx, base);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28792
	ctx.r4.s64 = ctx.r11.s64 + 28792;
	// bl 0x838e5f50
	ctx.lr = 0x838FA518;
	sub_838E5F50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838FA524:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fa54c
	if (cr6.eq) goto loc_838FA54C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838FA53C;
	sub_838E9728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838FA54C;
	sub_838E63A8(ctx, base);
loc_838FA54C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838FA558;
	sub_838F7388(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FA564"))) PPC_WEAK_FUNC(sub_838FA564);
PPC_FUNC_IMPL(__imp__sub_838FA564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FA568"))) PPC_WEAK_FUNC(sub_838FA568);
PPC_FUNC_IMPL(__imp__sub_838FA568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838FA570;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1840(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r11,28972
	ctx.r27.s64 = ctx.r11.s64 + 28972;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fa60c
	if (cr6.eq) goto loc_838FA60C;
	// bl 0x838fa448
	ctx.lr = 0x838FA5A0;
	sub_838FA448(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838fa6ac
	if (cr6.eq) goto loc_838FA6AC;
	// lwz r11,1840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// addi r4,r31,1920
	ctx.r4.s64 = ctx.r31.s64 + 1920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x838FA5BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x838fa5d8
	if (!cr6.lt) goto loc_838FA5D8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,28972
	ctx.r11.s64 = ctx.r11.s64 + 28972;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// bl 0x838e5f10
	ctx.lr = 0x838FA5D8;
	sub_838E5F10(ctx, base);
loc_838FA5D8:
	// bne cr6,0x838fa6a8
	if (!cr6.eq) goto loc_838FA6A8;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bge cr6,0x838fa654
	if (!cr6.lt) goto loc_838FA654;
	// lwz r11,1844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x838fa664
	if (!cr6.lt) goto loc_838FA664;
	// addi r4,r27,-124
	ctx.r4.s64 = ctx.r27.s64 + -124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5e38
	ctx.lr = 0x838FA5FC;
	sub_838E5E38(ctx, base);
	// addi r4,r27,-100
	ctx.r4.s64 = ctx.r27.s64 + -100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5ee0
	ctx.lr = 0x838FA608;
	sub_838E5EE0(ctx, base);
	// b 0x838fa664
	goto loc_838FA664;
loc_838FA60C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x838fa618
	if (!cr6.eq) goto loc_838FA618;
	// lwz r30,1844(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
loc_838FA618:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x838fa644
	if (cr6.eq) goto loc_838FA644;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x838fa638
	if (!cr6.eq) goto loc_838FA638;
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fa644
	if (!cr6.eq) goto loc_838FA644;
loc_838FA638:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838FA640;
	sub_838F7388(ctx, base);
	// b 0x838fa654
	goto loc_838FA654;
loc_838FA644:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fa448
	ctx.lr = 0x838FA64C;
	sub_838FA448(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838fa6ac
	if (cr6.eq) goto loc_838FA6AC;
loc_838FA654:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// beq cr6,0x838fa674
	if (cr6.eq) goto loc_838FA674;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// bne cr6,0x838fa6ac
	if (!cr6.eq) goto loc_838FA6AC;
loc_838FA664:
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fa6ac
	if (cr6.eq) goto loc_838FA6AC;
loc_838FA674:
	// lwz r11,1912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x838fa694
	if (cr6.lt) goto loc_838FA694;
	// beq cr6,0x838fa6ac
	if (cr6.eq) goto loc_838FA6AC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x838fa6ec
	if (cr6.lt) goto loc_838FA6EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
loc_838FA694:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,1920
	ctx.r5.s64 = ctx.r31.s64 + 1920;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1e28
	ctx.lr = 0x838FA6A8;
	sub_838F1E28(ctx, base);
loc_838FA6A8:
	// li r29,1
	ctx.r29.s64 = 1;
loc_838FA6AC:
	// lwz r4,1928(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x838fa6c0
	if (cr6.eq) goto loc_838FA6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2288
	ctx.lr = 0x838FA6C0;
	sub_838F2288(ctx, base);
loc_838FA6C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r11,1928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1928, ctx.r11.u32);
	// bne cr6,0x838fa704
	if (!cr6.eq) goto loc_838FA704;
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fa704
	if (!cr6.eq) goto loc_838FA704;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f10
	ctx.lr = 0x838FA6EC;
	sub_838E5F10(ctx, base);
loc_838FA6EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA700;
	sub_838E5F50(ctx, base);
	// b 0x838fa6ac
	goto loc_838FA6AC;
loc_838FA704:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FA70C"))) PPC_WEAK_FUNC(sub_838FA70C);
PPC_FUNC_IMPL(__imp__sub_838FA70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FA710"))) PPC_WEAK_FUNC(sub_838FA710);
PPC_FUNC_IMPL(__imp__sub_838FA710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x838FA718;
	__savegprlr_23(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r4.s64;
	// stw r4,1424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1424, ctx.r4.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r11,18756
	ctx.r11.s64 = 1229193216;
	// stw r27,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r27.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// and r28,r9,r5
	ctx.r28.u64 = ctx.r9.u64 & ctx.r5.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r25,r11,16724
	ctx.r25.u64 = ctx.r11.u64 | 16724;
	// li r23,1024
	ctx.r23.s64 = 1024;
loc_838FA74C:
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fa828
	if (!cr6.eq) goto loc_838FA828;
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fa794
	if (!cr6.eq) goto loc_838FA794;
loc_838FA764:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7388
	ctx.lr = 0x838FA770;
	sub_838F7388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f7268
	ctx.lr = 0x838FA778;
	sub_838F7268(ctx, base);
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// stw r3,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r3.u32);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bne cr6,0x838fa8a8
	if (!cr6.eq) goto loc_838FA8A8;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fa764
	if (cr6.eq) goto loc_838FA764;
loc_838FA794:
	// lwz r29,1952(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x838fa7a8
	if (!cr6.gt) goto loc_838FA7A8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_838FA7A8:
	// lwz r30,1944(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1944);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fa7d4
	if (cr6.eq) goto loc_838FA7D4;
	// lwz r11,1948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1948);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// ble cr6,0x838fa7f4
	if (!cr6.gt) goto loc_838FA7F4;
	// stw r27,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f2288
	ctx.lr = 0x838FA7D4;
	sub_838F2288(ctx, base);
loc_838FA7D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838f1f78
	ctx.lr = 0x838FA7E0;
	sub_838F1F78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fa8bc
	if (cr6.eq) goto loc_838FA8BC;
	// stw r3,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r3.u32);
	// stw r29,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r29.u32);
loc_838FA7F4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e9728
	ctx.lr = 0x838FA804;
	sub_838E9728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e63a8
	ctx.lr = 0x838FA814;
	sub_838E63A8(ctx, base);
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r29,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r29.u32);
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
loc_838FA828:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x838fa84c
	if (cr6.eq) goto loc_838FA84C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// bge cr6,0x838fa840
	if (!cr6.lt) goto loc_838FA840;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_838FA840:
	// subf r28,r11,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r11.s64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// b 0x838fa858
	goto loc_838FA858;
loc_838FA84C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r23,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r23.u32);
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
loc_838FA858:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1412
	ctx.r3.s64 = ctx.r31.s64 + 1412;
	// bl 0x8255b728
	ctx.lr = 0x838FA864;
	sub_8255B728(ctx, base);
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x838fa87c
	if (cr6.eq) goto loc_838FA87C;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x838fa884
	goto loc_838FA884;
loc_838FA87C:
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r28,r11,1024
	ctx.r28.s64 = ctx.r11.s64 + 1024;
loc_838FA884:
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// stw r27,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r27.u32);
	// beq cr6,0x838fa8cc
	if (cr6.eq) goto loc_838FA8CC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x838fa930
	if (!cr6.eq) goto loc_838FA930;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x838fa74c
	if (!cr6.eq) goto loc_838FA74C;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838FA8A8:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,26808
	ctx.r11.s64 = ctx.r11.s64 + 26808;
	// addi r4,r11,2340
	ctx.r4.s64 = ctx.r11.s64 + 2340;
	// bl 0x838e5e88
	ctx.lr = 0x838FA8BC;
	sub_838E5E88(ctx, base);
loc_838FA8BC:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = ctx.r11.s64 + 26808;
	// bl 0x838e5f10
	ctx.lr = 0x838FA8CC;
	sub_838E5F10(ctx, base);
loc_838FA8CC:
	// lwz r10,1396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lwz r9,1400(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// lwz r8,1416(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// ori r7,r10,8
	ctx.r7.u64 = ctx.r10.u64 | 8;
	// ori r6,r9,8
	ctx.r6.u64 = ctx.r9.u64 | 8;
	// stw r27,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r27.u32);
	// stw r7,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r7.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r6,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r6.u32);
	// addi r30,r11,26808
	ctx.r30.s64 = ctx.r11.s64 + 26808;
	// bgt cr6,0x838fa908
	if (cr6.gt) goto loc_838FA908;
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x838fa914
	if (!cr6.gt) goto loc_838FA914;
loc_838FA908:
	// addi r4,r30,2364
	ctx.r4.s64 = ctx.r30.s64 + 2364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e5f50
	ctx.lr = 0x838FA914;
	sub_838E5F50(ctx, base);
loc_838FA914:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838fa954
	if (cr6.eq) goto loc_838FA954;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838fa94c
	if (cr6.eq) goto loc_838FA94C;
	// addi r4,r30,2388
	ctx.r4.s64 = ctx.r30.s64 + 2388;
	// bl 0x838e5e88
	ctx.lr = 0x838FA930;
	sub_838E5E88(ctx, base);
loc_838FA930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838e6c50
	ctx.lr = 0x838FA938;
	sub_838E6C50(ctx, base);
	// lwz r4,1436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838fa950
	if (cr6.eq) goto loc_838FA950;
	// bl 0x838e5f10
	ctx.lr = 0x838FA94C;
	sub_838E5F10(ctx, base);
loc_838FA94C:
	// addi r4,r30,2412
	ctx.r4.s64 = ctx.r30.s64 + 2412;
loc_838FA950:
	// bl 0x838e5f50
	ctx.lr = 0x838FA954;
	sub_838E5F50(ctx, base);
loc_838FA954:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FA95C"))) PPC_WEAK_FUNC(sub_838FA95C);
PPC_FUNC_IMPL(__imp__sub_838FA95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FA960"))) PPC_WEAK_FUNC(sub_838FA960);
PPC_FUNC_IMPL(__imp__sub_838FA960) {
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
	// lwz r11,1400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fa9c0
	if (!cr6.eq) goto loc_838FA9C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x838fa710
	ctx.lr = 0x838FA998;
	sub_838FA710(ctx, base);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fa9c0
	if (!cr6.eq) goto loc_838FA9C0;
	// lwz r10,1396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// ori r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 8;
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// stw r9,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r9.u32);
	// stw r8,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r8.u32);
loc_838FA9C0:
	// lis r11,18756
	ctx.r11.s64 = 1229193216;
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// ori r9,r11,16724
	ctx.r9.u64 = ctx.r11.u64 | 16724;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x838fa9ec
	if (!cr6.eq) goto loc_838FA9EC;
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// lwz r4,1588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// bl 0x838f7388
	ctx.lr = 0x838FA9EC;
	sub_838F7388(ctx, base);
loc_838FA9EC:
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

__attribute__((alias("__imp__sub_838FAA04"))) PPC_WEAK_FUNC(sub_838FAA04);
PPC_FUNC_IMPL(__imp__sub_838FAA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FAA08"))) PPC_WEAK_FUNC(sub_838FAA08);
PPC_FUNC_IMPL(__imp__sub_838FAA08) {
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
	// lwz r11,1560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1560);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,1544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x838fab2c
	if (cr6.lt) goto loc_838FAB2C;
	// lbz r11,1612(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fab24
	if (cr6.eq) goto loc_838FAB24;
	// lwz r11,1552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1552);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1568);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r10,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r10.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x838FAA5C;
	sub_831CDCF0(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lbz r10,1613(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// addi r11,r11,11240
	ctx.r11.s64 = ctx.r11.s64 + 11240;
loc_838FAA68:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,1613(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1613, ctx.r9.u8);
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bge cr6,0x838fab18
	if (!cr6.lt) goto loc_838FAB18;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// lbz r4,1613(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lwz r3,1404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lwz r9,1536(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lbzx r8,r7,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r7,r3,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// lbzx r6,r4,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// twllei r6,0
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// divwu r4,r5,r6
	ctx.r4.u32 = PPCDivide(ctx.r5.u32, ctx.r6.u32);
	// stw r4,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r4.u32);
	// bne cr6,0x838fab18
	if (!cr6.eq) goto loc_838FAB18;
	// lbz r9,1613(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r8,1540(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lbzx r3,r9,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// lbzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbzx r7,r9,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// twllei r7,0
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// divwu. r5,r6,r7
	ctx.r5.u32 = PPCDivide(ctx.r6.u32, ctx.r7.u32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r5,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r5.u32);
	// beq 0x838faa68
	if (cr0.eq) goto loc_838FAA68;
	// lwz r9,1556(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838faa68
	if (cr6.eq) goto loc_838FAA68;
loc_838FAB18:
	// lbz r11,1613(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1613);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// blt cr6,0x838fab2c
	if (cr6.lt) goto loc_838FAB2C;
loc_838FAB24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fa960
	ctx.lr = 0x838FAB2C;
	sub_838FA960(ctx, base);
loc_838FAB2C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_838FAB40"))) PPC_WEAK_FUNC(sub_838FAB40);
PPC_FUNC_IMPL(__imp__sub_838FAB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,9(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x838fac38
	if (cr6.eq) goto loc_838FAC38;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x838fabd4
	if (cr6.eq) goto loc_838FABD4;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bne cr6,0x838fac98
	if (!cr6.eq) goto loc_838FAC98;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fac98
	if (cr6.eq) goto loc_838FAC98;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838FAB8C:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// clrlwi r7,r9,28
	ctx.r7.u64 = ctx.r9.u32 & 0xF;
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// bne cr6,0x838fabb8
	if (!cr6.eq) goto loc_838FABB8;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x838fabbc
	goto loc_838FABBC;
loc_838FABB8:
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_838FABBC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x838fab8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FAB8C;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x838fac98
	if (cr6.eq) goto loc_838FAC98;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x838fac98
	goto loc_838FAC98;
loc_838FABD4:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fac98
	if (cr6.eq) goto loc_838FAC98;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838FABF0:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// bne cr6,0x838fac1c
	if (!cr6.eq) goto loc_838FAC1C;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x838fac20
	goto loc_838FAC20;
loc_838FAC1C:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_838FAC20:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x838fabf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FABF0;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x838fac98
	if (cr6.eq) goto loc_838FAC98;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// b 0x838fac98
	goto loc_838FAC98;
loc_838FAC38:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fac98
	if (cr6.eq) goto loc_838FAC98;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838FAC54:
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x838fac64
	if (cr6.eq) goto loc_838FAC64;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_838FAC64:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x838fac78
	if (!cr6.gt) goto loc_838FAC78;
	// srawi r11,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// b 0x838fac88
	goto loc_838FAC88;
loc_838FAC78:
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_838FAC88:
	// bdnz 0x838fac54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FAC54;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// beq cr6,0x838fac98
	if (cr6.eq) goto loc_838FAC98;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
loc_838FAC98:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r9,r11,r5
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// stb r5,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r5.u8);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x838facc8
	if (cr6.lt) goto loc_838FACC8;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_838FACC8:
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FACDC"))) PPC_WEAK_FUNC(sub_838FACDC);
PPC_FUNC_IMPL(__imp__sub_838FACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FACE0"))) PPC_WEAK_FUNC(sub_838FACE0);
PPC_FUNC_IMPL(__imp__sub_838FACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FACE8;
	__savegprlr_29(ctx, base);
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x838faf74
	if (cr6.eq) goto loc_838FAF74;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fad30
	if (cr6.eq) goto loc_838FAD30;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// li r30,3
	ctx.r30.s64 = 3;
	// lbz r7,2(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// subf r29,r7,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r6,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r6.u32);
	// stw r8,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r8.u32);
	// stw r7,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r7.u32);
	// stw r29,-40(r1)
	PPC_STORE_U32(ctx.r1.u32 + -40, ctx.r29.u32);
	// b 0x838fad38
	goto loc_838FAD38;
loc_838FAD30:
	// lbz r11,3(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// li r30,1
	ctx.r30.s64 = 1;
loc_838FAD38:
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r6,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r6.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fad80
	if (cr6.eq) goto loc_838FAD80;
	// lbz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r6,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u32);
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwz r6,-48(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r31,-64(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
loc_838FAD80:
	// lbz r9,9(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// bge cr6,0x838fae28
	if (!cr6.lt) goto loc_838FAE28;
	// lbz r10,3(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x838fadac
	if (!cr6.eq) goto loc_838FADAC;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x838fadac
	if (!cr6.eq) goto loc_838FADAC;
	// li r5,85
	ctx.r5.s64 = 85;
	// b 0x838fadc4
	goto loc_838FADC4;
loc_838FADAC:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x838fadc0
	if (!cr6.eq) goto loc_838FADC0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// li r5,17
	ctx.r5.s64 = 17;
	// beq cr6,0x838fadc4
	if (cr6.eq) goto loc_838FADC4;
loc_838FADC0:
	// li r5,255
	ctx.r5.s64 = 255;
loc_838FADC4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838faf74
	if (cr6.eq) goto loc_838FAF74;
	// neg r8,r31
	ctx.r8.s64 = -ctx.r31.s64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r7,r4,-1
	ctx.r7.s64 = ctx.r4.s64 + -1;
loc_838FADD8:
	// lbz r9,1(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// ble cr6,0x838fae18
	if (!cr6.gt) goto loc_838FAE18;
loc_838FADEC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838fadfc
	if (!cr6.gt) goto loc_838FADFC;
	// slw r4,r9,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x838fae08
	goto loc_838FAE08;
loc_838FADFC:
	// neg r4,r11
	ctx.r4.s64 = -ctx.r11.s64;
	// srw r3,r9,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// and r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 & ctx.r5.u64;
loc_838FAE08:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bgt cr6,0x838fadec
	if (cr6.gt) goto loc_838FADEC;
loc_838FAE18:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// stbu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x838fadd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FADD8;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838FAE28:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x838faec4
	if (!cr6.eq) goto loc_838FAEC4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mullw. r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x838faf74
	if (cr0.eq) goto loc_838FAF74;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_838FAE40:
	// divwu r11,r6,r30
	ctx.r11.u32 = PPCDivide(ctx.r6.u32, ctx.r30.u32);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// mullw r7,r11,r30
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r5,r7,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// twllei r30,0
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// neg r31,r5
	ctx.r31.s64 = -ctx.r5.s64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// ble cr6,0x838faeac
	if (!cr6.gt) goto loc_838FAEAC;
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
loc_838FAE84:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838fae94
	if (!cr6.gt) goto loc_838FAE94;
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x838fae9c
	goto loc_838FAE9C;
loc_838FAE94:
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
loc_838FAE9C:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x838fae84
	if (cr6.gt) goto loc_838FAE84;
loc_838FAEAC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r4.u32 = ea;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// blt cr6,0x838fae40
	if (cr6.lt) goto loc_838FAE40;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838FAEC4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw. r29,r11,r30
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// beq 0x838faf74
	if (cr0.eq) goto loc_838FAF74;
loc_838FAED4:
	// divwu r11,r5,r30
	ctx.r11.u32 = PPCDivide(ctx.r5.u32, ctx.r30.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mullw r6,r11,r30
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// twllei r30,0
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// lwzx r31,r10,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// neg r6,r31
	ctx.r6.s64 = -ctx.r31.s64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// ble cr6,0x838faf54
	if (!cr6.gt) goto loc_838FAF54;
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
loc_838FAF28:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x838faf3c
	if (!cr6.gt) goto loc_838FAF3C;
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x838faf48
	goto loc_838FAF48;
loc_838FAF3C:
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// srw r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
loc_838FAF48:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x838faf28
	if (cr6.gt) goto loc_838FAF28;
loc_838FAF54:
	// rlwinm r11,r9,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// blt cr6,0x838faed4
	if (cr6.lt) goto loc_838FAED4;
loc_838FAF74:
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FAF78"))) PPC_WEAK_FUNC(sub_838FAF78);
PPC_FUNC_IMPL(__imp__sub_838FAF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x838fb034
	if (!cr6.eq) goto loc_838FB034;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// bne cr6,0x838fafd8
	if (!cr6.eq) goto loc_838FAFD8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838FAFA8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x838fafa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FAFA8;
	// blr 
	return;
loc_838FAFD8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838FAFE4:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x838fafe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FAFE4;
	// blr 
	return;
loc_838FB034:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne cr6,0x838fb07c
	if (!cr6.eq) goto loc_838FB07C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838FB05C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x838fb05c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FB05C;
	// blr 
	return;
loc_838FB07C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838FB088:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x838fb088
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FB088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB0B8"))) PPC_WEAK_FUNC(sub_838FB0B8);
PPC_FUNC_IMPL(__imp__sub_838FB0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x838fb13c
	if (!cr6.eq) goto loc_838FB13C;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x838fb100
	if (!cr6.eq) goto loc_838FB100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838FB0E4:
	// lbzu r10,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subfic r9,r10,255
	xer.ca = ctx.r10.u32 <= 255;
	ctx.r9.s64 = 255 - ctx.r10.s64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x838fb0e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FB0E4;
	// blr 
	return;
loc_838FB100:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838FB10C:
	// lbzu r10,6(r11)
	ea = 6 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subfic r9,r10,255
	xer.ca = ctx.r10.u32 <= 255;
	ctx.r9.s64 = 255 - ctx.r10.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfic r6,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r7.s64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// bdnz 0x838fb10c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FB10C;
	// blr 
	return;
loc_838FB13C:
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bne cr6,0x838fb190
	if (!cr6.eq) goto loc_838FB190;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_838FB164:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subfic r7,r9,255
	xer.ca = ctx.r9.u32 <= 255;
	ctx.r7.s64 = 255 - ctx.r9.s64;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stbu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x838fb164
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FB164;
	// blr 
	return;
loc_838FB190:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_838FB1A0:
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// subfic r9,r10,255
	xer.ca = ctx.r10.u32 <= 255;
	ctx.r9.s64 = 255 - ctx.r10.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfic r6,r7,255
	xer.ca = ctx.r7.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r7.s64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// bdnz 0x838fb1a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_838FB1A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB1D0"))) PPC_WEAK_FUNC(sub_838FB1D0);
PPC_FUNC_IMPL(__imp__sub_838FB1D0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fb354
	if (cr6.eq) goto loc_838FB354;
	// lwz r11,1404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1404);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb220
	if (cr6.eq) goto loc_838FB220;
	// lwz r11,1384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1384);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fb220
	if (cr6.eq) goto loc_838FB220;
	// lwz r10,1572(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1572);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// bctrl 
	ctx.lr = 0x838FB220;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_838FB220:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb24c
	if (cr6.eq) goto loc_838FB24C;
	// lwz r10,1400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r9,25,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// bl 0x838efb60
	ctx.lr = 0x838FB24C;
	sub_838EFB60(ctx, base);
loc_838FB24C:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb26c
	if (cr6.eq) goto loc_838FB26C;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838efae0
	ctx.lr = 0x838FB26C;
	sub_838EFAE0(ctx, base);
loc_838FB26C:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb290
	if (cr6.eq) goto loc_838FB290;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,1616(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1616);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838fab40
	ctx.lr = 0x838FB290;
	sub_838FAB40(ctx, base);
loc_838FB290:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb2b0
	if (cr6.eq) goto loc_838FB2B0;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838efaa0
	ctx.lr = 0x838FB2B0;
	sub_838EFAA0(ctx, base);
loc_838FB2B0:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb2d4
	if (cr6.eq) goto loc_838FB2D4;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r5,r31,1701
	ctx.r5.s64 = ctx.r31.s64 + 1701;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838face0
	ctx.lr = 0x838FB2D4;
	sub_838FACE0(ctx, base);
loc_838FB2D4:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb2f4
	if (cr6.eq) goto loc_838FB2F4;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838faf78
	ctx.lr = 0x838FB2F4;
	sub_838FAF78(ctx, base);
loc_838FB2F4:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb314
	if (cr6.eq) goto loc_838FB314;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838fb0b8
	ctx.lr = 0x838FB314;
	sub_838FB0B8(ctx, base);
loc_838FB314:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb334
	if (cr6.eq) goto loc_838FB334;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838efd48
	ctx.lr = 0x838FB334;
	sub_838EFD48(ctx, base);
loc_838FB334:
	// lwz r11,1404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1404);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fb354
	if (cr6.eq) goto loc_838FB354;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x838ef9b0
	ctx.lr = 0x838FB354;
	sub_838EF9B0(ctx, base);
loc_838FB354:
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

__attribute__((alias("__imp__sub_838FB36C"))) PPC_WEAK_FUNC(sub_838FB36C);
PPC_FUNC_IMPL(__imp__sub_838FB36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB370"))) PPC_WEAK_FUNC(sub_838FB370);
PPC_FUNC_IMPL(__imp__sub_838FB370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r11,15368
	ctx.r10.s64 = ctx.r11.s64 + 15368;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB380"))) PPC_WEAK_FUNC(sub_838FB380);
PPC_FUNC_IMPL(__imp__sub_838FB380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB38C"))) PPC_WEAK_FUNC(sub_838FB38C);
PPC_FUNC_IMPL(__imp__sub_838FB38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB390"))) PPC_WEAK_FUNC(sub_838FB390);
PPC_FUNC_IMPL(__imp__sub_838FB390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB39C"))) PPC_WEAK_FUNC(sub_838FB39C);
PPC_FUNC_IMPL(__imp__sub_838FB39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB3A0"))) PPC_WEAK_FUNC(sub_838FB3A0);
PPC_FUNC_IMPL(__imp__sub_838FB3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB3B4"))) PPC_WEAK_FUNC(sub_838FB3B4);
PPC_FUNC_IMPL(__imp__sub_838FB3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB3B8"))) PPC_WEAK_FUNC(sub_838FB3B8);
PPC_FUNC_IMPL(__imp__sub_838FB3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB3C4"))) PPC_WEAK_FUNC(sub_838FB3C4);
PPC_FUNC_IMPL(__imp__sub_838FB3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB3C8"))) PPC_WEAK_FUNC(sub_838FB3C8);
PPC_FUNC_IMPL(__imp__sub_838FB3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB3D8"))) PPC_WEAK_FUNC(sub_838FB3D8);
PPC_FUNC_IMPL(__imp__sub_838FB3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bge cr6,0x838fb41c
	if (!cr6.lt) goto loc_838FB41C;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838fb41c
	if (cr6.eq) goto loc_838FB41C;
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
loc_838FB404:
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// beq cr6,0x838fb424
	if (cr6.eq) goto loc_838FB424;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838fb404
	if (!cr6.eq) goto loc_838FB404;
loc_838FB41C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_838FB424:
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB430"))) PPC_WEAK_FUNC(sub_838FB430);
PPC_FUNC_IMPL(__imp__sub_838FB430) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB444"))) PPC_WEAK_FUNC(sub_838FB444);
PPC_FUNC_IMPL(__imp__sub_838FB444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB448"))) PPC_WEAK_FUNC(sub_838FB448);
PPC_FUNC_IMPL(__imp__sub_838FB448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stb r10,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB464"))) PPC_WEAK_FUNC(sub_838FB464);
PPC_FUNC_IMPL(__imp__sub_838FB464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB468"))) PPC_WEAK_FUNC(sub_838FB468);
PPC_FUNC_IMPL(__imp__sub_838FB468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB47C"))) PPC_WEAK_FUNC(sub_838FB47C);
PPC_FUNC_IMPL(__imp__sub_838FB47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB480"))) PPC_WEAK_FUNC(sub_838FB480);
PPC_FUNC_IMPL(__imp__sub_838FB480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FB488;
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x838fb4ec
	if (cr6.eq) goto loc_838FB4EC;
	// addi r11,r5,15
	ctx.r11.s64 = ctx.r5.s64 + 15;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x838fb4c0
	if (!cr6.gt) goto loc_838FB4C0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_838FB4C0:
	// bl 0x82416260
	ctx.lr = 0x838FB4C4;
	sub_82416260(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stb r10,8(r9)
	PPC_STORE_U8(ctx.r9.u32 + 8, ctx.r10.u8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838FB4EC:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r10,r11,15368
	ctx.r10.s64 = ctx.r11.s64 + 15368;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB500"))) PPC_WEAK_FUNC(sub_838FB500);
PPC_FUNC_IMPL(__imp__sub_838FB500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x838fb540
	if (!cr6.gt) goto loc_838FB540;
	// lbz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// addi r10,r8,8
	ctx.r10.s64 = ctx.r8.s64 + 8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838fb540
	if (cr6.eq) goto loc_838FB540;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
loc_838FB528:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x838fb548
	if (cr6.eq) goto loc_838FB548;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838fb528
	if (!cr6.eq) goto loc_838FB528;
loc_838FB540:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_838FB548:
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB554"))) PPC_WEAK_FUNC(sub_838FB554);
PPC_FUNC_IMPL(__imp__sub_838FB554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB558"))) PPC_WEAK_FUNC(sub_838FB558);
PPC_FUNC_IMPL(__imp__sub_838FB558) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,15368
	ctx.r30.s64 = ctx.r11.s64 + 15368;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838fb588
	if (cr6.eq) goto loc_838FB588;
	// bl 0x82416268
	ctx.lr = 0x838FB588;
	sub_82416268(ctx, base);
loc_838FB588:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_838FB5A4"))) PPC_WEAK_FUNC(sub_838FB5A4);
PPC_FUNC_IMPL(__imp__sub_838FB5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB5A8"))) PPC_WEAK_FUNC(sub_838FB5A8);
PPC_FUNC_IMPL(__imp__sub_838FB5A8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x838fb480
	sub_838FB480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB5B0"))) PPC_WEAK_FUNC(sub_838FB5B0);
PPC_FUNC_IMPL(__imp__sub_838FB5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,15368
	ctx.r10.s64 = ctx.r11.s64 + 15368;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82416268
	sub_82416268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB5C8"))) PPC_WEAK_FUNC(sub_838FB5C8);
PPC_FUNC_IMPL(__imp__sub_838FB5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB5CC"))) PPC_WEAK_FUNC(sub_838FB5CC);
PPC_FUNC_IMPL(__imp__sub_838FB5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB5D0"))) PPC_WEAK_FUNC(sub_838FB5D0);
PPC_FUNC_IMPL(__imp__sub_838FB5D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FB5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x838fb638
	if (!cr6.gt) goto loc_838FB638;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,15368
	ctx.r29.s64 = ctx.r10.s64 + 15368;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x838fb480
	ctx.lr = 0x838FB60C;
	sub_838FB480(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x831ce980
	ctx.lr = 0x838FB624;
	sub_831CE980(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x838fb638
	if (cr6.eq) goto loc_838FB638;
	// bl 0x82416268
	ctx.lr = 0x838FB638;
	sub_82416268(ctx, base);
loc_838FB638:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB640"))) PPC_WEAK_FUNC(sub_838FB640);
PPC_FUNC_IMPL(__imp__sub_838FB640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FB648;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x838fb6a8
	if (cr6.gt) goto loc_838FB6A8;
	// addi r10,r5,8
	ctx.r10.s64 = ctx.r5.s64 + 8;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x838fb6a8
	if (cr6.gt) goto loc_838FB6A8;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// bl 0x831ce420
	ctx.lr = 0x838FB684;
	sub_831CE420(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r10,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838FB6A8:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r28,r11,15368
	ctx.r28.s64 = ctx.r11.s64 + 15368;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838fb480
	ctx.lr = 0x838FB6C4;
	sub_838FB480(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831ce980
	ctx.lr = 0x838FB6D8;
	sub_831CE980(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// beq cr6,0x838fb6ec
	if (cr6.eq) goto loc_838FB6EC;
	// bl 0x82416268
	ctx.lr = 0x838FB6EC;
	sub_82416268(ctx, base);
loc_838FB6EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB6F8"))) PPC_WEAK_FUNC(sub_838FB6F8);
PPC_FUNC_IMPL(__imp__sub_838FB6F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FB700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r10,r5
	ctx.r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// ble cr6,0x838fb734
	if (!cr6.gt) goto loc_838FB734;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x838fb5d0
	ctx.lr = 0x838FB734;
	sub_838FB5D0(ctx, base);
loc_838FB734:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831ce420
	ctx.lr = 0x838FB750;
	sub_831CE420(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r10,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB774"))) PPC_WEAK_FUNC(sub_838FB774);
PPC_FUNC_IMPL(__imp__sub_838FB774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB778"))) PPC_WEAK_FUNC(sub_838FB778);
PPC_FUNC_IMPL(__imp__sub_838FB778) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FB7A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fb7a0
	if (!cr6.eq) goto loc_838FB7A0;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x838fb480
	ctx.lr = 0x838FB7C8;
	sub_838FB480(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x838FB7DC;
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

__attribute__((alias("__imp__sub_838FB7F8"))) PPC_WEAK_FUNC(sub_838FB7F8);
PPC_FUNC_IMPL(__imp__sub_838FB7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FB800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x838fb480
	ctx.lr = 0x838FB820;
	sub_838FB480(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x831ce980
	ctx.lr = 0x838FB834;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB840"))) PPC_WEAK_FUNC(sub_838FB840);
PPC_FUNC_IMPL(__imp__sub_838FB840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FB844:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fb844
	if (!cr6.eq) goto loc_838FB844;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x838fb640
	sub_838FB640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB864"))) PPC_WEAK_FUNC(sub_838FB864);
PPC_FUNC_IMPL(__imp__sub_838FB864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB868"))) PPC_WEAK_FUNC(sub_838FB868);
PPC_FUNC_IMPL(__imp__sub_838FB868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x838fb640
	sub_838FB640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB878"))) PPC_WEAK_FUNC(sub_838FB878);
PPC_FUNC_IMPL(__imp__sub_838FB878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FB87C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fb87c
	if (!cr6.eq) goto loc_838FB87C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x838fb6f8
	sub_838FB6F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB89C"))) PPC_WEAK_FUNC(sub_838FB89C);
PPC_FUNC_IMPL(__imp__sub_838FB89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB8A0"))) PPC_WEAK_FUNC(sub_838FB8A0);
PPC_FUNC_IMPL(__imp__sub_838FB8A0) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// bl 0x838fb6f8
	ctx.lr = 0x838FB8BC;
	sub_838FB6F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FB8CC"))) PPC_WEAK_FUNC(sub_838FB8CC);
PPC_FUNC_IMPL(__imp__sub_838FB8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB8D0"))) PPC_WEAK_FUNC(sub_838FB8D0);
PPC_FUNC_IMPL(__imp__sub_838FB8D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x838fb6f8
	sub_838FB6F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FB8E0"))) PPC_WEAK_FUNC(sub_838FB8E0);
PPC_FUNC_IMPL(__imp__sub_838FB8E0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FB904;
	sub_838FB6F8(ctx, base);
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

__attribute__((alias("__imp__sub_838FB91C"))) PPC_WEAK_FUNC(sub_838FB91C);
PPC_FUNC_IMPL(__imp__sub_838FB91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB920"))) PPC_WEAK_FUNC(sub_838FB920);
PPC_FUNC_IMPL(__imp__sub_838FB920) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FB938:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fb938
	if (!cr6.eq) goto loc_838FB938;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FB95C;
	sub_838FB6F8(ctx, base);
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

__attribute__((alias("__imp__sub_838FB974"))) PPC_WEAK_FUNC(sub_838FB974);
PPC_FUNC_IMPL(__imp__sub_838FB974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FB978"))) PPC_WEAK_FUNC(sub_838FB978);
PPC_FUNC_IMPL(__imp__sub_838FB978) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x838fb480
	ctx.lr = 0x838FB9AC;
	sub_838FB480(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x831ce980
	ctx.lr = 0x838FB9C4;
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

__attribute__((alias("__imp__sub_838FB9E0"))) PPC_WEAK_FUNC(sub_838FB9E0);
PPC_FUNC_IMPL(__imp__sub_838FB9E0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb640
	ctx.lr = 0x838FBA04;
	sub_838FB640(ctx, base);
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

__attribute__((alias("__imp__sub_838FBA1C"))) PPC_WEAK_FUNC(sub_838FBA1C);
PPC_FUNC_IMPL(__imp__sub_838FBA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FBA20"))) PPC_WEAK_FUNC(sub_838FBA20);
PPC_FUNC_IMPL(__imp__sub_838FBA20) {
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
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fba6c
	if (cr6.eq) goto loc_838FBA6C;
loc_838FBA44:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x838FBA64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fba44
	if (!cr6.eq) goto loc_838FBA44;
loc_838FBA6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_838FBA90"))) PPC_WEAK_FUNC(sub_838FBA90);
PPC_FUNC_IMPL(__imp__sub_838FBA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fbae0
	if (cr6.eq) goto loc_838FBAE0;
loc_838FBA9C:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_838FBAA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x838fbacc
	if (cr6.eq) goto loc_838FBACC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838fbaa8
	if (cr6.eq) goto loc_838FBAA8;
loc_838FBACC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fba9c
	if (!cr6.eq) goto loc_838FBA9C;
loc_838FBAE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FBAE8"))) PPC_WEAK_FUNC(sub_838FBAE8);
PPC_FUNC_IMPL(__imp__sub_838FBAE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fbb38
	if (cr6.eq) goto loc_838FBB38;
loc_838FBAF4:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_838FBB00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x838fbb24
	if (cr6.eq) goto loc_838FBB24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838fbb00
	if (cr6.eq) goto loc_838FBB00;
loc_838FBB24:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fbaf4
	if (!cr6.eq) goto loc_838FBAF4;
loc_838FBB38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FBB40"))) PPC_WEAK_FUNC(sub_838FBB40);
PPC_FUNC_IMPL(__imp__sub_838FBB40) {
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
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fbb84
	if (cr6.eq) goto loc_838FBB84;
loc_838FBB5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBB70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fbb9c
	if (!cr6.eq) goto loc_838FBB9C;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fbb5c
	if (!cr6.eq) goto loc_838FBB5C;
loc_838FBB84:
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
loc_838FBB9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBBB0;
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

__attribute__((alias("__imp__sub_838FBBC4"))) PPC_WEAK_FUNC(sub_838FBBC4);
PPC_FUNC_IMPL(__imp__sub_838FBBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FBBC8"))) PPC_WEAK_FUNC(sub_838FBBC8);
PPC_FUNC_IMPL(__imp__sub_838FBBC8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x838fba90
	ctx.lr = 0x838FBBE4;
	sub_838FBA90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fbc24
	if (cr6.eq) goto loc_838FBC24;
loc_838FBBF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBC04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fbc40
	if (!cr6.eq) goto loc_838FBC40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbae8
	ctx.lr = 0x838FBC18;
	sub_838FBAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fbbf0
	if (!cr6.eq) goto loc_838FBBF0;
loc_838FBC24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838FBC28:
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
loc_838FBC40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBC54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x838fbc28
	goto loc_838FBC28;
}

__attribute__((alias("__imp__sub_838FBC58"))) PPC_WEAK_FUNC(sub_838FBC58);
PPC_FUNC_IMPL(__imp__sub_838FBC58) {
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
	// lwz r31,40(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fbc9c
	if (cr6.eq) goto loc_838FBC9C;
loc_838FBC74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBC88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fbcb4
	if (!cr6.eq) goto loc_838FBCB4;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fbc74
	if (!cr6.eq) goto loc_838FBC74;
loc_838FBC9C:
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
loc_838FBCB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBCC8;
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

__attribute__((alias("__imp__sub_838FBCDC"))) PPC_WEAK_FUNC(sub_838FBCDC);
PPC_FUNC_IMPL(__imp__sub_838FBCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FBCE0"))) PPC_WEAK_FUNC(sub_838FBCE0);
PPC_FUNC_IMPL(__imp__sub_838FBCE0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x838fbae8
	ctx.lr = 0x838FBCFC;
	sub_838FBAE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fbd74
	if (cr6.eq) goto loc_838FBD74;
loc_838FBD08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBD1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fbd90
	if (!cr6.eq) goto loc_838FBD90;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fbd74
	if (cr6.eq) goto loc_838FBD74;
loc_838FBD30:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_838FBD3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x838fbd60
	if (cr6.eq) goto loc_838FBD60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838fbd3c
	if (cr6.eq) goto loc_838FBD3C;
loc_838FBD60:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838fbd08
	if (cr6.eq) goto loc_838FBD08;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fbd30
	if (!cr6.eq) goto loc_838FBD30;
loc_838FBD74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838FBD78:
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
loc_838FBD90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBDA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x838fbd78
	goto loc_838FBD78;
}

__attribute__((alias("__imp__sub_838FBDA8"))) PPC_WEAK_FUNC(sub_838FBDA8);
PPC_FUNC_IMPL(__imp__sub_838FBDA8) {
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
	// beq cr6,0x838fbdec
	if (cr6.eq) goto loc_838FBDEC;
loc_838FBDC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBDD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fbe04
	if (!cr6.eq) goto loc_838FBE04;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fbdc4
	if (!cr6.eq) goto loc_838FBDC4;
loc_838FBDEC:
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
loc_838FBE04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBE18;
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

__attribute__((alias("__imp__sub_838FBE2C"))) PPC_WEAK_FUNC(sub_838FBE2C);
PPC_FUNC_IMPL(__imp__sub_838FBE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FBE30"))) PPC_WEAK_FUNC(sub_838FBE30);
PPC_FUNC_IMPL(__imp__sub_838FBE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FBE38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subfe r9,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x838FBE74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838fbebc
	if (cr6.eq) goto loc_838FBEBC;
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fbebc
	if (cr6.eq) goto loc_838FBEBC;
loc_838FBE8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBEA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fbebc
	if (cr6.eq) goto loc_838FBEBC;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fbe8c
	if (!cr6.eq) goto loc_838FBE8C;
loc_838FBEBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBED4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FBEDC"))) PPC_WEAK_FUNC(sub_838FBEDC);
PPC_FUNC_IMPL(__imp__sub_838FBEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FBEE0"))) PPC_WEAK_FUNC(sub_838FBEE0);
PPC_FUNC_IMPL(__imp__sub_838FBEE0) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fbf28
	if (cr6.eq) goto loc_838FBF28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBF08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fbf28
	if (cr6.eq) goto loc_838FBF28;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838FBF28:
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

__attribute__((alias("__imp__sub_838FBF3C"))) PPC_WEAK_FUNC(sub_838FBF3C);
PPC_FUNC_IMPL(__imp__sub_838FBF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FBF40"))) PPC_WEAK_FUNC(sub_838FBF40);
PPC_FUNC_IMPL(__imp__sub_838FBF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FBF48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fbf9c
	if (cr6.eq) goto loc_838FBF9C;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r29,r11,11440
	ctx.r29.s64 = ctx.r11.s64 + 11440;
loc_838FBF68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBF84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FBF90;
	sub_831D3290(ctx, base);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fbf68
	if (!cr6.eq) goto loc_838FBF68;
loc_838FBF9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FBFA4"))) PPC_WEAK_FUNC(sub_838FBFA4);
PPC_FUNC_IMPL(__imp__sub_838FBFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FBFA8"))) PPC_WEAK_FUNC(sub_838FBFA8);
PPC_FUNC_IMPL(__imp__sub_838FBFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FBFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FBFD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fc01c
	if (cr6.eq) goto loc_838FC01C;
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fc01c
	if (cr6.eq) goto loc_838FC01C;
loc_838FBFEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FC004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fc01c
	if (cr6.eq) goto loc_838FC01C;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fbfec
	if (!cr6.eq) goto loc_838FBFEC;
loc_838FC01C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FC034;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FC03C"))) PPC_WEAK_FUNC(sub_838FC03C);
PPC_FUNC_IMPL(__imp__sub_838FC03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC040"))) PPC_WEAK_FUNC(sub_838FC040);
PPC_FUNC_IMPL(__imp__sub_838FC040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FC048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r29,r11,11496
	ctx.r29.s64 = ctx.r11.s64 + 11496;
	// ble cr6,0x838fc07c
	if (!cr6.gt) goto loc_838FC07C;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_838FC068:
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FC074;
	sub_831D3290(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838fc068
	if (!cr0.eq) goto loc_838FC068;
loc_838FC07C:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x831d3290
	ctx.lr = 0x838FC090;
	sub_831D3290(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FC098"))) PPC_WEAK_FUNC(sub_838FC098);
PPC_FUNC_IMPL(__imp__sub_838FC098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_838FC0B4"))) PPC_WEAK_FUNC(sub_838FC0B4);
PPC_FUNC_IMPL(__imp__sub_838FC0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC0B8"))) PPC_WEAK_FUNC(sub_838FC0B8);
PPC_FUNC_IMPL(__imp__sub_838FC0B8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FC0E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fc0e0
	if (!cr6.eq) goto loc_838FC0E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FC104;
	sub_838FB640(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lbz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// stb r9,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_838FC12C"))) PPC_WEAK_FUNC(sub_838FC12C);
PPC_FUNC_IMPL(__imp__sub_838FC12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC130"))) PPC_WEAK_FUNC(sub_838FC130);
PPC_FUNC_IMPL(__imp__sub_838FC130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_838FC14C"))) PPC_WEAK_FUNC(sub_838FC14C);
PPC_FUNC_IMPL(__imp__sub_838FC14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC150"))) PPC_WEAK_FUNC(sub_838FC150);
PPC_FUNC_IMPL(__imp__sub_838FC150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_838FC16C"))) PPC_WEAK_FUNC(sub_838FC16C);
PPC_FUNC_IMPL(__imp__sub_838FC16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC170"))) PPC_WEAK_FUNC(sub_838FC170);
PPC_FUNC_IMPL(__imp__sub_838FC170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FC178;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r29,r11,11668
	ctx.r29.s64 = ctx.r11.s64 + 11668;
	// ble cr6,0x838fc1ac
	if (!cr6.gt) goto loc_838FC1AC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_838FC198:
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FC1A4;
	sub_831D3290(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838fc198
	if (!cr0.eq) goto loc_838FC198;
loc_838FC1AC:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x831d3290
	ctx.lr = 0x838FC1C0;
	sub_831D3290(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FC1C8"))) PPC_WEAK_FUNC(sub_838FC1C8);
PPC_FUNC_IMPL(__imp__sub_838FC1C8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FC1F0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fc1f0
	if (!cr6.eq) goto loc_838FC1F0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FC214;
	sub_838FB640(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_838FC234"))) PPC_WEAK_FUNC(sub_838FC234);
PPC_FUNC_IMPL(__imp__sub_838FC234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC238"))) PPC_WEAK_FUNC(sub_838FC238);
PPC_FUNC_IMPL(__imp__sub_838FC238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_838FC254"))) PPC_WEAK_FUNC(sub_838FC254);
PPC_FUNC_IMPL(__imp__sub_838FC254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC258"))) PPC_WEAK_FUNC(sub_838FC258);
PPC_FUNC_IMPL(__imp__sub_838FC258) {
	PPC_FUNC_PROLOGUE();
	// stw r3,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r3.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r4.u32);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FC274"))) PPC_WEAK_FUNC(sub_838FC274);
PPC_FUNC_IMPL(__imp__sub_838FC274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC278"))) PPC_WEAK_FUNC(sub_838FC278);
PPC_FUNC_IMPL(__imp__sub_838FC278) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// beq cr6,0x838fc2c8
	if (cr6.eq) goto loc_838FC2C8;
loc_838FC284:
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_838FC290:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x838fc2b4
	if (cr6.eq) goto loc_838FC2B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838fc290
	if (cr6.eq) goto loc_838FC290;
loc_838FC2B4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838fc2d0
	if (cr6.eq) goto loc_838FC2D0;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bne cr6,0x838fc284
	if (!cr6.eq) goto loc_838FC284;
loc_838FC2C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_838FC2D0:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FC2D8"))) PPC_WEAK_FUNC(sub_838FC2D8);
PPC_FUNC_IMPL(__imp__sub_838FC2D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831d8218
	ctx.lr = 0x838FC31C;
	sub_831D8218(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FC32C"))) PPC_WEAK_FUNC(sub_838FC32C);
PPC_FUNC_IMPL(__imp__sub_838FC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC330"))) PPC_WEAK_FUNC(sub_838FC330);
PPC_FUNC_IMPL(__imp__sub_838FC330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FC338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r8,r10,11736
	ctx.r8.s64 = ctx.r10.s64 + 11736;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r7,r9,15368
	ctx.r7.s64 = ctx.r9.s64 + 15368;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
loc_838FC380:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fc380
	if (!cr6.eq) goto loc_838FC380;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FC3A0;
	sub_838FB640(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_838FC3A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fc3a4
	if (!cr6.eq) goto loc_838FC3A4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FC3CC;
	sub_838FB640(ctx, base);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FC3E4"))) PPC_WEAK_FUNC(sub_838FC3E4);
PPC_FUNC_IMPL(__imp__sub_838FC3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC3E8"))) PPC_WEAK_FUNC(sub_838FC3E8);
PPC_FUNC_IMPL(__imp__sub_838FC3E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r11,15368
	ctx.r30.s64 = ctx.r11.s64 + 15368;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838fc418
	if (cr6.eq) goto loc_838FC418;
	// bl 0x82416268
	ctx.lr = 0x838FC418;
	sub_82416268(ctx, base);
loc_838FC418:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838fc428
	if (cr6.eq) goto loc_838FC428;
	// bl 0x82416268
	ctx.lr = 0x838FC428;
	sub_82416268(ctx, base);
loc_838FC428:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r10,r11,-5184
	ctx.r10.s64 = ctx.r11.s64 + -5184;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_838FC44C"))) PPC_WEAK_FUNC(sub_838FC44C);
PPC_FUNC_IMPL(__imp__sub_838FC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC450"))) PPC_WEAK_FUNC(sub_838FC450);
PPC_FUNC_IMPL(__imp__sub_838FC450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838FC458;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x838fc5dc
	if (!cr6.gt) goto loc_838FC5DC;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lis r9,-31769
	ctx.r9.s64 = -2082013184;
	// addi r27,r8,11360
	ctx.r27.s64 = ctx.r8.s64 + 11360;
	// addi r29,r9,29288
	ctx.r29.s64 = ctx.r9.s64 + 29288;
loc_838FC488:
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,38
	cr6.compare<uint32_t>(ctx.r9.u32, 38, xer);
	// bne cr6,0x838fc520
	if (!cr6.eq) goto loc_838FC520;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, xer);
	// bge cr6,0x838fc50c
	if (!cr6.lt) goto loc_838FC50C;
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r8,35
	cr6.compare<uint32_t>(ctx.r8.u32, 35, xer);
	// bne cr6,0x838fc50c
	if (!cr6.eq) goto loc_838FC50C;
	// lbz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// bne cr6,0x838fc50c
	if (!cr6.eq) goto loc_838FC50C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// bge cr6,0x838fc5cc
	if (!cr6.lt) goto loc_838FC5CC;
loc_838FC4D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FC4DC;
	sub_838FB6F8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,59
	cr6.compare<uint32_t>(ctx.r10.u32, 59, xer);
	// beq cr6,0x838fc5cc
	if (cr6.eq) goto loc_838FC5CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x838fc4d0
	if (cr6.lt) goto loc_838FC4D0;
	// b 0x838fc5cc
	goto loc_838FC5CC;
loc_838FC50C:
	// cmplwi cr6,r6,38
	cr6.compare<uint32_t>(ctx.r6.u32, 38, xer);
	// bne cr6,0x838fc520
	if (!cr6.eq) goto loc_838FC520;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x838fc5c0
	goto loc_838FC5C0;
loc_838FC520:
	// cmplwi cr6,r6,60
	cr6.compare<uint32_t>(ctx.r6.u32, 60, xer);
	// bne cr6,0x838fc534
	if (!cr6.eq) goto loc_838FC534;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x838fc5c0
	goto loc_838FC5C0;
loc_838FC534:
	// cmplwi cr6,r6,62
	cr6.compare<uint32_t>(ctx.r6.u32, 62, xer);
	// bne cr6,0x838fc548
	if (!cr6.eq) goto loc_838FC548;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// b 0x838fc5c0
	goto loc_838FC5C0;
loc_838FC548:
	// cmplwi cr6,r6,34
	cr6.compare<uint32_t>(ctx.r6.u32, 34, xer);
	// bne cr6,0x838fc55c
	if (!cr6.eq) goto loc_838FC55C;
	// lwz r5,40(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x838fc5c0
	goto loc_838FC5C0;
loc_838FC55C:
	// cmplwi cr6,r6,39
	cr6.compare<uint32_t>(ctx.r6.u32, 39, xer);
	// bne cr6,0x838fc570
	if (!cr6.eq) goto loc_838FC570;
	// lwz r5,52(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// b 0x838fc5c0
	goto loc_838FC5C0;
loc_838FC570:
	// cmplwi cr6,r6,32
	cr6.compare<uint32_t>(ctx.r6.u32, 32, xer);
	// bge cr6,0x838fc5b4
	if (!cr6.lt) goto loc_838FC5B4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x838fc2d8
	ctx.lr = 0x838FC588;
	sub_838FC2D8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_838FC590:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838fc590
	if (!cr6.eq) goto loc_838FC590;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x838fc5c0
	goto loc_838FC5C0;
loc_838FC5B4:
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_838FC5C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FC5C8;
	sub_838FB6F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_838FC5CC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x838fc488
	if (cr6.lt) goto loc_838FC488;
loc_838FC5DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FC5E4"))) PPC_WEAK_FUNC(sub_838FC5E4);
PPC_FUNC_IMPL(__imp__sub_838FC5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC5E8"))) PPC_WEAK_FUNC(sub_838FC5E8);
PPC_FUNC_IMPL(__imp__sub_838FC5E8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// lis r8,-31743
	ctx.r8.s64 = -2080309248;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,11752
	ctx.r7.s64 = ctx.r9.s64 + 11752;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r6,r8,15368
	ctx.r6.s64 = ctx.r8.s64 + 15368;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FC630"))) PPC_WEAK_FUNC(sub_838FC630);
PPC_FUNC_IMPL(__imp__sub_838FC630) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,11752
	ctx.r10.s64 = ctx.r11.s64 + 11752;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x838fc688
	if (cr6.eq) goto loc_838FC688;
loc_838FC660:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x838FC680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fc660
	if (!cr6.eq) goto loc_838FC660;
loc_838FC688:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r10,r11,15368
	ctx.r10.s64 = ctx.r11.s64 + 15368;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x838fc6a0
	if (cr6.eq) goto loc_838FC6A0;
	// bl 0x82416268
	ctx.lr = 0x838FC6A0;
	sub_82416268(ctx, base);
loc_838FC6A0:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r10,r11,-5184
	ctx.r10.s64 = ctx.r11.s64 + -5184;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_838FC6C4"))) PPC_WEAK_FUNC(sub_838FC6C4);
PPC_FUNC_IMPL(__imp__sub_838FC6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC6C8"))) PPC_WEAK_FUNC(sub_838FC6C8);
PPC_FUNC_IMPL(__imp__sub_838FC6C8) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838fc744
	if (!cr6.eq) goto loc_838FC744;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FC700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FC708;
	sub_838FBDA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fc72c
	if (cr6.eq) goto loc_838FC72C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FC718;
	sub_838FBDA8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x838fe530
	ctx.lr = 0x838FC72C;
	sub_838FE530(ctx, base);
loc_838FC72C:
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
loc_838FC744:
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fc76c
	if (cr6.eq) goto loc_838FC76C;
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// b 0x838fc770
	goto loc_838FC770;
loc_838FC76C:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_838FC770:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_838FC788"))) PPC_WEAK_FUNC(sub_838FC788);
PPC_FUNC_IMPL(__imp__sub_838FC788) {
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
	// bl 0x838fba20
	ctx.lr = 0x838FC7A4;
	sub_838FBA20(ctx, base);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// li r30,0
	ctx.r30.s64 = 0;
loc_838FC7AC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x838fc824
	if (cr6.eq) goto loc_838FC824;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fc824
	if (cr6.eq) goto loc_838FC824;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x838fc804
	if (cr6.eq) goto loc_838FC804;
loc_838FC7CC:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x838fc7e4
	if (cr6.eq) goto loc_838FC7E4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x838fc7cc
	if (!cr6.eq) goto loc_838FC7CC;
	// b 0x838fc804
	goto loc_838FC804;
loc_838FC7E4:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r7,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
loc_838FC804:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fc7ac
	if (cr6.eq) goto loc_838FC7AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FC820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x838fc7ac
	goto loc_838FC7AC;
loc_838FC824:
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

__attribute__((alias("__imp__sub_838FC83C"))) PPC_WEAK_FUNC(sub_838FC83C);
PPC_FUNC_IMPL(__imp__sub_838FC83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC840"))) PPC_WEAK_FUNC(sub_838FC840);
PPC_FUNC_IMPL(__imp__sub_838FC840) {
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x838fc278
	ctx.lr = 0x838FC854;
	sub_838FC278(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fc874
	if (cr6.eq) goto loc_838FC874;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_838FC874:
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

__attribute__((alias("__imp__sub_838FC888"))) PPC_WEAK_FUNC(sub_838FC888);
PPC_FUNC_IMPL(__imp__sub_838FC888) {
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x838fc278
	ctx.lr = 0x838FC8A8;
	sub_838FC278(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fc8bc
	if (cr6.eq) goto loc_838FC8BC;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x838fc8c0
	goto loc_838FC8C0;
loc_838FC8BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_838FC8C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838fc8ec
	if (cr6.eq) goto loc_838FC8EC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fc8e4
	if (cr6.eq) goto loc_838FC8E4;
	// bl 0x831d88a0
	ctx.lr = 0x838FC8D8;
	sub_831D88A0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x838fc8ec
	goto loc_838FC8EC;
loc_838FC8E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_838FC8EC:
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

__attribute__((alias("__imp__sub_838FC904"))) PPC_WEAK_FUNC(sub_838FC904);
PPC_FUNC_IMPL(__imp__sub_838FC904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FC908"))) PPC_WEAK_FUNC(sub_838FC908);
PPC_FUNC_IMPL(__imp__sub_838FC908) {
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x838fc278
	ctx.lr = 0x838FC928;
	sub_838FC278(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fc93c
	if (cr6.eq) goto loc_838FC93C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// b 0x838fc940
	goto loc_838FC940;
loc_838FC93C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_838FC940:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838fc970
	if (cr6.eq) goto loc_838FC970;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fc964
	if (cr6.eq) goto loc_838FC964;
	// bl 0x831d82e8
	ctx.lr = 0x838FC958;
	sub_831D82E8(ctx, base);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f1.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x838fc970
	goto loc_838FC970;
loc_838FC964:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f0,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f0.u64);
loc_838FC970:
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

__attribute__((alias("__imp__sub_838FC988"))) PPC_WEAK_FUNC(sub_838FC988);
PPC_FUNC_IMPL(__imp__sub_838FC988) {
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x838fc278
	ctx.lr = 0x838FC99C;
	sub_838FC278(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fc9b8
	if (!cr6.eq) goto loc_838FC9B8;
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
loc_838FC9B8:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,11476
	ctx.r4.s64 = ctx.r10.s64 + 11476;
	// bl 0x831d2de8
	ctx.lr = 0x838FC9CC;
	sub_831D2DE8(ctx, base);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FC9F0"))) PPC_WEAK_FUNC(sub_838FC9F0);
PPC_FUNC_IMPL(__imp__sub_838FC9F0) {
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
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// bl 0x838fc278
	ctx.lr = 0x838FCA04;
	sub_838FC278(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fca20
	if (!cr6.eq) goto loc_838FCA20;
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
loc_838FCA20:
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,11480
	ctx.r4.s64 = ctx.r10.s64 + 11480;
	// bl 0x831d2de8
	ctx.lr = 0x838FCA34;
	sub_831D2DE8(ctx, base);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 & ctx.r8.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FCA58"))) PPC_WEAK_FUNC(sub_838FCA58);
PPC_FUNC_IMPL(__imp__sub_838FCA58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FCA60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,44
	ctx.r29.s64 = ctx.r3.s64 + 44;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x838fc278
	ctx.lr = 0x838FCA7C;
	sub_838FC278(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fcab8
	if (cr6.eq) goto loc_838FCAB8;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_838FCA88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fca88
	if (!cr6.eq) goto loc_838FCA88;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FCAB0;
	sub_838FB640(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838FCAB8:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82416260
	ctx.lr = 0x838FCAC0;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fcafc
	if (cr6.eq) goto loc_838FCAFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838fc330
	ctx.lr = 0x838FCAD4;
	sub_838FC330(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fcafc
	if (cr6.eq) goto loc_838FCAFC;
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r3,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r3.u32);
	// stw r3,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838FCAFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FCB04;
	sub_838FBDA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fcb20
	if (cr6.eq) goto loc_838FCB20;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x838fe530
	ctx.lr = 0x838FCB20;
	sub_838FE530(ctx, base);
loc_838FCB20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FCB28"))) PPC_WEAK_FUNC(sub_838FCB28);
PPC_FUNC_IMPL(__imp__sub_838FCB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838FCB30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r29,r11,11424
	ctx.r29.s64 = ctx.r11.s64 + 11424;
	// ble cr6,0x838fcb68
	if (!cr6.gt) goto loc_838FCB68;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_838FCB54:
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FCB60;
	sub_831D3290(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x838fcb54
	if (!cr0.eq) goto loc_838FCB54;
loc_838FCB68:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x831d3290
	ctx.lr = 0x838FCB7C;
	sub_831D3290(ctx, base);
	// addi r11,r27,44
	ctx.r11.s64 = ctx.r27.s64 + 44;
	// lwz r30,76(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x838fcbe8
	if (cr6.eq) goto loc_838FCBE8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fcbe8
	if (cr6.eq) goto loc_838FCBE8;
loc_838FCB94:
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FCBA0;
	sub_831D3290(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FCBBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,32(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x838fcbe0
	if (!cr6.eq) goto loc_838FCBE0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fcbe8
	if (cr6.eq) goto loc_838FCBE8;
loc_838FCBE0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x838fcb94
	if (!cr6.eq) goto loc_838FCB94;
loc_838FCBE8:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fcc08
	if (!cr6.eq) goto loc_838FCC08;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FCC00;
	sub_831D3290(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838FCC08:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x838fcc60
	if (!cr6.eq) goto loc_838FCC60;
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FCC28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fcc60
	if (cr6.eq) goto loc_838FCC60;
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FCC3C;
	sub_831D3290(ctx, base);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r5,r26,1
	ctx.r5.s64 = ctx.r26.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FCC58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// b 0x838fccfc
	goto loc_838FCCFC;
loc_838FCC60:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FCC6C;
	sub_831D3290(ctx, base);
	// lwz r30,24(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fcccc
	if (cr6.eq) goto loc_838FCCCC;
	// addi r28,r26,1
	ctx.r28.s64 = ctx.r26.s64 + 1;
loc_838FCC7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FCC90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fcca4
	if (!cr6.eq) goto loc_838FCCA4;
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FCCA4;
	sub_831D3290(ctx, base);
loc_838FCCA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FCCC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,40(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x838fcc7c
	if (!cr6.eq) goto loc_838FCC7C;
loc_838FCCCC:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FCCD8;
	sub_831D3290(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x838fccf8
	if (!cr6.gt) goto loc_838FCCF8;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_838FCCE4:
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FCCF0;
	sub_831D3290(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x838fcce4
	if (!cr0.eq) goto loc_838FCCE4;
loc_838FCCF8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_838FCCFC:
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x831d3290
	ctx.lr = 0x838FCD0C;
	sub_831D3290(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FCD14"))) PPC_WEAK_FUNC(sub_838FCD14);
PPC_FUNC_IMPL(__imp__sub_838FCD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FCD18"))) PPC_WEAK_FUNC(sub_838FCD18);
PPC_FUNC_IMPL(__imp__sub_838FCD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FCD20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FCD38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fcd38
	if (!cr6.eq) goto loc_838FCD38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FCD5C;
	sub_838FB640(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r31,76(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x838fcdc0
	if (cr6.eq) goto loc_838FCDC0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fcdc0
	if (cr6.eq) goto loc_838FCDC0;
loc_838FCD7C:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x838fca58
	ctx.lr = 0x838FCD94;
	sub_838FCA58(ctx, base);
	// lwz r31,32(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fcdb8
	if (!cr6.eq) goto loc_838FCDB8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fcdc0
	if (cr6.eq) goto loc_838FCDC0;
loc_838FCDB8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fcd7c
	if (!cr6.eq) goto loc_838FCD7C;
loc_838FCDC0:
	// lwz r31,24(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fcdf8
	if (cr6.eq) goto loc_838FCDF8;
loc_838FCDCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FCDE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc6c8
	ctx.lr = 0x838FCDEC;
	sub_838FC6C8(ctx, base);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fcdcc
	if (!cr6.eq) goto loc_838FCDCC;
loc_838FCDF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FCE00"))) PPC_WEAK_FUNC(sub_838FCE00);
PPC_FUNC_IMPL(__imp__sub_838FCE00) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r8,r10,15368
	ctx.r8.s64 = ctx.r10.s64 + 15368;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r7,r9,-20920
	ctx.r7.s64 = ctx.r9.s64 + -20920;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lis r4,-32203
	ctx.r4.s64 = -2110455808;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r4,r4,-22544
	ctx.r4.s64 = ctx.r4.s64 + -22544;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x838fb640
	ctx.lr = 0x838FCE90;
	sub_838FB640(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_838FCEB4"))) PPC_WEAK_FUNC(sub_838FCEB4);
PPC_FUNC_IMPL(__imp__sub_838FCEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FCEB8"))) PPC_WEAK_FUNC(sub_838FCEB8);
PPC_FUNC_IMPL(__imp__sub_838FCEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838FCEC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x838fba20
	ctx.lr = 0x838FCED8;
	sub_838FBA20(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bgt cr6,0x838fcf10
	if (cr6.gt) goto loc_838FCF10;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FCF04;
	sub_838FE530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838FCF10:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r26,r11,15368
	ctx.r26.s64 = ctx.r11.s64 + 15368;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x838fb5d0
	ctx.lr = 0x838FCF28;
	sub_838FB5D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x838fcfd4
	if (!cr6.gt) goto loc_838FCFD4;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,10
	ctx.r27.s64 = 10;
loc_838FCF3C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838fcfd4
	if (cr6.eq) goto loc_838FCFD4;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// bne cr6,0x838fcf70
	if (!cr6.eq) goto loc_838FCF70;
	// subf r11,r4,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x838fb6f8
	ctx.lr = 0x838FCF64;
	sub_838FB6F8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x838fcfc8
	goto loc_838FCFC8;
loc_838FCF70:
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x838fcfc4
	if (!cr6.eq) goto loc_838FCFC4;
	// subf. r5,r4,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x838fcf88
	if (!cr0.gt) goto loc_838FCF88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x838fb6f8
	ctx.lr = 0x838FCF88;
	sub_838FB6F8(ctx, base);
loc_838FCF88:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x838fb6f8
	ctx.lr = 0x838FCF9C;
	sub_838FB6F8(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bne cr6,0x838fcfbc
	if (!cr6.eq) goto loc_838FCFBC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x838fcfcc
	goto loc_838FCFCC;
loc_838FCFBC:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x838fcfc8
	goto loc_838FCFC8;
loc_838FCFC4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_838FCFC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_838FCFCC:
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, xer);
	// blt cr6,0x838fcf3c
	if (cr6.lt) goto loc_838FCF3C;
loc_838FCFD4:
	// subf. r5,r4,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x838fcfe4
	if (cr0.eq) goto loc_838FCFE4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x838fb6f8
	ctx.lr = 0x838FCFE4;
	sub_838FB6F8(ctx, base);
loc_838FCFE4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x838FD008;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,44(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838fd030
	if (cr6.eq) goto loc_838FD030;
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, xer);
	// beq cr6,0x838fd024
	if (cr6.eq) goto loc_838FD024;
	// bl 0x82416268
	ctx.lr = 0x838FD024;
	sub_82416268(ctx, base);
loc_838FD024:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838FD030:
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, xer);
	// beq cr6,0x838fd03c
	if (cr6.eq) goto loc_838FD03C;
	// bl 0x82416268
	ctx.lr = 0x838FD03C;
	sub_82416268(ctx, base);
loc_838FD03C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FD048"))) PPC_WEAK_FUNC(sub_838FD048);
PPC_FUNC_IMPL(__imp__sub_838FD048) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FD070:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fd070
	if (!cr6.eq) goto loc_838FD070;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FD094;
	sub_838FB640(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lbz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// stb r9,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r9.u8);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r8,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r8.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb640
	ctx.lr = 0x838FD0C0;
	sub_838FB640(ctx, base);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r7,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r7.u32);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r6,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r6.u32);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r5,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r5.u32);
	// lbz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// stb r4,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r4.u8);
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fd118
	if (cr6.eq) goto loc_838FD118;
loc_838FD0EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FD100;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc6c8
	ctx.lr = 0x838FD10C;
	sub_838FC6C8(ctx, base);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838fd0ec
	if (!cr6.eq) goto loc_838FD0EC;
loc_838FD118:
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

__attribute__((alias("__imp__sub_838FD130"))) PPC_WEAK_FUNC(sub_838FD130);
PPC_FUNC_IMPL(__imp__sub_838FD130) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82416260
	ctx.lr = 0x838FD150;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fd168
	if (cr6.eq) goto loc_838FD168;
	// bl 0x838fce00
	ctx.lr = 0x838FD15C;
	sub_838FCE00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fd170
	if (!cr6.eq) goto loc_838FD170;
loc_838FD168:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838fd180
	goto loc_838FD180;
loc_838FD170:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fd048
	ctx.lr = 0x838FD17C;
	sub_838FD048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FD180:
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

__attribute__((alias("__imp__sub_838FD198"))) PPC_WEAK_FUNC(sub_838FD198);
PPC_FUNC_IMPL(__imp__sub_838FD198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FD1A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,15368
	ctx.r28.s64 = ctx.r11.s64 + 15368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x838fc450
	ctx.lr = 0x838FD1CC;
	sub_838FC450(ctx, base);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fc450
	ctx.lr = 0x838FD1DC;
	sub_838FC450(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fb3d8
	ctx.lr = 0x838FD1EC;
	sub_838FB3D8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r11,11356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11356);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r29,r11,11472
	ctx.r29.s64 = ctx.r11.s64 + 11472;
	// bne cr6,0x838fd270
	if (!cr6.eq) goto loc_838FD270;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fd228
	if (cr6.eq) goto loc_838FD228;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// bl 0x831d3290
	ctx.lr = 0x838FD228;
	sub_831D3290(ctx, base);
loc_838FD228:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fd2e4
	if (cr6.eq) goto loc_838FD2E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FD244;
	sub_838FB6F8(ctx, base);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD254;
	sub_838FB6F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FD268;
	sub_838FB6F8(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// b 0x838fd2d8
	goto loc_838FD2D8;
loc_838FD270:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fd294
	if (cr6.eq) goto loc_838FD294;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// bl 0x831d3290
	ctx.lr = 0x838FD294;
	sub_831D3290(ctx, base);
loc_838FD294:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fd2e4
	if (cr6.eq) goto loc_838FD2E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FD2B0;
	sub_838FB6F8(ctx, base);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD2C0;
	sub_838FB6F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FD2D4;
	sub_838FB6F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_838FD2D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD2E4;
	sub_838FB6F8(ctx, base);
loc_838FD2E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// beq cr6,0x838fd2f4
	if (cr6.eq) goto loc_838FD2F4;
	// bl 0x82416268
	ctx.lr = 0x838FD2F4;
	sub_82416268(ctx, base);
loc_838FD2F4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// beq cr6,0x838fd304
	if (cr6.eq) goto loc_838FD304;
	// bl 0x82416268
	ctx.lr = 0x838FD304;
	sub_82416268(ctx, base);
loc_838FD304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FD30C"))) PPC_WEAK_FUNC(sub_838FD30C);
PPC_FUNC_IMPL(__imp__sub_838FD30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FD310"))) PPC_WEAK_FUNC(sub_838FD310);
PPC_FUNC_IMPL(__imp__sub_838FD310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FD318;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fd380
	if (cr6.eq) goto loc_838FD380;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r29,r11,11532
	ctx.r29.s64 = ctx.r11.s64 + 11532;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// bl 0x831d3290
	ctx.lr = 0x838FD348;
	sub_831D3290(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x838fd364
	if (!cr6.gt) goto loc_838FD364;
loc_838FD350:
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FD35C;
	sub_831D3290(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838fd350
	if (!cr0.eq) goto loc_838FD350;
loc_838FD364:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x831d3290
	ctx.lr = 0x838FD378;
	sub_831D3290(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838FD380:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,15368
	ctx.r31.s64 = ctx.r11.s64 + 15368;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x838fc450
	ctx.lr = 0x838FD398;
	sub_838FC450(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,11532
	ctx.r4.s64 = ctx.r10.s64 + 11532;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// bl 0x831d3290
	ctx.lr = 0x838FD3B0;
	sub_831D3290(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x838fd3c0
	if (cr6.eq) goto loc_838FD3C0;
	// bl 0x82416268
	ctx.lr = 0x838FD3C0;
	sub_82416268(ctx, base);
loc_838FD3C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FD3C8"))) PPC_WEAK_FUNC(sub_838FD3C8);
PPC_FUNC_IMPL(__imp__sub_838FD3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_838FD3DC"))) PPC_WEAK_FUNC(sub_838FD3DC);
PPC_FUNC_IMPL(__imp__sub_838FD3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FD3E0"))) PPC_WEAK_FUNC(sub_838FD3E0);
PPC_FUNC_IMPL(__imp__sub_838FD3E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FD3E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r31,r11,11660
	ctx.r31.s64 = ctx.r11.s64 + 11660;
	// beq cr6,0x838fd414
	if (cr6.eq) goto loc_838FD414;
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FD414;
	sub_831D3290(ctx, base);
loc_838FD414:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fd42c
	if (cr6.eq) goto loc_838FD42C;
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD42C;
	sub_838FB6F8(ctx, base);
loc_838FD42C:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fd490
	if (cr6.eq) goto loc_838FD490;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838fd454
	if (cr6.eq) goto loc_838FD454;
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FD454;
	sub_831D3290(ctx, base);
loc_838FD454:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fd490
	if (cr6.eq) goto loc_838FD490;
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD46C;
	sub_838FB6F8(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FD480;
	sub_838FB6F8(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD490;
	sub_838FB6F8(ctx, base);
loc_838FD490:
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fd4f4
	if (cr6.eq) goto loc_838FD4F4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838fd4b8
	if (cr6.eq) goto loc_838FD4B8;
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FD4B8;
	sub_831D3290(ctx, base);
loc_838FD4B8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fd4f4
	if (cr6.eq) goto loc_838FD4F4;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD4D0;
	sub_838FB6F8(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FD4E4;
	sub_838FB6F8(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD4F4;
	sub_838FB6F8(ctx, base);
loc_838FD4F4:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fd558
	if (cr6.eq) goto loc_838FD558;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838fd51c
	if (cr6.eq) goto loc_838FD51C;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FD51C;
	sub_831D3290(ctx, base);
loc_838FD51C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fd558
	if (cr6.eq) goto loc_838FD558;
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD534;
	sub_838FB6F8(ctx, base);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FD548;
	sub_838FB6F8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD558;
	sub_838FB6F8(ctx, base);
loc_838FD558:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x838fd56c
	if (cr6.eq) goto loc_838FD56C;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831d3290
	ctx.lr = 0x838FD56C;
	sub_831D3290(ctx, base);
loc_838FD56C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fd584
	if (cr6.eq) goto loc_838FD584;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FD584;
	sub_838FB6F8(ctx, base);
loc_838FD584:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FD58C"))) PPC_WEAK_FUNC(sub_838FD58C);
PPC_FUNC_IMPL(__imp__sub_838FD58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FD590"))) PPC_WEAK_FUNC(sub_838FD590);
PPC_FUNC_IMPL(__imp__sub_838FD590) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FD5B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fd5b8
	if (!cr6.eq) goto loc_838FD5B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FD5DC;
	sub_838FB640(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb640
	ctx.lr = 0x838FD5F8;
	sub_838FB640(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb640
	ctx.lr = 0x838FD60C;
	sub_838FB640(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb640
	ctx.lr = 0x838FD620;
	sub_838FB640(ctx, base);
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

__attribute__((alias("__imp__sub_838FD638"))) PPC_WEAK_FUNC(sub_838FD638);
PPC_FUNC_IMPL(__imp__sub_838FD638) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fd66c
	if (cr6.eq) goto loc_838FD66C;
	// bl 0x838fbb40
	ctx.lr = 0x838FD65C;
	sub_838FBB40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fd66c
	if (cr6.eq) goto loc_838FD66C;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x838fd674
	goto loc_838FD674;
loc_838FD66C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_838FD674:
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

__attribute__((alias("__imp__sub_838FD68C"))) PPC_WEAK_FUNC(sub_838FD68C);
PPC_FUNC_IMPL(__imp__sub_838FD68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FD690"))) PPC_WEAK_FUNC(sub_838FD690);
PPC_FUNC_IMPL(__imp__sub_838FD690) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fd6c8
	if (cr6.eq) goto loc_838FD6C8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x838fbbc8
	ctx.lr = 0x838FD6B8;
	sub_838FBBC8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fd6c8
	if (cr6.eq) goto loc_838FD6C8;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x838fd6d0
	goto loc_838FD6D0;
loc_838FD6C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_838FD6D0:
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

__attribute__((alias("__imp__sub_838FD6E8"))) PPC_WEAK_FUNC(sub_838FD6E8);
PPC_FUNC_IMPL(__imp__sub_838FD6E8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x838fd198
	sub_838FD198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FD6F0"))) PPC_WEAK_FUNC(sub_838FD6F0);
PPC_FUNC_IMPL(__imp__sub_838FD6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FD6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r30,r11,15368
	ctx.r30.s64 = ctx.r11.s64 + 15368;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838fd71c
	if (cr6.eq) goto loc_838FD71C;
	// bl 0x82416268
	ctx.lr = 0x838FD71C;
	sub_82416268(ctx, base);
loc_838FD71C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838fd72c
	if (cr6.eq) goto loc_838FD72C;
	// bl 0x82416268
	ctx.lr = 0x838FD72C;
	sub_82416268(ctx, base);
loc_838FD72C:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// addi r9,r11,-5184
	ctx.r9.s64 = ctx.r11.s64 + -5184;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x838fd750
	if (cr6.eq) goto loc_838FD750;
	// bl 0x82416268
	ctx.lr = 0x838FD74C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FD750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FD758"))) PPC_WEAK_FUNC(sub_838FD758);
PPC_FUNC_IMPL(__imp__sub_838FD758) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,11824
	ctx.r10.s64 = ctx.r11.s64 + 11824;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x838fc630
	ctx.lr = 0x838FD784;
	sub_838FC630(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fd79c
	if (cr6.eq) goto loc_838FD79C;
	// bl 0x82416268
	ctx.lr = 0x838FD798;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FD79C:
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

__attribute__((alias("__imp__sub_838FD7B4"))) PPC_WEAK_FUNC(sub_838FD7B4);
PPC_FUNC_IMPL(__imp__sub_838FD7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FD7B8"))) PPC_WEAK_FUNC(sub_838FD7B8);
PPC_FUNC_IMPL(__imp__sub_838FD7B8) {
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
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r10,15368
	ctx.r8.s64 = ctx.r10.s64 + 15368;
	// addi r7,r9,11968
	ctx.r7.s64 = ctx.r9.s64 + 11968;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_838FD820:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fd820
	if (!cr6.eq) goto loc_838FD820;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FD840;
	sub_838FB640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_838FD860"))) PPC_WEAK_FUNC(sub_838FD860);
PPC_FUNC_IMPL(__imp__sub_838FD860) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,11968
	ctx.r10.s64 = ctx.r11.s64 + 11968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x838fc630
	ctx.lr = 0x838FD88C;
	sub_838FC630(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fd8a4
	if (cr6.eq) goto loc_838FD8A4;
	// bl 0x82416268
	ctx.lr = 0x838FD8A0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FD8A4:
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

__attribute__((alias("__imp__sub_838FD8BC"))) PPC_WEAK_FUNC(sub_838FD8BC);
PPC_FUNC_IMPL(__imp__sub_838FD8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FD8C0"))) PPC_WEAK_FUNC(sub_838FD8C0);
PPC_FUNC_IMPL(__imp__sub_838FD8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r9,15368
	ctx.r7.s64 = ctx.r9.s64 + 15368;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r8,11896
	ctx.r6.s64 = ctx.r8.s64 + 11896;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FD918"))) PPC_WEAK_FUNC(sub_838FD918);
PPC_FUNC_IMPL(__imp__sub_838FD918) {
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
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r9,r10,11896
	ctx.r9.s64 = ctx.r10.s64 + 11896;
	// addi r30,r11,15368
	ctx.r30.s64 = ctx.r11.s64 + 15368;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838fd954
	if (cr6.eq) goto loc_838FD954;
	// bl 0x82416268
	ctx.lr = 0x838FD954;
	sub_82416268(ctx, base);
loc_838FD954:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838fd964
	if (cr6.eq) goto loc_838FD964;
	// bl 0x82416268
	ctx.lr = 0x838FD964;
	sub_82416268(ctx, base);
loc_838FD964:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// beq cr6,0x838fd974
	if (cr6.eq) goto loc_838FD974;
	// bl 0x82416268
	ctx.lr = 0x838FD974;
	sub_82416268(ctx, base);
loc_838FD974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc630
	ctx.lr = 0x838FD97C;
	sub_838FC630(ctx, base);
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

__attribute__((alias("__imp__sub_838FD994"))) PPC_WEAK_FUNC(sub_838FD994);
PPC_FUNC_IMPL(__imp__sub_838FD994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FD998"))) PPC_WEAK_FUNC(sub_838FD998);
PPC_FUNC_IMPL(__imp__sub_838FD998) {
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
	// bl 0x838fd918
	ctx.lr = 0x838FD9B8;
	sub_838FD918(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fd9d0
	if (cr6.eq) goto loc_838FD9D0;
	// bl 0x82416268
	ctx.lr = 0x838FD9CC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FD9D0:
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

__attribute__((alias("__imp__sub_838FD9E8"))) PPC_WEAK_FUNC(sub_838FD9E8);
PPC_FUNC_IMPL(__imp__sub_838FD9E8) {
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
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,12040
	ctx.r10.s64 = ctx.r11.s64 + 12040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x838fc630
	ctx.lr = 0x838FDA14;
	sub_838FC630(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fda2c
	if (cr6.eq) goto loc_838FDA2C;
	// bl 0x82416268
	ctx.lr = 0x838FDA28;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FDA2C:
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

__attribute__((alias("__imp__sub_838FDA44"))) PPC_WEAK_FUNC(sub_838FDA44);
PPC_FUNC_IMPL(__imp__sub_838FDA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FDA48"))) PPC_WEAK_FUNC(sub_838FDA48);
PPC_FUNC_IMPL(__imp__sub_838FDA48) {
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
	// bl 0x838fc630
	ctx.lr = 0x838FDA68;
	sub_838FC630(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fda80
	if (cr6.eq) goto loc_838FDA80;
	// bl 0x82416268
	ctx.lr = 0x838FDA7C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FDA80:
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

__attribute__((alias("__imp__sub_838FDA98"))) PPC_WEAK_FUNC(sub_838FDA98);
PPC_FUNC_IMPL(__imp__sub_838FDA98) {
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
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r9,15368
	ctx.r7.s64 = ctx.r9.s64 + 15368;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lis r6,-32210
	ctx.r6.s64 = -2110914560;
	// addi r5,r8,12112
	ctx.r5.s64 = ctx.r8.s64 + 12112;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r6,11736
	ctx.r8.s64 = ctx.r6.s64 + 11736;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r7,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r7.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r7.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_838FDB2C:
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fdb2c
	if (!cr6.eq) goto loc_838FDB2C;
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FDB4C;
	sub_838FB640(ctx, base);
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

__attribute__((alias("__imp__sub_838FDB64"))) PPC_WEAK_FUNC(sub_838FDB64);
PPC_FUNC_IMPL(__imp__sub_838FDB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FDB68"))) PPC_WEAK_FUNC(sub_838FDB68);
PPC_FUNC_IMPL(__imp__sub_838FDB68) {
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
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82416260
	ctx.lr = 0x838FDB88;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fdba8
	if (cr6.eq) goto loc_838FDBA8;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x838fda98
	ctx.lr = 0x838FDB9C;
	sub_838FDA98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fdbb0
	if (!cr6.eq) goto loc_838FDBB0;
loc_838FDBA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838fdbc0
	goto loc_838FDBC0;
loc_838FDBB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fcd18
	ctx.lr = 0x838FDBBC;
	sub_838FCD18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FDBC0:
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

__attribute__((alias("__imp__sub_838FDBD8"))) PPC_WEAK_FUNC(sub_838FDBD8);
PPC_FUNC_IMPL(__imp__sub_838FDBD8) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82416260
	ctx.lr = 0x838FDBF8;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fdc74
	if (cr6.eq) goto loc_838FDC74;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r9,15368
	ctx.r7.s64 = ctx.r9.s64 + 15368;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r8,11824
	ctx.r6.s64 = ctx.r8.s64 + 11824;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc1c8
	ctx.lr = 0x838FDC58;
	sub_838FC1C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FDC5C:
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
loc_838FDC74:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838fdc5c
	goto loc_838FDC5C;
}

__attribute__((alias("__imp__sub_838FDC7C"))) PPC_WEAK_FUNC(sub_838FDC7C);
PPC_FUNC_IMPL(__imp__sub_838FDC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FDC80"))) PPC_WEAK_FUNC(sub_838FDC80);
PPC_FUNC_IMPL(__imp__sub_838FDC80) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82416260
	ctx.lr = 0x838FDCA0;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fdcc0
	if (cr6.eq) goto loc_838FDCC0;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r4,r11,11369
	ctx.r4.s64 = ctx.r11.s64 + 11369;
	// bl 0x838fd7b8
	ctx.lr = 0x838FDCB4;
	sub_838FD7B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fdcc8
	if (!cr6.eq) goto loc_838FDCC8;
loc_838FDCC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838fdcd8
	goto loc_838FDCD8;
loc_838FDCC8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc0b8
	ctx.lr = 0x838FDCD4;
	sub_838FC0B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FDCD8:
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

__attribute__((alias("__imp__sub_838FDCF0"))) PPC_WEAK_FUNC(sub_838FDCF0);
PPC_FUNC_IMPL(__imp__sub_838FDCF0) {
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
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82416260
	ctx.lr = 0x838FDD10;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fdd98
	if (cr6.eq) goto loc_838FDD98;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r9,15368
	ctx.r7.s64 = ctx.r9.s64 + 15368;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r8,11896
	ctx.r6.s64 = ctx.r8.s64 + 11896;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fd590
	ctx.lr = 0x838FDD7C;
	sub_838FD590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FDD80:
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
loc_838FDD98:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838fdd80
	goto loc_838FDD80;
}

__attribute__((alias("__imp__sub_838FDDA0"))) PPC_WEAK_FUNC(sub_838FDDA0);
PPC_FUNC_IMPL(__imp__sub_838FDDA0) {
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
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82416260
	ctx.lr = 0x838FDDC0;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fde3c
	if (cr6.eq) goto loc_838FDE3C;
	// lis r9,-31743
	ctx.r9.s64 = -2080309248;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r7,r9,15368
	ctx.r7.s64 = ctx.r9.s64 + 15368;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r6,r8,12040
	ctx.r6.s64 = ctx.r8.s64 + 12040;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc1c8
	ctx.lr = 0x838FDE20;
	sub_838FC1C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FDE24:
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
loc_838FDE3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x838fde24
	goto loc_838FDE24;
}

__attribute__((alias("__imp__sub_838FDE44"))) PPC_WEAK_FUNC(sub_838FDE44);
PPC_FUNC_IMPL(__imp__sub_838FDE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FDE48"))) PPC_WEAK_FUNC(sub_838FDE48);
PPC_FUNC_IMPL(__imp__sub_838FDE48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FDE50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,12112
	ctx.r10.s64 = ctx.r11.s64 + 12112;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x838fc788
	ctx.lr = 0x838FDE6C;
	sub_838FC788(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// addi r29,r11,15368
	ctx.r29.s64 = ctx.r11.s64 + 15368;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x838fde88
	if (cr6.eq) goto loc_838FDE88;
	// bl 0x82416268
	ctx.lr = 0x838FDE88;
	sub_82416268(ctx, base);
loc_838FDE88:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, xer);
	// beq cr6,0x838fde98
	if (cr6.eq) goto loc_838FDE98;
	// bl 0x82416268
	ctx.lr = 0x838FDE98;
	sub_82416268(ctx, base);
loc_838FDE98:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-5184
	ctx.r10.s64 = ctx.r11.s64 + -5184;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x838fc630
	ctx.lr = 0x838FDEAC;
	sub_838FC630(ctx, base);
	// clrlwi r9,r28,31
	ctx.r9.u64 = ctx.r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fdec4
	if (cr6.eq) goto loc_838FDEC4;
	// bl 0x82416268
	ctx.lr = 0x838FDEC0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_838FDEC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FDECC"))) PPC_WEAK_FUNC(sub_838FDECC);
PPC_FUNC_IMPL(__imp__sub_838FDECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FDED0"))) PPC_WEAK_FUNC(sub_838FDED0);
PPC_FUNC_IMPL(__imp__sub_838FDED0) {
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
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x838FDEEC;
	sub_831D26C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fdf0c
	if (!cr6.eq) goto loc_838FDF0C;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838fdf0c
	if (cr6.eq) goto loc_838FDF0C;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x838fdf10
	if (!cr6.eq) goto loc_838FDF10;
loc_838FDF0C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_838FDF10:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_838FDF28"))) PPC_WEAK_FUNC(sub_838FDF28);
PPC_FUNC_IMPL(__imp__sub_838FDF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,224
	ctx.r9.s64 = 224;
	// stw r11,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r11.u32);
	// li r8,240
	ctx.r8.s64 = 240;
	// stw r11,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r11.u32);
	// li r7,248
	ctx.r7.s64 = 248;
	// stw r10,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r10.u32);
	// li r6,252
	ctx.r6.s64 = 252;
	// stw r9,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r9.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// cmplwi cr6,r3,128
	cr6.compare<uint32_t>(ctx.r3.u32, 128, xer);
	// stw r7,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r7.u32);
	// stw r6,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// bge cr6,0x838fdf6c
	if (!cr6.lt) goto loc_838FDF6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x838fdfa0
	goto loc_838FDFA0;
loc_838FDF6C:
	// cmplwi cr6,r3,2048
	cr6.compare<uint32_t>(ctx.r3.u32, 2048, xer);
	// bge cr6,0x838fdf7c
	if (!cr6.lt) goto loc_838FDF7C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x838fdfa0
	goto loc_838FDFA0;
loc_838FDF7C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x838fdf90
	if (!cr6.lt) goto loc_838FDF90;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x838fdfa0
	goto loc_838FDFA0;
loc_838FDF90:
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x838fe020
	if (!cr6.lt) goto loc_838FE020;
	// li r11,4
	ctx.r11.s64 = 4;
loc_838FDFA0:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r10,511
	ctx.r10.s64 = 33488896;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838fe004
	if (cr6.eq) goto loc_838FE004;
	// bdz 0x838fdff4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838FDFF4;
	// bdz 0x838fdfe4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_838FDFE4;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r3,r3,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// rlwimi r9,r10,7,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
loc_838FDFE4:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r3,r3,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// rlwimi r9,r10,7,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
loc_838FDFF4:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r3,r3,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0x3FFFFFF;
	// rlwimi r9,r10,7,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stbu r9,-1(r11)
	ea = -1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
loc_838FE004:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stb r6,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r6.u8);
	// blr 
	return;
loc_838FE020:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FE028"))) PPC_WEAK_FUNC(sub_838FE028);
PPC_FUNC_IMPL(__imp__sub_838FE028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// blt cr6,0x838fe198
	if (cr6.lt) goto loc_838FE198;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x838fe18c
	if (!cr6.lt) goto loc_838FE18C;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r31,r9,12224
	ctx.r31.s64 = ctx.r9.s64 + 12224;
loc_838FE058:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// bgt cr6,0x838fe0a8
	if (cr6.gt) goto loc_838FE0A8;
	// beq cr6,0x838fe09c
	if (cr6.eq) goto loc_838FE09C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x838fe198
	if (cr6.eq) goto loc_838FE198;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x838fe0b8
	if (!cr6.eq) goto loc_838FE0B8;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r6
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r6.s32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// andc r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// twllei r6,0
	// twlgei r10,-1
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// b 0x838fe180
	goto loc_838FE180;
loc_838FE09C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r9,13
	cr6.compare<uint32_t>(ctx.r9.u32, 13, xer);
	// b 0x838fe174
	goto loc_838FE174;
loc_838FE0A8:
	// cmpwi cr6,r9,13
	cr6.compare<int32_t>(ctx.r9.s32, 13, xer);
	// beq cr6,0x838fe16c
	if (cr6.eq) goto loc_838FE16C;
	// cmpwi cr6,r9,239
	cr6.compare<int32_t>(ctx.r9.s32, 239, xer);
	// beq cr6,0x838fe0e8
	if (cr6.eq) goto loc_838FE0E8;
loc_838FE0B8:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x838fe0e0
	if (!cr6.eq) goto loc_838FE0E0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x838fe0d4
	if (!cr6.eq) goto loc_838FE0D4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_838FE0D4:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x838fe184
	goto loc_838FE184;
loc_838FE0E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x838fe180
	goto loc_838FE180;
loc_838FE0E8:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x838fe0e0
	if (!cr6.eq) goto loc_838FE0E0;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x838fe184
	if (cr6.eq) goto loc_838FE184;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x838fe184
	if (cr6.eq) goto loc_838FE184;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,187
	cr6.compare<uint32_t>(ctx.r9.u32, 187, xer);
	// bne cr6,0x838fe128
	if (!cr6.eq) goto loc_838FE128;
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r30,191
	cr6.compare<uint32_t>(ctx.r30.u32, 191, xer);
	// bne cr6,0x838fe128
	if (!cr6.eq) goto loc_838FE128;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x838fe184
	goto loc_838FE184;
loc_838FE128:
	// cmplwi cr6,r9,191
	cr6.compare<uint32_t>(ctx.r9.u32, 191, xer);
	// bne cr6,0x838fe160
	if (!cr6.eq) goto loc_838FE160;
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r30,190
	cr6.compare<uint32_t>(ctx.r30.u32, 190, xer);
	// bne cr6,0x838fe144
	if (!cr6.eq) goto loc_838FE144;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x838fe184
	goto loc_838FE184;
loc_838FE144:
	// cmplwi cr6,r9,191
	cr6.compare<uint32_t>(ctx.r9.u32, 191, xer);
	// bne cr6,0x838fe160
	if (!cr6.eq) goto loc_838FE160;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,191
	cr6.compare<uint32_t>(ctx.r9.u32, 191, xer);
	// bne cr6,0x838fe160
	if (!cr6.eq) goto loc_838FE160;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x838fe184
	goto loc_838FE184;
loc_838FE160:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x838fe184
	goto loc_838FE184;
loc_838FE16C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
loc_838FE174:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bne cr6,0x838fe184
	if (!cr6.eq) goto loc_838FE184;
loc_838FE180:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_838FE184:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// blt cr6,0x838fe058
	if (cr6.lt) goto loc_838FE058;
loc_838FE18C:
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_838FE198:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FE1A4"))) PPC_WEAK_FUNC(sub_838FE1A4);
PPC_FUNC_IMPL(__imp__sub_838FE1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FE1A8"))) PPC_WEAK_FUNC(sub_838FE1A8);
PPC_FUNC_IMPL(__imp__sub_838FE1A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fe328
	if (cr6.eq) goto loc_838FE328;
	// lbz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fe328
	if (cr6.eq) goto loc_838FE328;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x838fe2c4
	if (!cr6.eq) goto loc_838FE2C4;
loc_838FE1DC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(ctx.r11.u32, 239, xer);
	// bne cr6,0x838fe258
	if (!cr6.eq) goto loc_838FE258;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r10,187
	cr6.compare<uint32_t>(ctx.r10.u32, 187, xer);
	// bne cr6,0x838fe208
	if (!cr6.eq) goto loc_838FE208;
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r10,191
	cr6.compare<uint32_t>(ctx.r10.u32, 191, xer);
	// bne cr6,0x838fe208
	if (!cr6.eq) goto loc_838FE208;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x838fe2ac
	goto loc_838FE2AC;
loc_838FE208:
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(ctx.r11.u32, 239, xer);
	// bne cr6,0x838fe258
	if (!cr6.eq) goto loc_838FE258;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r10,191
	cr6.compare<uint32_t>(ctx.r10.u32, 191, xer);
	// bne cr6,0x838fe230
	if (!cr6.eq) goto loc_838FE230;
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r10,190
	cr6.compare<uint32_t>(ctx.r10.u32, 190, xer);
	// bne cr6,0x838fe230
	if (!cr6.eq) goto loc_838FE230;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x838fe2ac
	goto loc_838FE2AC;
loc_838FE230:
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(ctx.r11.u32, 239, xer);
	// bne cr6,0x838fe258
	if (!cr6.eq) goto loc_838FE258;
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(ctx.r11.u32, 191, xer);
	// bne cr6,0x838fe258
	if (!cr6.eq) goto loc_838FE258;
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(ctx.r11.u32, 191, xer);
	// bne cr6,0x838fe258
	if (!cr6.eq) goto loc_838FE258;
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// b 0x838fe2ac
	goto loc_838FE2AC;
loc_838FE258:
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x838FE260;
	sub_831D26C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fe280
	if (!cr6.eq) goto loc_838FE280;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838fe280
	if (cr6.eq) goto loc_838FE280;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x838fe284
	if (!cr6.eq) goto loc_838FE284;
loc_838FE280:
	// li r11,1
	ctx.r11.s64 = 1;
loc_838FE284:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fe2a8
	if (!cr6.eq) goto loc_838FE2A8;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838fe2a8
	if (cr6.eq) goto loc_838FE2A8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x838fe2bc
	if (!cr6.eq) goto loc_838FE2BC;
loc_838FE2A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_838FE2AC:
	// lbz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x838fe1dc
	if (!cr6.eq) goto loc_838FE1DC;
loc_838FE2BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x838fe32c
	goto loc_838FE32C;
loc_838FE2C4:
	// lbz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fe308
	if (cr6.eq) goto loc_838FE308;
	// clrlwi r3,r31,24
	ctx.r3.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x838FE2D8;
	sub_831D26C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fe2f8
	if (!cr6.eq) goto loc_838FE2F8;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838fe2f8
	if (cr6.eq) goto loc_838FE2F8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x838fe2fc
	if (!cr6.eq) goto loc_838FE2FC;
loc_838FE2F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_838FE2FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fe320
	if (!cr6.eq) goto loc_838FE320;
loc_838FE308:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838fe320
	if (cr6.eq) goto loc_838FE320;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x838fe2bc
	if (!cr6.eq) goto loc_838FE2BC;
loc_838FE320:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x838fe2c4
	goto loc_838FE2C4;
loc_838FE328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838FE32C:
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

__attribute__((alias("__imp__sub_838FE344"))) PPC_WEAK_FUNC(sub_838FE344);
PPC_FUNC_IMPL(__imp__sub_838FE344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FE348"))) PPC_WEAK_FUNC(sub_838FE348);
PPC_FUNC_IMPL(__imp__sub_838FE348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FE350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12190
	ctx.r4.s64 = ctx.r11.s64 + 12190;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FE370;
	sub_838FB640(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fe420
	if (cr6.eq) goto loc_838FE420;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fe420
	if (cr6.eq) goto loc_838FE420;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,127
	cr6.compare<uint32_t>(ctx.r3.u32, 127, xer);
	// bge cr6,0x838fe3a8
	if (!cr6.lt) goto loc_838FE3A8;
	// bl 0x831d2660
	ctx.lr = 0x838FE394;
	sub_831D2660(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fe3a8
	if (!cr6.eq) goto loc_838FE3A8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// bne cr6,0x838fe420
	if (!cr6.eq) goto loc_838FE420;
loc_838FE3A8:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_838FE3AC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fe400
	if (cr6.eq) goto loc_838FE400;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,127
	cr6.compare<uint32_t>(ctx.r3.u32, 127, xer);
	// bge cr6,0x838fe3f8
	if (!cr6.lt) goto loc_838FE3F8;
	// bl 0x831d26e0
	ctx.lr = 0x838FE3C8;
	sub_831D26E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fe3f8
	if (!cr6.eq) goto loc_838FE3F8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(ctx.r11.s32, 95, xer);
	// beq cr6,0x838fe3f8
	if (cr6.eq) goto loc_838FE3F8;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(ctx.r11.s32, 45, xer);
	// beq cr6,0x838fe3f8
	if (cr6.eq) goto loc_838FE3F8;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// beq cr6,0x838fe3f8
	if (cr6.eq) goto loc_838FE3F8;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(ctx.r11.s32, 58, xer);
	// bne cr6,0x838fe400
	if (!cr6.eq) goto loc_838FE400;
loc_838FE3F8:
	// addic. r31,r31,1
	xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838fe3ac
	if (!cr0.eq) goto loc_838FE3AC;
loc_838FE400:
	// subf. r5,r30,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x838fe414
	if (!cr0.gt) goto loc_838FE414;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FE414;
	sub_838FB640(ctx, base);
loc_838FE414:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838FE420:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FE42C"))) PPC_WEAK_FUNC(sub_838FE42C);
PPC_FUNC_IMPL(__imp__sub_838FE42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FE430"))) PPC_WEAK_FUNC(sub_838FE430);
PPC_FUNC_IMPL(__imp__sub_838FE430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FE438;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fe524
	if (cr6.eq) goto loc_838FE524;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fe524
	if (cr6.eq) goto loc_838FE524;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838fe4e4
	if (cr6.eq) goto loc_838FE4E4;
	// subf r29,r4,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_838FE46C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fe4cc
	if (cr6.eq) goto loc_838FE4CC;
	// lbzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bne cr6,0x838fe490
	if (!cr6.eq) goto loc_838FE490;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x838fe494
	if (!cr6.lt) goto loc_838FE494;
loc_838FE490:
	// bl 0x831d34c8
	ctx.lr = 0x838FE494;
	sub_831D34C8(ctx, base);
loc_838FE494:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(ctx.r28.s32, 1, xer);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bne cr6,0x838fe4b0
	if (!cr6.eq) goto loc_838FE4B0;
	// cmpwi cr6,r3,128
	cr6.compare<int32_t>(ctx.r3.s32, 128, xer);
	// bge cr6,0x838fe4b4
	if (!cr6.lt) goto loc_838FE4B4;
loc_838FE4B0:
	// bl 0x831d34c8
	ctx.lr = 0x838FE4B4;
	sub_831D34C8(ctx, base);
loc_838FE4B4:
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, xer);
	// bne cr6,0x838fe4cc
	if (!cr6.eq) goto loc_838FE4CC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fe46c
	if (!cr6.eq) goto loc_838FE46C;
loc_838FE4CC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fe524
	if (!cr6.eq) goto loc_838FE524;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_838FE4E4:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x838fe514
	if (cr6.eq) goto loc_838FE514;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bne cr6,0x838fe514
	if (!cr6.eq) goto loc_838FE514;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fe4e4
	if (!cr6.eq) goto loc_838FE4E4;
loc_838FE514:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fe528
	if (cr6.eq) goto loc_838FE528;
loc_838FE524:
	// li r3,0
	ctx.r3.s64 = 0;
loc_838FE528:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FE530"))) PPC_WEAK_FUNC(sub_838FE530);
PPC_FUNC_IMPL(__imp__sub_838FE530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x838FE538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fe5d8
	if (!cr6.eq) goto loc_838FE5D8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,29352
	ctx.r9.s64 = ctx.r11.s64 + 29352;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r8.u8);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FE578:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838fe578
	if (!cr6.eq) goto loc_838FE578;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FE59C;
	sub_838FB640(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// beq cr6,0x838fe5d8
	if (cr6.eq) goto loc_838FE5D8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838fe5d8
	if (cr6.eq) goto loc_838FE5D8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fe028
	ctx.lr = 0x838FE5C8;
	sub_838FE028(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
loc_838FE5D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FE5E0"))) PPC_WEAK_FUNC(sub_838FE5E0);
PPC_FUNC_IMPL(__imp__sub_838FE5E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838FE5E8;
	__savegprlr_27(ctx, base);
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
	// bl 0x838fbda8
	ctx.lr = 0x838FE600;
	sub_838FBDA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FE610;
	sub_838FE1A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fe63c
	if (cr6.eq) goto loc_838FE63C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe028
	ctx.lr = 0x838FE62C;
	sub_838FE028(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
loc_838FE63C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x838fe6f8
	if (cr6.eq) goto loc_838FE6F8;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838fe6f8
	if (cr6.eq) goto loc_838FE6F8;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, xer);
	// bne cr6,0x838fe6f8
	if (!cr6.eq) goto loc_838FE6F8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12205
	ctx.r4.s64 = ctx.r11.s64 + 12205;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
	// bl 0x838fb640
	ctx.lr = 0x838FE678;
	sub_838FB640(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fe6b4
	if (cr6.eq) goto loc_838FE6B4;
loc_838FE680:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x838fe6d4
	if (cr6.eq) goto loc_838FE6D4;
	// cmpwi cr6,r10,62
	cr6.compare<int32_t>(ctx.r10.s32, 62, xer);
	// beq cr6,0x838fe6d4
	if (cr6.eq) goto loc_838FE6D4;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FE6AC;
	sub_838FB6F8(ctx, base);
	// addic. r31,r31,1
	xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838fe680
	if (!cr0.eq) goto loc_838FE680;
loc_838FE6B4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838fe6d4
	if (cr6.eq) goto loc_838FE6D4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FE6D4;
	sub_838FE530(ctx, base);
loc_838FE6D4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// bne cr6,0x838fe6ec
	if (!cr6.eq) goto loc_838FE6EC;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838FE6EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838FE6F8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838fe718
	if (cr6.eq) goto loc_838FE718;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FE718;
	sub_838FE530(ctx, base);
loc_838FE718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FE724"))) PPC_WEAK_FUNC(sub_838FE724);
PPC_FUNC_IMPL(__imp__sub_838FE724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FE728"))) PPC_WEAK_FUNC(sub_838FE728);
PPC_FUNC_IMPL(__imp__sub_838FE728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838FE730;
	__savegprlr_25(ctx, base);
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FE748;
	sub_838FBDA8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r26,r31,32
	ctx.r26.s64 = ctx.r31.s64 + 32;
	// addi r27,r11,12207
	ctx.r27.s64 = ctx.r11.s64 + 12207;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r27,-1
	ctx.r4.s64 = ctx.r27.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FE768;
	sub_838FB640(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FE774;
	sub_838FE1A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x838fe7a0
	if (cr6.eq) goto loc_838FE7A0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fe028
	ctx.lr = 0x838FE790;
	sub_838FE028(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_838FE7A0:
	// addi r4,r27,1101
	ctx.r4.s64 = ctx.r27.s64 + 1101;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FE7B4;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fe7e4
	if (!cr6.eq) goto loc_838FE7E4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FE7D8;
	sub_838FE530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838FE7E4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// bl 0x838fb640
	ctx.lr = 0x838FE7F8;
	sub_838FB640(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838fe854
	if (cr6.eq) goto loc_838FE854;
loc_838FE800:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fe850
	if (cr6.eq) goto loc_838FE850;
	// addi r4,r27,1109
	ctx.r4.s64 = ctx.r27.s64 + 1109;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FE820;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fe850
	if (!cr6.eq) goto loc_838FE850;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FE83C;
	sub_838FB6F8(ctx, base);
	// addic. r31,r31,1
	xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838fe800
	if (!cr0.eq) goto loc_838FE800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838FE850:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_838FE854:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FE860"))) PPC_WEAK_FUNC(sub_838FE860);
PPC_FUNC_IMPL(__imp__sub_838FE860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x838FE868;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x838fe8dc
	if (!cr6.gt) goto loc_838FE8DC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_838FE888:
	// lbz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d26c0
	ctx.lr = 0x838FE894;
	sub_831D26C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fe8b4
	if (!cr6.eq) goto loc_838FE8B4;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838fe8b4
	if (cr6.eq) goto loc_838FE8B4;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x838fe8b8
	if (!cr6.eq) goto loc_838FE8B8;
loc_838FE8B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_838FE8B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fe8e8
	if (cr6.eq) goto loc_838FE8E8;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x838fe888
	if (cr6.lt) goto loc_838FE888;
loc_838FE8DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_838FE8E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FE8F4"))) PPC_WEAK_FUNC(sub_838FE8F4);
PPC_FUNC_IMPL(__imp__sub_838FE8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FE8F8"))) PPC_WEAK_FUNC(sub_838FE8F8);
PPC_FUNC_IMPL(__imp__sub_838FE8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x838FE900;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838feab4
	if (cr6.eq) goto loc_838FEAB4;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// bne cr6,0x838feab4
	if (!cr6.eq) goto loc_838FEAB4;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838feab4
	if (cr6.eq) goto loc_838FEAB4;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// bne cr6,0x838fea08
	if (!cr6.eq) goto loc_838FEA08;
	// lbz r11,3(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 3);
	// addi r3,r27,3
	ctx.r3.s64 = ctx.r27.s64 + 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fe974
	if (!cr6.eq) goto loc_838FE974;
loc_838FE968:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838FE974:
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x831ceeb0
	ctx.lr = 0x838FE97C;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fe968
	if (cr6.eq) goto loc_838FE968;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fe968
	if (cr6.eq) goto loc_838FE968;
	// subf r29,r27,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r27.s64;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// beq cr6,0x838fea70
	if (cr6.eq) goto loc_838FEA70;
loc_838FE9A4:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x838fe9bc
	if (cr6.lt) goto loc_838FE9BC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x838fe9bc
	if (cr6.gt) goto loc_838FE9BC;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// b 0x838fe9e8
	goto loc_838FE9E8;
loc_838FE9BC:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(ctx.r11.s32, 97, xer);
	// blt cr6,0x838fe9d4
	if (cr6.lt) goto loc_838FE9D4;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(ctx.r11.s32, 102, xer);
	// bgt cr6,0x838fe9d4
	if (cr6.gt) goto loc_838FE9D4;
	// addi r11,r11,-87
	ctx.r11.s64 = ctx.r11.s64 + -87;
	// b 0x838fe9e8
	goto loc_838FE9E8;
loc_838FE9D4:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(ctx.r11.s32, 65, xer);
	// blt cr6,0x838fe968
	if (cr6.lt) goto loc_838FE968;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(ctx.r11.s32, 70, xer);
	// bgt cr6,0x838fe968
	if (cr6.gt) goto loc_838FE968;
	// addi r11,r11,-55
	ctx.r11.s64 = ctx.r11.s64 + -55;
loc_838FE9E8:
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rlwinm r31,r31,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(ctx.r11.s32, 120, xer);
	// bne cr6,0x838fe9a4
	if (!cr6.eq) goto loc_838FE9A4;
	// b 0x838fea70
	goto loc_838FEA70;
loc_838FEA08:
	// li r4,59
	ctx.r4.s64 = 59;
	// bl 0x831ceeb0
	ctx.lr = 0x838FEA10;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fe968
	if (cr6.eq) goto loc_838FE968;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fe968
	if (cr6.eq) goto loc_838FE968;
	// subf r29,r27,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r27.s64;
	// lbzu r11,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// beq cr6,0x838fea70
	if (cr6.eq) goto loc_838FEA70;
loc_838FEA38:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x838fe968
	if (cr6.lt) goto loc_838FE968;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// bgt cr6,0x838fe968
	if (cr6.gt) goto loc_838FE968;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// lbzu r10,-1(r3)
	ea = -1 + ctx.r3.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// bne cr6,0x838fea38
	if (!cr6.eq) goto loc_838FEA38;
loc_838FEA70:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(ctx.r24.s32, 1, xer);
	// bne cr6,0x838fea98
	if (!cr6.eq) goto loc_838FEA98;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fdf28
	ctx.lr = 0x838FEA88;
	sub_838FDF28(ctx, base);
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838FEA98:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r30.u8);
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838FEAB4:
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// addi r29,r11,29288
	ctx.r29.s64 = ctx.r11.s64 + 29288;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_838FEAC0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x831cef50
	ctx.lr = 0x838FEAD0;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x838feb00
	if (cr6.eq) goto loc_838FEB00;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r11,r29,60
	ctx.r11.s64 = ctx.r29.s64 + 60;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x838feac0
	if (cr6.lt) goto loc_838FEAC0;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_838FEB00:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// lbzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stb r5,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r5.u8);
	// stw r6,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r6.u32);
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FEB34"))) PPC_WEAK_FUNC(sub_838FEB34);
PPC_FUNC_IMPL(__imp__sub_838FEB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FEB38"))) PPC_WEAK_FUNC(sub_838FEB38);
PPC_FUNC_IMPL(__imp__sub_838FEB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838FEB40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FEB58;
	sub_838FE1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fed88
	if (cr6.eq) goto loc_838FED88;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838fed88
	if (cr6.eq) goto loc_838FED88;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, xer);
	// bne cr6,0x838fed88
	if (!cr6.eq) goto loc_838FED88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FEB84;
	sub_838FBDA8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FEB94;
	sub_838FE1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fed88
	if (cr6.eq) goto loc_838FED88;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fed88
	if (cr6.eq) goto loc_838FED88;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r29,r11,12198
	ctx.r29.s64 = ctx.r11.s64 + 12198;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,1066
	ctx.r4.s64 = ctx.r29.s64 + 1066;
	// bl 0x838fe430
	ctx.lr = 0x838FEBC4;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fec18
	if (cr6.eq) goto loc_838FEC18;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82416260
	ctx.lr = 0x838FEBD8;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838febe8
	if (cr6.eq) goto loc_838FEBE8;
	// bl 0x838fd8c0
	ctx.lr = 0x838FEBE4;
	sub_838FD8C0(ctx, base);
	// b 0x838fed6c
	goto loc_838FED6C;
loc_838FEBE8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_838FEBEC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838fec0c
	if (cr6.eq) goto loc_838FEC0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FEC0C;
	sub_838FE530(ctx, base);
loc_838FEC0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838FEC18:
	// addi r4,r29,1074
	ctx.r4.s64 = ctx.r29.s64 + 1074;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FEC2C;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fec64
	if (cr6.eq) goto loc_838FEC64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82416260
	ctx.lr = 0x838FEC40;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838febe8
	if (cr6.eq) goto loc_838FEBE8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x838fc5e8
	ctx.lr = 0x838FEC54;
	sub_838FC5E8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,11824
	ctx.r10.s64 = ctx.r11.s64 + 11824;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x838fed70
	goto loc_838FED70;
loc_838FEC64:
	// addi r4,r29,1086
	ctx.r4.s64 = ctx.r29.s64 + 1086;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FEC78;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fecb8
	if (cr6.eq) goto loc_838FECB8;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82416260
	ctx.lr = 0x838FEC8C;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838feca8
	if (cr6.eq) goto loc_838FECA8;
	// addi r4,r29,-1
	ctx.r4.s64 = ctx.r29.s64 + -1;
	// bl 0x838fd7b8
	ctx.lr = 0x838FEC9C;
	sub_838FD7B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// b 0x838fed6c
	goto loc_838FED6C;
loc_838FECA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r11.u8);
	// b 0x838fed6c
	goto loc_838FED6C;
loc_838FECB8:
	// addi r4,r29,1082
	ctx.r4.s64 = ctx.r29.s64 + 1082;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FECCC;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838fed04
	if (cr6.eq) goto loc_838FED04;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82416260
	ctx.lr = 0x838FECE0;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838febe8
	if (cr6.eq) goto loc_838FEBE8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x838fc5e8
	ctx.lr = 0x838FECF4;
	sub_838FC5E8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,12040
	ctx.r10.s64 = ctx.r11.s64 + 12040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x838fed70
	goto loc_838FED70;
loc_838FED04:
	// lbz r3,1(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r3,127
	cr6.compare<uint32_t>(ctx.r3.u32, 127, xer);
	// bge cr6,0x838fed54
	if (!cr6.lt) goto loc_838FED54;
	// bl 0x831d2660
	ctx.lr = 0x838FED14;
	sub_831D2660(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838fed54
	if (!cr6.eq) goto loc_838FED54;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,95
	cr6.compare<uint32_t>(ctx.r11.u32, 95, xer);
	// beq cr6,0x838fed54
	if (cr6.eq) goto loc_838FED54;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82416260
	ctx.lr = 0x838FED30;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838febe8
	if (cr6.eq) goto loc_838FEBE8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x838fc5e8
	ctx.lr = 0x838FED44;
	sub_838FC5E8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r10,r11,12040
	ctx.r10.s64 = ctx.r11.s64 + 12040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x838fed70
	goto loc_838FED70;
loc_838FED54:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82416260
	ctx.lr = 0x838FED5C;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838febe8
	if (cr6.eq) goto loc_838FEBE8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x838fda98
	ctx.lr = 0x838FED6C;
	sub_838FDA98(ctx, base);
loc_838FED6C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_838FED70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838febec
	if (cr6.eq) goto loc_838FEBEC;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838FED88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FED94"))) PPC_WEAK_FUNC(sub_838FED94);
PPC_FUNC_IMPL(__imp__sub_838FED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FED98"))) PPC_WEAK_FUNC(sub_838FED98);
PPC_FUNC_IMPL(__imp__sub_838FED98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x838FEDA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FEDB8;
	sub_838FBDA8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FEDCC;
	sub_838FE1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fef24
	if (cr6.eq) goto loc_838FEF24;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r23,-31769
	ctx.r23.s64 = -2082013184;
	// addi r25,r10,13304
	ctx.r25.s64 = ctx.r10.s64 + 13304;
	// addi r24,r11,11968
	ctx.r24.s64 = ctx.r11.s64 + 11968;
loc_838FEDF0:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838fef44
	if (cr6.eq) goto loc_838FEF44;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(ctx.r11.s32, 60, xer);
	// beq cr6,0x838feea0
	if (cr6.eq) goto loc_838FEEA0;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82416260
	ctx.lr = 0x838FEE10;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fef50
	if (cr6.eq) goto loc_838FEF50;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x838fc5e8
	ctx.lr = 0x838FEE24;
	sub_838FC5E8(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// addi r4,r25,-1105
	ctx.r4.s64 = ctx.r25.s64 + -1105;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x838fb640
	ctx.lr = 0x838FEE38;
	sub_838FB640(ctx, base);
	// stb r22,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r22.u8);
	// lbz r11,29285(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 29285);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x838fee68
	if (!cr6.eq) goto loc_838FEE68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_838FEE68:
	// bctrl 
	ctx.lr = 0x838FEE6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe860
	ctx.lr = 0x838FEE78;
	sub_838FE860(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838feefc
	if (cr6.eq) goto loc_838FEEFC;
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
	ctx.lr = 0x838FEE9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x838fef08
	goto loc_838FEF08;
loc_838FEEA0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FEEB4;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838fef44
	if (!cr6.eq) goto loc_838FEF44;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838feb38
	ctx.lr = 0x838FEED0;
	sub_838FEB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838fef70
	if (cr6.eq) goto loc_838FEF70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FEEF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_838FEEFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fc6c8
	ctx.lr = 0x838FEF08;
	sub_838FC6C8(ctx, base);
loc_838FEF08:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FEF18;
	sub_838FE1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838fedf0
	if (!cr6.eq) goto loc_838FEDF0;
loc_838FEF24:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x838fef44
	if (cr6.eq) goto loc_838FEF44;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FEF44;
	sub_838FE530(ctx, base);
loc_838FEF44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FEF50:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x838fef70
	if (cr6.eq) goto loc_838FEF70;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FEF70;
	sub_838FE530(ctx, base);
loc_838FEF70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FEF7C"))) PPC_WEAK_FUNC(sub_838FEF7C);
PPC_FUNC_IMPL(__imp__sub_838FEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FEF80"))) PPC_WEAK_FUNC(sub_838FEF80);
PPC_FUNC_IMPL(__imp__sub_838FEF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x838fefb8
	if (!cr6.eq) goto loc_838FEFB8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// addi r9,r10,12224
	ctx.r9.s64 = ctx.r10.s64 + 12224;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bne cr6,0x838fefd0
	if (!cr6.eq) goto loc_838FEFD0;
loc_838FEFA8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(ctx.r11.u32, 38, xer);
	// bne cr6,0x838fefc4
	if (!cr6.eq) goto loc_838FEFC4;
	// b 0x838fe8f8
	sub_838FE8F8(ctx, base);
	return;
loc_838FEFB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x838fefa8
	goto loc_838FEFA8;
loc_838FEFC4:
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
loc_838FEFD0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ff020
	if (cr6.eq) goto loc_838FF020;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff014
	if (cr6.eq) goto loc_838FF014;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_838FEFF0:
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x838ff014
	if (!cr6.lt) goto loc_838FF014;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x838feff0
	if (!cr6.eq) goto loc_838FEFF0;
loc_838FF014:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
loc_838FF020:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_838FF028"))) PPC_WEAK_FUNC(sub_838FF028);
PPC_FUNC_IMPL(__imp__sub_838FF028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x838FF030;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12191
	ctx.r4.s64 = ctx.r11.s64 + 12191;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FF060;
	sub_838FB640(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ff1b8
	if (cr6.eq) goto loc_838FF1B8;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// lbz r10,29285(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29285);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x838ff1b8
	if (cr6.eq) goto loc_838FF1B8;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FF090;
	sub_838FE1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ff1ac
	if (cr6.eq) goto loc_838FF1AC;
	// li r24,32
	ctx.r24.s64 = 32;
loc_838FF0A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff23c
	if (cr6.eq) goto loc_838FF23C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FF0C0;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ff23c
	if (!cr6.eq) goto loc_838FF23C;
	// lbz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x838ff19c
	if (cr6.eq) goto loc_838FF19C;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838ff19c
	if (cr6.eq) goto loc_838FF19C;
	// clrlwi r3,r30,24
	ctx.r3.u64 = ctx.r30.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x838FF0EC;
	sub_831D26C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838ff10c
	if (!cr6.eq) goto loc_838FF10C;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838ff10c
	if (cr6.eq) goto loc_838FF10C;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne cr6,0x838ff110
	if (!cr6.eq) goto loc_838FF110;
loc_838FF10C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_838FF110:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ff19c
	if (!cr6.eq) goto loc_838FF19C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff140
	if (cr6.eq) goto loc_838FF140;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FF13C;
	sub_838FB6F8(ctx, base);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_838FF140:
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r29.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r29,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r29.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fef80
	ctx.lr = 0x838FF164;
	sub_838FEF80(ctx, base);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x838ff190
	if (!cr6.eq) goto loc_838FF190;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x838fb6f8
	ctx.lr = 0x838FF18C;
	sub_838FB6F8(ctx, base);
	// b 0x838ff1a4
	goto loc_838FF1A4;
loc_838FF190:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x838fb6f8
	ctx.lr = 0x838FF198;
	sub_838FB6F8(ctx, base);
	// b 0x838ff1a4
	goto loc_838FF1A4;
loc_838FF19C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_838FF1A4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838ff0a0
	if (!cr6.eq) goto loc_838FF0A0;
loc_838FF1AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838FF1B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838ff1ac
	if (cr6.eq) goto loc_838FF1AC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_838FF1C4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff23c
	if (cr6.eq) goto loc_838FF23C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FF1E4;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ff23c
	if (!cr6.eq) goto loc_838FF23C;
	// stb r29,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r29.u8);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r29,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r29.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fef80
	ctx.lr = 0x838FF214;
	sub_838FEF80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FF228;
	sub_838FB6F8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x838ff1c4
	if (!cr6.eq) goto loc_838FF1C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_838FF23C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_838FF240:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ff240
	if (!cr6.eq) goto loc_838FF240;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FF268"))) PPC_WEAK_FUNC(sub_838FF268);
PPC_FUNC_IMPL(__imp__sub_838FF268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x838FF270;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r3,52
	ctx.r26.s64 = ctx.r3.s64 + 52;
	// stb r31,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r31.u8);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FF2A8;
	sub_838FB640(ctx, base);
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// beq cr6,0x838ff4f4
	if (cr6.eq) goto loc_838FF4F4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff4f4
	if (cr6.eq) goto loc_838FF4F4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// beq cr6,0x838ff2ec
	if (cr6.eq) goto loc_838FF2EC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// b 0x838ff2f4
	goto loc_838FF2F4;
loc_838FF2EC:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
loc_838FF2F4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// std r8,4(r30)
	PPC_STORE_U64(ctx.r30.u32 + 4, ctx.r8.u64);
	// bne cr6,0x838ff368
	if (!cr6.eq) goto loc_838FF368;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff368
	if (cr6.eq) goto loc_838FF368;
	// cmplwi cr6,r11,239
	cr6.compare<uint32_t>(ctx.r11.u32, 239, xer);
	// bne cr6,0x838ff368
	if (!cr6.eq) goto loc_838FF368;
	// lbz r11,1(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff368
	if (cr6.eq) goto loc_838FF368;
	// cmplwi cr6,r11,187
	cr6.compare<uint32_t>(ctx.r11.u32, 187, xer);
	// bne cr6,0x838ff368
	if (!cr6.eq) goto loc_838FF368;
	// lbz r11,2(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff368
	if (cr6.eq) goto loc_838FF368;
	// cmplwi cr6,r11,191
	cr6.compare<uint32_t>(ctx.r11.u32, 191, xer);
	// bne cr6,0x838ff368
	if (!cr6.eq) goto loc_838FF368;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// stb r11,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r11.u8);
loc_838FF368:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FF374;
	sub_838FE1A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838ff3a4
	if (!cr6.eq) goto loc_838FF3A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF398;
	sub_838FE530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838FF3A4:
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r27,r11,13256
	ctx.r27.s64 = ctx.r11.s64 + 13256;
loc_838FF3AC:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff4b8
	if (cr6.eq) goto loc_838FF4B8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838feb38
	ctx.lr = 0x838FF3C8;
	sub_838FEB38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ff4b8
	if (cr6.eq) goto loc_838FF4B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FF3F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc6c8
	ctx.lr = 0x838FF400;
	sub_838FC6C8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x838ff4a0
	if (!cr6.eq) goto loc_838FF4A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FF41C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ff4a0
	if (cr6.eq) goto loc_838FF4A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FF438;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x838ff454
	if (!cr6.eq) goto loc_838FF454;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x838ff4a0
	goto loc_838FF4A0;
loc_838FF454:
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FF468;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff47c
	if (cr6.eq) goto loc_838FF47C;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x838ff4a0
	goto loc_838FF4A0;
loc_838FF47C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FF490;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_838FF4A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FF4AC;
	sub_838FE1A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838ff3ac
	if (!cr6.eq) goto loc_838FF3AC;
loc_838FF4B8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ff4e8
	if (!cr6.eq) goto loc_838FF4E8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF4DC;
	sub_838FE530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838FF4E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_838FF4F4:
	// lbz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ff550
	if (!cr6.eq) goto loc_838FF550;
	// li r8,13
	ctx.r8.s64 = 13;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// stw r8,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,29352
	ctx.r9.s64 = ctx.r11.s64 + 29352;
	// stb r10,44(r30)
	PPC_STORE_U8(ctx.r30.u32 + 44, ctx.r10.u8);
	// lwz r4,52(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FF520:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ff520
	if (!cr6.eq) goto loc_838FF520;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FF544;
	sub_838FB640(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_838FF550:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FF55C"))) PPC_WEAK_FUNC(sub_838FF55C);
PPC_FUNC_IMPL(__imp__sub_838FF55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FF560"))) PPC_WEAK_FUNC(sub_838FF560);
PPC_FUNC_IMPL(__imp__sub_838FF560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x838FF568;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FF584;
	sub_838FE1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FF590;
	sub_838FBDA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x838ffa40
	if (cr6.eq) goto loc_838FFA40;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ffa40
	if (cr6.eq) goto loc_838FFA40;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x838ff5d0
	if (cr6.eq) goto loc_838FF5D0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x838fe028
	ctx.lr = 0x838FF5C0;
	sub_838FE028(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r10,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r10.u32);
loc_838FF5D0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// beq cr6,0x838ff608
	if (cr6.eq) goto loc_838FF608;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF5FC;
	sub_838FE530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF608:
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FF614;
	sub_838FE1A8(ctx, base);
	// addi r31,r21,32
	ctx.r31.s64 = ctx.r21.s64 + 32;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x838fe348
	ctx.lr = 0x838FF628;
	sub_838FE348(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffa14
	if (cr6.eq) goto loc_838FFA14;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ffa14
	if (cr6.eq) goto loc_838FFA14;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,13300
	ctx.r30.s64 = ctx.r11.s64 + 13300;
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// bl 0x838fb778
	ctx.lr = 0x838FF654;
	sub_838FB778(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x838fb6f8
	ctx.lr = 0x838FF668;
	sub_838FB6F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838fb6f8
	ctx.lr = 0x838FF678;
	sub_838FB6F8(ctx, base);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-31743
	ctx.r10.s64 = -2080309248;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r23,r11,11736
	ctx.r23.s64 = ctx.r11.s64 + 11736;
	// addi r22,r10,15368
	ctx.r22.s64 = ctx.r10.s64 + 15368;
loc_838FF690:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff9f8
	if (cr6.eq) goto loc_838FF9F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FF6A8;
	sub_838FE1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ff9bc
	if (cr6.eq) goto loc_838FF9BC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ff9bc
	if (cr6.eq) goto loc_838FF9BC;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x838ff770
	if (cr6.eq) goto loc_838FF770;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(ctx.r11.s32, 62, xer);
	// beq cr6,0x838ff7d8
	if (cr6.eq) goto loc_838FF7D8;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82416260
	ctx.lr = 0x838FF6DC;
	sub_82416260(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ff8c8
	if (cr6.eq) goto loc_838FF8C8;
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r22,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r22.u32);
	// stw r22,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r22.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r28.u32);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x838FF72C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ff968
	if (cr6.eq) goto loc_838FF968;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff968
	if (cr6.eq) goto loc_838FF968;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r21,44
	ctx.r30.s64 = ctx.r21.s64 + 44;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc278
	ctx.lr = 0x838FF758;
	sub_838FC278(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x838ff904
	if (!cr6.eq) goto loc_838FF904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc258
	ctx.lr = 0x838FF76C;
	sub_838FC258(ctx, base);
	// b 0x838ff690
	goto loc_838FF690;
loc_838FF770:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(ctx.r11.u32, 62, xer);
	// beq cr6,0x838ff7b8
	if (cr6.eq) goto loc_838FF7B8;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ff79c
	if (cr6.eq) goto loc_838FF79C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF79C;
	sub_838FE530(ctx, base);
loc_838FF79C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// bl 0x82416268
	ctx.lr = 0x838FF7AC;
	sub_82416268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF7B8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r5,1
	ctx.r31.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ff7cc
	if (cr6.eq) goto loc_838FF7CC;
	// bl 0x82416268
	ctx.lr = 0x838FF7CC;
	sub_82416268(ctx, base);
loc_838FF7CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF7D8:
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x838fed98
	ctx.lr = 0x838FF7EC;
	sub_838FED98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ff88c
	if (cr6.eq) goto loc_838FF88C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ff88c
	if (cr6.eq) goto loc_838FF88C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// bl 0x831cef50
	ctx.lr = 0x838FF818;
	sub_831CEF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x838ff850
	if (!cr6.eq) goto loc_838FF850;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzux r10,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// bne cr6,0x838ff838
	if (!cr6.eq) goto loc_838FF838;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_838FF838:
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ff7cc
	if (cr6.eq) goto loc_838FF7CC;
	// bl 0x82416268
	ctx.lr = 0x838FF844;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF850:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ff870
	if (cr6.eq) goto loc_838FF870;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF870;
	sub_838FE530(ctx, base);
loc_838FF870:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// bl 0x82416268
	ctx.lr = 0x838FF880;
	sub_82416268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF88C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ff8ac
	if (cr6.eq) goto loc_838FF8AC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF8AC;
	sub_838FE530(ctx, base);
loc_838FF8AC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// bl 0x82416268
	ctx.lr = 0x838FF8BC;
	sub_82416268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF8C8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ff8e8
	if (cr6.eq) goto loc_838FF8E8;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF8E8;
	sub_838FE530(ctx, base);
loc_838FF8E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// bl 0x82416268
	ctx.lr = 0x838FF8F8;
	sub_82416268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF904:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FF910:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ff910
	if (!cr6.eq) goto loc_838FF910;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FF934;
	sub_838FB640(ctx, base);
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
	ctx.lr = 0x838FF94C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// bl 0x82416268
	ctx.lr = 0x838FF95C;
	sub_82416268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF968:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ff988
	if (cr6.eq) goto loc_838FF988;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF988;
	sub_838FE530(ctx, base);
loc_838FF988:
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
	ctx.lr = 0x838FF9A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// bl 0x82416268
	ctx.lr = 0x838FF9B0;
	sub_82416268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF9BC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ff9dc
	if (cr6.eq) goto loc_838FF9DC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FF9DC;
	sub_838FE530(ctx, base);
loc_838FF9DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// bl 0x82416268
	ctx.lr = 0x838FF9EC;
	sub_82416268(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FF9F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r3,r22
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, xer);
	// beq cr6,0x838ffa08
	if (cr6.eq) goto loc_838FFA08;
	// bl 0x82416268
	ctx.lr = 0x838FFA08;
	sub_82416268(ctx, base);
loc_838FFA08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FFA14:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FFA34;
	sub_838FE530(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_838FFA40:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x838ffaa4
	if (cr6.eq) goto loc_838FFAA4;
	// lbz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ffaa4
	if (!cr6.eq) goto loc_838FFAA4;
	// lis r10,-31769
	ctx.r10.s64 = -2082013184;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,29352
	ctx.r8.s64 = ctx.r10.s64 + 29352;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
	// stb r9,44(r25)
	PPC_STORE_U8(ctx.r25.u32 + 44, ctx.r9.u8);
	// lwz r4,16(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FFA74:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ffa74
	if (!cr6.eq) goto loc_838FFA74;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r25,52
	ctx.r3.s64 = ctx.r25.s64 + 52;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x838FFA98;
	sub_838FB640(ctx, base);
	// li r26,-1
	ctx.r26.s64 = -1;
	// stw r26,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r26.u32);
	// stw r26,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r26.u32);
loc_838FFAA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FFAB0"))) PPC_WEAK_FUNC(sub_838FFAB0);
PPC_FUNC_IMPL(__imp__sub_838FFAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x838FFAB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FFAD4;
	sub_838FE1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffca8
	if (cr6.eq) goto loc_838FFCA8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ffca8
	if (cr6.eq) goto loc_838FFCA8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838ffb14
	if (cr6.eq) goto loc_838FFB14;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fe028
	ctx.lr = 0x838FFB04;
	sub_838FE028(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
loc_838FFB14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// bl 0x838fe348
	ctx.lr = 0x838FFB24;
	sub_838FE348(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffc88
	if (cr6.eq) goto loc_838FFC88;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ffc88
	if (cr6.eq) goto loc_838FFC88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FFB40;
	sub_838FE1A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffc78
	if (cr6.eq) goto loc_838FFC78;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ffc78
	if (cr6.eq) goto loc_838FFC78;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(ctx.r11.s32, 61, xer);
	// bne cr6,0x838ffc78
	if (!cr6.eq) goto loc_838FFC78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x838fe1a8
	ctx.lr = 0x838FFB70;
	sub_838FE1A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffc88
	if (cr6.eq) goto loc_838FFC88;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x838ffc88
	if (cr6.eq) goto loc_838FFC88;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// bne cr6,0x838ffbc8
	if (!cr6.eq) goto loc_838FFBC8;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r11,r11,12215
	ctx.r11.s64 = ctx.r11.s64 + 12215;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1105
	ctx.r6.s64 = ctx.r11.s64 + 1105;
loc_838FFBA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x838ff028
	ctx.lr = 0x838FFBB8;
	sub_838FF028(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_838FFBBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838FFBC8:
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// bne cr6,0x838ffbe8
	if (!cr6.eq) goto loc_838FFBE8;
	// addi r11,r11,12215
	ctx.r11.s64 = ctx.r11.s64 + 12215;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1109
	ctx.r6.s64 = ctx.r11.s64 + 1109;
	// b 0x838ffba8
	goto loc_838FFBA8;
loc_838FFBE8:
	// addi r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12215
	ctx.r4.s64 = ctx.r11.s64 + 12215;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FFBFC;
	sub_838FB640(ctx, base);
loc_838FFBFC:
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffbbc
	if (cr6.eq) goto loc_838FFBBC;
	// bl 0x838fded0
	ctx.lr = 0x838FFC0C;
	sub_838FDED0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ffbbc
	if (!cr6.eq) goto loc_838FFBBC;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x838ffbbc
	if (cr6.eq) goto loc_838FFBBC;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x838ffbbc
	if (cr6.eq) goto loc_838FFBBC;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(ctx.r11.s32, 47, xer);
	// beq cr6,0x838ffbbc
	if (cr6.eq) goto loc_838FFBBC;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(ctx.r11.s32, 62, xer);
	// beq cr6,0x838ffbbc
	if (cr6.eq) goto loc_838FFBBC;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// beq cr6,0x838ffc88
	if (cr6.eq) goto loc_838FFC88;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// beq cr6,0x838ffc88
	if (cr6.eq) goto loc_838FFC88;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x838fb6f8
	ctx.lr = 0x838FFC64;
	sub_838FB6F8(ctx, base);
	// addic. r31,r31,1
	xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838ffbfc
	if (!cr0.eq) goto loc_838FFBFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_838FFC78:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffca8
	if (cr6.eq) goto loc_838FFCA8;
	// b 0x838ffc98
	goto loc_838FFC98;
loc_838FFC88:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffca8
	if (cr6.eq) goto loc_838FFCA8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_838FFC98:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x838fe530
	ctx.lr = 0x838FFCA8;
	sub_838FE530(ctx, base);
loc_838FFCA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FFCB4"))) PPC_WEAK_FUNC(sub_838FFCB4);
PPC_FUNC_IMPL(__imp__sub_838FFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FFCB8"))) PPC_WEAK_FUNC(sub_838FFCB8);
PPC_FUNC_IMPL(__imp__sub_838FFCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x838FFCC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// addi r26,r3,32
	ctx.r26.s64 = ctx.r3.s64 + 32;
	// addi r28,r11,13344
	ctx.r28.s64 = ctx.r11.s64 + 13344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,-1121
	ctx.r4.s64 = ctx.r28.s64 + -1121;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FFCF0;
	sub_838FB640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FFCF8;
	sub_838FBDA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x838ffd24
	if (cr6.eq) goto loc_838FFD24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x838fe028
	ctx.lr = 0x838FFD14;
	sub_838FE028(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_838FFD24:
	// lbz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ffd80
	if (!cr6.eq) goto loc_838FFD80;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FFD44;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ffd80
	if (!cr6.eq) goto loc_838FFD80;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838ff028
	ctx.lr = 0x838FFD6C;
	sub_838FF028(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x838ffdc0
	if (cr6.eq) goto loc_838FFDC0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838FFD80:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// stb r11,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r11.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FFD9C;
	sub_838FE430(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ffdcc
	if (!cr6.eq) goto loc_838FFDCC;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x838fe530
	ctx.lr = 0x838FFDC0;
	sub_838FE530(ctx, base);
loc_838FFDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_838FFDCC:
	// addic. r31,r29,9
	xer.ca = ctx.r29.u32 > 4294967286;
	ctx.r31.s64 = ctx.r29.s64 + 9;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x838ffe20
	if (cr0.eq) goto loc_838FFE20;
loc_838FFDD4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x838ffe20
	if (cr6.eq) goto loc_838FFE20;
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FFDF4;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x838ffe20
	if (!cr6.eq) goto loc_838FFE20;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x838fb6f8
	ctx.lr = 0x838FFE18;
	sub_838FB6F8(ctx, base);
	// addic. r31,r31,1
	xer.ca = ctx.r31.u32 > 4294967294;
	ctx.r31.s64 = ctx.r31.s64 + 1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x838ffdd4
	if (!cr0.eq) goto loc_838FFDD4;
loc_838FFE20:
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// addi r6,r28,-4
	ctx.r6.s64 = ctx.r28.s64 + -4;
	// addi r29,r11,15368
	ctx.r29.s64 = ctx.r11.s64 + 15368;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838ff028
	ctx.lr = 0x838FFE48;
	sub_838FF028(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x838ffe60
	if (cr6.eq) goto loc_838FFE60;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82416268
	ctx.lr = 0x838FFE60;
	sub_82416268(ctx, base);
loc_838FFE60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_838FFE6C"))) PPC_WEAK_FUNC(sub_838FFE6C);
PPC_FUNC_IMPL(__imp__sub_838FFE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_838FFE70"))) PPC_WEAK_FUNC(sub_838FFE70);
PPC_FUNC_IMPL(__imp__sub_838FFE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x838FFE78;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FFE94;
	sub_838FE1A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbda8
	ctx.lr = 0x838FFEA0;
	sub_838FBDA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x839001cc
	if (cr6.eq) goto loc_839001CC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839001cc
	if (cr6.eq) goto loc_839001CC;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r23,r11,13376
	ctx.r23.s64 = ctx.r11.s64 + 13376;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r23,-28
	ctx.r4.s64 = ctx.r23.s64 + -28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FFED4;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839001cc
	if (cr6.eq) goto loc_839001CC;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x838fff08
	if (cr6.eq) goto loc_838FFF08;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x838fe028
	ctx.lr = 0x838FFEF8;
	sub_838FE028(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_838FFF08:
	// addi r22,r31,44
	ctx.r22.s64 = ctx.r31.s64 + 44;
	// addi r4,r23,-122
	ctx.r4.s64 = ctx.r23.s64 + -122;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// bl 0x838fb640
	ctx.lr = 0x838FFF20;
	sub_838FB640(ctx, base);
	// addi r21,r31,48
	ctx.r21.s64 = ctx.r31.s64 + 48;
	// addi r4,r23,-121
	ctx.r4.s64 = ctx.r23.s64 + -121;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FFF34;
	sub_838FB640(ctx, base);
	// addi r20,r31,52
	ctx.r20.s64 = ctx.r31.s64 + 52;
	// addi r4,r23,-115
	ctx.r4.s64 = ctx.r23.s64 + -115;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x838fb640
	ctx.lr = 0x838FFF48;
	sub_838FB640(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83900230
	if (cr6.eq) goto loc_83900230;
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,15368
	ctx.r27.s64 = ctx.r11.s64 + 15368;
	// addi r25,r10,11736
	ctx.r25.s64 = ctx.r10.s64 + 11736;
loc_838FFF68:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83900230
	if (cr6.eq) goto loc_83900230;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(ctx.r11.s32, 62, xer);
	// beq cr6,0x839001c0
	if (cr6.eq) goto loc_839001C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x838fe1a8
	ctx.lr = 0x838FFF8C;
	sub_838FE1A8(ctx, base);
	// addi r4,r23,-20
	ctx.r4.s64 = ctx.r23.s64 + -20;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x838fe430
	ctx.lr = 0x838FFFA0;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83900034
	if (cr6.eq) goto loc_83900034;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x838ffab0
	ctx.lr = 0x838FFFE4;
	sub_838FFAB0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_838FFFF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x838ffff4
	if (!cr6.eq) goto loc_838FFFF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x83900018;
	sub_838FB640(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8390001C:
	// bl 0x838fc3e8
	ctx.lr = 0x83900020;
	sub_838FC3E8(ctx, base);
loc_83900020:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x838fff68
	if (!cr6.eq) goto loc_838FFF68;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_83900034:
	// addi r4,r23,-12
	ctx.r4.s64 = ctx.r23.s64 + -12;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fe430
	ctx.lr = 0x83900044;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x839000c4
	if (cr6.eq) goto loc_839000C4;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// bl 0x838ffab0
	ctx.lr = 0x83900088;
	sub_838FFAB0(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83900098:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83900098
	if (!cr6.eq) goto loc_83900098;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x839000BC;
	sub_838FB640(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8390001c
	goto loc_8390001C;
loc_839000C4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fe430
	ctx.lr = 0x839000D4;
	sub_838FE430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83900154
	if (cr6.eq) goto loc_83900154;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r27.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// bl 0x838ffab0
	ctx.lr = 0x83900118;
	sub_838FFAB0(ctx, base);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83900128:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83900128
	if (!cr6.eq) goto loc_83900128;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x8390014C;
	sub_838FB640(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x8390001c
	goto loc_8390001C;
loc_83900154:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x83900230
	if (cr6.eq) goto loc_83900230;
loc_8390015C:
	// lbz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83900020
	if (cr6.eq) goto loc_83900020;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(ctx.r11.s32, 62, xer);
	// beq cr6,0x83900020
	if (cr6.eq) goto loc_83900020;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// bl 0x831d26c0
	ctx.lr = 0x8390017C;
	sub_831D26C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8390019c
	if (!cr6.eq) goto loc_8390019C;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x8390019c
	if (cr6.eq) goto loc_8390019C;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x839001a0
	if (!cr6.eq) goto loc_839001A0;
loc_8390019C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_839001A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83900020
	if (!cr6.eq) goto loc_83900020;
	// addic. r30,r30,1
	xer.ca = ctx.r30.u32 > 4294967294;
	ctx.r30.s64 = ctx.r30.s64 + 1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne 0x8390015c
	if (!cr0.eq) goto loc_8390015C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_839001C0:
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_839001CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83900230
	if (cr6.eq) goto loc_83900230;
	// lbz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83900230
	if (!cr6.eq) goto loc_83900230;
	// lis r11,-31769
	ctx.r11.s64 = -2082013184;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,29352
	ctx.r9.s64 = ctx.r11.s64 + 29352;
	// li r8,12
	ctx.r8.s64 = 12;
	// stb r10,44(r29)
	PPC_STORE_U8(ctx.r29.u32 + 44, ctx.r10.u8);
	// stw r8,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r8.u32);
	// lwz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83900200:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83900200
	if (!cr6.eq) goto loc_83900200;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,52
	ctx.r3.s64 = ctx.r29.s64 + 52;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x838fb640
	ctx.lr = 0x83900224;
	sub_838FB640(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r28,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r28.u32);
	// stw r28,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r28.u32);
loc_83900230:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8390023C"))) PPC_WEAK_FUNC(sub_8390023C);
PPC_FUNC_IMPL(__imp__sub_8390023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83900240"))) PPC_WEAK_FUNC(sub_83900240);
PPC_FUNC_IMPL(__imp__sub_83900240) {
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
	// bl 0x83108968
	ctx.lr = 0x83900250;
	sub_83108968(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83108b28
	ctx.lr = 0x83900258;
	sub_83108B28(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83900268"))) PPC_WEAK_FUNC(sub_83900268);
PPC_FUNC_IMPL(__imp__sub_83900268) {
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
	// cmpwi cr6,r4,14
	cr6.compare<int32_t>(ctx.r4.s32, 14, xer);
	// bge cr6,0x839002a4
	if (!cr6.lt) goto loc_839002A4;
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839002a4
	if (cr6.eq) goto loc_839002A4;
	// bl 0x82efec00
	ctx.lr = 0x83900294;
	sub_82EFEC00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x839002a8
	if (!cr6.eq) goto loc_839002A8;
loc_839002A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_839002A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839002B8"))) PPC_WEAK_FUNC(sub_839002B8);
PPC_FUNC_IMPL(__imp__sub_839002B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,14
	cr6.compare<uint32_t>(ctx.r4.u32, 14, xer);
	// blt cr6,0x839002cc
	if (cr6.lt) goto loc_839002CC;
loc_839002C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_839002CC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x839002c4
	if (cr6.eq) goto loc_839002C4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82efebe8
	sub_82EFEBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839002E8"))) PPC_WEAK_FUNC(sub_839002E8);
PPC_FUNC_IMPL(__imp__sub_839002E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-31856
	ctx.r12.s64 = -2087714816;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,780
	ctx.r12.s64 = ctx.r12.s64 + 780;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_83900374;
	case 1:
		goto loc_83900374;
	case 2:
		goto loc_83900374;
	case 3:
		goto loc_83900344;
	case 4:
		goto loc_8390034C;
	case 5:
		goto loc_83900354;
	case 6:
		goto loc_8390036C;
	case 7:
		goto loc_83900364;
	case 8:
		goto loc_83900374;
	case 9:
		goto loc_8390035C;
	case 10:
		goto loc_83900364;
	case 11:
		goto loc_8390036C;
	case 12:
		goto loc_83900364;
	case 13:
		goto loc_83900374;
	default:
		return;
	}
	// lwz r28,884(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 884);
	// lwz r28,884(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 884);
	// lwz r28,884(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 884);
	// lwz r28,836(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 836);
	// lwz r28,844(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 844);
	// lwz r28,852(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 852);
	// lwz r28,876(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 876);
	// lwz r28,868(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 868);
	// lwz r28,884(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 884);
	// lwz r28,860(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 860);
	// lwz r28,868(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 868);
	// lwz r28,876(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 876);
	// lwz r28,868(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 868);
	// lwz r28,884(r16)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r16.u32 + 884);
loc_83900344:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_8390034C:
	// li r3,192
	ctx.r3.s64 = 192;
	// blr 
	return;
loc_83900354:
	// li r3,72
	ctx.r3.s64 = 72;
	// blr 
	return;
loc_8390035C:
	// li r3,108
	ctx.r3.s64 = 108;
	// blr 
	return;
loc_83900364:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8390036C:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_83900374:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8390037C"))) PPC_WEAK_FUNC(sub_8390037C);
PPC_FUNC_IMPL(__imp__sub_8390037C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83900380"))) PPC_WEAK_FUNC(sub_83900380);
PPC_FUNC_IMPL(__imp__sub_83900380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,14
	cr6.compare<int32_t>(ctx.r4.s32, 14, xer);
	// blt cr6,0x83900390
	if (cr6.lt) goto loc_83900390;
loc_83900388:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83900390:
	// addi r11,r4,3
	ctx.r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83900388
	if (cr6.eq) goto loc_83900388;
	// b 0x83ac2480
	sub_83AC2480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_839003A8"))) PPC_WEAK_FUNC(sub_839003A8);
PPC_FUNC_IMPL(__imp__sub_839003A8) {
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
	// bl 0x83108968
	ctx.lr = 0x839003B8;
	sub_83108968(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83108978
	ctx.lr = 0x839003C0;
	sub_83108978(ctx, base);
	// lis r11,13732
	ctx.r11.s64 = 899940352;
	// ori r11,r11,59648
	ctx.r11.u64 = ctx.r11.u64 | 59648;
	// subfc r10,r3,r11
	xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_839003E4"))) PPC_WEAK_FUNC(sub_839003E4);
PPC_FUNC_IMPL(__imp__sub_839003E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_839003E8"))) PPC_WEAK_FUNC(sub_839003E8);
PPC_FUNC_IMPL(__imp__sub_839003E8) {
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
	// lis r31,-31743
	ctx.r31.s64 = -2080309248;
	// lwz r11,15392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15392);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8390048c
	if (!cr6.eq) goto loc_8390048C;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x83900420;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83900484
	if (cr6.eq) goto loc_83900484;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r8,r10,21716
	ctx.r8.s64 = ctx.r10.s64 + 21716;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r11.u8);
	// stb r7,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r7.u8);
loc_83900464:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83900464
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83900464;
	// stw r3,15392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15392, ctx.r3.u32);
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
loc_83900484:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15392, ctx.r11.u32);
loc_8390048C:
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

