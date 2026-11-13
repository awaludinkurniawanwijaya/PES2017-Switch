#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832BC3B0"))) PPC_WEAK_FUNC(sub_832BC3B0);
PPC_FUNC_IMPL(__imp__sub_832BC3B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832BC3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r31,r3,0,0,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r10,11(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r28,r31,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r31.s64;
	// srw r11,r28,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r10.u8 & 0x3F));
	// lwsync 
	// srw r7,r8,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832bc424
	if (cr6.eq) goto loc_832BC424;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwsync 
	// subfic r9,r11,31
	xer.ca = ctx.r11.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r11.s64;
	// lbz r8,11(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// slw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	// slw r11,r5,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subf r28,r31,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_832BC424:
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bbec0
	ctx.lr = 0x832BC430;
	sub_832BBEC0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r8,6,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 | ctx.r8.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// addi r3,r10,-31
	ctx.r3.s64 = ctx.r10.s64 + -31;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rldicr r10,r3,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u64, 0) & 0x8000000000000000;
	// srd r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// lwz r8,132(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// andc r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// stw r6,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r6.u32);
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// subfic r5,r11,32
	xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// rotlw r4,r28,r5
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r28.u32, ctx.r5.u8 & 0x1F);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x832bc4c8
	if (!cr6.lt) goto loc_832BC4C8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x832bc4dc
	if (cr6.lt) goto loc_832BC4DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bbd88
	ctx.lr = 0x832BC4B0;
	sub_832BBD88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bc4dc
	if (cr6.lt) goto loc_832BC4DC;
	// lbz r11,11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// sld r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r11.u8 & 0x7F));
	// b 0x832bc4e0
	goto loc_832BC4E0;
loc_832BC4C8:
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// lis r3,-32757
	ctx.r3.s64 = -2146762752;
	// blt cr6,0x832bc528
	if (cr6.lt) goto loc_832BC528;
	// ori r3,r3,9350
	ctx.r3.u64 = ctx.r3.u64 | 9350;
loc_832BC4DC:
	// rldicr r3,r3,32,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
loc_832BC4E0:
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// srw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// lwz r6,132(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r5,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r5.u32);
	// lwsync 
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r4,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832BC528:
	// ori r3,r3,9348
	ctx.r3.u64 = ctx.r3.u64 | 9348;
	// b 0x832bc4dc
	goto loc_832BC4DC;
}

__attribute__((alias("__imp__sub_832BC530"))) PPC_WEAK_FUNC(sub_832BC530);
PPC_FUNC_IMPL(__imp__sub_832BC530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832BC538;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x832bbec0
	ctx.lr = 0x832BC54C;
	sub_832BBEC0(ctx, base);
	// addi r11,r28,124
	ctx.r11.s64 = ctx.r28.s64 + 124;
	// lwz r31,128(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// stw r28,128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 128, ctx.r28.u32);
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r10.u32);
	// lwsync 
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r24.u32);
	// bl 0x832bbec0
	ctx.lr = 0x832BC578;
	sub_832BBEC0(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x832bc670
	if (cr6.eq) goto loc_832BC670;
	// li r26,1
	ctx.r26.s64 = 1;
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
loc_832BC58C:
	// addi r11,r10,-28
	ctx.r11.s64 = ctx.r10.s64 + -28;
	// lwz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r31,r11,0,0,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// subf r6,r30,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r30.s64;
	// rlwinm r5,r8,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r6,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// subf r3,r7,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// subf r9,r31,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r31.s64;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// addi r7,r10,-31
	ctx.r7.s64 = ctx.r10.s64 + -31;
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicr r5,r7,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0x8000000000000000;
	// srd r4,r5,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r6.u8 & 0x7F));
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// andc r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// lbz r8,11(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// srw r23,r9,r8
	ctx.r23.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x832bbd88
	ctx.lr = 0x832BC60C;
	sub_832BBD88(ctx, base);
	// slw r11,r26,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r3.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// slw r4,r26,r23
	ctx.r4.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r23.u8 & 0x3F));
	// slw r3,r7,r23
	ctx.r3.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r23.u8 & 0x3F));
	// andc r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 & ~ctx.r3.u64;
	// andc r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// lbz r8,10(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rotlwi r11,r8,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srw r7,r25,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r8.u8 & 0x3F));
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lwz r5,132(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// or r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 | ctx.r5.u64;
	// stw r4,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r4.u32);
	// bne cr6,0x832bc58c
	if (!cr6.eq) goto loc_832BC58C;
loc_832BC670:
	// lwsync 
	// stw r24,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BC680"))) PPC_WEAK_FUNC(sub_832BC680);
PPC_FUNC_IMPL(__imp__sub_832BC680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832BC688;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r4,1344
	ctx.r31.s64 = ctx.r4.s64 + 1344;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,7
	ctx.r30.s64 = 7;
loc_832BC69C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bc530
	ctx.lr = 0x832BC6A8;
	sub_832BC530(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,192
	ctx.r29.s64 = ctx.r29.s64 + 192;
	// bne 0x832bc69c
	if (!cr0.eq) goto loc_832BC69C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bbec0
	ctx.lr = 0x832BC6BC;
	sub_832BBEC0(ctx, base);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r31,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r31.u32);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lwsync 
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r8,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r8.u32);
	// beq cr6,0x832bc704
	if (cr6.eq) goto loc_832BC704;
loc_832BC6E8:
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832bd7f8
	ctx.lr = 0x832BC6F8;
	sub_832BD7F8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bne cr6,0x832bc6e8
	if (!cr6.eq) goto loc_832BC6E8;
loc_832BC704:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BC70C"))) PPC_WEAK_FUNC(sub_832BC70C);
PPC_FUNC_IMPL(__imp__sub_832BC70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BC710"))) PPC_WEAK_FUNC(sub_832BC710);
PPC_FUNC_IMPL(__imp__sub_832BC710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832BC718;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bl 0x832bd3c0
	ctx.lr = 0x832BC738;
	sub_832BD3C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bc7e0
	if (!cr6.eq) goto loc_832BC7E0;
loc_832BC740:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832bc7dc
	if (!cr6.eq) goto loc_832BC7DC;
	// addi r31,r27,1344
	ctx.r31.s64 = ctx.r27.s64 + 1344;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r30,7
	ctx.r30.s64 = 7;
loc_832BC758:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bc530
	ctx.lr = 0x832BC764;
	sub_832BC530(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,192
	ctx.r29.s64 = ctx.r29.s64 + 192;
	// bne 0x832bc758
	if (!cr0.eq) goto loc_832BC758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bbec0
	ctx.lr = 0x832BC778;
	sub_832BBEC0(ctx, base);
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r31,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r31.u32);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lwsync 
	// stw r25,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r25.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x832bc7bc
	if (cr6.eq) goto loc_832BC7BC;
loc_832BC7A0:
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832bd7f8
	ctx.lr = 0x832BC7B0;
	sub_832BD7F8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bne cr6,0x832bc7a0
	if (!cr6.eq) goto loc_832BC7A0;
loc_832BC7BC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x832bd3c0
	ctx.lr = 0x832BC7CC;
	sub_832BD3C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bc740
	if (cr6.eq) goto loc_832BC740;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BC7DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832BC7E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BC7E8"))) PPC_WEAK_FUNC(sub_832BC7E8);
PPC_FUNC_IMPL(__imp__sub_832BC7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,3968
	cr6.compare<uint32_t>(ctx.r3.u32, 3968, xer);
	// bgt cr6,0x832bc840
	if (cr6.gt) goto loc_832BC840;
	// cmplwi cr6,r3,120
	cr6.compare<uint32_t>(ctx.r3.u32, 120, xer);
	// ble cr6,0x832bc80c
	if (!cr6.gt) goto loc_832BC80C;
	// addi r11,r3,127
	ctx.r11.s64 = ctx.r3.s64 + 127;
	// rldicl r10,r11,25,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 25) & 0x1FFFFFFFFFFFFFF;
	// rldicr r10,r10,0,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFF00000000;
	// ori r3,r10,7
	ctx.r3.u64 = ctx.r10.u64 | 7;
	// blr 
	return;
loc_832BC80C:
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// ble cr6,0x832bc82c
	if (!cr6.gt) goto loc_832BC82C;
	// addi r10,r3,7
	ctx.r10.s64 = ctx.r3.s64 + 7;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrldi r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// blr 
	return;
loc_832BC82C:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r3,r11,32
	ctx.r3.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r3,r10,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// blr 
	return;
loc_832BC840:
	// addi r11,r3,4095
	ctx.r11.s64 = ctx.r3.s64 + 4095;
	// rldicl r10,r11,20,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 20) & 0xFFFFFFFFFFFFF;
	// rldicr r10,r10,0,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFF00000000;
	// ori r3,r10,12
	ctx.r3.u64 = ctx.r10.u64 | 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BC854"))) PPC_WEAK_FUNC(sub_832BC854);
PPC_FUNC_IMPL(__imp__sub_832BC854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BC858"))) PPC_WEAK_FUNC(sub_832BC858);
PPC_FUNC_IMPL(__imp__sub_832BC858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r10,r10,27
	xer.ca = ctx.r10.u32 <= 27;
	ctx.r10.s64 = 27 - ctx.r10.s64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// bge cr6,0x832bc87c
	if (!cr6.lt) goto loc_832BC87C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_832BC87C:
	// subfic r11,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r10.s64;
	// rotlw r9,r3,r11
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, ctx.r11.u8 & 0x1F);
	// rlwnm r11,r3,r11,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), ctx.r11.u8 & 0x1F) & 0x1F;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x832bc894
	if (cr6.eq) goto loc_832BC894;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_832BC894:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832bc8b4
	if (!cr6.eq) goto loc_832BC8B4;
loc_832BC8A0:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832bc8a0
	if (cr6.eq) goto loc_832BC8A0;
loc_832BC8B4:
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bge cr6,0x832bc8c8
	if (!cr6.lt) goto loc_832BC8C8;
	// clrldi r3,r10,32
	ctx.r3.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r3,r11,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// blr 
	return;
loc_832BC8C8:
	// addi r10,r10,-7
	ctx.r10.s64 = ctx.r10.s64 + -7;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r8,31
	cr6.compare<uint32_t>(ctx.r8.u32, 31, xer);
	// bgt cr6,0x832bc8f4
	if (cr6.gt) goto loc_832BC8F4;
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// ori r3,r11,7
	ctx.r3.u64 = ctx.r11.u64 | 7;
	// blr 
	return;
loc_832BC8F4:
	// addi r11,r3,4095
	ctx.r11.s64 = ctx.r3.s64 + 4095;
	// rldicl r10,r11,20,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 20) & 0xFFFFFFFFFFFFF;
	// rldicr r10,r10,0,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFF00000000;
	// ori r3,r10,12
	ctx.r3.u64 = ctx.r10.u64 | 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BC908"))) PPC_WEAK_FUNC(sub_832BC908);
PPC_FUNC_IMPL(__imp__sub_832BC908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832BC910;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,7
	cr6.compare<uint32_t>(ctx.r6.u32, 7, xer);
	// bne cr6,0x832bc994
	if (!cr6.eq) goto loc_832BC994;
	// addi r27,r5,1344
	ctx.r27.s64 = ctx.r5.s64 + 1344;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x832bbf50
	ctx.lr = 0x832BC940;
	sub_832BBF50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bca28
	if (!cr6.eq) goto loc_832BCA28;
loc_832BC948:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832bc988
	if (!cr6.eq) goto loc_832BC988;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bc680
	ctx.lr = 0x832BC960;
	sub_832BC680(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x832bbf50
	ctx.lr = 0x832BC978;
	sub_832BBF50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bc948
	if (cr6.eq) goto loc_832BC948;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BC988:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BC994:
	// cmplwi cr6,r6,12
	cr6.compare<uint32_t>(ctx.r6.u32, 12, xer);
	// beq cr6,0x832bca18
	if (cr6.eq) goto loc_832BCA18;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r30,1344
	ctx.r27.s64 = ctx.r30.s64 + 1344;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r26,r11,r30
	ctx.r26.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x832bc090
	ctx.lr = 0x832BC9CC;
	sub_832BC090(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bca28
	if (!cr6.eq) goto loc_832BCA28;
loc_832BC9D4:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832bc988
	if (!cr6.eq) goto loc_832BC988;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bc680
	ctx.lr = 0x832BC9EC;
	sub_832BC680(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bl 0x832bc090
	ctx.lr = 0x832BCA08;
	sub_832BC090(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bc9d4
	if (cr6.eq) goto loc_832BC9D4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCA18:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bc710
	ctx.lr = 0x832BCA28;
	sub_832BC710(ctx, base);
loc_832BCA28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BCA30"))) PPC_WEAK_FUNC(sub_832BCA30);
PPC_FUNC_IMPL(__imp__sub_832BCA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832BCA38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,132
	ctx.r31.s64 = ctx.r3.s64 + 132;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// li r28,10
	ctx.r28.s64 = 10;
loc_832BCA4C:
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r9,r31,-132
	ctx.r9.s64 = ctx.r31.s64 + -132;
	// addi r11,r31,-132
	ctx.r11.s64 = ctx.r31.s64 + -132;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832BCA5C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832bca5c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BCA5C;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// sth r30,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r30.u16);
	// bl 0x82aabcb0
	ctx.lr = 0x832BCA74;
	sub_82AABCB0(ctx, base);
	// subfic r10,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r3.s64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// and r7,r8,r28
	ctx.r7.u64 = ctx.r8.u64 & ctx.r28.u64;
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// addi r31,r31,192
	ctx.r31.s64 = ctx.r31.s64 + 192;
	// blt cr6,0x832bca4c
	if (cr6.lt) goto loc_832BCA4C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BCA9C"))) PPC_WEAK_FUNC(sub_832BCA9C);
PPC_FUNC_IMPL(__imp__sub_832BCA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BCAA0"))) PPC_WEAK_FUNC(sub_832BCAA0);
PPC_FUNC_IMPL(__imp__sub_832BCAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,3968
	cr6.compare<uint32_t>(ctx.r11.u32, 3968, xer);
	// bgt cr6,0x832bcafc
	if (cr6.gt) goto loc_832BCAFC;
	// cmplwi cr6,r11,120
	cr6.compare<uint32_t>(ctx.r11.u32, 120, xer);
	// ble cr6,0x832bcac8
	if (!cr6.gt) goto loc_832BCAC8;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rldicl r10,r11,25,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 25) & 0x1FFFFFFFFFFFFFF;
	// rldicr r10,r10,0,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFF00000000;
	// ori r11,r10,7
	ctx.r11.u64 = ctx.r10.u64 | 7;
	// b 0x832bcb0c
	goto loc_832BCB0C;
loc_832BCAC8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// ble cr6,0x832bcae8
	if (!cr6.gt) goto loc_832BCAE8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// b 0x832bcb0c
	goto loc_832BCB0C;
loc_832BCAE8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// b 0x832bcb0c
	goto loc_832BCB0C;
loc_832BCAFC:
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rldicl r10,r11,20,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 20) & 0xFFFFFFFFFFFFF;
	// rldicr r10,r10,0,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFF00000000;
	// ori r11,r10,12
	ctx.r11.u64 = ctx.r10.u64 | 12;
loc_832BCB0C:
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rldicl r7,r11,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// slw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// b 0x832bc908
	sub_832BC908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BCB24"))) PPC_WEAK_FUNC(sub_832BCB24);
PPC_FUNC_IMPL(__imp__sub_832BCB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BCB28"))) PPC_WEAK_FUNC(sub_832BCB28);
PPC_FUNC_IMPL(__imp__sub_832BCB28) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x832bc858
	ctx.lr = 0x832BCB50;
	sub_832BC858(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rldicl r7,r3,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// slw r10,r7,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bc908
	ctx.lr = 0x832BCB70;
	sub_832BC908(ctx, base);
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

__attribute__((alias("__imp__sub_832BCB88"))) PPC_WEAK_FUNC(sub_832BCB88);
PPC_FUNC_IMPL(__imp__sub_832BCB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// subf r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	// lwz r9,44(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-64
	ctx.r10.s64 = ctx.r10.s64 + -64;
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x832bcbc4
	if (cr6.lt) goto loc_832BCBC4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832bcbb4
	if (!cr6.eq) goto loc_832BCBB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832BCBB4:
	// lis r3,-32757
	ctx.r3.s64 = -2146762752;
	// ori r3,r3,9349
	ctx.r3.u64 = ctx.r3.u64 | 9349;
	// rldicr r3,r3,32,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// blr 
	return;
loc_832BCBC4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwsync 
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x832bcbec
	if (!cr6.eq) goto loc_832BCBEC;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x832bc3b0
	sub_832BC3B0(ctx, base);
	return;
loc_832BCBEC:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x832bcc00
	if (!cr6.eq) goto loc_832BCC00;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x832bd650
	sub_832BD650(ctx, base);
	return;
loc_832BCC00:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,37443
	ctx.r3.u64 = ctx.r3.u64 | 37443;
	// rldicr r3,r3,33,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 33) & 0xFFFFFFFE00000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BCC10"))) PPC_WEAK_FUNC(sub_832BCC10);
PPC_FUNC_IMPL(__imp__sub_832BCC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x832bcd08
	if (!cr6.lt) goto loc_832BCD08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwsync 
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x832bccfc
	if (!cr6.eq) goto loc_832BCCFC;
	// rlwinm r11,r4,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// subf r7,r10,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// lwsync 
	// srw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bccb0
	if (cr6.eq) goto loc_832BCCB0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwsync 
	// subfic r8,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r10.s64;
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// slw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subf r3,r5,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r5.s64;
	// slw r10,r3,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_832BCCB0:
	// lbz r8,11(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// subfic r6,r8,32
	xer.ca = ctx.r8.u32 <= 32;
	ctx.r6.s64 = 32 - ctx.r8.s64;
	// rotlw r10,r9,r6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, ctx.r6.u8 & 0x1F);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x832bcd08
	if (!cr6.lt) goto loc_832BCD08;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x832bcd08
	if (cr6.lt) goto loc_832BCD08;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// slw. r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x832bcd08
	if (!cr0.lt) goto loc_832BCD08;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x832bcd08
	if (cr6.gt) goto loc_832BCD08;
	// slw r3,r11,r8
	ctx.r3.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// blr 
	return;
loc_832BCCFC:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// rlwinm r3,r11,10,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFF000;
	// beqlr cr6
	if (cr6.eq) return;
loc_832BCD08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BCD10"))) PPC_WEAK_FUNC(sub_832BCD10);
PPC_FUNC_IMPL(__imp__sub_832BCD10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832BCD18;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832bcd48
	if (!cr6.eq) goto loc_832BCD48;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x832bcaa0
	ctx.lr = 0x832BCD40;
	sub_832BCAA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCD48:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bcc10
	ctx.lr = 0x832BCD54;
	sub_832BCC10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bcd68
	if (!cr6.eq) goto loc_832BCD68;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCD68:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bc7e8
	ctx.lr = 0x832BCD70;
	sub_832BC7E8(ctx, base);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rldicl r7,r3,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// slw r30,r7,r6
	ctx.r30.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x832bcd90
	if (!cr6.eq) goto loc_832BCD90;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCD90:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832bc908
	ctx.lr = 0x832BCDA0;
	sub_832BC908(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bcdc4
	if (!cr6.eq) goto loc_832BCDC4;
	// subfc r11,r30,r28
	xer.ca = ctx.r28.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// addze r10,r30
	temp.s64 = ctx.r30.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// and r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 & ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCDC4:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// blt cr6,0x832bcdd4
	if (cr6.lt) goto loc_832BCDD4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_832BCDD4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832BCDE0;
	sub_83293EC8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832bcb88
	ctx.lr = 0x832BCDF4;
	sub_832BCB88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BCE00"))) PPC_WEAK_FUNC(sub_832BCE00);
PPC_FUNC_IMPL(__imp__sub_832BCE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832BCE08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832bce5c
	if (!cr6.eq) goto loc_832BCE5C;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x832bc858
	ctx.lr = 0x832BCE38;
	sub_832BC858(ctx, base);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rldicl r7,r3,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// slw r11,r7,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832bc908
	ctx.lr = 0x832BCE54;
	sub_832BC908(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCE5C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bcc10
	ctx.lr = 0x832BCE68;
	sub_832BCC10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bce7c
	if (!cr6.eq) goto loc_832BCE7C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCE7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bc858
	ctx.lr = 0x832BCE88;
	sub_832BC858(ctx, base);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// rldicl r7,r3,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// slw r31,r7,r6
	ctx.r31.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x832bcea8
	if (!cr6.eq) goto loc_832BCEA8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCEA8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832bc908
	ctx.lr = 0x832BCEB8;
	sub_832BC908(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bcedc
	if (!cr6.eq) goto loc_832BCEDC;
	// subfc r11,r31,r28
	xer.ca = ctx.r28.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// addze r10,r31
	temp.s64 = ctx.r31.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// and r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 & ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BCEDC:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// blt cr6,0x832bceec
	if (cr6.lt) goto loc_832BCEEC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_832BCEEC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832BCEF8;
	sub_83293EC8(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832bcb88
	ctx.lr = 0x832BCF0C;
	sub_832BCB88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BCF18"))) PPC_WEAK_FUNC(sub_832BCF18);
PPC_FUNC_IMPL(__imp__sub_832BCF18) {
	PPC_FUNC_PROLOGUE();
	// b 0x832bc680
	sub_832BC680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BCF1C"))) PPC_WEAK_FUNC(sub_832BCF1C);
PPC_FUNC_IMPL(__imp__sub_832BCF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BCF20"))) PPC_WEAK_FUNC(sub_832BCF20);
PPC_FUNC_IMPL(__imp__sub_832BCF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BCF28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
loc_832BCF3C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832bcf3c
	if (!cr0.eq) goto loc_832BCF3C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bcfa4
	if (cr6.eq) goto loc_832BCFA4;
loc_832BCF64:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x832bcf7c
	if (!cr6.eq) goto loc_832BCF7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b2e08
	ctx.lr = 0x832BCF78;
	sub_832B2E08(ctx, base);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
loc_832BCF7C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832bcf7c
	if (!cr0.eq) goto loc_832BCF7C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832bcf64
	if (!cr6.eq) goto loc_832BCF64;
loc_832BCFA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BCFAC"))) PPC_WEAK_FUNC(sub_832BCFAC);
PPC_FUNC_IMPL(__imp__sub_832BCFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BCFB0"))) PPC_WEAK_FUNC(sub_832BCFB0);
PPC_FUNC_IMPL(__imp__sub_832BCFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// beq cr6,0x832bd0a0
	if (cr6.eq) goto loc_832BD0A0;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
loc_832BCFE0:
	// and r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r31,r31,0,0,0
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832bd00c
	if (cr6.eq) goto loc_832BD00C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// b 0x832bd084
	goto loc_832BD084;
loc_832BD00C:
	// rlwinm r31,r9,0,0,0
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832bd034
	if (cr6.eq) goto loc_832BD034;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// addi r11,r11,91
	ctx.r11.s64 = ctx.r11.s64 + 91;
	// b 0x832bd088
	goto loc_832BD088;
loc_832BD034:
	// rlwinm r31,r8,0,0,0
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832bd058
	if (cr6.eq) goto loc_832BD058;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// addi r11,r11,93
	ctx.r11.s64 = ctx.r11.s64 + 93;
	// b 0x832bd084
	goto loc_832BD084;
loc_832BD058:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832bd080
	if (cr6.eq) goto loc_832BD080;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// b 0x832bd088
	goto loc_832BD088;
loc_832BD080:
	// li r11,45
	ctx.r11.s64 = 45;
loc_832BD084:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_832BD088:
	// stbx r11,r6,r4
	PPC_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r11.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x832bcfe0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BCFE0;
loc_832BD0A0:
	// stbx r5,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BD0AC"))) PPC_WEAK_FUNC(sub_832BD0AC);
PPC_FUNC_IMPL(__imp__sub_832BD0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD0B0"))) PPC_WEAK_FUNC(sub_832BD0B0);
PPC_FUNC_IMPL(__imp__sub_832BD0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x832bd0dc
	if (cr6.eq) goto loc_832BD0DC;
loc_832BD0C0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// ble cr6,0x832bd0e4
	if (!cr6.gt) goto loc_832BD0E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x832bd0c0
	if (!cr6.eq) goto loc_832BD0C0;
loc_832BD0DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832BD0E4:
	// subf r9,r8,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf. r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r9,r9,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r4,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// beq 0x832bd124
	if (cr0.eq) goto loc_832BD124;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// b 0x832bd134
	goto loc_832BD134;
loc_832BD124:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_832BD134:
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// beq cr6,0x832bd150
	if (cr6.eq) goto loc_832BD150;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,3
	ctx.r10.s64 = 3;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_832BD150:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,34(r8)
	PPC_STORE_U8(ctx.r8.u32 + 34, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BD15C"))) PPC_WEAK_FUNC(sub_832BD15C);
PPC_FUNC_IMPL(__imp__sub_832BD15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD160"))) PPC_WEAK_FUNC(sub_832BD160);
PPC_FUNC_IMPL(__imp__sub_832BD160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832bd218
	if (!cr6.eq) goto loc_832BD218;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r4,30
	ctx.r8.u64 = ctx.r4.u32 & 0x3;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832bd1b8
	if (cr6.eq) goto loc_832BD1B8;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stb r9,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r9.u8);
	// blr 
	return;
loc_832BD1B8:
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_832BD1D0:
	// rlwinm r11,r7,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stb r9,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r9.u8);
	// blr 
	return;
loc_832BD218:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r10,30
	ctx.r8.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832bd1d0
	if (cr6.eq) goto loc_832BD1D0;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r5,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// stb r9,34(r3)
	PPC_STORE_U8(ctx.r3.u32 + 34, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BD258"))) PPC_WEAK_FUNC(sub_832BD258);
PPC_FUNC_IMPL(__imp__sub_832BD258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BD260;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,4095
	ctx.r11.s64 = ctx.r3.s64 + 4095;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r29,r11,0,0,19
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwinm r30,r8,20,12,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFFFF;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x832bd290
	if (cr6.lt) goto loc_832BD290;
	// lis r30,16383
	ctx.r30.s64 = 1073676288;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
loc_832BD290:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bge cr6,0x832bd2c8
	if (!cr6.lt) goto loc_832BD2C8;
	// addi r31,r29,-64
	ctx.r31.s64 = ctx.r29.s64 + -64;
loc_832BD2A4:
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// ble cr6,0x832bd2d4
	if (!cr6.gt) goto loc_832BD2D4;
	// addi r29,r29,4096
	ctx.r29.s64 = ctx.r29.s64 + 4096;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x832bd2a4
	if (cr6.lt) goto loc_832BD2A4;
loc_832BD2C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BD2D4:
	// rlwinm r27,r30,12,0,19
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x83294018
	ctx.lr = 0x832BD2E8;
	sub_83294018(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// bl 0x82aabcb0
	ctx.lr = 0x832BD2F4;
	sub_82AABCB0(ctx, base);
	// subfic r11,r3,1
	xer.ca = ctx.r3.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r3.s64;
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// sth r6,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r6.u16);
	// stb r5,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r5.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// blt cr6,0x832bd370
	if (cr6.lt) goto loc_832BD370;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832BD354:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// stw r8,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// stw r8,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r8.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x832bd354
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BD354;
loc_832BD370:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832bd388
	if (cr6.eq) goto loc_832BD388;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_832BD380:
	// stwu r8,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832bd380
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BD380;
loc_832BD388:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r28.u32);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD3BC"))) PPC_WEAK_FUNC(sub_832BD3BC);
PPC_FUNC_IMPL(__imp__sub_832BD3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD3C0"))) PPC_WEAK_FUNC(sub_832BD3C0);
PPC_FUNC_IMPL(__imp__sub_832BD3C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832BD3C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
	// bl 0x832bcf20
	ctx.lr = 0x832BD3E0;
	sub_832BCF20(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x832bd460
	if (cr6.gt) goto loc_832BD460;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x832bd41c
	if (cr6.eq) goto loc_832BD41C;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
loc_832BD41C:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi r9,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r9,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// beq cr6,0x832bd44c
	if (cr6.eq) goto loc_832BD44C;
	// rlwinm r9,r30,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
loc_832BD44C:
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stb r28,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r28.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832bd488
	if (!cr6.eq) goto loc_832BD488;
loc_832BD460:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bd0b0
	ctx.lr = 0x832BD474;
	sub_832BD0B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bd488
	if (!cr6.eq) goto loc_832BD488;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bd0b0
	ctx.lr = 0x832BD488;
	sub_832BD0B0(ctx, base);
loc_832BD488:
	// lwsync 
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD498"))) PPC_WEAK_FUNC(sub_832BD498);
PPC_FUNC_IMPL(__imp__sub_832BD498) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832bcf20
	ctx.lr = 0x832BD4B0;
	sub_832BCF20(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x832bd514
	if (cr6.lt) goto loc_832BD514;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// srawi r6,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// rlwinm r9,r6,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r3,r9,64
	ctx.r3.s64 = ctx.r9.s64 + 64;
	// beq 0x832bd504
	if (cr0.eq) goto loc_832BD504;
	// rlwinm r9,r10,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// subf r6,r9,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r9.s64;
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
loc_832BD504:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r7,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r7.u8);
	// bne cr6,0x832bd5d0
	if (!cr6.eq) goto loc_832BD5D0;
loc_832BD514:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x832bd5a0
	if (cr6.eq) goto loc_832BD5A0;
loc_832BD524:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x832bd544
	if (!cr6.lt) goto loc_832BD544;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x832bd524
	if (!cr6.eq) goto loc_832BD524;
	// b 0x832bd5a0
	goto loc_832BD5A0;
loc_832BD544:
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r9,r9,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r5.s64;
	// beq 0x832bd580
	if (cr0.eq) goto loc_832BD580;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// b 0x832bd590
	goto loc_832BD590;
loc_832BD580:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_832BD590:
	// stw r8,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r8.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r7,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r7.u8);
	// bne cr6,0x832bd5d0
	if (!cr6.eq) goto loc_832BD5D0;
loc_832BD5A0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x832bd5cc
	if (cr6.eq) goto loc_832BD5CC;
loc_832BD5B0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x832bd5ec
	if (!cr6.lt) goto loc_832BD5EC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x832bd5b0
	if (!cr6.eq) goto loc_832BD5B0;
loc_832BD5CC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
loc_832BD5D0:
	// lwsync 
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
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
loc_832BD5EC:
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,-64
	ctx.r9.s64 = ctx.r9.s64 + -64;
	// rlwinm r9,r9,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r5.s64;
	// beq 0x832bd630
	if (cr0.eq) goto loc_832BD630;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r8.u32);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// stb r7,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r7.u8);
	// b 0x832bd5d0
	goto loc_832BD5D0;
loc_832BD630:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r8,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r8.u32);
	// stb r7,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r7.u8);
	// b 0x832bd5d0
	goto loc_832BD5D0;
}

__attribute__((alias("__imp__sub_832BD64C"))) PPC_WEAK_FUNC(sub_832BD64C);
PPC_FUNC_IMPL(__imp__sub_832BD64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD650"))) PPC_WEAK_FUNC(sub_832BD650);
PPC_FUNC_IMPL(__imp__sub_832BD650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BD658;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,20
	ctx.r11.u64 = ctx.r5.u32 & 0xFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bd688
	if (cr6.eq) goto loc_832BD688;
	// lis r3,8194
	ctx.r3.s64 = 537001984;
	// ori r3,r3,51489
	ctx.r3.u64 = ctx.r3.u64 | 51489;
	// rldicr r3,r3,34,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 34) & 0xFFFFFFFC00000000;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BD688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bcf20
	ctx.lr = 0x832BD690;
	sub_832BCF20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x832bd6c0
	if (cr6.eq) goto loc_832BD6C0;
	// lwsync 
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,37443
	ctx.r3.u64 = ctx.r3.u64 | 37443;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// rldicr r3,r3,33,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 33) & 0xFFFFFFFE00000000;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BD6C0:
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r27,r11,30,2,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832bd750
	if (cr6.lt) goto loc_832BD750;
	// bne cr6,0x832bd748
	if (!cr6.eq) goto loc_832BD748;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832bd72c
	if (!cr6.eq) goto loc_832BD72C;
	// rlwinm r11,r9,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
loc_832BD72C:
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r28,34(r30)
	PPC_STORE_U8(ctx.r30.u32 + 34, ctx.r28.u8);
	// b 0x832bd7dc
	goto loc_832BD7DC;
loc_832BD748:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// b 0x832bd7c8
	goto loc_832BD7C8;
loc_832BD750:
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// bne cr6,0x832bd7c4
	if (!cr6.eq) goto loc_832BD7C4;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r9,r27,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r6,r7,30
	ctx.r6.u64 = ctx.r7.u32 & 0x3;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832bd794
	if (!cr6.eq) goto loc_832BD794;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
loc_832BD794:
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// srawi r8,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// srawi r7,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// rlwinm r9,r7,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// add r6,r9,r30
	ctx.r6.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stb r28,34(r30)
	PPC_STORE_U8(ctx.r30.u32 + 34, ctx.r28.u8);
	// b 0x832bd7dc
	goto loc_832BD7DC;
loc_832BD7C4:
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
loc_832BD7C8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bd160
	ctx.lr = 0x832BD7DC;
	sub_832BD160(ctx, base);
loc_832BD7DC:
	// lwsync 
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// rldimi r3,r27,12,20
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r27.u64, 12) & 0xFFFFFFFF000) | (ctx.r3.u64 & 0xFFFFF00000000FFF);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD7F4"))) PPC_WEAK_FUNC(sub_832BD7F4);
PPC_FUNC_IMPL(__imp__sub_832BD7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BD7F8"))) PPC_WEAK_FUNC(sub_832BD7F8);
PPC_FUNC_IMPL(__imp__sub_832BD7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BD800;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832bcf20
	ctx.lr = 0x832BD810;
	sub_832BCF20(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r9,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x832bd8bc
	if (cr6.lt) goto loc_832BD8BC;
	// bne cr6,0x832bd8b4
	if (!cr6.eq) goto loc_832BD8B4;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832bd88c
	if (!cr6.eq) goto loc_832BD88C;
	// rlwinm r11,r9,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
loc_832BD88C:
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r29,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r29.u8);
	// lwsync 
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832BD8B4:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// b 0x832bd938
	goto loc_832BD938;
loc_832BD8BC:
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x832bd934
	if (!cr6.eq) goto loc_832BD934;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832bd8f8
	if (!cr6.eq) goto loc_832BD8F8;
	// lwz r9,4096(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4096);
	// lwz r8,4100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4100);
	// lwz r7,4104(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4104);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
loc_832BD8F8:
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// srawi r8,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// srawi r7,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// rlwinm r9,r7,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r8,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r8.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stb r29,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r29.u8);
	// lwsync 
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832BD934:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
loc_832BD938:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bd160
	ctx.lr = 0x832BD948;
	sub_832BD160(ctx, base);
	// lwsync 
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BD958"))) PPC_WEAK_FUNC(sub_832BD958);
PPC_FUNC_IMPL(__imp__sub_832BD958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832BD960;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r31,r3,64
	ctx.r31.s64 = ctx.r3.s64 + 64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r11,r6,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832BD994;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// bge cr6,0x832bdadc
	if (!cr6.lt) goto loc_832BDADC;
loc_832BD99C:
	// subf r11,r29,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r29.s64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r9.s64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x832bdaa4
	if (cr6.lt) goto loc_832BDAA4;
	// beq cr6,0x832bda64
	if (cr6.eq) goto loc_832BDA64;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x832bd9d8
	if (cr6.lt) goto loc_832BD9D8;
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// b 0x832bdad4
	goto loc_832BDAD4;
loc_832BD9D8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832BD9F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
loc_832BD9FC:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bda4c
	if (cr6.eq) goto loc_832BDA4C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwsync 
	// subfic r10,r30,31
	xer.ca = ctx.r30.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r30.s64;
	// lbz r9,11(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// slw r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// subf r4,r5,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r5.s64;
	// li r5,4
	ctx.r5.s64 = 4;
	// slw r10,r4,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x832BDA4C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832BDA4C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r26,r26,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(ctx.r30.u32, 32, xer);
	// blt cr6,0x832bd9fc
	if (cr6.lt) goto loc_832BD9FC;
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// b 0x832bdad4
	goto loc_832BDAD4;
loc_832BDA64:
	// rlwinm r30,r11,30,2,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832BDA84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832bdacc
	if (!cr6.eq) goto loc_832BDACC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-20504
	ctx.r5.s64 = ctx.r11.s64 + -20504;
	// addi r3,r10,-20528
	ctx.r3.s64 = ctx.r10.s64 + -20528;
	// li r4,646
	ctx.r4.s64 = 646;
	// bl 0x83298458
	ctx.lr = 0x832BDAA4;
	sub_83298458(ctx, base);
loc_832BDAA4:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832BDAC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832bdb00
	if (cr6.eq) goto loc_832BDB00;
loc_832BDACC:
	// rlwinm r11,r30,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_832BDAD4:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, xer);
	// blt cr6,0x832bd99c
	if (cr6.lt) goto loc_832BD99C;
loc_832BDADC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// li r5,6
	ctx.r5.s64 = 6;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x832BDAF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_832BDB00:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-20504
	ctx.r5.s64 = ctx.r11.s64 + -20504;
	// addi r3,r10,-20528
	ctx.r3.s64 = ctx.r10.s64 + -20528;
	// li r4,637
	ctx.r4.s64 = 637;
	// bl 0x83298458
	ctx.lr = 0x832BDB18;
	sub_83298458(ctx, base);
}

__attribute__((alias("__imp__sub_832BDB18"))) PPC_WEAK_FUNC(sub_832BDB18);
PPC_FUNC_IMPL(__imp__sub_832BDB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bgt cr6,0x832bdc8c
	if (cr6.gt) goto loc_832BDC8C;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832bdb74
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDB74;
	// bdzf 4*cr6+eq,0x832bdb90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDB90;
	// bdzf 4*cr6+eq,0x832bdc8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDC8C;
	// bdzf 4*cr6+eq,0x832bdb90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDB90;
	// bdzf 4*cr6+eq,0x832bdc48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDC48;
	// bne cr6,0x832bdc74
	if (!cr6.eq) goto loc_832BDC74;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r6,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// ble cr6,0x832bdc8c
	if (!cr6.gt) goto loc_832BDC8C;
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832BDB74:
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r10,r6,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832BDB90:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// lbz r5,9(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lbz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// lbz r31,11(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// lwz r30,16(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lis r12,-3277
	ctx.r12.s64 = -214761472;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r3,r5,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,13107
	ctx.r12.s64 = 858980352;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// and r11,r9,r12
	ctx.r11.u64 = ctx.r9.u64 & ctx.r12.u64;
	// slw r9,r3,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r31.u8 & 0x3F));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lis r12,3855
	ctx.r12.s64 = 252641280;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// and r11,r6,r12
	ctx.r11.u64 = ctx.r6.u64 & ctx.r12.u64;
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// slw r11,r9,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// lbz r6,10(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// slw r11,r6,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r31.u8 & 0x3F));
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// ble cr6,0x832bdc8c
	if (!cr6.gt) goto loc_832BDC8C;
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832BDC48:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// stw r11,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_832BDC74:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
loc_832BDC8C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BDC98"))) PPC_WEAK_FUNC(sub_832BDC98);
PPC_FUNC_IMPL(__imp__sub_832BDC98) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x832bcf20
	ctx.lr = 0x832BDCB8;
	sub_832BCF20(ctx, base);
	// lbz r11,34(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832bdcf8
	if (!cr6.eq) goto loc_832BDCF8;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9448
	ctx.r4.s64 = ctx.r11.s64 + -9448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bd958
	ctx.lr = 0x832BDCD8;
	sub_832BD958(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stb r10,34(r31)
	PPC_STORE_U8(ctx.r31.u32 + 34, ctx.r10.u8);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
loc_832BDCF8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// lwsync 
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_832BDD34"))) PPC_WEAK_FUNC(sub_832BDD34);
PPC_FUNC_IMPL(__imp__sub_832BDD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDD38"))) PPC_WEAK_FUNC(sub_832BDD38);
PPC_FUNC_IMPL(__imp__sub_832BDD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BDD40;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// bl 0x832bdb18
	ctx.lr = 0x832BDD58;
	sub_832BDB18(ctx, base);
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// cmplwi cr6,r28,6
	cr6.compare<uint32_t>(ctx.r28.u32, 6, xer);
	// addi r27,r11,-64
	ctx.r27.s64 = ctx.r11.s64 + -64;
	// lwz r29,20(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// bgt cr6,0x832bdee4
	if (cr6.gt) goto loc_832BDEE4;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832bddc0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDDC0;
	// bdzf 4*cr6+eq,0x832bddf4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDDF4;
	// bdzf 4*cr6+eq,0x832bdee4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDEE4;
	// bdzf 4*cr6+eq,0x832bde44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDE44;
	// bdzf 4*cr6+eq,0x832bde94
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BDE94;
	// bne cr6,0x832bdeb8
	if (!cr6.eq) goto loc_832BDEB8;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// rlwinm r9,r30,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r8,-27204
	ctx.r5.s64 = ctx.r8.s64 + -27204;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r6,r11,-20076
	ctx.r6.s64 = ctx.r11.s64 + -20076;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83298488
	ctx.lr = 0x832BDDB8;
	sub_83298488(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BDDC0:
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// rlwinm r9,r30,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFFFF000;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r8,-27204
	ctx.r5.s64 = ctx.r8.s64 + -27204;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r6,r11,-20108
	ctx.r6.s64 = ctx.r11.s64 + -20108;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83298488
	ctx.lr = 0x832BDDEC;
	sub_83298488(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BDDF4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bcfb0
	ctx.lr = 0x832BDE00;
	sub_832BCFB0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbz r9,11(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// addi r6,r7,-20132
	ctx.r6.s64 = ctx.r7.s64 + -20132;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r5,r5,-27204
	ctx.r5.s64 = ctx.r5.s64 + -27204;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83298488
	ctx.lr = 0x832BDE3C;
	sub_83298488(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BDE44:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bcfb0
	ctx.lr = 0x832BDE50;
	sub_832BCFB0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbz r9,11(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// addi r6,r7,-20160
	ctx.r6.s64 = ctx.r7.s64 + -20160;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r5,r5,-27204
	ctx.r5.s64 = ctx.r5.s64 + -27204;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83298488
	ctx.lr = 0x832BDE8C;
	sub_83298488(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BDE94:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r6,r11,-20240
	ctx.r6.s64 = ctx.r11.s64 + -20240;
	// addi r5,r10,-27204
	ctx.r5.s64 = ctx.r10.s64 + -27204;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83298488
	ctx.lr = 0x832BDEB0;
	sub_83298488(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BDEB8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,-20480
	ctx.r6.s64 = ctx.r11.s64 + -20480;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r5,r5,-27204
	ctx.r5.s64 = ctx.r5.s64 + -27204;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83298488
	ctx.lr = 0x832BDEE4;
	sub_83298488(ctx, base);
loc_832BDEE4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BDEEC"))) PPC_WEAK_FUNC(sub_832BDEEC);
PPC_FUNC_IMPL(__imp__sub_832BDEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BDEF0"))) PPC_WEAK_FUNC(sub_832BDEF0);
PPC_FUNC_IMPL(__imp__sub_832BDEF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832bcf20
	ctx.lr = 0x832BDF0C;
	sub_832BCF20(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8904
	ctx.r4.s64 = ctx.r11.s64 + -8904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bd958
	ctx.lr = 0x832BDF20;
	sub_832BD958(ctx, base);
	// lwsync 
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BDF40"))) PPC_WEAK_FUNC(sub_832BDF40);
PPC_FUNC_IMPL(__imp__sub_832BDF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832BDF48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r30,r11,-32520
	ctx.r30.s64 = ctx.r11.s64 + -32520;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x832a6df0
	ctx.lr = 0x832BDF5C;
	sub_832A6DF0(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832be148
	if (!cr6.eq) goto loc_832BE148;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r27,r11,28384
	ctx.r27.s64 = ctx.r11.s64 + 28384;
loc_832BDF78:
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stb r28,157(r30)
	PPC_STORE_U8(ctx.r30.u32 + 157, ctx.r28.u8);
	// std r28,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r28.u64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832be02c
	if (cr6.eq) goto loc_832BE02C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_832BDF9C:
	// lbz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832bdfc8
	if (cr6.eq) goto loc_832BDFC8;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r11.u32);
	// b 0x832be018
	goto loc_832BE018;
loc_832BDFC8:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x832bdfdc
	if (!cr6.eq) goto loc_832BDFDC;
	// stb r28,37(r11)
	PPC_STORE_U8(ctx.r11.u32 + 37, ctx.r28.u8);
	// b 0x832be018
	goto loc_832BE018;
loc_832BDFDC:
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sradi r5,r9,63
	xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s64 >> 63;
	// and r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 & ctx.r31.u64;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// bne cr6,0x832bdff8
	if (!cr6.eq) goto loc_832BDFF8;
	// std r10,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r10.u64);
loc_832BDFF8:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832be008
	if (cr6.eq) goto loc_832BE008;
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// b 0x832be00c
	goto loc_832BE00C;
loc_832BE008:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_832BE00C:
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
loc_832BE018:
	// ld r31,128(r30)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r30.u32 + 128);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832bdf9c
	if (!cr6.eq) goto loc_832BDF9C;
	// stw r6,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r6.u32);
loc_832BE02C:
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(ctx.r31.u64, 0, xer);
	// bne cr6,0x832be03c
	if (!cr6.eq) goto loc_832BE03C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832be058
	goto loc_832BE058;
loc_832BE03C:
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// addi r3,r27,120
	ctx.r3.s64 = ctx.r27.s64 + 120;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BE04C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpld cr6,r31,r3
	cr6.compare<uint64_t>(ctx.r31.u64, ctx.r3.u64, xer);
	// ble cr6,0x832be060
	if (!cr6.gt) goto loc_832BE060;
	// subf r4,r3,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_832BE058:
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x832a6e08
	ctx.lr = 0x832BE060;
	sub_832A6E08(ctx, base);
loc_832BE060:
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832be148
	if (!cr6.eq) goto loc_832BE148;
	// lwz r11,164(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 164);
	// addi r3,r27,120
	ctx.r3.s64 = ctx.r27.s64 + 120;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BE07C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832be0e0
	if (cr6.eq) goto loc_832BE0E0;
loc_832BE090:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// subf r10,r29,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r29.s64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// sradi r7,r8,63
	xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s64 >> 63;
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmpldi cr6,r6,0
	cr6.compare<uint64_t>(ctx.r6.u64, 0, xer);
	// beq cr6,0x832be0d4
	if (cr6.eq) goto loc_832BE0D4;
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832be0c0
	if (cr6.eq) goto loc_832BE0C0;
	// stb r26,38(r11)
	PPC_STORE_U8(ctx.r11.u32 + 38, ctx.r26.u8);
	// b 0x832be0cc
	goto loc_832BE0CC;
loc_832BE0C0:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_832BE0CC:
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_832BE0D4:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832be090
	if (!cr6.eq) goto loc_832BE090;
loc_832BE0E0:
	// stb r26,157(r30)
	PPC_STORE_U8(ctx.r30.u32 + 157, ctx.r26.u8);
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BE0F0;
	sub_832A6E00(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832be134
	if (cr6.eq) goto loc_832BE134;
loc_832BE0F8:
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832be134
	if (!cr6.eq) goto loc_832BE134;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BE118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832be128
	if (!cr6.eq) goto loc_832BE128;
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
loc_832BE128:
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832be0f8
	if (!cr6.eq) goto loc_832BE0F8;
loc_832BE134:
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x832a6df0
	ctx.lr = 0x832BE13C;
	sub_832A6DF0(ctx, base);
	// lbz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bdf78
	if (cr6.eq) goto loc_832BDF78;
loc_832BE148:
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x832a6e00
	ctx.lr = 0x832BE150;
	sub_832A6E00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BE15C"))) PPC_WEAK_FUNC(sub_832BE15C);
PPC_FUNC_IMPL(__imp__sub_832BE15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BE160"))) PPC_WEAK_FUNC(sub_832BE160);
PPC_FUNC_IMPL(__imp__sub_832BE160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BE168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832be194
	if (!cr6.eq) goto loc_832BE194;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19900
	ctx.r4.s64 = ctx.r11.s64 + -19900;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x832982e8
	ctx.lr = 0x832BE194;
	sub_832982E8(ctx, base);
loc_832BE194:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r31,r11,-32520
	ctx.r31.s64 = ctx.r11.s64 + -32520;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x832a6d20
	ctx.lr = 0x832BE1A4;
	sub_832A6D20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832be1c0
	if (!cr6.lt) goto loc_832BE1C0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19936
	ctx.r4.s64 = ctx.r11.s64 + -19936;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x832982e8
	ctx.lr = 0x832BE1C0;
	sub_832982E8(ctx, base);
loc_832BE1C0:
	// lhz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r9.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// beq cr6,0x832be1f4
	if (cr6.eq) goto loc_832BE1F4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_832BE1E4:
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bdnz 0x832be1e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BE1E4;
loc_832BE1F4:
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r9.u8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stb r9,157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 157, ctx.r9.u8);
	// std r9,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r9.u64);
	// bl 0x832bf2c8
	ctx.lr = 0x832BE218;
	sub_832BF2C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832be234
	if (!cr6.lt) goto loc_832BE234;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19972
	ctx.r4.s64 = ctx.r11.s64 + -19972;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x832982e8
	ctx.lr = 0x832BE234;
	sub_832982E8(ctx, base);
loc_832BE234:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832bf5d0
	ctx.lr = 0x832BE240;
	sub_832BF5D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832be25c
	if (!cr6.lt) goto loc_832BE25C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-20012
	ctx.r4.s64 = ctx.r11.s64 + -20012;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x832982e8
	ctx.lr = 0x832BE25C;
	sub_832982E8(ctx, base);
loc_832BE25C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832bf648
	ctx.lr = 0x832BE27C;
	sub_832BF648(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832be298
	if (!cr6.lt) goto loc_832BE298;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-20044
	ctx.r4.s64 = ctx.r11.s64 + -20044;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x832982e8
	ctx.lr = 0x832BE298;
	sub_832982E8(ctx, base);
loc_832BE298:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-8384
	ctx.r5.s64 = ctx.r11.s64 + -8384;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x832bf320
	ctx.lr = 0x832BE2B8;
	sub_832BF320(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832bf6d8
	ctx.lr = 0x832BE2C4;
	sub_832BF6D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BE2D0"))) PPC_WEAK_FUNC(sub_832BE2D0);
PPC_FUNC_IMPL(__imp__sub_832BE2D0) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r31,r11,-32520
	ctx.r31.s64 = ctx.r11.s64 + -32520;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x832a6df0
	ctx.lr = 0x832BE2F0;
	sub_832A6DF0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stb r10,156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 156, ctx.r10.u8);
	// bl 0x832a6e90
	ctx.lr = 0x832BE300;
	sub_832A6E90(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x832a6e00
	ctx.lr = 0x832BE308;
	sub_832A6E00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf350
	ctx.lr = 0x832BE310;
	sub_832BF350(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832bf768
	ctx.lr = 0x832BE318;
	sub_832BF768(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832bf9a0
	ctx.lr = 0x832BE320;
	sub_832BF9A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf318
	ctx.lr = 0x832BE328;
	sub_832BF318(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x832a6db8
	ctx.lr = 0x832BE330;
	sub_832A6DB8(ctx, base);
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

__attribute__((alias("__imp__sub_832BE344"))) PPC_WEAK_FUNC(sub_832BE344);
PPC_FUNC_IMPL(__imp__sub_832BE344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BE348"))) PPC_WEAK_FUNC(sub_832BE348);
PPC_FUNC_IMPL(__imp__sub_832BE348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BE350;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-32520
	ctx.r31.s64 = ctx.r11.s64 + -32520;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BE370;
	sub_832A6DF0(ctx, base);
	// lwz r30,136(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832be3cc
	if (cr6.eq) goto loc_832BE3CC;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// ble cr6,0x832be3a0
	if (!cr6.gt) goto loc_832BE3A0;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_832BE3A0:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// std r11,8(r30)
	PPC_STORE_U64(ctx.r30.u32 + 8, ctx.r11.u64);
	// stb r11,37(r30)
	PPC_STORE_U8(ctx.r30.u32 + 37, ctx.r11.u8);
	// stb r8,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r8.u8);
	// stb r11,38(r30)
	PPC_STORE_U8(ctx.r30.u32 + 38, ctx.r11.u8);
loc_832BE3CC:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x832a6e00
	ctx.lr = 0x832BE3D4;
	sub_832A6E00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BE3E0"))) PPC_WEAK_FUNC(sub_832BE3E0);
PPC_FUNC_IMPL(__imp__sub_832BE3E0) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-32520
	ctx.r31.s64 = ctx.r11.s64 + -32520;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x832a6df0
	ctx.lr = 0x832BE408;
	sub_832A6DF0(ctx, base);
	// lbz r11,157(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832be420
	if (cr6.eq) goto loc_832BE420;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,38(r30)
	PPC_STORE_U8(ctx.r30.u32 + 38, ctx.r11.u8);
	// b 0x832be474
	goto loc_832BE474;
loc_832BE420:
	// lbz r11,37(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832be45c
	if (cr6.eq) goto loc_832BE45C;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r9,37(r30)
	PPC_STORE_U8(ctx.r30.u32 + 37, ctx.r9.u8);
	// beq cr6,0x832be44c
	if (cr6.eq) goto loc_832BE44C;
	// stw r11,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x832be450
	goto loc_832BE450;
loc_832BE44C:
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_832BE450:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832be45c
	if (cr6.eq) goto loc_832BE45C;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_832BE45C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_832BE474:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x832a6e00
	ctx.lr = 0x832BE47C;
	sub_832A6E00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_832BE498"))) PPC_WEAK_FUNC(sub_832BE498);
PPC_FUNC_IMPL(__imp__sub_832BE498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832BE4A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,28384
	ctx.r11.s64 = ctx.r11.s64 + 28384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,120
	ctx.r3.s64 = ctx.r11.s64 + 120;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832BE4C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// add r28,r3,r29
	ctx.r28.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r30,r11,-32520
	ctx.r30.s64 = ctx.r11.s64 + -32520;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x832a6df0
	ctx.lr = 0x832BE4DC;
	sub_832A6DF0(ctx, base);
	// lbz r9,37(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832be510
	if (!cr6.eq) goto loc_832BE510;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r11.u8);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x832be50c
	if (cr6.eq) goto loc_832BE50C;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
loc_832BE50C:
	// stw r31,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r31.u32);
loc_832BE510:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x832be524
	if (!cr6.eq) goto loc_832BE524;
	// li r26,0
	ctx.r26.s64 = 0;
loc_832BE524:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832be58c
	if (!cr6.eq) goto loc_832BE58C;
	// std r29,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r29.u64);
	// std r28,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r28.u64);
	// lbz r11,157(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 157);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832be58c
	if (!cr6.eq) goto loc_832BE58C;
	// ld r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 128);
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sradi r9,r10,63
	xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s64 >> 63;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpldi cr6,r8,0
	cr6.compare<uint64_t>(ctx.r8.u64, 0, xer);
	// bne cr6,0x832be574
	if (!cr6.eq) goto loc_832BE574;
	// li r11,1
	ctx.r11.s64 = 1;
	// std r28,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r28.u64);
	// b 0x832be578
	goto loc_832BE578;
loc_832BE574:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832BE578:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832be58c
	if (cr6.eq) goto loc_832BE58C;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x832a6e90
	ctx.lr = 0x832BE58C;
	sub_832A6E90(ctx, base);
loc_832BE58C:
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x832a6e00
	ctx.lr = 0x832BE594;
	sub_832A6E00(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BE5A0"))) PPC_WEAK_FUNC(sub_832BE5A0);
PPC_FUNC_IMPL(__imp__sub_832BE5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BE5A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-32520
	ctx.r30.s64 = ctx.r11.s64 + -32520;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// bl 0x832a6df0
	ctx.lr = 0x832BE5C0;
	sub_832A6DF0(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// bne cr6,0x832be5d4
	if (!cr6.eq) goto loc_832BE5D4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_832BE5D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x832a6e00
	ctx.lr = 0x832BE5E4;
	sub_832A6E00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BE5F0"))) PPC_WEAK_FUNC(sub_832BE5F0);
PPC_FUNC_IMPL(__imp__sub_832BE5F0) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-32520
	ctx.r31.s64 = ctx.r11.s64 + -32520;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x832a6df0
	ctx.lr = 0x832BE618;
	sub_832A6DF0(ctx, base);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x832a6e00
	ctx.lr = 0x832BE638;
	sub_832A6E00(ctx, base);
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

__attribute__((alias("__imp__sub_832BE650"))) PPC_WEAK_FUNC(sub_832BE650);
PPC_FUNC_IMPL(__imp__sub_832BE650) {
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
	// lis r10,10
	ctx.r10.s64 = 655360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x832be688
	if (cr6.eq) goto loc_832BE688;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-19856
	ctx.r4.s64 = ctx.r11.s64 + -19856;
	// b 0x832be6b0
	goto loc_832BE6B0;
loc_832BE688:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1510
	ctx.lr = 0x832BE694;
	sub_832A1510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832be6a8
	if (cr6.eq) goto loc_832BE6A8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832be6c8
	goto loc_832BE6C8;
loc_832BE6A8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-19880
	ctx.r4.s64 = ctx.r11.s64 + -19880;
loc_832BE6B0:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r10,-26432
	ctx.r3.s64 = ctx.r10.s64 + -26432;
	// bl 0x83298338
	ctx.lr = 0x832BE6C4;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832BE6C8:
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

__attribute__((alias("__imp__sub_832BE6E0"))) PPC_WEAK_FUNC(sub_832BE6E0);
PPC_FUNC_IMPL(__imp__sub_832BE6E0) {
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
	// lhz r6,42(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 42);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832be710
	if (!cr6.eq) goto loc_832BE710;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19780
	ctx.r4.s64 = ctx.r11.s64 + -19780;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832BE710;
	sub_832982E8(ctx, base);
loc_832BE710:
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r10,-32360
	ctx.r3.s64 = ctx.r10.s64 + -32360;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x832b1978
	ctx.lr = 0x832BE724;
	sub_832B1978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832be740
	if (!cr6.eq) goto loc_832BE740;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19816
	ctx.r4.s64 = ctx.r11.s64 + -19816;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832BE740;
	sub_832982E8(ctx, base);
loc_832BE740:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BE750"))) PPC_WEAK_FUNC(sub_832BE750);
PPC_FUNC_IMPL(__imp__sub_832BE750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// b 0x83307688
	sub_83307688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BE75C"))) PPC_WEAK_FUNC(sub_832BE75C);
PPC_FUNC_IMPL(__imp__sub_832BE75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BE760"))) PPC_WEAK_FUNC(sub_832BE760);
PPC_FUNC_IMPL(__imp__sub_832BE760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// b 0x832b1a90
	sub_832B1A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BE770"))) PPC_WEAK_FUNC(sub_832BE770);
PPC_FUNC_IMPL(__imp__sub_832BE770) {
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
	// bl 0x832c1cd0
	ctx.lr = 0x832BE788;
	sub_832C1CD0(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// bl 0x832b1a40
	ctx.lr = 0x832BE798;
	sub_832B1A40(ctx, base);
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

__attribute__((alias("__imp__sub_832BE7B0"))) PPC_WEAK_FUNC(sub_832BE7B0);
PPC_FUNC_IMPL(__imp__sub_832BE7B0) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r30,r11,-32360
	ctx.r30.s64 = ctx.r11.s64 + -32360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b19f0
	ctx.lr = 0x832BE7D4;
	sub_832B19F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832be81c
	if (cr6.eq) goto loc_832BE81C;
	// bl 0x832c1c68
	ctx.lr = 0x832BE7E4;
	sub_832C1C68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832be810
	if (cr6.lt) goto loc_832BE810;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-6288
	ctx.r4.s64 = ctx.r11.s64 + -6288;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x832a1350
	ctx.lr = 0x832BE800;
	sub_832A1350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832be838
	if (cr6.gt) goto loc_832BE838;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c1cd0
	ctx.lr = 0x832BE810;
	sub_832C1CD0(ctx, base);
loc_832BE810:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832b1a40
	ctx.lr = 0x832BE81C;
	sub_832B1A40(ctx, base);
loc_832BE81C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19752
	ctx.r4.s64 = ctx.r11.s64 + -19752;
	// addi r3,r10,-26432
	ctx.r3.s64 = ctx.r10.s64 + -26432;
	// bl 0x83298338
	ctx.lr = 0x832BE830;
	sub_83298338(ctx, base);
	// lis r3,-32763
	ctx.r3.s64 = -2147155968;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_832BE838:
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

__attribute__((alias("__imp__sub_832BE850"))) PPC_WEAK_FUNC(sub_832BE850);
PPC_FUNC_IMPL(__imp__sub_832BE850) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// bl 0x832be650
	ctx.lr = 0x832BE874;
	sub_832BE650(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832be884
	if (cr6.eq) goto loc_832BE884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832BE884;
	sub_832A13D8(ctx, base);
loc_832BE884:
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

__attribute__((alias("__imp__sub_832BE898"))) PPC_WEAK_FUNC(sub_832BE898);
PPC_FUNC_IMPL(__imp__sub_832BE898) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30888
	ctx.r3.s64 = ctx.r11.s64 + -30888;
	// bl 0x832be650
	ctx.lr = 0x832BE8B4;
	sub_832BE650(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832be8c0
	if (cr6.eq) goto loc_832BE8C0;
	// bl 0x832c1cd8
	ctx.lr = 0x832BE8C0;
	sub_832C1CD8(ctx, base);
loc_832BE8C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BE8D0"))) PPC_WEAK_FUNC(sub_832BE8D0);
PPC_FUNC_IMPL(__imp__sub_832BE8D0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30880
	ctx.r3.s64 = ctx.r11.s64 + -30880;
	// bl 0x832be650
	ctx.lr = 0x832BE8EC;
	sub_832BE650(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832be8f8
	if (cr6.eq) goto loc_832BE8F8;
	// bl 0x832c1ce0
	ctx.lr = 0x832BE8F8;
	sub_832C1CE0(ctx, base);
loc_832BE8F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BE908"))) PPC_WEAK_FUNC(sub_832BE908);
PPC_FUNC_IMPL(__imp__sub_832BE908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BE910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,-19716
	ctx.r30.s64 = ctx.r11.s64 + -19716;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832be650
	ctx.lr = 0x832BE92C;
	sub_832BE650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832be948
	if (!cr6.eq) goto loc_832BE948;
	// lis r3,-32763
	ctx.r3.s64 = -2147155968;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832BE948:
	// bl 0x832a6bf8
	ctx.lr = 0x832BE94C;
	sub_832A6BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832be990
	if (!cr6.eq) goto loc_832BE990;
	// bl 0x832b16c0
	ctx.lr = 0x832BE95C;
	sub_832B16C0(ctx, base);
	// bl 0x83254150
	ctx.lr = 0x832BE960;
	sub_83254150(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-26432
	ctx.r9.s64 = ctx.r11.s64 + -26432;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-31128
	ctx.r4.s64 = ctx.r10.s64 + -31128;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83298338
	ctx.lr = 0x832BE980;
	sub_83298338(ctx, base);
	// lis r3,-32763
	ctx.r3.s64 = -2147155968;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832BE990:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c1ce8
	ctx.lr = 0x832BE99C;
	sub_832C1CE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BE9A4"))) PPC_WEAK_FUNC(sub_832BE9A4);
PPC_FUNC_IMPL(__imp__sub_832BE9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BE9A8"))) PPC_WEAK_FUNC(sub_832BE9A8);
PPC_FUNC_IMPL(__imp__sub_832BE9A8) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-25372
	ctx.r3.s64 = ctx.r11.s64 + -25372;
	// bl 0x832be650
	ctx.lr = 0x832BE9C8;
	sub_832BE650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832be9fc
	if (cr6.eq) goto loc_832BE9FC;
	// bl 0x832a6bf8
	ctx.lr = 0x832BE9D8;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832be9ec
	if (!cr6.eq) goto loc_832BE9EC;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x832be9f4
	goto loc_832BE9F4;
loc_832BE9EC:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_832BE9F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c1db0
	ctx.lr = 0x832BE9FC;
	sub_832C1DB0(ctx, base);
loc_832BE9FC:
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

__attribute__((alias("__imp__sub_832BEA10"))) PPC_WEAK_FUNC(sub_832BEA10);
PPC_FUNC_IMPL(__imp__sub_832BEA10) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-19708
	ctx.r3.s64 = ctx.r11.s64 + -19708;
	// bl 0x832be650
	ctx.lr = 0x832BEA30;
	sub_832BE650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bea64
	if (cr6.eq) goto loc_832BEA64;
	// bl 0x832a6bf8
	ctx.lr = 0x832BEA40;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bea54
	if (!cr6.eq) goto loc_832BEA54;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// b 0x832bea5c
	goto loc_832BEA5C;
loc_832BEA54:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
loc_832BEA5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c1df0
	ctx.lr = 0x832BEA64;
	sub_832C1DF0(ctx, base);
loc_832BEA64:
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

__attribute__((alias("__imp__sub_832BEA78"))) PPC_WEAK_FUNC(sub_832BEA78);
PPC_FUNC_IMPL(__imp__sub_832BEA78) {
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
	// lhz r6,40(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832beaa8
	if (!cr6.eq) goto loc_832BEAA8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19660
	ctx.r4.s64 = ctx.r11.s64 + -19660;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832BEAA8;
	sub_832982E8(ctx, base);
loc_832BEAA8:
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r10,-32328
	ctx.r3.s64 = ctx.r10.s64 + -32328;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x832b1978
	ctx.lr = 0x832BEABC;
	sub_832B1978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bead8
	if (!cr6.eq) goto loc_832BEAD8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19696
	ctx.r4.s64 = ctx.r11.s64 + -19696;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832BEAD8;
	sub_832982E8(ctx, base);
loc_832BEAD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BEAE8"))) PPC_WEAK_FUNC(sub_832BEAE8);
PPC_FUNC_IMPL(__imp__sub_832BEAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,-32328
	ctx.r3.s64 = ctx.r11.s64 + -32328;
	// b 0x83307688
	sub_83307688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BEAF4"))) PPC_WEAK_FUNC(sub_832BEAF4);
PPC_FUNC_IMPL(__imp__sub_832BEAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BEAF8"))) PPC_WEAK_FUNC(sub_832BEAF8);
PPC_FUNC_IMPL(__imp__sub_832BEAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32328
	ctx.r3.s64 = ctx.r11.s64 + -32328;
	// b 0x832b1a90
	sub_832B1A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BEB08"))) PPC_WEAK_FUNC(sub_832BEB08);
PPC_FUNC_IMPL(__imp__sub_832BEB08) {
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
	// lhz r6,38(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 38);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832beb38
	if (!cr6.eq) goto loc_832BEB38;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19604
	ctx.r4.s64 = ctx.r11.s64 + -19604;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832BEB38;
	sub_832982E8(ctx, base);
loc_832BEB38:
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r10,-32296
	ctx.r3.s64 = ctx.r10.s64 + -32296;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x832b1978
	ctx.lr = 0x832BEB4C;
	sub_832B1978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832beb68
	if (!cr6.eq) goto loc_832BEB68;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19636
	ctx.r4.s64 = ctx.r11.s64 + -19636;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832BEB68;
	sub_832982E8(ctx, base);
loc_832BEB68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BEB78"))) PPC_WEAK_FUNC(sub_832BEB78);
PPC_FUNC_IMPL(__imp__sub_832BEB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,-32296
	ctx.r3.s64 = ctx.r11.s64 + -32296;
	// b 0x83307688
	sub_83307688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BEB84"))) PPC_WEAK_FUNC(sub_832BEB84);
PPC_FUNC_IMPL(__imp__sub_832BEB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BEB88"))) PPC_WEAK_FUNC(sub_832BEB88);
PPC_FUNC_IMPL(__imp__sub_832BEB88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32296
	ctx.r3.s64 = ctx.r11.s64 + -32296;
	// b 0x832b1a90
	sub_832B1A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BEB98"))) PPC_WEAK_FUNC(sub_832BEB98);
PPC_FUNC_IMPL(__imp__sub_832BEB98) {
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
	// lhz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832bebc8
	if (!cr6.eq) goto loc_832BEBC8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19552
	ctx.r4.s64 = ctx.r11.s64 + -19552;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832BEBC8;
	sub_832982E8(ctx, base);
loc_832BEBC8:
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r3,r10,-32264
	ctx.r3.s64 = ctx.r10.s64 + -32264;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x832b1978
	ctx.lr = 0x832BEBDC;
	sub_832B1978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bebf8
	if (!cr6.eq) goto loc_832BEBF8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19584
	ctx.r4.s64 = ctx.r11.s64 + -19584;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832BEBF8;
	sub_832982E8(ctx, base);
loc_832BEBF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BEC08"))) PPC_WEAK_FUNC(sub_832BEC08);
PPC_FUNC_IMPL(__imp__sub_832BEC08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// b 0x83307688
	sub_83307688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BEC14"))) PPC_WEAK_FUNC(sub_832BEC14);
PPC_FUNC_IMPL(__imp__sub_832BEC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BEC18"))) PPC_WEAK_FUNC(sub_832BEC18);
PPC_FUNC_IMPL(__imp__sub_832BEC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32264
	ctx.r3.s64 = ctx.r11.s64 + -32264;
	// b 0x832b1a90
	sub_832B1A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BEC28"))) PPC_WEAK_FUNC(sub_832BEC28);
PPC_FUNC_IMPL(__imp__sub_832BEC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832BEC30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832bec68
	if (!cr6.eq) goto loc_832BEC68;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832beccc
	if (cr6.eq) goto loc_832BECCC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832BEC68:
	// addi r28,r27,16
	ctx.r28.s64 = ctx.r27.s64 + 16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832BEC74;
	sub_832A6EF0(ctx, base);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lwz r31,8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x832bf768
	ctx.lr = 0x832BEC88;
	sub_832BF768(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832beca8
	if (cr6.eq) goto loc_832BECA8;
loc_832BEC90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 8;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832bf768
	ctx.lr = 0x832BECA0;
	sub_832BF768(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832bec90
	if (!cr6.eq) goto loc_832BEC90;
loc_832BECA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832a6ee8
	ctx.lr = 0x832BECB0;
	sub_832A6EE8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832beccc
	if (cr6.eq) goto loc_832BECCC;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
loc_832BECCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BECD4"))) PPC_WEAK_FUNC(sub_832BECD4);
PPC_FUNC_IMPL(__imp__sub_832BECD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BECD8"))) PPC_WEAK_FUNC(sub_832BECD8);
PPC_FUNC_IMPL(__imp__sub_832BECD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x832BECE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,8(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x832bee50
	if (cr6.eq) goto loc_832BEE50;
	// addi r10,r3,15
	ctx.r10.s64 = ctx.r3.s64 + 15;
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r10,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r11,320
	ctx.r7.s64 = ctx.r11.s64 + 320;
	// rlwinm r5,r8,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// blt cr6,0x832bee50
	if (cr6.lt) goto loc_832BEE50;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x832BED2C;
	sub_83294018(ctx, base);
	// addi r24,r31,16
	ctx.r24.s64 = ctx.r31.s64 + 16;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832a6ec0
	ctx.lr = 0x832BED38;
	sub_832A6EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bee50
	if (cr6.lt) goto loc_832BEE50;
	// addi r29,r31,320
	ctx.r29.s64 = ctx.r31.s64 + 320;
	// addi r30,r25,1
	ctx.r30.s64 = ctx.r25.s64 + 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// blt cr6,0x832bed88
	if (cr6.lt) goto loc_832BED88;
loc_832BED58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bf5d0
	ctx.lr = 0x832BED64;
	sub_832BF5D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bee1c
	if (cr6.lt) goto loc_832BEE1C;
	// stw r30,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r30.u32);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bge cr6,0x832bed58
	if (!cr6.lt) goto loc_832BED58;
loc_832BED88:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addi r26,r31,44
	ctx.r26.s64 = ctx.r31.s64 + 44;
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832c2030
	ctx.lr = 0x832BED9C;
	sub_832C2030(ctx, base);
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// ble cr6,0x832bedac
	if (!cr6.gt) goto loc_832BEDAC;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_832BEDAC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832bee04
	if (cr6.eq) goto loc_832BEE04;
loc_832BEDB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x832bec28
	ctx.lr = 0x832BEDC0;
	sub_832BEC28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r23,16(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x832c20d0
	ctx.lr = 0x832BEDD0;
	sub_832C20D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// bl 0x832bf648
	ctx.lr = 0x832BEDE8;
	sub_832BF648(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bee1c
	if (cr6.lt) goto loc_832BEE1C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bne cr6,0x832bedb4
	if (!cr6.eq) goto loc_832BEDB4;
loc_832BEE04:
	// stw r25,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r25.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bee5c
	if (cr6.eq) goto loc_832BEE5C;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// b 0x832bee60
	goto loc_832BEE60;
loc_832BEE1C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832bee50
	if (cr6.eq) goto loc_832BEE50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x832bee48
	if (cr6.eq) goto loc_832BEE48;
loc_832BEE30:
	// addi r29,r29,-72
	ctx.r29.s64 = ctx.r29.s64 + -72;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bf9a0
	ctx.lr = 0x832BEE3C;
	sub_832BF9A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x832bee30
	if (!cr6.eq) goto loc_832BEE30;
loc_832BEE48:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83102db0
	ctx.lr = 0x832BEE50;
	sub_83102DB0(ctx, base);
loc_832BEE50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_832BEE5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832BEE60:
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BEE80"))) PPC_WEAK_FUNC(sub_832BEE80);
PPC_FUNC_IMPL(__imp__sub_832BEE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BEE88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,304(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// beq cr6,0x832beec4
	if (cr6.eq) goto loc_832BEEC4;
loc_832BEEB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bf9a0
	ctx.lr = 0x832BEEB8;
	sub_832BF9A0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bne 0x832beeb0
	if (!cr0.eq) goto loc_832BEEB0;
loc_832BEEC4:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x83102db0
	ctx.lr = 0x832BEECC;
	sub_83102DB0(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83102db0
	ctx.lr = 0x832BEED4;
	sub_83102DB0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BEEDC"))) PPC_WEAK_FUNC(sub_832BEEDC);
PPC_FUNC_IMPL(__imp__sub_832BEEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BEEE0"))) PPC_WEAK_FUNC(sub_832BEEE0);
PPC_FUNC_IMPL(__imp__sub_832BEEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832BEEE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,312(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832bef14
	if (!cr6.eq) goto loc_832BEF14;
	// lwz r27,316(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r28,308(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
loc_832BEF14:
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a6ee8
	ctx.lr = 0x832BEF20;
	sub_832A6EE8(ctx, base);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bgt cr6,0x832befb8
	if (cr6.gt) goto loc_832BEFB8;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832bef90
	if (cr6.eq) goto loc_832BEF90;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832BEF3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bf7a0
	ctx.lr = 0x832BEF44;
	sub_832BF7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832bef60
	if (!cr6.eq) goto loc_832BEF60;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x832bef3c
	goto loc_832BEF3C;
loc_832BEF60:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832BEF68;
	sub_832A6EF0(ctx, base);
	// lbz r11,70(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 70);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x832bef84
	if (cr6.eq) goto loc_832BEF84;
	// stb r27,70(r30)
	PPC_STORE_U8(ctx.r30.u32 + 70, ctx.r27.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x832a6c30
	ctx.lr = 0x832BEF84;
	sub_832A6C30(ctx, base);
loc_832BEF84:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832BEF90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bec28
	ctx.lr = 0x832BEF98;
	sub_832BEC28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832befd0
	if (!cr6.eq) goto loc_832BEFD0;
loc_832BEFA4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832BEFAC;
	sub_832A6EF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832BEFB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x832bec28
	ctx.lr = 0x832BEFC4;
	sub_832BEC28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bf010
	if (cr6.eq) goto loc_832BF010;
loc_832BEFD0:
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x832c20d0
	ctx.lr = 0x832BEFD8;
	sub_832C20D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832BEFE4;
	sub_832A6EF0(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bf648
	ctx.lr = 0x832BEFFC;
	sub_832BF648(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832BF010:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832befa4
	if (cr6.eq) goto loc_832BEFA4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r28,r31,44
	ctx.r28.s64 = ctx.r31.s64 + 44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x832c2148
	ctx.lr = 0x832BF038;
	sub_832C2148(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c20d0
	ctx.lr = 0x832BF040;
	sub_832C20D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832BF04C;
	sub_832A6EF0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bfa00
	ctx.lr = 0x832BF064;
	sub_832BFA00(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF078"))) PPC_WEAK_FUNC(sub_832BF078);
PPC_FUNC_IMPL(__imp__sub_832BF078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832BF080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x832a6ee8
	ctx.lr = 0x832BF09C;
	sub_832A6EE8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// beq cr6,0x832bf0c4
	if (cr6.eq) goto loc_832BF0C4;
	// lbz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x832c2148
	ctx.lr = 0x832BF0C4;
	sub_832C2148(ctx, base);
loc_832BF0C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832BF0CC;
	sub_832A6EF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF0D4"))) PPC_WEAK_FUNC(sub_832BF0D4);
PPC_FUNC_IMPL(__imp__sub_832BF0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF0D8"))) PPC_WEAK_FUNC(sub_832BF0D8);
PPC_FUNC_IMPL(__imp__sub_832BF0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BF0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x832a6ee8
	ctx.lr = 0x832BF0F8;
	sub_832A6EE8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// bl 0x832a6ef0
	ctx.lr = 0x832BF10C;
	sub_832A6EF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF114"))) PPC_WEAK_FUNC(sub_832BF114);
PPC_FUNC_IMPL(__imp__sub_832BF114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF118"))) PPC_WEAK_FUNC(sub_832BF118);
PPC_FUNC_IMPL(__imp__sub_832BF118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832BF120;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// beq cr6,0x832bf168
	if (cr6.eq) goto loc_832BF168;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6ee8
	ctx.lr = 0x832BF144;
	sub_832A6EE8(ctx, base);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c2148
	ctx.lr = 0x832BF154;
	sub_832C2148(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c2110
	ctx.lr = 0x832BF160;
	sub_832C2110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832BF168;
	sub_832A6EF0(ctx, base);
loc_832BF168:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF170"))) PPC_WEAK_FUNC(sub_832BF170);
PPC_FUNC_IMPL(__imp__sub_832BF170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BF178;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// ble cr6,0x832bf198
	if (!cr6.gt) goto loc_832BF198;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_832BF198:
	// addi r27,r28,16
	ctx.r27.s64 = ctx.r28.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832a6ee8
	ctx.lr = 0x832BF1A4;
	sub_832A6EE8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832bf1d0
	if (cr6.eq) goto loc_832BF1D0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_832BF1B0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x832bf8f8
	ctx.lr = 0x832BF1C0;
	sub_832BF8F8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// bne 0x832bf1b0
	if (!cr0.eq) goto loc_832BF1B0;
loc_832BF1D0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832a6ef0
	ctx.lr = 0x832BF1D8;
	sub_832A6EF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF1E0"))) PPC_WEAK_FUNC(sub_832BF1E0);
PPC_FUNC_IMPL(__imp__sub_832BF1E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_832BF1F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r9,r6,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x832bf228
	if (!cr6.eq) goto loc_832BF228;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x832bf1f0
	if (cr6.lt) goto loc_832BF1F0;
	// blr 
	return;
loc_832BF228:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BF234"))) PPC_WEAK_FUNC(sub_832BF234);
PPC_FUNC_IMPL(__imp__sub_832BF234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF238"))) PPC_WEAK_FUNC(sub_832BF238);
PPC_FUNC_IMPL(__imp__sub_832BF238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_832BF248:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x832bf268
	if (cr6.eq) goto loc_832BF268;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x832bf248
	if (cr6.lt) goto loc_832BF248;
	// blr 
	return;
loc_832BF268:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BF278"))) PPC_WEAK_FUNC(sub_832BF278);
PPC_FUNC_IMPL(__imp__sub_832BF278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BF280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bf2bc
	if (cr6.eq) goto loc_832BF2BC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,4
	ctx.r30.s64 = 4;
loc_832BF298:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bf2b0
	if (cr6.eq) goto loc_832BF2B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BF2B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832BF2B0:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x832bf298
	if (!cr0.eq) goto loc_832BF298;
loc_832BF2BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF2C4"))) PPC_WEAK_FUNC(sub_832BF2C4);
PPC_FUNC_IMPL(__imp__sub_832BF2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF2C8"))) PPC_WEAK_FUNC(sub_832BF2C8);
PPC_FUNC_IMPL(__imp__sub_832BF2C8) {
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
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x832BF2E8;
	sub_83294018(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x832a6d20
	ctx.lr = 0x832BF2F0;
	sub_832A6D20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bf304
	if (cr6.lt) goto loc_832BF304;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_832BF304:
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

__attribute__((alias("__imp__sub_832BF318"))) PPC_WEAK_FUNC(sub_832BF318);
PPC_FUNC_IMPL(__imp__sub_832BF318) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x832a6db8
	sub_832A6DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF320"))) PPC_WEAK_FUNC(sub_832BF320);
PPC_FUNC_IMPL(__imp__sub_832BF320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// addic r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// and r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BF350"))) PPC_WEAK_FUNC(sub_832BF350);
PPC_FUNC_IMPL(__imp__sub_832BF350) {
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
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF374;
	sub_832A6DF0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x832bf398
	if (!cr6.lt) goto loc_832BF398;
loc_832BF380:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6e08
	ctx.lr = 0x832BF38C;
	sub_832A6E08(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x832bf380
	if (cr6.lt) goto loc_832BF380;
loc_832BF398:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a6e00
	ctx.lr = 0x832BF3A4;
	sub_832A6E00(ctx, base);
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

__attribute__((alias("__imp__sub_832BF3C0"))) PPC_WEAK_FUNC(sub_832BF3C0);
PPC_FUNC_IMPL(__imp__sub_832BF3C0) {
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
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF3E4;
	sub_832A6DF0(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x832a6e00
	ctx.lr = 0x832BF3FC;
	sub_832A6E00(ctx, base);
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

__attribute__((alias("__imp__sub_832BF418"))) PPC_WEAK_FUNC(sub_832BF418);
PPC_FUNC_IMPL(__imp__sub_832BF418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832BF420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832BF440;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF450;
	sub_832A6DF0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// bl 0x832a6e00
	ctx.lr = 0x832BF464;
	sub_832A6E00(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x832bf278
	ctx.lr = 0x832BF470;
	sub_832BF278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF478;
	sub_832A6DF0(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// bl 0x832a6ea0
	ctx.lr = 0x832BF48C;
	sub_832A6EA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF494;
	sub_832A6E00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF4A0"))) PPC_WEAK_FUNC(sub_832BF4A0);
PPC_FUNC_IMPL(__imp__sub_832BF4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BF4A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832a6c08
	ctx.lr = 0x832BF4B4;
	sub_832A6C08(ctx, base);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_832BF4C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF4C8;
	sub_832A6DF0(ctx, base);
loc_832BF4C8:
	// lbz r11,69(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x832bf4c8
	if (cr6.gt) goto loc_832BF4C8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832bf58c
	if (cr6.eq) goto loc_832BF58C;
	// bdz 0x832bf4f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832BF4F4;
	// bdz 0x832bf4f4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832BF4F4;
	// bdz 0x832bf504
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832BF504;
	// bdz 0x832bf5b8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_832BF5B8;
	// b 0x832bf5b8
	goto loc_832BF5B8;
loc_832BF4F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6e08
	ctx.lr = 0x832BF500;
	sub_832A6E08(ctx, base);
	// b 0x832bf4c8
	goto loc_832BF4C8;
loc_832BF504:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a6e00
	ctx.lr = 0x832BF510;
	sub_832A6E00(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832bf5c0
	if (cr6.eq) goto loc_832BF5C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bf418
	ctx.lr = 0x832BF520;
	sub_832BF418(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF528;
	sub_832A6DF0(ctx, base);
	// lbz r11,69(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x832bf540
	if (cr6.eq) goto loc_832BF540;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF53C;
	sub_832A6E00(ctx, base);
	// b 0x832bf4c0
	goto loc_832BF4C0;
loc_832BF540:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bf568
	if (cr6.eq) goto loc_832BF568;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bne 0x832bf568
	if (!cr0.eq) goto loc_832BF568;
	// stb r27,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r27.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF564;
	sub_832A6E00(ctx, base);
	// b 0x832bf4c0
	goto loc_832BF4C0;
loc_832BF568:
	// stb r28,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r28.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF574;
	sub_832A6E00(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bf4c0
	if (cr6.eq) goto loc_832BF4C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832bf0d8
	ctx.lr = 0x832BF588;
	sub_832BF0D8(ctx, base);
	// b 0x832bf4c0
	goto loc_832BF4C0;
loc_832BF58C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF594;
	sub_832A6E00(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bf5c0
	if (cr6.eq) goto loc_832BF5C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832bf078
	ctx.lr = 0x832BF5AC;
	sub_832BF078(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BF5B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF5C0;
	sub_832A6E00(ctx, base);
loc_832BF5C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF5CC"))) PPC_WEAK_FUNC(sub_832BF5CC);
PPC_FUNC_IMPL(__imp__sub_832BF5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF5D0"))) PPC_WEAK_FUNC(sub_832BF5D0);
PPC_FUNC_IMPL(__imp__sub_832BF5D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BF5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x832BF5F0;
	sub_83294018(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6d20
	ctx.lr = 0x832BF5FC;
	sub_832A6D20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bf61c
	if (cr6.lt) goto loc_832BF61C;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x832a6d20
	ctx.lr = 0x832BF60C;
	sub_832A6D20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832bf62c
	if (!cr6.lt) goto loc_832BF62C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6db8
	ctx.lr = 0x832BF61C;
	sub_832A6DB8(ctx, base);
loc_832BF61C:
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832BF62C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF644"))) PPC_WEAK_FUNC(sub_832BF644);
PPC_FUNC_IMPL(__imp__sub_832BF644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF648"))) PPC_WEAK_FUNC(sub_832BF648);
PPC_FUNC_IMPL(__imp__sub_832BF648) {
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
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// stb r5,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r5.u8);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stb r6,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r6.u8);
	// lis r3,-31956
	ctx.r3.s64 = -2094268416;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// stb r9,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r9.u8);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r4,r3,-2912
	ctx.r4.s64 = ctx.r3.s64 + -2912;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832a7130
	ctx.lr = 0x832BF694;
	sub_832A7130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bf6b4
	if (cr6.lt) goto loc_832BF6B4;
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
loc_832BF6B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
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

__attribute__((alias("__imp__sub_832BF6D8"))) PPC_WEAK_FUNC(sub_832BF6D8);
PPC_FUNC_IMPL(__imp__sub_832BF6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BF6E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF6F8;
	sub_832A6DF0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// bl 0x832a6e90
	ctx.lr = 0x832BF710;
	sub_832A6E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF718;
	sub_832A6E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF720"))) PPC_WEAK_FUNC(sub_832BF720);
PPC_FUNC_IMPL(__imp__sub_832BF720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BF728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF740;
	sub_832A6DF0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// bl 0x832a6e90
	ctx.lr = 0x832BF758;
	sub_832A6E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF760;
	sub_832A6E00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF768"))) PPC_WEAK_FUNC(sub_832BF768);
PPC_FUNC_IMPL(__imp__sub_832BF768) {
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
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6be0
	ctx.lr = 0x832BF784;
	sub_832A6BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6ba0
	ctx.lr = 0x832BF78C;
	sub_832A6BA0(ctx, base);
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

__attribute__((alias("__imp__sub_832BF7A0"))) PPC_WEAK_FUNC(sub_832BF7A0);
PPC_FUNC_IMPL(__imp__sub_832BF7A0) {
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
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF7C4;
	sub_832A6DF0(ctx, base);
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x832bf7e0
	if (cr6.eq) goto loc_832BF7E0;
	// bl 0x832a6e00
	ctx.lr = 0x832BF7D8;
	sub_832A6E00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832bf7f8
	goto loc_832BF7F8;
loc_832BF7E0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,69(r30)
	PPC_STORE_U8(ctx.r30.u32 + 69, ctx.r11.u8);
	// bl 0x832a6e90
	ctx.lr = 0x832BF7EC;
	sub_832A6E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF7F4;
	sub_832A6E00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832BF7F8:
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

__attribute__((alias("__imp__sub_832BF810"))) PPC_WEAK_FUNC(sub_832BF810);
PPC_FUNC_IMPL(__imp__sub_832BF810) {
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
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF834;
	sub_832A6DF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_832BF83C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6e08
	ctx.lr = 0x832BF848;
	sub_832A6E08(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832bf83c
	if (cr6.eq) goto loc_832BF83C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x832a6e00
	ctx.lr = 0x832BF860;
	sub_832A6E00(ctx, base);
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

__attribute__((alias("__imp__sub_832BF87C"))) PPC_WEAK_FUNC(sub_832BF87C);
PPC_FUNC_IMPL(__imp__sub_832BF87C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF880"))) PPC_WEAK_FUNC(sub_832BF880);
PPC_FUNC_IMPL(__imp__sub_832BF880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BF888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bne cr6,0x832bf8b0
	if (!cr6.eq) goto loc_832BF8B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832BF8B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x832a6cc0
	ctx.lr = 0x832BF8BC;
	sub_832A6CC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bf8e8
	if (cr6.lt) goto loc_832BF8E8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bf8e4
	if (cr6.eq) goto loc_832BF8E4;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x832bf118
	ctx.lr = 0x832BF8E4;
	sub_832BF118(ctx, base);
loc_832BF8E4:
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
loc_832BF8E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF8F4"))) PPC_WEAK_FUNC(sub_832BF8F4);
PPC_FUNC_IMPL(__imp__sub_832BF8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BF8F8"))) PPC_WEAK_FUNC(sub_832BF8F8);
PPC_FUNC_IMPL(__imp__sub_832BF8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BF900;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF918;
	sub_832A6DF0(ctx, base);
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bf950
	if (cr6.eq) goto loc_832BF950;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// b 0x832bf960
	goto loc_832BF960;
loc_832BF950:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832BF960:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF968;
	sub_832A6E00(ctx, base);
	// lbz r11,70(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 70);
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 68);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x825832e0
	ctx.lr = 0x832BF988;
	sub_825832E0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f8200
	ctx.lr = 0x832BF994;
	sub_831F8200(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BF9A0"))) PPC_WEAK_FUNC(sub_832BF9A0);
PPC_FUNC_IMPL(__imp__sub_832BF9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BF9A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BF9BC;
	sub_832A6DF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,69(r30)
	PPC_STORE_U8(ctx.r30.u32 + 69, ctx.r11.u8);
	// bl 0x832a6e90
	ctx.lr = 0x832BF9CC;
	sub_832A6E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BF9D4;
	sub_832A6E00(ctx, base);
	// addi r29,r30,40
	ctx.r29.s64 = ctx.r30.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6be0
	ctx.lr = 0x832BF9E0;
	sub_832A6BE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a6ba0
	ctx.lr = 0x832BF9E8;
	sub_832A6BA0(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x832a6db8
	ctx.lr = 0x832BF9F0;
	sub_832A6DB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6db8
	ctx.lr = 0x832BF9F8;
	sub_832A6DB8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BFA00"))) PPC_WEAK_FUNC(sub_832BFA00);
PPC_FUNC_IMPL(__imp__sub_832BFA00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832BFA08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x832a6df0
	ctx.lr = 0x832BFA2C;
	sub_832A6DF0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// bl 0x832a6e90
	ctx.lr = 0x832BFA3C;
	sub_832A6E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6e00
	ctx.lr = 0x832BFA44;
	sub_832A6E00(ctx, base);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6be0
	ctx.lr = 0x832BFA50;
	sub_832A6BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6ba0
	ctx.lr = 0x832BFA58;
	sub_832A6BA0(ctx, base);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf648
	ctx.lr = 0x832BFA70;
	sub_832BF648(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BFA78"))) PPC_WEAK_FUNC(sub_832BFA78);
PPC_FUNC_IMPL(__imp__sub_832BFA78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BFA80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-32232
	ctx.r30.s64 = ctx.r11.s64 + -32232;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x832BFAA4;
	sub_83294018(ctx, base);
	// bl 0x832a5950
	ctx.lr = 0x832BFAA8;
	sub_832A5950(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832bfad4
	if (cr6.gt) goto loc_832BFAD4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19496
	ctx.r4.s64 = ctx.r11.s64 + -19496;
	// addi r3,r10,-23724
	ctx.r3.s64 = ctx.r10.s64 + -23724;
	// bl 0x83298338
	ctx.lr = 0x832BFAC8;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832BFAD4:
	// lhz r29,2(r29)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832bfb30
	if (cr6.eq) goto loc_832BFB30;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b9548
	ctx.lr = 0x832BFAF4;
	sub_832B9548(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832bfb20
	if (cr6.gt) goto loc_832BFB20;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-19532
	ctx.r4.s64 = ctx.r11.s64 + -19532;
	// addi r3,r10,-23724
	ctx.r3.s64 = ctx.r10.s64 + -23724;
	// bl 0x83298338
	ctx.lr = 0x832BFB14;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832BFB20:
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,59
	ctx.r11.s64 = ctx.r11.s64 + 59;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_832BFB30:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BFB44"))) PPC_WEAK_FUNC(sub_832BFB44);
PPC_FUNC_IMPL(__imp__sub_832BFB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BFB48"))) PPC_WEAK_FUNC(sub_832BFB48);
PPC_FUNC_IMPL(__imp__sub_832BFB48) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r31,r11,-32232
	ctx.r31.s64 = ctx.r11.s64 + -32232;
	// lwz r3,-32232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832bfb70
	if (cr6.eq) goto loc_832BFB70;
	// bl 0x832b96b8
	ctx.lr = 0x832BFB70;
	sub_832B96B8(ctx, base);
loc_832BFB70:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a59f0
	ctx.lr = 0x832BFB78;
	sub_832A59F0(ctx, base);
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

__attribute__((alias("__imp__sub_832BFB8C"))) PPC_WEAK_FUNC(sub_832BFB8C);
PPC_FUNC_IMPL(__imp__sub_832BFB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BFB90"))) PPC_WEAK_FUNC(sub_832BFB90);
PPC_FUNC_IMPL(__imp__sub_832BFB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-32220
	ctx.r30.s64 = ctx.r11.s64 + -32220;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x832BFBC0;
	sub_83294018(ctx, base);
	// addi r11,r31,15
	ctx.r11.s64 = ctx.r31.s64 + 15;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// rlwinm r31,r11,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x832BFBD8;
	sub_83294018(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_832BFBE8:
	// stwu r10,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832bfbe8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BFBE8;
	// addi r3,r31,1024
	ctx.r3.s64 = ctx.r31.s64 + 1024;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_832BFC10"))) PPC_WEAK_FUNC(sub_832BFC10);
PPC_FUNC_IMPL(__imp__sub_832BFC10) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-32216
	ctx.r31.s64 = ctx.r11.s64 + -32216;
	// li r5,1500
	ctx.r5.s64 = 1500;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x832BFC40;
	sub_83294018(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1360
	ctx.r3.s64 = ctx.r31.s64 + 1360;
	// bl 0x83293ec8
	ctx.lr = 0x832BFC58;
	sub_83293EC8(ctx, base);
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

__attribute__((alias("__imp__sub_832BFC70"))) PPC_WEAK_FUNC(sub_832BFC70);
PPC_FUNC_IMPL(__imp__sub_832BFC70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832BFC78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x832c2360
	ctx.lr = 0x832BFC80;
	sub_832C2360(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r27,r11,-30688
	ctx.r27.s64 = ctx.r11.s64 + -30688;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x832ba448
	ctx.lr = 0x832BFC94;
	sub_832BA448(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832bfcb4
	if (!cr6.lt) goto loc_832BFCB4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-19376
	ctx.r4.s64 = ctx.r11.s64 + -19376;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x832982e8
	ctx.lr = 0x832BFCB4;
	sub_832982E8(ctx, base);
loc_832BFCB4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r27,156
	ctx.r3.s64 = ctx.r27.s64 + 156;
	// bl 0x832a8bf8
	ctx.lr = 0x832BFCC0;
	sub_832A8BF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832bfce0
	if (!cr6.lt) goto loc_832BFCE0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-19424
	ctx.r4.s64 = ctx.r11.s64 + -19424;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x832982e8
	ctx.lr = 0x832BFCE0;
	sub_832982E8(ctx, base);
loc_832BFCE0:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,21776
	ctx.r26.s64 = ctx.r11.s64 + 21776;
	// addi r30,r27,840
	ctx.r30.s64 = ctx.r27.s64 + 840;
	// addi r31,r26,4
	ctx.r31.s64 = ctx.r26.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_832BFCF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,156
	ctx.r4.s64 = ctx.r27.s64 + 156;
	// lwz r6,-4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x832a9d10
	ctx.lr = 0x832BFD0C;
	sub_832A9D10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832bfd38
	if (cr6.lt) goto loc_832BFD38;
	// addi r29,r29,80
	ctx.r29.s64 = ctx.r29.s64 + 80;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,80
	ctx.r30.s64 = ctx.r30.s64 + 80;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r29,240
	cr6.compare<uint32_t>(ctx.r29.u32, 240, xer);
	// blt cr6,0x832bfcf8
	if (cr6.lt) goto loc_832BFCF8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832BFD38:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r4,r10,-19460
	ctx.r4.s64 = ctx.r10.s64 + -19460;
	// addi r3,r9,27400
	ctx.r3.s64 = ctx.r9.s64 + 27400;
	// lwzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x832982e8
	ctx.lr = 0x832BFD54;
	sub_832982E8(ctx, base);
}

__attribute__((alias("__imp__sub_832BFD54"))) PPC_WEAK_FUNC(sub_832BFD54);
PPC_FUNC_IMPL(__imp__sub_832BFD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BFD58"))) PPC_WEAK_FUNC(sub_832BFD58);
PPC_FUNC_IMPL(__imp__sub_832BFD58) {
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
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x832a13d8
	ctx.lr = 0x832BFD74;
	sub_832A13D8(ctx, base);
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// bl 0x832a13d8
	ctx.lr = 0x832BFD80;
	sub_832A13D8(ctx, base);
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// bl 0x832a13d8
	ctx.lr = 0x832BFD88;
	sub_832A13D8(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r31,r11,-30688
	ctx.r31.s64 = ctx.r11.s64 + -30688;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x832a8c98
	ctx.lr = 0x832BFD98;
	sub_832A8C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ba458
	ctx.lr = 0x832BFDA0;
	sub_832BA458(ctx, base);
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

__attribute__((alias("__imp__sub_832BFDB4"))) PPC_WEAK_FUNC(sub_832BFDB4);
PPC_FUNC_IMPL(__imp__sub_832BFDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BFDB8"))) PPC_WEAK_FUNC(sub_832BFDB8);
PPC_FUNC_IMPL(__imp__sub_832BFDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BFDC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rotlwi r11,r10,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x832bfe08
	if (cr6.eq) goto loc_832BFE08;
loc_832BFDE0:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BFDF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832BFDFC;
	sub_832A1D18(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x832bfde0
	if (!cr6.eq) goto loc_832BFDE0;
loc_832BFE08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BFE10"))) PPC_WEAK_FUNC(sub_832BFE10);
PPC_FUNC_IMPL(__imp__sub_832BFE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832BFE18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,13(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r8,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x832bfe8c
	if (cr6.eq) goto loc_832BFE8C;
loc_832BFE5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832BFE80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x832bfe5c
	if (!cr6.eq) goto loc_832BFE5C;
loc_832BFE8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BFE94"))) PPC_WEAK_FUNC(sub_832BFE94);
PPC_FUNC_IMPL(__imp__sub_832BFE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BFE98"))) PPC_WEAK_FUNC(sub_832BFE98);
PPC_FUNC_IMPL(__imp__sub_832BFE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BFEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x832bff80
	if (cr6.gt) goto loc_832BFF80;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832bfed8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BFED8;
	// bdzf 4*cr6+eq,0x832bff40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832BFF40;
	// bne cr6,0x832bff40
	if (!cr6.eq) goto loc_832BFF40;
	// lbz r3,1(r27)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BFED8:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x832bff30
	if (cr6.eq) goto loc_832BFF30;
loc_832BFEF8:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832BFF18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// ble cr6,0x832bff24
	if (!cr6.gt) goto loc_832BFF24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832BFF24:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// bne cr6,0x832bfef8
	if (!cr6.eq) goto loc_832BFEF8;
loc_832BFF30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r30,1(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BFF40:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// beq cr6,0x832bff80
	if (cr6.eq) goto loc_832BFF80;
loc_832BFF58:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832BFF74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bne cr6,0x832bff58
	if (!cr6.eq) goto loc_832BFF58;
loc_832BFF80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BFF8C"))) PPC_WEAK_FUNC(sub_832BFF8C);
PPC_FUNC_IMPL(__imp__sub_832BFF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BFF90"))) PPC_WEAK_FUNC(sub_832BFF90);
PPC_FUNC_IMPL(__imp__sub_832BFF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BFF98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832BFFB8;
	sub_832A1CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832bffcc
	if (!cr6.eq) goto loc_832BFFCC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BFFCC:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,-584
	ctx.r8.s64 = ctx.r11.s64 + -584;
	// addi r7,r10,-496
	ctx.r7.s64 = ctx.r10.s64 + -496;
	// addi r6,r9,-360
	ctx.r6.s64 = ctx.r9.s64 + -360;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r28,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r28.u8);
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832C000C;
	sub_83293EC8(ctx, base);
	// lbz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// beq cr6,0x832c0058
	if (cr6.eq) goto loc_832C0058;
loc_832C0024:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832C0040;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, xer);
	// ble cr6,0x832c004c
	if (!cr6.gt) goto loc_832C004C;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_832C004C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bne cr6,0x832c0024
	if (!cr6.eq) goto loc_832C0024;
loc_832C0058:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r28,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0068"))) PPC_WEAK_FUNC(sub_832C0068);
PPC_FUNC_IMPL(__imp__sub_832C0068) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C0078"))) PPC_WEAK_FUNC(sub_832C0078);
PPC_FUNC_IMPL(__imp__sub_832C0078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C0080;
	__savegprlr_26(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x832a7a00
	ctx.lr = 0x832C008C;
	sub_832A7A00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-19324
	ctx.r5.s64 = ctx.r11.s64 + -19324;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r29,14
	ctx.r7.s64 = ctx.r29.s64 + 14;
	// bl 0x83297a40
	ctx.lr = 0x832C00A8;
	sub_83297A40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x83293ec8
	ctx.lr = 0x832C00BC;
	sub_83293EC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,336
	ctx.r30.s64 = ctx.r1.s64 + 336;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r11,-19312
	ctx.r27.s64 = ctx.r11.s64 + -19312;
	// lhz r29,12(r29)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832c00e4
	if (!cr6.eq) goto loc_832C00E4;
	// stbx r26,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r26.u8);
	// b 0x832c00f8
	goto loc_832C00F8;
loc_832C00E4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subfic r4,r31,256
	xer.ca = ctx.r31.u32 <= 256;
	ctx.r4.s64 = 256 - ctx.r31.s64;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x832C00F8;
	sub_83297A40(ctx, base);
loc_832C00F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b7e58
	ctx.lr = 0x832C0100;
	sub_832B7E58(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne 0x832c0110
	if (!cr0.eq) goto loc_832C0110;
	// stbx r26,r28,r31
	PPC_STORE_U8(ctx.r28.u32 + ctx.r31.u32, ctx.r26.u8);
	// b 0x832c0124
	goto loc_832C0124;
loc_832C0110:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subfic r4,r31,256
	xer.ca = ctx.r31.u32 <= 256;
	ctx.r4.s64 = 256 - ctx.r31.s64;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x832C0124;
	sub_83297A40(ctx, base);
loc_832C0124:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b7f70
	ctx.lr = 0x832C0134;
	sub_832B7F70(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832c00e4
	if (!cr6.eq) goto loc_832C00E4;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0150"))) PPC_WEAK_FUNC(sub_832C0150);
PPC_FUNC_IMPL(__imp__sub_832C0150) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// addi r30,r11,50
	ctx.r30.s64 = ctx.r11.s64 + 50;
	// bl 0x832a7a00
	ctx.lr = 0x832C0180;
	sub_832A7A00(ctx, base);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,-19324
	ctx.r5.s64 = ctx.r8.s64 + -19324;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,14
	ctx.r7.s64 = ctx.r31.s64 + 14;
	// bl 0x83297a40
	ctx.lr = 0x832C019C;
	sub_83297A40(ctx, base);
	// li r5,420
	ctx.r5.s64 = 420;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83299248
	ctx.lr = 0x832C01AC;
	sub_83299248(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_832C01C8"))) PPC_WEAK_FUNC(sub_832C01C8);
PPC_FUNC_IMPL(__imp__sub_832C01C8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832c01f4
	if (!cr6.gt) goto loc_832C01F4;
	// bl 0x83299380
	ctx.lr = 0x832C01EC;
	sub_83299380(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_832C01F4:
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

__attribute__((alias("__imp__sub_832C0208"))) PPC_WEAK_FUNC(sub_832C0208);
PPC_FUNC_IMPL(__imp__sub_832C0208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C0210;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,35(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 35);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x832c02e0
	if (cr6.gt) goto loc_832C02E0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832c02e0
	if (!cr6.gt) goto loc_832C02E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c0264
	if (!cr6.eq) goto loc_832C0264;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299540
	ctx.lr = 0x832C0254;
	sub_83299540(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299688
	ctx.lr = 0x832C025C;
	sub_83299688(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832C0264:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x832c02b0
	if (!cr6.gt) goto loc_832C02B0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// ble cr6,0x832c028c
	if (!cr6.gt) goto loc_832C028C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299380
	ctx.lr = 0x832C0288;
	sub_83299380(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_832C028C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0078
	ctx.lr = 0x832C0294;
	sub_832C0078(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0150
	ctx.lr = 0x832C02A0;
	sub_832C0150(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832c02e0
	if (!cr6.gt) goto loc_832C02E0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_832C02B0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299540
	ctx.lr = 0x832C02C0;
	sub_83299540(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83299688
	ctx.lr = 0x832C02CC;
	sub_83299688(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x832c02e0
	if (!cr6.gt) goto loc_832C02E0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_832C02E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C02E8"))) PPC_WEAK_FUNC(sub_832C02E8);
PPC_FUNC_IMPL(__imp__sub_832C02E8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x832c0344
	if (cr6.lt) goto loc_832C0344;
	// beq cr6,0x832c0328
	if (cr6.eq) goto loc_832C0328;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x832c0314
	if (!cr6.lt) goto loc_832C0314;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x83299688
	ctx.lr = 0x832C0314;
	sub_83299688(ctx, base);
loc_832C0314:
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
loc_832C0328:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r3,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r3.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832C0344:
	// lbz r3,35(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 35);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C0358"))) PPC_WEAK_FUNC(sub_832C0358);
PPC_FUNC_IMPL(__imp__sub_832C0358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r24,-27048(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27048);
	// lwz r17,-19280(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19280);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832C0368;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-432
	ctx.r31.s64 = ctx.r1.s64 + -432;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x832a79a8
	ctx.lr = 0x832C0380;
	sub_832A79A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c039c
	if (!cr6.eq) goto loc_832C039C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x832c061c
	goto loc_832C061C;
loc_832C039C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r6,r11,21800
	ctx.r6.s64 = ctx.r11.s64 + 21800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832b3fd0
	ctx.lr = 0x832C03B0;
	sub_832B3FD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c048c
	if (cr6.eq) goto loc_832C048C;
	// lbz r10,95(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 95);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c03d8
	if (!cr6.eq) goto loc_832C03D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x832c061c
	goto loc_832C061C;
loc_832C03D8:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832c04a0
	if (cr6.eq) goto loc_832C04A0;
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r6,r11,-29608
	ctx.r6.s64 = ctx.r11.s64 + -29608;
	// lwz r11,-29576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29576);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832c045c
	if (!cr6.eq) goto loc_832C045C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-29576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29576, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r27,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r27.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,11612
	ctx.r9.s64 = ctx.r10.s64 + 11612;
	// stw r27,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r27.u32);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r11.u8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stb r27,17(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17, ctx.r27.u8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// sth r27,18(r6)
	PPC_STORE_U16(ctx.r6.u32 + 18, ctx.r27.u16);
	// stw r27,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r27.u32);
	// stw r27,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r27.u32);
	// stw r27,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r27.u32);
loc_832C045C:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832C046C;
	sub_832B3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c048c
	if (cr6.eq) goto loc_832C048C;
	// addi r4,r31,86
	ctx.r4.s64 = ctx.r31.s64 + 86;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x832a7f00
	ctx.lr = 0x832C0484;
	sub_832A7F00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832c04b4
	if (!cr6.lt) goto loc_832C04B4;
loc_832C048C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x832c061c
	goto loc_832C061C;
loc_832C04A0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-29564
	ctx.r4.s64 = ctx.r11.s64 + -29564;
	// addi r3,r31,86
	ctx.r3.s64 = ctx.r31.s64 + 86;
	// bl 0x83296be0
	ctx.lr = 0x832C04B4;
	sub_83296BE0(ctx, base);
loc_832C04B4:
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c04cc
	if (!cr6.eq) goto loc_832C04CC;
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// stb r27,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r27.u8);
	// b 0x832c04dc
	goto loc_832C04DC;
loc_832C04CC:
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(ctx.r11.u32, 1000, xer);
	// ble cr6,0x832c04dc
	if (!cr6.gt) goto loc_832C04DC;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// sth r11,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
loc_832C04DC:
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,36
	ctx.r4.s64 = 36;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x832a1cb0
	ctx.lr = 0x832C0504;
	sub_832A1CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c0520
	if (!cr6.eq) goto loc_832C0520;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x832c061c
	goto loc_832C061C;
loc_832C0520:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,456
	ctx.r8.s64 = ctx.r11.s64 + 456;
	// addi r7,r10,520
	ctx.r7.s64 = ctx.r10.s64 + 520;
	// addi r6,r9,744
	ctx.r6.s64 = ctx.r9.s64 + 744;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r28,r30,14
	ctx.r28.s64 = ctx.r30.s64 + 14;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r31,86
	ctx.r4.s64 = ctx.r31.s64 + 86;
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// sth r11,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r11.u16);
	// bl 0x83296be0
	ctx.lr = 0x832C0570;
	sub_83296BE0(ctx, base);
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c0584
	if (cr6.eq) goto loc_832C0584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0078
	ctx.lr = 0x832C0584;
	sub_832C0078(ctx, base);
loc_832C0584:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,97(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// bl 0x832c0150
	ctx.lr = 0x832C0590;
	sub_832C0150(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832c060c
	if (cr6.gt) goto loc_832C060C;
	// bl 0x832a7a00
	ctx.lr = 0x832C059C;
	sub_832A7A00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-19324
	ctx.r5.s64 = ctx.r11.s64 + -19324;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x83297a40
	ctx.lr = 0x832C05B8;
	sub_83297A40(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832c05cc
	if (cr6.eq) goto loc_832C05CC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r7,r11,-25468
	ctx.r7.s64 = ctx.r11.s64 + -25468;
	// b 0x832c05d4
	goto loc_832C05D4;
loc_832C05CC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r7,r11,-31512
	ctx.r7.s64 = ctx.r11.s64 + -31512;
loc_832C05D4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r6,r11,-19308
	ctx.r6.s64 = ctx.r11.s64 + -19308;
	// addi r5,r10,-29208
	ctx.r5.s64 = ctx.r10.s64 + -29208;
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83298488
	ctx.lr = 0x832C05F4;
	sub_83298488(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// bl 0x832a1d18
	ctx.lr = 0x832C0604;
	sub_832A1D18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832c061c
	goto loc_832C061C;
loc_832C060C:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r11.u8);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
loc_832C061C:
	// addi r1,r31,432
	ctx.r1.s64 = ctx.r31.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0360"))) PPC_WEAK_FUNC(sub_832C0360);
PPC_FUNC_IMPL(__imp__sub_832C0360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832C0368;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-432
	ctx.r31.s64 = ctx.r1.s64 + -432;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x832a79a8
	ctx.lr = 0x832C0380;
	sub_832A79A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c039c
	if (!cr6.eq) goto loc_832C039C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x832c061c
	goto loc_832C061C;
loc_832C039C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r6,r11,21800
	ctx.r6.s64 = ctx.r11.s64 + 21800;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832b3fd0
	ctx.lr = 0x832C03B0;
	sub_832B3FD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c048c
	if (cr6.eq) goto loc_832C048C;
	// lbz r10,95(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 95);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c03d8
	if (!cr6.eq) goto loc_832C03D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// b 0x832c061c
	goto loc_832C061C;
loc_832C03D8:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832c04a0
	if (cr6.eq) goto loc_832C04A0;
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r6,r11,-29608
	ctx.r6.s64 = ctx.r11.s64 + -29608;
	// lwz r11,-29576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29576);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832c045c
	if (!cr6.eq) goto loc_832C045C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-29576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29576, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r27,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r27.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,11612
	ctx.r9.s64 = ctx.r10.s64 + 11612;
	// stw r27,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r27.u32);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r11.u8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stb r27,17(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17, ctx.r27.u8);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// sth r27,18(r6)
	PPC_STORE_U16(ctx.r6.u32 + 18, ctx.r27.u16);
	// stw r27,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r27.u32);
	// stw r27,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r27.u32);
	// stw r27,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r27.u32);
loc_832C045C:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832C046C;
	sub_832B3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c048c
	if (cr6.eq) goto loc_832C048C;
	// addi r4,r31,86
	ctx.r4.s64 = ctx.r31.s64 + 86;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x832a7f00
	ctx.lr = 0x832C0484;
	sub_832A7F00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832c04b4
	if (!cr6.lt) goto loc_832C04B4;
loc_832C048C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x832c061c
	goto loc_832C061C;
loc_832C04A0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-29564
	ctx.r4.s64 = ctx.r11.s64 + -29564;
	// addi r3,r31,86
	ctx.r3.s64 = ctx.r31.s64 + 86;
	// bl 0x83296be0
	ctx.lr = 0x832C04B4;
	sub_83296BE0(ctx, base);
loc_832C04B4:
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c04cc
	if (!cr6.eq) goto loc_832C04CC;
	// stb r27,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r27.u8);
	// stb r27,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r27.u8);
	// b 0x832c04dc
	goto loc_832C04DC;
loc_832C04CC:
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(ctx.r11.u32, 1000, xer);
	// ble cr6,0x832c04dc
	if (!cr6.gt) goto loc_832C04DC;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// sth r11,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r11.u16);
loc_832C04DC:
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,36
	ctx.r4.s64 = 36;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x832a1cb0
	ctx.lr = 0x832C0504;
	sub_832A1CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c0520
	if (!cr6.eq) goto loc_832C0520;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// b 0x832c061c
	goto loc_832C061C;
loc_832C0520:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,456
	ctx.r8.s64 = ctx.r11.s64 + 456;
	// addi r7,r10,520
	ctx.r7.s64 = ctx.r10.s64 + 520;
	// addi r6,r9,744
	ctx.r6.s64 = ctx.r9.s64 + 744;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// stw r6,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r6.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r27,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r27.u32);
	// addi r28,r30,14
	ctx.r28.s64 = ctx.r30.s64 + 14;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r31,86
	ctx.r4.s64 = ctx.r31.s64 + 86;
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// sth r11,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r11.u16);
	// bl 0x83296be0
	ctx.lr = 0x832C0570;
	sub_83296BE0(ctx, base);
	// lbz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c0584
	if (cr6.eq) goto loc_832C0584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832c0078
	ctx.lr = 0x832C0584;
	sub_832C0078(ctx, base);
loc_832C0584:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,97(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// bl 0x832c0150
	ctx.lr = 0x832C0590;
	sub_832C0150(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832c060c
	if (cr6.gt) goto loc_832C060C;
	// bl 0x832a7a00
	ctx.lr = 0x832C059C;
	sub_832A7A00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,-19324
	ctx.r5.s64 = ctx.r11.s64 + -19324;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x83297a40
	ctx.lr = 0x832C05B8;
	sub_83297A40(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x832c05cc
	if (cr6.eq) goto loc_832C05CC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r7,r11,-25468
	ctx.r7.s64 = ctx.r11.s64 + -25468;
	// b 0x832c05d4
	goto loc_832C05D4;
loc_832C05CC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r7,r11,-31512
	ctx.r7.s64 = ctx.r11.s64 + -31512;
loc_832C05D4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r6,r11,-19308
	ctx.r6.s64 = ctx.r11.s64 + -19308;
	// addi r5,r10,-29208
	ctx.r5.s64 = ctx.r10.s64 + -29208;
	// addi r8,r31,112
	ctx.r8.s64 = ctx.r31.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83298488
	ctx.lr = 0x832C05F4;
	sub_83298488(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// bl 0x832a1d18
	ctx.lr = 0x832C0604;
	sub_832A1D18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832c061c
	goto loc_832C061C;
loc_832C060C:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r11.u8);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
loc_832C061C:
	// addi r1,r31,432
	ctx.r1.s64 = ctx.r31.s64 + 432;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0624"))) PPC_WEAK_FUNC(sub_832C0624);
PPC_FUNC_IMPL(__imp__sub_832C0624) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r10,-29576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29576);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// stw r9,-29576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29576, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C0644"))) PPC_WEAK_FUNC(sub_832C0644);
PPC_FUNC_IMPL(__imp__sub_832C0644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C0648"))) PPC_WEAK_FUNC(sub_832C0648);
PPC_FUNC_IMPL(__imp__sub_832C0648) {
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
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lis r9,-31913
	ctx.r9.s64 = -2091450368;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r7,r10,11696
	ctx.r7.s64 = ctx.r10.s64 + 11696;
	// addi r6,r9,10584
	ctx.r6.s64 = ctx.r9.s64 + 10584;
	// stw r8,-12(r3)
	PPC_STORE_U32(ctx.r3.u32 + -12, ctx.r8.u32);
	// stw r7,-8(r3)
	PPC_STORE_U32(ctx.r3.u32 + -8, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r6.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x832C0694;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832a1d18
	ctx.lr = 0x832C069C;
	sub_832A1D18(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a59f0
	ctx.lr = 0x832C06A4;
	sub_832A59F0(ctx, base);
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

__attribute__((alias("__imp__sub_832C06B8"))) PPC_WEAK_FUNC(sub_832C06B8);
PPC_FUNC_IMPL(__imp__sub_832C06B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C06C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c06ec
	if (cr6.eq) goto loc_832C06EC;
	// bl 0x832c0648
	ctx.lr = 0x832C06E0;
	sub_832C0648(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832C06EC:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c0718
	if (cr6.eq) goto loc_832C0718;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C0714;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832C0718:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c074c
	if (cr6.eq) goto loc_832C074C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832C0744;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832C074C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0754"))) PPC_WEAK_FUNC(sub_832C0754);
PPC_FUNC_IMPL(__imp__sub_832C0754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C0758"))) PPC_WEAK_FUNC(sub_832C0758);
PPC_FUNC_IMPL(__imp__sub_832C0758) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x832a5a38
	ctx.lr = 0x832C0774;
	sub_832A5A38(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
	// beq cr6,0x832c0790
	if (cr6.eq) goto loc_832C0790;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832c07b4
	goto loc_832C07B4;
loc_832C0790:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_832C07B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c07dc
	if (!cr6.eq) goto loc_832C07DC;
	// bl 0x832a5ae8
	ctx.lr = 0x832C07C8;
	sub_832A5AE8(ctx, base);
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
loc_832C07DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832a5ae8
	ctx.lr = 0x832C07EC;
	sub_832A5AE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c06b8
	ctx.lr = 0x832C07F8;
	sub_832C06B8(ctx, base);
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

__attribute__((alias("__imp__sub_832C080C"))) PPC_WEAK_FUNC(sub_832C080C);
PPC_FUNC_IMPL(__imp__sub_832C080C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C0810"))) PPC_WEAK_FUNC(sub_832C0810);
PPC_FUNC_IMPL(__imp__sub_832C0810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832C0818;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x832a5a38
	ctx.lr = 0x832C0838;
	sub_832A5A38(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c0850
	if (cr6.eq) goto loc_832C0850;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x832c0870
	goto loc_832C0870;
loc_832C0850:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_832C0870:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0884;
	sub_832A5AE8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c08a4
	if (cr6.eq) goto loc_832C08A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c06b8
	ctx.lr = 0x832C089C;
	sub_832C06B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832c0924
	if (cr6.lt) goto loc_832C0924;
loc_832C08A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832C08C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5a38
	ctx.lr = 0x832C08D0;
	sub_832A5A38(ctx, base);
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832c0904
	if (!cr6.eq) goto loc_832C0904;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// b 0x832c0908
	goto loc_832C0908;
loc_832C0904:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_832C0908:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0910;
	sub_832A5AE8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c0924
	if (cr6.eq) goto loc_832C0924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0648
	ctx.lr = 0x832C0924;
	sub_832C0648(ctx, base);
loc_832C0924:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C092C"))) PPC_WEAK_FUNC(sub_832C092C);
PPC_FUNC_IMPL(__imp__sub_832C092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C0930"))) PPC_WEAK_FUNC(sub_832C0930);
PPC_FUNC_IMPL(__imp__sub_832C0930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C0938;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x832a5a38
	ctx.lr = 0x832C0948;
	sub_832A5A38(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c0960
	if (cr6.eq) goto loc_832C0960;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// b 0x832c0980
	goto loc_832C0980;
loc_832C0960:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_832C0980:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0994;
	sub_832A5AE8(ctx, base);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c09b4
	if (cr6.eq) goto loc_832C09B4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c06b8
	ctx.lr = 0x832C09AC;
	sub_832C06B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832c0a2c
	if (cr6.lt) goto loc_832C0A2C;
loc_832C09B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832C09D0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5a38
	ctx.lr = 0x832C09D8;
	sub_832A5A38(ctx, base);
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// or r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 | ctx.r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832c0a0c
	if (!cr6.eq) goto loc_832C0A0C;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x832c0a10
	goto loc_832C0A10;
loc_832C0A0C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_832C0A10:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0A18;
	sub_832A5AE8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c0a2c
	if (cr6.eq) goto loc_832C0A2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0648
	ctx.lr = 0x832C0A2C;
	sub_832C0648(ctx, base);
loc_832C0A2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0A34"))) PPC_WEAK_FUNC(sub_832C0A34);
PPC_FUNC_IMPL(__imp__sub_832C0A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C0A38"))) PPC_WEAK_FUNC(sub_832C0A38);
PPC_FUNC_IMPL(__imp__sub_832C0A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C0A40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x832c0a80
	if (cr6.gt) goto loc_832C0A80;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832c0a8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832C0A8C;
	// bdzf 4*cr6+eq,0x832c0a78
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832C0A78;
	// bne cr6,0x832c0a8c
	if (!cr6.eq) goto loc_832C0A8C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C0A78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0930
	ctx.lr = 0x832C0A80;
	sub_832C0930(ctx, base);
loc_832C0A80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C0A8C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5a38
	ctx.lr = 0x832C0A94;
	sub_832A5A38(ctx, base);
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c0acc
	if (!cr6.eq) goto loc_832C0ACC;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// beq cr6,0x832c0ac0
	if (cr6.eq) goto loc_832C0AC0;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bne cr6,0x832c0acc
	if (!cr6.eq) goto loc_832C0ACC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// b 0x832c0acc
	goto loc_832C0ACC;
loc_832C0AC0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
loc_832C0ACC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c0ae4
	if (cr6.eq) goto loc_832C0AE4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x832c0b04
	goto loc_832C0B04;
loc_832C0AE4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_832C0B04:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c0b24
	if (!cr6.eq) goto loc_832C0B24;
	// bl 0x832a5ae8
	ctx.lr = 0x832C0B18;
	sub_832A5AE8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C0B24:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0B34;
	sub_832A5AE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c06b8
	ctx.lr = 0x832C0B40;
	sub_832C06B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832c0a80
	if (cr6.lt) goto loc_832C0A80;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5a38
	ctx.lr = 0x832C0B54;
	sub_832A5A38(ctx, base);
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x832c0b88
	if (!cr6.eq) goto loc_832C0B88;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x832c0b8c
	goto loc_832C0B8C;
loc_832C0B88:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_832C0B8C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0B94;
	sub_832A5AE8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c0bb4
	if (cr6.eq) goto loc_832C0BB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c0648
	ctx.lr = 0x832C0BA8;
	sub_832C0648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C0BB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0BC0"))) PPC_WEAK_FUNC(sub_832C0BC0);
PPC_FUNC_IMPL(__imp__sub_832C0BC0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832C0BE8;
	sub_832A1CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c0c30
	if (cr6.eq) goto loc_832C0C30;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,1880
	ctx.r8.s64 = ctx.r11.s64 + 1880;
	// addi r7,r10,2064
	ctx.r7.s64 = ctx.r10.s64 + 2064;
	// addi r6,r9,2616
	ctx.r6.s64 = ctx.r9.s64 + 2616;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// bl 0x832a5950
	ctx.lr = 0x832C0C1C;
	sub_832A5950(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832c0c38
	if (cr6.gt) goto loc_832C0C38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C0C30;
	sub_832A1D18(ctx, base);
loc_832C0C30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832c0c68
	goto loc_832C0C68;
loc_832C0C38:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C0C54;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_832C0C68:
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

__attribute__((alias("__imp__sub_832C0C80"))) PPC_WEAK_FUNC(sub_832C0C80);
PPC_FUNC_IMPL(__imp__sub_832C0C80) {
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
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x832a5a38
	ctx.lr = 0x832C0CA0;
	sub_832A5A38(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832c0cb8
	if (!cr6.eq) goto loc_832C0CB8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0CB4;
	sub_832A5AE8(ctx, base);
	// b 0x832c0d04
	goto loc_832C0D04;
loc_832C0CB8:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lis r9,-31913
	ctx.r9.s64 = -2091450368;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r7,r10,11696
	ctx.r7.s64 = ctx.r10.s64 + 11696;
	// addi r6,r9,10584
	ctx.r6.s64 = ctx.r9.s64 + 10584;
	// stw r8,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r8.u32);
	// stw r7,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r7.u32);
	// stw r6,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r6.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0CE4;
	sub_832A5AE8(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x832C0CF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C0CFC;
	sub_832A1D18(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a59f0
	ctx.lr = 0x832C0D04;
	sub_832A59F0(ctx, base);
loc_832C0D04:
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

__attribute__((alias("__imp__sub_832C0D1C"))) PPC_WEAK_FUNC(sub_832C0D1C);
PPC_FUNC_IMPL(__imp__sub_832C0D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C0D20"))) PPC_WEAK_FUNC(sub_832C0D20);
PPC_FUNC_IMPL(__imp__sub_832C0D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C0D28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x832a5a38
	ctx.lr = 0x832C0D4C;
	sub_832A5A38(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832C0D70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0D78;
	sub_832A5AE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0D80"))) PPC_WEAK_FUNC(sub_832C0D80);
PPC_FUNC_IMPL(__imp__sub_832C0D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C0D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x832c0e2c
	if (cr6.gt) goto loc_832C0E2C;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832c0dc0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832C0DC0;
	// bdzf 4*cr6+eq,0x832c0e00
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832C0E00;
	// bne cr6,0x832c0e00
	if (!cr6.eq) goto loc_832C0E00;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832C0DC0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a5a38
	ctx.lr = 0x832C0DC8;
	sub_832A5A38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832C0DE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0DF4;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832C0E00:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a5a38
	ctx.lr = 0x832C0E08;
	sub_832A5A38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832C0E24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832a5ae8
	ctx.lr = 0x832C0E2C;
	sub_832A5AE8(ctx, base);
loc_832C0E2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C0E38"))) PPC_WEAK_FUNC(sub_832C0E38);
PPC_FUNC_IMPL(__imp__sub_832C0E38) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832C0E60;
	sub_832A1CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c0ea8
	if (cr6.eq) goto loc_832C0EA8;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,3200
	ctx.r8.s64 = ctx.r11.s64 + 3200;
	// addi r7,r10,3360
	ctx.r7.s64 = ctx.r10.s64 + 3360;
	// addi r6,r9,3456
	ctx.r6.s64 = ctx.r9.s64 + 3456;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// bl 0x832a5950
	ctx.lr = 0x832C0E94;
	sub_832A5950(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832c0eb0
	if (cr6.gt) goto loc_832C0EB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C0EA8;
	sub_832A1D18(ctx, base);
loc_832C0EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832c0ed4
	goto loc_832C0ED4;
loc_832C0EB0:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C0ECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832C0ED4:
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

__attribute__((alias("__imp__sub_832C0EEC"))) PPC_WEAK_FUNC(sub_832C0EEC);
PPC_FUNC_IMPL(__imp__sub_832C0EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C0EF0"))) PPC_WEAK_FUNC(sub_832C0EF0);
PPC_FUNC_IMPL(__imp__sub_832C0EF0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832C0F0C;
	sub_832A1CB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c0f24
	if (!cr6.eq) goto loc_832C0F24;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832C0F24:
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31984
	ctx.r10.s64 = -2096103424;
	// lis r7,-31913
	ctx.r7.s64 = -2091450368;
	// addi r9,r11,11696
	ctx.r9.s64 = ctx.r11.s64 + 11696;
	// addi r8,r10,11696
	ctx.r8.s64 = ctx.r10.s64 + 11696;
	// addi r6,r7,10584
	ctx.r6.s64 = ctx.r7.s64 + 10584;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C0F58"))) PPC_WEAK_FUNC(sub_832C0F58);
PPC_FUNC_IMPL(__imp__sub_832C0F58) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832c0f98
	if (cr6.eq) goto loc_832C0F98;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832c0fc0
	if (!cr6.eq) goto loc_832C0FC0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x832C0F90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x832c0fc0
	goto loc_832C0FC0;
loc_832C0F98:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c0fc0
	if (cr6.eq) goto loc_832C0FC0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C0FB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C0FB8;
	sub_832A1D18(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_832C0FC0:
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

__attribute__((alias("__imp__sub_832C0FD8"))) PPC_WEAK_FUNC(sub_832C0FD8);
PPC_FUNC_IMPL(__imp__sub_832C0FD8) {
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
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c101c
	if (cr6.eq) goto loc_832C101C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C100C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C1014;
	sub_832A1D18(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_832C101C:
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

__attribute__((alias("__imp__sub_832C1034"))) PPC_WEAK_FUNC(sub_832C1034);
PPC_FUNC_IMPL(__imp__sub_832C1034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1038"))) PPC_WEAK_FUNC(sub_832C1038);
PPC_FUNC_IMPL(__imp__sub_832C1038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,31(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832C1060"))) PPC_WEAK_FUNC(sub_832C1060);
PPC_FUNC_IMPL(__imp__sub_832C1060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C1064"))) PPC_WEAK_FUNC(sub_832C1064);
PPC_FUNC_IMPL(__imp__sub_832C1064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1068"))) PPC_WEAK_FUNC(sub_832C1068);
PPC_FUNC_IMPL(__imp__sub_832C1068) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x832c10b4
	if (cr6.gt) goto loc_832C10B4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832c1098
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832C1098;
	// bdzf 4*cr6+eq,0x832c10b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832C10B4;
	// bne cr6,0x832c10ac
	if (!cr6.eq) goto loc_832C10AC;
loc_832C1098:
	// lbz r3,19(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832C10AC:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x832c0f58
	ctx.lr = 0x832C10B4;
	sub_832C0F58(ctx, base);
loc_832C10B4:
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

__attribute__((alias("__imp__sub_832C10C8"))) PPC_WEAK_FUNC(sub_832C10C8);
PPC_FUNC_IMPL(__imp__sub_832C10C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r24,-27048(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + -27048);
	// lwz r17,-19032(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -19032);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C10D8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r6,r11,21896
	ctx.r6.s64 = ctx.r11.s64 + 21896;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-29540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29540);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c123c
	if (!cr6.eq) goto loc_832C123C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-29540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29540, ctx.r11.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// sth r29,50(r6)
	PPC_STORE_U16(ctx.r6.u32 + 50, ctx.r29.u16);
	// addi r11,r11,-19076
	ctx.r11.s64 = ctx.r11.s64 + -19076;
	// stb r29,97(r6)
	PPC_STORE_U8(ctx.r6.u32 + 97, ctx.r29.u8);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// sth r29,98(r6)
	PPC_STORE_U16(ctx.r6.u32 + 98, ctx.r29.u16);
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// addi r11,r8,-19084
	ctx.r11.s64 = ctx.r8.s64 + -19084;
	// addi r9,r9,-19108
	ctx.r9.s64 = ctx.r9.s64 + -19108;
	// stw r29,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r29.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// stw r9,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r9.u32);
	// addi r10,r10,-24700
	ctx.r10.s64 = ctx.r10.s64 + -24700;
	// stw r29,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r29.u32);
	// addi r9,r5,-19128
	ctx.r9.s64 = ctx.r5.s64 + -19128;
	// stw r29,108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 108, ctx.r29.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r10,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r10.u32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// stw r9,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r9.u32);
	// stb r11,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r11.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r7,-19148
	ctx.r10.s64 = ctx.r7.s64 + -19148;
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r9,18(r6)
	PPC_STORE_U16(ctx.r6.u32 + 18, ctx.r9.u16);
	// stw r10,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,20
	ctx.r11.s64 = 20;
	// stb r10,17(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17, ctx.r10.u8);
	// stb r9,33(r6)
	PPC_STORE_U8(ctx.r6.u32 + 33, ctx.r9.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// sth r11,34(r6)
	PPC_STORE_U16(ctx.r6.u32 + 34, ctx.r11.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,32(r6)
	PPC_STORE_U8(ctx.r6.u32 + 32, ctx.r10.u8);
	// stb r9,48(r6)
	PPC_STORE_U8(ctx.r6.u32 + 48, ctx.r9.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,49(r6)
	PPC_STORE_U8(ctx.r6.u32 + 49, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r10,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r10.u32);
	// stw r9,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r9,65(r6)
	PPC_STORE_U8(ctx.r6.u32 + 65, ctx.r9.u8);
	// stb r10,64(r6)
	PPC_STORE_U8(ctx.r6.u32 + 64, ctx.r10.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r11,66(r6)
	PPC_STORE_U16(ctx.r6.u32 + 66, ctx.r11.u16);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r9,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r9.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// stw r10,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r10.u32);
	// stb r11,80(r6)
	PPC_STORE_U8(ctx.r6.u32 + 80, ctx.r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r9,82(r6)
	PPC_STORE_U16(ctx.r6.u32 + 82, ctx.r9.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r10,81(r6)
	PPC_STORE_U8(ctx.r6.u32 + 81, ctx.r10.u8);
	// addi r8,r4,-19168
	ctx.r8.s64 = ctx.r4.s64 + -19168;
	// stw r11,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r11.u32);
	// stw r10,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r9,96(r6)
	PPC_STORE_U8(ctx.r6.u32 + 96, ctx.r9.u8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r8,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r8.u32);
loc_832C123C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832C124C;
	sub_832B3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c12f0
	if (cr6.eq) goto loc_832C12F0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832c1304
	if (cr6.eq) goto loc_832C1304;
	// lwz r11,-29540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29540);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r6,r10,-29572
	ctx.r6.s64 = ctx.r10.s64 + -29572;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832c12d4
	if (!cr6.eq) goto loc_832C12D4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-29540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29540, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r29,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r29.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// li r11,28
	ctx.r11.s64 = 28;
	// addi r9,r10,11612
	ctx.r9.s64 = ctx.r10.s64 + 11612;
	// stw r29,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r29.u32);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r11.u8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r29,17(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17, ctx.r29.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// sth r29,18(r6)
	PPC_STORE_U16(ctx.r6.u32 + 18, ctx.r29.u16);
	// stw r29,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r29.u32);
	// stw r29,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r29.u32);
	// stw r29,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r29.u32);
loc_832C12D4:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832C12E4;
	sub_832B3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c1318
	if (!cr6.eq) goto loc_832C1318;
loc_832C12F0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x832c143c
	goto loc_832C143C;
loc_832C1304:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-29564
	ctx.r4.s64 = ctx.r11.s64 + -29564;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x83296be0
	ctx.lr = 0x832C1318;
	sub_83296BE0(ctx, base);
loc_832C1318:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x832b8998
	ctx.lr = 0x832C1320;
	sub_832B8998(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x832b8998
	ctx.lr = 0x832C132C;
	sub_832B8998(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832c12f0
	if (cr6.lt) goto loc_832C12F0;
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// ble cr6,0x832c1344
	if (!cr6.gt) goto loc_832C1344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832C1344:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sth r30,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r30.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r3,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r3.u16);
	// bne cr6,0x832c1364
	if (!cr6.eq) goto loc_832C1364;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x832c1384
	goto loc_832C1384;
loc_832C1364:
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// bgt cr6,0x832c1378
	if (cr6.gt) goto loc_832C1378;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x832c1384
	goto loc_832C1384;
loc_832C1378:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_832C1384:
	// lhz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c1398
	if (!cr6.eq) goto loc_832C1398;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
loc_832C1398:
	// lbz r10,90(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 90);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c1438
	if (cr6.eq) goto loc_832C1438;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x832a1cb0
	ctx.lr = 0x832C13B4;
	sub_832A1CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c13d0
	if (!cr6.eq) goto loc_832C13D0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x832c143c
	goto loc_832C143C;
loc_832C13D0:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,4056
	ctx.r8.s64 = ctx.r11.s64 + 4056;
	// addi r7,r10,4152
	ctx.r7.s64 = ctx.r10.s64 + 4152;
	// addi r6,r9,4200
	ctx.r6.s64 = ctx.r9.s64 + 4200;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// bl 0x83296be0
	ctx.lr = 0x832C1408;
	sub_83296BE0(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
	// lhz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// sth r4,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r4.u16);
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// stb r11,31(r30)
	PPC_STORE_U8(ctx.r30.u32 + 31, ctx.r11.u8);
	// lhz r9,86(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// stb r9,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r9.u8);
	// lbz r7,91(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 91);
	// stb r7,33(r30)
	PPC_STORE_U8(ctx.r30.u32 + 33, ctx.r7.u8);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_832C1438:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_832C143C:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C10D0"))) PPC_WEAK_FUNC(sub_832C10D0);
PPC_FUNC_IMPL(__imp__sub_832C10D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C10D8;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r6,r11,21896
	ctx.r6.s64 = ctx.r11.s64 + 21896;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,-29540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29540);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c123c
	if (!cr6.eq) goto loc_832C123C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-29540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29540, ctx.r11.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// sth r29,50(r6)
	PPC_STORE_U16(ctx.r6.u32 + 50, ctx.r29.u16);
	// addi r11,r11,-19076
	ctx.r11.s64 = ctx.r11.s64 + -19076;
	// stb r29,97(r6)
	PPC_STORE_U8(ctx.r6.u32 + 97, ctx.r29.u8);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// sth r29,98(r6)
	PPC_STORE_U16(ctx.r6.u32 + 98, ctx.r29.u16);
	// stw r11,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// addi r11,r8,-19084
	ctx.r11.s64 = ctx.r8.s64 + -19084;
	// addi r9,r9,-19108
	ctx.r9.s64 = ctx.r9.s64 + -19108;
	// stw r29,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, ctx.r29.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// lis r5,-32220
	ctx.r5.s64 = -2111569920;
	// stw r9,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r9.u32);
	// addi r10,r10,-24700
	ctx.r10.s64 = ctx.r10.s64 + -24700;
	// stw r29,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, ctx.r29.u32);
	// addi r9,r5,-19128
	ctx.r9.s64 = ctx.r5.s64 + -19128;
	// stw r29,108(r6)
	PPC_STORE_U32(ctx.r6.u32 + 108, ctx.r29.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r10,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r10.u32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// stw r9,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r9.u32);
	// stb r11,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r11.u8);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r7,-19148
	ctx.r10.s64 = ctx.r7.s64 + -19148;
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r9,18(r6)
	PPC_STORE_U16(ctx.r6.u32 + 18, ctx.r9.u16);
	// stw r10,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,20
	ctx.r11.s64 = 20;
	// stb r10,17(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17, ctx.r10.u8);
	// stb r9,33(r6)
	PPC_STORE_U8(ctx.r6.u32 + 33, ctx.r9.u8);
	// li r10,10
	ctx.r10.s64 = 10;
	// sth r11,34(r6)
	PPC_STORE_U16(ctx.r6.u32 + 34, ctx.r11.u16);
	// li r9,7
	ctx.r9.s64 = 7;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,32(r6)
	PPC_STORE_U8(ctx.r6.u32 + 32, ctx.r10.u8);
	// stb r9,48(r6)
	PPC_STORE_U8(ctx.r6.u32 + 48, ctx.r9.u8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r11,49(r6)
	PPC_STORE_U8(ctx.r6.u32 + 49, ctx.r11.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r10,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r10.u32);
	// stw r9,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r9.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r9,65(r6)
	PPC_STORE_U8(ctx.r6.u32 + 65, ctx.r9.u8);
	// stb r10,64(r6)
	PPC_STORE_U8(ctx.r6.u32 + 64, ctx.r10.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r11,66(r6)
	PPC_STORE_U16(ctx.r6.u32 + 66, ctx.r11.u16);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r9,76(r6)
	PPC_STORE_U32(ctx.r6.u32 + 76, ctx.r9.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// lis r4,-32220
	ctx.r4.s64 = -2111569920;
	// stw r10,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r10.u32);
	// stb r11,80(r6)
	PPC_STORE_U8(ctx.r6.u32 + 80, ctx.r11.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r9,82(r6)
	PPC_STORE_U16(ctx.r6.u32 + 82, ctx.r9.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r10,81(r6)
	PPC_STORE_U8(ctx.r6.u32 + 81, ctx.r10.u8);
	// addi r8,r4,-19168
	ctx.r8.s64 = ctx.r4.s64 + -19168;
	// stw r11,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r11.u32);
	// stw r10,92(r6)
	PPC_STORE_U32(ctx.r6.u32 + 92, ctx.r10.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stb r9,96(r6)
	PPC_STORE_U8(ctx.r6.u32 + 96, ctx.r9.u8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r8,88(r6)
	PPC_STORE_U32(ctx.r6.u32 + 88, ctx.r8.u32);
loc_832C123C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832C124C;
	sub_832B3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c12f0
	if (cr6.eq) goto loc_832C12F0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832c1304
	if (cr6.eq) goto loc_832C1304;
	// lwz r11,-29540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29540);
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r6,r10,-29572
	ctx.r6.s64 = ctx.r10.s64 + -29572;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832c12d4
	if (!cr6.eq) goto loc_832C12D4;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-29540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -29540, ctx.r11.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r29,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r29.u8);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// li r11,28
	ctx.r11.s64 = 28;
	// addi r9,r10,11612
	ctx.r9.s64 = ctx.r10.s64 + 11612;
	// stw r29,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r29.u32);
	// sth r11,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r11.u16);
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stb r11,16(r6)
	PPC_STORE_U8(ctx.r6.u32 + 16, ctx.r11.u8);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stb r29,17(r6)
	PPC_STORE_U8(ctx.r6.u32 + 17, ctx.r29.u8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// sth r29,18(r6)
	PPC_STORE_U16(ctx.r6.u32 + 18, ctx.r29.u16);
	// stw r29,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r29.u32);
	// stw r29,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r29.u32);
	// stw r29,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r29.u32);
loc_832C12D4:
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832C12E4;
	sub_832B3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c1318
	if (!cr6.eq) goto loc_832C1318;
loc_832C12F0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x832c143c
	goto loc_832C143C;
loc_832C1304:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r11,-29564
	ctx.r4.s64 = ctx.r11.s64 + -29564;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x83296be0
	ctx.lr = 0x832C1318;
	sub_83296BE0(ctx, base);
loc_832C1318:
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x832b8998
	ctx.lr = 0x832C1320;
	sub_832B8998(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x832b8998
	ctx.lr = 0x832C132C;
	sub_832B8998(ctx, base);
	// or r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 | ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832c12f0
	if (cr6.lt) goto loc_832C12F0;
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// ble cr6,0x832c1344
	if (!cr6.gt) goto loc_832C1344;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832C1344:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sth r30,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r30.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// sth r3,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r3.u16);
	// bne cr6,0x832c1364
	if (!cr6.eq) goto loc_832C1364;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x832c1384
	goto loc_832C1384;
loc_832C1364:
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(ctx.r11.u32, 512, xer);
	// bgt cr6,0x832c1378
	if (cr6.gt) goto loc_832C1378;
	// li r11,512
	ctx.r11.s64 = 512;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x832c1384
	goto loc_832C1384;
loc_832C1378:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_832C1384:
	// lhz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c1398
	if (!cr6.eq) goto loc_832C1398;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
loc_832C1398:
	// lbz r10,90(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 90);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c1438
	if (cr6.eq) goto loc_832C1438;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x832a1cb0
	ctx.lr = 0x832C13B4;
	sub_832A1CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c13d0
	if (!cr6.eq) goto loc_832C13D0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x832c143c
	goto loc_832C143C;
loc_832C13D0:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,4056
	ctx.r8.s64 = ctx.r11.s64 + 4056;
	// addi r7,r10,4152
	ctx.r7.s64 = ctx.r10.s64 + 4152;
	// addi r6,r9,4200
	ctx.r6.s64 = ctx.r9.s64 + 4200;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r31,108
	ctx.r4.s64 = ctx.r31.s64 + 108;
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// bl 0x83296be0
	ctx.lr = 0x832C1408;
	sub_83296BE0(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
	// lhz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// sth r4,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r4.u16);
	// lhz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 84);
	// stb r11,31(r30)
	PPC_STORE_U8(ctx.r30.u32 + 31, ctx.r11.u8);
	// lhz r9,86(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// stb r9,32(r30)
	PPC_STORE_U8(ctx.r30.u32 + 32, ctx.r9.u8);
	// lbz r7,91(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 91);
	// stb r7,33(r30)
	PPC_STORE_U8(ctx.r30.u32 + 33, ctx.r7.u8);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
loc_832C1438:
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
loc_832C143C:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1444"))) PPC_WEAK_FUNC(sub_832C1444);
PPC_FUNC_IMPL(__imp__sub_832C1444) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r10,-29540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29540);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// stw r9,-29540(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29540, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C1464"))) PPC_WEAK_FUNC(sub_832C1464);
PPC_FUNC_IMPL(__imp__sub_832C1464) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r10,-29540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29540);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// stw r9,-29540(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29540, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C1484"))) PPC_WEAK_FUNC(sub_832C1484);
PPC_FUNC_IMPL(__imp__sub_832C1484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1488"))) PPC_WEAK_FUNC(sub_832C1488);
PPC_FUNC_IMPL(__imp__sub_832C1488) {
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
	// bl 0x832be7b0
	ctx.lr = 0x832C14A0;
	sub_832BE7B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832c14c8
	if (cr6.gt) goto loc_832C14C8;
	// lis r3,-32763
	ctx.r3.s64 = -2147155968;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
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
loc_832C14C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_832C14F0"))) PPC_WEAK_FUNC(sub_832C14F0);
PPC_FUNC_IMPL(__imp__sub_832C14F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C14F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c154c
	if (cr6.eq) goto loc_832C154C;
loc_832C150C:
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2ef0
	ctx.lr = 0x832C1518;
	sub_832C2EF0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2f40
	ctx.lr = 0x832C1520;
	sub_832C2F40(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c1538
	if (cr6.eq) goto loc_832C1538;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C1538;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C1538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C1540;
	sub_832A1D18(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832c150c
	if (!cr6.eq) goto loc_832C150C;
loc_832C154C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832c1564
	if (!cr6.gt) goto loc_832C1564;
	// bl 0x832be850
	ctx.lr = 0x832C155C;
	sub_832BE850(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_832C1564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C156C"))) PPC_WEAK_FUNC(sub_832C156C);
PPC_FUNC_IMPL(__imp__sub_832C156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1570"))) PPC_WEAK_FUNC(sub_832C1570);
PPC_FUNC_IMPL(__imp__sub_832C1570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C1578;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x832a1cb0
	ctx.lr = 0x832C15A4;
	sub_832A1CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c15d0
	if (cr6.eq) goto loc_832C15D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c2b40
	ctx.lr = 0x832C15BC;
	sub_832C2B40(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c15dc
	if (!cr6.eq) goto loc_832C15DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C15D0;
	sub_832A1D18(ctx, base);
loc_832C15D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832C15DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r30,28(r31)
	PPC_STORE_U16(ctx.r31.u32 + 28, ctx.r30.u16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r11.u8);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x832be898
	ctx.lr = 0x832C1604;
	sub_832BE898(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x832be9a8
	ctx.lr = 0x832C161C;
	sub_832BE9A8(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x832be8d0
	ctx.lr = 0x832C1624;
	sub_832BE8D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1630"))) PPC_WEAK_FUNC(sub_832C1630);
PPC_FUNC_IMPL(__imp__sub_832C1630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832C1638;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x832be898
	ctx.lr = 0x832C1648;
	sub_832BE898(ctx, base);
loc_832C1648:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c16cc
	if (cr6.eq) goto loc_832C16CC;
loc_832C1660:
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lhz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 28);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2e08
	ctx.lr = 0x832C1674;
	sub_832C2E08(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832c16a4
	if (!cr6.lt) goto loc_832C16A4;
	// lbz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c16b0
	if (cr6.eq) goto loc_832C16B0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832c1698
	if (cr6.eq) goto loc_832C1698;
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
loc_832C1698:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2ef0
	ctx.lr = 0x832C16A0;
	sub_832C2EF0(ctx, base);
	// b 0x832c16c0
	goto loc_832C16C0;
loc_832C16A4:
	// ble cr6,0x832c16b0
	if (!cr6.gt) goto loc_832C16B0;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_832C16B0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x832c16bc
	if (!cr6.eq) goto loc_832C16BC;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_832C16BC:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_832C16C0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832c1660
	if (!cr6.eq) goto loc_832C1660;
loc_832C16CC:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r28,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
	// bne cr6,0x832c1704
	if (!cr6.eq) goto loc_832C1704;
	// lbz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c171c
	if (!cr6.eq) goto loc_832C171C;
	// lbz r11,13(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c173c
	if (!cr6.eq) goto loc_832C173C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x832be908
	ctx.lr = 0x832C1700;
	sub_832BE908(ctx, base);
	// b 0x832c1648
	goto loc_832C1648;
loc_832C1704:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x832be8d0
	ctx.lr = 0x832C1710;
	sub_832BE8D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832C171C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,12(r26)
	PPC_STORE_U8(ctx.r26.u32 + 12, ctx.r11.u8);
	// bl 0x832be8d0
	ctx.lr = 0x832C1730;
	sub_832BE8D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832C173C:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x832be8d0
	ctx.lr = 0x832C1748;
	sub_832BE8D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1754"))) PPC_WEAK_FUNC(sub_832C1754);
PPC_FUNC_IMPL(__imp__sub_832C1754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1758"))) PPC_WEAK_FUNC(sub_832C1758);
PPC_FUNC_IMPL(__imp__sub_832C1758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c177c
	if (cr6.eq) goto loc_832C177C;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_832C177C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C1790"))) PPC_WEAK_FUNC(sub_832C1790);
PPC_FUNC_IMPL(__imp__sub_832C1790) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2e50
	ctx.lr = 0x832C17BC;
	sub_832C2E50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832C17DC"))) PPC_WEAK_FUNC(sub_832C17DC);
PPC_FUNC_IMPL(__imp__sub_832C17DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C17E0"))) PPC_WEAK_FUNC(sub_832C17E0);
PPC_FUNC_IMPL(__imp__sub_832C17E0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x832be898
	ctx.lr = 0x832C1800;
	sub_832BE898(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832c1828
	if (cr6.eq) goto loc_832C1828;
loc_832C180C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2da0
	ctx.lr = 0x832C1814;
	sub_832C2DA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2ea0
	ctx.lr = 0x832C181C;
	sub_832C2EA0(ctx, base);
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832c180c
	if (!cr6.eq) goto loc_832C180C;
loc_832C1828:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stb r11,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r11.u8);
	// bl 0x832be9a8
	ctx.lr = 0x832C1838;
	sub_832BE9A8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832be8d0
	ctx.lr = 0x832C1840;
	sub_832BE8D0(ctx, base);
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

__attribute__((alias("__imp__sub_832C1858"))) PPC_WEAK_FUNC(sub_832C1858);
PPC_FUNC_IMPL(__imp__sub_832C1858) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x832c2be8
	ctx.lr = 0x832C1878;
	sub_832C2BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832c18a0
	if (!cr6.gt) goto loc_832C18A0;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832be898
	ctx.lr = 0x832C1890;
	sub_832BE898(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832be9a8
	ctx.lr = 0x832C1898;
	sub_832BE9A8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832be8d0
	ctx.lr = 0x832C18A0;
	sub_832BE8D0(ctx, base);
loc_832C18A0:
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

__attribute__((alias("__imp__sub_832C18BC"))) PPC_WEAK_FUNC(sub_832C18BC);
PPC_FUNC_IMPL(__imp__sub_832C18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C18C0"))) PPC_WEAK_FUNC(sub_832C18C0);
PPC_FUNC_IMPL(__imp__sub_832C18C0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x832c2da0
	ctx.lr = 0x832C18DC;
	sub_832C2DA0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c1904
	if (cr6.eq) goto loc_832C1904;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832be898
	ctx.lr = 0x832C18F4;
	sub_832BE898(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832be9a8
	ctx.lr = 0x832C18FC;
	sub_832BE9A8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832be8d0
	ctx.lr = 0x832C1904;
	sub_832BE8D0(ctx, base);
loc_832C1904:
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

__attribute__((alias("__imp__sub_832C1918"))) PPC_WEAK_FUNC(sub_832C1918);
PPC_FUNC_IMPL(__imp__sub_832C1918) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r11.u8);
	// bl 0x832c2da0
	ctx.lr = 0x832C1940;
	sub_832C2DA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2ea0
	ctx.lr = 0x832C1948;
	sub_832C2EA0(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832be898
	ctx.lr = 0x832C1954;
	sub_832BE898(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832be9a8
	ctx.lr = 0x832C195C;
	sub_832BE9A8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832be8d0
	ctx.lr = 0x832C1964;
	sub_832BE8D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x832c2f40
	ctx.lr = 0x832C196C;
	sub_832C2F40(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c1984
	if (cr6.eq) goto loc_832C1984;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832C1984;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832C1984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C198C;
	sub_832A1D18(ctx, base);
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

__attribute__((alias("__imp__sub_832C19A4"))) PPC_WEAK_FUNC(sub_832C19A4);
PPC_FUNC_IMPL(__imp__sub_832C19A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C19A8"))) PPC_WEAK_FUNC(sub_832C19A8);
PPC_FUNC_IMPL(__imp__sub_832C19A8) {
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
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x832c19e0
	if (cr6.eq) goto loc_832C19E0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-18912
	ctx.r4.s64 = ctx.r11.s64 + -18912;
	// b 0x832c1a08
	goto loc_832C1A08;
loc_832C19E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1510
	ctx.lr = 0x832C19EC;
	sub_832A1510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c1a00
	if (cr6.eq) goto loc_832C1A00;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x832c1a20
	goto loc_832C1A20;
loc_832C1A00:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-18936
	ctx.r4.s64 = ctx.r11.s64 + -18936;
loc_832C1A08:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x83298338
	ctx.lr = 0x832C1A1C;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C1A20:
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

__attribute__((alias("__imp__sub_832C1A38"))) PPC_WEAK_FUNC(sub_832C1A38);
PPC_FUNC_IMPL(__imp__sub_832C1A38) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c1a80
	if (!cr6.eq) goto loc_832C1A80;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25436
	ctx.r4.s64 = ctx.r11.s64 + -25436;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x83298338
	ctx.lr = 0x832C1A64;
	sub_83298338(ctx, base);
	// lis r3,-32762
	ctx.r3.s64 = -2147090432;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832C1A80:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x832be348
	ctx.lr = 0x832C1A88;
	sub_832BE348(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c1ab8
	if (cr6.eq) goto loc_832C1AB8;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-7200
	ctx.r4.s64 = ctx.r11.s64 + -7200;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x832a1350
	ctx.lr = 0x832C1AA8;
	sub_832A1350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832c1ad4
	if (cr6.gt) goto loc_832C1AD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832be3e0
	ctx.lr = 0x832C1AB8;
	sub_832BE3E0(ctx, base);
loc_832C1AB8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-18880
	ctx.r4.s64 = ctx.r11.s64 + -18880;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x83298338
	ctx.lr = 0x832C1ACC;
	sub_83298338(ctx, base);
	// lis r3,-32762
	ctx.r3.s64 = -2147090432;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_832C1AD4:
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

__attribute__((alias("__imp__sub_832C1AE8"))) PPC_WEAK_FUNC(sub_832C1AE8);
PPC_FUNC_IMPL(__imp__sub_832C1AE8) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// bl 0x832c19a8
	ctx.lr = 0x832C1B0C;
	sub_832C19A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c1b1c
	if (cr6.eq) goto loc_832C1B1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832C1B1C;
	sub_832A13D8(ctx, base);
loc_832C1B1C:
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

__attribute__((alias("__imp__sub_832C1B30"))) PPC_WEAK_FUNC(sub_832C1B30);
PPC_FUNC_IMPL(__imp__sub_832C1B30) {
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
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,32432
	ctx.r3.s64 = ctx.r11.s64 + 32432;
	// bl 0x832c19a8
	ctx.lr = 0x832C1B54;
	sub_832C19A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c1b78
	if (!cr6.eq) goto loc_832C1B78;
	// lis r3,-32762
	ctx.r3.s64 = -2147090432;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_832C1B78:
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(ctx.r31.u64, 0, xer);
	// ble cr6,0x832c1b90
	if (!cr6.gt) goto loc_832C1B90;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832be498
	ctx.lr = 0x832C1B8C;
	sub_832BE498(ctx, base);
	// b 0x832c1b94
	goto loc_832C1B94;
loc_832C1B90:
	// bl 0x832be5a0
	ctx.lr = 0x832C1B94;
	sub_832BE5A0(ctx, base);
loc_832C1B94:
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C1BB4"))) PPC_WEAK_FUNC(sub_832C1BB4);
PPC_FUNC_IMPL(__imp__sub_832C1BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1BB8"))) PPC_WEAK_FUNC(sub_832C1BB8);
PPC_FUNC_IMPL(__imp__sub_832C1BB8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// bne cr6,0x832c1c04
	if (!cr6.eq) goto loc_832C1C04;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-18840
	ctx.r4.s64 = ctx.r11.s64 + -18840;
	// addi r3,r10,-26440
	ctx.r3.s64 = ctx.r10.s64 + -26440;
	// bl 0x83298338
	ctx.lr = 0x832C1BE8;
	sub_83298338(ctx, base);
	// lis r3,-32762
	ctx.r3.s64 = -2147090432;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832C1C04:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-18852
	ctx.r3.s64 = ctx.r11.s64 + -18852;
	// bl 0x832c19a8
	ctx.lr = 0x832C1C14;
	sub_832C19A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c1c38
	if (!cr6.eq) goto loc_832C1C38;
	// lis r3,-32762
	ctx.r3.s64 = -2147090432;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_832C1C38:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832be498
	ctx.lr = 0x832C1C44;
	sub_832BE498(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C1C64"))) PPC_WEAK_FUNC(sub_832C1C64);
PPC_FUNC_IMPL(__imp__sub_832C1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1C68"))) PPC_WEAK_FUNC(sub_832C1C68);
PPC_FUNC_IMPL(__imp__sub_832C1C68) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x832a6d20
	ctx.lr = 0x832C1C84;
	sub_832A6D20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832c1ca8
	if (!cr6.lt) goto loc_832C1CA8;
	// lis r3,-32763
	ctx.r3.s64 = -2147155968;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
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
loc_832C1CA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832C1CCC"))) PPC_WEAK_FUNC(sub_832C1CCC);
PPC_FUNC_IMPL(__imp__sub_832C1CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1CD0"))) PPC_WEAK_FUNC(sub_832C1CD0);
PPC_FUNC_IMPL(__imp__sub_832C1CD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x832a6db8
	sub_832A6DB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1CD8"))) PPC_WEAK_FUNC(sub_832C1CD8);
PPC_FUNC_IMPL(__imp__sub_832C1CD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x832a6df0
	sub_832A6DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1CE0"))) PPC_WEAK_FUNC(sub_832C1CE0);
PPC_FUNC_IMPL(__imp__sub_832C1CE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x832a6e00
	sub_832A6E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1CE8"))) PPC_WEAK_FUNC(sub_832C1CE8);
PPC_FUNC_IMPL(__imp__sub_832C1CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C1CF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c1d1c
	if (!cr6.eq) goto loc_832C1D1C;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// b 0x832c1d20
	goto loc_832C1D20;
loc_832C1D1C:
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
loc_832C1D20:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6e08
	ctx.lr = 0x832C1D3C;
	sub_832A6E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c1d6c
	if (cr6.eq) goto loc_832C1D6C;
loc_832C1D48:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832c1da8
	if (!cr6.eq) goto loc_832C1DA8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a6e08
	ctx.lr = 0x832C1D60;
	sub_832A6E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c1d48
	if (!cr6.eq) goto loc_832C1D48;
loc_832C1D6C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c1d84
	if (!cr6.eq) goto loc_832C1D84;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x832c1d88
	goto loc_832C1D88;
loc_832C1D84:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_832C1D88:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c1da0
	if (!cr6.eq) goto loc_832C1DA0;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C1DA0:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C1DA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1DB0"))) PPC_WEAK_FUNC(sub_832C1DB0);
PPC_FUNC_IMPL(__imp__sub_832C1DB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x832c1dd8
	if (!cr6.eq) goto loc_832C1DD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x832c1de0
	goto loc_832C1DE0;
loc_832C1DD8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_832C1DE0:
	// stw r4,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r4.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x832a6e90
	sub_832A6E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1DEC"))) PPC_WEAK_FUNC(sub_832C1DEC);
PPC_FUNC_IMPL(__imp__sub_832C1DEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C1DF0"))) PPC_WEAK_FUNC(sub_832C1DF0);
PPC_FUNC_IMPL(__imp__sub_832C1DF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c1e10
	if (cr6.eq) goto loc_832C1E10;
loc_832C1E00:
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c1e00
	if (!cr6.eq) goto loc_832C1E00;
loc_832C1E10:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x832a6ea0
	sub_832A6EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C1E24"))) PPC_WEAK_FUNC(sub_832C1E24);
PPC_FUNC_IMPL(__imp__sub_832C1E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C1E28"))) PPC_WEAK_FUNC(sub_832C1E28);
PPC_FUNC_IMPL(__imp__sub_832C1E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// beq cr6,0x832c1f20
	if (cr6.eq) goto loc_832C1F20;
	// lbz r11,3(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// blt cr6,0x832c1f20
	if (cr6.lt) goto loc_832C1F20;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// cmpw cr6,r4,r7
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, xer);
	// bne cr6,0x832c1ea0
	if (!cr6.eq) goto loc_832C1EA0;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// lhzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bge cr6,0x832c1f20
	if (!cr6.lt) goto loc_832C1F20;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_832C1EA0:
	// lbz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r7,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r7.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x832c1f04
	if (cr6.lt) goto loc_832C1F04;
loc_832C1EDC:
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// beq cr6,0x832c1f04
	if (cr6.eq) goto loc_832C1F04;
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bge cr6,0x832c1edc
	if (!cr6.lt) goto loc_832C1EDC;
loc_832C1F04:
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r7,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// stb r11,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r11.u8);
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stb r4,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r4.u8);
	// stb r4,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
loc_832C1F20:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C1F28"))) PPC_WEAK_FUNC(sub_832C1F28);
PPC_FUNC_IMPL(__imp__sub_832C1F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r8,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// beq cr6,0x832c2024
	if (cr6.eq) goto loc_832C2024;
	// lbz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 2);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bgt cr6,0x832c2024
	if (cr6.gt) goto loc_832C2024;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r3
	ctx.r6.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lbz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// extsb r6,r5
	ctx.r6.s64 = ctx.r5.s8;
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// bne cr6,0x832c1fa0
	if (!cr6.eq) goto loc_832C1FA0;
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c1f9c
	if (!cr6.lt) goto loc_832C1F9C;
	// stw r4,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r4.u32);
	// blr 
	return;
loc_832C1F9C:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_832C1FA0:
	// lbz r10,3(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 3);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bgt cr6,0x832c2008
	if (cr6.gt) goto loc_832C2008;
loc_832C1FD8:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, xer);
	// beq cr6,0x832c2004
	if (cr6.eq) goto loc_832C2004;
	// lbz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// ble cr6,0x832c1fd8
	if (!cr6.gt) goto loc_832C1FD8;
	// b 0x832c2008
	goto loc_832C2008;
loc_832C2004:
	// stw r4,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r4.u32);
loc_832C2008:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r11.u8);
	// extsb r5,r4
	ctx.r5.s64 = ctx.r4.s8;
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stb r5,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r5.u8);
	// stb r5,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r5.u8);
loc_832C2024:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C202C"))) PPC_WEAK_FUNC(sub_832C202C);
PPC_FUNC_IMPL(__imp__sub_832C202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2030"))) PPC_WEAK_FUNC(sub_832C2030);
PPC_FUNC_IMPL(__imp__sub_832C2030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832C2040:
	// stbu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x832c2040
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C2040;
	// li r11,63
	ctx.r11.s64 = 63;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x832c20a4
	if (cr6.eq) goto loc_832C20A4;
	// li r10,252
	ctx.r10.s64 = 252;
	// li r8,-4
	ctx.r8.s64 = -4;
	// addi r7,r3,3
	ctx.r7.s64 = ctx.r3.s64 + 3;
loc_832C2064:
	// cmpdi cr6,r4,0
	cr6.compare<int64_t>(ctx.r4.s64, 0, xer);
	// bge cr6,0x832c2090
	if (!cr6.lt) goto loc_832C2090;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x832c2084
	if (cr6.lt) goto loc_832C2084;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stb r11,2(r8)
	PPC_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x832c2088
	goto loc_832C2088;
loc_832C2084:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_832C2088:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_832C2090:
	// rldicr r4,r4,1,62
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// bne cr6,0x832c2064
	if (!cr6.eq) goto loc_832C2064;
loc_832C20A4:
	// stw r9,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r9.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// stb r9,3(r8)
	PPC_STORE_U8(ctx.r8.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C20CC"))) PPC_WEAK_FUNC(sub_832C20CC);
PPC_FUNC_IMPL(__imp__sub_832C20CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C20D0"))) PPC_WEAK_FUNC(sub_832C20D0);
PPC_FUNC_IMPL(__imp__sub_832C20D0) {
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
	// lwz r31,256(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x832c20f4
	if (cr6.lt) goto loc_832C20F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832c1e28
	ctx.lr = 0x832C20F4;
	sub_832C1E28(ctx, base);
loc_832C20F4:
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

__attribute__((alias("__imp__sub_832C210C"))) PPC_WEAK_FUNC(sub_832C210C);
PPC_FUNC_IMPL(__imp__sub_832C210C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2110"))) PPC_WEAK_FUNC(sub_832C2110);
PPC_FUNC_IMPL(__imp__sub_832C2110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x832c2130
	if (cr6.lt) goto loc_832C2130;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x832c2134
	if (cr6.lt) goto loc_832C2134;
loc_832C2130:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832C2134:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x832c1e28
	sub_832C1E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C2144"))) PPC_WEAK_FUNC(sub_832C2144);
PPC_FUNC_IMPL(__imp__sub_832C2144) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C2148"))) PPC_WEAK_FUNC(sub_832C2148);
PPC_FUNC_IMPL(__imp__sub_832C2148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x832c2168
	if (cr6.lt) goto loc_832C2168;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x832c216c
	if (cr6.lt) goto loc_832C216C;
loc_832C2168:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832C216C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x832c1f28
	sub_832C1F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C217C"))) PPC_WEAK_FUNC(sub_832C217C);
PPC_FUNC_IMPL(__imp__sub_832C217C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C2180"))) PPC_WEAK_FUNC(sub_832C2180);
PPC_FUNC_IMPL(__imp__sub_832C2180) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C218C"))) PPC_WEAK_FUNC(sub_832C218C);
PPC_FUNC_IMPL(__imp__sub_832C218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2190"))) PPC_WEAK_FUNC(sub_832C2190);
PPC_FUNC_IMPL(__imp__sub_832C2190) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C219C"))) PPC_WEAK_FUNC(sub_832C219C);
PPC_FUNC_IMPL(__imp__sub_832C219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C21A0"))) PPC_WEAK_FUNC(sub_832C21A0);
PPC_FUNC_IMPL(__imp__sub_832C21A0) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-19328
	ctx.r4.s64 = ctx.r11.s64 + -19328;
	// bl 0x83296d78
	ctx.lr = 0x832C21CC;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832c21f0
	if (cr6.eq) goto loc_832C21F0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,26656
	ctx.r4.s64 = ctx.r11.s64 + 26656;
	// bl 0x83296d78
	ctx.lr = 0x832C21E4;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x832c21f4
	if (!cr6.eq) goto loc_832C21F4;
loc_832C21F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832C21F4:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_832C2214"))) PPC_WEAK_FUNC(sub_832C2214);
PPC_FUNC_IMPL(__imp__sub_832C2214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2218"))) PPC_WEAK_FUNC(sub_832C2218);
PPC_FUNC_IMPL(__imp__sub_832C2218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C2220;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x832c2278
	if (!cr6.gt) goto loc_832C2278;
	// li r28,0
	ctx.r28.s64 = 0;
loc_832C223C:
	// cmpwi cr6,r30,256
	cr6.compare<int32_t>(ctx.r30.s32, 256, xer);
	// li r31,256
	ctx.r31.s64 = 256;
	// bgt cr6,0x832c224c
	if (cr6.gt) goto loc_832C224C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832C224C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83293ec8
	ctx.lr = 0x832C225C;
	sub_83293EC8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r28,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u8);
	// bl 0x832d30b8
	ctx.lr = 0x832C226C;
	sub_832D30B8(ctx, base);
	// subf. r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bgt 0x832c223c
	if (cr0.gt) goto loc_832C223C;
loc_832C2278:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C2284"))) PPC_WEAK_FUNC(sub_832C2284);
PPC_FUNC_IMPL(__imp__sub_832C2284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2288"))) PPC_WEAK_FUNC(sub_832C2288);
PPC_FUNC_IMPL(__imp__sub_832C2288) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c22a4
	if (!cr6.eq) goto loc_832C22A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// blr 
	return;
loc_832C22A4:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x832c2218
	sub_832C2218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C22B0"))) PPC_WEAK_FUNC(sub_832C22B0);
PPC_FUNC_IMPL(__imp__sub_832C22B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832C22B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c22e0
	if (!cr6.eq) goto loc_832C22E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832C22E0:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// ble cr6,0x832c2354
	if (!cr6.gt) goto loc_832C2354;
loc_832C22F0:
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832c2344
	if (!cr6.gt) goto loc_832C2344;
loc_832C2308:
	// cmpwi cr6,r30,256
	cr6.compare<int32_t>(ctx.r30.s32, 256, xer);
	// li r31,256
	ctx.r31.s64 = 256;
	// bgt cr6,0x832c2318
	if (cr6.gt) goto loc_832C2318;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_832C2318:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83293ec8
	ctx.lr = 0x832C2328;
	sub_83293EC8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r25,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r25.u8);
	// bl 0x832d30b8
	ctx.lr = 0x832C2338;
	sub_832D30B8(ctx, base);
	// subf. r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bgt 0x832c2308
	if (cr0.gt) goto loc_832C2308;
loc_832C2344:
	// add r24,r28,r24
	ctx.r24.u64 = ctx.r28.u64 + ctx.r24.u64;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bgt cr6,0x832c22f0
	if (cr6.gt) goto loc_832C22F0;
loc_832C2354:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C2360"))) PPC_WEAK_FUNC(sub_832C2360);
PPC_FUNC_IMPL(__imp__sub_832C2360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,22008
	ctx.r3.s64 = ctx.r11.s64 + 22008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C236C"))) PPC_WEAK_FUNC(sub_832C236C);
PPC_FUNC_IMPL(__imp__sub_832C236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2370"))) PPC_WEAK_FUNC(sub_832C2370);
PPC_FUNC_IMPL(__imp__sub_832C2370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x832c23a0
	if (cr6.lt) goto loc_832C23A0;
	// beq cr6,0x832c238c
	if (cr6.eq) goto loc_832C238C;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x832c2398
	if (!cr6.eq) goto loc_832C2398;
loc_832C238C:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c23a0
	if (!cr6.eq) goto loc_832C23A0;
loc_832C2398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832C23A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x832c23bc
	if (!cr6.lt) goto loc_832C23BC;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832c23c8
	goto loc_832C23C8;
loc_832C23BC:
	// subf r3,r10,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r10.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
loc_832C23C8:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C23E0"))) PPC_WEAK_FUNC(sub_832C23E0);
PPC_FUNC_IMPL(__imp__sub_832C23E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C23E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c2410
	if (cr6.eq) goto loc_832C2410;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C2410:
	// lbz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 12);
	// li r29,1
	ctx.r29.s64 = 1;
	// lhz r30,10(r6)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r31,r29,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, xer);
	// bge cr6,0x832c2570
	if (!cr6.lt) goto loc_832C2570;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x832c2450
	if (cr6.lt) goto loc_832C2450;
	// beq cr6,0x832c2450
	if (cr6.eq) goto loc_832C2450;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x832c2710
	if (!cr6.eq) goto loc_832C2710;
loc_832C2450:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subfc r10,r4,r11
	xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r5,r7
	ctx.r9.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832c24c0
	if (!cr6.eq) goto loc_832C24C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x832c2370
	ctx.lr = 0x832C247C;
	sub_832C2370(ctx, base);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c26fc
	if (!cr6.eq) goto loc_832C26FC;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subf r8,r30,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 & ctx.r10.u64;
	// sth r11,10(r6)
	PPC_STORE_U16(ctx.r6.u32 + 10, ctx.r11.u16);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C24C0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x832c2710
	if (!cr6.gt) goto loc_832C2710;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subf r7,r30,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r30.s64;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x832c2508
	if (cr6.lt) goto loc_832C2508;
	// beq cr6,0x832c2508
	if (cr6.eq) goto loc_832C2508;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x832c2710
	if (!cr6.eq) goto loc_832C2710;
loc_832C2508:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subfc r10,r4,r11
	xer.ca = ctx.r11.u32 >= ctx.r4.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r7,r11,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r5,r7
	ctx.r11.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832c2710
	if (!cr6.eq) goto loc_832C2710;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x832c2540
	if (cr6.eq) goto loc_832C2540;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bne cr6,0x832c2548
	if (!cr6.eq) goto loc_832C2548;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832c2544
	goto loc_832C2544;
loc_832C2540:
	// li r11,2
	ctx.r11.s64 = 2;
loc_832C2544:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_832C2548:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x832c2370
	ctx.lr = 0x832C2550;
	sub_832C2370(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// sth r30,10(r6)
	PPC_STORE_U16(ctx.r6.u32 + 10, ctx.r30.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C2570:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_832C257C:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x832c25ac
	if (cr6.lt) goto loc_832C25AC;
	// beq cr6,0x832c25a0
	if (cr6.eq) goto loc_832C25A0;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bne cr6,0x832c2710
	if (!cr6.eq) goto loc_832C2710;
loc_832C25A0:
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c2710
	if (cr6.eq) goto loc_832C2710;
loc_832C25AC:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// subfc r8,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r10,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c25f4
	if (cr6.eq) goto loc_832C25F4;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x832c2710
	if (cr6.lt) goto loc_832C2710;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// b 0x832c257c
	goto loc_832C257C;
loc_832C25F4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r31,r8,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r8.s64;
loc_832C2618:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// blt cr6,0x832c264c
	if (cr6.lt) goto loc_832C264C;
	// beq cr6,0x832c2638
	if (cr6.eq) goto loc_832C2638;
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// beq cr6,0x832c2638
	if (cr6.eq) goto loc_832C2638;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x832c2684
	goto loc_832C2684;
loc_832C2638:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832c264c
	if (!cr6.eq) goto loc_832C264C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x832c2684
	goto loc_832C2684;
loc_832C264C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x832c2668
	if (!cr6.lt) goto loc_832C2668;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x832c2674
	goto loc_832C2674;
loc_832C2668:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
loc_832C2674:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_832C2684:
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// subf r9,r7,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r7.s64;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// subfe r9,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// beq cr6,0x832c26c0
	if (cr6.eq) goto loc_832C26C0;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x832c2618
	goto loc_832C2618;
loc_832C26C0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x832c26f4
	if (cr6.eq) goto loc_832C26F4;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x832c26f8
	if (!cr6.eq) goto loc_832C26F8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// sth r7,10(r6)
	PPC_STORE_U16(ctx.r6.u32 + 10, ctx.r7.u16);
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C26F4:
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
loc_832C26F8:
	// sth r7,10(r6)
	PPC_STORE_U16(ctx.r6.u32 + 10, ctx.r7.u16);
loc_832C26FC:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// stw r3,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C2710:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C271C"))) PPC_WEAK_FUNC(sub_832C271C);
PPC_FUNC_IMPL(__imp__sub_832C271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2720"))) PPC_WEAK_FUNC(sub_832C2720);
PPC_FUNC_IMPL(__imp__sub_832C2720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832C2728;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lbz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// slw r9,r5,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// slw r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r7,r31,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r7.u8 & 0x3F));
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// addi r24,r10,16
	ctx.r24.s64 = ctx.r10.s64 + 16;
	// addi r31,r9,16
	ctx.r31.s64 = ctx.r9.s64 + 16;
	// beq cr6,0x832c27f0
	if (cr6.eq) goto loc_832C27F0;
loc_832C2788:
	// lwz r29,4(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// subf r30,r31,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r31.s64;
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bgt cr6,0x832c27c4
	if (cr6.gt) goto loc_832C27C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832C27AC;
	sub_83293EC8(ctx, base);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x832c27bc
	if (!cr6.eq) goto loc_832C27BC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x832c27e4
	goto loc_832C27E4;
loc_832C27BC:
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// b 0x832c27e4
	goto loc_832C27E4;
loc_832C27C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832C27CC;
	sub_83293EC8(ctx, base);
	// subf r31,r30,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832C27E0;
	sub_83293EC8(ctx, base);
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
loc_832C27E4:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// bne 0x832c2788
	if (!cr0.eq) goto loc_832C2788;
loc_832C27F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C27F8"))) PPC_WEAK_FUNC(sub_832C27F8);
PPC_FUNC_IMPL(__imp__sub_832C27F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c2870
	if (cr6.eq) goto loc_832C2870;
	// lhz r8,10(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x832c2838
	if (cr6.eq) goto loc_832C2838;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// beq cr6,0x832c2830
	if (cr6.eq) goto loc_832C2830;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x832c2844
	goto loc_832C2844;
loc_832C2830:
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x832c283c
	goto loc_832C283C;
loc_832C2838:
	// li r7,2
	ctx.r7.s64 = 2;
loc_832C283C:
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// li r9,1
	ctx.r9.s64 = 1;
loc_832C2844:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c2870
	if (cr6.eq) goto loc_832C2870;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subfic r5,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 & ctx.r9.u64;
	// sth r10,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r10.u16);
loc_832C2870:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r9,5
	ctx.r9.s64 = 5;
loc_832C288C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x832c28a0
	if (cr6.eq) goto loc_832C28A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x832c28a8
	goto loc_832C28A8;
loc_832C28A0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_832C28A8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// or r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bdnz 0x832c288c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C288C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C28C0"))) PPC_WEAK_FUNC(sub_832C28C0);
PPC_FUNC_IMPL(__imp__sub_832C28C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832C28C8;
	__savegprlr_27(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// ble cr6,0x832c28d8
	if (!cr6.gt) goto loc_832C28D8;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_832C28D8:
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// slw r31,r11,r9
	ctx.r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x832c2914
	if (cr6.eq) goto loc_832C2914;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// beq cr6,0x832c2918
	if (cr6.eq) goto loc_832C2918;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x832c2928
	goto loc_832C2928;
loc_832C2914:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_832C2918:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_832C2928:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832c2948
	if (!cr6.eq) goto loc_832C2948;
	// lbz r11,13(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r3,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832C2948:
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// slw r11,r10,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r7,r6,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r6.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq 0x832c2a30
	if (cr0.eq) goto loc_832C2A30;
loc_832C2978:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ctx.r9.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x832c29bc
	if (cr6.eq) goto loc_832C29BC;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// beq cr6,0x832c29c0
	if (cr6.eq) goto loc_832C29C0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x832c29d0
	goto loc_832C29D0;
loc_832C29BC:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_832C29C0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_832C29D0:
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832c2a30
	if (cr6.eq) goto loc_832C2A30;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r28,r7,r6
	ctx.r28.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// slw r11,r10,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r27,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r27.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x832c2a14
	if (!cr6.eq) goto loc_832C2A14;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// b 0x832c2a28
	goto loc_832C2A28;
loc_832C2A14:
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_832C2A28:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x832c2978
	if (!cr0.eq) goto loc_832C2978;
loc_832C2A30:
	// subf r11,r30,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r30.s64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// srawi r11,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C2A48"))) PPC_WEAK_FUNC(sub_832C2A48);
PPC_FUNC_IMPL(__imp__sub_832C2A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// slw r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// li r3,0
	ctx.r3.s64 = 0;
loc_832C2A60:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r31,r3,r8
	ctx.r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r9,r9,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r9.s64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sraw r9,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
loc_832C2A8C:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,6
	cr6.compare<uint32_t>(ctx.r8.u32, 6, xer);
	// bne cr6,0x832c2abc
	if (!cr6.eq) goto loc_832C2ABC;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// bne 0x832c2abc
	if (!cr0.eq) goto loc_832C2ABC;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_832C2ABC:
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x832c2ae4
	if (!cr0.gt) goto loc_832C2AE4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 & ctx.r8.u64;
	// b 0x832c2a8c
	goto loc_832C2A8C;
loc_832C2AE4:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne 0x832c2a60
	if (!cr0.eq) goto loc_832C2A60;
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
loc_832C2AF8:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832c2b34
	if (!cr6.eq) goto loc_832C2B34;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subfic r4,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x832c2af8
	if (!cr6.eq) goto loc_832C2AF8;
loc_832C2B34:
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C2B40"))) PPC_WEAK_FUNC(sub_832C2B40);
PPC_FUNC_IMPL(__imp__sub_832C2B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C2B48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// slw r28,r11,r3
	ctx.r28.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r3.u8 & 0x3F));
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x832a1cb0
	ctx.lr = 0x832C2B74;
	sub_832A1CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c2b98
	if (cr6.eq) goto loc_832C2B98;
	// bl 0x832be7b0
	ctx.lr = 0x832C2B84;
	sub_832BE7B0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832c2ba4
	if (cr6.gt) goto loc_832C2BA4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C2B98;
	sub_832A1D18(ctx, base);
loc_832C2B98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832C2BA4:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r29,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r29.u8);
	// sth r10,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r10.u16);
	// sth r10,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r10.u16);
	// stb r10,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r10.u8);
loc_832C2BC0:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stwu r28,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bne 0x832c2bc0
	if (!cr0.eq) goto loc_832C2BC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C2BE4"))) PPC_WEAK_FUNC(sub_832C2BE4);
PPC_FUNC_IMPL(__imp__sub_832C2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2BE8"))) PPC_WEAK_FUNC(sub_832C2BE8);
PPC_FUNC_IMPL(__imp__sub_832C2BE8) {
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
	ctx.lr = 0x832C2BF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// blt cr6,0x832c2c40
	if (cr6.lt) goto loc_832C2C40;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
loc_832C2C24:
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwzu r7,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x832c2c24
	if (cr6.lt) goto loc_832C2C24;
loc_832C2C40:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x832c2c54
	if (!cr6.lt) goto loc_832C2C54;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832C2C54:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x832be898
	ctx.lr = 0x832C2C64;
	sub_832BE898(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c23e0
	ctx.lr = 0x832C2C74;
	sub_832C23E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832c2ca8
	if (cr6.gt) goto loc_832C2CA8;
loc_832C2C7C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// blt cr6,0x832c2d8c
	if (cr6.lt) goto loc_832C2D8C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832be908
	ctx.lr = 0x832C2C90;
	sub_832BE908(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c23e0
	ctx.lr = 0x832C2CA0;
	sub_832C23E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832c2c7c
	if (!cr6.gt) goto loc_832C2C7C;
loc_832C2CA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be8d0
	ctx.lr = 0x832C2CB0;
	sub_832BE8D0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c2720
	ctx.lr = 0x832C2CC4;
	sub_832C2720(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be898
	ctx.lr = 0x832C2CCC;
	sub_832BE898(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c2d54
	if (cr6.eq) goto loc_832C2D54;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r8,3
	ctx.r8.s64 = 3;
loc_832C2CE8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x832c2d20
	if (cr6.eq) goto loc_832C2D20;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x832c2d34
	if (!cr6.eq) goto loc_832C2D34;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bne 0x832c2d34
	if (!cr0.eq) goto loc_832C2D34;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x832c2d34
	goto loc_832C2D34;
loc_832C2D20:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bne 0x832c2d34
	if (!cr0.eq) goto loc_832C2D34;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_832C2D34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfic r4,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bdnz 0x832c2ce8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832C2CE8;
loc_832C2D54:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c27f8
	ctx.lr = 0x832C2D60;
	sub_832C27F8(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832c2d74
	if (cr6.eq) goto loc_832C2D74;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bea10
	ctx.lr = 0x832C2D74;
	sub_832BEA10(ctx, base);
loc_832C2D74:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be8d0
	ctx.lr = 0x832C2D7C;
	sub_832BE8D0(ctx, base);
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r3,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832C2D8C:
	// bl 0x832be8d0
	ctx.lr = 0x832C2D90;
	sub_832BE8D0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C2D9C"))) PPC_WEAK_FUNC(sub_832C2D9C);
PPC_FUNC_IMPL(__imp__sub_832C2D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2DA0"))) PPC_WEAK_FUNC(sub_832C2DA0);
PPC_FUNC_IMPL(__imp__sub_832C2DA0) {
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
	// bl 0x832be898
	ctx.lr = 0x832C2DC0;
	sub_832BE898(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c27f8
	ctx.lr = 0x832C2DCC;
	sub_832C27F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c2de4
	if (cr6.eq) goto loc_832C2DE4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bea10
	ctx.lr = 0x832C2DE4;
	sub_832BEA10(ctx, base);
loc_832C2DE4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be8d0
	ctx.lr = 0x832C2DEC;
	sub_832BE8D0(ctx, base);
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

__attribute__((alias("__imp__sub_832C2E08"))) PPC_WEAK_FUNC(sub_832C2E08);
PPC_FUNC_IMPL(__imp__sub_832C2E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C2E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832be898
	ctx.lr = 0x832C2E28;
	sub_832BE898(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c28c0
	ctx.lr = 0x832C2E38;
	sub_832C28C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be8d0
	ctx.lr = 0x832C2E44;
	sub_832BE8D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C2E50"))) PPC_WEAK_FUNC(sub_832C2E50);
PPC_FUNC_IMPL(__imp__sub_832C2E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832C2E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832be898
	ctx.lr = 0x832C2E70;
	sub_832BE898(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c2a48
	ctx.lr = 0x832C2E80;
	sub_832C2A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c2e90
	if (cr6.eq) goto loc_832C2E90;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bea10
	ctx.lr = 0x832C2E90;
	sub_832BEA10(ctx, base);
loc_832C2E90:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be8d0
	ctx.lr = 0x832C2E98;
	sub_832BE8D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C2EA0"))) PPC_WEAK_FUNC(sub_832C2EA0);
PPC_FUNC_IMPL(__imp__sub_832C2EA0) {
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
	// bl 0x832be898
	ctx.lr = 0x832C2EBC;
	sub_832BE898(ctx, base);
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// bl 0x832bea10
	ctx.lr = 0x832C2ED0;
	sub_832BEA10(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be8d0
	ctx.lr = 0x832C2ED8;
	sub_832BE8D0(ctx, base);
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

__attribute__((alias("__imp__sub_832C2EEC"))) PPC_WEAK_FUNC(sub_832C2EEC);
PPC_FUNC_IMPL(__imp__sub_832C2EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2EF0"))) PPC_WEAK_FUNC(sub_832C2EF0);
PPC_FUNC_IMPL(__imp__sub_832C2EF0) {
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
	// bl 0x832be898
	ctx.lr = 0x832C2F0C;
	sub_832BE898(ctx, base);
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,3
	ctx.r10.u64 = ctx.r11.u64 | 3;
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// bl 0x832bea10
	ctx.lr = 0x832C2F20;
	sub_832BEA10(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be8d0
	ctx.lr = 0x832C2F28;
	sub_832BE8D0(ctx, base);
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

__attribute__((alias("__imp__sub_832C2F3C"))) PPC_WEAK_FUNC(sub_832C2F3C);
PPC_FUNC_IMPL(__imp__sub_832C2F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2F40"))) PPC_WEAK_FUNC(sub_832C2F40);
PPC_FUNC_IMPL(__imp__sub_832C2F40) {
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
	// bl 0x832be898
	ctx.lr = 0x832C2F5C;
	sub_832BE898(ctx, base);
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832c2f88
	if (!cr6.eq) goto loc_832C2F88;
loc_832C2F6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be908
	ctx.lr = 0x832C2F78;
	sub_832BE908(ctx, base);
	// lbz r11,13(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c2f6c
	if (cr6.eq) goto loc_832C2F6C;
loc_832C2F88:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be8d0
	ctx.lr = 0x832C2F90;
	sub_832BE8D0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832be850
	ctx.lr = 0x832C2F98;
	sub_832BE850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832C2FA0;
	sub_832A1D18(ctx, base);
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

__attribute__((alias("__imp__sub_832C2FB4"))) PPC_WEAK_FUNC(sub_832C2FB4);
PPC_FUNC_IMPL(__imp__sub_832C2FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832C2FB8"))) PPC_WEAK_FUNC(sub_832C2FB8);
PPC_FUNC_IMPL(__imp__sub_832C2FB8) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// beq cr6,0x832c3000
	if (cr6.eq) goto loc_832C3000;
	// bl 0x832d51a0
	ctx.lr = 0x832C2FFC;
	sub_832D51A0(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_832C3000:
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

__attribute__((alias("__imp__sub_832C3018"))) PPC_WEAK_FUNC(sub_832C3018);
PPC_FUNC_IMPL(__imp__sub_832C3018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,-29536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29536);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c303c
	if (cr6.eq) goto loc_832C303C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_832C303C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C3048"))) PPC_WEAK_FUNC(sub_832C3048);
PPC_FUNC_IMPL(__imp__sub_832C3048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r11,r11,-29536
	ctx.r11.s64 = ctx.r11.s64 + -29536;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832c3078
	if (cr6.eq) goto loc_832C3078;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_832C3078:
	// li r3,120
	ctx.r3.s64 = 120;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832C3080"))) PPC_WEAK_FUNC(sub_832C3080);
PPC_FUNC_IMPL(__imp__sub_832C3080) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r10,-18820
	ctx.r3.s64 = ctx.r10.s64 + -18820;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x832d5248
	ctx.lr = 0x832C30B0;
	sub_832D5248(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x832c3164
	if (cr0.eq) goto loc_832C3164;
	// li r4,2815
	ctx.r4.s64 = 2815;
	// bl 0x832d51d8
	ctx.lr = 0x832C30C4;
	sub_832D51D8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r4,2816
	ctx.r4.s64 = 2816;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d51d8
	ctx.lr = 0x832C30D4;
	sub_832D51D8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r4,2827
	ctx.r4.s64 = 2827;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d51d8
	ctx.lr = 0x832C30E4;
	sub_832D51D8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r4,2832
	ctx.r4.s64 = 2832;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d51d8
	ctx.lr = 0x832C30F4;
	sub_832D51D8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// li r4,773
	ctx.r4.s64 = 773;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d51d8
	ctx.lr = 0x832C3104;
	sub_832D51D8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r4,779
	ctx.r4.s64 = 779;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x832d51d8
	ctx.lr = 0x832C3114;
	sub_832D51D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c315c
	if (cr6.eq) goto loc_832C315C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c315c
	if (cr6.eq) goto loc_832C315C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c315c
	if (cr6.eq) goto loc_832C315C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c315c
	if (cr6.eq) goto loc_832C315C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832c315c
	if (cr6.eq) goto loc_832C315C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832c3164
	if (!cr6.eq) goto loc_832C3164;
loc_832C315C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c2fb8
	ctx.lr = 0x832C3164;
	sub_832C2FB8(ctx, base);
loc_832C3164:
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

__attribute__((alias("__imp__sub_832C3178"))) PPC_WEAK_FUNC(sub_832C3178);
PPC_FUNC_IMPL(__imp__sub_832C3178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C3180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// li r29,84
	ctx.r29.s64 = 84;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
loc_832C319C:
	// lwz r11,-29372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29372);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x83d7554c
	ctx.lr = 0x832C31A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-29372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29372);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832c31ec
	if (cr6.eq) goto loc_832C31EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r31,-12
	ctx.r6.s64 = ctx.r31.s64 + -12;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x832c6978
	ctx.lr = 0x832C31D0;
	sub_832C6978(ctx, base);
	// lwz r11,-29372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29372);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x83d7553c
	ctx.lr = 0x832C31DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-29372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29372);
	// bl 0x832c44a0
	ctx.lr = 0x832C31E8;
	sub_832C44A0(ctx, base);
	// b 0x832c31fc
	goto loc_832C31FC;
loc_832C31EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// stw r10,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r10.u32);
	// bl 0x83d7553c
	ctx.lr = 0x832C31FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_832C31FC:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// blt cr6,0x832c319c
	if (cr6.lt) goto loc_832C319C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C3218"))) PPC_WEAK_FUNC(sub_832C3218);
PPC_FUNC_IMPL(__imp__sub_832C3218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832C3220;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31738
	ctx.r11.s64 = -2079981568;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,23680
	ctx.r11.s64 = ctx.r11.s64 + 23680;
	// li r29,84
	ctx.r29.s64 = 84;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
loc_832C323C:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832c328c
	if (cr6.eq) goto loc_832C328C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-29372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29372);
	// bl 0x832c4400
	ctx.lr = 0x832C3254;
	sub_832C4400(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832c328c
	if (cr0.lt) goto loc_832C328C;
	// lwz r11,-29372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29372);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x83d7554c
	ctx.lr = 0x832C3268;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-29372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29372);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x832c6860
	ctx.lr = 0x832C3280;
	sub_832C6860(ctx, base);
	// lwz r11,-29372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -29372);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x83d7553c
	ctx.lr = 0x832C328C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_832C328C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r29,100
	cr6.compare<uint32_t>(ctx.r29.u32, 100, xer);
	// blt cr6,0x832c323c
	if (cr6.lt) goto loc_832C323C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832C32A8"))) PPC_WEAK_FUNC(sub_832C32A8);
PPC_FUNC_IMPL(__imp__sub_832C32A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-18820
	ctx.r3.s64 = ctx.r10.s64 + -18820;
	// bl 0x83d75e1c
	ctx.lr = 0x832C32DC;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x832c32f4
	if (cr0.lt) goto loc_832C32F4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83d75e0c
	ctx.lr = 0x832C32F4;
	__imp__XexGetProcedureAddress(ctx, base);
loc_832C32F4:
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

__attribute__((alias("__imp__sub_832C330C"))) PPC_WEAK_FUNC(sub_832C330C);
PPC_FUNC_IMPL(__imp__sub_832C330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

