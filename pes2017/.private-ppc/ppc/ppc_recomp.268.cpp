#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830A8324"))) PPC_WEAK_FUNC(sub_830A8324);
PPC_FUNC_IMPL(__imp__sub_830A8324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8328"))) PPC_WEAK_FUNC(sub_830A8328);
PPC_FUNC_IMPL(__imp__sub_830A8328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// ble cr6,0x830a8338
	if (!cr6.gt) goto loc_830A8338;
	// li r4,100
	ctx.r4.s64 = 100;
loc_830A8338:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r11,r10,20,5,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x7F00000) | (ctx.r11.u64 & 0xFFFFFFFFF80FFFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A834C"))) PPC_WEAK_FUNC(sub_830A834C);
PPC_FUNC_IMPL(__imp__sub_830A834C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8350"))) PPC_WEAK_FUNC(sub_830A8350);
PPC_FUNC_IMPL(__imp__sub_830A8350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,12,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A835C"))) PPC_WEAK_FUNC(sub_830A835C);
PPC_FUNC_IMPL(__imp__sub_830A835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8360"))) PPC_WEAK_FUNC(sub_830A8360);
PPC_FUNC_IMPL(__imp__sub_830A8360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r4,16,14,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x30000) | (ctx.r11.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8370"))) PPC_WEAK_FUNC(sub_830A8370);
PPC_FUNC_IMPL(__imp__sub_830A8370) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A837C"))) PPC_WEAK_FUNC(sub_830A837C);
PPC_FUNC_IMPL(__imp__sub_830A837C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8380"))) PPC_WEAK_FUNC(sub_830A8380);
PPC_FUNC_IMPL(__imp__sub_830A8380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r4,14,16,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0xC000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8390"))) PPC_WEAK_FUNC(sub_830A8390);
PPC_FUNC_IMPL(__imp__sub_830A8390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,18,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A839C"))) PPC_WEAK_FUNC(sub_830A839C);
PPC_FUNC_IMPL(__imp__sub_830A839C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A83A0"))) PPC_WEAK_FUNC(sub_830A83A0);
PPC_FUNC_IMPL(__imp__sub_830A83A0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83A8"))) PPC_WEAK_FUNC(sub_830A83A8);
PPC_FUNC_IMPL(__imp__sub_830A83A8) {
	PPC_FUNC_PROLOGUE();
	// sth r4,18(r3)
	PPC_STORE_U16(ctx.r3.u32 + 18, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83B0"))) PPC_WEAK_FUNC(sub_830A83B0);
PPC_FUNC_IMPL(__imp__sub_830A83B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,18
	ctx.r3.s64 = ctx.r3.s64 + 18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83B8"))) PPC_WEAK_FUNC(sub_830A83B8);
PPC_FUNC_IMPL(__imp__sub_830A83B8) {
	PPC_FUNC_PROLOGUE();
	// sth r4,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83C0"))) PPC_WEAK_FUNC(sub_830A83C0);
PPC_FUNC_IMPL(__imp__sub_830A83C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,22
	ctx.r3.s64 = ctx.r3.s64 + 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83C8"))) PPC_WEAK_FUNC(sub_830A83C8);
PPC_FUNC_IMPL(__imp__sub_830A83C8) {
	PPC_FUNC_PROLOGUE();
	// sth r4,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83D0"))) PPC_WEAK_FUNC(sub_830A83D0);
PPC_FUNC_IMPL(__imp__sub_830A83D0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83D8"))) PPC_WEAK_FUNC(sub_830A83D8);
PPC_FUNC_IMPL(__imp__sub_830A83D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,26
	ctx.r3.s64 = ctx.r3.s64 + 26;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83E0"))) PPC_WEAK_FUNC(sub_830A83E0);
PPC_FUNC_IMPL(__imp__sub_830A83E0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83E8"))) PPC_WEAK_FUNC(sub_830A83E8);
PPC_FUNC_IMPL(__imp__sub_830A83E8) {
	PPC_FUNC_PROLOGUE();
	// sth r4,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83F0"))) PPC_WEAK_FUNC(sub_830A83F0);
PPC_FUNC_IMPL(__imp__sub_830A83F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,30
	ctx.r3.s64 = ctx.r3.s64 + 30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A83F8"))) PPC_WEAK_FUNC(sub_830A83F8);
PPC_FUNC_IMPL(__imp__sub_830A83F8) {
	PPC_FUNC_PROLOGUE();
	// sth r4,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8400"))) PPC_WEAK_FUNC(sub_830A8400);
PPC_FUNC_IMPL(__imp__sub_830A8400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// sth r11,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A840C"))) PPC_WEAK_FUNC(sub_830A840C);
PPC_FUNC_IMPL(__imp__sub_830A840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8410"))) PPC_WEAK_FUNC(sub_830A8410);
PPC_FUNC_IMPL(__imp__sub_830A8410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,34
	ctx.r3.s64 = ctx.r3.s64 + 34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8418"))) PPC_WEAK_FUNC(sub_830A8418);
PPC_FUNC_IMPL(__imp__sub_830A8418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r4,11,18,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8428"))) PPC_WEAK_FUNC(sub_830A8428);
PPC_FUNC_IMPL(__imp__sub_830A8428) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwimi r11,r4,18,12,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 18) & 0xC0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8438"))) PPC_WEAK_FUNC(sub_830A8438);
PPC_FUNC_IMPL(__imp__sub_830A8438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r3,r11,14,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8444"))) PPC_WEAK_FUNC(sub_830A8444);
PPC_FUNC_IMPL(__imp__sub_830A8444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8448"))) PPC_WEAK_FUNC(sub_830A8448);
PPC_FUNC_IMPL(__imp__sub_830A8448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23300
	ctx.r3.s64 = ctx.r11.s64 + 23300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8454"))) PPC_WEAK_FUNC(sub_830A8454);
PPC_FUNC_IMPL(__imp__sub_830A8454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8458"))) PPC_WEAK_FUNC(sub_830A8458);
PPC_FUNC_IMPL(__imp__sub_830A8458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// lhz r10,30(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// lhz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lhz r7,26(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// lhz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// lhz r4,22(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// lhz r9,18(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// lhz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// and r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r6,r7,r4
	ctx.r6.u64 = ctx.r7.u64 & ctx.r4.u64;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// and r11,r4,r8
	ctx.r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x830a84bc
	if (!cr6.eq) goto loc_830A84BC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm r9,r11,0,12,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x830a84c0
	if (cr6.eq) goto loc_830A84C0;
loc_830A84BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A84C0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A84C8"))) PPC_WEAK_FUNC(sub_830A84C8);
PPC_FUNC_IMPL(__imp__sub_830A84C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x830a8524
	if (cr0.eq) goto loc_830A8524;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// twllei r11,0
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divwu r8,r9,r11
	ctx.r8.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x830a851c
	if (cr6.lt) goto loc_830A851C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830A851C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_830A8524:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A852C"))) PPC_WEAK_FUNC(sub_830A852C);
PPC_FUNC_IMPL(__imp__sub_830A852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8530"))) PPC_WEAK_FUNC(sub_830A8530);
PPC_FUNC_IMPL(__imp__sub_830A8530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A8538;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x830a85d4
	if (!cr6.lt) goto loc_830A85D4;
	// cmpwi cr6,r5,41
	cr6.compare<int32_t>(ctx.r5.s32, 41, xer);
	// bge cr6,0x830a85d4
	if (!cr6.lt) goto loc_830A85D4;
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A8568;
	sub_82596FE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830ae8e0
	ctx.lr = 0x830A8578;
	sub_830AE8E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830af7d8
	ctx.lr = 0x830A8580;
	sub_830AF7D8(ctx, base);
	// bl 0x830a84c8
	ctx.lr = 0x830A8584;
	sub_830A84C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830a85c0
	if (!cr6.eq) goto loc_830A85C0;
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(ctx.r28.s32, 7, xer);
	// beq cr6,0x830a85a0
	if (cr6.eq) goto loc_830A85A0;
	// cmpwi cr6,r28,8
	cr6.compare<int32_t>(ctx.r28.s32, 8, xer);
	// bne cr6,0x830a85c0
	if (!cr6.eq) goto loc_830A85C0;
loc_830A85A0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830ae8e0
	ctx.lr = 0x830A85B0;
	sub_830AE8E0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x830af7d8
	ctx.lr = 0x830A85B8;
	sub_830AF7D8(ctx, base);
	// bl 0x830a84c8
	ctx.lr = 0x830A85BC;
	sub_830A84C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830A85C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82597088
	ctx.lr = 0x830A85C8;
	sub_82597088(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A85D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A85E0"))) PPC_WEAK_FUNC(sub_830A85E0);
PPC_FUNC_IMPL(__imp__sub_830A85E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x830A85E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r5.u64);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r28,212(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lhz r24,208(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 208);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// bne cr6,0x830a8628
	if (!cr6.eq) goto loc_830A8628;
	// addi r10,r11,19256
	ctx.r10.s64 = ctx.r11.s64 + 19256;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x830a8654
	goto loc_830A8654;
loc_830A8628:
	// addi r11,r11,19256
	ctx.r11.s64 = ctx.r11.s64 + 19256;
	// clrlwi r9,r24,16
	ctx.r9.u64 = ctx.r24.u32 & 0xFFFF;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x830a864c
	if (!cr6.eq) goto loc_830A864C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830a8650
	if (cr6.eq) goto loc_830A8650;
loc_830A864C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A8650:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830A8654:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a8724
	if (!cr6.eq) goto loc_830A8724;
	// cmpwi cr6,r21,31
	cr6.compare<int32_t>(ctx.r21.s32, 31, xer);
	// bge cr6,0x830a8724
	if (!cr6.lt) goto loc_830A8724;
	// lwz r23,4(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A8674;
	sub_82596FE8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_830A8678:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830a868c
	if (!cr6.lt) goto loc_830A868C;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x830a8710
	if (!cr6.eq) goto loc_830A8710;
loc_830A868C:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x830ae8e0
	ctx.lr = 0x830A869C;
	sub_830AE8E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830A86A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830af800
	ctx.lr = 0x830A86B0;
	sub_830AF800(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x830A86B8;
	sub_83102DB0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x830a86d0
	if (!cr6.eq) goto loc_830A86D0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830a86f8
	goto loc_830A86F8;
loc_830A86D0:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830a86f0
	if (!cr6.eq) goto loc_830A86F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830a86f4
	if (cr6.eq) goto loc_830A86F4;
loc_830A86F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A86F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830A86F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a8730
	if (!cr6.eq) goto loc_830A8730;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,23
	cr6.compare<int32_t>(ctx.r31.s32, 23, xer);
	// blt cr6,0x830a86a4
	if (cr6.lt) goto loc_830A86A4;
loc_830A8710:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(ctx.r27.s32, 2, xer);
	// blt cr6,0x830a8678
	if (cr6.lt) goto loc_830A8678;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82597088
	ctx.lr = 0x830A8724;
	sub_82597088(ctx, base);
loc_830A8724:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830A8730:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af928
	ctx.lr = 0x830A873C;
	sub_830AF928(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,28
	ctx.r11.s64 = 28;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r8,r11
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x830a87bc
	if (cr0.eq) goto loc_830A87BC;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// twllei r11,0
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divwu r8,r9,r11
	ctx.r8.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x830a87a4
	if (cr6.lt) goto loc_830A87A4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82597088
	ctx.lr = 0x830A8798;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830A87A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82597088
	ctx.lr = 0x830A87B0;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_830A87BC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82597088
	ctx.lr = 0x830A87C8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A87D4"))) PPC_WEAK_FUNC(sub_830A87D4);
PPC_FUNC_IMPL(__imp__sub_830A87D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A87D8"))) PPC_WEAK_FUNC(sub_830A87D8);
PPC_FUNC_IMPL(__imp__sub_830A87D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A87E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830a8860
	if (cr6.eq) goto loc_830A8860;
	// lwz r24,4(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82596fe8
	ctx.lr = 0x830A8804;
	sub_82596FE8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_830A8808:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x830ae8e0
	ctx.lr = 0x830A8818;
	sub_830AE8E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_830A8820:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830af800
	ctx.lr = 0x830A882C;
	sub_830AF800(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x830A8834;
	sub_83102DB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x830a886c
	if (cr6.eq) goto loc_830A886C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,23
	cr6.compare<int32_t>(ctx.r31.s32, 23, xer);
	// blt cr6,0x830a8820
	if (cr6.lt) goto loc_830A8820;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// blt cr6,0x830a8808
	if (cr6.lt) goto loc_830A8808;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82597088
	ctx.lr = 0x830A8860;
	sub_82597088(ctx, base);
loc_830A8860:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A886C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830af950
	ctx.lr = 0x830A8874;
	sub_830AF950(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,28
	ctx.r11.s64 = 28;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r8,r11
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x830a88f4
	if (cr0.eq) goto loc_830A88F4;
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// twllei r11,0
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divwu r8,r9,r11
	ctx.r8.u32 = PPCDivide(ctx.r9.u32, ctx.r11.u32);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// stb r5,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x830a88dc
	if (cr6.lt) goto loc_830A88DC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82597088
	ctx.lr = 0x830A88D0;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A88DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82597088
	ctx.lr = 0x830A88E8;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A88F4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82597088
	ctx.lr = 0x830A8900;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A890C"))) PPC_WEAK_FUNC(sub_830A890C);
PPC_FUNC_IMPL(__imp__sub_830A890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8910"))) PPC_WEAK_FUNC(sub_830A8910);
PPC_FUNC_IMPL(__imp__sub_830A8910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A8918;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x830abb98
	ctx.lr = 0x830A8930;
	sub_830ABB98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x830a8530
	ctx.lr = 0x830A8944;
	sub_830A8530(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A894C"))) PPC_WEAK_FUNC(sub_830A894C);
PPC_FUNC_IMPL(__imp__sub_830A894C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8950"))) PPC_WEAK_FUNC(sub_830A8950);
PPC_FUNC_IMPL(__imp__sub_830A8950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A8958;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x830abbe8
	ctx.lr = 0x830A8974;
	sub_830ABBE8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x830a85e0
	ctx.lr = 0x830A898C;
	sub_830A85E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8994"))) PPC_WEAK_FUNC(sub_830A8994);
PPC_FUNC_IMPL(__imp__sub_830A8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8998"))) PPC_WEAK_FUNC(sub_830A8998);
PPC_FUNC_IMPL(__imp__sub_830A8998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A89A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,255
	ctx.r28.s64 = 255;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r29,22528
	ctx.r29.s64 = 1476395008;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
loc_830A89B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x830A89C4;
	sub_82A0C760(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a89dc
	if (cr6.eq) goto loc_830A89DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// beq cr6,0x830a89fc
	if (cr6.eq) goto loc_830A89FC;
loc_830A89DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// blt cr6,0x830a89b8
	if (cr6.lt) goto loc_830A89B8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A89F4;
	sub_82A2A558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830A89FC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A8A0C;
	sub_82A2A558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8A14"))) PPC_WEAK_FUNC(sub_830A8A14);
PPC_FUNC_IMPL(__imp__sub_830A8A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8A18"))) PPC_WEAK_FUNC(sub_830A8A18);
PPC_FUNC_IMPL(__imp__sub_830A8A18) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8A20"))) PPC_WEAK_FUNC(sub_830A8A20);
PPC_FUNC_IMPL(__imp__sub_830A8A20) {
	PPC_FUNC_PROLOGUE();
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8A28"))) PPC_WEAK_FUNC(sub_830A8A28);
PPC_FUNC_IMPL(__imp__sub_830A8A28) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8A38;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8A3C;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8A4C;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8A60"))) PPC_WEAK_FUNC(sub_830A8A60);
PPC_FUNC_IMPL(__imp__sub_830A8A60) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8A70;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8A74;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8A84;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8A98"))) PPC_WEAK_FUNC(sub_830A8A98);
PPC_FUNC_IMPL(__imp__sub_830A8A98) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8AA8;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8AAC;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8ABC;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8AD0"))) PPC_WEAK_FUNC(sub_830A8AD0);
PPC_FUNC_IMPL(__imp__sub_830A8AD0) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8AE0;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8AE4;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8AF4;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8B08"))) PPC_WEAK_FUNC(sub_830A8B08);
PPC_FUNC_IMPL(__imp__sub_830A8B08) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8B18;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8B1C;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8B2C;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8B40"))) PPC_WEAK_FUNC(sub_830A8B40);
PPC_FUNC_IMPL(__imp__sub_830A8B40) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8B50;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8B54;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8B64;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8B78"))) PPC_WEAK_FUNC(sub_830A8B78);
PPC_FUNC_IMPL(__imp__sub_830A8B78) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8B88;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8B8C;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8B9C;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8BB0"))) PPC_WEAK_FUNC(sub_830A8BB0);
PPC_FUNC_IMPL(__imp__sub_830A8BB0) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8BC0;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8BC4;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8BD4;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8BE8"))) PPC_WEAK_FUNC(sub_830A8BE8);
PPC_FUNC_IMPL(__imp__sub_830A8BE8) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8BF8;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8BFC;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8C0C;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8C20"))) PPC_WEAK_FUNC(sub_830A8C20);
PPC_FUNC_IMPL(__imp__sub_830A8C20) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8C30;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8C34;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8C44;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8C58"))) PPC_WEAK_FUNC(sub_830A8C58);
PPC_FUNC_IMPL(__imp__sub_830A8C58) {
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
	// bl 0x830a6bf8
	ctx.lr = 0x830A8C68;
	sub_830A6BF8(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x830A8C6C;
	sub_8357ECF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x830ae1f8
	ctx.lr = 0x830A8C7C;
	sub_830AE1F8(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8C90"))) PPC_WEAK_FUNC(sub_830A8C90);
PPC_FUNC_IMPL(__imp__sub_830A8C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A8C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830A8CB0;
	sub_82A0C710(ctx, base);
	// addi r31,r3,68
	ctx.r31.s64 = ctx.r3.s64 + 68;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,255
	ctx.r9.s64 = 255;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x825832e0
	ctx.lr = 0x830A8CCC;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a8d14
	if (cr6.eq) goto loc_830A8D14;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x830a8d04
	if (cr6.eq) goto loc_830A8D04;
	// bl 0x82a477e0
	ctx.lr = 0x830A8CEC;
	sub_82A477E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830A8D04:
	// bl 0x82a477e0
	ctx.lr = 0x830A8D08;
	sub_82A477E0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830A8D14:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8D20"))) PPC_WEAK_FUNC(sub_830A8D20);
PPC_FUNC_IMPL(__imp__sub_830A8D20) {
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
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x830A8D3C;
	sub_82A22C10(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8D50"))) PPC_WEAK_FUNC(sub_830A8D50);
PPC_FUNC_IMPL(__imp__sub_830A8D50) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830A8D70;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830a8d94
	if (!cr6.gt) goto loc_830A8D94;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830a8d8c
	if (!cr6.gt) goto loc_830A8D8C;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830a8d94
	if (!cr6.eq) goto loc_830A8D94;
loc_830A8D8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830a8d98
	goto loc_830A8D98;
loc_830A8D94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A8D98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a8dc8
	if (cr6.eq) goto loc_830A8DC8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r9,r11,26292
	ctx.r9.u64 = ctx.r11.u64 | 26292;
	// ldx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
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
loc_830A8DC8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830A8DF0"))) PPC_WEAK_FUNC(sub_830A8DF0);
PPC_FUNC_IMPL(__imp__sub_830A8DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,22272
	ctx.r10.s64 = ctx.r10.s64 + 22272;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830a8e4c
	if (cr6.eq) goto loc_830A8E4C;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a8e34
	if (cr6.lt) goto loc_830A8E34;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830a8e34
	if (!cr6.lt) goto loc_830A8E34;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a8e34
	if (cr6.lt) goto loc_830A8E34;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a8e38
	if (cr6.lt) goto loc_830A8E38;
loc_830A8E34:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A8E38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a8e4c
	if (cr6.eq) goto loc_830A8E4C;
	// ld r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 20);
	// blr 
	return;
loc_830A8E4C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8E64"))) PPC_WEAK_FUNC(sub_830A8E64);
PPC_FUNC_IMPL(__imp__sub_830A8E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8E68"))) PPC_WEAK_FUNC(sub_830A8E68);
PPC_FUNC_IMPL(__imp__sub_830A8E68) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_830A8E94:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830A8EA0;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830a8ec4
	if (!cr6.gt) goto loc_830A8EC4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830a8ebc
	if (!cr6.gt) goto loc_830A8EBC;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830a8ec4
	if (!cr6.eq) goto loc_830A8EC4;
loc_830A8EBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830a8ec8
	goto loc_830A8EC8;
loc_830A8EC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A8EC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a8ee8
	if (!cr6.eq) goto loc_830A8EE8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x830a8e94
	if (cr6.lt) goto loc_830A8E94;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x830a8eec
	goto loc_830A8EEC;
loc_830A8EE8:
	// ld r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
loc_830A8EEC:
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

__attribute__((alias("__imp__sub_830A8F04"))) PPC_WEAK_FUNC(sub_830A8F04);
PPC_FUNC_IMPL(__imp__sub_830A8F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8F08"))) PPC_WEAK_FUNC(sub_830A8F08);
PPC_FUNC_IMPL(__imp__sub_830A8F08) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830A8F20;
	sub_82A22B40(ctx, base);
	// ld r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A8F34"))) PPC_WEAK_FUNC(sub_830A8F34);
PPC_FUNC_IMPL(__imp__sub_830A8F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8F38"))) PPC_WEAK_FUNC(sub_830A8F38);
PPC_FUNC_IMPL(__imp__sub_830A8F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,255
	ctx.r4.s64 = 255;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,26124
	ctx.r11.s64 = ctx.r11.s64 + 26124;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a8f64
	if (!cr6.eq) goto loc_830A8F64;
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x830a8f68
	if (cr6.eq) goto loc_830A8F68;
loc_830A8F64:
	// li r10,1
	ctx.r10.s64 = 1;
loc_830A8F68:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830a8f78
	if (cr6.eq) goto loc_830A8F78;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_830A8F78:
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8F7C"))) PPC_WEAK_FUNC(sub_830A8F7C);
PPC_FUNC_IMPL(__imp__sub_830A8F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8F80"))) PPC_WEAK_FUNC(sub_830A8F80);
PPC_FUNC_IMPL(__imp__sub_830A8F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,255
	ctx.r4.s64 = 255;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,26124
	ctx.r11.s64 = ctx.r11.s64 + 26124;
	// lbz r10,13(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a8fac
	if (!cr6.eq) goto loc_830A8FAC;
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x830a8fb0
	if (cr6.eq) goto loc_830A8FB0;
loc_830A8FAC:
	// li r10,1
	ctx.r10.s64 = 1;
loc_830A8FB0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830a8fc0
	if (cr6.eq) goto loc_830A8FC0;
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_830A8FC0:
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A8FC4"))) PPC_WEAK_FUNC(sub_830A8FC4);
PPC_FUNC_IMPL(__imp__sub_830A8FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A8FC8"))) PPC_WEAK_FUNC(sub_830A8FC8);
PPC_FUNC_IMPL(__imp__sub_830A8FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A8FD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82a22a30
	ctx.lr = 0x830A8FF4;
	sub_82A22A30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830a9038
	if (!cr6.gt) goto loc_830A9038;
loc_830A9004:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82a229e8
	ctx.lr = 0x830A9014;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830a902c
	if (cr6.eq) goto loc_830A902C;
	// lbz r11,95(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 95);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9044
	if (cr6.eq) goto loc_830A9044;
loc_830A902C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, xer);
	// blt cr6,0x830a9004
	if (cr6.lt) goto loc_830A9004;
loc_830A9038:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830A9044:
	// ld r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 28);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A9050"))) PPC_WEAK_FUNC(sub_830A9050);
PPC_FUNC_IMPL(__imp__sub_830A9050) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r10,r10,23440
	ctx.r10.u64 = ctx.r10.u64 | 23440;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A9064"))) PPC_WEAK_FUNC(sub_830A9064);
PPC_FUNC_IMPL(__imp__sub_830A9064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9068"))) PPC_WEAK_FUNC(sub_830A9068);
PPC_FUNC_IMPL(__imp__sub_830A9068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830A9070;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x830A908C;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a90b8
	if (cr6.lt) goto loc_830A90B8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830a90b8
	if (!cr6.lt) goto loc_830A90B8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a90b8
	if (cr6.lt) goto loc_830A90B8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a90bc
	if (cr6.lt) goto loc_830A90BC;
loc_830A90B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A90BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a90d8
	if (cr6.eq) goto loc_830A90D8;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_830A90D8:
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r25,255
	ctx.r25.s64 = 255;
	// addis r27,r10,1
	ctx.r27.s64 = ctx.r10.s64 + 65536;
	// addis r28,r10,1
	ctx.r28.s64 = ctx.r10.s64 + 65536;
	// addi r27,r27,20428
	ctx.r27.s64 = ctx.r27.s64 + 20428;
	// addi r28,r28,20120
	ctx.r28.s64 = ctx.r28.s64 + 20120;
	// lfs f31,26160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26160);
	ctx.f31.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// subf r26,r27,r28
	ctx.r26.s64 = ctx.r28.s64 - ctx.r27.s64;
loc_830A9104:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// blt cr6,0x830a9114
	if (cr6.lt) goto loc_830A9114;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_830A9114:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x830a9128
	if (cr6.lt) goto loc_830A9128;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_830A9128:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// bne cr6,0x830a9198
	if (!cr6.eq) goto loc_830A9198;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830a9148
	if (cr6.lt) goto loc_830A9148;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a914c
	if (cr6.lt) goto loc_830A914C;
loc_830A9148:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A914C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9198
	if (cr6.eq) goto loc_830A9198;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830a916c
	if (cr6.lt) goto loc_830A916C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a9170
	if (cr6.lt) goto loc_830A9170;
loc_830A916C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A9170:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9198
	if (cr6.eq) goto loc_830A9198;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ca600
	ctx.lr = 0x830A9188;
	sub_825CA600(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x830a9198
	if (!cr6.lt) goto loc_830A9198;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_830A9198:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x830a9104
	if (cr6.lt) goto loc_830A9104;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A91B4;
	sub_82A2A558(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A91C0"))) PPC_WEAK_FUNC(sub_830A91C0);
PPC_FUNC_IMPL(__imp__sub_830A91C0) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x830a9240
	if (cr6.eq) goto loc_830A9240;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a227f0
	ctx.lr = 0x830A91FC;
	sub_82A227F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// bne cr6,0x830a9220
	if (!cr6.eq) goto loc_830A9220;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x830a9284
	goto loc_830A9284;
loc_830A9220:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 & ctx.r10.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A923C;
	sub_82A2A558(ctx, base);
	// b 0x830a9284
	goto loc_830A9284;
loc_830A9240:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_830A9254:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// bl 0x82a22b40
	ctx.lr = 0x830A9260;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// bne cr6,0x830a9280
	if (!cr6.eq) goto loc_830A9280;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// blt cr6,0x830a9254
	if (cr6.lt) goto loc_830A9254;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x830a9284
	goto loc_830A9284;
loc_830A9280:
	// ld r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 4);
loc_830A9284:
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

__attribute__((alias("__imp__sub_830A929C"))) PPC_WEAK_FUNC(sub_830A929C);
PPC_FUNC_IMPL(__imp__sub_830A929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A92A0"))) PPC_WEAK_FUNC(sub_830A92A0);
PPC_FUNC_IMPL(__imp__sub_830A92A0) {
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
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830A92C0;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830a92f0
	if (cr6.eq) goto loc_830A92F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830A92D8;
	sub_82A229E8(ctx, base);
	// ld r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
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
loc_830A92F0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830A9318"))) PPC_WEAK_FUNC(sub_830A9318);
PPC_FUNC_IMPL(__imp__sub_830A9318) {
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
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a22a30
	ctx.lr = 0x830A9338;
	sub_82A22A30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x830a9368
	if (cr6.eq) goto loc_830A9368;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a229e8
	ctx.lr = 0x830A9350;
	sub_82A229E8(ctx, base);
	// ld r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
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
loc_830A9368:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_830A9390"))) PPC_WEAK_FUNC(sub_830A9390);
PPC_FUNC_IMPL(__imp__sub_830A9390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A9398;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,255
	ctx.r30.s64 = 255;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830a93e8
	if (!cr6.eq) goto loc_830A93E8;
	// lwz r11,5388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5388);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x830a93e8
	if (!cr6.eq) goto loc_830A93E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ab00
	ctx.lr = 0x830A93D0;
	sub_82A1AB00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a93e8
	if (cr6.eq) goto loc_830A93E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ab10
	ctx.lr = 0x830A93E4;
	sub_82A1AB10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830A93E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A93F4;
	sub_82A2A558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A93FC"))) PPC_WEAK_FUNC(sub_830A93FC);
PPC_FUNC_IMPL(__imp__sub_830A93FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9400"))) PPC_WEAK_FUNC(sub_830A9400);
PPC_FUNC_IMPL(__imp__sub_830A9400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A9408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,255
	ctx.r30.s64 = 255;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,4460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4460);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x830a9458
	if (!cr6.eq) goto loc_830A9458;
	// lwz r11,5388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5388);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x830a9458
	if (!cr6.eq) goto loc_830A9458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ab00
	ctx.lr = 0x830A9440;
	sub_82A1AB00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9458
	if (cr6.eq) goto loc_830A9458;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1ab20
	ctx.lr = 0x830A9454;
	sub_82A1AB20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_830A9458:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9464;
	sub_82A2A558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A946C"))) PPC_WEAK_FUNC(sub_830A946C);
PPC_FUNC_IMPL(__imp__sub_830A946C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9470"))) PPC_WEAK_FUNC(sub_830A9470);
PPC_FUNC_IMPL(__imp__sub_830A9470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,24608
	ctx.r10.s64 = ctx.r10.s64 + 24608;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,4460(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4460);
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x830a9530
	if (!cr6.eq) goto loc_830A9530;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830a9530
	if (cr6.eq) goto loc_830A9530;
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830a94dc
	if (!cr6.eq) goto loc_830A94DC;
	// srawi r9,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x830a94dc
	if (!cr6.eq) goto loc_830A94DC;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830a94e0
	if (cr6.eq) goto loc_830A94E0;
loc_830A94DC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830A94E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9530
	if (cr6.eq) goto loc_830A9530;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a9518
	if (cr6.lt) goto loc_830A9518;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830a9518
	if (!cr6.lt) goto loc_830A9518;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a9518
	if (cr6.lt) goto loc_830A9518;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a951c
	if (cr6.lt) goto loc_830A951C;
loc_830A9518:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A951C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9530
	if (cr6.eq) goto loc_830A9530;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// blr 
	return;
loc_830A9530:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// ld r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830A9548"))) PPC_WEAK_FUNC(sub_830A9548);
PPC_FUNC_IMPL(__imp__sub_830A9548) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,-3564(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 292);
	// lwz r9,4456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4456);
	// lwz r4,5756(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5756);
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x830a9590
	if (!cr6.eq) goto loc_830A9590;
	// lwz r11,5340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5340);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(ctx.r11.s32, 44, xer);
	// bne cr6,0x830a9590
	if (!cr6.eq) goto loc_830A9590;
	// lwz r3,352(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// bl 0x82a2c200
	ctx.lr = 0x830A958C;
	sub_82A2C200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_830A9590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9598;
	sub_82A2A558(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830A95AC"))) PPC_WEAK_FUNC(sub_830A95AC);
PPC_FUNC_IMPL(__imp__sub_830A95AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A95B0"))) PPC_WEAK_FUNC(sub_830A95B0);
PPC_FUNC_IMPL(__imp__sub_830A95B0) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a95f0
	if (cr6.eq) goto loc_830A95F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a22a50
	ctx.lr = 0x830A95D0;
	sub_82A22A50(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// beq cr6,0x830a95f0
	if (cr6.eq) goto loc_830A95F0;
	// ld r3,296(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 296);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830A95F0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830A9614"))) PPC_WEAK_FUNC(sub_830A9614);
PPC_FUNC_IMPL(__imp__sub_830A9614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9618"))) PPC_WEAK_FUNC(sub_830A9618);
PPC_FUNC_IMPL(__imp__sub_830A9618) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4456(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4456);
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x830a9654
	if (!cr6.eq) goto loc_830A9654;
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// bl 0x82a2c200
	ctx.lr = 0x830A964C;
	sub_82A2C200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830a9658
	goto loc_830A9658;
loc_830A9654:
	// lwz r4,5756(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5756);
loc_830A9658:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9660;
	sub_82A2A558(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830A9674"))) PPC_WEAK_FUNC(sub_830A9674);
PPC_FUNC_IMPL(__imp__sub_830A9674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9678"))) PPC_WEAK_FUNC(sub_830A9678);
PPC_FUNC_IMPL(__imp__sub_830A9678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830A9680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,255
	ctx.r31.s64 = 255;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r9,5360(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5360);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r29,r8,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a0c710
	ctx.lr = 0x830A96AC;
	sub_82A0C710(ctx, base);
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// addi r8,r3,3612
	ctx.r8.s64 = ctx.r3.s64 + 3612;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r6,r29,11
	ctx.r6.s64 = ctx.r29.s64 * 11;
	// ori r7,r11,35747
	ctx.r7.u64 = ctx.r11.u64 | 35747;
loc_830A96C0:
	// add. r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x830a96d4
	if (cr0.lt) goto loc_830A96D4;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a96d8
	if (cr6.lt) goto loc_830A96D8;
loc_830A96D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A96D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a973c
	if (cr6.eq) goto loc_830A973C;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830a971c
	if (cr6.lt) goto loc_830A971C;
	// cmpwi cr6,r10,22
	cr6.compare<int32_t>(ctx.r10.s32, 22, xer);
	// bge cr6,0x830a971c
	if (!cr6.lt) goto loc_830A971C;
	// mulhwu r11,r10,r7
	ctx.r11.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// mulli r4,r5,11
	ctx.r4.s64 = ctx.r5.s64 * 11;
	// subf r11,r4,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r4.s64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x830a9730
	if (!cr6.lt) goto loc_830A9730;
	// addi r11,r11,3815
	ctx.r11.s64 = ctx.r11.s64 + 3815;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// b 0x830a9734
	goto loc_830A9734;
loc_830A971C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r11,r11,3815
	ctx.r11.s64 = ctx.r11.s64 + 3815;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// b 0x830a9734
	goto loc_830A9734;
loc_830A9730:
	// lwz r11,15260(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15260);
loc_830A9734:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830a975c
	if (cr6.eq) goto loc_830A975C;
loc_830A973C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// blt cr6,0x830a96c0
	if (cr6.lt) goto loc_830A96C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9754;
	sub_82A2A558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830A975C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A976C;
	sub_82A2A558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A9774"))) PPC_WEAK_FUNC(sub_830A9774);
PPC_FUNC_IMPL(__imp__sub_830A9774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9778"))) PPC_WEAK_FUNC(sub_830A9778);
PPC_FUNC_IMPL(__imp__sub_830A9778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830a97a4
	if (cr6.eq) goto loc_830A97A4;
	// addic r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,11
	ctx.r9.s64 = 11;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_830A97A4:
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A97A8"))) PPC_WEAK_FUNC(sub_830A97A8);
PPC_FUNC_IMPL(__imp__sub_830A97A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x830a97d4
	if (cr6.eq) goto loc_830A97D4;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r9,11
	ctx.r9.s64 = 11;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_830A97D4:
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A97D8"))) PPC_WEAK_FUNC(sub_830A97D8);
PPC_FUNC_IMPL(__imp__sub_830A97D8) {
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
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c710
	ctx.lr = 0x830A9804;
	sub_82A0C710(ctx, base);
	// lbz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f13,8144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x830a983c
	if (cr6.gt) goto loc_830A983C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_830A983C:
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r9,11
	ctx.r9.s64 = 11;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 & ctx.r9.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9854;
	sub_82A2A558(ctx, base);
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

__attribute__((alias("__imp__sub_830A986C"))) PPC_WEAK_FUNC(sub_830A986C);
PPC_FUNC_IMPL(__imp__sub_830A986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9870"))) PPC_WEAK_FUNC(sub_830A9870);
PPC_FUNC_IMPL(__imp__sub_830A9870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r10,11
	ctx.r10.s64 = 11;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r8,5360(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5360);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A9894"))) PPC_WEAK_FUNC(sub_830A9894);
PPC_FUNC_IMPL(__imp__sub_830A9894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9898"))) PPC_WEAK_FUNC(sub_830A9898);
PPC_FUNC_IMPL(__imp__sub_830A9898) {
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
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22ac0
	ctx.lr = 0x830A98BC;
	sub_82A22AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x830a98dc
	if (cr6.gt) goto loc_830A98DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x830a98fc
	goto loc_830A98FC;
loc_830A98DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22a50
	ctx.lr = 0x830A98E8;
	sub_82A22A50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,324(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	// bl 0x82a2a610
	ctx.lr = 0x830A98FC;
	sub_82A2A610(ctx, base);
loc_830A98FC:
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

__attribute__((alias("__imp__sub_830A9914"))) PPC_WEAK_FUNC(sub_830A9914);
PPC_FUNC_IMPL(__imp__sub_830A9914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9918"))) PPC_WEAK_FUNC(sub_830A9918);
PPC_FUNC_IMPL(__imp__sub_830A9918) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830A9938;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82919698
	ctx.lr = 0x830A9940;
	sub_82919698(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830A9950;
	sub_82A225D0(ctx, base);
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// bl 0x82919698
	ctx.lr = 0x830A9960;
	sub_82919698(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x830a9980
	if (!cr6.lt) goto loc_830A9980;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A997C;
	sub_82A2A558(ctx, base);
	// b 0x830a99a8
	goto loc_830A99A8;
loc_830A9980:
	// ble cr6,0x830a9994
	if (!cr6.gt) goto loc_830A9994;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9990;
	sub_82A2A558(ctx, base);
	// b 0x830a99a8
	goto loc_830A99A8;
loc_830A9994:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_830A99A8:
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

__attribute__((alias("__imp__sub_830A99C0"))) PPC_WEAK_FUNC(sub_830A99C0);
PPC_FUNC_IMPL(__imp__sub_830A99C0) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a225d0
	ctx.lr = 0x830A99E0;
	sub_82A225D0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82919698
	ctx.lr = 0x830A99E8;
	sub_82919698(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a225d0
	ctx.lr = 0x830A99F8;
	sub_82A225D0(ctx, base);
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r3,-29136
	ctx.r3.s64 = ctx.r3.s64 + -29136;
	// bl 0x82919698
	ctx.lr = 0x830A9A08;
	sub_82919698(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x830a9a28
	if (!cr6.gt) goto loc_830A9A28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9A24;
	sub_82A2A558(ctx, base);
	// b 0x830a9a50
	goto loc_830A9A50;
loc_830A9A28:
	// bge cr6,0x830a9a3c
	if (!cr6.lt) goto loc_830A9A3C;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9A38;
	sub_82A2A558(ctx, base);
	// b 0x830a9a50
	goto loc_830A9A50;
loc_830A9A3C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_830A9A50:
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

__attribute__((alias("__imp__sub_830A9A68"))) PPC_WEAK_FUNC(sub_830A9A68);
PPC_FUNC_IMPL(__imp__sub_830A9A68) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r30,255
	ctx.r30.s64 = 255;
	// bl 0x82a22b40
	ctx.lr = 0x830A9A90;
	sub_82A22B40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830a9ab4
	if (!cr6.gt) goto loc_830A9AB4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// ble cr6,0x830a9aac
	if (!cr6.gt) goto loc_830A9AAC;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(ctx.r11.s32, 16, xer);
	// bne cr6,0x830a9ab4
	if (!cr6.eq) goto loc_830A9AB4;
loc_830A9AAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x830a9ab8
	goto loc_830A9AB8;
loc_830A9AB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A9AB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9ae8
	if (cr6.eq) goto loc_830A9AE8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r9,r10,22488
	ctx.r9.u64 = ctx.r10.u64 | 22488;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x830a9ae8
	if (!cr6.gt) goto loc_830A9AE8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,20424
	ctx.r9.u64 = ctx.r10.u64 | 20424;
	// lwzx r30,r11,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_830A9AE8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9AF4;
	sub_82A2A558(ctx, base);
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

__attribute__((alias("__imp__sub_830A9B0C"))) PPC_WEAK_FUNC(sub_830A9B0C);
PPC_FUNC_IMPL(__imp__sub_830A9B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9B10"))) PPC_WEAK_FUNC(sub_830A9B10);
PPC_FUNC_IMPL(__imp__sub_830A9B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r8,r11,24360
	ctx.r8.u64 = ctx.r11.u64 | 24360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x830a9b44
	if (!cr6.gt) goto loc_830A9B44;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// ble cr6,0x830a9b40
	if (!cr6.gt) goto loc_830A9B40;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bne cr6,0x830a9b44
	if (!cr6.eq) goto loc_830A9B44;
loc_830A9B40:
	// li r9,1
	ctx.r9.s64 = 1;
loc_830A9B44:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9b5c
	if (cr6.eq) goto loc_830A9B5C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,24368
	ctx.r9.u64 = ctx.r11.u64 | 24368;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_830A9B5C:
	// b 0x82a2a558
	sub_82A2A558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A9B60"))) PPC_WEAK_FUNC(sub_830A9B60);
PPC_FUNC_IMPL(__imp__sub_830A9B60) {
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
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a22c10
	ctx.lr = 0x830A9B84;
	sub_82A22C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a9bb0
	if (cr6.lt) goto loc_830A9BB0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830a9bb0
	if (!cr6.lt) goto loc_830A9BB0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a9bb0
	if (cr6.lt) goto loc_830A9BB0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a9bb4
	if (cr6.lt) goto loc_830A9BB4;
loc_830A9BB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A9BB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9bd4
	if (cr6.eq) goto loc_830A9BD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a2b388
	ctx.lr = 0x830A9BCC;
	sub_82A2B388(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830a9be4
	goto loc_830A9BE4;
loc_830A9BD4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r9,r11,20424
	ctx.r9.u64 = ctx.r11.u64 | 20424;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_830A9BE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9BEC;
	sub_82A2A558(ctx, base);
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

__attribute__((alias("__imp__sub_830A9C00"))) PPC_WEAK_FUNC(sub_830A9C00);
PPC_FUNC_IMPL(__imp__sub_830A9C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830A9C08;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,132(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r27,255
	ctx.r27.s64 = 255;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82a22c10
	ctx.lr = 0x830A9C38;
	sub_82A22C10(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x830a9c64
	if (cr6.lt) goto loc_830A9C64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bge cr6,0x830a9c64
	if (!cr6.lt) goto loc_830A9C64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830a9c64
	if (cr6.lt) goto loc_830A9C64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a9c68
	if (cr6.lt) goto loc_830A9C68;
loc_830A9C64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A9C68:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9c90
	if (cr6.eq) goto loc_830A9C90;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// bne cr6,0x830a9d50
	if (!cr6.eq) goto loc_830A9D50;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a2b388
	ctx.lr = 0x830A9C88;
	sub_82A2B388(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x830a9d50
	goto loc_830A9D50;
loc_830A9C90:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addis r29,r10,1
	ctx.r29.s64 = ctx.r10.s64 + 65536;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// addi r29,r29,20428
	ctx.r29.s64 = ctx.r29.s64 + 20428;
	// bge cr6,0x830a9cb8
	if (!cr6.lt) goto loc_830A9CB8;
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x830a9cbc
	goto loc_830A9CBC;
loc_830A9CB8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_830A9CBC:
	// lis r10,-31763
	ctx.r10.s64 = -2081619968;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830A9CD0;
	sub_82A0C710(ctx, base);
	// lwz r31,44(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830a9ce8
	if (cr6.lt) goto loc_830A9CE8;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a9cec
	if (cr6.lt) goto loc_830A9CEC;
loc_830A9CE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A9CEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9d50
	if (cr6.eq) goto loc_830A9D50;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830a9d0c
	if (cr6.lt) goto loc_830A9D0C;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a9d10
	if (cr6.lt) goto loc_830A9D10;
loc_830A9D0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A9D10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9d50
	if (cr6.eq) goto loc_830A9D50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ca600
	ctx.lr = 0x830A9D28;
	sub_825CA600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825ca600
	ctx.lr = 0x830A9D38;
	sub_825CA600(ctx, base);
	// fsubs f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,20056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x830a9d50
	if (!cr6.gt) goto loc_830A9D50;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_830A9D50:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9D5C;
	sub_82A2A558(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A9D68"))) PPC_WEAK_FUNC(sub_830A9D68);
PPC_FUNC_IMPL(__imp__sub_830A9D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830A9D70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x830a9dac
	if (cr6.eq) goto loc_830A9DAC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,21452
	ctx.r9.u64 = ctx.r11.u64 | 21452;
	// ori r8,r10,21604
	ctx.r8.u64 = ctx.r10.u64 | 21604;
	// lwzx r31,r29,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r30,r29,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x830a9dc8
	if (!cr6.eq) goto loc_830A9DC8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x830a9df4
	if (!cr6.eq) goto loc_830A9DF4;
loc_830A9DAC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A9DC8:
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// bne cr6,0x830a9df4
	if (!cr6.eq) goto loc_830A9DF4;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x830a9e94
	if (!cr6.eq) goto loc_830A9E94;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830A9DF4:
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(ctx.r30.s32, 7, xer);
	// bne cr6,0x830a9e04
	if (!cr6.eq) goto loc_830A9E04;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830a9e98
	goto loc_830A9E98;
loc_830A9E04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a40f18
	ctx.lr = 0x830A9E10;
	sub_82A40F18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9e24
	if (cr6.eq) goto loc_830A9E24;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830a9e98
	goto loc_830A9E98;
loc_830A9E24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a40f18
	ctx.lr = 0x830A9E30;
	sub_82A40F18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830a9e94
	if (!cr6.eq) goto loc_830A9E94;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c710
	ctx.lr = 0x830A9E50;
	sub_82A0C710(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830a9dac
	if (cr6.eq) goto loc_830A9DAC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a9dac
	if (cr6.eq) goto loc_830A9DAC;
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f13,8144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x830a9e98
	if (cr6.gt) goto loc_830A9E98;
loc_830A9E94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830A9E98:
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// subfe r5,r9,r7
	temp.u8 = (~ctx.r9.u32 + ctx.r7.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// ori r4,r6,21472
	ctx.r4.u64 = ctx.r6.u64 | 21472;
	// and r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 & ctx.r11.u64;
	// mulli r10,r3,152
	ctx.r10.s64 = ctx.r3.s64 * 152;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwzx r4,r10,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830a9ed8
	if (cr6.lt) goto loc_830A9ED8;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830a9edc
	if (cr6.lt) goto loc_830A9EDC;
loc_830A9ED8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830A9EDC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a9ef8
	if (!cr6.eq) goto loc_830A9EF8;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r9,11
	ctx.r9.s64 = 11;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_830A9EF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9F00;
	sub_82A2A558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A9F08"))) PPC_WEAK_FUNC(sub_830A9F08);
PPC_FUNC_IMPL(__imp__sub_830A9F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A9F10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r11,22620
	ctx.r9.u64 = ctx.r11.u64 | 22620;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830a9f4c
	if (cr6.lt) goto loc_830A9F4C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A9F4C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a29d30
	ctx.lr = 0x830A9F5C;
	sub_82A29D30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// mulli r28,r31,11
	ctx.r28.s64 = ctx.r31.s64 * 11;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
loc_830A9F6C:
	// add. r31,r28,r30
	ctx.r31.u64 = ctx.r28.u64 + ctx.r30.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt 0x830a9f80
	if (cr0.lt) goto loc_830A9F80;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830a9f84
	if (cr6.lt) goto loc_830A9F84;
loc_830A9F80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830A9F84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830a9fb4
	if (cr6.eq) goto loc_830A9FB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c760
	ctx.lr = 0x830A9F9C;
	sub_82A0C760(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830a9fb4
	if (cr6.eq) goto loc_830A9FB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830a9fd4
	if (!cr6.eq) goto loc_830A9FD4;
loc_830A9FB4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x830a9f6c
	if (cr6.lt) goto loc_830A9F6C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9FCC;
	sub_82A2A558(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830A9FD4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830A9FE4;
	sub_82A2A558(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830A9FEC"))) PPC_WEAK_FUNC(sub_830A9FEC);
PPC_FUNC_IMPL(__imp__sub_830A9FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830A9FF0"))) PPC_WEAK_FUNC(sub_830A9FF0);
PPC_FUNC_IMPL(__imp__sub_830A9FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x830A9FF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r27,192(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x830aa124
	if (cr6.eq) goto loc_830AA124;
	// lwz r10,6132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bge cr6,0x830aa068
	if (!cr6.lt) goto loc_830AA068;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x830aa068
	if (!cr6.eq) goto loc_830AA068;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,55908
	ctx.r9.u64 = ctx.r11.u64 | 55908;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830aa050
	if (cr6.eq) goto loc_830AA050;
loc_830AA044:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830AA050:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r9,r11,64156
	ctx.r9.u64 = ctx.r11.u64 | 64156;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x830aa144
	if (!cr6.eq) goto loc_830AA144;
loc_830AA068:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a32f58
	ctx.lr = 0x830AA074;
	sub_82A32F58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a32f58
	ctx.lr = 0x830AA084;
	sub_82A32F58(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aa138
	if (cr6.eq) goto loc_830AA138;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830aa130
	if (cr6.eq) goto loc_830AA130;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r30,24
	ctx.r30.s64 = 24;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830AA0A8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x830aa0b8
	if (cr6.lt) goto loc_830AA0B8;
	// li r11,23
	ctx.r11.s64 = 23;
loc_830AA0B8:
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825b2f28
	ctx.lr = 0x830AA0C8;
	sub_825B2F28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aa10c
	if (!cr6.eq) goto loc_830AA10C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x830aa10c
	if (cr6.eq) goto loc_830AA10C;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x830aa10c
	if (cr6.eq) goto loc_830AA10C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bge cr6,0x830aa104
	if (!cr6.lt) goto loc_830AA104;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_830AA104:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830aa118
	if (cr6.eq) goto loc_830AA118;
loc_830AA10C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x830aa0a8
	if (cr6.lt) goto loc_830AA0A8;
loc_830AA118:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(ctx.r28.s32, 2, xer);
	// bne cr6,0x830aa128
	if (!cr6.eq) goto loc_830AA128;
loc_830AA124:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_830AA128:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_830AA130:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aa044
	if (!cr6.eq) goto loc_830AA044;
loc_830AA138:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aa124
	if (cr6.eq) goto loc_830AA124;
loc_830AA144:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AA150"))) PPC_WEAK_FUNC(sub_830AA150);
PPC_FUNC_IMPL(__imp__sub_830AA150) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,-3564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// bl 0x82a0c788
	ctx.lr = 0x830AA17C;
	sub_82A0C788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830aa21c
	if (cr6.eq) goto loc_830AA21C;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f1,19440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a36180
	ctx.lr = 0x830AA198;
	sub_82A36180(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// lfs f4,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f3,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825c3ec0
	ctx.lr = 0x830AA1BC;
	sub_825C3EC0(ctx, base);
	// addi r8,r31,21464
	ctx.r8.s64 = ctx.r31.s64 + 21464;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,32668
	ctx.r11.s64 = ctx.r11.s64 + 32668;
	// lfsx f13,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bge cr6,0x830aa1f0
	if (!cr6.lt) goto loc_830AA1F0;
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// b 0x830aa1fc
	goto loc_830AA1FC;
loc_830AA1F0:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x830aa1fc
	if (cr6.lt) goto loc_830AA1FC;
	// fsubs f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
loc_830AA1FC:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825ce9f8
	ctx.lr = 0x830AA204;
	sub_825CE9F8(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x830aa220
	if (cr6.lt) goto loc_830AA220;
loc_830AA21C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830AA220:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AA23C"))) PPC_WEAK_FUNC(sub_830AA23C);
PPC_FUNC_IMPL(__imp__sub_830AA23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AA240"))) PPC_WEAK_FUNC(sub_830AA240);
PPC_FUNC_IMPL(__imp__sub_830AA240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x830AA248;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,255
	ctx.r24.s64 = 255;
	// li r25,2
	ctx.r25.s64 = 2;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31763
	ctx.r29.s64 = -2081619968;
loc_830AA26C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c710
	ctx.lr = 0x830AA278;
	sub_82A0C710(ctx, base);
	// addi r26,r3,68
	ctx.r26.s64 = ctx.r3.s64 + 68;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825832e0
	ctx.lr = 0x830AA288;
	sub_825832E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830aa31c
	if (cr6.eq) goto loc_830AA31C;
	// clrlwi r23,r22,24
	ctx.r23.u64 = ctx.r22.u32 & 0xFF;
loc_830AA294:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x830aa2b0
	if (cr6.eq) goto loc_830AA2B0;
	// bl 0x82a477e0
	ctx.lr = 0x830AA2A8;
	sub_82A477E0(ctx, base);
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x830aa2b8
	goto loc_830AA2B8;
loc_830AA2B0:
	// bl 0x82a477e0
	ctx.lr = 0x830AA2B4;
	sub_82A477E0(ctx, base);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_830AA2B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-3564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// bl 0x82a0c738
	ctx.lr = 0x830AA2C4;
	sub_82A0C738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a16248
	ctx.lr = 0x830AA2CC;
	sub_82A16248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82be4eb8
	ctx.lr = 0x830AA2D8;
	sub_82BE4EB8(ctx, base);
	// lwz r11,-3564(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -3564);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,6132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82a50178
	ctx.lr = 0x830AA2F0;
	sub_82A50178(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bge cr6,0x830aa308
	if (!cr6.lt) goto loc_830AA308;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_830AA308:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bl 0x825832e0
	ctx.lr = 0x830AA314;
	sub_825832E0(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x830aa294
	if (cr6.lt) goto loc_830AA294;
loc_830AA31C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(ctx.r30.s32, 2, xer);
	// blt cr6,0x830aa26c
	if (cr6.lt) goto loc_830AA26C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(ctx.r25.s32, 2, xer);
	// beq cr6,0x830aa340
	if (cr6.eq) goto loc_830AA340;
	// cmpwi cr6,r24,255
	cr6.compare<int32_t>(ctx.r24.s32, 255, xer);
	// beq cr6,0x830aa340
	if (cr6.eq) goto loc_830AA340;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
loc_830AA340:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AA34C"))) PPC_WEAK_FUNC(sub_830AA34C);
PPC_FUNC_IMPL(__imp__sub_830AA34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AA350"))) PPC_WEAK_FUNC(sub_830AA350);
PPC_FUNC_IMPL(__imp__sub_830AA350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830AA358;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31763
	ctx.r30.s64 = -2081619968;
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r7,r11,19360
	ctx.r7.s64 = ctx.r11.s64 + 19360;
	// li r31,255
	ctx.r31.s64 = 255;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r29,19360(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 19360);
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// li r10,23472
	ctx.r10.s64 = 23472;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r11,6132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6132);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// addi r9,r11,560
	ctx.r9.s64 = ctx.r11.s64 + 560;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r5,r11,47264
	ctx.r5.u64 = ctx.r11.u64 | 47264;
loc_830AA3A0:
	// cmpwi cr6,r8,10
	cr6.compare<int32_t>(ctx.r8.s32, 10, xer);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x830aa3b0
	if (cr6.lt) goto loc_830AA3B0;
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
loc_830AA3B0:
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// beq cr6,0x830aa3d0
	if (cr6.eq) goto loc_830AA3D0;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,23632
	cr6.compare<uint32_t>(ctx.r10.u32, 23632, xer);
	// blt cr6,0x830aa3a0
	if (cr6.lt) goto loc_830AA3A0;
	// b 0x830aa3d8
	goto loc_830AA3D8;
loc_830AA3D0:
	// ld r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
loc_830AA3D8:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830aa3f4
	if (!cr6.eq) goto loc_830AA3F4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x830aa41c
	goto loc_830AA41C;
loc_830AA3F4:
	// lhz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x830aa414
	if (!cr6.eq) goto loc_830AA414;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830aa418
	if (cr6.eq) goto loc_830AA418;
loc_830AA414:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AA418:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830AA41C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aa43c
	if (cr6.eq) goto loc_830AA43C;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830AA43C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x830aa448
	goto loc_830AA448;
loc_830AA444:
	// lwz r3,-3564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -3564);
loc_830AA448:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a0c738
	ctx.lr = 0x830AA450;
	sub_82A0C738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a16890
	ctx.lr = 0x830AA458;
	sub_82A16890(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x830aa468
	if (cr6.eq) goto loc_830AA468;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// blt cr6,0x830aa480
	if (cr6.lt) goto loc_830AA480;
loc_830AA468:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x830aa444
	if (cr6.lt) goto loc_830AA444;
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830AA480:
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AA494"))) PPC_WEAK_FUNC(sub_830AA494);
PPC_FUNC_IMPL(__imp__sub_830AA494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AA498"))) PPC_WEAK_FUNC(sub_830AA498);
PPC_FUNC_IMPL(__imp__sub_830AA498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830AA4A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,255
	ctx.r29.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x830a9ff0
	ctx.lr = 0x830AA4C0;
	sub_830A9FF0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830aa5f0
	if (cr6.eq) goto loc_830AA5F0;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830AA4F8;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aa5f0
	if (cr6.eq) goto loc_830AA5F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aa240
	ctx.lr = 0x830AA510;
	sub_830AA240(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa540
	if (cr6.lt) goto loc_830AA540;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830aa540
	if (!cr6.lt) goto loc_830AA540;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa540
	if (cr6.lt) goto loc_830AA540;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aa544
	if (cr6.lt) goto loc_830AA544;
loc_830AA540:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AA544:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aa678
	if (!cr6.eq) goto loc_830AA678;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a8c90
	ctx.lr = 0x830AA560;
	sub_830A8C90(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa590
	if (cr6.lt) goto loc_830AA590;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830aa590
	if (!cr6.lt) goto loc_830AA590;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa590
	if (cr6.lt) goto loc_830AA590;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aa594
	if (cr6.lt) goto loc_830AA594;
loc_830AA590:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AA594:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aa678
	if (!cr6.eq) goto loc_830AA678;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a8c90
	ctx.lr = 0x830AA5B0;
	sub_830A8C90(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa5e0
	if (cr6.lt) goto loc_830AA5E0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830aa5e0
	if (!cr6.lt) goto loc_830AA5E0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa5e0
	if (cr6.lt) goto loc_830AA5E0;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aa5e4
	if (cr6.lt) goto loc_830AA5E4;
loc_830AA5E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AA5E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830AA5F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a229e8
	ctx.lr = 0x830AA600;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// bne cr6,0x830aa620
	if (!cr6.eq) goto loc_830AA620;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830AA620:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830aa650
	if (cr6.eq) goto loc_830AA650;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830AA650:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830aa674
	if (cr6.eq) goto loc_830AA674;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830AA674:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_830AA678:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AA680"))) PPC_WEAK_FUNC(sub_830AA680);
PPC_FUNC_IMPL(__imp__sub_830AA680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830AA688;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,255
	ctx.r29.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x830a9ff0
	ctx.lr = 0x830AA6A8;
	sub_830A9FF0(ctx, base);
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r27,r10,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r11,232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// lbz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r10,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830aa7d8
	if (cr6.eq) goto loc_830AA7D8;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82a17730
	ctx.lr = 0x830AA6E0;
	sub_82A17730(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aa7d8
	if (cr6.eq) goto loc_830AA7D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830aa240
	ctx.lr = 0x830AA6F8;
	sub_830AA240(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa728
	if (cr6.lt) goto loc_830AA728;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830aa728
	if (!cr6.lt) goto loc_830AA728;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa728
	if (cr6.lt) goto loc_830AA728;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aa72c
	if (cr6.lt) goto loc_830AA72C;
loc_830AA728:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AA72C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aa860
	if (!cr6.eq) goto loc_830AA860;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a8c90
	ctx.lr = 0x830AA748;
	sub_830A8C90(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa778
	if (cr6.lt) goto loc_830AA778;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830aa778
	if (!cr6.lt) goto loc_830AA778;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa778
	if (cr6.lt) goto loc_830AA778;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aa77c
	if (cr6.lt) goto loc_830AA77C;
loc_830AA778:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AA77C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aa860
	if (!cr6.eq) goto loc_830AA860;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830a8c90
	ctx.lr = 0x830AA798;
	sub_830A8C90(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa7c8
	if (cr6.lt) goto loc_830AA7C8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830aa7c8
	if (!cr6.lt) goto loc_830AA7C8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aa7c8
	if (cr6.lt) goto loc_830AA7C8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aa7cc
	if (cr6.lt) goto loc_830AA7CC;
loc_830AA7C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AA7CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830AA7D8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82a229e8
	ctx.lr = 0x830AA7E8;
	sub_82A229E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(ctx.r11.s32, 55, xer);
	// bne cr6,0x830aa808
	if (!cr6.eq) goto loc_830AA808;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830AA808:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830aa838
	if (cr6.eq) goto loc_830AA838;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830AA838:
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// beq cr6,0x830aa85c
	if (cr6.eq) goto loc_830AA85C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830AA85C:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_830AA860:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AA868"))) PPC_WEAK_FUNC(sub_830AA868);
PPC_FUNC_IMPL(__imp__sub_830AA868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AA870;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830a9ff0
	ctx.lr = 0x830AA880;
	sub_830A9FF0(ctx, base);
	// lis r31,-31763
	ctx.r31.s64 = -2081619968;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// lwz r3,6132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26828
	ctx.lr = 0x830AA894;
	sub_82A26828(ctx, base);
	// cmpwi cr6,r3,37
	cr6.compare<int32_t>(ctx.r3.s32, 37, xer);
	// bne cr6,0x830aa8c4
	if (!cr6.eq) goto loc_830AA8C4;
	// lwz r11,-3564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -3564);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,6132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6132);
	// bl 0x82a26a18
	ctx.lr = 0x830AA8B0;
	sub_82A26A18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// addi r10,r11,-4971
	ctx.r10.s64 = ctx.r11.s64 + -4971;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r30,r9,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_830AA8C4:
	// subfic r11,r30,0
	xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// li r9,11
	ctx.r9.s64 = 11;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// and r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 & ctx.r9.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830AA8DC;
	sub_82A2A558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AA8E4"))) PPC_WEAK_FUNC(sub_830AA8E4);
PPC_FUNC_IMPL(__imp__sub_830AA8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AA8E8"))) PPC_WEAK_FUNC(sub_830AA8E8);
PPC_FUNC_IMPL(__imp__sub_830AA8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830aa868
	ctx.lr = 0x830AA900;
	sub_830AA868(ctx, base);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r7,11
	ctx.r7.s64 = 11;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 & ctx.r7.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830AA920;
	sub_82A2A558(ctx, base);
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

__attribute__((alias("__imp__sub_830AA934"))) PPC_WEAK_FUNC(sub_830AA934);
PPC_FUNC_IMPL(__imp__sub_830AA934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AA938"))) PPC_WEAK_FUNC(sub_830AA938);
PPC_FUNC_IMPL(__imp__sub_830AA938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x830AA940;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31763
	ctx.r26.s64 = -2081619968;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r25,255
	ctx.r25.s64 = 255;
	// lwz r3,-3564(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82a0c710
	ctx.lr = 0x830AA964;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f13,8144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// li r29,0
	ctx.r29.s64 = 0;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x830aa99c
	if (cr6.lt) goto loc_830AA99C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_830AA99C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r28,r10,20120
	ctx.r28.u64 = ctx.r10.u64 | 20120;
	// lfs f31,-23488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f31.f64 = double(temp.f32);
loc_830AA9B0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bge cr6,0x830aa9dc
	if (!cr6.lt) goto loc_830AA9DC;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x830aa9dc
	if (!cr6.lt) goto loc_830AA9DC;
	// mulli r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 * 11;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x830aa9e0
	goto loc_830AA9E0;
loc_830AA9DC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_830AA9E0:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x830aa9f8
	if (cr6.lt) goto loc_830AA9F8;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aa9fc
	if (cr6.lt) goto loc_830AA9FC;
loc_830AA9F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AA9FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aaaa4
	if (cr6.eq) goto loc_830AAAA4;
	// lwz r11,-3564(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -3564);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blt cr6,0x830aaa24
	if (cr6.lt) goto loc_830AAA24;
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(ctx.r31.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aaa28
	if (cr6.lt) goto loc_830AAA28;
loc_830AAA24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAA28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aaa48
	if (cr6.eq) goto loc_830AAA48;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830aaa4c
	goto loc_830AAA4C;
loc_830AAA48:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAA4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aaaa4
	if (cr6.eq) goto loc_830AAAA4;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// bge cr6,0x830aaa7c
	if (!cr6.lt) goto loc_830AAA7C;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bge cr6,0x830aaa7c
	if (!cr6.lt) goto loc_830AAA7C;
	// mulli r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 * 11;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x830aaa80
	goto loc_830AAA80;
loc_830AAA7C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_830AAA80:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x830aaaa4
	if (cr6.gt) goto loc_830AAAA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830aa150
	ctx.lr = 0x830AAA98;
	sub_830AA150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aaabc
	if (!cr6.eq) goto loc_830AAABC;
loc_830AAAA4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x830aa9b0
	if (cr6.lt) goto loc_830AA9B0;
	// b 0x830aaac0
	goto loc_830AAAC0;
loc_830AAABC:
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_830AAAC0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830AAACC;
	sub_82A2A558(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AAAD8"))) PPC_WEAK_FUNC(sub_830AAAD8);
PPC_FUNC_IMPL(__imp__sub_830AAAD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x830AAAE0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r23,-31763
	ctx.r23.s64 = -2081619968;
	// ori r10,r11,26104
	ctx.r10.u64 = ctx.r11.u64 | 26104;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r24,r9,23440
	ctx.r24.u64 = ctx.r9.u64 | 23440;
	// lwz r3,-3564(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// lbzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x830aac64
	if (cr6.eq) goto loc_830AAC64;
	// lwzx r11,r8,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aab2c
	if (cr6.lt) goto loc_830AAB2C;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830aab30
	if (cr6.lt) goto loc_830AAB30;
loc_830AAB2C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830AAB30:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830aac64
	if (cr6.eq) goto loc_830AAC64;
	// lwz r7,292(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830aab54
	if (cr6.lt) goto loc_830AAB54;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x830aab58
	if (cr6.lt) goto loc_830AAB58;
loc_830AAB54:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830AAB58:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830aab78
	if (cr6.eq) goto loc_830AAB78;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lbz r9,5768(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5768);
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfe r10,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830aab7c
	goto loc_830AAB7C;
loc_830AAB78:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830AAB7C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830aac64
	if (cr6.eq) goto loc_830AAC64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x830aab98
	if (!cr6.lt) goto loc_830AAB98;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x830aabc0
	goto loc_830AABC0;
loc_830AAB98:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bge cr6,0x830aaba8
	if (!cr6.lt) goto loc_830AABA8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x830aabc0
	goto loc_830AABC0;
loc_830AABA8:
	// li r10,22
	ctx.r10.s64 = 22;
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r6,r10,r11
	ctx.r6.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
loc_830AABC0:
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(ctx.r11.u32, 22, xer);
	// addi r10,r10,12384
	ctx.r10.s64 = ctx.r10.s64 + 12384;
	// bge cr6,0x830aabe0
	if (!cr6.lt) goto loc_830AABE0;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mulli r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 * 200;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x830aabe4
	goto loc_830AABE4;
loc_830AABE0:
	// addi r11,r10,1400
	ctx.r11.s64 = ctx.r10.s64 + 1400;
loc_830AABE4:
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bge cr6,0x830aabf4
	if (!cr6.lt) goto loc_830AABF4;
	// mulli r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 * 88;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_830AABF4:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830aac0c
	if (cr6.lt) goto loc_830AAC0C;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aac10
	if (cr6.lt) goto loc_830AAC10;
loc_830AAC0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAC10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aac64
	if (cr6.eq) goto loc_830AAC64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x830aac30
	if (cr6.lt) goto loc_830AAC30;
	// cmpwi cr6,r4,22
	cr6.compare<int32_t>(ctx.r4.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aac34
	if (cr6.lt) goto loc_830AAC34;
loc_830AAC30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAC34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aac54
	if (cr6.eq) goto loc_830AAC54;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830aac58
	goto loc_830AAC58;
loc_830AAC54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAC58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aae14
	if (!cr6.eq) goto loc_830AAE14;
loc_830AAC64:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r26,255
	ctx.r26.s64 = 255;
	// bl 0x82a0c710
	ctx.lr = 0x830AAC74;
	sub_82A0C710(ctx, base);
	// lbz r11,252(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 252);
	// lfs f13,8144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8144);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bgt cr6,0x830aacac
	if (cr6.gt) goto loc_830AACAC;
	// li r31,1
	ctx.r31.s64 = 1;
loc_830AACAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r27,r10,20120
	ctx.r27.u64 = ctx.r10.u64 | 20120;
	// lfs f31,-6656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6656);
	ctx.f31.f64 = double(temp.f32);
	// ori r28,r9,21472
	ctx.r28.u64 = ctx.r9.u64 | 21472;
loc_830AACC8:
	// lwz r8,12(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + ctx.r27.u64;
	// bge cr6,0x830aacf4
	if (!cr6.lt) goto loc_830AACF4;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// bge cr6,0x830aacf4
	if (!cr6.lt) goto loc_830AACF4;
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x830aacf8
	goto loc_830AACF8;
loc_830AACF4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_830AACF8:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// blt cr6,0x830aad10
	if (cr6.lt) goto loc_830AAD10;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aad14
	if (cr6.lt) goto loc_830AAD14;
loc_830AAD10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAD14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aadf4
	if (cr6.eq) goto loc_830AADF4;
	// lwz r11,-3564(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -3564);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// blt cr6,0x830aad3c
	if (cr6.lt) goto loc_830AAD3C;
	// cmpwi cr6,r30,22
	cr6.compare<int32_t>(ctx.r30.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830aad40
	if (cr6.lt) goto loc_830AAD40;
loc_830AAD3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAD40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aad60
	if (cr6.eq) goto loc_830AAD60;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lbz r10,5768(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5768);
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subfe r11,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x830aad64
	goto loc_830AAD64;
loc_830AAD60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAD64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aadf4
	if (cr6.eq) goto loc_830AADF4;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830aad94
	if (!cr6.lt) goto loc_830AAD94;
	// cmplwi cr6,r29,11
	cr6.compare<uint32_t>(ctx.r29.u32, 11, xer);
	// bge cr6,0x830aad94
	if (!cr6.lt) goto loc_830AAD94;
	// mulli r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 * 11;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x830aad98
	goto loc_830AAD98;
loc_830AAD94:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_830AAD98:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x830aadf4
	if (cr6.gt) goto loc_830AADF4;
	// lwzx r11,r8,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// beq cr6,0x830aadf4
	if (cr6.eq) goto loc_830AADF4;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r10,r31,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// subfc r9,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r6,r10,r7
	temp.u8 = (~ctx.r10.u32 + ctx.r7.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 & ctx.r31.u64;
	// mulli r11,r5,152
	ctx.r11.s64 = ctx.r5.s64 * 152;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r3,r4,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x830aadf4
	if (cr6.eq) goto loc_830AADF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x830aa150
	ctx.lr = 0x830AADE8;
	sub_830AA150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aae0c
	if (!cr6.eq) goto loc_830AAE0C;
loc_830AADF4:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x830aacc8
	if (cr6.lt) goto loc_830AACC8;
	// b 0x830aae10
	goto loc_830AAE10;
loc_830AAE0C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_830AAE10:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_830AAE14:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a2a558
	ctx.lr = 0x830AAE1C;
	sub_82A2A558(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AAE28"))) PPC_WEAK_FUNC(sub_830AAE28);
PPC_FUNC_IMPL(__imp__sub_830AAE28) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830aa350
	sub_830AA350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AAE30"))) PPC_WEAK_FUNC(sub_830AAE30);
PPC_FUNC_IMPL(__imp__sub_830AAE30) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x830aa350
	sub_830AA350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AAE38"))) PPC_WEAK_FUNC(sub_830AAE38);
PPC_FUNC_IMPL(__imp__sub_830AAE38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x830a9ff0
	ctx.lr = 0x830AAE64;
	sub_830A9FF0(ctx, base);
	// lis r8,-31763
	ctx.r8.s64 = -2081619968;
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r9,r3,8248
	ctx.r9.s64 = ctx.r3.s64 * 8248;
	// lwz r5,-3564(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3564);
	// lwz r8,6132(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r7,0
	ctx.r7.s64 = 0;
	// subfc r4,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ori r10,r7,48936
	ctx.r10.u64 = ctx.r7.u64 | 48936;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subfe r7,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r6,-31773
	ctx.r6.s64 = -2082275328;
	// and r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r11,r6,19360
	ctx.r11.s64 = ctx.r6.s64 + 19360;
	// li r3,255
	ctx.r3.s64 = 255;
	// lhz r7,19360(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 19360);
	// ld r30,6940(r4)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 6940);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x830aaed4
	if (!cr6.eq) goto loc_830AAED4;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830aaef8
	goto loc_830AAEF8;
loc_830AAED4:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x830aaef0
	if (!cr6.eq) goto loc_830AAEF0;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830aaef4
	if (cr6.eq) goto loc_830AAEF4;
loc_830AAEF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAEF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830AAEF8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830aaf40
	if (cr6.eq) goto loc_830AAF40;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r11,2
	ctx.r11.s64 = 2;
	// mulli r10,r31,8248
	ctx.r10.s64 = ctx.r31.s64 * 8248;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfc r10,r11,r31
	xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// subfe r4,r11,r8
	temp.u8 = (~ctx.r11.u32 + ctx.r8.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r11.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ctx.r6.u64;
	// ld r30,6940(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6940);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_830AAF40:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830aaf54
	if (!cr6.eq) goto loc_830AAF54;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x830aaf78
	goto loc_830AAF78;
loc_830AAF54:
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x830aaf70
	if (!cr6.eq) goto loc_830AAF70;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x830aaf74
	if (cr6.eq) goto loc_830AAF74;
loc_830AAF70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AAF74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830AAF78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830aaf98
	if (!cr6.eq) goto loc_830AAF98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82a0c738
	ctx.lr = 0x830AAF90;
	sub_82A0C738(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a16890
	ctx.lr = 0x830AAF98;
	sub_82A16890(ctx, base);
loc_830AAF98:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x830aafb0
	if (!cr6.lt) goto loc_830AAFB0;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bge cr6,0x830aafb0
	if (!cr6.lt) goto loc_830AAFB0;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
loc_830AAFB0:
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
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

__attribute__((alias("__imp__sub_830AAFCC"))) PPC_WEAK_FUNC(sub_830AAFCC);
PPC_FUNC_IMPL(__imp__sub_830AAFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AAFD0"))) PPC_WEAK_FUNC(sub_830AAFD0);
PPC_FUNC_IMPL(__imp__sub_830AAFD0) {
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
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,56
	cr6.compare<int32_t>(ctx.r11.s32, 56, xer);
	// blt cr6,0x830ab004
	if (cr6.lt) goto loc_830AB004;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x830ab028
	goto loc_830AB028;
loc_830AB004:
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-32688
	ctx.r8.s64 = ctx.r10.s64 + -32688;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x830AB020;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
loc_830AB028:
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

__attribute__((alias("__imp__sub_830AB040"))) PPC_WEAK_FUNC(sub_830AB040);
PPC_FUNC_IMPL(__imp__sub_830AB040) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AB050"))) PPC_WEAK_FUNC(sub_830AB050);
PPC_FUNC_IMPL(__imp__sub_830AB050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830AB058;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r28,r3,184
	ctx.r28.s64 = ctx.r3.s64 + 184;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830AB06C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830AB088;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830ab0b0
	if (cr6.eq) goto loc_830AB0B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x830ab06c
	if (cr6.lt) goto loc_830AB06C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_830AB0B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB0BC"))) PPC_WEAK_FUNC(sub_830AB0BC);
PPC_FUNC_IMPL(__imp__sub_830AB0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB0C0"))) PPC_WEAK_FUNC(sub_830AB0C0);
PPC_FUNC_IMPL(__imp__sub_830AB0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830AB0C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ab164
	if (cr6.eq) goto loc_830AB164;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// rlwinm r28,r5,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-32282
	ctx.r30.s64 = ctx.r11.s64 + -32282;
loc_830AB0E8:
	// addi r4,r30,66
	ctx.r4.s64 = ctx.r30.s64 + 66;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x830AB0F4;
	sub_838FC840(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,74
	ctx.r4.s64 = ctx.r30.s64 + 74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fc840
	ctx.lr = 0x830AB104;
	sub_838FC840(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_830AB110:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830ab134
	if (cr6.eq) goto loc_830AB134;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ab110
	if (cr6.eq) goto loc_830AB110;
loc_830AB134:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ab144
	if (cr6.eq) goto loc_830AB144;
	// bl 0x831d88a0
	ctx.lr = 0x830AB140;
	sub_831D88A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_830AB144:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// bl 0x830afd68
	ctx.lr = 0x830AB150;
	sub_830AFD68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830AB158;
	sub_838FBC58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ab0e8
	if (!cr6.eq) goto loc_830AB0E8;
loc_830AB164:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB170"))) PPC_WEAK_FUNC(sub_830AB170);
PPC_FUNC_IMPL(__imp__sub_830AB170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AB178;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fe430
	ctx.lr = 0x830AB188;
	sub_830FE430(ctx, base);
	// lwz r3,200(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// bl 0x830fe598
	ctx.lr = 0x830AB190;
	sub_830FE598(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,200(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// bl 0x830fe5c0
	ctx.lr = 0x830AB19C;
	sub_830FE5C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x838fceb8
	ctx.lr = 0x830AB1B0;
	sub_838FCEB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ab1d0
	if (!cr6.eq) goto loc_830AB1D0;
loc_830AB1BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fe470
	ctx.lr = 0x830AB1C4;
	sub_830FE470(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830AB1D0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-32236
	ctx.r31.s64 = ctx.r11.s64 + -32236;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,-44
	ctx.r5.s64 = ctx.r31.s64 + -44;
	// bl 0x838fd690
	ctx.lr = 0x830AB1F0;
	sub_838FD690(ctx, base);
	// bl 0x827ab930
	ctx.lr = 0x830AB1F4;
	sub_827AB930(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ab1bc
	if (cr6.eq) goto loc_830AB1BC;
	// bl 0x838fbb40
	ctx.lr = 0x830AB200;
	sub_838FBB40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ab300
	if (cr6.eq) goto loc_830AB300;
loc_830AB20C:
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fc840
	ctx.lr = 0x830AB218;
	sub_838FC840(ctx, base);
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_830AB220:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830ab244
	if (cr6.eq) goto loc_830AB244;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ab220
	if (cr6.eq) goto loc_830AB220;
loc_830AB244:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830ab25c
	if (!cr6.eq) goto loc_830AB25C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830AB254;
	sub_838FBB40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x830ab2e0
	goto loc_830AB2E0;
loc_830AB25C:
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_830AB264:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830ab288
	if (cr6.eq) goto loc_830AB288;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ab264
	if (cr6.eq) goto loc_830AB264;
loc_830AB288:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830ab2a0
	if (!cr6.eq) goto loc_830AB2A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830AB298;
	sub_838FBB40(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x830ab2e0
	goto loc_830AB2E0;
loc_830AB2A0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_830AB2A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x830ab2cc
	if (cr6.eq) goto loc_830AB2CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ab2a8
	if (cr6.eq) goto loc_830AB2A8;
loc_830AB2CC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x830ab2ec
	if (!cr6.eq) goto loc_830AB2EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbb40
	ctx.lr = 0x830AB2DC;
	sub_838FBB40(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_830AB2E0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830ab0c0
	ctx.lr = 0x830AB2EC;
	sub_830AB0C0(ctx, base);
loc_830AB2EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838fbc58
	ctx.lr = 0x830AB2F4;
	sub_838FBC58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ab20c
	if (!cr6.eq) goto loc_830AB20C;
loc_830AB300:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fe470
	ctx.lr = 0x830AB308;
	sub_830FE470(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB314"))) PPC_WEAK_FUNC(sub_830AB314);
PPC_FUNC_IMPL(__imp__sub_830AB314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB318"))) PPC_WEAK_FUNC(sub_830AB318);
PPC_FUNC_IMPL(__imp__sub_830AB318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AB320;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ab398
	if (cr6.eq) goto loc_830AB398;
	// li r30,25
	ctx.r30.s64 = 25;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830AB350;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ab360
	if (cr6.eq) goto loc_830AB360;
	// bl 0x824eecc0
	ctx.lr = 0x830AB35C;
	sub_824EECC0(ctx, base);
	// b 0x830ab364
	goto loc_830AB364;
loc_830AB360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830AB364:
	// stw r3,200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 200, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// blt cr6,0x830ab38c
	if (cr6.lt) goto loc_830AB38C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830fe628
	ctx.lr = 0x830AB384;
	sub_830FE628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830AB38C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x830fe628
	ctx.lr = 0x830AB398;
	sub_830FE628(ctx, base);
loc_830AB398:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB3A0"))) PPC_WEAK_FUNC(sub_830AB3A0);
PPC_FUNC_IMPL(__imp__sub_830AB3A0) {
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
	// lwz r3,200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ab3cc
	if (!cr6.eq) goto loc_830AB3CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830ab43c
	goto loc_830AB43C;
loc_830AB3CC:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830fe540
	ctx.lr = 0x830AB3D4;
	sub_830FE540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ab438
	if (cr6.eq) goto loc_830AB438;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830ab170
	ctx.lr = 0x830AB3E8;
	sub_830AB170(ctx, base);
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ab434
	if (cr6.eq) goto loc_830AB434;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830AB408;
	sub_82595150(ctx, base);
	// lwz r31,200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x830ab424
	if (cr6.eq) goto loc_830AB424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830fe5c8
	ctx.lr = 0x830AB41C;
	sub_830FE5C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x830AB424;
	sub_82416268(ctx, base);
loc_830AB424:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830AB42C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r11.u32);
loc_830AB434:
	// li r31,1
	ctx.r31.s64 = 1;
loc_830AB438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830AB43C:
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

__attribute__((alias("__imp__sub_830AB454"))) PPC_WEAK_FUNC(sub_830AB454);
PPC_FUNC_IMPL(__imp__sub_830AB454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB458"))) PPC_WEAK_FUNC(sub_830AB458);
PPC_FUNC_IMPL(__imp__sub_830AB458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x830AB460;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r26,3
	ctx.r26.s64 = 3;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r27,20
	ctx.r27.s64 = 20;
loc_830AB47C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x830afa60
	ctx.lr = 0x830AB488;
	sub_830AFA60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ab52c
	if (cr6.eq) goto loc_830AB52C;
loc_830AB490:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x830afb28
	ctx.lr = 0x830AB49C;
	sub_830AFB28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x830ab510
	if (cr6.eq) goto loc_830AB510;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divw. r5,r10,r27
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r27.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x830ab510
	if (cr0.eq) goto loc_830AB510;
	// li r8,0
	ctx.r8.s64 = 0;
loc_830AB4C4:
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830AB4CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r24,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r24.s64;
	// beq cr6,0x830ab4f0
	if (cr6.eq) goto loc_830AB4F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ab4cc
	if (cr6.eq) goto loc_830AB4CC;
loc_830AB4F0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830ab50c
	if (cr6.eq) goto loc_830AB50C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// blt cr6,0x830ab4c4
	if (cr6.lt) goto loc_830AB4C4;
	// b 0x830ab510
	goto loc_830AB510;
loc_830AB50C:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
loc_830AB510:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x830afb70
	ctx.lr = 0x830AB518;
	sub_830AFB70(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x830afa60
	ctx.lr = 0x830AB524;
	sub_830AFA60(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x830ab490
	if (cr6.lt) goto loc_830AB490;
loc_830AB52C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x830ab47c
	if (!cr0.eq) goto loc_830AB47C;
	// lwz r11,116(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// addi r3,r25,116
	ctx.r3.s64 = ctx.r25.s64 + 116;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830AB54C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB558"))) PPC_WEAK_FUNC(sub_830AB558);
PPC_FUNC_IMPL(__imp__sub_830AB558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AB560;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ab5b4
	if (cr6.eq) goto loc_830AB5B4;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830AB58C;
	sub_82595150(ctx, base);
	// lwz r30,200(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x830ab5a8
	if (cr6.eq) goto loc_830AB5A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830fe5c8
	ctx.lr = 0x830AB5A0;
	sub_830FE5C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x830AB5A8;
	sub_82416268(ctx, base);
loc_830AB5A8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830AB5B0;
	sub_82595170(ctx, base);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
loc_830AB5B4:
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ab5d0
	if (cr6.eq) goto loc_830AB5D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x830AB5D0;
	sub_825952B8(ctx, base);
loc_830AB5D0:
	// stw r29,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r29.u32);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// stw r29,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r29.u32);
	// stw r29,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r29.u32);
	// bl 0x830b0288
	ctx.lr = 0x830AB5E4;
	sub_830B0288(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x830aff38
	ctx.lr = 0x830AB5EC;
	sub_830AFF38(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x830afdf0
	ctx.lr = 0x830AB5F4;
	sub_830AFDF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB5FC"))) PPC_WEAK_FUNC(sub_830AB5FC);
PPC_FUNC_IMPL(__imp__sub_830AB5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB600"))) PPC_WEAK_FUNC(sub_830AB600);
PPC_FUNC_IMPL(__imp__sub_830AB600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830AB608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830afdb0
	ctx.lr = 0x830AB61C;
	sub_830AFDB0(ctx, base);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830afef8
	ctx.lr = 0x830AB628;
	sub_830AFEF8(ctx, base);
	// addi r28,r31,116
	ctx.r28.s64 = ctx.r31.s64 + 116;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830b0310
	ctx.lr = 0x830AB634;
	sub_830B0310(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB660"))) PPC_WEAK_FUNC(sub_830AB660);
PPC_FUNC_IMPL(__imp__sub_830AB660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830AB668;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ab688
	if (cr6.eq) goto loc_830AB688;
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82af1ca8
	ctx.lr = 0x830AB688;
	sub_82AF1CA8(ctx, base);
loc_830AB688:
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// addi r31,r28,184
	ctx.r31.s64 = ctx.r28.s64 + 184;
	// lwz r10,188(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830ab6e8
	if (cr0.eq) goto loc_830AB6E8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_830AB6A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830ab6c8
	if (cr6.eq) goto loc_830AB6C8;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x830b00c0
	ctx.lr = 0x830AB6C8;
	sub_830B00C0(ctx, base);
loc_830AB6C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x830ab6a8
	if (cr6.lt) goto loc_830AB6A8;
loc_830AB6E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB6F0"))) PPC_WEAK_FUNC(sub_830AB6F0);
PPC_FUNC_IMPL(__imp__sub_830AB6F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AB704"))) PPC_WEAK_FUNC(sub_830AB704);
PPC_FUNC_IMPL(__imp__sub_830AB704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB708"))) PPC_WEAK_FUNC(sub_830AB708);
PPC_FUNC_IMPL(__imp__sub_830AB708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AB710;
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
	ctx.lr = 0x830AB728;
	sub_82596FE8(ctx, base);
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x830AB734;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB73C"))) PPC_WEAK_FUNC(sub_830AB73C);
PPC_FUNC_IMPL(__imp__sub_830AB73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB740"))) PPC_WEAK_FUNC(sub_830AB740);
PPC_FUNC_IMPL(__imp__sub_830AB740) {
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
	ctx.lr = 0x830AB764;
	sub_82596FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// bl 0x82597088
	ctx.lr = 0x830AB770;
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

__attribute__((alias("__imp__sub_830AB78C"))) PPC_WEAK_FUNC(sub_830AB78C);
PPC_FUNC_IMPL(__imp__sub_830AB78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB790"))) PPC_WEAK_FUNC(sub_830AB790);
PPC_FUNC_IMPL(__imp__sub_830AB790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AB798;
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
	ctx.lr = 0x830AB7B0;
	sub_82596FE8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82597088
	ctx.lr = 0x830AB7BC;
	sub_82597088(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB7C4"))) PPC_WEAK_FUNC(sub_830AB7C4);
PPC_FUNC_IMPL(__imp__sub_830AB7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB7C8"))) PPC_WEAK_FUNC(sub_830AB7C8);
PPC_FUNC_IMPL(__imp__sub_830AB7C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AB84C"))) PPC_WEAK_FUNC(sub_830AB84C);
PPC_FUNC_IMPL(__imp__sub_830AB84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB850"))) PPC_WEAK_FUNC(sub_830AB850);
PPC_FUNC_IMPL(__imp__sub_830AB850) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AB860"))) PPC_WEAK_FUNC(sub_830AB860);
PPC_FUNC_IMPL(__imp__sub_830AB860) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 9;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AB870"))) PPC_WEAK_FUNC(sub_830AB870);
PPC_FUNC_IMPL(__imp__sub_830AB870) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,17
	ctx.r11.s64 = ctx.r4.s64 + 17;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AB880"))) PPC_WEAK_FUNC(sub_830AB880);
PPC_FUNC_IMPL(__imp__sub_830AB880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830ab8a0
	if (!cr6.eq) goto loc_830AB8A0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_830AB8A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AB8A8"))) PPC_WEAK_FUNC(sub_830AB8A8);
PPC_FUNC_IMPL(__imp__sub_830AB8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x830ab8c8
	if (!cr6.eq) goto loc_830AB8C8;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_830AB8C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AB8D0"))) PPC_WEAK_FUNC(sub_830AB8D0);
PPC_FUNC_IMPL(__imp__sub_830AB8D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x830AB8D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_830AB8EC:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f3888
	ctx.lr = 0x830AB900;
	sub_830F3888(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ab918
	if (cr6.eq) goto loc_830AB918;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x830ab91c
	goto loc_830AB91C;
loc_830AB918:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830AB91C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r11,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r11.u32);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// ble cr6,0x830ab8ec
	if (!cr6.gt) goto loc_830AB8EC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB938"))) PPC_WEAK_FUNC(sub_830AB938);
PPC_FUNC_IMPL(__imp__sub_830AB938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AB940;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,48
	ctx.r30.s64 = ctx.r3.s64 + 48;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_830AB950:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f3918
	ctx.lr = 0x830AB964;
	sub_830F3918(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// stw r11,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r11.u32);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// ble cr6,0x830ab950
	if (!cr6.gt) goto loc_830AB950;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB984"))) PPC_WEAK_FUNC(sub_830AB984);
PPC_FUNC_IMPL(__imp__sub_830AB984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB988"))) PPC_WEAK_FUNC(sub_830AB988);
PPC_FUNC_IMPL(__imp__sub_830AB988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AB990;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_830AB9A0:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830f33e0
	ctx.lr = 0x830AB9B4;
	sub_830F33E0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// stw r11,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r11.u32);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// ble cr6,0x830ab9a0
	if (!cr6.gt) goto loc_830AB9A0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AB9D4"))) PPC_WEAK_FUNC(sub_830AB9D4);
PPC_FUNC_IMPL(__imp__sub_830AB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AB9D8"))) PPC_WEAK_FUNC(sub_830AB9D8);
PPC_FUNC_IMPL(__imp__sub_830AB9D8) {
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
	// bl 0x830ab8d0
	ctx.lr = 0x830AB9F0;
	sub_830AB8D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ab938
	ctx.lr = 0x830AB9F8;
	sub_830AB938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ab988
	ctx.lr = 0x830ABA00;
	sub_830AB988(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830ABA14"))) PPC_WEAK_FUNC(sub_830ABA14);
PPC_FUNC_IMPL(__imp__sub_830ABA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABA18"))) PPC_WEAK_FUNC(sub_830ABA18);
PPC_FUNC_IMPL(__imp__sub_830ABA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830aba28
	if (cr6.lt) goto loc_830ABA28;
	// cmpwi cr6,r3,12
	cr6.compare<int32_t>(ctx.r3.s32, 12, xer);
	// ble cr6,0x830aba38
	if (!cr6.gt) goto loc_830ABA38;
loc_830ABA28:
	// cmpwi cr6,r3,34
	cr6.compare<int32_t>(ctx.r3.s32, 34, xer);
	// blt cr6,0x830aba40
	if (cr6.lt) goto loc_830ABA40;
	// cmpwi cr6,r3,40
	cr6.compare<int32_t>(ctx.r3.s32, 40, xer);
	// bgt cr6,0x830aba40
	if (cr6.gt) goto loc_830ABA40;
loc_830ABA38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830ABA40:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABA48"))) PPC_WEAK_FUNC(sub_830ABA48);
PPC_FUNC_IMPL(__imp__sub_830ABA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830aba58
	if (cr6.lt) goto loc_830ABA58;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// ble cr6,0x830aba78
	if (!cr6.gt) goto loc_830ABA78;
loc_830ABA58:
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// blt cr6,0x830aba68
	if (cr6.lt) goto loc_830ABA68;
	// cmpwi cr6,r3,26
	cr6.compare<int32_t>(ctx.r3.s32, 26, xer);
	// ble cr6,0x830aba78
	if (!cr6.gt) goto loc_830ABA78;
loc_830ABA68:
	// cmpwi cr6,r3,29
	cr6.compare<int32_t>(ctx.r3.s32, 29, xer);
	// blt cr6,0x830aba80
	if (cr6.lt) goto loc_830ABA80;
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// bgt cr6,0x830aba80
	if (cr6.gt) goto loc_830ABA80;
loc_830ABA78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830ABA80:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABA88"))) PPC_WEAK_FUNC(sub_830ABA88);
PPC_FUNC_IMPL(__imp__sub_830ABA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830aba98
	if (cr6.lt) goto loc_830ABA98;
	// cmpwi cr6,r3,12
	cr6.compare<int32_t>(ctx.r3.s32, 12, xer);
	// ble cr6,0x830abaa8
	if (!cr6.gt) goto loc_830ABAA8;
loc_830ABA98:
	// cmpwi cr6,r3,34
	cr6.compare<int32_t>(ctx.r3.s32, 34, xer);
	// blt cr6,0x830abab0
	if (cr6.lt) goto loc_830ABAB0;
	// cmpwi cr6,r3,40
	cr6.compare<int32_t>(ctx.r3.s32, 40, xer);
	// bgt cr6,0x830abab0
	if (cr6.gt) goto loc_830ABAB0;
loc_830ABAA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830abab4
	goto loc_830ABAB4;
loc_830ABAB0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830ABAB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABAD0"))) PPC_WEAK_FUNC(sub_830ABAD0);
PPC_FUNC_IMPL(__imp__sub_830ABAD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830abae0
	if (cr6.lt) goto loc_830ABAE0;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// ble cr6,0x830abb00
	if (!cr6.gt) goto loc_830ABB00;
loc_830ABAE0:
	// cmpwi cr6,r3,25
	cr6.compare<int32_t>(ctx.r3.s32, 25, xer);
	// blt cr6,0x830abaf0
	if (cr6.lt) goto loc_830ABAF0;
	// cmpwi cr6,r3,26
	cr6.compare<int32_t>(ctx.r3.s32, 26, xer);
	// ble cr6,0x830abb00
	if (!cr6.gt) goto loc_830ABB00;
loc_830ABAF0:
	// cmpwi cr6,r3,29
	cr6.compare<int32_t>(ctx.r3.s32, 29, xer);
	// blt cr6,0x830abb08
	if (cr6.lt) goto loc_830ABB08;
	// cmpwi cr6,r3,30
	cr6.compare<int32_t>(ctx.r3.s32, 30, xer);
	// bgt cr6,0x830abb08
	if (cr6.gt) goto loc_830ABB08;
loc_830ABB00:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830abb0c
	goto loc_830ABB0C;
loc_830ABB08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830ABB0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABB28"))) PPC_WEAK_FUNC(sub_830ABB28);
PPC_FUNC_IMPL(__imp__sub_830ABB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830abb3c
	if (cr6.lt) goto loc_830ABB3C;
	// cmpwi cr6,r3,35
	cr6.compare<int32_t>(ctx.r3.s32, 35, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_830ABB3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABB44"))) PPC_WEAK_FUNC(sub_830ABB44);
PPC_FUNC_IMPL(__imp__sub_830ABB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABB48"))) PPC_WEAK_FUNC(sub_830ABB48);
PPC_FUNC_IMPL(__imp__sub_830ABB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830abb5c
	if (cr6.lt) goto loc_830ABB5C;
	// cmpwi cr6,r3,28
	cr6.compare<int32_t>(ctx.r3.s32, 28, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_830ABB5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABB64"))) PPC_WEAK_FUNC(sub_830ABB64);
PPC_FUNC_IMPL(__imp__sub_830ABB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABB68"))) PPC_WEAK_FUNC(sub_830ABB68);
PPC_FUNC_IMPL(__imp__sub_830ABB68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19872
	ctx.r9.s64 = ctx.r11.s64 + 19872;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABB7C"))) PPC_WEAK_FUNC(sub_830ABB7C);
PPC_FUNC_IMPL(__imp__sub_830ABB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABB80"))) PPC_WEAK_FUNC(sub_830ABB80);
PPC_FUNC_IMPL(__imp__sub_830ABB80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31773
	ctx.r11.s64 = -2082275328;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,20040
	ctx.r9.s64 = ctx.r11.s64 + 20040;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABB94"))) PPC_WEAK_FUNC(sub_830ABB94);
PPC_FUNC_IMPL(__imp__sub_830ABB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABB98"))) PPC_WEAK_FUNC(sub_830ABB98);
PPC_FUNC_IMPL(__imp__sub_830ABB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830abbd0
	if (cr6.eq) goto loc_830ABBD0;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31128
	ctx.r9.s64 = ctx.r11.s64 + -31128;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_830ABBB4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x830abbd8
	if (cr6.eq) goto loc_830ABBD8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,41
	cr6.compare<uint32_t>(ctx.r10.u32, 41, xer);
	// blt cr6,0x830abbb4
	if (cr6.lt) goto loc_830ABBB4;
loc_830ABBD0:
	// li r3,41
	ctx.r3.s64 = 41;
	// blr 
	return;
loc_830ABBD8:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABBE8"))) PPC_WEAK_FUNC(sub_830ABBE8);
PPC_FUNC_IMPL(__imp__sub_830ABBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830abc20
	if (cr6.eq) goto loc_830ABC20;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30800
	ctx.r9.s64 = ctx.r11.s64 + -30800;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_830ABC04:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// beq cr6,0x830abc28
	if (cr6.eq) goto loc_830ABC28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,31
	cr6.compare<uint32_t>(ctx.r10.u32, 31, xer);
	// blt cr6,0x830abc04
	if (cr6.lt) goto loc_830ABC04;
loc_830ABC20:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_830ABC28:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABC38"))) PPC_WEAK_FUNC(sub_830ABC38);
PPC_FUNC_IMPL(__imp__sub_830ABC38) {
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
	// bl 0x830e8b90
	ctx.lr = 0x830ABC50;
	sub_830E8B90(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-30420
	ctx.r9.s64 = ctx.r11.s64 + -30420;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830fe360
	ctx.lr = 0x830ABC70;
	sub_830FE360(ctx, base);
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

__attribute__((alias("__imp__sub_830ABC88"))) PPC_WEAK_FUNC(sub_830ABC88);
PPC_FUNC_IMPL(__imp__sub_830ABC88) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r10,r11,-30420
	ctx.r10.s64 = ctx.r11.s64 + -30420;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83102db0
	ctx.lr = 0x830ABCB0;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83063f78
	ctx.lr = 0x830ABCB8;
	sub_83063F78(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830ABCCC"))) PPC_WEAK_FUNC(sub_830ABCCC);
PPC_FUNC_IMPL(__imp__sub_830ABCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABCD0"))) PPC_WEAK_FUNC(sub_830ABCD0);
PPC_FUNC_IMPL(__imp__sub_830ABCD0) {
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
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x830fe3e0
	ctx.lr = 0x830ABCE4;
	sub_830FE3E0(ctx, base);
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

__attribute__((alias("__imp__sub_830ABD00"))) PPC_WEAK_FUNC(sub_830ABD00);
PPC_FUNC_IMPL(__imp__sub_830ABD00) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r10,r11,-30420
	ctx.r10.s64 = ctx.r11.s64 + -30420;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83102db0
	ctx.lr = 0x830ABD30;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83063f78
	ctx.lr = 0x830ABD38;
	sub_83063F78(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830abd50
	if (cr6.eq) goto loc_830ABD50;
	// bl 0x82416268
	ctx.lr = 0x830ABD4C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830ABD50:
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

__attribute__((alias("__imp__sub_830ABD68"))) PPC_WEAK_FUNC(sub_830ABD68);
PPC_FUNC_IMPL(__imp__sub_830ABD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,1556(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,40
	cr6.compare<uint32_t>(ctx.r9.u32, 40, xer);
	// bge cr6,0x830abe00
	if (!cr6.lt) goto loc_830ABE00;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r8,1720(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1720);
	// cmpwi cr6,r8,5
	cr6.compare<int32_t>(ctx.r8.s32, 5, xer);
	// bne cr6,0x830abe00
	if (!cr6.eq) goto loc_830ABE00;
	// addi r11,r9,390
	ctx.r11.s64 = ctx.r9.s64 + 390;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// ori r11,r7,11
	ctx.r11.u64 = ctx.r7.u64 | 11;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r7,r7,27
	ctx.r7.u64 = ctx.r7.u64 | 27;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// cmplwi cr6,r8,40
	cr6.compare<uint32_t>(ctx.r8.u32, 40, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r9,r8,390
	ctx.r9.s64 = ctx.r8.s64 + 390;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x830abdf0
	if (cr6.lt) goto loc_830ABDF0;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bgt cr6,0x830abdf0
	if (cr6.gt) goto loc_830ABDF0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_830ABDF0:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830ABE00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABE08"))) PPC_WEAK_FUNC(sub_830ABE08);
PPC_FUNC_IMPL(__imp__sub_830ABE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// beq cr6,0x830abe24
	if (cr6.eq) goto loc_830ABE24;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x830abe24
	if (cr6.eq) goto loc_830ABE24;
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_830ABE24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABE2C"))) PPC_WEAK_FUNC(sub_830ABE2C);
PPC_FUNC_IMPL(__imp__sub_830ABE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABE30"))) PPC_WEAK_FUNC(sub_830ABE30);
PPC_FUNC_IMPL(__imp__sub_830ABE30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,1556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1556);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bge cr6,0x830abe5c
	if (!cr6.lt) goto loc_830ABE5C;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1720(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1720);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// beq cr6,0x830abe64
	if (cr6.eq) goto loc_830ABE64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x830abe64
	if (cr6.eq) goto loc_830ABE64;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// beq cr6,0x830abe64
	if (cr6.eq) goto loc_830ABE64;
loc_830ABE5C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830abe68
	goto loc_830ABE68;
loc_830ABE64:
	// li r10,1
	ctx.r10.s64 = 1;
loc_830ABE68:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x830abebc
	if (!cr6.eq) goto loc_830ABEBC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830abebc
	if (cr6.eq) goto loc_830ABEBC;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bge cr6,0x830abebc
	if (!cr6.lt) goto loc_830ABEBC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r11,1719(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1719);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// beq cr6,0x830abea8
	if (cr6.eq) goto loc_830ABEA8;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// beq cr6,0x830abea8
	if (cr6.eq) goto loc_830ABEA8;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830abeac
	if (!cr6.eq) goto loc_830ABEAC;
loc_830ABEA8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830ABEAC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_830ABEBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABEC4"))) PPC_WEAK_FUNC(sub_830ABEC4);
PPC_FUNC_IMPL(__imp__sub_830ABEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABEC8"))) PPC_WEAK_FUNC(sub_830ABEC8);
PPC_FUNC_IMPL(__imp__sub_830ABEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r11,4456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4456);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830abf34
	if (cr6.eq) goto loc_830ABF34;
	// bdz 0x830abf34
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830ABF34;
	// bdz 0x830abf34
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830ABF34;
	// bdz 0x830abf14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830ABF14;
	// bdz 0x830abf14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830ABF14;
	// bdz 0x830abf14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830ABF14;
	// bdz 0x830abf14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830ABF14;
	// bdz 0x830abf28
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_830ABF28;
	// b 0x830abf28
	goto loc_830ABF28;
loc_830ABF14:
	// lbz r11,98(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 98);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830abf34
	if (!cr6.eq) goto loc_830ABF34;
	// lbz r11,97(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 97);
	// b 0x830abf2c
	goto loc_830ABF2C;
loc_830ABF28:
	// lbz r11,98(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 98);
loc_830ABF2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_830ABF34:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ABF3C"))) PPC_WEAK_FUNC(sub_830ABF3C);
PPC_FUNC_IMPL(__imp__sub_830ABF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ABF40"))) PPC_WEAK_FUNC(sub_830ABF40);
PPC_FUNC_IMPL(__imp__sub_830ABF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830ABF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x837b0c10
	ctx.lr = 0x830ABF64;
	sub_837B0C10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830fe6b8
	ctx.lr = 0x830ABF6C;
	sub_830FE6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,25
	ctx.r11.s64 = 25;
	// beq cr6,0x830abfa0
	if (cr6.eq) goto loc_830ABFA0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x830ABF90;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830abfc0
	if (cr6.eq) goto loc_830ABFC0;
	// bl 0x830b0ad8
	ctx.lr = 0x830ABF9C;
	sub_830B0AD8(ctx, base);
	// b 0x830abfc4
	goto loc_830ABFC4;
loc_830ABFA0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x830ABFB0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830abfc0
	if (cr6.eq) goto loc_830ABFC0;
	// bl 0x830b05c0
	ctx.lr = 0x830ABFBC;
	sub_830B05C0(ctx, base);
	// b 0x830abfc4
	goto loc_830ABFC4;
loc_830ABFC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830ABFC4:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830ABFE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x830ABFF0;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ABFFC"))) PPC_WEAK_FUNC(sub_830ABFFC);
PPC_FUNC_IMPL(__imp__sub_830ABFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC000"))) PPC_WEAK_FUNC(sub_830AC000);
PPC_FUNC_IMPL(__imp__sub_830AC000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830AC014"))) PPC_WEAK_FUNC(sub_830AC014);
PPC_FUNC_IMPL(__imp__sub_830AC014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC018"))) PPC_WEAK_FUNC(sub_830AC018);
PPC_FUNC_IMPL(__imp__sub_830AC018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830AC02C"))) PPC_WEAK_FUNC(sub_830AC02C);
PPC_FUNC_IMPL(__imp__sub_830AC02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC030"))) PPC_WEAK_FUNC(sub_830AC030);
PPC_FUNC_IMPL(__imp__sub_830AC030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830AC044"))) PPC_WEAK_FUNC(sub_830AC044);
PPC_FUNC_IMPL(__imp__sub_830AC044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC048"))) PPC_WEAK_FUNC(sub_830AC048);
PPC_FUNC_IMPL(__imp__sub_830AC048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830AC05C"))) PPC_WEAK_FUNC(sub_830AC05C);
PPC_FUNC_IMPL(__imp__sub_830AC05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC060"))) PPC_WEAK_FUNC(sub_830AC060);
PPC_FUNC_IMPL(__imp__sub_830AC060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830AC074"))) PPC_WEAK_FUNC(sub_830AC074);
PPC_FUNC_IMPL(__imp__sub_830AC074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC078"))) PPC_WEAK_FUNC(sub_830AC078);
PPC_FUNC_IMPL(__imp__sub_830AC078) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ac0dc
	if (cr6.eq) goto loc_830AC0DC;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830AC0AC;
	sub_82595150(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ac0cc
	if (cr6.eq) goto loc_830AC0CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830AC0CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830AC0CC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830AC0D4;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_830AC0DC:
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

__attribute__((alias("__imp__sub_830AC0F0"))) PPC_WEAK_FUNC(sub_830AC0F0);
PPC_FUNC_IMPL(__imp__sub_830AC0F0) {
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
	// bl 0x830b1468
	ctx.lr = 0x830AC108;
	sub_830B1468(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x830b1468
	ctx.lr = 0x830AC110;
	sub_830B1468(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x830b1468
	ctx.lr = 0x830AC118;
	sub_830B1468(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x830b1468
	ctx.lr = 0x830AC120;
	sub_830B1468(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830b1468
	ctx.lr = 0x830AC128;
	sub_830B1468(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x830b1468
	ctx.lr = 0x830AC130;
	sub_830B1468(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830b1468
	ctx.lr = 0x830AC138;
	sub_830B1468(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x830b1468
	ctx.lr = 0x830AC140;
	sub_830B1468(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830b1468
	ctx.lr = 0x830AC148;
	sub_830B1468(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x830b1240
	ctx.lr = 0x830AC150;
	sub_830B1240(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830AC178"))) PPC_WEAK_FUNC(sub_830AC178);
PPC_FUNC_IMPL(__imp__sub_830AC178) {
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
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// bl 0x830b11c0
	ctx.lr = 0x830AC194;
	sub_830B11C0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x830b1408
	ctx.lr = 0x830AC19C;
	sub_830B1408(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x830b1408
	ctx.lr = 0x830AC1A4;
	sub_830B1408(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x830b1408
	ctx.lr = 0x830AC1AC;
	sub_830B1408(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x830b1408
	ctx.lr = 0x830AC1B4;
	sub_830B1408(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x830b1408
	ctx.lr = 0x830AC1BC;
	sub_830B1408(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x830b1408
	ctx.lr = 0x830AC1C4;
	sub_830B1408(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x830b1408
	ctx.lr = 0x830AC1CC;
	sub_830B1408(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x830b1408
	ctx.lr = 0x830AC1D4;
	sub_830B1408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830b1408
	ctx.lr = 0x830AC1DC;
	sub_830B1408(ctx, base);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830AC1F0"))) PPC_WEAK_FUNC(sub_830AC1F0);
PPC_FUNC_IMPL(__imp__sub_830AC1F0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830a8318
	ctx.lr = 0x830AC214;
	sub_830A8318(ctx, base);
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x830ac2e0
	if (cr6.gt) goto loc_830AC2E0;
	// lis r12,-31989
	ctx.r12.s64 = -2096431104;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-15816
	ctx.r12.s64 = ctx.r12.s64 + -15816;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_830AC274;
	case 1:
		goto loc_830AC2D4;
	case 2:
		goto loc_830AC27C;
	case 3:
		goto loc_830AC284;
	case 4:
		goto loc_830AC28C;
	case 5:
		goto loc_830AC294;
	case 6:
		goto loc_830AC29C;
	case 7:
		goto loc_830AC2A4;
	case 8:
		goto loc_830AC2B4;
	case 9:
		goto loc_830AC2AC;
	case 10:
		goto loc_830AC2E0;
	case 11:
		goto loc_830AC2AC;
	case 12:
		goto loc_830AC27C;
	case 13:
		goto loc_830AC274;
	case 14:
		goto loc_830AC2D4;
	default:
		return;
	}
	// lwz r24,-15756(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15756);
	// lwz r24,-15660(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15660);
	// lwz r24,-15748(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15748);
	// lwz r24,-15740(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15740);
	// lwz r24,-15732(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15732);
	// lwz r24,-15724(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15724);
	// lwz r24,-15716(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15716);
	// lwz r24,-15708(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15708);
	// lwz r24,-15692(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15692);
	// lwz r24,-15700(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15700);
	// lwz r24,-15648(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15648);
	// lwz r24,-15700(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15700);
	// lwz r24,-15748(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15748);
	// lwz r24,-15756(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15756);
	// lwz r24,-15660(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15660);
loc_830AC274:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830ac2d8
	goto loc_830AC2D8;
loc_830AC27C:
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// b 0x830ac2d8
	goto loc_830AC2D8;
loc_830AC284:
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// b 0x830ac2d8
	goto loc_830AC2D8;
loc_830AC28C:
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// b 0x830ac2d8
	goto loc_830AC2D8;
loc_830AC294:
	// addi r3,r30,100
	ctx.r3.s64 = ctx.r30.s64 + 100;
	// b 0x830ac2d8
	goto loc_830AC2D8;
loc_830AC29C:
	// addi r3,r30,120
	ctx.r3.s64 = ctx.r30.s64 + 120;
	// b 0x830ac2d8
	goto loc_830AC2D8;
loc_830AC2A4:
	// addi r3,r30,140
	ctx.r3.s64 = ctx.r30.s64 + 140;
	// b 0x830ac2d8
	goto loc_830AC2D8;
loc_830AC2AC:
	// addi r3,r30,160
	ctx.r3.s64 = ctx.r30.s64 + 160;
	// b 0x830ac2d8
	goto loc_830AC2D8;
loc_830AC2B4:
	// bl 0x83740858
	ctx.lr = 0x830AC2B8;
	sub_83740858(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x830b12e8
	ctx.lr = 0x830AC2D0;
	sub_830B12E8(ctx, base);
	// b 0x830ac2e0
	goto loc_830AC2E0;
loc_830AC2D4:
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
loc_830AC2D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830b1510
	ctx.lr = 0x830AC2E0;
	sub_830B1510(ctx, base);
loc_830AC2E0:
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

__attribute__((alias("__imp__sub_830AC2F8"))) PPC_WEAK_FUNC(sub_830AC2F8);
PPC_FUNC_IMPL(__imp__sub_830AC2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x830ac328
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830AC328;
	// bdzf 4*cr6+eq,0x830ac330
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830AC330;
	// bdzf 4*cr6+eq,0x830ac338
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_830AC338;
	// bne cr6,0x830ac340
	if (!cr6.eq) goto loc_830AC340;
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// b 0x830b13a0
	sub_830B13A0(ctx, base);
	return;
loc_830AC328:
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// b 0x830b13a0
	sub_830B13A0(ctx, base);
	return;
loc_830AC330:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x830b13a0
	sub_830B13A0(ctx, base);
	return;
loc_830AC338:
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// b 0x830b13a0
	sub_830B13A0(ctx, base);
	return;
loc_830AC340:
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// b 0x830b13a0
	sub_830B13A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AC348"))) PPC_WEAK_FUNC(sub_830AC348);
PPC_FUNC_IMPL(__imp__sub_830AC348) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AC34C"))) PPC_WEAK_FUNC(sub_830AC34C);
PPC_FUNC_IMPL(__imp__sub_830AC34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC350"))) PPC_WEAK_FUNC(sub_830AC350);
PPC_FUNC_IMPL(__imp__sub_830AC350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AC358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830a8318
	ctx.lr = 0x830AC370;
	sub_830A8318(ctx, base);
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// bne cr6,0x830ac388
	if (!cr6.eq) goto loc_830AC388;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// bl 0x830b1160
	ctx.lr = 0x830AC388;
	sub_830B1160(ctx, base);
loc_830AC388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AC390"))) PPC_WEAK_FUNC(sub_830AC390);
PPC_FUNC_IMPL(__imp__sub_830AC390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830AC398;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a22860
	ctx.lr = 0x830AC3B8;
	sub_82A22860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830ac40c
	if (!cr6.gt) goto loc_830AC40C;
loc_830AC3C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a236f8
	ctx.lr = 0x830AC3CC;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830ac3f0
	if (cr6.eq) goto loc_830AC3F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a22860
	ctx.lr = 0x830AC3E4;
	sub_82A22860(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x830ac3c0
	if (cr6.lt) goto loc_830AC3C0;
	// b 0x830ac40c
	goto loc_830AC40C;
loc_830AC3F0:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x830ac40c
	if (!cr6.eq) goto loc_830AC40C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_830AC40C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b4e0
	ctx.lr = 0x830AC418;
	sub_82A2B4E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x830ac42c
	if (cr6.lt) goto loc_830AC42C;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830ac430
	if (cr6.lt) goto loc_830AC430;
loc_830AC42C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AC430:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x830ac478
	if (!cr6.eq) goto loc_830AC478;
	// lwz r11,236(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x830ac454
	if (cr6.lt) goto loc_830AC454;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(ctx.r11.s32, 22, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x830ac458
	if (cr6.lt) goto loc_830AC458;
loc_830AC454:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830AC458:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r3,236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 236, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ac47c
	if (cr6.eq) goto loc_830AC47C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_830AC478:
	// stw r3,236(r28)
	PPC_STORE_U32(ctx.r28.u32 + 236, ctx.r3.u32);
loc_830AC47C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AC488"))) PPC_WEAK_FUNC(sub_830AC488);
PPC_FUNC_IMPL(__imp__sub_830AC488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,26104
	ctx.r10.s64 = ctx.r10.s64 + 26104;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x830ac4cc
	if (cr6.eq) goto loc_830AC4CC;
	// lwz r11,132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// srawi r9,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x830ac4c4
	if (cr6.eq) goto loc_830AC4C4;
	// lwz r11,104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r9.u32);
loc_830AC4C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830AC4CC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,232(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// ori r8,r10,22620
	ctx.r8.u64 = ctx.r10.u64 | 22620;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x830ac4f8
	if (cr6.eq) goto loc_830AC4F8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x830ac4f8
	if (!cr6.lt) goto loc_830AC4F8;
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_830AC4F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AC500"))) PPC_WEAK_FUNC(sub_830AC500);
PPC_FUNC_IMPL(__imp__sub_830AC500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AC508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22860
	ctx.lr = 0x830AC520;
	sub_82A22860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830ac57c
	if (!cr6.gt) goto loc_830AC57C;
loc_830AC528:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a236f8
	ctx.lr = 0x830AC534;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830ac560
	if (cr6.eq) goto loc_830AC560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a22860
	ctx.lr = 0x830AC54C;
	sub_82A22860(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x830ac528
	if (cr6.lt) goto loc_830AC528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830AC560:
	// lis r11,-31763
	ctx.r11.s64 = -2081619968;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,-3564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3564);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// lwz r9,4460(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4460);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x830ac580
	if (cr6.eq) goto loc_830AC580;
loc_830AC57C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_830AC580:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AC588"))) PPC_WEAK_FUNC(sub_830AC588);
PPC_FUNC_IMPL(__imp__sub_830AC588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AC590;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a22860
	ctx.lr = 0x830AC5A8;
	sub_82A22860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x830ac5dc
	if (!cr6.gt) goto loc_830AC5DC;
loc_830AC5B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a236f8
	ctx.lr = 0x830AC5BC;
	sub_82A236F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// beq cr6,0x830ac5e8
	if (cr6.eq) goto loc_830AC5E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82a22860
	ctx.lr = 0x830AC5D4;
	sub_82A22860(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x830ac5b0
	if (cr6.lt) goto loc_830AC5B0;
loc_830AC5DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_830AC5E8:
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x830ac5fc
	if (cr6.eq) goto loc_830AC5FC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x830ac5dc
	if (!cr6.eq) goto loc_830AC5DC;
loc_830AC5FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AC608"))) PPC_WEAK_FUNC(sub_830AC608);
PPC_FUNC_IMPL(__imp__sub_830AC608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AC610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830ac390
	ctx.lr = 0x830AC620;
	sub_830AC390(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ac680
	if (cr6.eq) goto loc_830AC680;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830AC644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830AC658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x830AC66C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x830AC680;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830AC680:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ac488
	ctx.lr = 0x830AC68C;
	sub_830AC488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ac6d4
	if (cr6.eq) goto loc_830AC6D4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830AC6AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830AC6C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x830AC6D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830AC6D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ac500
	ctx.lr = 0x830AC6E0;
	sub_830AC500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ac700
	if (cr6.eq) goto loc_830AC700;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830AC700;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830AC700:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ac588
	ctx.lr = 0x830AC70C;
	sub_830AC588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ac72c
	if (cr6.eq) goto loc_830AC72C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830AC72C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830AC72C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x830b1090
	ctx.lr = 0x830AC73C;
	sub_830B1090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AC744"))) PPC_WEAK_FUNC(sub_830AC744);
PPC_FUNC_IMPL(__imp__sub_830AC744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC748"))) PPC_WEAK_FUNC(sub_830AC748);
PPC_FUNC_IMPL(__imp__sub_830AC748) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830b1540
	ctx.lr = 0x830AC764;
	sub_830B1540(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830AC77C"))) PPC_WEAK_FUNC(sub_830AC77C);
PPC_FUNC_IMPL(__imp__sub_830AC77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC780"))) PPC_WEAK_FUNC(sub_830AC780);
PPC_FUNC_IMPL(__imp__sub_830AC780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r9,r10,-29700
	ctx.r9.s64 = ctx.r10.s64 + -29700;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AC79C"))) PPC_WEAK_FUNC(sub_830AC79C);
PPC_FUNC_IMPL(__imp__sub_830AC79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC7A0"))) PPC_WEAK_FUNC(sub_830AC7A0);
PPC_FUNC_IMPL(__imp__sub_830AC7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-29700
	ctx.r10.s64 = ctx.r11.s64 + -29700;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AC7B0"))) PPC_WEAK_FUNC(sub_830AC7B0);
PPC_FUNC_IMPL(__imp__sub_830AC7B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23380
	ctx.r3.s64 = ctx.r11.s64 + 23380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AC7BC"))) PPC_WEAK_FUNC(sub_830AC7BC);
PPC_FUNC_IMPL(__imp__sub_830AC7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC7C0"))) PPC_WEAK_FUNC(sub_830AC7C0);
PPC_FUNC_IMPL(__imp__sub_830AC7C0) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-29700
	ctx.r9.s64 = ctx.r11.s64 + -29700;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830ac7f4
	if (cr6.eq) goto loc_830AC7F4;
	// bl 0x82416268
	ctx.lr = 0x830AC7F0;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830AC7F4:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830AC808"))) PPC_WEAK_FUNC(sub_830AC808);
PPC_FUNC_IMPL(__imp__sub_830AC808) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x830b1678
	ctx.lr = 0x830AC82C;
	sub_830B1678(ctx, base);
	// cmplwi cr6,r3,201
	cr6.compare<uint32_t>(ctx.r3.u32, 201, xer);
	// bne cr6,0x830ac844
	if (!cr6.eq) goto loc_830AC844;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lfs f0,-29676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x830ac880
	goto loc_830AC880;
loc_830AC844:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830ac860
	if (!cr6.eq) goto loc_830AC860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831d82e8
	ctx.lr = 0x830AC854;
	sub_831D82E8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x830ac880
	goto loc_830AC880;
loc_830AC860:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830b15b0
	ctx.lr = 0x830AC868;
	sub_830B15B0(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_830AC880:
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

__attribute__((alias("__imp__sub_830AC898"))) PPC_WEAK_FUNC(sub_830AC898);
PPC_FUNC_IMPL(__imp__sub_830AC898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x830AC8A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830ac93c
	if (cr0.eq) goto loc_830AC93C;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r28,25
	ctx.r28.s64 = 25;
loc_830AC8CC:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x830ac91c
	if (cr6.eq) goto loc_830AC91C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x830AC8E8;
	sub_82595150(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ac90c
	if (cr6.eq) goto loc_830AC90C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830AC90C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830AC90C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x830AC914;
	sub_82595170(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r27,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r27.u32);
loc_830AC91C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, xer);
	// blt cr6,0x830ac8cc
	if (cr6.lt) goto loc_830AC8CC;
loc_830AC93C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AC944"))) PPC_WEAK_FUNC(sub_830AC944);
PPC_FUNC_IMPL(__imp__sub_830AC944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC948"))) PPC_WEAK_FUNC(sub_830AC948);
PPC_FUNC_IMPL(__imp__sub_830AC948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830ac978
	if (!cr6.lt) goto loc_830AC978;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_830AC978:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AC988"))) PPC_WEAK_FUNC(sub_830AC988);
PPC_FUNC_IMPL(__imp__sub_830AC988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82a46f98
	sub_82A46F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830AC9B0"))) PPC_WEAK_FUNC(sub_830AC9B0);
PPC_FUNC_IMPL(__imp__sub_830AC9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AC9B4"))) PPC_WEAK_FUNC(sub_830AC9B4);
PPC_FUNC_IMPL(__imp__sub_830AC9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830AC9B8"))) PPC_WEAK_FUNC(sub_830AC9B8);
PPC_FUNC_IMPL(__imp__sub_830AC9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x830AC9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x830aca1c
	if (!cr6.lt) goto loc_830ACA1C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83767d18
	ctx.lr = 0x830AC9F8;
	sub_83767D18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x830aca1c
	if (!cr6.eq) goto loc_830ACA1C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x830a8400
	ctx.lr = 0x830ACA1C;
	sub_830A8400(ctx, base);
loc_830ACA1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ACA24"))) PPC_WEAK_FUNC(sub_830ACA24);
PPC_FUNC_IMPL(__imp__sub_830ACA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ACA28"))) PPC_WEAK_FUNC(sub_830ACA28);
PPC_FUNC_IMPL(__imp__sub_830ACA28) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x835977d8
	ctx.lr = 0x830ACA40;
	sub_835977D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACA50"))) PPC_WEAK_FUNC(sub_830ACA50);
PPC_FUNC_IMPL(__imp__sub_830ACA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-29384
	ctx.r9.s64 = ctx.r11.s64 + -29384;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// oris r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 4294901760;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stb r10,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r5,r6,0,25,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACA80"))) PPC_WEAK_FUNC(sub_830ACA80);
PPC_FUNC_IMPL(__imp__sub_830ACA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-29384
	ctx.r10.s64 = ctx.r11.s64 + -29384;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACA90"))) PPC_WEAK_FUNC(sub_830ACA90);
PPC_FUNC_IMPL(__imp__sub_830ACA90) {
	PPC_FUNC_PROLOGUE();
	// sth r4,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACA98"))) PPC_WEAK_FUNC(sub_830ACA98);
PPC_FUNC_IMPL(__imp__sub_830ACA98) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACAA0"))) PPC_WEAK_FUNC(sub_830ACAA0);
PPC_FUNC_IMPL(__imp__sub_830ACAA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// rlwimi r11,r10,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACAB4"))) PPC_WEAK_FUNC(sub_830ACAB4);
PPC_FUNC_IMPL(__imp__sub_830ACAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ACAB8"))) PPC_WEAK_FUNC(sub_830ACAB8);
PPC_FUNC_IMPL(__imp__sub_830ACAB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACAC4"))) PPC_WEAK_FUNC(sub_830ACAC4);
PPC_FUNC_IMPL(__imp__sub_830ACAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ACAC8"))) PPC_WEAK_FUNC(sub_830ACAC8);
PPC_FUNC_IMPL(__imp__sub_830ACAC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31754
	ctx.r11.s64 = -2081030144;
	// addi r3,r11,23400
	ctx.r3.s64 = ctx.r11.s64 + 23400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACAD4"))) PPC_WEAK_FUNC(sub_830ACAD4);
PPC_FUNC_IMPL(__imp__sub_830ACAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ACAD8"))) PPC_WEAK_FUNC(sub_830ACAD8);
PPC_FUNC_IMPL(__imp__sub_830ACAD8) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-29384
	ctx.r9.s64 = ctx.r11.s64 + -29384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x830acb0c
	if (cr6.eq) goto loc_830ACB0C;
	// bl 0x82416268
	ctx.lr = 0x830ACB08;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830ACB0C:
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830ACB20"))) PPC_WEAK_FUNC(sub_830ACB20);
PPC_FUNC_IMPL(__imp__sub_830ACB20) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830acb78
	ctx.lr = 0x830ACB3C;
	sub_830ACB78(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830ACB54"))) PPC_WEAK_FUNC(sub_830ACB54);
PPC_FUNC_IMPL(__imp__sub_830ACB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ACB58"))) PPC_WEAK_FUNC(sub_830ACB58);
PPC_FUNC_IMPL(__imp__sub_830ACB58) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-19832
	ctx.r11.s64 = ctx.r10.s64 + -19832;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACB78"))) PPC_WEAK_FUNC(sub_830ACB78);
PPC_FUNC_IMPL(__imp__sub_830ACB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-19832
	ctx.r6.s64 = ctx.r11.s64 + -19832;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_830ACB88:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_830ACB90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq cr6,0x830acbb4
	if (cr6.eq) goto loc_830ACBB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830acb90
	if (cr6.eq) goto loc_830ACB90;
loc_830ACBB4:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x830acbdc
	if (cr6.eq) goto loc_830ACBDC;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r11,r6,4488
	ctx.r11.s64 = ctx.r6.s64 + 4488;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// blt cr6,0x830acb88
	if (cr6.lt) goto loc_830ACB88;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_830ACBDC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ACBE4"))) PPC_WEAK_FUNC(sub_830ACBE4);
PPC_FUNC_IMPL(__imp__sub_830ACBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ACBE8"))) PPC_WEAK_FUNC(sub_830ACBE8);
PPC_FUNC_IMPL(__imp__sub_830ACBE8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830a6508
	ctx.lr = 0x830ACC04;
	sub_830A6508(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-15124
	ctx.r9.s64 = ctx.r11.s64 + -15124;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
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

__attribute__((alias("__imp__sub_830ACC30"))) PPC_WEAK_FUNC(sub_830ACC30);
PPC_FUNC_IMPL(__imp__sub_830ACC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r10,r11,-15124
	ctx.r10.s64 = ctx.r11.s64 + -15124;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830a6558
	sub_830A6558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ACC40"))) PPC_WEAK_FUNC(sub_830ACC40);
PPC_FUNC_IMPL(__imp__sub_830ACC40) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x830a7680
	ctx.lr = 0x830ACC58;
	sub_830A7680(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830a7708
	ctx.lr = 0x830ACC60;
	sub_830A7708(ctx, base);
	// addi r1,r1,96
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

